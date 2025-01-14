/*******************************************************************************
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
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 *
 * Symbol table file for the BCM53314.
 * This symbol table is used by the Broadcom debug shell.
 *
 ******************************************************************************/


#include <phy/chip/bcm53314_defs.h>

/* No symbols will be compiled unless this is defined. */
#if PHY_CONFIG_INCLUDE_CHIP_SYMBOLS == 1
/*******************************************************************************
 *
 * If CDK_CONFIG_INCLUDE_FIELD_INFO is 1, then symbol information
 * necessary to encode and decode the individual fields of a register or memory
 * will be available.
 *
 * Without it, only the register and memory names will be symbolically available
 * and their values will be displayed as raw data only. 
 *
 * Field information can be compiled out in the interest of saving code space.
 *
 ******************************************************************************/
#if CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314

static uint32_t BCM53314_AUTO_DETECT_MEDIUMr_fields[] =
{
    /* AUTO_DETECT_MEDIUM:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(5, 15, 0)
};
static uint32_t BCM53314_AUTO_DETECT_SGMII_MEDIAr_fields[] =
{
    /* AUTO_DETECT_SGMII_MEDIA:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(6, 15, 0)
};
static uint32_t BCM53314_AUTO_POWER_DOWNr_fields[] =
{
    /* AUTO_POWER_DOWN:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(7, 15, 0)
};
static uint32_t BCM53314_AUX_1000X_CTRLr_fields[] =
{
    /* AUX_1000X_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(8, 15, 0)
};
static uint32_t BCM53314_AUX_1000X_STATr_fields[] =
{
    /* AUX_1000X_STAT:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(9, 15, 0)
};
static uint32_t BCM53314_CLK_ALIGN_CTRLr_fields[] =
{
    /* CLK_ALIGN_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(21, 15, 0)
};
static uint32_t BCM53314_EXP_INTERRUPT_MASKr_fields[] =
{
    /* EXP_INTERRUPT_MASK:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(23, 15, 0)
};
static uint32_t BCM53314_EXP_INTERRUPT_STATr_fields[] =
{
    /* EXP_INTERRUPT_STAT:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(24, 15, 0)
};
static uint32_t BCM53314_EXP_LED_BLINK_CTRLr_fields[] =
{
    /* EXP_LED_BLINK_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(25, 15, 0)
};
static uint32_t BCM53314_EXP_LED_FLASH_CTRLr_fields[] =
{
    /* EXP_LED_FLASH_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(26, 15, 0)
};
static uint32_t BCM53314_EXP_LED_SELECTORr_fields[] =
{
    /* EXP_LED_SELECTOR:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(27, 15, 0)
};
static uint32_t BCM53314_EXP_PASSTHRU_LED_MODEr_fields[] =
{
    /* EXP_PASSTHRU_LED_MODE:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(28, 15, 0)
};
static uint32_t BCM53314_EXP_PKT_COUNTERr_fields[] =
{
    /* EXP_PKT_COUNTER:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(29, 15, 0)
};
static uint32_t BCM53314_EXP_SERDES_PASSTHRU_ENr_fields[] =
{
    /* EXP_SERDES_PASSTHRU_EN:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(30, 15, 0)
};
static uint32_t BCM53314_LED_CTRLr_fields[] =
{
    /* LED_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(37, 15, 0)
};
static uint32_t BCM53314_LED_GPIO_CTRLr_fields[] =
{
    /* LED_GPIO_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(38, 15, 0)
};
static uint32_t BCM53314_LED_SELECTOR_1r_fields[] =
{
    /* LED_SELECTOR_1:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(39, 15, 0)
};
static uint32_t BCM53314_LED_SELECTOR_2r_fields[] =
{
    /* LED_SELECTOR_2:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(40, 15, 0)
};
static uint32_t BCM53314_LED_STATr_fields[] =
{
    /* LED_STAT:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(41, 15, 0)
};
static uint32_t BCM53314_MII_10BASE_Tr_fields[] =
{
    /* MII_10BASE_T:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(52, 15, 0)
};
static uint32_t BCM53314_MII_ANAr_fields[] =
{
    /* PROTOCOL:0:4 */
    CDK_SYMBOL_FIELD_ENCODE(68, 4, 0),
    /* CAP_10BASE_T_HD:5:5 */
    CDK_SYMBOL_FIELD_ENCODE(20, 5, 5),
    /* CAP_10BASE_T_FD:6:6 */
    CDK_SYMBOL_FIELD_ENCODE(19, 6, 6),
    /* CAP_100BASE_TX_HD:7:7 */
    CDK_SYMBOL_FIELD_ENCODE(16, 7, 7),
    /* CAP_100BASE_TX_FD:8:8 */
    CDK_SYMBOL_FIELD_ENCODE(15, 8, 8),
    /* CAP_100BASE_T4:9:9 */
    CDK_SYMBOL_FIELD_ENCODE(14, 9, 9),
    /* PAUSE:10:10 */
    CDK_SYMBOL_FIELD_ENCODE(66, 10, 10),
    /* ASYM_PAUSE:11:11 */
    CDK_SYMBOL_FIELD_ENCODE(1, 11, 11),
    /* REMOTE_FAULT:13:13 */
    CDK_SYMBOL_FIELD_ENCODE(75, 13, 13),
    /* NEXT_PAGE:15:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(63, 15, 15)
};
static uint32_t BCM53314_MII_ANPr_fields[] =
{
    /* PROTOCOL:0:4 */
    CDK_SYMBOL_FIELD_ENCODE(68, 4, 0),
    /* CAP_10BASE_T_HD:5:5 */
    CDK_SYMBOL_FIELD_ENCODE(20, 5, 5),
    /* CAP_10BASE_T_FD:6:6 */
    CDK_SYMBOL_FIELD_ENCODE(19, 6, 6),
    /* CAP_100BASE_TX_HD:7:7 */
    CDK_SYMBOL_FIELD_ENCODE(16, 7, 7),
    /* CAP_100BASE_TX_FD:8:8 */
    CDK_SYMBOL_FIELD_ENCODE(15, 8, 8),
    /* CAP_100BASE_T4:9:9 */
    CDK_SYMBOL_FIELD_ENCODE(14, 9, 9),
    /* PAUSE:10:10 */
    CDK_SYMBOL_FIELD_ENCODE(66, 10, 10),
    /* ASYM_PAUSE:11:11 */
    CDK_SYMBOL_FIELD_ENCODE(1, 11, 11),
    /* REMOTE_FAULT:13:13 */
    CDK_SYMBOL_FIELD_ENCODE(75, 13, 13),
    /* ACK:14:14 */
    CDK_SYMBOL_FIELD_ENCODE(0, 14, 14),
    /* NEXT_PAGE:15:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(63, 15, 15)
};
static uint32_t BCM53314_MII_AN_EXPr_fields[] =
{
    /* LP_AN_ABIL:0:0 */
    CDK_SYMBOL_FIELD_ENCODE(48, 0, 0),
    /* PAGE_RECEIVED:1:1 */
    CDK_SYMBOL_FIELD_ENCODE(64, 1, 1),
    /* NEXT_PAGE:2:2 */
    CDK_SYMBOL_FIELD_ENCODE(63, 2, 2),
    /* LP_NEXT_PAGE:3:3 */
    CDK_SYMBOL_FIELD_ENCODE(49, 3, 3),
    /* PARDET_FAULT:4:4 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(65, 4, 4)
};
static uint32_t BCM53314_MII_AUX_CTRLr_fields[] =
{
    /* MII_AUX_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(53, 15, 0)
};
static uint32_t BCM53314_MII_CTRLr_fields[] =
{
    /* SPEED_SEL1:6:6 */
    CDK_SYMBOL_FIELD_ENCODE(84, 6, 6),
    /* COLL_TEST_EN:7:7 */
    CDK_SYMBOL_FIELD_ENCODE(22, 7, 7),
    /* FULL_DUPLEX:8:8 */
    CDK_SYMBOL_FIELD_ENCODE(33, 8, 8),
    /* RESTART_AN:9:9 */
    CDK_SYMBOL_FIELD_ENCODE(78, 9, 9),
    /* ISOLATE:10:10 */
    CDK_SYMBOL_FIELD_ENCODE(35, 10, 10),
    /* POWER_DOWN:11:11 */
    CDK_SYMBOL_FIELD_ENCODE(67, 11, 11),
    /* AUTONEG:12:12 */
    CDK_SYMBOL_FIELD_ENCODE(2, 12, 12),
    /* SPEED_SEL0:13:13 */
    CDK_SYMBOL_FIELD_ENCODE(83, 13, 13),
    /* LOOPBACK:14:14 */
    CDK_SYMBOL_FIELD_ENCODE(45, 14, 14),
    /* RESET:15:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(77, 15, 15)
};
static uint32_t BCM53314_MII_ECRr_fields[] =
{
    /* MII_ECR:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(54, 15, 0)
};
static uint32_t BCM53314_MII_ESRr_fields[] =
{
    /* MII_ESR:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(55, 15, 0)
};
static uint32_t BCM53314_MII_GB_CTRLr_fields[] =
{
    /* CAP_1000BASE_T_HD:8:8 */
    CDK_SYMBOL_FIELD_ENCODE(11, 8, 8),
    /* CAP_1000BASE_T_FD:9:9 */
    CDK_SYMBOL_FIELD_ENCODE(10, 9, 9),
    /* SWITCH_DEV:10:10 */
    CDK_SYMBOL_FIELD_ENCODE(85, 10, 10),
    /* MASTER:11:11 */
    CDK_SYMBOL_FIELD_ENCODE(50, 11, 11),
    /* MS_MAN:12:12 */
    CDK_SYMBOL_FIELD_ENCODE(62, 12, 12),
    /* TEST_MODE:13:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(87, 15, 13)
};
static uint32_t BCM53314_MII_GB_STATr_fields[] =
{
    /* IDLE_ERRORS:0:7 */
    CDK_SYMBOL_FIELD_ENCODE(34, 7, 0),
    /* LP_1000BASE_T_HD:10:10 */
    CDK_SYMBOL_FIELD_ENCODE(47, 10, 10),
    /* LP_1000BASE_T_FD:11:11 */
    CDK_SYMBOL_FIELD_ENCODE(46, 11, 11),
    /* REMOTE_RCV_OK:12:12 */
    CDK_SYMBOL_FIELD_ENCODE(76, 12, 12),
    /* LOCAL_RCV_OK:13:13 */
    CDK_SYMBOL_FIELD_ENCODE(44, 13, 13),
    /* LOCAL_MASTER:14:14 */
    CDK_SYMBOL_FIELD_ENCODE(43, 14, 14),
    /* MS_CFG_FAULT:15:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(61, 15, 15)
};
static uint32_t BCM53314_MII_MISC_CTRLr_fields[] =
{
    /* MII_MISC_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(56, 15, 0)
};
static uint32_t BCM53314_MII_MISC_TESTr_fields[] =
{
    /* MII_MISC_TEST:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(57, 15, 0)
};
static uint32_t BCM53314_MII_PHY_ID0r_fields[] =
{
    /* REGID:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(69, 15, 0)
};
static uint32_t BCM53314_MII_PHY_ID1r_fields[] =
{
    /* REGID:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(69, 15, 0)
};
static uint32_t BCM53314_MII_POWER_CTRLr_fields[] =
{
    /* MII_POWER_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(58, 15, 0)
};
static uint32_t BCM53314_MII_STATr_fields[] =
{
    /* EXT_CAPABILITY:0:0 */
    CDK_SYMBOL_FIELD_ENCODE(31, 0, 0),
    /* JABBER_DETECT:1:1 */
    CDK_SYMBOL_FIELD_ENCODE(36, 1, 1),
    /* LINK:2:2 */
    CDK_SYMBOL_FIELD_ENCODE(42, 2, 2),
    /* AUTONEG_ABILITY:3:3 */
    CDK_SYMBOL_FIELD_ENCODE(3, 3, 3),
    /* REMOTE_FAULT:4:4 */
    CDK_SYMBOL_FIELD_ENCODE(75, 4, 4),
    /* AUTONEG_DONE:5:5 */
    CDK_SYMBOL_FIELD_ENCODE(4, 5, 5),
    /* MF_PREAMBLE_SUP:6:6 */
    CDK_SYMBOL_FIELD_ENCODE(51, 6, 6),
    /* EXT_STATUS:8:8 */
    CDK_SYMBOL_FIELD_ENCODE(32, 8, 8),
    /* CAP_100BASE_T2_HD:9:9 */
    CDK_SYMBOL_FIELD_ENCODE(13, 9, 9),
    /* CAP_100BASE_T2_FD:10:10 */
    CDK_SYMBOL_FIELD_ENCODE(12, 10, 10),
    /* CAP_10BASE_T_HD:11:11 */
    CDK_SYMBOL_FIELD_ENCODE(20, 11, 11),
    /* CAP_10BASE_T_FD:12:12 */
    CDK_SYMBOL_FIELD_ENCODE(19, 12, 12),
    /* CAP_100BASE_X_HD:13:13 */
    CDK_SYMBOL_FIELD_ENCODE(18, 13, 13),
    /* CAP_100BASE_X_FD:14:14 */
    CDK_SYMBOL_FIELD_ENCODE(17, 14, 14),
    /* CAP_100BASE_T4:15:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(14, 15, 15)
};
static uint32_t BCM53314_MISC_1000X_STATr_fields[] =
{
    /* MISC_1000X_STAT:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(59, 15, 0)
};
static uint32_t BCM53314_MODE_CTRLr_fields[] =
{
    /* MODE_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(60, 15, 0)
};
static uint32_t BCM53314_REG_1000X_AN_DEBUGr_fields[] =
{
    /* REG_1000X_AN_DEBUG:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(70, 15, 0)
};
static uint32_t BCM53314_REG_100FX_CTRLr_fields[] =
{
    /* REG_100FX_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(71, 15, 0)
};
static uint32_t BCM53314_REG_100FX_STATr_fields[] =
{
    /* REG_100FX_STAT:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(72, 15, 0)
};
static uint32_t BCM53314_REG_1ST_SERDES_CTRLr_fields[] =
{
    /* REG_1ST_SERDES_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(73, 15, 0)
};
static uint32_t BCM53314_REG_2ND_SERDES_CTRLr_fields[] =
{
    /* REG_2ND_SERDES_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(74, 15, 0)
};
static uint32_t BCM53314_SGMII_SLAVEr_fields[] =
{
    /* SGMII_SLAVE:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(79, 15, 0)
};
static uint32_t BCM53314_SPARE_CTRLr_fields[] =
{
    /* SPARE_CTRL:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(80, 15, 0)
};
static uint32_t BCM53314_SPARE_CTRL_2r_fields[] =
{
    /* SPARE_CTRL_2:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(81, 15, 0)
};
static uint32_t BCM53314_SPARE_CTRL_3r_fields[] =
{
    /* SPARE_CTRL_3:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(82, 15, 0)
};
static uint32_t BCM53314_TEST1r_fields[] =
{
    /* TEST1:0:15 */
    CDK_SYMBOL_FIELD_FLAG_LAST | CDK_SYMBOL_FIELD_ENCODE(86, 15, 0)
};



