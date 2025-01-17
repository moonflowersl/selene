#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::spriteddiaccess
{
    // [??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5f7a8, 0x13864 bytes
    // win32kfull.sys .text:0xa6844, 0x1596d bytes
    // win32kfull.sys .text:0xb995c, 0x1659e bytes
    // win32kfull.sys .text:0xa73b4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1SPRITEDDIACCESS@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5f778, 0x13864 bytes
    // win32kfull.sys .text:0xa6574, 0x1596d bytes
    // win32kfull.sys .text:0xb9a50, 0x1659e bytes
    // win32kfull.sys .text:0xa70e4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
