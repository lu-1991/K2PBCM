/*
 * $Id: bcm56142_a0_bmd_port_mode_set.c,v 1.13 Broadcom SDK $
 * 
 * $Copyright: Copyright 2013 Broadcom Corporation.
 * This program is the proprietary software of Broadcom Corporation
 * and/or its licensors, and may only be used, duplicated, modified
 * or distributed pursuant to the terms and conditions of a separate,
 * written license agreement executed between you and Broadcom
 * (an "Authorized License").  Except as set forth in an Authorized
 * License, Broadcom grants no license (express or implied), right
 * to use, or waiver of any kind with respect to the Software, and
 * Broadcom expressly reserves all rights in and to the Software
 * and all intellectual property rights therein.  IF YOU HAVE
 * NO AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE
 * IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE
 * ALL USE OF THE SOFTWARE.  
 *  
 * Except as expressly set forth in the Authorized License,
 *  
 * 1.     This program, including its structure, sequence and organization,
 * constitutes the valuable trade secrets of Broadcom, and you shall use
 * all reasonable efforts to protect the confidentiality thereof,
 * and to use this information only in connection with your use of
 * Broadcom integrated circuit products.
 *  
 * 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS
 * PROVIDED "AS IS" AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES,
 * REPRESENTATIONS OR WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY,
 * OR OTHERWISE, WITH RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY
 * DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY,
 * NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES,
 * ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR
 * CORRESPONDENCE TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING
 * OUT OF USE OR PERFORMANCE OF THE SOFTWARE.
 * 
 * 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL
 * BROADCOM OR ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL,
 * INCIDENTAL, SPECIAL, INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER
 * ARISING OUT OF OR IN ANY WAY RELATING TO YOUR USE OF OR INABILITY
 * TO USE THE SOFTWARE EVEN IF BROADCOM HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN EXCESS OF
 * THE AMOUNT ACTUALLY PAID FOR THE SOFTWARE ITSELF OR USD 1.00,
 * WHICHEVER IS GREATER. THESE LIMITATIONS SHALL APPLY NOTWITHSTANDING
 * ANY FAILURE OF ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.$
 */
#include <bmd_config.h>
#if CDK_CONFIG_INCLUDE_BCM56142_A0 == 1

#include <bmd/bmd.h>
#include <bmd/bmd_device.h>

#include <bmdi/bmd_port_mode.h>

#include <cdk/arch/xgs_chip.h>
#include <cdk/cdk_debug.h>
#include <cdk/chip/bcm56142_a0_defs.h>

#include "bcm56142_a0_bmd.h"
#include "bcm56142_a0_internal.h"

#define DRAIN_WAIT_MSEC                 500
#define NUM_COS                         8

/* Supported HiGig encapsulations */
#define HG_FLAGS  (BMD_PORT_MODE_F_HIGIG | BMD_PORT_MODE_F_HIGIG2 | BMD_PORT_MODE_F_HGLITE)
int bcm56146_a0_bmd_port_mode_set(int unit, int port,
                                  bmd_port_mode_t mode, uint32_t flags);

