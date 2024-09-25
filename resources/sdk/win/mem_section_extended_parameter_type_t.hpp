#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum MEM_SECTION_EXTENDED_PARAMETER_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mem_section_extended_parameter_type_t : int32_t
    {                                                         
        invalid_type =        0x0,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_physical_flags = 0x1,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numa_node =           0x2,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                 0x3,                              // WDK 10, Windows 10 v2004, Windows 10 v20H2
        signing_level =       0x3,                              // Windows 11
        //max =               0x4,                              // Windows 11
    };                                                        
};