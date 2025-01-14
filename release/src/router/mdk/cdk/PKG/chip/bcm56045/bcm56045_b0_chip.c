/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
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
 ******************************************************************************/

#include <cdk/chip/bcm56640_b0_defs.h>

/* Block types */
extern const char *bcm56640_b0_blktype_names[];

/* Block structures */
extern cdk_xgsm_block_t bcm56640_b0_blocks[];

/* Symbol table */
#if CDK_CONFIG_INCLUDE_CHIP_SYMBOLS == 1
#if CDK_CONFIG_CHIP_SYMBOLS_USE_DSYMS == 1
extern cdk_symbols_t bcm56640_b0_dsymbols;
#else
extern cdk_symbols_t bcm56640_b0_symbols;
#endif
#endif

/* Physical port numbers */
#if CDK_CONFIG_INCLUDE_PORT_MAP == 1
static cdk_port_map_port_t _ports[] = {
    0, 37, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80
};
#endif

/* Chip-specific memory sizes */
static uint32_t
bcm56640_b0_mem_maxidx(int enum_val, uint32_t maxidx)
{
    switch (enum_val) {
    case EGR_FLEX_CTR_COUNTER_TABLE_0m_ENUM:
    case EGR_FLEX_CTR_COUNTER_TABLE_1m_ENUM:
    case EGR_FLEX_CTR_COUNTER_TABLE_2m_ENUM:
    case EGR_FLEX_CTR_COUNTER_TABLE_3m_ENUM:
    case EGR_FLEX_CTR_COUNTER_TABLE_4m_ENUM:
    case EGR_FLEX_CTR_COUNTER_TABLE_5m_ENUM:
    case EGR_FLEX_CTR_COUNTER_TABLE_6m_ENUM:
    case EGR_FLEX_CTR_COUNTER_TABLE_7m_ENUM:
    case VLAN_PROFILE_2m_ENUM:
    case VLAN_PROFILE_TABm_ENUM:
        return 63; /* 0x3f */
    case EGR_IP_TUNNEL_IPV6m_ENUM:
    case L3_ENTRY_4m_ENUM:
    case L3_ENTRY_4_HIT_ONLYm_ENUM:
        return 511; /* 0x1ff */
    case EGR_FRAGMENT_ID_TABLEm_ENUM:
    case EGR_IP_TUNNELm_ENUM:
    case EGR_L3_NEXT_HOPm_ENUM:
    case ING_L3_NEXT_HOPm_ENUM:
    case INITIAL_ING_L3_NEXT_HOPm_ENUM:
    case INITIAL_PROT_NHI_TABLEm_ENUM:
    case L3_ENTRY_2m_ENUM:
    case L3_ENTRY_2_HIT_ONLYm_ENUM:
    case MAID_REDUCTIONm_ENUM:
    case MA_STATEm_ENUM:
        return 1023; /* 0x3ff */
    case L2_ENTRY_1m_ENUM:
    case L2_ENTRY_1_HIT_ONLYm_ENUM:
        return 32767; /* 0x7fff */
    case L3_DEFIPm_ENUM:
    case L3_DEFIP_ONLYm_ENUM:
    case L3_ENTRY_1m_ENUM:
    case L3_ENTRY_1_HIT_ONLYm_ENUM:
        return 2047; /* 0x7ff */
    case EGR_DVP_ATTRIBUTEm_ENUM:
    case EGR_DVP_ATTRIBUTE_1m_ENUM:
    case EGR_IP_TUNNEL_MPLSm_ENUM:
    case ESM_ACL_ACTION_CONTROLm_ENUM:
    case ESM_ACL_PROFILEm_ENUM:
    case EXT_L2_ENTRY_1m_ENUM:
    case EXT_L2_ENTRY_2m_ENUM:
    case EXT_L2_ENTRY_DATA_ONLYm_ENUM:
    case EXT_L2_ENTRY_DATA_ONLY_WIDEm_ENUM:
    case EXT_L2_ENTRY_TCAMm_ENUM:
    case EXT_TCAM_VBITm_ENUM:
    case ING_DVP_2_TABLEm_ENUM:
    case ING_DVP_TABLEm_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_10m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_11m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_12m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_13m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_14m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_15m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_8m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_9m_ENUM:
    case ING_FLEX_CTR_OFFSET_TABLE_10m_ENUM:
    case ING_FLEX_CTR_OFFSET_TABLE_11m_ENUM:
    case ING_FLEX_CTR_OFFSET_TABLE_12m_ENUM:
    case ING_FLEX_CTR_OFFSET_TABLE_13m_ENUM:
    case ING_FLEX_CTR_OFFSET_TABLE_14m_ENUM:
    case ING_FLEX_CTR_OFFSET_TABLE_8m_ENUM:
    case ING_FLEX_CTR_OFFSET_TABLE_9m_ENUM:
    case MPLS_ENTRYm_ENUM:
    case MPLS_ENTRY_EXTDm_ENUM:
    case MPLS_ENTRY_EXTD_HIT_ONLYm_ENUM:
    case MPLS_ENTRY_HIT_ONLYm_ENUM:
    case SOURCE_VPm_ENUM:
    case SOURCE_VP_ATTRIBUTES_2m_ENUM:
    case SVM_MACROFLOW_INDEX_TABLEm_ENUM:
        return 0; /* 0x0 */
    case ING_L3_NEXT_HOP_ATTRIBUTE_1_INDEXm_ENUM:
        return 767; /* 0x2ff */
    case L2_ENTRY_2m_ENUM:
    case L2_ENTRY_2_HIT_ONLYm_ENUM:
        return 16383; /* 0x3fff */
    case EGR_IPMCm_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_0m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_1m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_2m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_3m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_4m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_5m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_6m_ENUM:
    case ING_FLEX_CTR_COUNTER_TABLE_7m_ENUM:
    case L3_IPMCm_ENUM:
    case L3_IPMC_1m_ENUM:
    case L3_IPMC_REMAPm_ENUM:
    case MMU_REPL_GROUPm_ENUM:
        return 255; /* 0xff */
    case ING_UNTAGGED_PHBm_ENUM:
        return 62; /* 0x3e */
    case EGR_VFIm_ENUM:
    case EGR_VLAN_XLATEm_ENUM:
    case EGR_VLAN_XLATE_HIT_ONLYm_ENUM:
    case VFIm_ENUM:
    case VFI_1m_ENUM:
    case VLAN_XLATE_EXTDm_ENUM:
    case VLAN_XLATE_EXTD_HIT_ONLYm_ENUM:
        return 4095; /* 0xfff */
    case L3_IIFm_ENUM:
    case OAM_LM_COUNTERSm_ENUM:
    case VLAN_OR_VFI_MAC_COUNTm_ENUM:
    case VLAN_OR_VFI_MAC_LIMITm_ENUM:
    case VLAN_XLATEm_ENUM:
    case VLAN_XLATE_HIT_ONLYm_ENUM:
        return 8191; /* 0x1fff */
    }
    return maxidx;
}