int 
bcm56142_a0_bmd_port_mode_set(int unit, int port, 
                              bmd_port_mode_t mode, uint32_t flags)
{
    int ioerr = 0;
    int rv = CDK_E_NONE;
    int mac_lb = (flags & BMD_PORT_MODE_F_MAC_LOOPBACK) ? 1 : 0;
    int phy_lb = (flags & BMD_PORT_MODE_F_PHY_LOOPBACK) ? 1 : 0;
    int duplex = 1;
    int speed = 1000;
    int hgdual_port = 0;
    int sp_sel = COMMAND_CONFIG_SPEED_1000;
    int cnt,i,tot_cnt_cos_cell;
    uint32_t pbmp;
    EPC_LINK_BMAP_64r_t epc_link;
    FLUSH_CONTROLr_t flush_ctrl;
    COSLCCOUNTr_t coslccount;
    COMMAND_CONFIGr_t command_cfg;
    EHG_RX_CONTROLr_t ehg_rx_ctrl;
    XQPORT_MODE_REGr_t xport_mode;
    if(CDK_XGS_FLAGS(unit) & CHIP_FLAG_FE_ONLY){
        rv = bcm56146_a0_bmd_port_mode_set(unit, port, mode, flags);
        return rv;
    }
    if (CDK_XGS_FLAGS(unit) & CHIP_FLAG_HD25_HD127) {
        CMIC_MISC_STATUSr_t misc_stat;
        ioerr += READ_CMIC_MISC_STATUSr(unit, &misc_stat);
        if (CMIC_MISC_STATUSr_DUAL_XGXS_MODE_SELf_GET(misc_stat) == 0) {
            if ((port == 26) || (port == 27)) {
                rv = bcm56146_a0_bmd_port_mode_set(unit, port, mode, flags);
                return rv;
            }
        } else {
            if ((port == 28) || (port == 29)) {
                rv = bcm56146_a0_bmd_port_mode_set(unit, port, mode, flags);
                return rv;
            }
        }
    }
    BMD_CHECK_UNIT(unit);
    BMD_CHECK_PORT(unit, port);

#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1
    
    if((CDK_XGS_FLAGS(unit) & CHIP_FLAG_HD127) && port > 27) {
        hgdual_port = 1;
    }
    if((CDK_XGS_FLAGS(unit) & CHIP_FLAG_HD25_HD127) && port > 25) {
        hgdual_port = 1;
    }

    if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) {
        switch (mode) {
        case bmdPortMode10000fd:
            if(CDK_XGS_FLAGS(unit) & CHIP_FLAG_HD25_HD127) {
                return CDK_E_PARAM;
            }   
            if (flags & HG_FLAGS) {
                return CDK_E_PARAM;
            } else {
                BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
                speed = 10000;
                break;
            }
            break;
        case bmdPortMode2500fd:
            if (flags & HG_FLAGS || hgdual_port) {
                return CDK_E_PARAM;
            } else {
                BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
                speed = 2500;
                break;
            }
        case bmdPortModeAuto:
        case bmdPortModeDisabled:
            if (hgdual_port) {
                speed = 10000;
                if(CDK_XGS_FLAGS(unit) & CHIP_FLAG_HD25_HD127) {
                    speed = 12000;
                }
            } else if (flags & HG_FLAGS) {
                speed = 13000;
            } else {
                speed = 10000;
            }
            break;
#if BMD_CONFIG_INCLUDE_HIGIG == 1                
        case bmdPortMode12000fd:
            if (flags & HG_FLAGS) {
                speed = 12000;
            } 
            break;
        case bmdPortMode13000fd:
            if (hgdual_port == 1) {
                break;
            } else if (flags & HG_FLAGS) {
                speed = 13000;
            }
            break;
#endif            
        default:
            break;
        }
    }
