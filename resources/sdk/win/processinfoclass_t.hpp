#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROCESSINFOCLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class processinfoclass_t : int32_t                          
    {                                                                
        process_basic_information =                          0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_quota_limits =                               0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_io_counters =                                0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_vm_counters =                                0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_times =                                      0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_base_priority =                              0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_raise_priority =                             0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_debug_port =                                 0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_exception_port =                             0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_access_token =                               0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ldt_information =                            0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ldt_size =                                   0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_default_hard_error_mode =                    0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_io_port_handlers =                           0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_pooled_usage_and_limits =                    0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_working_set_watch =                          0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_user_mode_iopl =                             0x10,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_enable_alignment_fault_fixup =               0x11,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_priority_class =                             0x12,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_wx86_information =                           0x13,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_handle_count =                               0x14,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_affinity_mask =                              0x15,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_priority_boost =                             0x16,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_device_map =                                 0x17,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_session_information =                        0x18,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_foreground_information =                     0x19,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_wow64_information =                          0x1a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_image_file_name =                            0x1b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_luid_device_maps_enabled =                   0x1c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_break_on_termination =                       0x1d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_debug_object_handle =                        0x1e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_debug_flags =                                0x1f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_handle_tracing =                             0x20,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_io_priority =                                0x21,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_execute_flags =                              0x22,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_resource_management =                        0x23,     // WDK 10
        process_tls_information =                            0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_cookie =                                     0x24,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_image_information =                          0x25,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_cycle_time =                                 0x26,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_page_priority =                              0x27,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_instrumentation_callback =                   0x28,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_thread_stack_allocation =                    0x29,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_working_set_watch_ex =                       0x2a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_image_file_name_win32 =                      0x2b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_image_file_mapping =                         0x2c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_affinity_update_mode =                       0x2d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_memory_allocation_mode =                     0x2e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_group_information =                          0x2f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_token_virtualization_enabled =               0x30,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_console_host_process =                       0x31,     // WDK 10
        process_owner_information =                          0x31,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_window_information =                         0x32,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_handle_information =                         0x33,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_mitigation_policy =                          0x34,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_dynamic_function_table_information =         0x35,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_handle_checking_mode =                       0x36,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_keep_alive_count =                           0x37,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_revoke_file_handles =                        0x38,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_working_set_control =                        0x39,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_handle_table =                               0x3a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_check_stack_extents_mode =                   0x3b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_command_line_information =                   0x3c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_protection_information =                     0x3d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_memory_exhaustion =                          0x3e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_fault_information =                          0x3f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_telemetry_id_information =                   0x40,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_commit_release_information =                 0x41,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_default_cpu_sets_information =               0x42,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_reserved1_information =                      0x42,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_allowed_cpu_sets_information =               0x43,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_reserved2_information =                      0x43,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_subsystem_process =                          0x44,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_job_memory_information =                     0x45,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_in_private =                                 0x46,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_raise_um_exception_on_invalid_handle_close = 0x47,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ium_challenge_response =                     0x48,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_child_process_information =                  0x49,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_high_graphics_priority_information =         0x4a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_process_info_class =                           0x4b,     // Windows 10 v1607
        process_subsystem_information =                      0x4b,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_energy_values =                              0x4c,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_activity_throttle_state =                    0x4d,     // WDK 10
        process_power_throttling_state =                     0x4d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_activity_throttle_policy =                   0x4e,     // WDK 10
        process_reserved3_information =                      0x4e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_win32k_syscall_filter_information =          0x4f,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_disable_system_allowed_cpu_sets =            0x50,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_wake_information =                           0x51,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_energy_tracking_state =                      0x52,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_manage_writes_to_executable_memory =         0x53,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_capture_trustlet_live_dump =                 0x54,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_telemetry_coverage =                         0x55,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_enclave_information =                        0x56,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_enable_read_write_vm_logging =               0x57,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_uptime_information =                         0x58,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_image_section =                              0x59,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_debug_auth_information =                     0x5a,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_system_resource_management =                 0x5b,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_sequence_number =                            0x5c,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_loader_detour =                              0x5d,     // WDK 10, Windows 10 v2004, Windows 10 v20H2
        process_reserved4_information =                      0x5d,     // Windows 11
        process_security_domain_information =                0x5e,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_combine_security_domains_information =       0x5f,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_enable_logging =                             0x60,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_leap_second_information =                    0x61,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_fiber_shadow_stack_allocation =              0x62,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_free_fiber_shadow_stack_allocation =         0x63,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_alt_system_call_information =                0x64,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_dynamic_eh_continuation_targets =            0x65,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_process_info_class =                           0x66,     // WDK 10, Windows 10 v2004
        process_dynamic_enforced_cet_compatible_ranges =     0x66,     // Windows 11, Windows 10 v20H2
        max_process_info_class =                             0x67,     // Windows 10 v20H2
        process_create_state_change =                        0x67,     // Windows 11
        process_apply_state_change =                         0x68,     // Windows 11
        process_enable_optional_x_state_features =           0x69,     // Windows 11
        //max_process_info_class =                           0x6a,     // Windows 11
    };                                                               
};