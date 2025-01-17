#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_CODE_POINT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class diag_code_point_type_t : int32_t                      
    {                                                                
        none =                                               0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        recommend_func_vidpn =                               0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        os_recommended_vidpn =                               0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdc_log_failure =                                    0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdc_invalidate_error =                               0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cds_log_failure =                                    0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cds_failure_db =                                     0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retrieve_btl =                                       0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retrieve_db =                                        0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        qdc_log_failure =                                    0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_on_gdi =                                       0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_off_gdi =                                      0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_on_monitor =                                   0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_off_monitor =                                  0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_dim_monitor =                                  0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_undim_monitor =                                0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_backtrack =                                      0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_closest_target_mode =                            0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_no_exact_source_mode =                           0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_no_exact_target_mode =                           0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_source_mode_not_pinned =                         0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_target_mode_not_pinned =                         0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_restarted =                                      0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tdr =                                                0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acpi_event_notification =                            0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        createmdev_use_default_mode =                        0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        connected_set_log_failure =                          0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalidate_dxgk_mode_cache =                         0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rebuild_dxgk_mode_cache =                            0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        createfunvidpn_relax_refresh_match =                 0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        createfunvidpn_ccdbml_fail_vistabml_successed =      0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_best_source_mode =                               0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bml_best_target_mode =                               0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_device =                                         0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_adapter =                                      0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_adapter =                                       0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        child_polling =                                      0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        child_polling_target =                               0x26,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indicate_child_status =                              0x27,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_irp =                                         0x28,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        change_unsupported_monitor_mode_flag =               0x29,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acpi_notify_callback =                               0x2a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_exclude_evictall_disablegdi =       0x2b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_exclude_evictall_enablegdi =        0x2c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_exclude_modeswitch =                0x2d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_sync_monitor_event =                0x2e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_pnp_notify_gdi =                    0x2f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_pnp_enable_vga =                    0x30,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_tdr_switch_gdi =                    0x31,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_cdd_create_device_failed =          0x32,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_cdd_device_removed =                0x33,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_cdd_drvassertmode_true_failed =     0x34,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoportcallout_cdd_recreate_device_failed =        0x35,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdd_mapshadowbuffer_failed =                         0x36,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        commit_vidpn_log_failure =                           0x37,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_recommend_log_failure =                       0x38,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdc_enforced_clone_path_invalid_source_idx =         0x39,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        drvprobeandcapture_failed =                          0x3a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dxgkcddenable_optimized_mode_change =                0x3b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dxgksetdisplaymode_optimized_mode_change =           0x3c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mon_depart_getrecenttop_fail =                       0x3d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mon_arrive_inc_add_fail =                            0x3e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ccd_database_persist =                               0x3f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ccd_database_persist_no_connectivity_hash =          0x40,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdd_disable_failed =                                 0x41,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_backlight_optimization =                         0x42,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_brightness =                                     0x43,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_vidpn_source_visibility =                        0x44,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miracast_sync_start =                                0x45,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miracast_bml_raw_target_mode_backtrack =             0x46,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miracast_stop =                                      0x47,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miracast_teardown =                                  0x48,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miracast_connected_standby =                         0x49,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miracast_umdf_timeout =                              0x4a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdc_retry =                                          0x4b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bdd_fallback =                                       0x4c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        qdc_process_stat =                                   0x4d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpi_legacy_settings =                                0x4e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpi_settings_update =                                0x4f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ddicommitvidpn =                                     0x50,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ccd_database_load =                                  0x51,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mon_multiple_pending_hpds =                          0x52,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_high_precision_brightness =                   0x53,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        setgammaramp_failed =                                0x54,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        id_bugcheck =                                        0x55,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                                              0x55,     // Windows 10 v1607
        ddicommitvidpn_ex =                                  0x56,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        settimingsfromvidpn =                                0x57,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        link_training =                                      0x58,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        glitch_info =                                        0x59,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        win32k_set_monitor_power_state_start =               0x5a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        win32k_set_monitor_power_state_end =                 0x5b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_connection_change =                           0x5c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_connection_change_failure =                   0x5d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        change_gammaramp =                                   0x5e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        change_dpi_after_logon =                             0x5f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        settimingsfromvidpn_log_failure =                    0x60,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        retry_on_removing_all_changed_paths =                0x61,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fdo_stop_device_and_release_post_display_ownership = 0x62,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdc_fail_in_usermode =                               0x63,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        qdc_fail_in_usermode =                               0x64,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sync_lock_disabled =                                 0x65,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hpd_filter_start =                                   0x66,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hpd_filter_end =                                     0x67,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        deactivate_failed_path =                             0x68,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_dispbroker_message_failure =                    0x69,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idd_set_display_config =                             0x6a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        videoport_callout_during_session_switch =            0x6b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        connect_dispbroker_failure =                         0x6c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_change_event =                               0x6d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idd_set_render_adapter =                             0x6e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        potential_pnp_transition_dead_lock =                 0x6f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispbroker_connect_alpc_port =                       0x70,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_update_cached_display_config =                0x71,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idd_set_display_config_gdo_timeout =                 0x72,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dwm_process_startstop =                              0x73,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                                                0x73,     // Windows 10 v2004, Windows 10 v20H2
        adapter_ordinal_exceed_limit =                       0x74,     // Windows 11
        rapid_hpd_trigger =                                  0x75,     // Windows 11
        rapid_hpd_extend =                                   0x76,     // Windows 11
        drvcds_failure_stage =                               0x77,     // Windows 11
        sdc_start =                                          0x78,     // Windows 11
        enable_monitor_virtual_refresh_rate =                0x79,     // Windows 11
        hpd_mask =                                           0x7a,     // Windows 11
        hpd_ignored =                                        0x7b,     // Windows 11
        usb4_async_monitor_power_on_failure =                0x7c,     // Windows 11
        usb4_async_monitor_power_on_pofx_ref =               0x7d,     // Windows 11
        //max =                                              0x7e,     // Windows 11
        usb4_async_monitor_power_process_skipped_removal =   0x7e,     // Windows 11
        force_uint32 =                                       0xff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                               
};