#endif
    /* If no XAUI mode was selected, check SerDes modes */
    if (speed == 1000) {
        switch (mode) {
        case bmdPortMode10hd:
        case bmdPortMode100hd:
        case bmdPortMode1000hd:
            duplex = 0;
            break;
        default:
            break;
        }
        switch (mode) {
        case bmdPortMode10fd:
        case bmdPortMode10hd:
            if (flags & HG_FLAGS || hgdual_port) {
                return CDK_E_PARAM;
            } else if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_HG) {
                BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
            }
            speed = 10;
            sp_sel = COMMAND_CONFIG_SPEED_10;
            break;
        case bmdPortMode100fd:
        case bmdPortMode100hd:
            if (flags & HG_FLAGS || hgdual_port) {
                return CDK_E_PARAM;
            } else if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_HG) {
                return CDK_E_PARAM;
            }
            speed = 100;
            sp_sel = COMMAND_CONFIG_SPEED_100;
            break;
        case bmdPortMode2500fd:
            /* 2.5 Gbps supported only on uplink ports */
            if (hgdual_port) {
                speed = 2500;
                sp_sel = COMMAND_CONFIG_SPEED_2500;
                break;
            } else if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_GE | BMD_PORT_FE)) {
                return CDK_E_PARAM;
            }
            speed = 2500;
            sp_sel = COMMAND_CONFIG_SPEED_2500;
            break;
        case bmdPortMode1000fd:
        case bmdPortMode1000hd:
            if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_FE) {
                return CDK_E_PARAM;
            } 
            if (flags & HG_FLAGS || hgdual_port) {
                return CDK_E_PARAM;
            } else if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_HG) {
                BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
            }
            break;
        case bmdPortModeAuto:
            if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_FE) {
                /* Avoid configuring FE ports to 1000 Mbps */
                speed = 100;
                sp_sel = COMMAND_CONFIG_SPEED_100;
            }
            break;
        case bmdPortModeDisabled:
            break;
        default:
            return CDK_E_PARAM;
        }
    }

    if ((flags & BMD_PORT_MODE_F_INTERNAL) == 0) {
        /* Stop CPU and MMU from scheduling packets to the port */
        BMD_PORT_STATUS_CLR(unit, port, BMD_PST_LINK_UP);
        ioerr += READ_EPC_LINK_BMAP_64r(unit, &epc_link);
        pbmp = EPC_LINK_BMAP_64r_PORT_BITMAPf_GET(epc_link);
        EPC_LINK_BMAP_64r_PORT_BITMAPf_SET(epc_link, pbmp & ~(1 << port));
        ioerr += WRITE_EPC_LINK_BMAP_64r(unit, epc_link);

        /* Drain all packets from the TX pipeline */
        ioerr += READ_FLUSH_CONTROLr(unit, port, &flush_ctrl);
        FLUSH_CONTROLr_FLUSHf_SET(flush_ctrl, 1);
        ioerr += WRITE_FLUSH_CONTROLr(unit, port, flush_ctrl);
        cnt = DRAIN_WAIT_MSEC / 10;
        while (--cnt >= 0) {
            tot_cnt_cos_cell = 0;
            for (i = 0; i < NUM_COS; i++) {
                ioerr += READ_COSLCCOUNTr(unit, port, i, &coslccount);
                if (COSLCCOUNTr_GET(coslccount) != 0) tot_cnt_cos_cell ++;
            }
            if (tot_cnt_cos_cell == 0) {
                break;
            }
            BMD_SYS_USLEEP(10000);
        }
        if (cnt < 0) {
            CDK_WARN(("bcm56142_a0_bmd_port_mode_set[%d]: "
                      "drain failed on port %d\n", unit, port));
        }
        FLUSH_CONTROLr_FLUSHf_SET(flush_ctrl, 0);
        ioerr += WRITE_FLUSH_CONTROLr(unit, port, flush_ctrl);

#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1
        if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) {
            bmd_port_mode_t cur_mode;
            uint32_t cur_flags;
            /*
             * If HiGig/Ethernet encapsulation changes, we need 
             * to reinitialize from scratch.
             */
            rv = bcm56142_a0_bmd_port_mode_get(unit, port, 
                                               &cur_mode, &cur_flags);
            if ((CDK_SUCCESS(rv) && 
                ((flags ^ cur_flags) & HG_FLAGS)) && (flags !=0)){
                if (flags & HG_FLAGS) {
                    BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_HG;
                } else {
                    BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
                }
#if 0
                rv = bcm56142_a0_xport_reset(unit, port);
#endif
                if (CDK_SUCCESS(rv)) {
                    rv = bcm56142_a0_xport_init(unit, port);
                }
            }
        }
#endif
    }

    /* Update PHYs before MAC */
    if (CDK_SUCCESS(rv)) {
        rv = bmd_port_mode_to_phy(unit, port, mode, flags, speed, duplex);
    }
    /* Let PHYs know that we disable the MAC */
    if (CDK_SUCCESS(rv)) {
        rv = bmd_phy_notify_mac_enable(unit, port, 0);
    }
    /* Reset the MAC */
    ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
    COMMAND_CONFIGr_SW_RESETf_SET(command_cfg, 1);
    ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

    /* Disable MACs (Rx only) */
#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1
    if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) {
        MAC_CTRLr_t mac_ctrl;

        ioerr += READ_MAC_CTRLr(unit, port, &mac_ctrl);
        MAC_CTRLr_RXENf_SET(mac_ctrl, 0);
        ioerr += WRITE_MAC_CTRLr(unit, port, mac_ctrl);
    }