/*******************************************************************************
 *
 * The following is the field name table.
 *
 *******************************************************************************/
#if CDK_CONFIG_INCLUDE_FIELD_NAMES == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_NAMES_BCM53314
const char* bcm53314_fields[] = 
{
    "ACK",
    "ASYM_PAUSE",
    "AUTONEG",
    "AUTONEG_ABILITY",
    "AUTONEG_DONE",
    "AUTO_DETECT_MEDIUM",
    "AUTO_DETECT_SGMII_MEDIA",
    "AUTO_POWER_DOWN",
    "AUX_1000X_CTRL",
    "AUX_1000X_STAT",
    "CAP_1000BASE_T_FD",
    "CAP_1000BASE_T_HD",
    "CAP_100BASE_T2_FD",
    "CAP_100BASE_T2_HD",
    "CAP_100BASE_T4",
    "CAP_100BASE_TX_FD",
    "CAP_100BASE_TX_HD",
    "CAP_100BASE_X_FD",
    "CAP_100BASE_X_HD",
    "CAP_10BASE_T_FD",
    "CAP_10BASE_T_HD",
    "CLK_ALIGN_CTRL",
    "COLL_TEST_EN",
    "EXP_INTERRUPT_MASK",
    "EXP_INTERRUPT_STAT",
    "EXP_LED_BLINK_CTRL",
    "EXP_LED_FLASH_CTRL",
    "EXP_LED_SELECTOR",
    "EXP_PASSTHRU_LED_MODE",
    "EXP_PKT_COUNTER",
    "EXP_SERDES_PASSTHRU_EN",
    "EXT_CAPABILITY",
    "EXT_STATUS",
    "FULL_DUPLEX",
    "IDLE_ERRORS",
    "ISOLATE",
    "JABBER_DETECT",
    "LED_CTRL",
    "LED_GPIO_CTRL",
    "LED_SELECTOR_1",
    "LED_SELECTOR_2",
    "LED_STAT",
    "LINK",
    "LOCAL_MASTER",
    "LOCAL_RCV_OK",
    "LOOPBACK",
    "LP_1000BASE_T_FD",
    "LP_1000BASE_T_HD",
    "LP_AN_ABIL",
    "LP_NEXT_PAGE",
    "MASTER",
    "MF_PREAMBLE_SUP",
    "MII_10BASE_T",
    "MII_AUX_CTRL",
    "MII_ECR",
    "MII_ESR",
    "MII_MISC_CTRL",
    "MII_MISC_TEST",
    "MII_POWER_CTRL",
    "MISC_1000X_STAT",
    "MODE_CTRL",
    "MS_CFG_FAULT",
    "MS_MAN",
    "NEXT_PAGE",
    "PAGE_RECEIVED",
    "PARDET_FAULT",
    "PAUSE",
    "POWER_DOWN",
    "PROTOCOL",
    "REGID",
    "REG_1000X_AN_DEBUG",
    "REG_100FX_CTRL",
    "REG_100FX_STAT",
    "REG_1ST_SERDES_CTRL",
    "REG_2ND_SERDES_CTRL",
    "REMOTE_FAULT",
    "REMOTE_RCV_OK",
    "RESET",
    "RESTART_AN",
    "SGMII_SLAVE",
    "SPARE_CTRL",
    "SPARE_CTRL_2",
    "SPARE_CTRL_3",
    "SPEED_SEL0",
    "SPEED_SEL1",
    "SWITCH_DEV",
    "TEST1",
    "TEST_MODE",
};

