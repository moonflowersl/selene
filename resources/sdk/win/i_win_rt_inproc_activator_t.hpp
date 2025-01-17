#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTInprocActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_rt_inproc_activator_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IWinRTInprocActivator.$", 0x8, true, 0x11d2230ace7dff5d );
        SDK_FIXED_SIZE( i_win_rt_inproc_activator_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_win_rt_inproc_activator_t, 0x8 );