#endif

    ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
    COMMAND_CONFIGr_RX_ENAf_SET(command_cfg, 0);
    ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

    if ((flags & HG_FLAGS) && 
        (BMD_PORT_PROPERTIES(unit, port) == BMD_PORT_GE)) {
            ioerr += READ_EHG_RX_CONTROLr(unit, port, &ehg_rx_ctrl);
            if ( flags & HG_FLAGS) {
                EHG_RX_CONTROLr_MODEf_SET(ehg_rx_ctrl, 2);
            } else {
                EHG_RX_CONTROLr_MODEf_SET(ehg_rx_ctrl, 0);
            }
            WRITE_EHG_RX_CONTROLr(unit, port, ehg_rx_ctrl);
    }
            
    
    if (mode == bmdPortModeDisabled) {
        BMD_PORT_STATUS_SET(unit, port, BMD_PST_FORCE_LINK);
    } else {
        if ((BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) ||
            ((BMD_PORT_PROPERTIES(unit, port) == BMD_PORT_GE) && (flags & BMD_PORT_MODE_F_HGLITE))){
#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1
            int hg, hg2;
            MAC_CTRLr_t mac_ctrl;
            MAC_TXCTRLr_t txctrl;
            MAC_RXCTRLr_t rxctrl;
            PORT_TABm_t port_tab;
            EGR_PORTr_t egr_port;
            XPORT_CONFIGr_t xport_cfg;
            ICONTROL_OPCODE_BITMAPr_t opcode_bmap;
            EGR_VLAN_CONTROL_3r_t vctrl3;

            /* Set encapsulation */
            hg = hg2 = 0;

            if (flags & HG_FLAGS) {
                hg = 1;
                if ((flags & BMD_PORT_MODE_F_HIGIG2) || (flags & BMD_PORT_MODE_F_HGLITE)) {
                    hg2 = 1;
                }
            }

            /* Configure higig2 */
            if (hgdual_port) {
                if ((flags & BMD_PORT_MODE_F_HIGIG2) || (flags & BMD_PORT_MODE_F_HGLITE)) {
                    BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_HG;
                    hg2 = 1;
                } else {
                    hg2 = 0;
                }
            }

            ioerr += READ_XPORT_CONFIGr(unit, port, &xport_cfg);
            ioerr += READ_MAC_TXCTRLr(unit, port, &txctrl);
            ioerr += READ_MAC_RXCTRLr(unit, port, &rxctrl);
            ioerr += READ_PORT_TABm(unit, port, &port_tab);
            ioerr += READ_EGR_PORTr(unit, port, &egr_port);
            /* Set IEEE vs HiGig */        
            XPORT_CONFIGr_HIGIG_MODEf_SET(xport_cfg, hg);
            MAC_TXCTRLr_HDRMODEf_SET(txctrl, hg);
            MAC_RXCTRLr_HDRMODEf_SET(rxctrl, hg);
            PORT_TABm_PORT_TYPEf_SET(port_tab, hg);
            EGR_PORTr_PORT_TYPEf_SET(egr_port, hg);
            ICONTROL_OPCODE_BITMAPr_SET(opcode_bmap, hg ? 0x1 : 0x0);
            /* Set HiGig vs. HiGig2 */
            XPORT_CONFIGr_HIGIG2_MODEf_SET(xport_cfg, hg2);
            MAC_TXCTRLr_HIGIG2MODEf_SET(txctrl, hg2);
            MAC_RXCTRLr_HIGIG2MODEf_SET(rxctrl, hg2);
            PORT_TABm_HIGIG2f_SET(port_tab, hg2);
            EGR_PORTr_HIGIG2f_SET(egr_port, hg2);
            ioerr += WRITE_XPORT_CONFIGr(unit, port, xport_cfg);
            ioerr += WRITE_MAC_TXCTRLr(unit, port, txctrl);
            ioerr += WRITE_MAC_RXCTRLr(unit, port, rxctrl);
            ioerr += WRITE_PORT_TABm(unit, port, port_tab);
            ioerr += WRITE_EGR_PORTr(unit, port, egr_port);
            ioerr += WRITE_ICONTROL_OPCODE_BITMAPr(unit, port, opcode_bmap);

            /* HiGig ports require special egress tag action */
            ioerr += READ_EGR_VLAN_CONTROL_3r(unit, port, &vctrl3);
            EGR_VLAN_CONTROL_3r_TAG_ACTION_PROFILE_PTRf_SET(vctrl3, hg ? 1 : 0);
            ioerr += WRITE_EGR_VLAN_CONTROL_3r(unit, port, vctrl3);

            ioerr += READ_XQPORT_MODE_REGr(unit, port, &xport_mode);
            ioerr += READ_MAC_CTRLr(unit, port, &mac_ctrl);

            if (speed >= 10000) {
                /* Set to 10G mode */
                XQPORT_MODE_REGr_XQPORT_MODE_BITSf_SET(xport_mode, 2);
                MAC_CTRLr_RXENf_SET(mac_ctrl, 1);
            } else {
                XQPORT_MODE_REGr_XQPORT_MODE_BITSf_SET(xport_mode, 1);
                MAC_CTRLr_RXENf_SET(mac_ctrl, 0);
            }
            MAC_CTRLr_RXENf_SET(mac_ctrl, 1);
            /* Configure loopback mode */
            MAC_CTRLr_LCLLOOPf_SET(mac_ctrl, mac_lb);
            ioerr += WRITE_MAC_CTRLr(unit, port, mac_ctrl);
            ioerr += WRITE_XQPORT_MODE_REGr(unit, port, xport_mode);

            /* Bring the MAC out of reset */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_SW_RESETf_SET(command_cfg, 0);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);
#endif
        }
        if (speed < 10000) {
            /* Set speed and duplex */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_ETH_SPEEDf_SET(command_cfg, sp_sel);
            COMMAND_CONFIGr_HD_ENAf_SET(command_cfg, !duplex);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

            /* Set MAC loopback mode */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_LOOP_ENAf_SET(command_cfg, mac_lb);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

            /* Enable MAC */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_RX_ENAf_SET(command_cfg, 1);
            COMMAND_CONFIGr_TX_ENAf_SET(command_cfg, 1);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

            /* Bring the MAC out of reset */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_SW_RESETf_SET(command_cfg, 0);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);
        
            if (hgdual_port) {
                ioerr += READ_XQPORT_MODE_REGr(unit, port, &xport_mode);
                XQPORT_MODE_REGr_XQPORT_MODE_BITSf_SET(xport_mode, 1);
                ioerr += WRITE_XQPORT_MODE_REGr(unit, port, xport_mode);
            }
        }

        if (mac_lb || phy_lb) {
            BMD_PORT_STATUS_SET(unit, port, BMD_PST_LINK_UP | BMD_PST_FORCE_LINK);
        } else {
            BMD_PORT_STATUS_CLR(unit, port, BMD_PST_FORCE_LINK);
        }

        /* Let PHYs know that the MAC has been enabled */
        if (CDK_SUCCESS(rv)) {
            rv = bmd_phy_notify_mac_enable(unit, port, 1);
        }
    }

    return ioerr ? CDK_E_IO : rv;
}

