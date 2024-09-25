#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ResponseMessageType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class response_message_type_t : int32_t        
    {                                                   
        normal =                                 0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        classic_rejected =                       0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        classic_retry =                          0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        classic_retry_due_to_asta_call_timeout = 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_retry =                             0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};