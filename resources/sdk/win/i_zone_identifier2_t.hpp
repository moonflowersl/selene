#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IZoneIdentifier2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_zone_identifier2_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IZoneIdentifier2.$", 0x8, true, 0x56dd6f7ce560209b );
        SDK_FIXED_SIZE( i_zone_identifier2_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_zone_identifier2_t, 0x8 );