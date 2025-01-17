#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVICE_WAKE_DEPTH]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_wake_depth_t : int32_t
    {                                       
        not_wakeable = 0x0,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0 =           0x1,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d1 =           0x2,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d2 =           0x3,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d3hot =        0x4,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d3cold =       0x5,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =      0x6,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