/* Variable register array info */
extern cdk_xgsm_numel_info_t bcm56640_b0_numel_info;

/* Chip information structure */
static cdk_xgsm_chip_info_t bcm56045_b0_chip_info = {

    /* CMIC block */
    BCM56640_B0_CMIC_BLOCK,

    /* CMC instance */
    0,

    /* Other (non-CMIC) block types */
    12,
    bcm56640_b0_blktype_names,

    /* Address calculation */
    NULL,

    /* Other (non-CMIC) blocks */
    16,
    bcm56640_b0_blocks,

    /* Valid ports for this chip */
    CDK_PBMP_3(0x00000001, 0xffe00020, 0x003fffe1),

    /* Chip flags */
    BCM56640_B0_CHIP_FLAG_BW260G |
    BCM56640_B0_CHIP_FLAG_MMU19 |
    BCM56640_B0_CHIP_FLAG_NO_DPI |
    0,

#if CDK_CONFIG_INCLUDE_CHIP_SYMBOLS == 1
#if CDK_CONFIG_CHIP_SYMBOLS_USE_DSYMS == 1
    /* Use regenerated symbol tables from the DSYM program */
    &bcm56640_b0_dsymbols,
#else
    /* Use the static per-chip symbol tables */
    &bcm56640_b0_symbols,
#endif
#endif

    /* Port map */
#if CDK_CONFIG_INCLUDE_PORT_MAP == 1
    sizeof(_ports)/sizeof(_ports[0]),
    _ports,
#endif

    /* Variable register array info */
    &bcm56640_b0_numel_info,

    /* Configuration dependent memory max index */
    &bcm56640_b0_mem_maxidx,

};

/* Declare function first to prevent compiler warnings */
extern int
bcm56045_b0_setup(cdk_dev_t *dev);

int
bcm56045_b0_setup(cdk_dev_t *dev)
{
    dev->chip_info = &bcm56045_b0_chip_info;

    return cdk_xgsm_setup(dev);
}