int
bcm56146_a0_bmd_port_mode_set(int unit, int port,
                              bmd_port_mode_t mode, uint32_t flags)
{
    int ioerr = 0;
    int rv = CDK_E_NONE;
    int mac_lb = (flags & BMD_PORT_MODE_F_MAC_LOOPBACK) ? 1 : 0;
    int phy_lb = (flags & BMD_PORT_MODE_F_PHY_LOOPBACK) ? 1 : 0;
    int duplex = 1;
    int speed = 1000;
    int hglite_port = 0;
    int sp_sel = COMMAND_CONFIG_SPEED_1000;
    int cnt,i,tot_cnt_cos_cell;
    uint32_t pbmp;
    EPC_LINK_BMAP_64r_t epc_link;
    FLUSH_CONTROLr_t flush_ctrl;
    COSLCCOUNTr_t coslccount;
    COMMAND_CONFIGr_t command_cfg;
    EHG_RX_CONTROLr_t ehg_rx_ctrl;
    XQPORT_MODE_REGr_t xport_mode;

    BMD_CHECK_UNIT(unit);
    BMD_CHECK_PORT(unit, port);

#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1

    if (port > 25 && port < 30) {
        if (CDK_XGS_FLAGS(unit) & CHIP_FLAG_HD25) {
            hglite_port = 1;
        }
        if (CDK_XGS_FLAGS(unit) & CHIP_FLAG_HD25_HD127) {
            hglite_port = 1;
        }
    }

    if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) {
        switch (mode) {
        case bmdPortMode10000fd:
            if (hglite_port == 1) {
                break;
            } else if (flags & HG_FLAGS) {
                return CDK_E_PARAM;
            } else {
                BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
                speed = 10000;
                break;
            }
        case bmdPortMode2500fd:
            if (hglite_port == 1) {
                speed = 2500;
                sp_sel = COMMAND_CONFIG_SPEED_2500;
                break;
            } else if (flags & HG_FLAGS) {
                return CDK_E_PARAM;
            } else {
                BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
                speed = 2500;
                break;
            }
        case bmdPortModeAuto:
        case bmdPortModeDisabled:
            if (hglite_port) {
                speed = 2500;
                sp_sel = COMMAND_CONFIG_SPEED_2500;
            } else if (flags & HG_FLAGS) {
                speed = 13000;
            } else {
                speed = 10000;
            }
            break;
#if BMD_CONFIG_INCLUDE_HIGIG == 1
        case bmdPortMode12000fd:
            if (hglite_port == 1) {
                break;
            } else if (flags & HG_FLAGS) {
                speed = 12000;
            }
            break;
        case bmdPortMode13000fd:
            if (hglite_port == 1) {
                break;
            } else if (flags & HG_FLAGS) {
                speed = 13000;
            }
            break;
#endif
        default:
            break;
        }
    }
