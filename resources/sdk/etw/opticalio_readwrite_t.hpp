#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opticalio_readwrite_t.start.hpp"
namespace etw
{
    // [struct _ETW_OPTICALIO_READWRITE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct opticalio_readwrite_t             
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t disk_number;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskNumber
        _m01 uint32_t irp_flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IrpFlags
        _m02 uint32_t size;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m03 uint64_t byte_offset;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteOffset
        _m04 void*    file_object;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileObject
        _m05 void*    irp_addr;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IrpAddr
        _m06 uint64_t high_res_response_time;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HighResResponseTime
        _m07 uint32_t issuing_thread_id;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IssuingThreadId
                                             
        SDK_MAGIC_PROPERTIES( "_ETW_OPTICALIO_READWRITE.$", 0x38, true, 0xaa8eafcf5b7c0d30 );                       
        SDK_FIXED_SIZE( opticalio_readwrite_t, 0x38 );                       
    };                                       
};
#include "magic/opticalio_readwrite_t.end.hpp"
SDK_VERIFY( struct etw::opticalio_readwrite_t, 0x38 );