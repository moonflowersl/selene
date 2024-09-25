#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;          }
namespace tag { struct rpcolemessage_t; }

#include "magic/i_rpc_syntax_negotiate_vtbl_t.start.hpp"
namespace win
{
    struct i_rpc_syntax_negotiate_t;

    // [struct IRpcSyntaxNegotiateVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_syntax_negotiate_vtbl_t          
    {                                             
        using query_interface_t =  sdk::function<sdk::hresult(struct win::i_rpc_syntax_negotiate_t*, const struct nt::guid_t&, void**)>*;                 
        using add_ref_t =          sdk::function<uint32_t(struct win::i_rpc_syntax_negotiate_t*)>*;                 
        using release_t =          sdk::function<uint32_t(struct win::i_rpc_syntax_negotiate_t*)>*;                 
        using negotiate_syntax_t = sdk::function<sdk::hresult(struct win::i_rpc_syntax_negotiate_t*, struct tag::rpcolemessage_t*)>*;                 
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                        
        _m00 query_interface_t   query_interface;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t           add_ref;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t           release;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 negotiate_syntax_t  negotiate_syntax;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NegotiateSyntax
                                                  
        SDK_MAGIC_PROPERTIES( "IRpcSyntaxNegotiateVtbl.$", 0x20, true, 0xd497f5c01af57483 );                 
        SDK_FIXED_SIZE( i_rpc_syntax_negotiate_vtbl_t, 0x20 );                 
    };                                            
};
#include "magic/i_rpc_syntax_negotiate_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_rpc_syntax_negotiate_vtbl_t, 0x20 );