#endif

    /* If no XAUI mode was selected, check SerDes modes */
    if (speed == 1000) {
        switch (mode) {
        case bmdPortMode10hd:
        case bmdPortMode100hd:
        case bmdPortMode1000hd:
            duplex = 0;
            break;
        default:
            break;
        }
        switch (mode) {
        case bmdPortMode10fd:
        case bmdPortMode10hd:
            if (flags & HG_FLAGS || hglite_port) {
                return CDK_E_PARAM;
            } else if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_HG) {
                BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
            }
            speed = 10;
            sp_sel = COMMAND_CONFIG_SPEED_10;
            break;
        case bmdPortMode100fd:
        case bmdPortMode100hd:
            if (flags & HG_FLAGS || hglite_port) {
                return CDK_E_PARAM;
            } else if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_HG) {
                return CDK_E_PARAM;
            }
            speed = 100;
            sp_sel = COMMAND_CONFIG_SPEED_100;
            break;
        case bmdPortMode2500fd:
            /* 2.5 Gbps supported only on uplink ports */
            if (hglite_port) {
                speed = 2500;
                sp_sel = COMMAND_CONFIG_SPEED_2500;
                break;
            } else if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_GE  | BMD_PORT_FE)) {
                return CDK_E_PARAM;
            }
            speed = 2500;
            sp_sel = COMMAND_CONFIG_SPEED_2500;
            break;
        case bmdPortMode1000fd:
        case bmdPortMode1000hd:
            if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_FE) {
                return CDK_E_PARAM;
            } else if (hglite_port == 1) {
                break;
            }
            if (flags & HG_FLAGS) {
                return CDK_E_PARAM;
            } else if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_HG) {
                BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
            }
            break;
        case bmdPortModeAuto:
            if (BMD_PORT_PROPERTIES(unit, port) & BMD_PORT_FE) {
                /* Avoid configuring FE ports to 1000 Mbps */
                speed = 100;
                sp_sel = COMMAND_CONFIG_SPEED_100;
            }
            break;
        case bmdPortModeDisabled:
            break;
        default:
            return CDK_E_PARAM;
        }
    }

    if ((flags & BMD_PORT_MODE_F_INTERNAL) == 0) {
        /* Stop CPU and MMU from scheduling packets to the port */
        BMD_PORT_STATUS_CLR(unit, port, BMD_PST_LINK_UP);
        ioerr += READ_EPC_LINK_BMAP_64r(unit, &epc_link);
        pbmp = EPC_LINK_BMAP_64r_PORT_BITMAPf_GET(epc_link);
        EPC_LINK_BMAP_64r_PORT_BITMAPf_SET(epc_link, pbmp & ~(1 << port));
        ioerr += WRITE_EPC_LINK_BMAP_64r(unit, epc_link);

        /* Drain all packets from the TX pipeline */
        ioerr += READ_FLUSH_CONTROLr(unit, port, &flush_ctrl);
        FLUSH_CONTROLr_FLUSHf_SET(flush_ctrl, 1);
        ioerr += WRITE_FLUSH_CONTROLr(unit, port, flush_ctrl);
        cnt = DRAIN_WAIT_MSEC / 10;
        while (--cnt >= 0) {
            tot_cnt_cos_cell = 0;
            for (i = 0; i < NUM_COS; i++) {
                ioerr += READ_COSLCCOUNTr(unit, port, i, &coslccount);
                if (COSLCCOUNTr_GET(coslccount) != 0) tot_cnt_cos_cell ++;
            }
            if (tot_cnt_cos_cell == 0) {
                break;
            }
            BMD_SYS_USLEEP(10000);
        }
        if (cnt < 0) {
            CDK_WARN(("bcm56142_a0_bmd_port_mode_set[%d]: "
                      "drain failed on port %d\n", unit, port));
        }
        FLUSH_CONTROLr_FLUSHf_SET(flush_ctrl, 0);
        ioerr += WRITE_FLUSH_CONTROLr(unit, port, flush_ctrl);

#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1
        if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) {
            bmd_port_mode_t cur_mode;
            uint32_t cur_flags;
            /*
             * If HiGig/Ethernet encapsulation changes, we need
             * to reinitialize from scratch.
             */
            rv = bcm56142_a0_bmd_port_mode_get(unit, port,
                                               &cur_mode, &cur_flags);

            if ((CDK_SUCCESS(rv) && hglite_port ) ||  \
                (CDK_SUCCESS(rv) && ((flags ^ cur_flags) & HG_FLAGS) && (flags !=0))) { 
                if (flags & HG_FLAGS || hglite_port) {
                    BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_HG;
                } else {
                    BMD_PORT_PROPERTIES(unit, port) = BMD_PORT_XE;
                }
#if 0
                rv = bcm56142_a0_xport_reset(unit, port);
#endif
                if (CDK_SUCCESS(rv)) {
                    rv = bcm56142_a0_xport_init(unit, port);
                }
            }
        }