#endif
#endif
#endif
#endif /* CDK_CONFIG_INCLUDE_FIELD_INFO */



/*******************************************************************************
 *
 * The following is the symbol table itself. 
 * It defines the entries for all registers and memories.
 * It also incorporates the field information for each register and memory if
 * applicable.
 *
 ******************************************************************************/
static const cdk_symbol_t bcm53314_syms[] = {
#ifndef CDK_CONFIG_EXCLUDE_CHIP_SYMBOLS_BCM53314
{
	BCM53314_MII_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_CTRLr",
},
{
	BCM53314_MII_STATr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_STATr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_STATr",
},
{
	BCM53314_MII_PHY_ID0r,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_PHY_ID0r_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_PHY_ID0r",
},
{
	BCM53314_MII_PHY_ID1r,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_PHY_ID1r_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_PHY_ID1r",
},
{
	BCM53314_MII_ANAr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_ANAr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_ANAr",
},
{
	BCM53314_MII_ANPr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_ANPr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_ANPr",
},
{
	BCM53314_MII_AN_EXPr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_AN_EXPr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_AN_EXPr",
},
{
	BCM53314_MII_GB_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_GB_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_GB_CTRLr",
},
{
	BCM53314_MII_GB_STATr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_GB_STATr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_GB_STATr",
},
{
	BCM53314_MII_ECRr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_ECRr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_ECRr",
},
{
	BCM53314_MII_ESRr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_ESRr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_ESRr",
},
{
	BCM53314_MII_AUX_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_AUX_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_AUX_CTRLr",
},
{
	BCM53314_MII_10BASE_Tr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_10BASE_Tr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_10BASE_Tr",
},
{
	BCM53314_MII_POWER_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_POWER_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_POWER_CTRLr",
},
{
	BCM53314_MII_MISC_TESTr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_MISC_TESTr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_MISC_TESTr",
},
{
	BCM53314_MII_MISC_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MII_MISC_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MII_MISC_CTRLr",
},
{
	BCM53314_SPARE_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_SPARE_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"SPARE_CTRLr",
},
{
	BCM53314_CLK_ALIGN_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_CLK_ALIGN_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"CLK_ALIGN_CTRLr",
},
{
	BCM53314_SPARE_CTRL_2r,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_SPARE_CTRL_2r_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"SPARE_CTRL_2r",
},
{
	BCM53314_SPARE_CTRL_3r,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_SPARE_CTRL_3r_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"SPARE_CTRL_3r",
},
{
	BCM53314_LED_STATr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_LED_STATr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"LED_STATr",
},
{
	BCM53314_LED_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_LED_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"LED_CTRLr",
},
{
	BCM53314_AUTO_POWER_DOWNr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_AUTO_POWER_DOWNr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"AUTO_POWER_DOWNr",
},
{
	BCM53314_LED_SELECTOR_1r,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_LED_SELECTOR_1r_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"LED_SELECTOR_1r",
},
{
	BCM53314_LED_SELECTOR_2r,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_LED_SELECTOR_2r_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"LED_SELECTOR_2r",
},
{
	BCM53314_LED_GPIO_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_LED_GPIO_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"LED_GPIO_CTRLr",
},
{
	BCM53314_REG_100FX_STATr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_REG_100FX_STATr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"REG_100FX_STATr",
},
{
	BCM53314_REG_100FX_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_REG_100FX_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"REG_100FX_CTRLr",
},
{
	BCM53314_REG_2ND_SERDES_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_REG_2ND_SERDES_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"REG_2ND_SERDES_CTRLr",
},
{
	BCM53314_SGMII_SLAVEr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_SGMII_SLAVEr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"SGMII_SLAVEr",
},
{
	BCM53314_REG_1ST_SERDES_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_REG_1ST_SERDES_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"REG_1ST_SERDES_CTRLr",
},
{
	BCM53314_AUTO_DETECT_SGMII_MEDIAr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_AUTO_DETECT_SGMII_MEDIAr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"AUTO_DETECT_SGMII_MEDIAr",
},
{
	BCM53314_REG_1000X_AN_DEBUGr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_REG_1000X_AN_DEBUGr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"REG_1000X_AN_DEBUGr",
},
{
	BCM53314_AUX_1000X_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_AUX_1000X_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"AUX_1000X_CTRLr",
},
{
	BCM53314_AUX_1000X_STATr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_AUX_1000X_STATr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"AUX_1000X_STATr",
},
{
	BCM53314_MISC_1000X_STATr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MISC_1000X_STATr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MISC_1000X_STATr",
},
{
	BCM53314_AUTO_DETECT_MEDIUMr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_AUTO_DETECT_MEDIUMr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"AUTO_DETECT_MEDIUMr",
},
{
	BCM53314_MODE_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_MODE_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"MODE_CTRLr",
},
{
	BCM53314_TEST1r,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_TEST1r_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"TEST1r",
},
{
	BCM53314_EXP_PKT_COUNTERr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_EXP_PKT_COUNTERr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"EXP_PKT_COUNTERr",
},
{
	BCM53314_EXP_INTERRUPT_STATr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_EXP_INTERRUPT_STATr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"EXP_INTERRUPT_STATr",
},
{
	BCM53314_EXP_INTERRUPT_MASKr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_EXP_INTERRUPT_MASKr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"EXP_INTERRUPT_MASKr",
},
{
	BCM53314_EXP_SERDES_PASSTHRU_ENr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_EXP_SERDES_PASSTHRU_ENr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"EXP_SERDES_PASSTHRU_ENr",
},
{
	BCM53314_EXP_LED_SELECTORr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_EXP_LED_SELECTORr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"EXP_LED_SELECTORr",
},
{
	BCM53314_EXP_LED_FLASH_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_EXP_LED_FLASH_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"EXP_LED_FLASH_CTRLr",
},
{
	BCM53314_EXP_LED_BLINK_CTRLr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_EXP_LED_BLINK_CTRLr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"EXP_LED_BLINK_CTRLr",
},
{
	BCM53314_EXP_PASSTHRU_LED_MODEr,
#if  CDK_CONFIG_INCLUDE_FIELD_INFO == 1
#ifndef CDK_CONFIG_EXCLUDE_FIELD_INFO_BCM53314
	BCM53314_EXP_PASSTHRU_LED_MODEr_fields,
#else
	0,
#endif
#endif
	 CDK_SYMBOL_INDEX_SIZE_ENCODE(1),
	CDK_SYMBOL_FLAG_REGISTER,
	"EXP_PASSTHRU_LED_MODEr",
},
#endif
};


cdk_symbols_t bcm53314_symbols = 
{
   bcm53314_syms, sizeof(bcm53314_syms)/sizeof(bcm53314_syms[0]),
#if CDK_CONFIG_INCLUDE_FIELD_NAMES == 1
   bcm53314_fields
#else
   NULL
#endif
/* END OF SYMBOL FILE */
};

#endif /* CDK_CONFIG_INCLUDE_CHIP_SYMBOLS */
