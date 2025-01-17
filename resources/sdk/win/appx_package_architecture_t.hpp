#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum APPX_PACKAGE_ARCHITECTURE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class appx_package_architecture_t : int32_t
    {                                               
        x86 =     0x0,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm =     0x5,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        x64 =     0x9,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        neutral = 0xb,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm64 =   0xc,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
