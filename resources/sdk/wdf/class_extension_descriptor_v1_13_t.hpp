#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct driver_object_t; }

#include "magic/class_extension_descriptor_v1_13_t.start.hpp"
namespace wdf
{
    struct class_extension_descriptor_v1_13_t;

    // [struct _WDF_CLASS_EXTENSION_DESCRIPTOR_V1_13]
    // => Windows 10 v1607
    //
    struct class_extension_descriptor_v1_13_t                 
    {                                                         
        using pcwdf_class_extension_descriptor_v1_13_t = const struct wdf::class_extension_descriptor_v1_13_t*;       
        using bind_t =                                   sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*;       
        using unbind_t =                                 sdk::function<void(struct nt::driver_object_t*)>*;       
                                                              
        // Windows 10 v1607                                   
        //                                                    
        _m00 pcwdf_class_extension_descriptor_v1_13_t  next;    //{ +0x0000    } | .Next
        _m01 uint32_t                                  size;    //{ +0x0008    } | .Size
        _m02 bind_t                                    bind;    //{ +0x0010    } | .Bind
        _m03 unbind_t                                  unbind;  //{ +0x0018    } | .Unbind
                                                              
        SDK_MAGIC_PROPERTIES( "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_13.$", 0x0, false, 0x50173f2fb0a99c5f );       
        SDK_FIXED_SIZE( class_extension_descriptor_v1_13_t, 0x20 );       
    };                                                        
};
#include "magic/class_extension_descriptor_v1_13_t.end.hpp"
SDK_VERIFY( struct wdf::class_extension_descriptor_v1_13_t, 0x20 );