#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_SMS_FORMAT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sms_format_t : int32_t
    {                                
        pdu =       0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved0 = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 = 0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved2 = 0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdma =      0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x5,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
