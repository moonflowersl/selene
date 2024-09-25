#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NETSETUP_QUERY_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class netsetup_query_state_t : int32_t
    {                                          
        initialized =    0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enum_completed = 0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        aborted =        0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        closed =         0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};