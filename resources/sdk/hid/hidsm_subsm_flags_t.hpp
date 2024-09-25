#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _HIDSM_SUBSM_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hidsm_subsm_flags_t : int32_t
    {                                       
        none =     0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hub_root = 0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        any =      0xff,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};