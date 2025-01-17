#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_string_header_format_t.hpp"

#include "magic/ndr64_non_conformant_string_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_NON_CONFORMANT_STRING_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_non_conformant_string_format_t                  
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                       
        _m00 struct win::ndr64_string_header_format_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                 total_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalSize
                                                                 
        SDK_MAGIC_PROPERTIES( "_NDR64_NON_CONFORMANT_STRING_FORMAT.$", 0x8, true, 0x90e42bf153a3e828 );           
        SDK_FIXED_SIZE( ndr64_non_conformant_string_format_t, 0x8 );           
    };                                                           
};
#include "magic/ndr64_non_conformant_string_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_non_conformant_string_format_t, 0x8 );
