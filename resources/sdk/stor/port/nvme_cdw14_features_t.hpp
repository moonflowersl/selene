#pragma once
#include <sdkgen/support_library.hpp>
#include "nvme_cdw14_feature_host_memory_buffer_t.hpp"

#include "magic/nvme_cdw14_features_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW14_FEATURES]
    // => Windows 11
    //
    union nvme_cdw14_features_t                       
    {                                                 
        using host_memory_buffer_t = union stor::port::nvme_cdw14_feature_host_memory_buffer_t;                   
                                                      
        // Windows 11                                 
        //                                            
        _m00 host_memory_buffer_t  host_memory_buffer;  //{ +0x0000    } | .HostMemoryBuffer
        _m01 uint32_t              as_ulong;            //{ +0x0000    } | .AsUlong
                                                      
        SDK_MAGIC_PROPERTIES( "NVME_CDW14_FEATURES.$", 0x0, false, 0x147c9d01f0167424 );                   
        SDK_FIXED_SIZE( nvme_cdw14_features_t, 0x4 );                   
    };                                                
};
#include "magic/nvme_cdw14_features_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw14_features_t, 0x4 );