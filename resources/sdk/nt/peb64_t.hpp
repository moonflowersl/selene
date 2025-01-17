#pragma once
#include <sdkgen/support_library.hpp>
#include "list_entry64_t.hpp"

#include "magic/peb64_t.start.hpp"
namespace nt
{
    // [struct _PEB64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct peb64_t                                                                                    
    {                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                            
        _m000 uint8_t                                         inherited_address_space;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InheritedAddressSpace
        _m001 uint8_t                                         read_image_file_exec_options;             //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ReadImageFileExecOptions
        _m002 uint8_t                                         being_debugged;                           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BeingDebugged
        _m003 uint8_t                                         bit_field;                                //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .BitField
        _m004 uint1_t                                         image_uses_large_pages;                   //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .ImageUsesLargePages
        _m005 uint1_t                                         is_protected_process;                     //{ +0x0003@1  +0x0003@1  +0x0003@1  +0x0003@1  } | .IsProtectedProcess
        _m006 uint1_t                                         is_image_dynamically_relocated;           //{ +0x0003@2  +0x0003@2  +0x0003@2  +0x0003@2  } | .IsImageDynamicallyRelocated
        _m007 uint1_t                                         skip_patching_user32_forwarders;          //{ +0x0003@3  +0x0003@3  +0x0003@3  +0x0003@3  } | .SkipPatchingUser32Forwarders
        _m008 uint1_t                                         is_packaged_process;                      //{ +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  } | .IsPackagedProcess
        _m009 uint1_t                                         is_app_container;                         //{ +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  } | .IsAppContainer
        _m010 uint1_t                                         is_protected_process_light;               //{ +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  } | .IsProtectedProcessLight
        _m011 uint1_t                                         is_long_path_aware_process;               //{ +0x0003@7  +0x0003@7  +0x0003@7  +0x0003@7  } | .IsLongPathAwareProcess
        _m012 uint64_t                                        mutant;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Mutant
        _m013 uint64_t                                        image_base_address;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageBaseAddress
        _m014 uint64_t                                        ldr;                                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Ldr
        _m015 uint64_t                                        process_parameters;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProcessParameters
        _m016 uint64_t                                        sub_system_data;                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SubSystemData
        _m017 uint64_t                                        process_heap;                             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ProcessHeap
        _m018 uint64_t                                        fast_peb_lock;                            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FastPebLock
        _m019 uint64_t                                        atl_thunk_s_list_ptr;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AtlThunkSListPtr
        _m020 uint64_t                                        ifeo_key;                                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .IFEOKey
        _m021 uint32_t                                        cross_process_flags;                      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CrossProcessFlags
        _m022 uint1_t                                         process_in_job;                           //{ +0x0050@0  +0x0050@0  +0x0050@0  +0x0050@0  } | .ProcessInJob
        _m023 uint1_t                                         process_initializing;                     //{ +0x0050@1  +0x0050@1  +0x0050@1  +0x0050@1  } | .ProcessInitializing
        _m024 uint1_t                                         process_using_veh;                        //{ +0x0050@2  +0x0050@2  +0x0050@2  +0x0050@2  } | .ProcessUsingVEH
        _m025 uint1_t                                         process_using_vch;                        //{ +0x0050@3  +0x0050@3  +0x0050@3  +0x0050@3  } | .ProcessUsingVCH
        _m026 uint1_t                                         process_using_fth;                        //{ +0x0050@4  +0x0050@4  +0x0050@4  +0x0050@4  } | .ProcessUsingFTH
        _m027 uint64_t                                        kernel_callback_table;                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .KernelCallbackTable
        _m028 uint64_t                                        user_shared_info_ptr;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .UserSharedInfoPtr
        _m029 sdk::variant<sdk::array<uint32_t, 1>, uint32_t> system_reserved;                          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SystemReserved
        _m030 uint32_t                                        atl_thunk_s_list_ptr32;                   //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .AtlThunkSListPtr32
        _m031 uint64_t                                        api_set_map;                              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ApiSetMap
        _m032 uint32_t                                        tls_expansion_counter;                    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .TlsExpansionCounter
        _m033 uint64_t                                        tls_bitmap;                               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .TlsBitmap
        _m034 sdk::array<uint32_t, 2>                         tls_bitmap_bits;                          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .TlsBitmapBits
        _m035 uint64_t                                        read_only_shared_memory_base;             //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ReadOnlySharedMemoryBase
        _m036 uint64_t                                        read_only_static_server_data;             //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ReadOnlyStaticServerData
        _m037 uint64_t                                        ansi_code_page_data;                      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .AnsiCodePageData
        _m038 uint64_t                                        oem_code_page_data;                       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .OemCodePageData
        _m039 uint64_t                                        unicode_case_table_data;                  //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .UnicodeCaseTableData
        _m040 uint32_t                                        number_of_processors;                     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .NumberOfProcessors
        _m041 uint32_t                                        nt_global_flag;                           //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .NtGlobalFlag
        _m042 int64_t                                         critical_section_timeout;                 //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .CriticalSectionTimeout
        _m043 uint64_t                                        heap_segment_reserve;                     //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .HeapSegmentReserve
        _m044 uint64_t                                        heap_segment_commit;                      //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .HeapSegmentCommit
        _m045 uint64_t                                        heap_de_commit_total_free_threshold;      //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .HeapDeCommitTotalFreeThreshold
        _m046 uint64_t                                        heap_de_commit_free_block_threshold;      //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .HeapDeCommitFreeBlockThreshold
        _m047 uint32_t                                        number_of_heaps;                          //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .NumberOfHeaps
        _m048 uint32_t                                        maximum_number_of_heaps;                  //{ +0x00ec    +0x00ec    +0x00ec    +0x00ec    } | .MaximumNumberOfHeaps
        _m049 uint64_t                                        process_heaps;                            //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .ProcessHeaps
        _m050 uint64_t                                        gdi_shared_handle_table;                  //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .GdiSharedHandleTable
        _m051 uint64_t                                        process_starter_helper;                   //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .ProcessStarterHelper
        _m052 uint32_t                                        gdi_dc_attribute_list;                    //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .GdiDCAttributeList
        _m053 uint64_t                                        loader_lock;                              //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .LoaderLock
        _m054 uint32_t                                        os_major_version;                         //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .OSMajorVersion
        _m055 uint32_t                                        os_minor_version;                         //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .OSMinorVersion
        _m056 uint16_t                                        os_build_number;                          //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .OSBuildNumber
        _m057 uint16_t                                        oscsd_version;                            //{ +0x0122    +0x0122    +0x0122    +0x0122    } | .OSCSDVersion
        _m058 uint32_t                                        os_platform_id;                           //{ +0x0124    +0x0124    +0x0124    +0x0124    } | .OSPlatformId
        _m059 uint32_t                                        image_subsystem;                          //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .ImageSubsystem
        _m060 uint32_t                                        image_subsystem_major_version;            //{ +0x012c    +0x012c    +0x012c    +0x012c    } | .ImageSubsystemMajorVersion
        _m061 uint32_t                                        image_subsystem_minor_version;            //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .ImageSubsystemMinorVersion
        _m062 uint64_t                                        active_process_affinity_mask;             //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .ActiveProcessAffinityMask
        _m063 sdk::array<uint32_t, 60>                        gdi_handle_buffer;                        //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .GdiHandleBuffer
        _m064 uint64_t                                        post_process_init_routine;                //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .PostProcessInitRoutine
        _m065 uint64_t                                        tls_expansion_bitmap;                     //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .TlsExpansionBitmap
        _m066 sdk::array<uint32_t, 32>                        tls_expansion_bitmap_bits;                //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .TlsExpansionBitmapBits
        _m067 uint32_t                                        session_id;                               //{ +0x02c0    +0x02c0    +0x02c0    +0x02c0    } | .SessionId
        _m068 uint64_t                                        app_compat_flags;                         //{ +0x02c8    +0x02c8    +0x02c8    +0x02c8    } | .AppCompatFlags
        _m069 uint64_t                                        app_compat_flags_user;                    //{ +0x02d0    +0x02d0    +0x02d0    +0x02d0    } | .AppCompatFlagsUser
        _m070 uint64_t                                        p_shim_data;                              //{ +0x02d8    +0x02d8    +0x02d8    +0x02d8    } | .pShimData
        _m071 uint64_t                                        app_compat_info;                          //{ +0x02e0    +0x02e0    +0x02e0    +0x02e0    } | .AppCompatInfo
        _m072 nt::ascii_view                                  csd_version;                              //{ +0x02e8    +0x02e8    +0x02e8    +0x02e8    } | .CSDVersion
        _m073 uint64_t                                        activation_context_data;                  //{ +0x02f8    +0x02f8    +0x02f8    +0x02f8    } | .ActivationContextData
        _m074 uint64_t                                        process_assembly_storage_map;             //{ +0x0300    +0x0300    +0x0300    +0x0300    } | .ProcessAssemblyStorageMap
        _m075 uint64_t                                        system_default_activation_context_data;   //{ +0x0308    +0x0308    +0x0308    +0x0308    } | .SystemDefaultActivationContextData
        _m076 uint64_t                                        system_assembly_storage_map;              //{ +0x0310    +0x0310    +0x0310    +0x0310    } | .SystemAssemblyStorageMap
        _m077 uint64_t                                        minimum_stack_commit;                     //{ +0x0318    +0x0318    +0x0318    +0x0318    } | .MinimumStackCommit
        _m078 uint64_t                                        wer_registration_data;                    //{ +0x0358    +0x0358    +0x0358    +0x0358    } | .WerRegistrationData
        _m079 uint64_t                                        wer_ship_assert_ptr;                      //{ +0x0360    +0x0360    +0x0360    +0x0360    } | .WerShipAssertPtr
        _m080 uint64_t                                        p_image_header_hash;                      //{ +0x0370    +0x0370    +0x0370    +0x0370    } | .pImageHeaderHash
        _m081 uint32_t                                        tracing_flags;                            //{ +0x0378    +0x0378    +0x0378    +0x0378    } | .TracingFlags
        _m082 uint1_t                                         heap_tracing_enabled;                     //{ +0x0378@0  +0x0378@0  +0x0378@0  +0x0378@0  } | .HeapTracingEnabled
        _m083 uint1_t                                         crit_sec_tracing_enabled;                 //{ +0x0378@1  +0x0378@1  +0x0378@1  +0x0378@1  } | .CritSecTracingEnabled
        _m084 uint1_t                                         lib_loader_tracing_enabled;               //{ +0x0378@2  +0x0378@2  +0x0378@2  +0x0378@2  } | .LibLoaderTracingEnabled
        _m085 uint29_t                                        spare_tracing_bits;                       //{ +0x0378@3  +0x0378@3  +0x0378@3  +0x0378@3  } | .SpareTracingBits
        _m086 uint64_t                                        csr_server_read_only_shared_memory_base;  //{ +0x0380    +0x0380    +0x0380    +0x0380    } | .CsrServerReadOnlySharedMemoryBase
        _m087 uint64_t                                        tpp_workerp_list_lock;                    //{ +0x0388    +0x0388    +0x0388    +0x0388    } | .TppWorkerpListLock
        _m088 struct nt::list_entry64_t                       tpp_workerp_list;                         //{ +0x0390    +0x0390    +0x0390    +0x0390    } | .TppWorkerpList
        _m089 sdk::array<uint64_t, 128>                       wait_on_address_hash_table;               //{ +0x03a0    +0x03a0    +0x03a0    +0x03a0    } | .WaitOnAddressHashTable
                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                            
        _m090 uint1_t                                         process_previously_throttled;             //{ +0x0050@5  +0x0050@5  +0x0050@5  } | .ProcessPreviouslyThrottled
        _m091 uint1_t                                         process_currently_throttled;              //{ +0x0050@6  +0x0050@6  +0x0050@6  } | .ProcessCurrentlyThrottled
        _m092 uint1_t                                         process_images_hot_patched;               //{ +0x0050@7  +0x0050@7  +0x0050@7  } | .ProcessImagesHotPatched
        _m093 uint64_t                                        shared_data;                              //{ +0x0090    +0x0090    +0x0090    } | .SharedData
        _m094 sdk::array<uint32_t, 5>                         spare_ulongs;                             //{ +0x0340    +0x0344    +0x0340    } | .SpareUlongs
        _m095 uint64_t                                        telemetry_coverage_header;                //{ +0x07a0    +0x07a0    +0x07a0    } | .TelemetryCoverageHeader
        _m096 uint32_t                                        cloud_file_flags;                         //{ +0x07a8    +0x07a8    +0x07a8    } | .CloudFileFlags
        _m097 uint32_t                                        cloud_file_diag_flags;                    //{ +0x07ac    +0x07ac    +0x07ac    } | .CloudFileDiagFlags
        _m098 char                                            placeholder_compatibility_mode;           //{ +0x07b0    +0x07b0    +0x07b0    } | .PlaceholderCompatibilityMode
        _m099 sdk::array<char, 7>                             placeholder_compatibility_mode_reserved;  //{ +0x07b1    +0x07b1    +0x07b1    } | .PlaceholderCompatibilityModeReserved
        _m100 uint64_t                                        leap_second_data;                         //{ +0x07b8    +0x07b8    +0x07b8    } | .LeapSecondData
        _m101 uint32_t                                        leap_second_flags;                        //{ +0x07c0    +0x07c0    +0x07c0    } | .LeapSecondFlags
        _m102 uint1_t                                         sixty_second_enabled;                     //{ +0x07c0@0  +0x07c0@0  +0x07c0@0  } | .SixtySecondEnabled
        _m103 uint32_t                                        nt_global_flag2;                          //{ +0x07c4    +0x07c4    +0x07c4    } | .NtGlobalFlag2
                                                                                                      
        // Windows 10 v1607                                                                           
        //                                                                                            
        _m104 uint64_t                                        spare_pvoid0;                             //{ +0x0090    } | .SparePvoid0
        _m105 uint64_t                                        fls_callback;                             //{ +0x0320    } | .FlsCallback
        _m106 struct nt::list_entry64_t                       fls_list_head;                            //{ +0x0328    } | .FlsListHead
        _m107 uint64_t                                        fls_bitmap;                               //{ +0x0338    } | .FlsBitmap
        _m108 sdk::array<uint32_t, 4>                         fls_bitmap_bits;                          //{ +0x0340    } | .FlsBitmapBits
        _m109 uint32_t                                        fls_high_index;                           //{ +0x0350    } | .FlsHighIndex
                                                                                                      
        // Windows 11                                                                                 
        //                                                                                            
        _m110 uint64_t                                        patch_loader_data;                        //{ +0x0330    } | .PatchLoaderData
        _m111 uint64_t                                        chpe_v2_process_info;                     //{ +0x0338    } | .ChpeV2ProcessInfo
        _m112 uint32_t                                        app_model_feature_state;                  //{ +0x0340    } | .AppModelFeatureState
        _m113 uint16_t                                        active_code_page;                         //{ +0x034c    } | .ActiveCodePage
        _m114 uint16_t                                        oem_code_page;                            //{ +0x034e    } | .OemCodePage
        _m115 uint16_t                                        use_case_mapping;                         //{ +0x0350    } | .UseCaseMapping
        _m116 uint16_t                                        unused_nls_field;                         //{ +0x0352    } | .UnusedNlsField
        _m117 uint64_t                                        ec_code_bit_map;                          //{ +0x0368    } | .EcCodeBitMap
        _m118 uint64_t                                        extended_feature_disable_mask;            //{ +0x07c8    } | .ExtendedFeatureDisableMask
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_PEB64.$", 0x7c8, true, 0x547e7bf61e7ece64 );                                        
        SDK_DYNAMIC_SIZE( peb64_t );                                                                  
    };                                                                                                
};
#include "magic/peb64_t.end.hpp"
