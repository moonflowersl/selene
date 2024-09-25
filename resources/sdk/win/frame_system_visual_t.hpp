#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum FRAME_SYSTEM_VISUAL]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class frame_system_visual_t : int32_t
    {                                         
        none =         0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        splashscreen = 0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        snapshot =     0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};