/*
 * $Id: $
 * 
 * $Copyright: Copyright 2010 Broadcom Corporation.
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
#include <cdk/chip/bcm6300_a0_defs.h>
#include <cdk/cdk_debug.h>

int 
bcm6300_a0_bmd_cosq_sched_set(
    int unit, 
    bmd_cosq_sched_t sched_type, 
    int sp_endq)
{
    int ioerr = 0, txq_mode = 0, hq_preempt = 0;
    QOS_TX_CTRLr_t ctrl;

    BMD_CHECK_UNIT(unit);
 
    ioerr += READ_QOS_TX_CTRLr(unit, &ctrl);
    txq_mode = QOS_TX_CTRLr_QOS_MODEf_GET(ctrl);
    if(txq_mode == 0) {
        CDK_ERR(("Enable QoS (Multiple Queues) first!!!."));
        return CDK_E_CONFIG;
    } else {
        if (sched_type == bmdWeightedRoundRobin) {
            hq_preempt = 0;
        } else if (sched_type != bmdQosNotEnabled) {
            hq_preempt = 1;
            if (sched_type == bmdStrictPriority) {
                txq_mode = 1;
            } else {
                txq_mode = sp_endq; 
            }
        } else {
            CDK_ERR(("Invalid scheduling mode requested!!!."));
            return CDK_E_PARAM;
        }
    }
    QOS_TX_CTRLr_HQ_PREEMPTf_SET(ctrl, hq_preempt);
    QOS_TX_CTRLr_QOS_MODEf_SET(ctrl, txq_mode);
    ioerr += WRITE_QOS_TX_CTRLr(unit, ctrl);

    return ioerr ? CDK_E_IO : CDK_E_NONE;
}

