#include <bmd_config.h>
#if CDK_CONFIG_INCLUDE_BCM56504_B0 == 1

/*
 * $Id: bcm56504_b0_bmd_port_mode_get.c,v 1.5 Broadcom SDK $
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

#include <bmd/bmd.h>

#include <bmdi/bmd_port_mode.h>

#include <cdk/chip/bcm56504_b0_defs.h>
#include <cdk/arch/xgs_chip.h>

#include "bcm56504_b0_bmd.h"

int
bcm56504_b0_bmd_port_mode_get(int unit, int port, 
                              bmd_port_mode_t *mode, uint32_t *flags)
{
    int ioerr = 0;
    int rv = CDK_E_NONE;
    GMACC0r_t gmacc0;
    GMACC1r_t gmacc1;
    FE_MAC1r_t fe_mac1;
    GE_PORT_CONFIGr_t ge_port_config;

    BMD_CHECK_UNIT(unit);
    BMD_CHECK_PORT(unit, port);

    *mode = bmdPortModeDisabled;
    *flags = 0;

    if (BMD_PORT_STATUS(unit, port) & BMD_PST_LINK_UP) {
        *flags |= BMD_PORT_MODE_F_LINK_UP;
    }

    if (BMD_PORT_PROPERTIES(unit, port) & (BMD_PORT_HG | BMD_PORT_XE)) {
#if BMD_CONFIG_INCLUDE_HIGIG == 1 || BMD_CONFIG_INCLUDE_XE == 1
        MAC_CTRLr_t mac_ctrl;
        CMIC_XGXS_PLL_CONTROL_1r_t pll_ctrl1;
        XPORT_CONFIGr_t xport_cfg;

        ioerr += READ_MAC_CTRLr(unit, port, &mac_ctrl);
        if (MAC_CTRLr_RXENf_GET(mac_ctrl) != 0) {
            *mode = bmdPortMode10000fd;
            if (MAC_CTRLr_LCLLOOPf_GET(mac_ctrl) != 0) {
                *flags |= BMD_PORT_MODE_F_MAC_LOOPBACK;
            } else {
                /* Get loopback state from PHY */
                rv = bmd_port_mode_from_phy(unit, port, mode, flags);
                /* Get speed from PLL configuration */
                ioerr += READ_CMIC_XGXS_PLL_CONTROL_1r(unit, &pll_ctrl1);
                if ((port == 24 &&
                     CMIC_XGXS_PLL_CONTROL_1r_PLL_CONTROL_13f_GET(pll_ctrl1)) ||
                    (port == 25 &&
                     CMIC_XGXS_PLL_CONTROL_1r_PLL_CONTROL_12f_GET(pll_ctrl1)) ||
                    (port == 26 &&
                     CMIC_XGXS_PLL_CONTROL_1r_PLL_CONTROL_11f_GET(pll_ctrl1)) ||
                    (port == 27 &&
                     CMIC_XGXS_PLL_CONTROL_1r_PLL_CONTROL_10f_GET(pll_ctrl1))) {

                    *mode = bmdPortMode12000fd;
                }
            }
        }
        ioerr += READ_XPORT_CONFIGr(unit, port, &xport_cfg);
        if (XPORT_CONFIGr_HIGIG_MODEf_GET(xport_cfg)) {
            *flags |= BMD_PORT_MODE_F_HIGIG;
        }
#endif
    } else {
        ioerr += READ_GMACC1r(unit, port, &gmacc1);
        ioerr += READ_FE_MAC1r(unit, port, &fe_mac1);
        if (GMACC1r_RXEN0f_GET(gmacc1) || FE_MAC1r_RX_ENf_GET(fe_mac1)) {
            ioerr += READ_GE_PORT_CONFIGr(unit, port, &ge_port_config);
            switch (GE_PORT_CONFIGr_SPEED_SELECTf_GET(ge_port_config)) {
            case 1:
                *mode = bmdPortMode100fd;
                break;
            case 2:
                *mode = bmdPortMode10fd;
                break;
            default:
                *mode = bmdPortMode1000fd;
                break;
            }
            ioerr += READ_GMACC0r(unit, port, &gmacc0);
            if (ioerr == 0 && GMACC0r_L32Bf_GET(gmacc0) == 1) {
                *flags |= BMD_PORT_MODE_F_MAC_LOOPBACK;
            } else {
                rv = bmd_port_mode_from_phy(unit, port, mode, flags);
            }
        }
    }

    return ioerr ? CDK_E_IO : rv; 
}
#endif /* CDK_CONFIG_INCLUDE_BCM56504_B0 */
