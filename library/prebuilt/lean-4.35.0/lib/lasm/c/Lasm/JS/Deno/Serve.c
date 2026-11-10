// Lean compiler output
// Module: Lasm.JS.Deno.Serve
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Fetch
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSNat;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.ServeHandlerInfo"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSHttpServer = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Deno.HttpServer"};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSHttpServer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSHttpServer = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqNetAddrTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqNetAddrTransport_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqNetAddrTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport = (const lean_object*)&l_Lasm_JS_Deno_instBEqNetAddrTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.NetAddrTransport.tcp"};
static const lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.NetAddrTransport.udp"};
static const lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4;
static lean_once_cell_t l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprNetAddrTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprNetAddrTransport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport = (const lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedNetAddrTransport;
static const lean_string_object l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tcp"};
static const lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "udp"};
static const lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSNetAddrTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport = (const lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.NetAddrTransport"};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Deno.ServeTcpOptionsTransport.tcp"};
static const lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprServeTcpOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpOptionsTransport___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Deno.ServeTcpOptionsTransport"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Deno.TlsCertifiedKeyPemKeyFormat.pem"};
static const lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat;
static const lean_string_object l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pem"};
static const lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Deno.TlsCertifiedKeyPemKeyFormat"};
static const lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transport"};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSNetAddr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSNetAddr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.NetAddr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSNetAddr___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSNetAddr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.ServeHandler"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeHandler = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandler___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsOnError = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Deno.ServeOptionsOnError"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnError = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsOnListen = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.ServeOptionsOnListen"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnListen = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onError"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onListen"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "automaticCompression"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reusePort"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tcpBacklog"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__3_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0, .m_arity = 8, .m_num_fixed = 7, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__3_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__4_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "keyFormat"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cert"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*8, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0, .m_arity = 9, .m_num_fixed = 8, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__3_value),((lean_object*)&l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "remoteAddr"};
static const lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "completed"};
static const lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_HttpServer_finished___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "finished"};
static const lean_object* l_Lasm_JS_Deno_HttpServer_finished___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_HttpServer_finished___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_HttpServer_addr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "addr"};
static const lean_object* l_Lasm_JS_Deno_HttpServer_addr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_HttpServer_addr___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_HttpServer_ref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l_Lasm_JS_Deno_HttpServer_ref___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_HttpServer_ref___closed__0_value;
static const lean_array_object l_Lasm_JS_Deno_HttpServer_ref___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_HttpServer_ref___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_HttpServer_ref___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_HttpServer_ref___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_HttpServer_ref___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_HttpServer_unref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unref"};
static const lean_object* l_Lasm_JS_Deno_HttpServer_unref___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_HttpServer_unref___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_HttpServer_shutdown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shutdown"};
static const lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_HttpServer_shutdown___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_serve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.serve"};
static const lean_object* l_Lasm_JS_Deno_serve___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_serve___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_serve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Deno_serve___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_serve___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_serve___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.serve"};
static const lean_object* l_Lasm_JS_Deno_serve___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_serve___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_serve___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_serve___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_serve___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_serve___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_serveWithOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.serveWithOptions"};
static const lean_object* l_Lasm_JS_Deno_serveWithOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_serveWithOptions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_serveWithOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_serveWithOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_serveWithOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_serveWithOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_serveWithTlsOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Deno.serveWithTlsOptions"};
static const lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_serveWithTlsOptions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_serveWithTlsOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_serveWithTlsOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_serveWithTlsOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 9)
{
lean_object* v_value_10_; lean_object* v___x_11_; 
v_value_10_ = lean_ctor_get(v_x_9_, 0);
lean_inc(v_value_10_);
v___x_11_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_11_, 0, v_value_10_);
return v___x_11_;
}
else
{
lean_object* v___x_12_; 
v___x_12_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(uint8_t v_x_29_){
_start:
{
if (v_x_29_ == 0)
{
lean_object* v___x_30_; 
v___x_30_ = lean_unsigned_to_nat(0u);
return v___x_30_;
}
else
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(1u);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx___boxed(lean_object* v_x_32_){
_start:
{
uint8_t v_x_boxed_33_; lean_object* v_res_34_; 
v_x_boxed_33_ = lean_unbox(v_x_32_);
v_res_34_ = l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(v_x_boxed_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___redArg(lean_object* v_k_35_){
_start:
{
lean_inc(v_k_35_);
return v_k_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___redArg___boxed(lean_object* v_k_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lasm_JS_Deno_NetAddrTransport_ctorElim___redArg(v_k_36_);
lean_dec(v_k_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim(lean_object* v_motive_38_, lean_object* v_ctorIdx_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_k_42_){
_start:
{
lean_inc(v_k_42_);
return v_k_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___boxed(lean_object* v_motive_43_, lean_object* v_ctorIdx_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_k_47_){
_start:
{
uint8_t v_t_boxed_48_; lean_object* v_res_49_; 
v_t_boxed_48_ = lean_unbox(v_t_45_);
v_res_49_ = l_Lasm_JS_Deno_NetAddrTransport_ctorElim(v_motive_43_, v_ctorIdx_44_, v_t_boxed_48_, v_h_46_, v_k_47_);
lean_dec(v_k_47_);
lean_dec(v_ctorIdx_44_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___redArg(lean_object* v_tcp_50_){
_start:
{
lean_inc(v_tcp_50_);
return v_tcp_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___redArg___boxed(lean_object* v_tcp_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___redArg(v_tcp_51_);
lean_dec(v_tcp_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim(lean_object* v_motive_53_, uint8_t v_t_54_, lean_object* v_h_55_, lean_object* v_tcp_56_){
_start:
{
lean_inc(v_tcp_56_);
return v_tcp_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___boxed(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_tcp_60_){
_start:
{
uint8_t v_t_boxed_61_; lean_object* v_res_62_; 
v_t_boxed_61_ = lean_unbox(v_t_58_);
v_res_62_ = l_Lasm_JS_Deno_NetAddrTransport_tcp_elim(v_motive_57_, v_t_boxed_61_, v_h_59_, v_tcp_60_);
lean_dec(v_tcp_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___redArg(lean_object* v_udp_63_){
_start:
{
lean_inc(v_udp_63_);
return v_udp_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___redArg___boxed(lean_object* v_udp_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lasm_JS_Deno_NetAddrTransport_udp_elim___redArg(v_udp_64_);
lean_dec(v_udp_64_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim(lean_object* v_motive_66_, uint8_t v_t_67_, lean_object* v_h_68_, lean_object* v_udp_69_){
_start:
{
lean_inc(v_udp_69_);
return v_udp_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___boxed(lean_object* v_motive_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_udp_73_){
_start:
{
uint8_t v_t_boxed_74_; lean_object* v_res_75_; 
v_t_boxed_74_ = lean_unbox(v_t_71_);
v_res_75_ = l_Lasm_JS_Deno_NetAddrTransport_udp_elim(v_motive_70_, v_t_boxed_74_, v_h_72_, v_udp_73_);
lean_dec(v_udp_73_);
return v_res_75_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(uint8_t v_x_76_, uint8_t v_y_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_78_ = l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(v_x_76_);
v___x_79_ = l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(v_y_77_);
v___x_80_ = lean_nat_dec_eq(v___x_78_, v___x_79_);
lean_dec(v___x_79_);
lean_dec(v___x_78_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport_beq___boxed(lean_object* v_x_81_, lean_object* v_y_82_){
_start:
{
uint8_t v_x_21__boxed_83_; uint8_t v_y_22__boxed_84_; uint8_t v_res_85_; lean_object* v_r_86_; 
v_x_21__boxed_83_ = lean_unbox(v_x_81_);
v_y_22__boxed_84_ = lean_unbox(v_y_82_);
v_res_85_ = l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(v_x_21__boxed_83_, v_y_22__boxed_84_);
v_r_86_ = lean_box(v_res_85_);
return v_r_86_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_unsigned_to_nat(2u);
v___x_96_ = lean_nat_to_int(v___x_95_);
return v___x_96_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(1u);
v___x_98_ = lean_nat_to_int(v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr(uint8_t v_x_99_, lean_object* v_prec_100_){
_start:
{
lean_object* v___y_102_; lean_object* v___y_109_; 
if (v_x_99_ == 0)
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1024u);
v___x_116_ = lean_nat_dec_le(v___x_115_, v_prec_100_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; 
v___x_117_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_102_ = v___x_117_;
goto v___jp_101_;
}
else
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_102_ = v___x_118_;
goto v___jp_101_;
}
}
else
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(1024u);
v___x_120_ = lean_nat_dec_le(v___x_119_, v_prec_100_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_109_ = v___x_121_;
goto v___jp_108_;
}
else
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_109_ = v___x_122_;
goto v___jp_108_;
}
}
v___jp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_103_ = ((lean_object*)(l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__1));
lean_inc(v___y_102_);
v___x_104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_104_, 0, v___y_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = 0;
v___x_106_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set_uint8(v___x_106_, sizeof(void*)*1, v___x_105_);
v___x_107_ = l_Repr_addAppParen(v___x_106_, v_prec_100_);
return v___x_107_;
}
v___jp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_110_ = ((lean_object*)(l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__3));
lean_inc(v___y_109_);
v___x_111_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_111_, 0, v___y_109_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = 0;
v___x_113_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set_uint8(v___x_113_, sizeof(void*)*1, v___x_112_);
v___x_114_ = l_Repr_addAppParen(v___x_113_, v_prec_100_);
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___boxed(lean_object* v_x_123_, lean_object* v_prec_124_){
_start:
{
uint8_t v_x_117__boxed_125_; lean_object* v_res_126_; 
v_x_117__boxed_125_ = lean_unbox(v_x_123_);
v_res_126_ = l_Lasm_JS_Deno_instReprNetAddrTransport_repr(v_x_117__boxed_125_, v_prec_124_);
lean_dec(v_prec_124_);
return v_res_126_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default(void){
_start:
{
uint8_t v___x_129_; 
v___x_129_ = 0;
return v___x_129_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedNetAddrTransport(void){
_start:
{
uint8_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(uint8_t v_x_137_){
_start:
{
if (v_x_137_ == 0)
{
lean_object* v___x_138_; 
v___x_138_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_138_;
}
else
{
lean_object* v___x_139_; 
v___x_139_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__3));
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___boxed(lean_object* v_x_140_){
_start:
{
uint8_t v_x_40__boxed_141_; lean_object* v_res_142_; 
v_x_40__boxed_141_ = lean_unbox(v_x_140_);
v_res_142_ = l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(v_x_40__boxed_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(lean_object* v_x_154_){
_start:
{
if (lean_obj_tag(v_x_154_) == 4)
{
lean_object* v_s_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_s_157_ = lean_ctor_get(v_x_154_, 0);
v___x_158_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_159_ = lean_string_dec_eq(v_s_157_, v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_160_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2));
v___x_161_ = lean_string_dec_eq(v_s_157_, v___x_160_);
if (v___x_161_ == 0)
{
goto v___jp_155_;
}
else
{
lean_object* v___x_162_; 
v___x_162_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2));
return v___x_162_;
}
}
else
{
lean_object* v___x_163_; 
v___x_163_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3));
return v___x_163_;
}
}
else
{
goto v___jp_155_;
}
v___jp_155_:
{
lean_object* v___x_156_; 
v___x_156_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__1));
return v___x_156_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___boxed(lean_object* v_x_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(v_x_164_);
lean_dec(v_x_164_);
return v_res_165_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg(){
_start:
{
uint8_t v___x_174_; 
v___x_174_ = 1;
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg___boxed(lean_object* v___dummy_175_){
_start:
{
uint8_t v_res_176_; lean_object* v_r_177_; 
v_res_176_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg();
v_r_177_ = lean_box(v_res_176_);
return v_r_177_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(lean_object* v_x_178_, lean_object* v_y_179_){
_start:
{
uint8_t v___x_180_; 
v___x_180_ = 1;
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed(lean_object* v_x_181_, lean_object* v_y_182_){
_start:
{
uint8_t v_res_183_; lean_object* v_r_184_; 
v_res_183_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(v_x_181_, v_y_182_);
v_r_184_ = lean_box(v_res_183_);
return v_r_184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(lean_object* v_prec_190_){
_start:
{
lean_object* v___y_192_; lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_198_ = lean_unsigned_to_nat(1024u);
v___x_199_ = lean_nat_dec_le(v___x_198_, v_prec_190_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; 
v___x_200_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_192_ = v___x_200_;
goto v___jp_191_;
}
else
{
lean_object* v___x_201_; 
v___x_201_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_192_ = v___x_201_;
goto v___jp_191_;
}
v___jp_191_:
{
lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_193_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__1));
lean_inc(v___y_192_);
v___x_194_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_194_, 0, v___y_192_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = 0;
v___x_196_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set_uint8(v___x_196_, sizeof(void*)*1, v___x_195_);
v___x_197_ = l_Repr_addAppParen(v___x_196_, v_prec_190_);
return v___x_197_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___boxed(lean_object* v_prec_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_202_);
lean_dec(v_prec_202_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(lean_object* v_x_204_, lean_object* v_prec_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed(lean_object* v_x_207_, lean_object* v_prec_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(v_x_207_, v_prec_208_);
lean_dec(v_prec_208_);
return v_res_209_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default(void){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = lean_box(0);
return v___x_212_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lean_box(0);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0(lean_object* v_x_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(lean_object* v_x_222_){
_start:
{
if (lean_obj_tag(v_x_222_) == 4)
{
lean_object* v_s_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v_s_225_ = lean_ctor_get(v_x_222_, 0);
v___x_226_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_227_ = lean_string_dec_eq(v_s_225_, v___x_226_);
if (v___x_227_ == 0)
{
goto v___jp_223_;
}
else
{
lean_object* v___x_228_; 
v___x_228_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_228_;
}
}
else
{
goto v___jp_223_;
}
v___jp_223_:
{
lean_object* v___x_224_; 
v___x_224_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0));
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___boxed(lean_object* v_x_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(v_x_229_);
lean_dec(v_x_229_);
return v_res_230_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg(){
_start:
{
uint8_t v___x_239_; 
v___x_239_ = 1;
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg___boxed(lean_object* v___dummy_240_){
_start:
{
uint8_t v_res_241_; lean_object* v_r_242_; 
v_res_241_ = l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg();
v_r_242_ = lean_box(v_res_241_);
return v_r_242_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(lean_object* v_x_243_, lean_object* v_y_244_){
_start:
{
uint8_t v___x_245_; 
v___x_245_ = 1;
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___boxed(lean_object* v_x_246_, lean_object* v_y_247_){
_start:
{
uint8_t v_res_248_; lean_object* v_r_249_; 
v_res_248_ = l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(v_x_246_, v_y_247_);
v_r_249_ = lean_box(v_res_248_);
return v_r_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(lean_object* v_prec_255_){
_start:
{
lean_object* v___y_257_; lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(1024u);
v___x_264_ = lean_nat_dec_le(v___x_263_, v_prec_255_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; 
v___x_265_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_257_ = v___x_265_;
goto v___jp_256_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_257_ = v___x_266_;
goto v___jp_256_;
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; uint8_t v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_258_ = ((lean_object*)(l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__1));
lean_inc(v___y_257_);
v___x_259_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_259_, 0, v___y_257_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = 0;
v___x_261_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_261_, 0, v___x_259_);
lean_ctor_set_uint8(v___x_261_, sizeof(void*)*1, v___x_260_);
v___x_262_ = l_Repr_addAppParen(v___x_261_, v_prec_255_);
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___boxed(lean_object* v_prec_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(v_prec_267_);
lean_dec(v_prec_267_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(lean_object* v_x_269_, lean_object* v_prec_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(v_prec_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___boxed(lean_object* v_x_272_, lean_object* v_prec_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(v_x_272_, v_prec_273_);
lean_dec(v_prec_273_);
return v_res_274_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default(void){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = lean_box(0);
return v___x_277_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = lean_box(0);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0(lean_object* v_x_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0(lean_object* v_x_290_){
_start:
{
if (lean_obj_tag(v_x_290_) == 4)
{
lean_object* v_s_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v_s_293_ = lean_ctor_get(v_x_290_, 0);
v___x_294_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0));
v___x_295_ = lean_string_dec_eq(v_s_293_, v___x_294_);
if (v___x_295_ == 0)
{
goto v___jp_291_;
}
else
{
lean_object* v___x_296_; 
v___x_296_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_296_;
}
}
else
{
goto v___jp_291_;
}
v___jp_291_:
{
lean_object* v___x_292_; 
v___x_292_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0));
return v___x_292_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___boxed(lean_object* v_x_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0(v_x_297_);
lean_dec(v_x_297_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(lean_object* v___x_309_, lean_object* v___x_310_, lean_object* v___x_311_, lean_object* v_d_312_){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_314_ = l_Lasm_JS_readField___redArg(v___x_309_, v_d_312_, v___x_313_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec_ref(v___x_311_);
lean_dec_ref(v___x_310_);
v_a_315_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_314_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_314_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v_a_323_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_314_, 1);
v___x_324_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_325_ = l_Lasm_JS_readField___redArg(v___x_310_, v_d_312_, v___x_324_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
lean_dec(v_a_323_);
lean_dec_ref(v___x_311_);
v_a_326_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_325_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_325_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
else
{
lean_object* v_a_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v_a_334_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_325_, 1);
v___x_335_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_336_ = l_Lasm_JS_readField___redArg(v___x_311_, v_d_312_, v___x_335_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
lean_dec(v_a_334_);
lean_dec(v_a_323_);
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_354_; 
v_a_345_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_354_ == 0)
{
v___x_347_ = v___x_336_;
v_isShared_348_ = v_isSharedCheck_354_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_336_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_354_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; uint8_t v___x_350_; lean_object* v___x_352_; 
v___x_349_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_349_, 0, v_a_334_);
lean_ctor_set(v___x_349_, 1, v_a_345_);
v___x_350_ = lean_unbox(v_a_323_);
lean_dec(v_a_323_);
lean_ctor_set_uint8(v___x_349_, sizeof(void*)*2, v___x_350_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_349_);
v___x_352_ = v___x_347_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_349_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed(lean_object* v___x_355_, lean_object* v___x_356_, lean_object* v___x_357_, lean_object* v_d_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(v___x_355_, v___x_356_, v___x_357_, v_d_358_);
lean_dec(v_d_358_);
return v_res_359_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__0(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___f_363_; 
v___x_360_ = l_Lasm_JS_instFromJSNat;
v___x_361_ = l_Lasm_JS_instFromJSString;
v___x_362_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport));
v___f_363_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed), 4, 3);
lean_closure_set(v___f_363_, 0, v___x_362_);
lean_closure_set(v___f_363_, 1, v___x_361_);
lean_closure_set(v___f_363_, 2, v___x_360_);
return v___f_363_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__2(void){
_start:
{
uint8_t v___x_365_; lean_object* v___x_366_; lean_object* v___f_367_; lean_object* v___x_368_; 
v___x_365_ = 0;
v___x_366_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___f_367_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSNetAddr___closed__0, &l_Lasm_JS_Deno_instFromJSNetAddr___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__0);
v___x_368_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_368_, 0, v___f_367_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
lean_ctor_set_uint8(v___x_368_, sizeof(void*)*2, v___x_365_);
return v___x_368_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr(void){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSNetAddr___closed__2, &l_Lasm_JS_Deno_instFromJSNetAddr___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__2);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object* v_x_377_){
_start:
{
if (lean_obj_tag(v_x_377_) == 0)
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_387_; 
v_a_379_ = lean_ctor_get(v_x_377_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v_x_377_);
if (v_isSharedCheck_387_ == 0)
{
v___x_381_ = v_x_377_;
v_isShared_382_ = v_isSharedCheck_387_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v_x_377_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_387_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
if (v_isShared_382_ == 0)
{
v___x_384_ = v___x_381_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_379_);
v___x_384_ = v_reuseFailAlloc_386_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; 
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
return v___x_385_;
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_398_; 
v_a_388_ = lean_ctor_get(v_x_377_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v_x_377_);
if (v_isSharedCheck_398_ == 0)
{
v___x_390_ = v_x_377_;
v_isShared_391_ = v_isSharedCheck_398_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v_x_377_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_398_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_392_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_393_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_393_, 0, v_a_388_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v___x_393_);
v___x_395_ = v___x_390_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_393_);
v___x_395_ = v_reuseFailAlloc_397_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; 
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
return v___x_396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object* v_x_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(v_x_399_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object* v_f_402_, lean_object* v_a_403_, lean_object* v___f_404_, lean_object* v_x_405_){
_start:
{
if (lean_obj_tag(v_x_405_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_415_; 
lean_dec_ref(v___f_404_);
lean_dec(v_a_403_);
lean_dec_ref(v_f_402_);
v_a_407_ = lean_ctor_get(v_x_405_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v_x_405_);
if (v_isSharedCheck_415_ == 0)
{
v___x_409_ = v_x_405_;
v_isShared_410_ = v_isSharedCheck_415_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v_x_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_415_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_414_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
lean_object* v___x_413_; 
v___x_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
return v___x_413_;
}
}
}
else
{
lean_object* v_a_416_; lean_object* v___x_417_; uint8_t v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v_a_416_ = lean_ctor_get(v_x_405_, 0);
lean_inc(v_a_416_);
lean_dec_ref_known(v_x_405_, 1);
v___x_417_ = lean_unsigned_to_nat(0u);
v___x_418_ = 0;
v___x_419_ = lean_apply_3(v_f_402_, v_a_403_, v_a_416_, lean_box(0));
v___x_420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_417_, v___x_418_, v___x_419_, v___f_404_);
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object* v_f_421_, lean_object* v_a_422_, lean_object* v___f_423_, lean_object* v_x_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(v_f_421_, v_a_422_, v___f_423_, v_x_424_);
return v_res_426_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_431_ = lean_string_utf8_byte_size(v___x_430_);
return v___x_431_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_432_ = lean_unsigned_to_nat(0u);
v___x_433_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3);
v___x_434_ = lean_nat_dec_eq(v___x_433_, v___x_432_);
return v___x_434_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__8));
v___x_440_ = lean_unsigned_to_nat(46u);
v___x_441_ = lean_unsigned_to_nat(193u);
v___x_442_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7));
v___x_443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6));
v___x_444_ = l_mkPanicMessageWithDecl(v___x_443_, v___x_442_, v___x_441_, v___x_440_, v___x_439_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(lean_object* v_context_446_, lean_object* v_d_447_){
_start:
{
lean_object* v___y_450_; lean_object* v___y_451_; 
if (lean_obj_tag(v_d_447_) == 9)
{
lean_object* v_value_455_; lean_object* v___x_456_; 
v_value_455_ = lean_ctor_get(v_d_447_, 0);
lean_inc(v_value_455_);
lean_dec_ref_known(v_d_447_, 2);
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v_value_455_);
return v___x_456_;
}
else
{
lean_object* v___x_457_; lean_object* v_received_459_; 
v___x_457_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
if (lean_obj_tag(v_d_447_) == 9)
{
lean_object* v_value_473_; lean_object* v_description_474_; uint8_t v___x_475_; 
v_value_473_ = lean_ctor_get(v_d_447_, 0);
v_description_474_ = lean_ctor_get(v_d_447_, 1);
v___x_475_ = lean_string_dec_eq(v_description_474_, v___x_457_);
if (v___x_475_ == 0)
{
goto v___jp_471_;
}
else
{
uint32_t v___x_476_; uint64_t v___x_477_; lean_object* v___x_478_; uint32_t v___x_479_; lean_object* v___x_480_; 
lean_inc_n(v_value_473_, 2);
lean_dec_ref_known(v_d_447_, 2);
v___x_476_ = 206;
v___x_477_ = 0ULL;
v___x_478_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_478_, 0, v_value_473_);
lean_ctor_set(v___x_478_, 1, v___x_457_);
v___x_479_ = lasm_js_value_handle(v_value_473_);
lean_dec(v_value_473_);
v___x_480_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_476_, v___x_477_, v___x_478_, v___x_479_);
lean_dec_ref_known(v___x_478_, 2);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; uint8_t v___x_482_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref_known(v___x_480_, 1);
v___x_482_ = lean_string_validate_utf8(v_a_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; 
lean_dec(v_a_481_);
v___x_483_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_484_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_483_);
v_received_459_ = v___x_484_;
goto v___jp_458_;
}
else
{
lean_object* v___x_485_; 
v___x_485_ = lean_string_from_utf8_unchecked(v_a_481_);
v_received_459_ = v___x_485_;
goto v___jp_458_;
}
}
else
{
lean_object* v___x_486_; 
lean_dec_ref_known(v___x_480_, 1);
v___x_486_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v_received_459_ = v___x_486_;
goto v___jp_458_;
}
}
}
else
{
goto v___jp_471_;
}
v___jp_458_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_461_ = lean_string_append(v___x_460_, v_context_446_);
v___x_462_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_463_ = lean_string_append(v___x_461_, v___x_462_);
v___x_464_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1));
v___x_465_ = lean_string_append(v___x_463_, v___x_464_);
v___x_466_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_467_ = lean_string_append(v___x_465_, v___x_466_);
v___x_468_ = lean_string_append(v___x_467_, v_received_459_);
lean_dec_ref(v_received_459_);
v___x_469_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; 
v___x_470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___y_450_ = v___x_468_;
v___y_451_ = v___x_470_;
goto v___jp_449_;
}
else
{
v___y_450_ = v___x_468_;
v___y_451_ = v___x_457_;
goto v___jp_449_;
}
}
v___jp_471_:
{
lean_object* v___x_472_; 
v___x_472_ = l_Lasm_JS_Data_describe(v_d_447_);
v_received_459_ = v___x_472_;
goto v___jp_458_;
}
}
v___jp_449_:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_string_append(v___y_450_, v___y_451_);
v___x_453_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
v___x_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
return v___x_454_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_487_, lean_object* v_d_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v_context_487_, v_d_488_);
lean_dec_ref(v_context_487_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(lean_object* v_args_492_, lean_object* v_i_493_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_495_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_496_ = lean_unsigned_to_nat(1u);
v___x_497_ = lean_nat_add(v_i_493_, v___x_496_);
v___x_498_ = l_Nat_reprFast(v___x_497_);
v___x_499_ = lean_string_append(v___x_495_, v___x_498_);
lean_dec_ref(v___x_498_);
v___x_500_ = lean_array_get_size(v_args_492_);
v___x_501_ = lean_nat_dec_lt(v_i_493_, v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = lean_box(0);
v___x_503_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_499_, v___x_502_);
lean_dec_ref(v___x_499_);
return v___x_503_;
}
else
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_array_fget_borrowed(v_args_492_, v_i_493_);
lean_inc(v___x_504_);
v___x_505_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_499_, v___x_504_);
lean_dec_ref(v___x_499_);
return v___x_505_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___boxed(lean_object* v_args_506_, lean_object* v_i_507_, lean_object* v_a_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_506_, v_i_507_);
lean_dec(v_i_507_);
lean_dec_ref(v_args_506_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(lean_object* v_f_510_, lean_object* v___f_511_, lean_object* v_args_512_, lean_object* v_x_513_){
_start:
{
if (lean_obj_tag(v_x_513_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v___f_511_);
lean_dec_ref(v_f_510_);
v_a_515_ = lean_ctor_get(v_x_513_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v_x_513_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v_x_513_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_522_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_object* v___x_521_; 
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_545_; 
v_a_524_ = lean_ctor_get(v_x_513_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_545_ == 0)
{
v___x_526_ = v_x_513_;
v_isShared_527_ = v_isSharedCheck_545_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v_x_513_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_545_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___f_528_; lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; lean_object* v_val_533_; lean_object* v___x_536_; 
v___f_528_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_528_, 0, v_f_510_);
lean_closure_set(v___f_528_, 1, v_a_524_);
lean_closure_set(v___f_528_, 2, v___f_511_);
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = 0;
v___x_536_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_512_, v___x_529_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; 
v_a_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_537_);
lean_dec_ref_known(v___x_536_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v_a_537_);
v___x_539_ = v___x_526_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
v_val_533_ = v___x_539_;
goto v___jp_532_;
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; 
v_a_541_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v___x_536_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set_tag(v___x_526_, 0);
lean_ctor_set(v___x_526_, 0, v_a_541_);
v___x_543_ = v___x_526_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
v_val_533_ = v___x_543_;
goto v___jp_532_;
}
}
v___jp_532_:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v_val_533_);
v___x_535_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_530_, v___x_531_, v___x_534_, v___f_528_);
return v___x_535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed(lean_object* v_f_546_, lean_object* v___f_547_, lean_object* v_args_548_, lean_object* v_x_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(v_f_546_, v___f_547_, v_args_548_, v_x_549_);
lean_dec_ref(v_args_548_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(lean_object* v_args_552_, lean_object* v_i_553_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_555_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_556_ = lean_unsigned_to_nat(1u);
v___x_557_ = lean_nat_add(v_i_553_, v___x_556_);
v___x_558_ = l_Nat_reprFast(v___x_557_);
v___x_559_ = lean_string_append(v___x_555_, v___x_558_);
lean_dec_ref(v___x_558_);
v___x_560_ = lean_array_get_size(v_args_552_);
v___x_561_ = lean_nat_dec_lt(v_i_553_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = lean_box(0);
v___x_563_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_559_, v___x_562_);
lean_dec_ref(v___x_559_);
return v___x_563_;
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = lean_array_fget_borrowed(v_args_552_, v_i_553_);
lean_inc(v___x_564_);
v___x_565_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_559_, v___x_564_);
lean_dec_ref(v___x_559_);
return v___x_565_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1___boxed(lean_object* v_args_566_, lean_object* v_i_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_566_, v_i_567_);
lean_dec(v_i_567_);
lean_dec_ref(v_args_566_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(lean_object* v_f_570_, lean_object* v___f_571_, lean_object* v_args_572_){
_start:
{
lean_object* v___f_574_; lean_object* v___x_575_; uint8_t v___x_576_; lean_object* v_val_578_; lean_object* v___x_581_; 
lean_inc_ref(v_args_572_);
v___f_574_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_574_, 0, v_f_570_);
lean_closure_set(v___f_574_, 1, v___f_571_);
lean_closure_set(v___f_574_, 2, v_args_572_);
v___x_575_ = lean_unsigned_to_nat(0u);
v___x_576_ = 0;
v___x_581_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_572_, v___x_575_);
lean_dec_ref(v_args_572_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_581_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_581_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set_tag(v___x_584_, 1);
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
v_val_578_ = v___x_587_;
goto v___jp_577_;
}
}
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
v_a_590_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_581_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_581_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set_tag(v___x_592_, 0);
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
v_val_578_ = v___x_595_;
goto v___jp_577_;
}
}
}
v___jp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v_val_578_);
v___x_580_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_575_, v___x_576_, v___x_579_, v___f_574_);
return v___x_580_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed(lean_object* v_f_598_, lean_object* v___f_599_, lean_object* v_args_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(v_f_598_, v___f_599_, v_args_600_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object* v_f_604_){
_start:
{
lean_object* v___f_606_; lean_object* v___f_607_; lean_object* v___x_608_; 
v___f_606_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_607_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_607_, 0, v_f_604_);
lean_closure_set(v___f_607_, 1, v___f_606_);
v___x_608_ = l_Lasm_JS_Function_ofFn(v___f_607_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_608_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_608_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
v_a_617_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_608_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_608_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object* v_f_625_, lean_object* v_a_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lasm_JS_Deno_ServeHandler_ofFn(v_f_625_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object* v_f_628_, lean_object* v_args_629_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_unsigned_to_nat(0u);
v___x_632_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_629_, v___x_631_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_633_);
lean_dec_ref_known(v___x_632_, 1);
v___x_634_ = lean_unsigned_to_nat(1u);
v___x_635_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_629_, v___x_634_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_637_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_635_, 1);
v___x_637_ = lean_apply_3(v_f_628_, v_a_633_, v_a_636_, lean_box(0));
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_647_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_647_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_647_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_647_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_645_; 
v___x_642_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_643_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_643_, 0, v_a_638_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_643_);
v___x_645_ = v___x_640_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_643_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
v_a_648_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_637_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_637_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_dec(v_a_633_);
lean_dec_ref(v_f_628_);
v_a_656_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_635_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_635_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_dec_ref(v_f_628_);
v_a_664_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_632_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_632_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_672_, lean_object* v_args_673_, lean_object* v___y_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(v_f_672_, v_args_673_);
lean_dec_ref(v_args_673_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object* v_f_676_){
_start:
{
lean_object* v___f_678_; lean_object* v___x_679_; 
v___f_678_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_678_, 0, v_f_676_);
v___x_679_ = l_Lasm_JS_Function_ofSyncFn(v___f_678_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
v_a_688_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_679_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_679_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object* v_f_696_, lean_object* v_a_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn(v_f_696_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(lean_object* v_f_706_, lean_object* v___f_707_, lean_object* v_x_708_){
_start:
{
if (lean_obj_tag(v_x_708_) == 0)
{
lean_object* v___x_710_; 
lean_dec_ref(v___f_707_);
lean_dec_ref(v_f_706_);
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v_x_708_);
return v___x_710_;
}
else
{
lean_object* v_a_711_; lean_object* v___x_712_; uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v_a_711_ = lean_ctor_get(v_x_708_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v_x_708_, 1);
v___x_712_ = lean_unsigned_to_nat(0u);
v___x_713_ = 0;
v___x_714_ = lean_apply_2(v_f_706_, v_a_711_, lean_box(0));
v___x_715_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_712_, v___x_713_, v___x_714_, v___f_707_);
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed(lean_object* v_f_716_, lean_object* v___f_717_, lean_object* v_x_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(v_f_716_, v___f_717_, v_x_718_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(lean_object* v___f_721_, lean_object* v_args_722_){
_start:
{
lean_object* v___x_724_; uint8_t v___x_725_; lean_object* v_val_727_; lean_object* v___x_730_; lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v___x_724_ = lean_unsigned_to_nat(0u);
v___x_725_ = 0;
v___x_730_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_722_, v___x_724_);
v_a_731_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_730_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_730_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v___jp_726_:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v_val_727_);
v___x_729_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_724_, v___x_725_, v___x_728_, v___f_721_);
return v___x_729_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
lean_ctor_set_tag(v___x_733_, 1);
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
v_val_727_ = v___x_736_;
goto v___jp_726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed(lean_object* v___f_739_, lean_object* v_args_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(v___f_739_, v_args_740_);
lean_dec_ref(v_args_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object* v_f_743_){
_start:
{
lean_object* v___f_745_; lean_object* v___f_746_; lean_object* v___f_747_; lean_object* v___x_748_; 
v___f_745_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_746_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_746_, 0, v_f_743_);
lean_closure_set(v___f_746_, 1, v___f_745_);
v___f_747_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_747_, 0, v___f_746_);
v___x_748_ = l_Lasm_JS_Function_ofFn(v___f_747_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
v_a_757_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_748_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_748_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object* v_f_765_, lean_object* v_a_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(v_f_765_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(lean_object* v_f_768_, lean_object* v_args_769_){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v_a_773_; lean_object* v___x_774_; 
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_769_, v___x_771_);
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
lean_dec_ref(v___x_772_);
v___x_774_ = lean_apply_2(v_f_768_, v_a_773_, lean_box(0));
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_784_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_784_ == 0)
{
v___x_777_ = v___x_774_;
v_isShared_778_ = v_isSharedCheck_784_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_784_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_782_; 
v___x_779_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_780_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_780_, 0, v_a_775_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_780_);
v___x_782_ = v___x_777_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_780_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
v_a_785_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_774_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_774_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed(lean_object* v_f_793_, lean_object* v_args_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(v_f_793_, v_args_794_);
lean_dec_ref(v_args_794_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object* v_f_797_){
_start:
{
lean_object* v___f_799_; lean_object* v___x_800_; 
v___f_799_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_799_, 0, v_f_797_);
v___x_800_ = l_Lasm_JS_Function_ofSyncFn(v___f_799_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_800_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
v_a_809_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_800_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_800_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object* v_f_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(v_f_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object* v_x_831_){
_start:
{
if (lean_obj_tag(v_x_831_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_841_; 
v_a_833_ = lean_ctor_get(v_x_831_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v_x_831_);
if (v_isSharedCheck_841_ == 0)
{
v___x_835_ = v_x_831_;
v_isShared_836_ = v_isSharedCheck_841_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v_x_831_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_841_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_840_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
lean_object* v___x_839_; 
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
}
}
else
{
lean_object* v___x_842_; 
lean_dec_ref_known(v_x_831_, 1);
v___x_842_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__1));
return v___x_842_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object* v_x_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(v_x_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object* v_f_846_, lean_object* v___f_847_, lean_object* v_x_848_){
_start:
{
if (lean_obj_tag(v_x_848_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_858_; 
lean_dec_ref(v___f_847_);
lean_dec_ref(v_f_846_);
v_a_850_ = lean_ctor_get(v_x_848_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v_x_848_);
if (v_isSharedCheck_858_ == 0)
{
v___x_852_ = v_x_848_;
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v_x_848_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_857_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; 
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_860_; uint8_t v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_a_859_ = lean_ctor_get(v_x_848_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v_x_848_, 1);
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = 0;
v___x_862_ = lean_apply_2(v_f_846_, v_a_859_, lean_box(0));
v___x_863_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_860_, v___x_861_, v___x_862_, v___f_847_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object* v_f_864_, lean_object* v___f_865_, lean_object* v_x_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(v_f_864_, v___f_865_, v_x_866_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(lean_object* v_d_876_, lean_object* v_key_877_){
_start:
{
if (lean_obj_tag(v_d_876_) == 8)
{
lean_object* v___x_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_909_; 
v___x_878_ = l_Lasm_JS_Data_field(v_d_876_, v_key_877_);
v_isSharedCheck_909_ = !lean_is_exclusive(v_d_876_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; 
v_unused_910_ = lean_ctor_get(v_d_876_, 0);
lean_dec(v_unused_910_);
v___x_880_ = v_d_876_;
v_isShared_881_ = v_isSharedCheck_909_;
goto v_resetjp_879_;
}
else
{
lean_dec(v_d_876_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_909_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
if (lean_obj_tag(v___x_878_) == 4)
{
lean_object* v_s_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_del_object(v___x_880_);
v_s_882_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_878_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_s_882_);
lean_dec(v___x_878_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
lean_ctor_set_tag(v___x_884_, 1);
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_s_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
else
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; 
v___x_890_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_891_ = lean_string_append(v___x_890_, v_key_877_);
v___x_892_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_893_ = lean_string_append(v___x_891_, v___x_892_);
v___x_894_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__2));
v___x_895_ = lean_string_append(v___x_893_, v___x_894_);
v___x_896_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_897_ = lean_string_append(v___x_895_, v___x_896_);
v___x_898_ = l_Lasm_JS_Data_describe(v___x_878_);
v___x_899_ = lean_string_append(v___x_897_, v___x_898_);
lean_dec_ref(v___x_898_);
v___x_900_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_904_; 
v___x_901_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___x_902_ = lean_string_append(v___x_899_, v___x_901_);
if (v_isShared_881_ == 0)
{
lean_ctor_set_tag(v___x_880_, 0);
lean_ctor_set(v___x_880_, 0, v___x_902_);
v___x_904_ = v___x_880_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_902_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
else
{
lean_object* v___x_907_; 
if (v_isShared_881_ == 0)
{
lean_ctor_set_tag(v___x_880_, 0);
lean_ctor_set(v___x_880_, 0, v___x_899_);
v___x_907_ = v___x_880_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_899_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
else
{
lean_object* v___x_911_; 
lean_dec(v_d_876_);
v___x_911_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__5));
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___boxed(lean_object* v_d_912_, lean_object* v_key_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_912_, v_key_913_);
lean_dec_ref(v_key_913_);
return v_res_914_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = lean_unsigned_to_nat(0u);
v___x_919_ = lean_nat_to_int(v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(lean_object* v_d_924_, lean_object* v_key_925_){
_start:
{
if (lean_obj_tag(v_d_924_) == 8)
{
lean_object* v___x_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_969_; 
v___x_926_ = l_Lasm_JS_Data_field(v_d_924_, v_key_925_);
v_isSharedCheck_969_ = !lean_is_exclusive(v_d_924_);
if (v_isSharedCheck_969_ == 0)
{
lean_object* v_unused_970_; 
v_unused_970_ = lean_ctor_get(v_d_924_, 0);
lean_dec(v_unused_970_);
v___x_928_ = v_d_924_;
v_isShared_929_ = v_isSharedCheck_969_;
goto v_resetjp_927_;
}
else
{
lean_dec(v_d_924_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_969_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v_a_931_; lean_object* v_a_957_; 
switch(lean_obj_tag(v___x_926_))
{
case 3:
{
double v_n_963_; lean_object* v___x_964_; 
v_n_963_ = lean_ctor_get_float(v___x_926_, 0);
v___x_964_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_963_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v___x_965_; 
v___x_965_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__5));
v_a_931_ = v___x_965_;
goto v___jp_930_;
}
else
{
lean_object* v_val_966_; 
v_val_966_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_val_966_);
lean_dec_ref_known(v___x_964_, 1);
v_a_957_ = v_val_966_;
goto v___jp_956_;
}
}
case 5:
{
lean_object* v_i_967_; 
v_i_967_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_i_967_);
v_a_957_ = v_i_967_;
goto v___jp_956_;
}
default: 
{
lean_object* v___x_968_; 
v___x_968_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v_a_931_ = v___x_968_;
goto v___jp_930_;
}
}
v___jp_930_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_932_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_933_ = lean_string_append(v___x_932_, v_key_925_);
v___x_934_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_935_ = lean_string_append(v___x_933_, v___x_934_);
v___x_936_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__0));
v___x_937_ = lean_string_append(v___x_935_, v___x_936_);
v___x_938_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_939_ = lean_string_append(v___x_937_, v___x_938_);
v___x_940_ = l_Lasm_JS_Data_describe(v___x_926_);
v___x_941_ = lean_string_append(v___x_939_, v___x_940_);
lean_dec_ref(v___x_940_);
v___x_942_ = lean_string_utf8_byte_size(v_a_931_);
v___x_943_ = lean_unsigned_to_nat(0u);
v___x_944_ = lean_nat_dec_eq(v___x_942_, v___x_943_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_945_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1));
v___x_946_ = lean_string_append(v___x_945_, v_a_931_);
v___x_947_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2));
v___x_948_ = lean_string_append(v___x_946_, v___x_947_);
v___x_949_ = lean_string_append(v___x_941_, v___x_948_);
lean_dec_ref(v___x_948_);
if (v_isShared_929_ == 0)
{
lean_ctor_set_tag(v___x_928_, 0);
lean_ctor_set(v___x_928_, 0, v___x_949_);
v___x_951_ = v___x_928_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_949_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
else
{
lean_object* v___x_954_; 
if (v_isShared_929_ == 0)
{
lean_ctor_set_tag(v___x_928_, 0);
lean_ctor_set(v___x_928_, 0, v___x_941_);
v___x_954_ = v___x_928_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_941_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
v___jp_956_:
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3);
v___x_959_ = lean_int_dec_le(v___x_958_, v_a_957_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; 
lean_dec(v_a_957_);
v___x_960_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__4));
v_a_931_ = v___x_960_;
goto v___jp_930_;
}
else
{
lean_object* v___x_961_; lean_object* v___x_962_; 
lean_del_object(v___x_928_);
lean_dec(v___x_926_);
v___x_961_ = l_Int_toNat(v_a_957_);
lean_dec(v_a_957_);
v___x_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
return v___x_962_;
}
}
}
}
else
{
lean_object* v___x_971_; 
lean_dec(v_d_924_);
v___x_971_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__6));
return v___x_971_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___boxed(lean_object* v_d_972_, lean_object* v_key_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_972_, v_key_973_);
lean_dec_ref(v_key_973_);
return v_res_974_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0));
v___x_976_ = lean_string_utf8_byte_size(v___x_975_);
return v___x_976_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_977_ = lean_unsigned_to_nat(0u);
v___x_978_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0);
v___x_979_ = lean_nat_dec_eq(v___x_978_, v___x_977_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(lean_object* v_d_983_, lean_object* v_key_984_){
_start:
{
if (lean_obj_tag(v_d_983_) == 8)
{
lean_object* v___x_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_1016_; 
v___x_985_ = l_Lasm_JS_Data_field(v_d_983_, v_key_984_);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_d_983_);
if (v_isSharedCheck_1016_ == 0)
{
lean_object* v_unused_1017_; 
v_unused_1017_ = lean_ctor_get(v_d_983_, 0);
lean_dec(v_unused_1017_);
v___x_987_ = v_d_983_;
v_isShared_988_ = v_isSharedCheck_1016_;
goto v_resetjp_986_;
}
else
{
lean_dec(v_d_983_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_1016_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
if (lean_obj_tag(v___x_985_) == 4)
{
lean_object* v_s_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v_s_1009_ = lean_ctor_get(v___x_985_, 0);
lean_inc_ref(v_s_1009_);
v___x_1010_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_1011_ = lean_string_dec_eq(v_s_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2));
v___x_1013_ = lean_string_dec_eq(v_s_1009_, v___x_1012_);
lean_dec_ref(v_s_1009_);
if (v___x_1013_ == 0)
{
goto v___jp_989_;
}
else
{
lean_object* v___x_1014_; 
lean_dec_ref_known(v___x_985_, 1);
lean_del_object(v___x_987_);
v___x_1014_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2));
return v___x_1014_;
}
}
else
{
lean_object* v___x_1015_; 
lean_dec_ref_known(v___x_985_, 1);
lean_dec_ref(v_s_1009_);
lean_del_object(v___x_987_);
v___x_1015_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3));
return v___x_1015_;
}
}
else
{
goto v___jp_989_;
}
v___jp_989_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_990_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_991_ = lean_string_append(v___x_990_, v_key_984_);
v___x_992_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_993_ = lean_string_append(v___x_991_, v___x_992_);
v___x_994_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1));
v___x_995_ = lean_string_append(v___x_993_, v___x_994_);
v___x_996_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_997_ = lean_string_append(v___x_995_, v___x_996_);
v___x_998_ = l_Lasm_JS_Data_describe(v___x_985_);
v___x_999_ = lean_string_append(v___x_997_, v___x_998_);
lean_dec_ref(v___x_998_);
v___x_1000_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1004_; 
v___x_1001_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__2));
v___x_1002_ = lean_string_append(v___x_999_, v___x_1001_);
if (v_isShared_988_ == 0)
{
lean_ctor_set_tag(v___x_987_, 0);
lean_ctor_set(v___x_987_, 0, v___x_1002_);
v___x_1004_ = v___x_987_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
else
{
lean_object* v___x_1007_; 
if (v_isShared_988_ == 0)
{
lean_ctor_set_tag(v___x_987_, 0);
lean_ctor_set(v___x_987_, 0, v___x_999_);
v___x_1007_ = v___x_987_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_999_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
else
{
lean_object* v___x_1018_; 
lean_dec(v_d_983_);
v___x_1018_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__3));
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1019_, lean_object* v_key_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1019_, v_key_1020_);
lean_dec_ref(v_key_1020_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(lean_object* v_context_1022_, lean_object* v_d_1023_){
_start:
{
lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1032_; lean_object* v_received_1033_; lean_object* v___y_1052_; lean_object* v_a_1055_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
lean_inc(v_d_1023_);
v___x_1080_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1023_, v___x_1079_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v___x_1080_, 1);
v_a_1055_ = v_a_1081_;
goto v___jp_1054_;
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v_a_1082_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v___x_1080_, 1);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
lean_inc(v_d_1023_);
v___x_1084_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1023_, v___x_1083_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; 
lean_dec(v_a_1082_);
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v___x_1084_, 1);
v_a_1055_ = v_a_1085_;
goto v___jp_1054_;
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_a_1086_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1084_, 1);
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc(v_d_1023_);
v___x_1088_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1023_, v___x_1087_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; 
lean_dec(v_a_1086_);
lean_dec(v_a_1082_);
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
v_a_1055_ = v_a_1089_;
goto v___jp_1054_;
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1099_; 
lean_dec(v_d_1023_);
v_a_1090_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1092_ = v___x_1088_;
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1088_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; uint8_t v___x_1095_; lean_object* v___x_1097_; 
v___x_1094_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1094_, 0, v_a_1086_);
lean_ctor_set(v___x_1094_, 1, v_a_1090_);
v___x_1095_ = lean_unbox(v_a_1082_);
lean_dec(v_a_1082_);
lean_ctor_set_uint8(v___x_1094_, sizeof(void*)*2, v___x_1095_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set_tag(v___x_1092_, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1094_);
v___x_1097_ = v___x_1092_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1094_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
}
}
v___jp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1028_ = lean_string_append(v___y_1026_, v___y_1027_);
lean_dec_ref(v___y_1027_);
v___x_1029_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
v___x_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
return v___x_1030_;
}
v___jp_1031_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; uint8_t v___x_1045_; 
v___x_1034_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1035_ = lean_string_append(v___x_1034_, v_context_1022_);
v___x_1036_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1037_ = lean_string_append(v___x_1035_, v___x_1036_);
v___x_1038_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___x_1039_ = lean_string_append(v___x_1037_, v___x_1038_);
v___x_1040_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1041_ = lean_string_append(v___x_1039_, v___x_1040_);
v___x_1042_ = lean_string_append(v___x_1041_, v_received_1033_);
lean_dec_ref(v_received_1033_);
v___x_1043_ = lean_string_utf8_byte_size(v___y_1032_);
v___x_1044_ = lean_unsigned_to_nat(0u);
v___x_1045_ = lean_nat_dec_eq(v___x_1043_, v___x_1044_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1046_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1));
v___x_1047_ = lean_string_append(v___x_1046_, v___y_1032_);
lean_dec_ref(v___y_1032_);
v___x_1048_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2));
v___x_1049_ = lean_string_append(v___x_1047_, v___x_1048_);
v___y_1026_ = v___x_1042_;
v___y_1027_ = v___x_1049_;
goto v___jp_1025_;
}
else
{
lean_object* v___x_1050_; 
lean_dec_ref(v___y_1032_);
v___x_1050_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___y_1026_ = v___x_1042_;
v___y_1027_ = v___x_1050_;
goto v___jp_1025_;
}
}
v___jp_1051_:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lasm_JS_Data_describe(v_d_1023_);
v___y_1032_ = v___y_1052_;
v_received_1033_ = v___x_1053_;
goto v___jp_1031_;
}
v___jp_1054_:
{
if (lean_obj_tag(v_d_1023_) == 9)
{
lean_object* v_value_1056_; lean_object* v_description_1057_; lean_object* v___x_1058_; uint8_t v___x_1059_; 
v_value_1056_ = lean_ctor_get(v_d_1023_, 0);
v_description_1057_ = lean_ctor_get(v_d_1023_, 1);
v___x_1058_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1059_ = lean_string_dec_eq(v_description_1057_, v___x_1058_);
if (v___x_1059_ == 0)
{
v___y_1052_ = v_a_1055_;
goto v___jp_1051_;
}
else
{
lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1076_; 
lean_inc(v_value_1056_);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_d_1023_);
if (v_isSharedCheck_1076_ == 0)
{
lean_object* v_unused_1077_; lean_object* v_unused_1078_; 
v_unused_1077_ = lean_ctor_get(v_d_1023_, 1);
lean_dec(v_unused_1077_);
v_unused_1078_ = lean_ctor_get(v_d_1023_, 0);
lean_dec(v_unused_1078_);
v___x_1061_ = v_d_1023_;
v_isShared_1062_ = v_isSharedCheck_1076_;
goto v_resetjp_1060_;
}
else
{
lean_dec(v_d_1023_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1076_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
uint32_t v___x_1063_; uint64_t v___x_1064_; lean_object* v___x_1066_; 
v___x_1063_ = 206;
v___x_1064_ = 0ULL;
lean_inc(v_value_1056_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 1, v___x_1058_);
v___x_1066_ = v___x_1061_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_value_1056_);
lean_ctor_set(v_reuseFailAlloc_1075_, 1, v___x_1058_);
v___x_1066_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
uint32_t v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = lasm_js_value_handle(v_value_1056_);
lean_dec(v_value_1056_);
v___x_1068_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1063_, v___x_1064_, v___x_1066_, v___x_1067_);
lean_dec_ref(v___x_1066_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; uint8_t v___x_1070_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = lean_string_validate_utf8(v_a_1069_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
lean_dec(v_a_1069_);
v___x_1071_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_1072_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1071_);
v___y_1032_ = v_a_1055_;
v_received_1033_ = v___x_1072_;
goto v___jp_1031_;
}
else
{
lean_object* v___x_1073_; 
v___x_1073_ = lean_string_from_utf8_unchecked(v_a_1069_);
v___y_1032_ = v_a_1055_;
v_received_1033_ = v___x_1073_;
goto v___jp_1031_;
}
}
else
{
lean_object* v___x_1074_; 
lean_dec_ref_known(v___x_1068_, 1);
v___x_1074_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v___y_1032_ = v_a_1055_;
v_received_1033_ = v___x_1074_;
goto v___jp_1031_;
}
}
}
}
}
else
{
v___y_1052_ = v_a_1055_;
goto v___jp_1051_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1100_, lean_object* v_d_1101_, lean_object* v_a_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1100_, v_d_1101_);
lean_dec_ref(v_context_1100_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object* v_args_1104_, lean_object* v_i_1105_){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v___x_1107_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1108_ = lean_unsigned_to_nat(1u);
v___x_1109_ = lean_nat_add(v_i_1105_, v___x_1108_);
v___x_1110_ = l_Nat_reprFast(v___x_1109_);
v___x_1111_ = lean_string_append(v___x_1107_, v___x_1110_);
lean_dec_ref(v___x_1110_);
v___x_1112_ = lean_array_get_size(v_args_1104_);
v___x_1113_ = lean_nat_dec_lt(v_i_1105_, v___x_1112_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = lean_box(0);
v___x_1115_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1111_, v___x_1114_);
lean_dec_ref(v___x_1111_);
return v___x_1115_;
}
else
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = lean_array_fget_borrowed(v_args_1104_, v_i_1105_);
lean_inc(v___x_1116_);
v___x_1117_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1111_, v___x_1116_);
lean_dec_ref(v___x_1111_);
return v___x_1117_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object* v_args_1118_, lean_object* v_i_1119_, lean_object* v_a_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1118_, v_i_1119_);
lean_dec(v_i_1119_);
lean_dec_ref(v_args_1118_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(lean_object* v___f_1122_, lean_object* v_args_1123_){
_start:
{
lean_object* v___x_1125_; uint8_t v___x_1126_; lean_object* v_val_1128_; lean_object* v___x_1131_; 
v___x_1125_ = lean_unsigned_to_nat(0u);
v___x_1126_ = 0;
v___x_1131_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1123_, v___x_1125_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1139_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1134_ = v___x_1131_;
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1137_; 
if (v_isShared_1135_ == 0)
{
lean_ctor_set_tag(v___x_1134_, 1);
v___x_1137_ = v___x_1134_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1132_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
v_val_1128_ = v___x_1137_;
goto v___jp_1127_;
}
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
v_a_1140_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1131_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1131_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set_tag(v___x_1142_, 0);
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
v_val_1128_ = v___x_1145_;
goto v___jp_1127_;
}
}
}
v___jp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v_val_1128_);
v___x_1130_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1125_, v___x_1126_, v___x_1129_, v___f_1122_);
return v___x_1130_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed(lean_object* v___f_1148_, lean_object* v_args_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(v___f_1148_, v_args_1149_);
lean_dec_ref(v_args_1149_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object* v_f_1153_){
_start:
{
lean_object* v___f_1155_; lean_object* v___f_1156_; lean_object* v___f_1157_; lean_object* v___x_1158_; 
v___f_1155_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___closed__0));
v___f_1156_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1156_, 0, v_f_1153_);
lean_closure_set(v___f_1156_, 1, v___f_1155_);
v___f_1157_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1157_, 0, v___f_1156_);
v___x_1158_ = l_Lasm_JS_Function_ofFn(v___f_1157_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1158_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1158_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
v_a_1167_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1158_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1158_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object* v_f_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(v_f_1175_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object* v_f_1178_, lean_object* v_args_1179_){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_unsigned_to_nat(0u);
v___x_1182_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1179_, v___x_1181_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1184_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1182_, 1);
v___x_1184_ = lean_apply_2(v_f_1178_, v_a_1183_, lean_box(0));
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1192_; 
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1192_ == 0)
{
lean_object* v_unused_1193_; 
v_unused_1193_ = lean_ctor_get(v___x_1184_, 0);
lean_dec(v_unused_1193_);
v___x_1186_ = v___x_1184_;
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
else
{
lean_dec(v___x_1184_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1188_ = lean_box(0);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 0, v___x_1188_);
v___x_1190_ = v___x_1186_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
v_a_1194_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1184_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1184_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
lean_dec_ref(v_f_1178_);
v_a_1202_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1182_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1182_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1210_, lean_object* v_args_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(v_f_1210_, v_args_1211_);
lean_dec_ref(v_args_1211_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object* v_f_1214_){
_start:
{
lean_object* v___f_1216_; lean_object* v___x_1217_; 
v___f_1216_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1216_, 0, v_f_1214_);
v___x_1217_ = l_Lasm_JS_Function_ofSyncFn(v___f_1216_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
v_a_1226_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1217_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1217_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object* v_f_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(v_f_1234_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object* v___f_1243_, lean_object* v___f_1244_, lean_object* v___f_1245_, lean_object* v___f_1246_, lean_object* v___f_1247_, lean_object* v___f_1248_, lean_object* v___f_1249_, lean_object* v_d_1250_){
_start:
{
lean_object* v_signal_1251_; lean_object* v_onError_1252_; lean_object* v_onListen_1253_; lean_object* v_automaticCompression_1254_; lean_object* v_transport_1255_; lean_object* v_port_1256_; lean_object* v_hostname_1257_; lean_object* v_reusePort_1258_; lean_object* v_tcpBacklog_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v_signal_1251_ = lean_ctor_get(v_d_1250_, 0);
lean_inc(v_signal_1251_);
v_onError_1252_ = lean_ctor_get(v_d_1250_, 1);
lean_inc(v_onError_1252_);
v_onListen_1253_ = lean_ctor_get(v_d_1250_, 2);
lean_inc(v_onListen_1253_);
v_automaticCompression_1254_ = lean_ctor_get(v_d_1250_, 3);
lean_inc(v_automaticCompression_1254_);
v_transport_1255_ = lean_ctor_get(v_d_1250_, 4);
lean_inc(v_transport_1255_);
v_port_1256_ = lean_ctor_get(v_d_1250_, 5);
lean_inc(v_port_1256_);
v_hostname_1257_ = lean_ctor_get(v_d_1250_, 6);
lean_inc(v_hostname_1257_);
v_reusePort_1258_ = lean_ctor_get(v_d_1250_, 7);
lean_inc(v_reusePort_1258_);
v_tcpBacklog_1259_ = lean_ctor_get(v_d_1250_, 8);
lean_inc(v_tcpBacklog_1259_);
lean_dec_ref(v_d_1250_);
v___x_1260_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1261_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1243_, v_signal_1251_);
v___x_1262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1260_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v___x_1263_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1264_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1244_, v_onError_1252_);
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1267_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1245_, v_onListen_1253_);
v___x_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1266_);
lean_ctor_set(v___x_1268_, 1, v___x_1267_);
v___x_1269_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1246_);
v___x_1270_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1246_, v_automaticCompression_1254_);
v___x_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1269_);
lean_ctor_set(v___x_1271_, 1, v___x_1270_);
v___x_1272_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1273_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1247_, v_transport_1255_);
v___x_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1272_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1248_);
v___x_1276_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1248_, v_port_1256_);
v___x_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1275_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1279_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1249_, v_hostname_1257_);
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v___x_1281_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1282_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1246_, v_reusePort_1258_);
v___x_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1285_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1248_, v_tcpBacklog_1259_);
v___x_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = lean_unsigned_to_nat(9u);
v___x_1288_ = lean_mk_empty_array_with_capacity(v___x_1287_);
v___x_1289_ = lean_array_push(v___x_1288_, v___x_1262_);
v___x_1290_ = lean_array_push(v___x_1289_, v___x_1265_);
v___x_1291_ = lean_array_push(v___x_1290_, v___x_1268_);
v___x_1292_ = lean_array_push(v___x_1291_, v___x_1271_);
v___x_1293_ = lean_array_push(v___x_1292_, v___x_1274_);
v___x_1294_ = lean_array_push(v___x_1293_, v___x_1277_);
v___x_1295_ = lean_array_push(v___x_1294_, v___x_1280_);
v___x_1296_ = lean_array_push(v___x_1295_, v___x_1283_);
v___x_1297_ = lean_array_push(v___x_1296_, v___x_1286_);
v___x_1298_ = l_Lasm_JS_Web_Support_fields(v___x_1297_);
lean_dec_ref(v___x_1297_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object* v___f_1314_, lean_object* v___f_1315_, lean_object* v___f_1316_, lean_object* v___f_1317_, lean_object* v___f_1318_, lean_object* v___f_1319_, lean_object* v___f_1320_, lean_object* v___f_1321_, lean_object* v_d_1322_){
_start:
{
lean_object* v_signal_1323_; lean_object* v_onError_1324_; lean_object* v_onListen_1325_; lean_object* v_automaticCompression_1326_; lean_object* v_transport_1327_; lean_object* v_port_1328_; lean_object* v_hostname_1329_; lean_object* v_reusePort_1330_; lean_object* v_tcpBacklog_1331_; lean_object* v_keyFormat_1332_; lean_object* v_key_1333_; lean_object* v_cert_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v_signal_1323_ = lean_ctor_get(v_d_1322_, 0);
lean_inc(v_signal_1323_);
v_onError_1324_ = lean_ctor_get(v_d_1322_, 1);
lean_inc(v_onError_1324_);
v_onListen_1325_ = lean_ctor_get(v_d_1322_, 2);
lean_inc(v_onListen_1325_);
v_automaticCompression_1326_ = lean_ctor_get(v_d_1322_, 3);
lean_inc(v_automaticCompression_1326_);
v_transport_1327_ = lean_ctor_get(v_d_1322_, 4);
lean_inc(v_transport_1327_);
v_port_1328_ = lean_ctor_get(v_d_1322_, 5);
lean_inc(v_port_1328_);
v_hostname_1329_ = lean_ctor_get(v_d_1322_, 6);
lean_inc(v_hostname_1329_);
v_reusePort_1330_ = lean_ctor_get(v_d_1322_, 7);
lean_inc(v_reusePort_1330_);
v_tcpBacklog_1331_ = lean_ctor_get(v_d_1322_, 8);
lean_inc(v_tcpBacklog_1331_);
v_keyFormat_1332_ = lean_ctor_get(v_d_1322_, 9);
lean_inc(v_keyFormat_1332_);
v_key_1333_ = lean_ctor_get(v_d_1322_, 10);
lean_inc_ref(v_key_1333_);
v_cert_1334_ = lean_ctor_get(v_d_1322_, 11);
lean_inc_ref(v_cert_1334_);
lean_dec_ref(v_d_1322_);
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1336_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1314_, v_signal_1323_);
v___x_1337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1335_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1339_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1315_, v_onError_1324_);
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1342_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1316_, v_onListen_1325_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1317_);
v___x_1345_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1317_, v_automaticCompression_1326_);
v___x_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1348_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1318_, v_transport_1327_);
v___x_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1319_);
v___x_1351_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1319_, v_port_1328_);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1350_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
v___x_1353_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1354_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1320_, v_hostname_1329_);
v___x_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1353_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1357_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1317_, v_reusePort_1330_);
v___x_1358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1360_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1319_, v_tcpBacklog_1331_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1359_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_1363_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1321_, v_keyFormat_1332_);
v___x_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_1366_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1366_, 0, v_key_1333_);
v___x_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1365_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_1369_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1369_, 0, v_cert_1334_);
v___x_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1368_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = lean_unsigned_to_nat(12u);
v___x_1372_ = lean_mk_empty_array_with_capacity(v___x_1371_);
v___x_1373_ = lean_array_push(v___x_1372_, v___x_1337_);
v___x_1374_ = lean_array_push(v___x_1373_, v___x_1340_);
v___x_1375_ = lean_array_push(v___x_1374_, v___x_1343_);
v___x_1376_ = lean_array_push(v___x_1375_, v___x_1346_);
v___x_1377_ = lean_array_push(v___x_1376_, v___x_1349_);
v___x_1378_ = lean_array_push(v___x_1377_, v___x_1352_);
v___x_1379_ = lean_array_push(v___x_1378_, v___x_1355_);
v___x_1380_ = lean_array_push(v___x_1379_, v___x_1358_);
v___x_1381_ = lean_array_push(v___x_1380_, v___x_1361_);
v___x_1382_ = lean_array_push(v___x_1381_, v___x_1364_);
v___x_1383_ = lean_array_push(v___x_1382_, v___x_1367_);
v___x_1384_ = lean_array_push(v___x_1383_, v___x_1370_);
v___x_1385_ = l_Lasm_JS_Web_Support_fields(v___x_1384_);
lean_dec_ref(v___x_1384_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(lean_object* v_context_1395_, lean_object* v_bytes_1396_){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1396_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1400_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1399_);
lean_dec_ref_known(v___x_1398_, 1);
v___x_1400_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1395_, v_a_1399_);
return v___x_1400_;
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1398_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1398_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0___boxed(lean_object* v_context_1409_, lean_object* v_bytes_1410_, lean_object* v_a_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(v_context_1409_, v_bytes_1410_);
lean_dec_ref(v_bytes_1410_);
lean_dec_ref(v_context_1409_);
return v_res_1412_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1413_; uint64_t v___x_1414_; 
v___x_1413_ = 0;
v___x_1414_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(lean_object* v_o_1416_, lean_object* v_key_1417_){
_start:
{
lean_object* v_k_1419_; lean_object* v___x_1420_; 
v_k_1419_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1419_, 0, v_key_1417_);
v___x_1420_ = l_Lasm_JS_Wire_encodeIO(v_k_1419_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; uint32_t v___x_1422_; uint32_t v___x_1423_; uint64_t v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref_known(v___x_1420_, 1);
v___x_1422_ = 203;
v___x_1423_ = lasm_js_value_handle(v_o_1416_);
v___x_1424_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0);
v___x_1425_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1426_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1426_, 0, v_o_1416_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = lean_unsigned_to_nat(2u);
v___x_1428_ = lean_mk_empty_array_with_capacity(v___x_1427_);
lean_inc_ref(v_k_1419_);
v___x_1429_ = lean_array_push(v___x_1428_, v_k_1419_);
v___x_1430_ = lean_array_push(v___x_1429_, v___x_1426_);
v___x_1431_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
v___x_1432_ = lasm_js_call(v___x_1422_, v___x_1423_, v___x_1424_, v_a_1421_, v___x_1431_);
lean_dec_ref_known(v___x_1431_, 1);
lean_dec(v_a_1421_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
lean_inc(v_a_1433_);
lean_dec_ref_known(v___x_1432_, 1);
v___x_1434_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__1));
v___x_1435_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1419_);
v___x_1436_ = lean_string_append(v___x_1434_, v___x_1435_);
lean_dec_ref(v___x_1435_);
v___x_1437_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(v___x_1436_, v_a_1433_);
lean_dec(v_a_1433_);
lean_dec_ref(v___x_1436_);
return v___x_1437_;
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref_known(v_k_1419_, 1);
v_a_1438_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1432_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1432_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref_known(v_k_1419_, 1);
lean_dec(v_o_1416_);
v_a_1446_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1420_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1420_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___boxed(lean_object* v_o_1454_, lean_object* v_key_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_o_1454_, v_key_1455_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(lean_object* v_self_1459_){
_start:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1461_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_1462_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_self_1459_, v___x_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___boxed(lean_object* v_self_1463_, lean_object* v_a_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(v_self_1463_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(lean_object* v_x_1466_){
_start:
{
if (lean_obj_tag(v_x_1466_) == 0)
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1476_; 
v_a_1468_ = lean_ctor_get(v_x_1466_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v_x_1466_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1470_ = v_x_1466_;
v_isShared_1471_ = v_isSharedCheck_1476_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v_x_1466_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1476_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1468_);
v___x_1473_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___x_1474_; 
v___x_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
return v___x_1474_;
}
}
}
else
{
lean_object* v_a_1477_; lean_object* v___x_1478_; 
v_a_1477_ = lean_ctor_get(v_x_1466_, 0);
lean_inc(v_a_1477_);
lean_dec_ref_known(v_x_1466_, 1);
v___x_1478_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_1477_);
return v___x_1478_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0___boxed(lean_object* v_x_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(v_x_1479_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed(lean_object* v_self_1484_){
_start:
{
lean_object* v___f_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; uint8_t v___x_1489_; lean_object* v_val_1491_; lean_object* v___x_1494_; 
v___f_1486_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_1487_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__1));
v___x_1488_ = lean_unsigned_to_nat(0u);
v___x_1489_ = 0;
v___x_1494_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1484_, v___x_1487_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1494_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
lean_ctor_set_tag(v___x_1497_, 1);
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
v_val_1491_ = v___x_1500_;
goto v___jp_1490_;
}
}
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_a_1503_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1494_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1494_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
lean_ctor_set_tag(v___x_1505_, 0);
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
v_val_1491_ = v___x_1508_;
goto v___jp_1490_;
}
}
}
v___jp_1490_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v_val_1491_);
v___x_1493_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1488_, v___x_1489_, v___x_1492_, v___f_1486_);
return v___x_1493_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___boxed(lean_object* v_self_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed(v_self_1511_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object* v_self_1515_){
_start:
{
lean_object* v___f_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; uint8_t v___x_1520_; lean_object* v_val_1522_; lean_object* v___x_1525_; 
v___f_1517_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_1518_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_1519_ = lean_unsigned_to_nat(0u);
v___x_1520_ = 0;
v___x_1525_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1515_, v___x_1518_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1533_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1528_ = v___x_1525_;
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1525_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
lean_ctor_set_tag(v___x_1528_, 1);
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1526_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
v_val_1522_ = v___x_1531_;
goto v___jp_1521_;
}
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
v_a_1534_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1525_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1525_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
lean_ctor_set_tag(v___x_1536_, 0);
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
v_val_1522_ = v___x_1539_;
goto v___jp_1521_;
}
}
}
v___jp_1521_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1523_, 0, v_val_1522_);
v___x_1524_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1519_, v___x_1520_, v___x_1523_, v___f_1517_);
return v___x_1524_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object* v_self_1542_, lean_object* v_a_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lasm_JS_Deno_HttpServer_finished(v_self_1542_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr(lean_object* v_self_1546_){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_1549_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_self_1546_, v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr___boxed(lean_object* v_self_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lasm_JS_Deno_HttpServer_addr(v_self_1550_);
return v_res_1552_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2(void){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__1));
v___x_1557_ = l_Lasm_JS_Web_Support_args(v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref(lean_object* v_self_1558_){
_start:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1560_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_1561_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1562_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1558_, v___x_1560_, v___x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref___boxed(lean_object* v_self_1563_, lean_object* v_a_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Lasm_JS_Deno_HttpServer_ref(v_self_1563_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref(lean_object* v_self_1567_){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1569_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_1570_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1571_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1567_, v___x_1569_, v___x_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref___boxed(lean_object* v_self_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lasm_JS_Deno_HttpServer_unref(v_self_1572_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown(lean_object* v_self_1576_){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1578_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_1579_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1580_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1576_, v___x_1578_, v___x_1579_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___boxed(lean_object* v_self_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lasm_JS_Deno_HttpServer_shutdown(v_self_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve(lean_object* v_handler_1593_){
_start:
{
uint8_t v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1595_ = 0;
v___x_1596_ = lean_unsigned_to_nat(1u);
v___x_1597_ = ((lean_object*)(l_Lasm_JS_Deno_serve___closed__3));
v___x_1598_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1599_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1599_, 0, v_handler_1593_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = lean_mk_empty_array_with_capacity(v___x_1596_);
v___x_1601_ = lean_array_push(v___x_1600_, v___x_1599_);
v___x_1602_ = l_Lasm_JS_Web_Support_args(v___x_1601_);
v___x_1603_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1597_, v___x_1602_, v___x_1595_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1603_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1603_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1604_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
v_a_1612_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1603_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1603_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve___boxed(lean_object* v_handler_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lasm_JS_Deno_serve(v_handler_1620_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(lean_object* v_x_1623_){
_start:
{
if (lean_obj_tag(v_x_1623_) == 0)
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_box(0);
return v___x_1624_;
}
else
{
lean_object* v_val_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v_val_1625_ = lean_ctor_get(v_x_1623_, 0);
v___x_1626_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_val_1625_);
v___x_1627_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1627_, 0, v_val_1625_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
return v___x_1627_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0___boxed(lean_object* v_x_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_x_1628_);
lean_dec(v_x_1628_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(lean_object* v_x_1630_){
_start:
{
if (lean_obj_tag(v_x_1630_) == 0)
{
lean_object* v___x_1631_; 
v___x_1631_ = lean_box(0);
return v___x_1631_;
}
else
{
lean_object* v_val_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v_val_1632_ = lean_ctor_get(v_x_1630_, 0);
v___x_1633_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_val_1632_);
v___x_1634_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1634_, 0, v_val_1632_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
return v___x_1634_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1___boxed(lean_object* v_x_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_x_1635_);
lean_dec(v_x_1635_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(lean_object* v_x_1637_){
_start:
{
if (lean_obj_tag(v_x_1637_) == 0)
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_box(0);
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; 
v___x_1639_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_1639_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2___boxed(lean_object* v_x_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_x_1640_);
lean_dec(v_x_1640_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions(lean_object* v_options_1649_, lean_object* v_handler_1650_){
_start:
{
lean_object* v_signal_1652_; lean_object* v_onError_1653_; lean_object* v_onListen_1654_; lean_object* v_automaticCompression_1655_; lean_object* v_transport_1656_; lean_object* v_port_1657_; lean_object* v_hostname_1658_; lean_object* v_reusePort_1659_; lean_object* v_tcpBacklog_1660_; uint8_t v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v_signal_1652_ = lean_ctor_get(v_options_1649_, 0);
lean_inc(v_signal_1652_);
v_onError_1653_ = lean_ctor_get(v_options_1649_, 1);
lean_inc(v_onError_1653_);
v_onListen_1654_ = lean_ctor_get(v_options_1649_, 2);
lean_inc(v_onListen_1654_);
v_automaticCompression_1655_ = lean_ctor_get(v_options_1649_, 3);
lean_inc(v_automaticCompression_1655_);
v_transport_1656_ = lean_ctor_get(v_options_1649_, 4);
lean_inc(v_transport_1656_);
v_port_1657_ = lean_ctor_get(v_options_1649_, 5);
lean_inc(v_port_1657_);
v_hostname_1658_ = lean_ctor_get(v_options_1649_, 6);
lean_inc(v_hostname_1658_);
v_reusePort_1659_ = lean_ctor_get(v_options_1649_, 7);
lean_inc(v_reusePort_1659_);
v_tcpBacklog_1660_ = lean_ctor_get(v_options_1649_, 8);
lean_inc(v_tcpBacklog_1660_);
lean_dec_ref(v_options_1649_);
v___x_1661_ = 0;
v___x_1662_ = lean_unsigned_to_nat(2u);
v___x_1663_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithOptions___closed__1));
v___x_1664_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1665_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1652_);
lean_dec(v_signal_1652_);
v___x_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1668_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_1653_);
lean_dec(v_onError_1653_);
v___x_1669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1667_);
lean_ctor_set(v___x_1669_, 1, v___x_1668_);
v___x_1670_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1671_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_1654_);
lean_dec(v_onListen_1654_);
v___x_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1670_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_1674_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_1655_);
lean_dec(v_automaticCompression_1655_);
v___x_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1673_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
v___x_1676_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1677_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_1656_);
lean_dec(v_transport_1656_);
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1676_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_1680_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_1657_);
v___x_1681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1679_);
lean_ctor_set(v___x_1681_, 1, v___x_1680_);
v___x_1682_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1683_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1658_);
v___x_1684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1682_);
lean_ctor_set(v___x_1684_, 1, v___x_1683_);
v___x_1685_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1686_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1659_);
lean_dec(v_reusePort_1659_);
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1685_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
v___x_1688_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1689_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_1660_);
v___x_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1688_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
v___x_1691_ = lean_unsigned_to_nat(9u);
v___x_1692_ = lean_mk_empty_array_with_capacity(v___x_1691_);
v___x_1693_ = lean_array_push(v___x_1692_, v___x_1666_);
v___x_1694_ = lean_array_push(v___x_1693_, v___x_1669_);
v___x_1695_ = lean_array_push(v___x_1694_, v___x_1672_);
v___x_1696_ = lean_array_push(v___x_1695_, v___x_1675_);
v___x_1697_ = lean_array_push(v___x_1696_, v___x_1678_);
v___x_1698_ = lean_array_push(v___x_1697_, v___x_1681_);
v___x_1699_ = lean_array_push(v___x_1698_, v___x_1684_);
v___x_1700_ = lean_array_push(v___x_1699_, v___x_1687_);
v___x_1701_ = lean_array_push(v___x_1700_, v___x_1690_);
v___x_1702_ = l_Lasm_JS_Web_Support_fields(v___x_1701_);
lean_dec_ref(v___x_1701_);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1704_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1704_, 0, v_handler_1650_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = lean_mk_empty_array_with_capacity(v___x_1662_);
v___x_1706_ = lean_array_push(v___x_1705_, v___x_1702_);
v___x_1707_ = lean_array_push(v___x_1706_, v___x_1704_);
v___x_1708_ = l_Lasm_JS_Web_Support_args(v___x_1707_);
v___x_1709_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1663_, v___x_1708_, v___x_1661_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1709_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1709_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
v_a_1718_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1709_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1709_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions___boxed(lean_object* v_options_1726_, lean_object* v_handler_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lasm_JS_Deno_serveWithOptions(v_options_1726_, v_handler_1727_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(lean_object* v_x_1730_){
_start:
{
if (lean_obj_tag(v_x_1730_) == 0)
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_box(0);
return v___x_1731_;
}
else
{
lean_object* v___x_1732_; 
v___x_1732_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_1732_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0___boxed(lean_object* v_x_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_x_1733_);
lean_dec(v_x_1733_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions(lean_object* v_tlsOptions_1742_, lean_object* v_handler_1743_){
_start:
{
lean_object* v_signal_1745_; lean_object* v_onError_1746_; lean_object* v_onListen_1747_; lean_object* v_automaticCompression_1748_; lean_object* v_transport_1749_; lean_object* v_port_1750_; lean_object* v_hostname_1751_; lean_object* v_reusePort_1752_; lean_object* v_tcpBacklog_1753_; lean_object* v_keyFormat_1754_; lean_object* v_key_1755_; lean_object* v_cert_1756_; uint8_t v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v_signal_1745_ = lean_ctor_get(v_tlsOptions_1742_, 0);
lean_inc(v_signal_1745_);
v_onError_1746_ = lean_ctor_get(v_tlsOptions_1742_, 1);
lean_inc(v_onError_1746_);
v_onListen_1747_ = lean_ctor_get(v_tlsOptions_1742_, 2);
lean_inc(v_onListen_1747_);
v_automaticCompression_1748_ = lean_ctor_get(v_tlsOptions_1742_, 3);
lean_inc(v_automaticCompression_1748_);
v_transport_1749_ = lean_ctor_get(v_tlsOptions_1742_, 4);
lean_inc(v_transport_1749_);
v_port_1750_ = lean_ctor_get(v_tlsOptions_1742_, 5);
lean_inc(v_port_1750_);
v_hostname_1751_ = lean_ctor_get(v_tlsOptions_1742_, 6);
lean_inc(v_hostname_1751_);
v_reusePort_1752_ = lean_ctor_get(v_tlsOptions_1742_, 7);
lean_inc(v_reusePort_1752_);
v_tcpBacklog_1753_ = lean_ctor_get(v_tlsOptions_1742_, 8);
lean_inc(v_tcpBacklog_1753_);
v_keyFormat_1754_ = lean_ctor_get(v_tlsOptions_1742_, 9);
lean_inc(v_keyFormat_1754_);
v_key_1755_ = lean_ctor_get(v_tlsOptions_1742_, 10);
lean_inc_ref(v_key_1755_);
v_cert_1756_ = lean_ctor_get(v_tlsOptions_1742_, 11);
lean_inc_ref(v_cert_1756_);
lean_dec_ref(v_tlsOptions_1742_);
v___x_1757_ = 0;
v___x_1758_ = lean_unsigned_to_nat(2u);
v___x_1759_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithTlsOptions___closed__1));
v___x_1760_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1761_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1745_);
lean_dec(v_signal_1745_);
v___x_1762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1760_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
v___x_1763_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1764_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_1746_);
lean_dec(v_onError_1746_);
v___x_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1763_);
lean_ctor_set(v___x_1765_, 1, v___x_1764_);
v___x_1766_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1767_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_1747_);
lean_dec(v_onListen_1747_);
v___x_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_1770_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_1748_);
lean_dec(v_automaticCompression_1748_);
v___x_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1773_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_1749_);
lean_dec(v_transport_1749_);
v___x_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1772_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
v___x_1775_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_1776_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_1750_);
v___x_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1775_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
v___x_1778_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1779_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1751_);
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1782_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1752_);
lean_dec(v_reusePort_1752_);
v___x_1783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1781_);
lean_ctor_set(v___x_1783_, 1, v___x_1782_);
v___x_1784_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1785_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_1753_);
v___x_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1784_);
lean_ctor_set(v___x_1786_, 1, v___x_1785_);
v___x_1787_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_1788_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_keyFormat_1754_);
lean_dec(v_keyFormat_1754_);
v___x_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1787_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_1791_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1791_, 0, v_key_1755_);
v___x_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_1794_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1794_, 0, v_cert_1756_);
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1793_);
lean_ctor_set(v___x_1795_, 1, v___x_1794_);
v___x_1796_ = lean_unsigned_to_nat(12u);
v___x_1797_ = lean_mk_empty_array_with_capacity(v___x_1796_);
v___x_1798_ = lean_array_push(v___x_1797_, v___x_1762_);
v___x_1799_ = lean_array_push(v___x_1798_, v___x_1765_);
v___x_1800_ = lean_array_push(v___x_1799_, v___x_1768_);
v___x_1801_ = lean_array_push(v___x_1800_, v___x_1771_);
v___x_1802_ = lean_array_push(v___x_1801_, v___x_1774_);
v___x_1803_ = lean_array_push(v___x_1802_, v___x_1777_);
v___x_1804_ = lean_array_push(v___x_1803_, v___x_1780_);
v___x_1805_ = lean_array_push(v___x_1804_, v___x_1783_);
v___x_1806_ = lean_array_push(v___x_1805_, v___x_1786_);
v___x_1807_ = lean_array_push(v___x_1806_, v___x_1789_);
v___x_1808_ = lean_array_push(v___x_1807_, v___x_1792_);
v___x_1809_ = lean_array_push(v___x_1808_, v___x_1795_);
v___x_1810_ = l_Lasm_JS_Web_Support_fields(v___x_1809_);
lean_dec_ref(v___x_1809_);
v___x_1811_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1812_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1812_, 0, v_handler_1743_);
lean_ctor_set(v___x_1812_, 1, v___x_1811_);
v___x_1813_ = lean_mk_empty_array_with_capacity(v___x_1758_);
v___x_1814_ = lean_array_push(v___x_1813_, v___x_1810_);
v___x_1815_ = lean_array_push(v___x_1814_, v___x_1812_);
v___x_1816_ = l_Lasm_JS_Web_Support_args(v___x_1815_);
v___x_1817_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1759_, v___x_1816_, v___x_1757_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1817_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1817_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1821_ == 0)
{
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
v_a_1826_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1817_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1817_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___boxed(lean_object* v_tlsOptions_1834_, lean_object* v_handler_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l_Lasm_JS_Deno_serveWithTlsOptions(v_tlsOptions_1834_, v_handler_1835_);
return v_res_1837_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Deno_Serve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default = _init_l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default();
l_Lasm_JS_Deno_instInhabitedNetAddrTransport = _init_l_Lasm_JS_Deno_instInhabitedNetAddrTransport();
l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default = _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default);
l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport = _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport);
l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default = _init_l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default);
l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat = _init_l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat);
l_Lasm_JS_Deno_instFromJSNetAddr = _init_l_Lasm_JS_Deno_instFromJSNetAddr();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSNetAddr);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
