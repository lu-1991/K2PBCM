/*
 * $Id: bcm53125_a0_bmd.h,v 1.2 Broadcom SDK $
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
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#ifndef __BCM53125_A0_BMD_H__
#define __BCM53125_A0_BMD_H__

#include <bmd/bmd.h>
#include <bmd_config.h>
#include <cdk/cdk_types.h>
#include <cdk/cdk_error.h>
#include <bmd/bmd_device.h>

/* This function attaches a driver to a CDK unit */
extern int
bcm53125_a0_bmd_attach(int unit);

/* This function detaches a driver from a CDK unit */
extern int
bcm53125_a0_bmd_detach(int unit);

/* This is the reset function */
extern int
bcm53125_a0_bmd_reset(int unit);

/* This is the init function */
extern int
bcm53125_a0_bmd_init(int unit);

/* Transmit a packet */
extern int
bcm53125_a0_bmd_tx(int unit, const bmd_pkt_t *pkt);

/* Submit Rx packet to DMA queue */
extern int
bcm53125_a0_bmd_rx_start(int unit, bmd_pkt_t *pkt);

/* Poll for Rx packet complete */
extern int
bcm53125_a0_bmd_rx_poll(int unit, bmd_pkt_t **ppkt);

/* Abort Rx DMA */
extern int
bcm53125_a0_bmd_rx_stop(int unit);

/* Sets the port mode */
extern int
bcm53125_a0_bmd_port_mode_set(int unit, int port, bmd_port_mode_t mode, uint32_t flags);

/* Gets the port mode */
extern int
bcm53125_a0_bmd_port_mode_get(int unit, int port, bmd_port_mode_t *mode, uint32_t *flags);

/* Updates the port mode based on auto-negotiation result */
extern int
bcm53125_a0_bmd_port_mode_update(int unit, int port);

/* Creates a VLAN */
extern int
bcm53125_a0_bmd_vlan_create(int unit, int vlan);

/* Adds a port to a VLAN */
extern int
bcm53125_a0_bmd_vlan_port_add(int unit, int vlan, int port, uint32_t flags);

/* Removes a port from a VLAN */
extern int
bcm53125_a0_bmd_vlan_port_remove(int unit, int vlan, int port);

/* Return lists of ports and untagged ports belonging to VLAN */
extern int
bcm53125_a0_bmd_vlan_port_get(int unit, int vlan, int *plist, int *utlist);

/* Destroys a VLAN */
extern int
bcm53125_a0_bmd_vlan_destroy(int unit, int vlan);

/* Sets spanning tree protocol state */
extern int
bcm53125_a0_bmd_port_stp_set(int unit, int port, bmd_stp_state_t state);

/* Gets spanning tree protocol state */
extern int
bcm53125_a0_bmd_port_stp_get(int unit, int port, bmd_stp_state_t *state);

/* Sets the default VLAN for a port */
extern int
bcm53125_a0_bmd_port_vlan_set(int unit, int port, int vlan);

/* Gets the default VLAN for a port */
extern int
bcm53125_a0_bmd_port_vlan_get(int unit, int port, int *vlan);

/* Configures port MAC address */
extern int
bcm53125_a0_bmd_port_mac_addr_add(int unit, int port, int vlan, const bmd_mac_addr_t *mac_addr);

/* Deletes port MAC address */
extern int
bcm53125_a0_bmd_port_mac_addr_remove(int unit, int port, int vlan, const bmd_mac_addr_t *mac_addr);

/* Initializes and enables switching */
extern int
bcm53125_a0_bmd_switching_init(int unit);

/* Configures CPU MAC address */
extern int
bcm53125_a0_bmd_cpu_mac_addr_add(int unit, int vlan, const bmd_mac_addr_t *mac_addr);

/* Deletes CPU MAC address */
extern int
bcm53125_a0_bmd_cpu_mac_addr_remove(int unit, int vlan, const bmd_mac_addr_t *mac_addr);

/* Get statistics counter */
extern int
bcm53125_a0_bmd_stat_get(int unit, int port, bmd_stat_t stat, bmd_counter_t *counter);

/* Clear statistics counter */
extern int
bcm53125_a0_bmd_stat_clear(int unit, int port, bmd_stat_t stat);

/* Assert test interrupt */
extern int
bcm53125_a0_bmd_test_interrupt_assert(int unit);

/* Clear test interrupt */
extern int
bcm53125_a0_bmd_test_interrupt_clear(int unit);

/* Download code to subdevice */
extern int
bcm53125_a0_bmd_download(int unit, bmd_download_t type, uint8_t *data, int size);

#endif /* __BCM53125_A0_BMD_H__ */
