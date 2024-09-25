#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wire_safearr_haveiid_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [struct _wireSAFEARR_HAVEIID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_safearr_haveiid_t                 
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                        
        _m00 uint32_t                  size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct win::i_unknown_t** ap_unknown;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .apUnknown
        _m02 struct nt::guid_t         iid;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iid
                                                  
        SDK_MAGIC_PROPERTIES( "_wireSAFEARR_HAVEIID.$", 0x20, true, 0xbc08952c5e086458 );           
        SDK_FIXED_SIZE( wire_safearr_haveiid_t, 0x20 );           
    };                                            
};
#include "magic/wire_safearr_haveiid_t.end.hpp"
SDK_VERIFY( struct win::wire_safearr_haveiid_t, 0x20 );