#include <linux/version.h>
#include <linux/module.h>
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,36)
#include <linux/config.h>
#endif
extern void ai_addrspace; EXPORT_SYMBOL(ai_addrspace);
extern void ai_addrspacesize; EXPORT_SYMBOL(ai_addrspacesize);
extern void ai_clear_backplane_to; EXPORT_SYMBOL(ai_clear_backplane_to);
extern void ai_core_cflags; EXPORT_SYMBOL(ai_core_cflags);
extern void ai_core_cflags_wo; EXPORT_SYMBOL(ai_core_cflags_wo);
extern void ai_core_disable; EXPORT_SYMBOL(ai_core_disable);
extern void ai_core_reset; EXPORT_SYMBOL(ai_core_reset);
extern void ai_core_sflags; EXPORT_SYMBOL(ai_core_sflags);
extern void ai_coreaddrspaceX; EXPORT_SYMBOL(ai_coreaddrspaceX);
extern void ai_corereg; EXPORT_SYMBOL(ai_corereg);
extern void ai_corereg_addr; EXPORT_SYMBOL(ai_corereg_addr);
extern void ai_corerev; EXPORT_SYMBOL(ai_corerev);
extern void ai_corevendor; EXPORT_SYMBOL(ai_corevendor);
extern void ai_enable_backplane_timeouts; EXPORT_SYMBOL(ai_enable_backplane_timeouts);
extern void ai_flag; EXPORT_SYMBOL(ai_flag);
extern void ai_flag_alt; EXPORT_SYMBOL(ai_flag_alt);
extern void ai_iscoreup; EXPORT_SYMBOL(ai_iscoreup);
extern void ai_numaddrspaces; EXPORT_SYMBOL(ai_numaddrspaces);
extern void ai_scan; EXPORT_SYMBOL(ai_scan);
extern void ai_setcoreidx; EXPORT_SYMBOL(ai_setcoreidx);
extern void ai_setint; EXPORT_SYMBOL(ai_setint);
extern void ai_wrap_reg; EXPORT_SYMBOL(ai_wrap_reg);
extern void otp_avsbitslen; EXPORT_SYMBOL(otp_avsbitslen);
extern void otp_init; EXPORT_SYMBOL(otp_init);
extern void otp_isunified; EXPORT_SYMBOL(otp_isunified);
extern void otp_msg_level; EXPORT_SYMBOL(otp_msg_level);
extern void otp_newcis; EXPORT_SYMBOL(otp_newcis);
extern void otp_nvread; EXPORT_SYMBOL(otp_nvread);
extern void otp_read_bit; EXPORT_SYMBOL(otp_read_bit);
extern void otp_read_region; EXPORT_SYMBOL(otp_read_region);
extern void otp_read_word; EXPORT_SYMBOL(otp_read_word);
extern void otp_size; EXPORT_SYMBOL(otp_size);
extern void otp_status; EXPORT_SYMBOL(otp_status);
extern void dbushost_initvars_flash; EXPORT_SYMBOL(dbushost_initvars_flash);
extern void patch_pair; EXPORT_SYMBOL(patch_pair);
extern void srom_otp_write_region_crc; EXPORT_SYMBOL(srom_otp_write_region_crc);
extern void srom_parsecis; EXPORT_SYMBOL(srom_parsecis);
extern void srom_read; EXPORT_SYMBOL(srom_read);
extern void srom_var_deinit; EXPORT_SYMBOL(srom_var_deinit);
extern void srom_var_init; EXPORT_SYMBOL(srom_var_init);
extern void _bcmutils_dummy_fn; EXPORT_SYMBOL(_bcmutils_dummy_fn);
extern void bcm_add_64; EXPORT_SYMBOL(bcm_add_64);
extern void bcm_alloc_rxcplid_list; EXPORT_SYMBOL(bcm_alloc_rxcplid_list);
extern void bcm_alloc_rxcplinfo; EXPORT_SYMBOL(bcm_alloc_rxcplinfo);
extern void bcm_atoi; EXPORT_SYMBOL(bcm_atoi);
extern void bcm_atoipv4; EXPORT_SYMBOL(bcm_atoipv4);
extern void bcm_binit; EXPORT_SYMBOL(bcm_binit);
extern void bcm_bitcount; EXPORT_SYMBOL(bcm_bitcount);
extern void bcm_bitprint32; EXPORT_SYMBOL(bcm_bitprint32);
extern void bcm_bprhex; EXPORT_SYMBOL(bcm_bprhex);
extern void bcm_bprintf; EXPORT_SYMBOL(bcm_bprintf);
extern void bcm_brev_str; EXPORT_SYMBOL(bcm_brev_str);
extern void bcm_chain_rxcplid; EXPORT_SYMBOL(bcm_chain_rxcplid);
extern void bcm_chipname; EXPORT_SYMBOL(bcm_chipname);
extern void bcm_cmp_bytes; EXPORT_SYMBOL(bcm_cmp_bytes);
extern void bcm_copy_tlv; EXPORT_SYMBOL(bcm_copy_tlv);
extern void bcm_copy_tlv_safe; EXPORT_SYMBOL(bcm_copy_tlv_safe);
extern void bcm_crypto_algo_name; EXPORT_SYMBOL(bcm_crypto_algo_name);
extern void bcm_ctype; EXPORT_SYMBOL(bcm_ctype);
extern void bcm_ether_atoe; EXPORT_SYMBOL(bcm_ether_atoe);
extern void bcm_ether_ntoa; EXPORT_SYMBOL(bcm_ether_ntoa);
extern void bcm_find_vendor_ie; EXPORT_SYMBOL(bcm_find_vendor_ie);
extern void bcm_format_flags; EXPORT_SYMBOL(bcm_format_flags);
extern void bcm_free_rxcplinfo; EXPORT_SYMBOL(bcm_free_rxcplinfo);
extern void bcm_id2rxcplinfo; EXPORT_SYMBOL(bcm_id2rxcplinfo);
extern void bcm_inc_bytes; EXPORT_SYMBOL(bcm_inc_bytes);
extern void bcm_iovar_lencheck; EXPORT_SYMBOL(bcm_iovar_lencheck);
extern void bcm_iovar_lookup; EXPORT_SYMBOL(bcm_iovar_lookup);
extern void bcm_ip_cksum; EXPORT_SYMBOL(bcm_ip_cksum);
extern void bcm_ip_ntoa; EXPORT_SYMBOL(bcm_ip_ntoa);
extern void bcm_ipv6_ntoa; EXPORT_SYMBOL(bcm_ipv6_ntoa);
extern void bcm_mdelay; EXPORT_SYMBOL(bcm_mdelay);
extern void bcm_mkiovar; EXPORT_SYMBOL(bcm_mkiovar);
extern void bcm_mw_to_qdbm; EXPORT_SYMBOL(bcm_mw_to_qdbm);
extern void bcm_mwbmap_alloc; EXPORT_SYMBOL(bcm_mwbmap_alloc);
extern void bcm_mwbmap_audit; EXPORT_SYMBOL(bcm_mwbmap_audit);
extern void bcm_mwbmap_fini; EXPORT_SYMBOL(bcm_mwbmap_fini);
extern void bcm_mwbmap_force; EXPORT_SYMBOL(bcm_mwbmap_force);
extern void bcm_mwbmap_free; EXPORT_SYMBOL(bcm_mwbmap_free);
extern void bcm_mwbmap_free_cnt; EXPORT_SYMBOL(bcm_mwbmap_free_cnt);
extern void bcm_mwbmap_init; EXPORT_SYMBOL(bcm_mwbmap_init);
extern void bcm_mwbmap_isfree; EXPORT_SYMBOL(bcm_mwbmap_isfree);
extern void bcm_mwbmap_show; EXPORT_SYMBOL(bcm_mwbmap_show);
extern void bcm_next_tlv; EXPORT_SYMBOL(bcm_next_tlv);
extern void bcm_nvram_cache; EXPORT_SYMBOL(bcm_nvram_cache);
extern void bcm_nvram_vars; EXPORT_SYMBOL(bcm_nvram_vars);
extern void bcm_parse_ordered_tlvs; EXPORT_SYMBOL(bcm_parse_ordered_tlvs);
extern void bcm_parse_tlvs; EXPORT_SYMBOL(bcm_parse_tlvs);
extern void bcm_parse_tlvs_min_bodylen; EXPORT_SYMBOL(bcm_parse_tlvs_min_bodylen);
extern void bcm_print_bytes; EXPORT_SYMBOL(bcm_print_bytes);
extern void bcm_qdbm_to_mw; EXPORT_SYMBOL(bcm_qdbm_to_mw);
extern void bcm_rxcplinfo2id; EXPORT_SYMBOL(bcm_rxcplinfo2id);
extern void bcm_rxcpllist_end; EXPORT_SYMBOL(bcm_rxcpllist_end);
extern void bcm_strtoul; EXPORT_SYMBOL(bcm_strtoul);
extern void bcm_sub_64; EXPORT_SYMBOL(bcm_sub_64);
extern void bcm_uint64_divide; EXPORT_SYMBOL(bcm_uint64_divide);
extern void bcm_uint64_multiple_add; EXPORT_SYMBOL(bcm_uint64_multiple_add);
extern void bcm_uint64_right_shift; EXPORT_SYMBOL(bcm_uint64_right_shift);
extern void bcm_write_tlv; EXPORT_SYMBOL(bcm_write_tlv);
extern void bcm_write_tlv_safe; EXPORT_SYMBOL(bcm_write_tlv_safe);
extern void bcmdumpfields; EXPORT_SYMBOL(bcmdumpfields);
extern void bcmerrorstr; EXPORT_SYMBOL(bcmerrorstr);
extern void bcmstrcat; EXPORT_SYMBOL(bcmstrcat);
extern void bcmstricmp; EXPORT_SYMBOL(bcmstricmp);
extern void bcmstrncat; EXPORT_SYMBOL(bcmstrncat);
extern void bcmstrnicmp; EXPORT_SYMBOL(bcmstrnicmp);
extern void bcmstrnstr; EXPORT_SYMBOL(bcmstrnstr);
extern void bcmstrstr; EXPORT_SYMBOL(bcmstrstr);
extern void bcmstrtok; EXPORT_SYMBOL(bcmstrtok);
extern void dll_pool_alloc; EXPORT_SYMBOL(dll_pool_alloc);
extern void dll_pool_detach; EXPORT_SYMBOL(dll_pool_detach);
extern void dll_pool_free; EXPORT_SYMBOL(dll_pool_free);
extern void dll_pool_free_tail; EXPORT_SYMBOL(dll_pool_free_tail);
extern void dll_pool_init; EXPORT_SYMBOL(dll_pool_init);
extern void g_rxcplid_list; EXPORT_SYMBOL(g_rxcplid_list);
extern void getgpiopin; EXPORT_SYMBOL(getgpiopin);
extern void getintvar; EXPORT_SYMBOL(getintvar);
extern void getintvararray; EXPORT_SYMBOL(getintvararray);
extern void getintvararraysize; EXPORT_SYMBOL(getintvararraysize);
extern void getvar; EXPORT_SYMBOL(getvar);
extern void hndcrc16; EXPORT_SYMBOL(hndcrc16);
extern void hndcrc32; EXPORT_SYMBOL(hndcrc32);
extern void hndcrc8; EXPORT_SYMBOL(hndcrc8);
extern void id16_map_alloc; EXPORT_SYMBOL(id16_map_alloc);
extern void id16_map_audit; EXPORT_SYMBOL(id16_map_audit);
extern void id16_map_failures; EXPORT_SYMBOL(id16_map_failures);
extern void id16_map_fini; EXPORT_SYMBOL(id16_map_fini);
extern void id16_map_free; EXPORT_SYMBOL(id16_map_free);
extern void id16_map_init; EXPORT_SYMBOL(id16_map_init);
extern void pktcopy; EXPORT_SYMBOL(pktcopy);
extern void pktdataoffset; EXPORT_SYMBOL(pktdataoffset);
extern void pktfrombuf; EXPORT_SYMBOL(pktfrombuf);
extern void pktgetdscp; EXPORT_SYMBOL(pktgetdscp);
extern void pktlast; EXPORT_SYMBOL(pktlast);
extern void pktoffset; EXPORT_SYMBOL(pktoffset);
extern void pktsegcnt; EXPORT_SYMBOL(pktsegcnt);
extern void pktsegcnt_war; EXPORT_SYMBOL(pktsegcnt_war);
extern void pktsetprio; EXPORT_SYMBOL(pktsetprio);
extern void pkttotlen; EXPORT_SYMBOL(pkttotlen);
extern void prhex; EXPORT_SYMBOL(prhex);
extern void printbig; EXPORT_SYMBOL(printbig);
extern void process_nvram_vars; EXPORT_SYMBOL(process_nvram_vars);
extern void set_bitrange; EXPORT_SYMBOL(set_bitrange);
extern void valid_bcmerror; EXPORT_SYMBOL(valid_bcmerror);
extern void get_pktpools_registry; EXPORT_SYMBOL(get_pktpools_registry);
extern void pkpool_haddr_avail_register_cb; EXPORT_SYMBOL(pkpool_haddr_avail_register_cb);
extern void pktpool_add; EXPORT_SYMBOL(pktpool_add);
extern void pktpool_attach; EXPORT_SYMBOL(pktpool_attach);
extern void pktpool_avail_notify_exclusive; EXPORT_SYMBOL(pktpool_avail_notify_exclusive);
extern void pktpool_avail_notify_normal; EXPORT_SYMBOL(pktpool_avail_notify_normal);
extern void pktpool_avail_register; EXPORT_SYMBOL(pktpool_avail_register);
extern void pktpool_deinit; EXPORT_SYMBOL(pktpool_deinit);
extern void pktpool_dettach; EXPORT_SYMBOL(pktpool_dettach);
extern void pktpool_empty_register; EXPORT_SYMBOL(pktpool_empty_register);
extern void pktpool_emptycb_disable; EXPORT_SYMBOL(pktpool_emptycb_disable);
extern void pktpool_emptycb_disabled; EXPORT_SYMBOL(pktpool_emptycb_disabled);
extern void pktpool_fill; EXPORT_SYMBOL(pktpool_fill);
extern void pktpool_free; EXPORT_SYMBOL(pktpool_free);
extern void pktpool_get; EXPORT_SYMBOL(pktpool_get);
extern void pktpool_hostaddr_fill_register; EXPORT_SYMBOL(pktpool_hostaddr_fill_register);
extern void pktpool_init; EXPORT_SYMBOL(pktpool_init);
extern void pktpool_invoke_dmarxfill; EXPORT_SYMBOL(pktpool_invoke_dmarxfill);
extern void pktpool_rxcplid_fill_register; EXPORT_SYMBOL(pktpool_rxcplid_fill_register);
extern void pktpool_setmaxlen; EXPORT_SYMBOL(pktpool_setmaxlen);
extern void pktpools_max; EXPORT_SYMBOL(pktpools_max);
extern void pktpools_registry; EXPORT_SYMBOL(pktpools_registry);
extern void pktq_append; EXPORT_SYMBOL(pktq_append);
extern void pktq_deinit; EXPORT_SYMBOL(pktq_deinit);
extern void pktq_deq; EXPORT_SYMBOL(pktq_deq);
extern void pktq_deq_tail; EXPORT_SYMBOL(pktq_deq_tail);
extern void pktq_flush; EXPORT_SYMBOL(pktq_flush);
extern void pktq_init; EXPORT_SYMBOL(pktq_init);
extern void pktq_mdeq; EXPORT_SYMBOL(pktq_mdeq);
extern void pktq_mlen; EXPORT_SYMBOL(pktq_mlen);
extern void pktq_mpeek; EXPORT_SYMBOL(pktq_mpeek);
extern void pktq_pdel; EXPORT_SYMBOL(pktq_pdel);
extern void pktq_pdeq; EXPORT_SYMBOL(pktq_pdeq);
extern void pktq_pdeq_prev; EXPORT_SYMBOL(pktq_pdeq_prev);
extern void pktq_pdeq_tail; EXPORT_SYMBOL(pktq_pdeq_tail);
extern void pktq_pdeq_with_fn; EXPORT_SYMBOL(pktq_pdeq_with_fn);
extern void pktq_peek; EXPORT_SYMBOL(pktq_peek);
extern void pktq_peek_tail; EXPORT_SYMBOL(pktq_peek_tail);
extern void pktq_penq; EXPORT_SYMBOL(pktq_penq);
extern void pktq_penq_head; EXPORT_SYMBOL(pktq_penq_head);
extern void pktq_pflush; EXPORT_SYMBOL(pktq_pflush);
extern void pktq_prepend; EXPORT_SYMBOL(pktq_prepend);
extern void pktq_set_max_plen; EXPORT_SYMBOL(pktq_set_max_plen);
extern void dma64proc; EXPORT_SYMBOL(dma64proc);
extern void dma_addrwidth; EXPORT_SYMBOL(dma_addrwidth);
extern void dma_attach; EXPORT_SYMBOL(dma_attach);
extern void dma_link_handle; EXPORT_SYMBOL(dma_link_handle);
extern void dma_msgbuf_txfast; EXPORT_SYMBOL(dma_msgbuf_txfast);
extern void dma_rxfast; EXPORT_SYMBOL(dma_rxfast);
extern void dma_rxfill_suspend; EXPORT_SYMBOL(dma_rxfill_suspend);
extern void dma_rxfill_unframed; EXPORT_SYMBOL(dma_rxfill_unframed);
extern void dma_txp; EXPORT_SYMBOL(dma_txp);
extern void dma_txpioloopback; EXPORT_SYMBOL(dma_txpioloopback);
extern void dma_txrewind; EXPORT_SYMBOL(dma_txrewind);
extern void cbuck2vreg_tbl; EXPORT_SYMBOL(cbuck2vreg_tbl);
extern void g_si_pmutmr_lock_arg; EXPORT_SYMBOL(g_si_pmutmr_lock_arg);
extern void g_si_pmutmr_lock_cb; EXPORT_SYMBOL(g_si_pmutmr_lock_cb);
extern void g_si_pmutmr_unlock_cb; EXPORT_SYMBOL(g_si_pmutmr_unlock_cb);
extern void si_mac_clk; EXPORT_SYMBOL(si_mac_clk);
extern void si_pll_minresmask_reset; EXPORT_SYMBOL(si_pll_minresmask_reset);
extern void si_pmu_alp_clock; EXPORT_SYMBOL(si_pmu_alp_clock);
extern void si_pmu_avbtimer_enable; EXPORT_SYMBOL(si_pmu_avbtimer_enable);
extern void si_pmu_cal_fvco; EXPORT_SYMBOL(si_pmu_cal_fvco);
extern void si_pmu_chip_init; EXPORT_SYMBOL(si_pmu_chip_init);
extern void si_pmu_chipcontrol; EXPORT_SYMBOL(si_pmu_chipcontrol);
extern void si_pmu_cpu_clock; EXPORT_SYMBOL(si_pmu_cpu_clock);
extern void si_pmu_def_alp_clock; EXPORT_SYMBOL(si_pmu_def_alp_clock);
extern void si_pmu_dump_buf_size_pmucap; EXPORT_SYMBOL(si_pmu_dump_buf_size_pmucap);
extern void si_pmu_dump_pmucap_binary; EXPORT_SYMBOL(si_pmu_dump_pmucap_binary);
extern void si_pmu_fast_pwrup_delay; EXPORT_SYMBOL(si_pmu_fast_pwrup_delay);
extern void si_pmu_force_ilp; EXPORT_SYMBOL(si_pmu_force_ilp);
extern void si_pmu_fvco_pllreg; EXPORT_SYMBOL(si_pmu_fvco_pllreg);
extern void si_pmu_gband_spurwar; EXPORT_SYMBOL(si_pmu_gband_spurwar);
extern void si_pmu_get_bb_vcofreq; EXPORT_SYMBOL(si_pmu_get_bb_vcofreq);
extern void si_pmu_get_pmutime_diff; EXPORT_SYMBOL(si_pmu_get_pmutime_diff);
extern void si_pmu_get_pmutimer; EXPORT_SYMBOL(si_pmu_get_pmutimer);
extern void si_pmu_ilp_clock; EXPORT_SYMBOL(si_pmu_ilp_clock);
extern void si_pmu_ilp_clock_set; EXPORT_SYMBOL(si_pmu_ilp_clock_set);
extern void si_pmu_init; EXPORT_SYMBOL(si_pmu_init);
extern void si_pmu_is_autoresetphyclk_disabled; EXPORT_SYMBOL(si_pmu_is_autoresetphyclk_disabled);
extern void si_pmu_is_otp_powered; EXPORT_SYMBOL(si_pmu_is_otp_powered);
extern void si_pmu_is_sprom_enabled; EXPORT_SYMBOL(si_pmu_is_sprom_enabled);
extern void si_pmu_measure_alpclk; EXPORT_SYMBOL(si_pmu_measure_alpclk);
extern void si_pmu_mem_clock; EXPORT_SYMBOL(si_pmu_mem_clock);
extern void si_pmu_minresmask_htavail_set; EXPORT_SYMBOL(si_pmu_minresmask_htavail_set);
extern void si_pmu_otp_chipcontrol; EXPORT_SYMBOL(si_pmu_otp_chipcontrol);
extern void si_pmu_otp_pllcontrol; EXPORT_SYMBOL(si_pmu_otp_pllcontrol);
extern void si_pmu_otp_power; EXPORT_SYMBOL(si_pmu_otp_power);
extern void si_pmu_otp_regcontrol; EXPORT_SYMBOL(si_pmu_otp_regcontrol);
extern void si_pmu_paref_ldo_enable; EXPORT_SYMBOL(si_pmu_paref_ldo_enable);
extern void si_pmu_pll_init; EXPORT_SYMBOL(si_pmu_pll_init);
extern void si_pmu_pll_off_PARR; EXPORT_SYMBOL(si_pmu_pll_off_PARR);
extern void si_pmu_pllcontrol; EXPORT_SYMBOL(si_pmu_pllcontrol);
extern void si_pmu_pllreset; EXPORT_SYMBOL(si_pmu_pllreset);
extern void si_pmu_pllupd; EXPORT_SYMBOL(si_pmu_pllupd);
extern void si_pmu_radio_enable; EXPORT_SYMBOL(si_pmu_radio_enable);
extern void si_pmu_rcal; EXPORT_SYMBOL(si_pmu_rcal);
extern void si_pmu_regcontrol; EXPORT_SYMBOL(si_pmu_regcontrol);
extern void si_pmu_res_init; EXPORT_SYMBOL(si_pmu_res_init);
extern void si_pmu_res_minmax_update; EXPORT_SYMBOL(si_pmu_res_minmax_update);
extern void si_pmu_reset_ret_sleep_log; EXPORT_SYMBOL(si_pmu_reset_ret_sleep_log);
extern void si_pmu_set_4330_plldivs; EXPORT_SYMBOL(si_pmu_set_4330_plldivs);
extern void si_pmu_set_ldo_voltage; EXPORT_SYMBOL(si_pmu_set_ldo_voltage);
extern void si_pmu_set_switcher_voltage; EXPORT_SYMBOL(si_pmu_set_switcher_voltage);
extern void si_pmu_set_ulbmode; EXPORT_SYMBOL(si_pmu_set_ulbmode);
extern void si_pmu_si_clock; EXPORT_SYMBOL(si_pmu_si_clock);
extern void si_pmu_slow_clk_reinit; EXPORT_SYMBOL(si_pmu_slow_clk_reinit);
extern void si_pmu_sprom_enable; EXPORT_SYMBOL(si_pmu_sprom_enable);
extern void si_pmu_spuravoid; EXPORT_SYMBOL(si_pmu_spuravoid);
extern void si_pmu_spuravoid_isdone; EXPORT_SYMBOL(si_pmu_spuravoid_isdone);
extern void si_pmu_switch_off_PARLDO; EXPORT_SYMBOL(si_pmu_switch_off_PARLDO);
extern void si_pmu_switch_on_PARLDO; EXPORT_SYMBOL(si_pmu_switch_on_PARLDO);
extern void si_pmu_swreg_init; EXPORT_SYMBOL(si_pmu_swreg_init);
extern void si_pmu_update_pllcontrol; EXPORT_SYMBOL(si_pmu_update_pllcontrol);
extern void si_pmu_wait_for_res_pending; EXPORT_SYMBOL(si_pmu_wait_for_res_pending);
extern void si_pmu_wait_for_steady_state; EXPORT_SYMBOL(si_pmu_wait_for_steady_state);
extern void si_pmu_waitforclk_on_backplane; EXPORT_SYMBOL(si_pmu_waitforclk_on_backplane);
extern void si_sdiod_drive_strength_init; EXPORT_SYMBOL(si_sdiod_drive_strength_init);
extern void g_assert_type; EXPORT_SYMBOL(g_assert_type);
extern void osl_acp_war_enab; EXPORT_SYMBOL(osl_acp_war_enab);
extern void osl_arch_is_coherent; EXPORT_SYMBOL(osl_arch_is_coherent);
extern void osl_attach; EXPORT_SYMBOL(osl_attach);
extern void osl_cache_flush; EXPORT_SYMBOL(osl_cache_flush);
extern void osl_cache_inv; EXPORT_SYMBOL(osl_cache_inv);
extern void osl_check_memleak; EXPORT_SYMBOL(osl_check_memleak);
extern void osl_cpu_relax; EXPORT_SYMBOL(osl_cpu_relax);
extern void osl_ctfpool_add; EXPORT_SYMBOL(osl_ctfpool_add);
extern void osl_ctfpool_cleanup; EXPORT_SYMBOL(osl_ctfpool_cleanup);
extern void osl_ctfpool_init; EXPORT_SYMBOL(osl_ctfpool_init);
extern void osl_ctfpool_replenish; EXPORT_SYMBOL(osl_ctfpool_replenish);
extern void osl_ctfpool_stats; EXPORT_SYMBOL(osl_ctfpool_stats);
extern void osl_delay; EXPORT_SYMBOL(osl_delay);
extern void osl_detach; EXPORT_SYMBOL(osl_detach);
extern void osl_dma_alloc_consistent; EXPORT_SYMBOL(osl_dma_alloc_consistent);
extern void osl_dma_consistent_align; EXPORT_SYMBOL(osl_dma_consistent_align);
extern void osl_dma_free_consistent; EXPORT_SYMBOL(osl_dma_free_consistent);
extern void osl_dma_map; EXPORT_SYMBOL(osl_dma_map);
extern void osl_dma_unmap; EXPORT_SYMBOL(osl_dma_unmap);
extern void osl_error; EXPORT_SYMBOL(osl_error);
extern void osl_flag_set; EXPORT_SYMBOL(osl_flag_set);
extern void osl_get_bus_handle; EXPORT_SYMBOL(osl_get_bus_handle);
extern void osl_is_flag_set; EXPORT_SYMBOL(osl_is_flag_set);
extern void osl_malloc; EXPORT_SYMBOL(osl_malloc);
extern void osl_malloc_failed; EXPORT_SYMBOL(osl_malloc_failed);
extern void osl_malloced; EXPORT_SYMBOL(osl_malloced);
extern void osl_mallocz; EXPORT_SYMBOL(osl_mallocz);
extern void osl_mfree; EXPORT_SYMBOL(osl_mfree);
extern void osl_os_close_image; EXPORT_SYMBOL(osl_os_close_image);
extern void osl_os_get_image_block; EXPORT_SYMBOL(osl_os_get_image_block);
extern void osl_os_image_size; EXPORT_SYMBOL(osl_os_image_size);
extern void osl_os_open_image; EXPORT_SYMBOL(osl_os_open_image);
extern void osl_pci_bus; EXPORT_SYMBOL(osl_pci_bus);
extern void osl_pci_device; EXPORT_SYMBOL(osl_pci_device);
extern void osl_pci_read_config; EXPORT_SYMBOL(osl_pci_read_config);
extern void osl_pci_slot; EXPORT_SYMBOL(osl_pci_slot);
extern void osl_pci_write_config; EXPORT_SYMBOL(osl_pci_write_config);
extern void osl_pcie_bus; EXPORT_SYMBOL(osl_pcie_bus);
extern void osl_pcie_domain; EXPORT_SYMBOL(osl_pcie_domain);
extern void osl_pcie_rreg; EXPORT_SYMBOL(osl_pcie_rreg);
extern void osl_pcmcia_read_attr; EXPORT_SYMBOL(osl_pcmcia_read_attr);
extern void osl_pcmcia_write_attr; EXPORT_SYMBOL(osl_pcmcia_write_attr);
extern void osl_pkt_frmnative; EXPORT_SYMBOL(osl_pkt_frmnative);
extern void osl_pkt_tonative; EXPORT_SYMBOL(osl_pkt_tonative);
extern void osl_pktalloced; EXPORT_SYMBOL(osl_pktalloced);
extern void osl_pktdup; EXPORT_SYMBOL(osl_pktdup);
extern void osl_pktdup_cpy; EXPORT_SYMBOL(osl_pktdup_cpy);
extern void osl_pktfree; EXPORT_SYMBOL(osl_pktfree);
extern void osl_pktget; EXPORT_SYMBOL(osl_pktget);
extern void osl_prefetch; EXPORT_SYMBOL(osl_prefetch);
extern void osl_rand; EXPORT_SYMBOL(osl_rand);
extern void osl_set_bus_handle; EXPORT_SYMBOL(osl_set_bus_handle);
extern void osl_sleep; EXPORT_SYMBOL(osl_sleep);
extern void osl_static_mem_deinit; EXPORT_SYMBOL(osl_static_mem_deinit);
extern void osl_static_mem_init; EXPORT_SYMBOL(osl_static_mem_init);
extern void pcicore_attach; EXPORT_SYMBOL(pcicore_attach);
extern void pcicore_deinit; EXPORT_SYMBOL(pcicore_deinit);
extern void pcicore_down; EXPORT_SYMBOL(pcicore_down);
extern void pcicore_find_pci_capability; EXPORT_SYMBOL(pcicore_find_pci_capability);
extern void pcicore_hwup; EXPORT_SYMBOL(pcicore_hwup);
extern void pcicore_init; EXPORT_SYMBOL(pcicore_init);
extern void pcicore_pciereg; EXPORT_SYMBOL(pcicore_pciereg);
extern void pcicore_pcieserdesreg; EXPORT_SYMBOL(pcicore_pcieserdesreg);
extern void pcicore_pmecap_fast; EXPORT_SYMBOL(pcicore_pmecap_fast);
extern void pcicore_pmeclr; EXPORT_SYMBOL(pcicore_pmeclr);
extern void pcicore_pmeen; EXPORT_SYMBOL(pcicore_pmeen);
extern void pcicore_pmestat; EXPORT_SYMBOL(pcicore_pmestat);
extern void pcicore_pmestatclr; EXPORT_SYMBOL(pcicore_pmestatclr);
extern void pcicore_sleep; EXPORT_SYMBOL(pcicore_sleep);
extern void pcicore_up; EXPORT_SYMBOL(pcicore_up);
extern void pcie_clkreq; EXPORT_SYMBOL(pcie_clkreq);
extern void pcie_configspace_cache; EXPORT_SYMBOL(pcie_configspace_cache);
extern void pcie_configspace_get; EXPORT_SYMBOL(pcie_configspace_get);
extern void pcie_configspace_restore; EXPORT_SYMBOL(pcie_configspace_restore);
extern void pcie_disable_TL_clk_gating; EXPORT_SYMBOL(pcie_disable_TL_clk_gating);
extern void pcie_get_L1substate; EXPORT_SYMBOL(pcie_get_L1substate);
extern void pcie_get_bar0; EXPORT_SYMBOL(pcie_get_bar0);
extern void pcie_get_link_speed; EXPORT_SYMBOL(pcie_get_link_speed);
extern void pcie_get_maxpayload_size; EXPORT_SYMBOL(pcie_get_maxpayload_size);
extern void pcie_get_request_size; EXPORT_SYMBOL(pcie_get_request_size);
extern void pcie_get_ssid; EXPORT_SYMBOL(pcie_get_ssid);
extern void pcie_hw_L1SS_war; EXPORT_SYMBOL(pcie_hw_L1SS_war);
extern void pcie_hw_LTR_war; EXPORT_SYMBOL(pcie_hw_LTR_war);
extern void pcie_lcreg; EXPORT_SYMBOL(pcie_lcreg);
extern void pcie_ltr_reg; EXPORT_SYMBOL(pcie_ltr_reg);
extern void pcie_ltr_war; EXPORT_SYMBOL(pcie_ltr_war);
extern void pcie_ltrenable; EXPORT_SYMBOL(pcie_ltrenable);
extern void pcie_obffenable; EXPORT_SYMBOL(pcie_obffenable);
extern void pcie_power_save_enable; EXPORT_SYMBOL(pcie_power_save_enable);
extern void pcie_readreg; EXPORT_SYMBOL(pcie_readreg);
extern void pcie_set_L1_entry_time; EXPORT_SYMBOL(pcie_set_L1_entry_time);
extern void pcie_set_L1substate; EXPORT_SYMBOL(pcie_set_L1substate);
extern void pcie_set_ctrlreg; EXPORT_SYMBOL(pcie_set_ctrlreg);
extern void pcie_set_error_injection; EXPORT_SYMBOL(pcie_set_error_injection);
extern void pcie_set_maxpayload_size; EXPORT_SYMBOL(pcie_set_maxpayload_size);
extern void pcie_set_request_size; EXPORT_SYMBOL(pcie_set_request_size);
extern void pcie_survive_perst; EXPORT_SYMBOL(pcie_survive_perst);
extern void pcie_war_ovr_aspm_update; EXPORT_SYMBOL(pcie_war_ovr_aspm_update);
extern void pcie_writereg; EXPORT_SYMBOL(pcie_writereg);
extern void pciedev_crwlpciegen2; EXPORT_SYMBOL(pciedev_crwlpciegen2);
extern void pciedev_prep_D3; EXPORT_SYMBOL(pciedev_prep_D3);
extern void pciedev_reg_pm_clk_period; EXPORT_SYMBOL(pciedev_reg_pm_clk_period);
extern void pcieltrhysteresiscnt_reg; EXPORT_SYMBOL(pcieltrhysteresiscnt_reg);
extern void pcieltrspacing_reg; EXPORT_SYMBOL(pcieltrspacing_reg);
extern void pcie_watchdog_reset; EXPORT_SYMBOL(pcie_watchdog_reset);
extern void sb_addrspace; EXPORT_SYMBOL(sb_addrspace);
extern void sb_addrspacesize; EXPORT_SYMBOL(sb_addrspacesize);
extern void sb_base; EXPORT_SYMBOL(sb_base);
extern void sb_commit; EXPORT_SYMBOL(sb_commit);
extern void sb_core_cflags; EXPORT_SYMBOL(sb_core_cflags);
extern void sb_core_cflags_wo; EXPORT_SYMBOL(sb_core_cflags_wo);
extern void sb_core_disable; EXPORT_SYMBOL(sb_core_disable);
extern void sb_core_reset; EXPORT_SYMBOL(sb_core_reset);
extern void sb_core_sflags; EXPORT_SYMBOL(sb_core_sflags);
extern void sb_coreid; EXPORT_SYMBOL(sb_coreid);
extern void sb_corereg; EXPORT_SYMBOL(sb_corereg);
extern void sb_corereg_addr; EXPORT_SYMBOL(sb_corereg_addr);
extern void sb_corerev; EXPORT_SYMBOL(sb_corerev);
extern void sb_corevendor; EXPORT_SYMBOL(sb_corevendor);
extern void sb_flag; EXPORT_SYMBOL(sb_flag);
extern void sb_intflag; EXPORT_SYMBOL(sb_intflag);
extern void sb_iscoreup; EXPORT_SYMBOL(sb_iscoreup);
extern void sb_numaddrspaces; EXPORT_SYMBOL(sb_numaddrspaces);
extern void sb_scan; EXPORT_SYMBOL(sb_scan);
extern void sb_set_initiator_to; EXPORT_SYMBOL(sb_set_initiator_to);
extern void sb_setcoreidx; EXPORT_SYMBOL(sb_setcoreidx);
extern void sb_setint; EXPORT_SYMBOL(sb_setint);
extern void sb_size; EXPORT_SYMBOL(sb_size);
extern void do_4360_pcie2_war; EXPORT_SYMBOL(do_4360_pcie2_war);
extern void si_addrspace; EXPORT_SYMBOL(si_addrspace);
extern void si_addrspacesize; EXPORT_SYMBOL(si_addrspacesize);
extern void si_alp_clock; EXPORT_SYMBOL(si_alp_clock);
extern void si_attach; EXPORT_SYMBOL(si_attach);
extern void si_backplane64; EXPORT_SYMBOL(si_backplane64);
extern void si_bpind_access; EXPORT_SYMBOL(si_bpind_access);
extern void si_btc_enable_chipcontrol; EXPORT_SYMBOL(si_btc_enable_chipcontrol);
extern void si_btcgpiowar; EXPORT_SYMBOL(si_btcgpiowar);
extern void si_btcombo_43228_war; EXPORT_SYMBOL(si_btcombo_43228_war);
extern void si_btcombo_p250_4313_war; EXPORT_SYMBOL(si_btcombo_p250_4313_war);
extern void si_cc_get_reg16; EXPORT_SYMBOL(si_cc_get_reg16);
extern void si_cc_get_reg32; EXPORT_SYMBOL(si_cc_get_reg32);
extern void si_cc_set_reg32; EXPORT_SYMBOL(si_cc_set_reg32);
extern void si_ccreg; EXPORT_SYMBOL(si_ccreg);
extern void si_chip_hostif; EXPORT_SYMBOL(si_chip_hostif);
extern void si_chipcontrl_btshd0_4331; EXPORT_SYMBOL(si_chipcontrl_btshd0_4331);
extern void si_chipcontrl_epa4331; EXPORT_SYMBOL(si_chipcontrl_epa4331);
extern void si_chipcontrl_epa4331_wowl; EXPORT_SYMBOL(si_chipcontrl_epa4331_wowl);
extern void si_chipcontrl_read; EXPORT_SYMBOL(si_chipcontrl_read);
extern void si_chipcontrl_restore; EXPORT_SYMBOL(si_chipcontrl_restore);
extern void si_chipcontrl_srom4360; EXPORT_SYMBOL(si_chipcontrl_srom4360);
extern void si_chipid; EXPORT_SYMBOL(si_chipid);
extern void si_chippkg_set; EXPORT_SYMBOL(si_chippkg_set);
extern void si_cis_source; EXPORT_SYMBOL(si_cis_source);
extern void si_clear_backplane_to; EXPORT_SYMBOL(si_clear_backplane_to);
extern void si_clk_pmu_htavail_set; EXPORT_SYMBOL(si_clk_pmu_htavail_set);
extern void si_clkctl_cc; EXPORT_SYMBOL(si_clkctl_cc);
extern void si_clkctl_fast_pwrup_delay; EXPORT_SYMBOL(si_clkctl_fast_pwrup_delay);
extern void si_clkctl_init; EXPORT_SYMBOL(si_clkctl_init);
extern void si_clkctl_xtal; EXPORT_SYMBOL(si_clkctl_xtal);
extern void si_clock; EXPORT_SYMBOL(si_clock);
extern void si_clock_rate; EXPORT_SYMBOL(si_clock_rate);
extern void si_coded_devpathvar; EXPORT_SYMBOL(si_coded_devpathvar);
extern void si_config_4364_d11_oob; EXPORT_SYMBOL(si_config_4364_d11_oob);
extern void si_config_53573_d11_oob; EXPORT_SYMBOL(si_config_53573_d11_oob);
extern void si_core_cflags; EXPORT_SYMBOL(si_core_cflags);
extern void si_core_cflags_wo; EXPORT_SYMBOL(si_core_cflags_wo);
extern void si_core_disable; EXPORT_SYMBOL(si_core_disable);
extern void si_core_reset; EXPORT_SYMBOL(si_core_reset);
extern void si_core_sflags; EXPORT_SYMBOL(si_core_sflags);
extern void si_core_wrapperreg; EXPORT_SYMBOL(si_core_wrapperreg);
extern void si_coreaddrspaceX; EXPORT_SYMBOL(si_coreaddrspaceX);
extern void si_corebist; EXPORT_SYMBOL(si_corebist);
extern void si_coreid; EXPORT_SYMBOL(si_coreid);
extern void si_coreidx; EXPORT_SYMBOL(si_coreidx);
extern void si_corelist; EXPORT_SYMBOL(si_corelist);
extern void si_corepciid; EXPORT_SYMBOL(si_corepciid);
extern void si_corereg; EXPORT_SYMBOL(si_corereg);
extern void si_corereg_addr; EXPORT_SYMBOL(si_corereg_addr);
extern void si_corereg_ifup; EXPORT_SYMBOL(si_corereg_ifup);
extern void si_corereg_unit_ifup; EXPORT_SYMBOL(si_corereg_unit_ifup);
extern void si_coreregs; EXPORT_SYMBOL(si_coreregs);
extern void si_corerev; EXPORT_SYMBOL(si_corerev);
extern void si_coreunit; EXPORT_SYMBOL(si_coreunit);
extern void si_corevendor; EXPORT_SYMBOL(si_corevendor);
extern void si_d11_devid; EXPORT_SYMBOL(si_d11_devid);
extern void si_d11_switch_addrbase; EXPORT_SYMBOL(si_d11_switch_addrbase);
extern void si_deepsleep_count; EXPORT_SYMBOL(si_deepsleep_count);
extern void si_deregister_intr_callback; EXPORT_SYMBOL(si_deregister_intr_callback);
extern void si_detach; EXPORT_SYMBOL(si_detach);
extern void si_deviceremoved; EXPORT_SYMBOL(si_deviceremoved);
extern void si_devpath; EXPORT_SYMBOL(si_devpath);
extern void si_devpath_pcie; EXPORT_SYMBOL(si_devpath_pcie);
extern void si_enable_device_wake; EXPORT_SYMBOL(si_enable_device_wake);
extern void si_enable_perst_wake; EXPORT_SYMBOL(si_enable_perst_wake);
extern void si_epa_4313war; EXPORT_SYMBOL(si_epa_4313war);
extern void si_fabid; EXPORT_SYMBOL(si_fabid);
extern void si_findcoreidx; EXPORT_SYMBOL(si_findcoreidx);
extern void si_flag; EXPORT_SYMBOL(si_flag);
extern void si_flag_alt; EXPORT_SYMBOL(si_flag_alt);
extern void si_force_islanding; EXPORT_SYMBOL(si_force_islanding);
extern void si_gci_chipcontrol; EXPORT_SYMBOL(si_gci_chipcontrol);
extern void si_gci_chipctrl_overrides; EXPORT_SYMBOL(si_gci_chipctrl_overrides);
extern void si_gci_chipstatus; EXPORT_SYMBOL(si_gci_chipstatus);
extern void si_gci_clear_functionsel; EXPORT_SYMBOL(si_gci_clear_functionsel);
extern void si_gci_config_wake_pin; EXPORT_SYMBOL(si_gci_config_wake_pin);
extern void si_gci_direct; EXPORT_SYMBOL(si_gci_direct);
extern void si_gci_enable_gpio; EXPORT_SYMBOL(si_gci_enable_gpio);
extern void si_gci_free_wake_pin; EXPORT_SYMBOL(si_gci_free_wake_pin);
extern void si_gci_get_functionsel; EXPORT_SYMBOL(si_gci_get_functionsel);
extern void si_gci_gpio_status; EXPORT_SYMBOL(si_gci_gpio_status);
extern void si_gci_gpioint_handler_register; EXPORT_SYMBOL(si_gci_gpioint_handler_register);
extern void si_gci_gpioint_handler_unregister; EXPORT_SYMBOL(si_gci_gpioint_handler_unregister);
extern void si_gci_handler_process; EXPORT_SYMBOL(si_gci_handler_process);
extern void si_gci_host_wake_gpio_enable; EXPORT_SYMBOL(si_gci_host_wake_gpio_enable);
extern void si_gci_host_wake_gpio_init; EXPORT_SYMBOL(si_gci_host_wake_gpio_init);
extern void si_gci_indirect; EXPORT_SYMBOL(si_gci_indirect);
extern void si_gci_input; EXPORT_SYMBOL(si_gci_input);
extern void si_gci_int_enable; EXPORT_SYMBOL(si_gci_int_enable);
extern void si_gci_output; EXPORT_SYMBOL(si_gci_output);
extern void si_gci_preinit_upd_indirect; EXPORT_SYMBOL(si_gci_preinit_upd_indirect);
extern void si_gci_reset; EXPORT_SYMBOL(si_gci_reset);
extern void si_gci_set_femctrl; EXPORT_SYMBOL(si_gci_set_femctrl);
extern void si_gci_set_functionsel; EXPORT_SYMBOL(si_gci_set_functionsel);
extern void si_gci_uart_init; EXPORT_SYMBOL(si_gci_uart_init);
extern void si_get_macclk_mul_fact; EXPORT_SYMBOL(si_get_macclk_mul_fact);
extern void si_get_sromctl; EXPORT_SYMBOL(si_get_sromctl);
extern void si_getdevpathintvar; EXPORT_SYMBOL(si_getdevpathintvar);
extern void si_getdevpathvar; EXPORT_SYMBOL(si_getdevpathvar);
extern void si_getnvramflvar; EXPORT_SYMBOL(si_getnvramflvar);
extern void si_gpio_int_enable; EXPORT_SYMBOL(si_gpio_int_enable);
extern void si_gpiocontrol; EXPORT_SYMBOL(si_gpiocontrol);
extern void si_gpioevent; EXPORT_SYMBOL(si_gpioevent);
extern void si_gpioeventintmask; EXPORT_SYMBOL(si_gpioeventintmask);
extern void si_gpioin; EXPORT_SYMBOL(si_gpioin);
extern void si_gpiointmask; EXPORT_SYMBOL(si_gpiointmask);
extern void si_gpiointpolarity; EXPORT_SYMBOL(si_gpiointpolarity);
extern void si_gpioled; EXPORT_SYMBOL(si_gpioled);
extern void si_gpioout; EXPORT_SYMBOL(si_gpioout);
extern void si_gpioouten; EXPORT_SYMBOL(si_gpioouten);
extern void si_gpiopull; EXPORT_SYMBOL(si_gpiopull);
extern void si_gpiorelease; EXPORT_SYMBOL(si_gpiorelease);
extern void si_gpioreserve; EXPORT_SYMBOL(si_gpioreserve);
extern void si_gpiosetcore; EXPORT_SYMBOL(si_gpiosetcore);
extern void si_gpiotimerval; EXPORT_SYMBOL(si_gpiotimerval);
extern void si_ilp_clock; EXPORT_SYMBOL(si_ilp_clock);
extern void si_intflag; EXPORT_SYMBOL(si_intflag);
extern void si_is_otp_disabled; EXPORT_SYMBOL(si_is_otp_disabled);
extern void si_is_otp_powered; EXPORT_SYMBOL(si_is_otp_powered);
extern void si_is_sprom_available; EXPORT_SYMBOL(si_is_sprom_available);
extern void si_is_sprom_enabled; EXPORT_SYMBOL(si_is_sprom_enabled);
extern void si_iscoreup; EXPORT_SYMBOL(si_iscoreup);
extern void si_kattach; EXPORT_SYMBOL(si_kattach);
extern void si_ldo_war; EXPORT_SYMBOL(si_ldo_war);
extern void si_lowpwr_opt; EXPORT_SYMBOL(si_lowpwr_opt);
extern void si_muxenab; EXPORT_SYMBOL(si_muxenab);
extern void si_numaddrspaces; EXPORT_SYMBOL(si_numaddrspaces);
extern void si_numcoreunits; EXPORT_SYMBOL(si_numcoreunits);
extern void si_numd11coreunits; EXPORT_SYMBOL(si_numd11coreunits);
extern void si_osh; EXPORT_SYMBOL(si_osh);
extern void si_otp_fabid; EXPORT_SYMBOL(si_otp_fabid);
extern void si_otp_power; EXPORT_SYMBOL(si_otp_power);
extern void si_pci_down; EXPORT_SYMBOL(si_pci_down);
extern void si_pci_fixcfg; EXPORT_SYMBOL(si_pci_fixcfg);
extern void si_pci_pmeclr; EXPORT_SYMBOL(si_pci_pmeclr);
extern void si_pci_pmeen; EXPORT_SYMBOL(si_pci_pmeen);
extern void si_pci_pmestat; EXPORT_SYMBOL(si_pci_pmestat);
extern void si_pci_pmestatclr; EXPORT_SYMBOL(si_pci_pmestatclr);
extern void si_pci_setup; EXPORT_SYMBOL(si_pci_setup);
extern void si_pci_sleep; EXPORT_SYMBOL(si_pci_sleep);
extern void si_pci_up; EXPORT_SYMBOL(si_pci_up);
extern void si_pci_war16165; EXPORT_SYMBOL(si_pci_war16165);
extern void si_pcie_configspace_cache; EXPORT_SYMBOL(si_pcie_configspace_cache);
extern void si_pcie_configspace_get; EXPORT_SYMBOL(si_pcie_configspace_get);
extern void si_pcie_configspace_restore; EXPORT_SYMBOL(si_pcie_configspace_restore);
extern void si_pcie_disable_oobselltr; EXPORT_SYMBOL(si_pcie_disable_oobselltr);
extern void si_pcie_get_L1substate; EXPORT_SYMBOL(si_pcie_get_L1substate);
extern void si_pcie_get_bar0; EXPORT_SYMBOL(si_pcie_get_bar0);
extern void si_pcie_get_maxpayload_size; EXPORT_SYMBOL(si_pcie_get_maxpayload_size);
extern void si_pcie_get_request_size; EXPORT_SYMBOL(si_pcie_get_request_size);
extern void si_pcie_get_ssid; EXPORT_SYMBOL(si_pcie_get_ssid);
extern void si_pcie_hw_L1SS_war; EXPORT_SYMBOL(si_pcie_hw_L1SS_war);
extern void si_pcie_hw_LTR_war; EXPORT_SYMBOL(si_pcie_hw_LTR_war);
extern void si_pcie_ltr_war; EXPORT_SYMBOL(si_pcie_ltr_war);
extern void si_pcie_power_save_enable; EXPORT_SYMBOL(si_pcie_power_save_enable);
extern void si_pcie_prep_D3; EXPORT_SYMBOL(si_pcie_prep_D3);
extern void si_pcie_readreg; EXPORT_SYMBOL(si_pcie_readreg);
extern void si_pcie_set_L1substate; EXPORT_SYMBOL(si_pcie_set_L1substate);
extern void si_pcie_set_ctrlreg; EXPORT_SYMBOL(si_pcie_set_ctrlreg);
extern void si_pcie_set_error_injection; EXPORT_SYMBOL(si_pcie_set_error_injection);
extern void si_pcie_set_maxpayload_size; EXPORT_SYMBOL(si_pcie_set_maxpayload_size);
extern void si_pcie_set_request_size; EXPORT_SYMBOL(si_pcie_set_request_size);
extern void si_pcie_war_ovr_update; EXPORT_SYMBOL(si_pcie_war_ovr_update);
extern void si_pcie_writereg; EXPORT_SYMBOL(si_pcie_writereg);
extern void si_pcieclkreq; EXPORT_SYMBOL(si_pcieclkreq);
extern void si_pciedev_crwlpciegen2; EXPORT_SYMBOL(si_pciedev_crwlpciegen2);
extern void si_pciedev_reg_pm_clk_period; EXPORT_SYMBOL(si_pciedev_reg_pm_clk_period);
extern void si_pcielcreg; EXPORT_SYMBOL(si_pcielcreg);
extern void si_pcieltr_reg; EXPORT_SYMBOL(si_pcieltr_reg);
extern void si_pcieltrenable; EXPORT_SYMBOL(si_pcieltrenable);
extern void si_pcieltrhysteresiscnt_reg; EXPORT_SYMBOL(si_pcieltrhysteresiscnt_reg);
extern void si_pcieltrspacing_reg; EXPORT_SYMBOL(si_pcieltrspacing_reg);
extern void si_pcieobffenable; EXPORT_SYMBOL(si_pcieobffenable);
extern void si_pciereg; EXPORT_SYMBOL(si_pciereg);
extern void si_pcieserdesreg; EXPORT_SYMBOL(si_pcieserdesreg);
extern void si_pcmcia_init; EXPORT_SYMBOL(si_pcmcia_init);
extern void si_pll_closeloop; EXPORT_SYMBOL(si_pll_closeloop);
extern void si_pll_reset; EXPORT_SYMBOL(si_pll_reset);
extern void si_pll_sr_reinit; EXPORT_SYMBOL(si_pll_sr_reinit);
extern void si_pmu_avb_clk_set; EXPORT_SYMBOL(si_pmu_avb_clk_set);
extern void si_pmu_corereg; EXPORT_SYMBOL(si_pmu_corereg);
extern void si_pmu_res_req_timer_clr; EXPORT_SYMBOL(si_pmu_res_req_timer_clr);
extern void si_pmu_rfldo; EXPORT_SYMBOL(si_pmu_rfldo);
extern void si_pmu_synth_pwrsw_4313_war; EXPORT_SYMBOL(si_pmu_synth_pwrsw_4313_war);
extern void si_read_pmu_autopll; EXPORT_SYMBOL(si_read_pmu_autopll);
extern void si_register_intr_callback; EXPORT_SYMBOL(si_register_intr_callback);
extern void si_restore_core; EXPORT_SYMBOL(si_restore_core);
extern void si_seci_init; EXPORT_SYMBOL(si_seci_init);
extern void si_set_sromctl; EXPORT_SYMBOL(si_set_sromctl);
extern void si_setcore; EXPORT_SYMBOL(si_setcore);
extern void si_setcoreidx; EXPORT_SYMBOL(si_setcoreidx);
extern void si_setint; EXPORT_SYMBOL(si_setint);
extern void si_setosh; EXPORT_SYMBOL(si_setosh);
extern void si_slave_wrapper_add; EXPORT_SYMBOL(si_slave_wrapper_add);
extern void si_socdevram; EXPORT_SYMBOL(si_socdevram);
extern void si_socdevram_pkg; EXPORT_SYMBOL(si_socdevram_pkg);
extern void si_socdevram_remap_isenb; EXPORT_SYMBOL(si_socdevram_remap_isenb);
extern void si_socdevram_remap_size; EXPORT_SYMBOL(si_socdevram_remap_size);
extern void si_socdevram_size; EXPORT_SYMBOL(si_socdevram_size);
extern void si_socram_size; EXPORT_SYMBOL(si_socram_size);
extern void si_socram_srmem_size; EXPORT_SYMBOL(si_socram_srmem_size);
extern void si_sprom_enable; EXPORT_SYMBOL(si_sprom_enable);
extern void si_survive_perst_war; EXPORT_SYMBOL(si_survive_perst_war);
extern void si_swdenable; EXPORT_SYMBOL(si_swdenable);
extern void si_switch_core; EXPORT_SYMBOL(si_switch_core);
extern void si_taclear; EXPORT_SYMBOL(si_taclear);
extern void si_update_macclk_mul_fact; EXPORT_SYMBOL(si_update_macclk_mul_fact);
extern void si_update_masks; EXPORT_SYMBOL(si_update_masks);
extern void si_watchdog; EXPORT_SYMBOL(si_watchdog);
extern void si_watchdog_ms; EXPORT_SYMBOL(si_watchdog_ms);
extern void si_watchdog_msticks; EXPORT_SYMBOL(si_watchdog_msticks);
extern void si_wrapperreg; EXPORT_SYMBOL(si_wrapperreg);
extern void si_wrapperregs; EXPORT_SYMBOL(si_wrapperregs);
extern void bcm_robo_attach; EXPORT_SYMBOL(bcm_robo_attach);
extern void bcm_robo_config_vlan; EXPORT_SYMBOL(bcm_robo_config_vlan);
extern void bcm_robo_detach; EXPORT_SYMBOL(bcm_robo_detach);
extern void bcm_robo_enable_device; EXPORT_SYMBOL(bcm_robo_enable_device);
extern void bcm_robo_enable_switch; EXPORT_SYMBOL(bcm_robo_enable_switch);
extern void bcm_robo_flow_control; EXPORT_SYMBOL(bcm_robo_flow_control);
extern void pdesc25; EXPORT_SYMBOL(pdesc25);
extern void pdesc97; EXPORT_SYMBOL(pdesc97);
extern void robo_eee_advertise_init; EXPORT_SYMBOL(robo_eee_advertise_init);
extern void robo_fa_aux_enable; EXPORT_SYMBOL(robo_fa_aux_enable);
extern void robo_fa_aux_init; EXPORT_SYMBOL(robo_fa_aux_init);
extern void robo_fa_enable; EXPORT_SYMBOL(robo_fa_enable);
extern void robo_power_save_mode; EXPORT_SYMBOL(robo_power_save_mode);
extern void robo_power_save_mode_get; EXPORT_SYMBOL(robo_power_save_mode_get);
extern void robo_power_save_mode_set; EXPORT_SYMBOL(robo_power_save_mode_set);
extern void robo_power_save_mode_update; EXPORT_SYMBOL(robo_power_save_mode_update);
extern void robo_power_save_toggle; EXPORT_SYMBOL(robo_power_save_toggle);
extern void robo_watchdog; EXPORT_SYMBOL(robo_watchdog);
