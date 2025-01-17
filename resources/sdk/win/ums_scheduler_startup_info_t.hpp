#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/ums_scheduler_reason_t.hpp"

#include "magic/ums_scheduler_startup_info_t.start.hpp"
namespace win
{
    // [struct _UMS_SCHEDULER_STARTUP_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ums_scheduler_startup_info_t        
    {                                          
        using scheduler_proc_t = sdk::function<void(enum rtl::ums_scheduler_reason_t, uint64_t, void*)>*;                
                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                     
        _m00 uint32_t          ums_version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UmsVersion
        _m01 void*             completion_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionList
        _m02 scheduler_proc_t  scheduler_proc;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SchedulerProc
        _m03 void*             scheduler_param;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SchedulerParam
                                               
        SDK_MAGIC_PROPERTIES( "_UMS_SCHEDULER_STARTUP_INFO.$", 0x20, true, 0x16140e6244ac9834 );                
        SDK_FIXED_SIZE( ums_scheduler_startup_info_t, 0x20 );                
    };                                         
};
#include "magic/ums_scheduler_startup_info_t.end.hpp"
SDK_VERIFY( struct win::ums_scheduler_startup_info_t, 0x20 );
