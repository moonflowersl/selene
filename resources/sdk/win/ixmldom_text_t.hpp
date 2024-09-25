#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMText]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_text_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IXMLDOMText.$", 0x8, true, 0xa8c61ced04d522f6 );
        SDK_FIXED_SIZE( ixmldom_text_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::ixmldom_text_t, 0x8 );