#endif
    }

    /* Update PHYs before MAC */
    if (CDK_SUCCESS(rv)) {
        rv = bmd_port_mode_to_phy(unit, port, mode, flags, speed, duplex);
    }

    /* Let PHYs know that we disable the MAC */
    if (CDK_SUCCESS(rv)) {
        rv = bmd_phy_notify_mac_enable(unit, port, 0);
    }

    /* Reset the MAC */
    ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
    COMMAND_CONFIGr_SW_RESETf_SET(command_cfg, 1);
    ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

    /* Disable MACs (Rx only) */
#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1
    if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) {
        MAC_CTRLr_t mac_ctrl;

        ioerr += READ_MAC_CTRLr(unit, port, &mac_ctrl);
        MAC_CTRLr_RXENf_SET(mac_ctrl, 0);
        ioerr += WRITE_MAC_CTRLr(unit, port, mac_ctrl);
    }
#endif

    ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
    COMMAND_CONFIGr_RX_ENAf_SET(command_cfg, 0);
    ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

    ioerr += READ_EHG_RX_CONTROLr(unit, port, &ehg_rx_ctrl);
    if (hglite_port && (flags & BMD_PORT_MODE_F_HGLITE)) {
        EHG_RX_CONTROLr_MODEf_SET(ehg_rx_ctrl, 2);
    }else {
        EHG_RX_CONTROLr_MODEf_SET(ehg_rx_ctrl, 0);
    }
    WRITE_EHG_RX_CONTROLr(unit, port, ehg_rx_ctrl);

    if (mode == bmdPortModeDisabled) {
        BMD_PORT_STATUS_SET(unit, port, BMD_PST_FORCE_LINK);
    } else {
        if ((BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) ||
            ((BMD_PORT_PROPERTIES(unit, port) == BMD_PORT_GE) && (flags & BMD_PORT_MODE_F_HGLITE))){
#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1
            int hg, hg2;
            MAC_CTRLr_t mac_ctrl;
            MAC_TXCTRLr_t txctrl;
            MAC_RXCTRLr_t rxctrl;
            PORT_TABm_t port_tab;
            EGR_PORTr_t egr_port;
            XPORT_CONFIGr_t xport_cfg;
            ICONTROL_OPCODE_BITMAPr_t opcode_bmap;
            EGR_VLAN_CONTROL_3r_t vctrl3;

            /* Set encapsulation */
            hg = hg2 = 0;
            if (hglite_port && (flags & BMD_PORT_MODE_F_HGLITE)) {
                hg2 = 1;
            } else if (flags & HG_FLAGS) {
                hg = 1;
                if ((flags & BMD_PORT_MODE_F_HIGIG2) || (flags & BMD_PORT_MODE_F_HGLITE)) {                    
		    hg2 = 1;
                }
            }

            ioerr += READ_XPORT_CONFIGr(unit, port, &xport_cfg);
            ioerr += READ_MAC_TXCTRLr(unit, port, &txctrl);
            ioerr += READ_MAC_RXCTRLr(unit, port, &rxctrl);
            ioerr += READ_PORT_TABm(unit, port, &port_tab);
            ioerr += READ_EGR_PORTr(unit, port, &egr_port);
            /* Set IEEE vs HiGig */
            XPORT_CONFIGr_HIGIG_MODEf_SET(xport_cfg, hg);
            MAC_TXCTRLr_HDRMODEf_SET(txctrl, hg);
            MAC_RXCTRLr_HDRMODEf_SET(rxctrl, hg);
            PORT_TABm_PORT_TYPEf_SET(port_tab, hg);
            EGR_PORTr_PORT_TYPEf_SET(egr_port, hg);
            ICONTROL_OPCODE_BITMAPr_SET(opcode_bmap, hg ? 0x1 : 0x0);
            /* Set HiGig vs. HiGig2 */
            XPORT_CONFIGr_HIGIG2_MODEf_SET(xport_cfg, hg2);
            MAC_TXCTRLr_HIGIG2MODEf_SET(txctrl, hg2);
            MAC_RXCTRLr_HIGIG2MODEf_SET(rxctrl, hg2);
            PORT_TABm_HIGIG2f_SET(port_tab, hg2);
            EGR_PORTr_HIGIG2f_SET(egr_port, hg2);
            ioerr += WRITE_XPORT_CONFIGr(unit, port, xport_cfg);
            ioerr += WRITE_MAC_TXCTRLr(unit, port, txctrl);
            ioerr += WRITE_MAC_RXCTRLr(unit, port, rxctrl);
            ioerr += WRITE_PORT_TABm(unit, port, port_tab);
            ioerr += WRITE_EGR_PORTr(unit, port, egr_port);
            ioerr += WRITE_ICONTROL_OPCODE_BITMAPr(unit, port, opcode_bmap);

            /* HiGig ports require special egress tag action */
            ioerr += READ_EGR_VLAN_CONTROL_3r(unit, port, &vctrl3);
            EGR_VLAN_CONTROL_3r_TAG_ACTION_PROFILE_PTRf_SET(vctrl3, hg ? 1 : 0);
            ioerr += WRITE_EGR_VLAN_CONTROL_3r(unit, port, vctrl3);

            ioerr += READ_XQPORT_MODE_REGr(unit, port, &xport_mode);
            ioerr += READ_MAC_CTRLr(unit, port, &mac_ctrl);
            if (speed >= 10000) {
                /* Set to 10G mode */
                XQPORT_MODE_REGr_XQPORT_MODE_BITSf_SET(xport_mode, 2);
                MAC_CTRLr_RXENf_SET(mac_ctrl, 1);
            } else {
                XQPORT_MODE_REGr_XQPORT_MODE_BITSf_SET(xport_mode, 1);
                MAC_CTRLr_RXENf_SET(mac_ctrl, 0);
            }
            MAC_CTRLr_RXENf_SET(mac_ctrl, 1);

            /* Configure loopback mode */
            MAC_CTRLr_LCLLOOPf_SET(mac_ctrl, mac_lb);
            ioerr += WRITE_MAC_CTRLr(unit, port, mac_ctrl);
            ioerr += WRITE_XQPORT_MODE_REGr(unit, port, xport_mode);

            /* Bring the MAC out of reset */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_SW_RESETf_SET(command_cfg, 0);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);
#endif
        }

        if (speed < 10000) {
            /* Set speed and duplex */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_ETH_SPEEDf_SET(command_cfg, sp_sel);
            COMMAND_CONFIGr_HD_ENAf_SET(command_cfg, !duplex);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

            /* Set MAC loopback mode */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_LOOP_ENAf_SET(command_cfg, mac_lb);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);
            /* Enable MAC */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_RX_ENAf_SET(command_cfg, 1);
            COMMAND_CONFIGr_TX_ENAf_SET(command_cfg, 1);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

            /* Bring the MAC out of reset */
            ioerr += READ_COMMAND_CONFIGr(unit, port, &command_cfg);
            COMMAND_CONFIGr_SW_RESETf_SET(command_cfg, 0);
            ioerr += WRITE_COMMAND_CONFIGr(unit, port, command_cfg);

            if (hglite_port) {
                ioerr += READ_XQPORT_MODE_REGr(unit, port, &xport_mode);
                XQPORT_MODE_REGr_XQPORT_MODE_BITSf_SET(xport_mode, 1);
                ioerr += WRITE_XQPORT_MODE_REGr(unit, port, xport_mode);
            }
        }

        if (mac_lb || phy_lb) {
            BMD_PORT_STATUS_SET(unit, port, BMD_PST_LINK_UP | BMD_PST_FORCE_LINK);
        } else {
            BMD_PORT_STATUS_CLR(unit, port, BMD_PST_FORCE_LINK);
        }

        /* Let PHYs know that the MAC has been enabled */
        if (CDK_SUCCESS(rv)) {
            rv = bmd_phy_notify_mac_enable(unit, port, 1);
        }
    }

    return ioerr ? CDK_E_IO : rv;
}

#endif /* CDK_CONFIG_INCLUDE_BCM56334_A0 */
