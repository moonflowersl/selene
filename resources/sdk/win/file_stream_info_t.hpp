#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_stream_info_t.start.hpp"
namespace win
{
    // [struct _FILE_STREAM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_stream_info_t                              
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint32_t               next_entry_offset;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t               stream_name_length;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StreamNameLength
        _m02 int64_t                stream_size;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StreamSize
        _m03 int64_t                stream_allocation_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StreamAllocationSize
        _m04 sdk::array<wchar_t, 1> stream_name;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StreamName
                                                           
        SDK_MAGIC_PROPERTIES( "_FILE_STREAM_INFO.$", 0x20, true, 0x3bdbbb96cd8d59c8 );                       
        SDK_FIXED_SIZE( file_stream_info_t, 0x20 );                       
    };                                                     
};
#include "magic/file_stream_info_t.end.hpp"
SDK_VERIFY( struct win::file_stream_info_t, 0x20 );