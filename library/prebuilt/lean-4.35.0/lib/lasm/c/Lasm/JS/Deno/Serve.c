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
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSNat;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object*);
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
static const lean_string_object l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Object"};
static const lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "defineProperty"};
static const lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_ServeHandler_ofFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__3_value)}};
static const lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6;
static lean_once_cell_t l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7;
static lean_once_cell_t l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8;
static lean_once_cell_t l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9;
static lean_once_cell_t l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10;
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
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1;
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2;
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3;
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4;
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
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___x_611_ = lean_nat_abs(v___x_610_);
return v___x_611_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_612_ = lean_cstr_to_nat("9007199254740991");
v___x_613_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6);
v___x_614_ = lean_nat_dec_le(v___x_613_, v___x_612_);
return v___x_614_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___x_616_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
return v___x_616_;
}
}
static double _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9(void){
_start:
{
lean_object* v___x_617_; double v___x_618_; 
v___x_617_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___x_618_ = l_Float_ofInt(v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10(void){
_start:
{
double v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lean_float_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9);
v___x_620_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_620_, 0, v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object* v_f_621_){
_start:
{
lean_object* v___f_623_; lean_object* v___f_624_; lean_object* v___x_625_; 
v___f_623_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_624_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_624_, 0, v_f_621_);
lean_closure_set(v___f_624_, 1, v___f_623_);
v___x_625_ = l_Lasm_JS_Function_ofFn(v___f_624_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; lean_object* v___x_627_; 
v_a_626_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_a_626_);
lean_dec_ref_known(v___x_625_, 1);
v___x_627_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_a_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v_a_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_a_628_);
lean_dec_ref_known(v___x_627_, 1);
v___x_629_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_630_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_628_, v___x_629_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___y_638_; uint8_t v___x_665_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_633_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_626_);
v___x_634_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_634_, 0, v_a_626_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_636_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_665_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; 
v___x_666_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_638_ = v___x_666_;
goto v___jp_637_;
}
else
{
lean_object* v___x_667_; 
v___x_667_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_638_ = v___x_667_;
goto v___jp_637_;
}
v___jp_637_:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
lean_inc(v___y_638_);
v___x_639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_636_);
lean_ctor_set(v___x_639_, 1, v___y_638_);
v___x_640_ = lean_box(0);
v___x_641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = l_Lasm_JS_obj(v___x_641_);
v___x_643_ = lean_unsigned_to_nat(3u);
v___x_644_ = lean_mk_empty_array_with_capacity(v___x_643_);
v___x_645_ = lean_array_push(v___x_644_, v___x_634_);
v___x_646_ = lean_array_push(v___x_645_, v___x_635_);
v___x_647_ = lean_array_push(v___x_646_, v___x_642_);
v___x_648_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_631_, v___x_632_, v___x_647_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; 
v_unused_656_ = lean_ctor_get(v___x_648_, 0);
lean_dec(v_unused_656_);
v___x_650_ = v___x_648_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_dec(v___x_648_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v_a_626_);
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_626_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
else
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec(v_a_626_);
v_a_657_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_648_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_648_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec(v_a_626_);
v_a_668_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_630_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_630_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
lean_dec(v_a_626_);
v_a_676_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_683_ == 0)
{
v___x_678_ = v___x_627_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_627_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
else
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_691_; 
v_a_684_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_691_ == 0)
{
v___x_686_ = v___x_625_;
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_625_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_689_; 
if (v_isShared_687_ == 0)
{
v___x_689_ = v___x_686_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_684_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object* v_f_692_, lean_object* v_a_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lasm_JS_Deno_ServeHandler_ofFn(v_f_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object* v_f_695_, lean_object* v_args_696_){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_696_, v___x_698_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_700_);
lean_dec_ref_known(v___x_699_, 1);
v___x_701_ = lean_unsigned_to_nat(1u);
v___x_702_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_696_, v___x_701_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_704_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_703_);
lean_dec_ref_known(v___x_702_, 1);
v___x_704_ = lean_apply_3(v_f_695_, v_a_700_, v_a_703_, lean_box(0));
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_714_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_714_ == 0)
{
v___x_707_ = v___x_704_;
v_isShared_708_ = v_isSharedCheck_714_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_704_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_714_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_709_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_710_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_710_, 0, v_a_705_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 0, v___x_710_);
v___x_712_ = v___x_707_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
v_a_715_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_704_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_704_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec(v_a_700_);
lean_dec_ref(v_f_695_);
v_a_723_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_702_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_702_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec_ref(v_f_695_);
v_a_731_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_699_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_699_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
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
return v___x_736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_739_, lean_object* v_args_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(v_f_739_, v_args_740_);
lean_dec_ref(v_args_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object* v_f_743_){
_start:
{
lean_object* v___f_745_; lean_object* v___x_746_; 
v___f_745_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_745_, 0, v_f_743_);
v___x_746_ = l_Lasm_JS_Function_ofSyncFn(v___f_745_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_748_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_746_, 1);
v___x_748_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_751_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_749_, v___x_750_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___y_759_; uint8_t v___x_786_; 
v_a_752_ = lean_ctor_get(v___x_751_, 0);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_751_, 1);
v___x_753_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_754_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_747_);
v___x_755_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_755_, 0, v_a_747_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_757_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_786_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; 
v___x_787_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_759_ = v___x_787_;
goto v___jp_758_;
}
else
{
lean_object* v___x_788_; 
v___x_788_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_759_ = v___x_788_;
goto v___jp_758_;
}
v___jp_758_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
lean_inc(v___y_759_);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_757_);
lean_ctor_set(v___x_760_, 1, v___y_759_);
v___x_761_ = lean_box(0);
v___x_762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_760_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = l_Lasm_JS_obj(v___x_762_);
v___x_764_ = lean_unsigned_to_nat(3u);
v___x_765_ = lean_mk_empty_array_with_capacity(v___x_764_);
v___x_766_ = lean_array_push(v___x_765_, v___x_755_);
v___x_767_ = lean_array_push(v___x_766_, v___x_756_);
v___x_768_ = lean_array_push(v___x_767_, v___x_763_);
v___x_769_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_752_, v___x_753_, v___x_768_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_776_ == 0)
{
lean_object* v_unused_777_; 
v_unused_777_ = lean_ctor_get(v___x_769_, 0);
lean_dec(v_unused_777_);
v___x_771_ = v___x_769_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_dec(v___x_769_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v_a_747_);
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_747_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_dec(v_a_747_);
v_a_778_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_769_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_769_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec(v_a_747_);
v_a_789_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_751_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_751_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_dec(v_a_747_);
v_a_797_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_748_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_748_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
v_a_805_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_746_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_746_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object* v_f_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn(v_f_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(lean_object* v_f_823_, lean_object* v___f_824_, lean_object* v_x_825_){
_start:
{
if (lean_obj_tag(v_x_825_) == 0)
{
lean_object* v___x_827_; 
lean_dec_ref(v___f_824_);
lean_dec_ref(v_f_823_);
v___x_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_827_, 0, v_x_825_);
return v___x_827_;
}
else
{
lean_object* v_a_828_; lean_object* v___x_829_; uint8_t v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_a_828_ = lean_ctor_get(v_x_825_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v_x_825_, 1);
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = 0;
v___x_831_ = lean_apply_2(v_f_823_, v_a_828_, lean_box(0));
v___x_832_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_829_, v___x_830_, v___x_831_, v___f_824_);
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed(lean_object* v_f_833_, lean_object* v___f_834_, lean_object* v_x_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(v_f_833_, v___f_834_, v_x_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(lean_object* v___f_838_, lean_object* v_args_839_){
_start:
{
lean_object* v___x_841_; uint8_t v___x_842_; lean_object* v_val_844_; lean_object* v___x_847_; lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
v___x_841_ = lean_unsigned_to_nat(0u);
v___x_842_ = 0;
v___x_847_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_839_, v___x_841_);
v_a_848_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_847_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_847_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v___jp_843_:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_845_, 0, v_val_844_);
v___x_846_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_841_, v___x_842_, v___x_845_, v___f_838_);
return v___x_846_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set_tag(v___x_850_, 1);
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
v_val_844_ = v___x_853_;
goto v___jp_843_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed(lean_object* v___f_856_, lean_object* v_args_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(v___f_856_, v_args_857_);
lean_dec_ref(v_args_857_);
return v_res_859_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_861_ = lean_nat_abs(v___x_860_);
return v___x_861_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_862_ = lean_cstr_to_nat("9007199254740991");
v___x_863_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0);
v___x_864_ = lean_nat_dec_le(v___x_863_, v___x_862_);
return v___x_864_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_866_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_866_, 0, v___x_865_);
return v___x_866_;
}
}
static double _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3(void){
_start:
{
lean_object* v___x_867_; double v___x_868_; 
v___x_867_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_868_ = l_Float_ofInt(v___x_867_);
return v___x_868_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4(void){
_start:
{
double v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_float_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3);
v___x_870_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_870_, 0, v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object* v_f_871_){
_start:
{
lean_object* v___f_873_; lean_object* v___f_874_; lean_object* v___f_875_; lean_object* v___x_876_; 
v___f_873_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_874_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_874_, 0, v_f_871_);
lean_closure_set(v___f_874_, 1, v___f_873_);
v___f_875_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_875_, 0, v___f_874_);
v___x_876_ = l_Lasm_JS_Function_ofFn(v___f_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_878_, 1);
v___x_880_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_881_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_879_, v___x_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___y_889_; uint8_t v___x_916_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
v___x_883_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_884_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_877_);
v___x_885_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_885_, 0, v_a_877_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_887_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_916_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; 
v___x_917_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_889_ = v___x_917_;
goto v___jp_888_;
}
else
{
lean_object* v___x_918_; 
v___x_918_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_889_ = v___x_918_;
goto v___jp_888_;
}
v___jp_888_:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
lean_inc(v___y_889_);
v___x_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_887_);
lean_ctor_set(v___x_890_, 1, v___y_889_);
v___x_891_ = lean_box(0);
v___x_892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_890_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = l_Lasm_JS_obj(v___x_892_);
v___x_894_ = lean_unsigned_to_nat(3u);
v___x_895_ = lean_mk_empty_array_with_capacity(v___x_894_);
v___x_896_ = lean_array_push(v___x_895_, v___x_885_);
v___x_897_ = lean_array_push(v___x_896_, v___x_886_);
v___x_898_ = lean_array_push(v___x_897_, v___x_893_);
v___x_899_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_882_, v___x_883_, v___x_898_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; 
v_unused_907_ = lean_ctor_get(v___x_899_, 0);
lean_dec(v_unused_907_);
v___x_901_ = v___x_899_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_dec(v___x_899_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 0, v_a_877_);
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_877_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_dec(v_a_877_);
v_a_908_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_899_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_899_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
lean_dec(v_a_877_);
v_a_919_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_881_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_881_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
else
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
lean_dec(v_a_877_);
v_a_927_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v___x_878_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_878_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_a_927_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
v_a_935_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_876_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_876_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object* v_f_943_, lean_object* v_a_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(v_f_943_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(lean_object* v_f_946_, lean_object* v_args_947_){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v_a_951_; lean_object* v___x_952_; 
v___x_949_ = lean_unsigned_to_nat(0u);
v___x_950_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_947_, v___x_949_);
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
lean_dec_ref(v___x_950_);
v___x_952_ = lean_apply_2(v_f_946_, v_a_951_, lean_box(0));
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_962_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_962_ == 0)
{
v___x_955_ = v___x_952_;
v_isShared_956_ = v_isSharedCheck_962_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_952_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_962_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_957_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_958_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_958_, 0, v_a_953_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 0, v___x_958_);
v___x_960_ = v___x_955_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
else
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
v_a_963_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_952_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_952_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed(lean_object* v_f_971_, lean_object* v_args_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(v_f_971_, v_args_972_);
lean_dec_ref(v_args_972_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object* v_f_975_){
_start:
{
lean_object* v___f_977_; lean_object* v___x_978_; 
v___f_977_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_977_, 0, v_f_975_);
v___x_978_ = l_Lasm_JS_Function_ofSyncFn(v___f_977_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_980_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_978_, 1);
v___x_980_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v___x_982_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_983_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_981_, v___x_982_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___y_991_; uint8_t v___x_1018_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
lean_inc(v_a_984_);
lean_dec_ref_known(v___x_983_, 1);
v___x_985_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_986_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_979_);
v___x_987_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_987_, 0, v_a_979_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_989_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1018_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_991_ = v___x_1019_;
goto v___jp_990_;
}
else
{
lean_object* v___x_1020_; 
v___x_1020_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_991_ = v___x_1020_;
goto v___jp_990_;
}
v___jp_990_:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
lean_inc(v___y_991_);
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_989_);
lean_ctor_set(v___x_992_, 1, v___y_991_);
v___x_993_ = lean_box(0);
v___x_994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = l_Lasm_JS_obj(v___x_994_);
v___x_996_ = lean_unsigned_to_nat(3u);
v___x_997_ = lean_mk_empty_array_with_capacity(v___x_996_);
v___x_998_ = lean_array_push(v___x_997_, v___x_987_);
v___x_999_ = lean_array_push(v___x_998_, v___x_988_);
v___x_1000_ = lean_array_push(v___x_999_, v___x_995_);
v___x_1001_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_984_, v___x_985_, v___x_1000_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1008_ == 0)
{
lean_object* v_unused_1009_; 
v_unused_1009_ = lean_ctor_get(v___x_1001_, 0);
lean_dec(v_unused_1009_);
v___x_1003_ = v___x_1001_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_dec(v___x_1001_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 0, v_a_979_);
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_979_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec(v_a_979_);
v_a_1010_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_1001_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1001_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
else
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
lean_dec(v_a_979_);
v_a_1021_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_983_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_983_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1036_; 
lean_dec(v_a_979_);
v_a_1029_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1031_ = v___x_980_;
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_980_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1034_; 
if (v_isShared_1032_ == 0)
{
v___x_1034_ = v___x_1031_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_a_1029_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
v_a_1037_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_978_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_978_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object* v_f_1045_, lean_object* v_a_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(v_f_1045_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object* v_x_1059_){
_start:
{
if (lean_obj_tag(v_x_1059_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1069_; 
v_a_1061_ = lean_ctor_get(v_x_1059_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_x_1059_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1063_ = v_x_1059_;
v_isShared_1064_ = v_isSharedCheck_1069_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v_x_1059_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1069_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
return v___x_1067_;
}
}
}
else
{
lean_object* v___x_1070_; 
lean_dec_ref_known(v_x_1059_, 1);
v___x_1070_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__1));
return v___x_1070_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object* v_x_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(v_x_1071_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object* v_f_1074_, lean_object* v___f_1075_, lean_object* v_x_1076_){
_start:
{
if (lean_obj_tag(v_x_1076_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1086_; 
lean_dec_ref(v___f_1075_);
lean_dec_ref(v_f_1074_);
v_a_1078_ = lean_ctor_get(v_x_1076_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v_x_1076_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1080_ = v_x_1076_;
v_isShared_1081_ = v_isSharedCheck_1086_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v_x_1076_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1086_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
return v___x_1084_;
}
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v_a_1087_ = lean_ctor_get(v_x_1076_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v_x_1076_, 1);
v___x_1088_ = lean_unsigned_to_nat(0u);
v___x_1089_ = 0;
v___x_1090_ = lean_apply_2(v_f_1074_, v_a_1087_, lean_box(0));
v___x_1091_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1088_, v___x_1089_, v___x_1090_, v___f_1075_);
return v___x_1091_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object* v_f_1092_, lean_object* v___f_1093_, lean_object* v_x_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(v_f_1092_, v___f_1093_, v_x_1094_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(lean_object* v_d_1104_, lean_object* v_key_1105_){
_start:
{
if (lean_obj_tag(v_d_1104_) == 8)
{
lean_object* v___x_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1137_; 
v___x_1106_ = l_Lasm_JS_Data_field(v_d_1104_, v_key_1105_);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_d_1104_);
if (v_isSharedCheck_1137_ == 0)
{
lean_object* v_unused_1138_; 
v_unused_1138_ = lean_ctor_get(v_d_1104_, 0);
lean_dec(v_unused_1138_);
v___x_1108_ = v_d_1104_;
v_isShared_1109_ = v_isSharedCheck_1137_;
goto v_resetjp_1107_;
}
else
{
lean_dec(v_d_1104_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1137_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
if (lean_obj_tag(v___x_1106_) == 4)
{
lean_object* v_s_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
lean_del_object(v___x_1108_);
v_s_1110_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1106_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_s_1110_);
lean_dec(v___x_1106_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 1);
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_s_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
else
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v___x_1118_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1119_ = lean_string_append(v___x_1118_, v_key_1105_);
v___x_1120_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1121_ = lean_string_append(v___x_1119_, v___x_1120_);
v___x_1122_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__2));
v___x_1123_ = lean_string_append(v___x_1121_, v___x_1122_);
v___x_1124_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1125_ = lean_string_append(v___x_1123_, v___x_1124_);
v___x_1126_ = l_Lasm_JS_Data_describe(v___x_1106_);
v___x_1127_ = lean_string_append(v___x_1125_, v___x_1126_);
lean_dec_ref(v___x_1126_);
v___x_1128_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1132_; 
v___x_1129_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___x_1130_ = lean_string_append(v___x_1127_, v___x_1129_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set_tag(v___x_1108_, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1130_);
v___x_1132_ = v___x_1108_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
else
{
lean_object* v___x_1135_; 
if (v_isShared_1109_ == 0)
{
lean_ctor_set_tag(v___x_1108_, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1127_);
v___x_1135_ = v___x_1108_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1127_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
}
else
{
lean_object* v___x_1139_; 
lean_dec(v_d_1104_);
v___x_1139_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__5));
return v___x_1139_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1140_, lean_object* v_key_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1140_, v_key_1141_);
lean_dec_ref(v_key_1141_);
return v_res_1142_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = lean_unsigned_to_nat(0u);
v___x_1147_ = lean_nat_to_int(v___x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(lean_object* v_d_1152_, lean_object* v_key_1153_){
_start:
{
if (lean_obj_tag(v_d_1152_) == 8)
{
lean_object* v___x_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1197_; 
v___x_1154_ = l_Lasm_JS_Data_field(v_d_1152_, v_key_1153_);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_d_1152_);
if (v_isSharedCheck_1197_ == 0)
{
lean_object* v_unused_1198_; 
v_unused_1198_ = lean_ctor_get(v_d_1152_, 0);
lean_dec(v_unused_1198_);
v___x_1156_ = v_d_1152_;
v_isShared_1157_ = v_isSharedCheck_1197_;
goto v_resetjp_1155_;
}
else
{
lean_dec(v_d_1152_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1197_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_a_1159_; lean_object* v_a_1185_; 
switch(lean_obj_tag(v___x_1154_))
{
case 3:
{
double v_n_1191_; lean_object* v___x_1192_; 
v_n_1191_ = lean_ctor_get_float(v___x_1154_, 0);
v___x_1192_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1191_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_object* v___x_1193_; 
v___x_1193_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__5));
v_a_1159_ = v___x_1193_;
goto v___jp_1158_;
}
else
{
lean_object* v_val_1194_; 
v_val_1194_ = lean_ctor_get(v___x_1192_, 0);
lean_inc(v_val_1194_);
lean_dec_ref_known(v___x_1192_, 1);
v_a_1185_ = v_val_1194_;
goto v___jp_1184_;
}
}
case 5:
{
lean_object* v_i_1195_; 
v_i_1195_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_i_1195_);
v_a_1185_ = v_i_1195_;
goto v___jp_1184_;
}
default: 
{
lean_object* v___x_1196_; 
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v_a_1159_ = v___x_1196_;
goto v___jp_1158_;
}
}
v___jp_1158_:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1160_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1161_ = lean_string_append(v___x_1160_, v_key_1153_);
v___x_1162_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1163_ = lean_string_append(v___x_1161_, v___x_1162_);
v___x_1164_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__0));
v___x_1165_ = lean_string_append(v___x_1163_, v___x_1164_);
v___x_1166_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1167_ = lean_string_append(v___x_1165_, v___x_1166_);
v___x_1168_ = l_Lasm_JS_Data_describe(v___x_1154_);
v___x_1169_ = lean_string_append(v___x_1167_, v___x_1168_);
lean_dec_ref(v___x_1168_);
v___x_1170_ = lean_string_utf8_byte_size(v_a_1159_);
v___x_1171_ = lean_unsigned_to_nat(0u);
v___x_1172_ = lean_nat_dec_eq(v___x_1170_, v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1179_; 
v___x_1173_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1));
v___x_1174_ = lean_string_append(v___x_1173_, v_a_1159_);
v___x_1175_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2));
v___x_1176_ = lean_string_append(v___x_1174_, v___x_1175_);
v___x_1177_ = lean_string_append(v___x_1169_, v___x_1176_);
lean_dec_ref(v___x_1176_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set_tag(v___x_1156_, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1177_);
v___x_1179_ = v___x_1156_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
else
{
lean_object* v___x_1182_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set_tag(v___x_1156_, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1169_);
v___x_1182_ = v___x_1156_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1169_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
v___jp_1184_:
{
lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1186_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3);
v___x_1187_ = lean_int_dec_le(v___x_1186_, v_a_1185_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1188_; 
lean_dec(v_a_1185_);
v___x_1188_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__4));
v_a_1159_ = v___x_1188_;
goto v___jp_1158_;
}
else
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
lean_del_object(v___x_1156_);
lean_dec(v___x_1154_);
v___x_1189_ = l_Int_toNat(v_a_1185_);
lean_dec(v_a_1185_);
v___x_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
}
}
}
else
{
lean_object* v___x_1199_; 
lean_dec(v_d_1152_);
v___x_1199_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__6));
return v___x_1199_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___boxed(lean_object* v_d_1200_, lean_object* v_key_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1200_, v_key_1201_);
lean_dec_ref(v_key_1201_);
return v_res_1202_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0));
v___x_1204_ = lean_string_utf8_byte_size(v___x_1203_);
return v___x_1204_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; uint8_t v___x_1207_; 
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0);
v___x_1207_ = lean_nat_dec_eq(v___x_1206_, v___x_1205_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(lean_object* v_d_1211_, lean_object* v_key_1212_){
_start:
{
if (lean_obj_tag(v_d_1211_) == 8)
{
lean_object* v___x_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1244_; 
v___x_1213_ = l_Lasm_JS_Data_field(v_d_1211_, v_key_1212_);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_d_1211_);
if (v_isSharedCheck_1244_ == 0)
{
lean_object* v_unused_1245_; 
v_unused_1245_ = lean_ctor_get(v_d_1211_, 0);
lean_dec(v_unused_1245_);
v___x_1215_ = v_d_1211_;
v_isShared_1216_ = v_isSharedCheck_1244_;
goto v_resetjp_1214_;
}
else
{
lean_dec(v_d_1211_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1244_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
if (lean_obj_tag(v___x_1213_) == 4)
{
lean_object* v_s_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v_s_1237_ = lean_ctor_get(v___x_1213_, 0);
lean_inc_ref(v_s_1237_);
v___x_1238_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_1239_ = lean_string_dec_eq(v_s_1237_, v___x_1238_);
if (v___x_1239_ == 0)
{
lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1240_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2));
v___x_1241_ = lean_string_dec_eq(v_s_1237_, v___x_1240_);
lean_dec_ref(v_s_1237_);
if (v___x_1241_ == 0)
{
goto v___jp_1217_;
}
else
{
lean_object* v___x_1242_; 
lean_dec_ref_known(v___x_1213_, 1);
lean_del_object(v___x_1215_);
v___x_1242_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2));
return v___x_1242_;
}
}
else
{
lean_object* v___x_1243_; 
lean_dec_ref_known(v___x_1213_, 1);
lean_dec_ref(v_s_1237_);
lean_del_object(v___x_1215_);
v___x_1243_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3));
return v___x_1243_;
}
}
else
{
goto v___jp_1217_;
}
v___jp_1217_:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; 
v___x_1218_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1219_ = lean_string_append(v___x_1218_, v_key_1212_);
v___x_1220_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1221_ = lean_string_append(v___x_1219_, v___x_1220_);
v___x_1222_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1));
v___x_1223_ = lean_string_append(v___x_1221_, v___x_1222_);
v___x_1224_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1225_ = lean_string_append(v___x_1223_, v___x_1224_);
v___x_1226_ = l_Lasm_JS_Data_describe(v___x_1213_);
v___x_1227_ = lean_string_append(v___x_1225_, v___x_1226_);
lean_dec_ref(v___x_1226_);
v___x_1228_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1232_; 
v___x_1229_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__2));
v___x_1230_ = lean_string_append(v___x_1227_, v___x_1229_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set_tag(v___x_1215_, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1230_);
v___x_1232_ = v___x_1215_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1230_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
else
{
lean_object* v___x_1235_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set_tag(v___x_1215_, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1227_);
v___x_1235_ = v___x_1215_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1227_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
}
else
{
lean_object* v___x_1246_; 
lean_dec(v_d_1211_);
v___x_1246_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__3));
return v___x_1246_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1247_, lean_object* v_key_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1247_, v_key_1248_);
lean_dec_ref(v_key_1248_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(lean_object* v_context_1250_, lean_object* v_d_1251_){
_start:
{
lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1260_; lean_object* v_received_1261_; lean_object* v___y_1280_; lean_object* v_a_1283_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
lean_inc(v_d_1251_);
v___x_1308_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1251_, v___x_1307_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___x_1308_, 1);
v_a_1283_ = v_a_1309_;
goto v___jp_1282_;
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v_a_1310_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1308_, 1);
v___x_1311_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
lean_inc(v_d_1251_);
v___x_1312_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1251_, v___x_1311_);
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; 
lean_dec(v_a_1310_);
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1313_);
lean_dec_ref_known(v___x_1312_, 1);
v_a_1283_ = v_a_1313_;
goto v___jp_1282_;
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v_a_1314_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1314_);
lean_dec_ref_known(v___x_1312_, 1);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc(v_d_1251_);
v___x_1316_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1251_, v___x_1315_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; 
lean_dec(v_a_1314_);
lean_dec(v_a_1310_);
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1316_, 1);
v_a_1283_ = v_a_1317_;
goto v___jp_1282_;
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1327_; 
lean_dec(v_d_1251_);
v_a_1318_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1320_ = v___x_1316_;
v_isShared_1321_ = v_isSharedCheck_1327_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1316_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1327_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; uint8_t v___x_1323_; lean_object* v___x_1325_; 
v___x_1322_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1322_, 0, v_a_1314_);
lean_ctor_set(v___x_1322_, 1, v_a_1318_);
v___x_1323_ = lean_unbox(v_a_1310_);
lean_dec(v_a_1310_);
lean_ctor_set_uint8(v___x_1322_, sizeof(void*)*2, v___x_1323_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set_tag(v___x_1320_, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1322_);
v___x_1325_ = v___x_1320_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1322_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
}
v___jp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1256_ = lean_string_append(v___y_1254_, v___y_1255_);
lean_dec_ref(v___y_1255_);
v___x_1257_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1256_);
v___x_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
return v___x_1258_;
}
v___jp_1259_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; uint8_t v___x_1273_; 
v___x_1262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1263_ = lean_string_append(v___x_1262_, v_context_1250_);
v___x_1264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1265_ = lean_string_append(v___x_1263_, v___x_1264_);
v___x_1266_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___x_1267_ = lean_string_append(v___x_1265_, v___x_1266_);
v___x_1268_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1269_ = lean_string_append(v___x_1267_, v___x_1268_);
v___x_1270_ = lean_string_append(v___x_1269_, v_received_1261_);
lean_dec_ref(v_received_1261_);
v___x_1271_ = lean_string_utf8_byte_size(v___y_1260_);
v___x_1272_ = lean_unsigned_to_nat(0u);
v___x_1273_ = lean_nat_dec_eq(v___x_1271_, v___x_1272_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1274_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1));
v___x_1275_ = lean_string_append(v___x_1274_, v___y_1260_);
lean_dec_ref(v___y_1260_);
v___x_1276_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2));
v___x_1277_ = lean_string_append(v___x_1275_, v___x_1276_);
v___y_1254_ = v___x_1270_;
v___y_1255_ = v___x_1277_;
goto v___jp_1253_;
}
else
{
lean_object* v___x_1278_; 
lean_dec_ref(v___y_1260_);
v___x_1278_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___y_1254_ = v___x_1270_;
v___y_1255_ = v___x_1278_;
goto v___jp_1253_;
}
}
v___jp_1279_:
{
lean_object* v___x_1281_; 
v___x_1281_ = l_Lasm_JS_Data_describe(v_d_1251_);
v___y_1260_ = v___y_1280_;
v_received_1261_ = v___x_1281_;
goto v___jp_1259_;
}
v___jp_1282_:
{
if (lean_obj_tag(v_d_1251_) == 9)
{
lean_object* v_value_1284_; lean_object* v_description_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; 
v_value_1284_ = lean_ctor_get(v_d_1251_, 0);
v_description_1285_ = lean_ctor_get(v_d_1251_, 1);
v___x_1286_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1287_ = lean_string_dec_eq(v_description_1285_, v___x_1286_);
if (v___x_1287_ == 0)
{
v___y_1280_ = v_a_1283_;
goto v___jp_1279_;
}
else
{
lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1304_; 
lean_inc(v_value_1284_);
v_isSharedCheck_1304_ = !lean_is_exclusive(v_d_1251_);
if (v_isSharedCheck_1304_ == 0)
{
lean_object* v_unused_1305_; lean_object* v_unused_1306_; 
v_unused_1305_ = lean_ctor_get(v_d_1251_, 1);
lean_dec(v_unused_1305_);
v_unused_1306_ = lean_ctor_get(v_d_1251_, 0);
lean_dec(v_unused_1306_);
v___x_1289_ = v_d_1251_;
v_isShared_1290_ = v_isSharedCheck_1304_;
goto v_resetjp_1288_;
}
else
{
lean_dec(v_d_1251_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1304_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
uint32_t v___x_1291_; uint64_t v___x_1292_; lean_object* v___x_1294_; 
v___x_1291_ = 206;
v___x_1292_ = 0ULL;
lean_inc(v_value_1284_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 1, v___x_1286_);
v___x_1294_ = v___x_1289_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_value_1284_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v___x_1286_);
v___x_1294_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
uint32_t v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = lasm_js_value_handle(v_value_1284_);
lean_dec(v_value_1284_);
v___x_1296_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1291_, v___x_1292_, v___x_1294_, v___x_1295_);
lean_dec_ref(v___x_1294_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; uint8_t v___x_1298_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_a_1297_);
lean_dec_ref_known(v___x_1296_, 1);
v___x_1298_ = lean_string_validate_utf8(v_a_1297_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
lean_dec(v_a_1297_);
v___x_1299_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_1300_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1299_);
v___y_1260_ = v_a_1283_;
v_received_1261_ = v___x_1300_;
goto v___jp_1259_;
}
else
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_string_from_utf8_unchecked(v_a_1297_);
v___y_1260_ = v_a_1283_;
v_received_1261_ = v___x_1301_;
goto v___jp_1259_;
}
}
else
{
lean_object* v___x_1302_; 
lean_dec_ref_known(v___x_1296_, 1);
v___x_1302_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v___y_1260_ = v_a_1283_;
v_received_1261_ = v___x_1302_;
goto v___jp_1259_;
}
}
}
}
}
else
{
v___y_1280_ = v_a_1283_;
goto v___jp_1279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1328_, lean_object* v_d_1329_, lean_object* v_a_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1328_, v_d_1329_);
lean_dec_ref(v_context_1328_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object* v_args_1332_, lean_object* v_i_1333_){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1336_ = lean_unsigned_to_nat(1u);
v___x_1337_ = lean_nat_add(v_i_1333_, v___x_1336_);
v___x_1338_ = l_Nat_reprFast(v___x_1337_);
v___x_1339_ = lean_string_append(v___x_1335_, v___x_1338_);
lean_dec_ref(v___x_1338_);
v___x_1340_ = lean_array_get_size(v_args_1332_);
v___x_1341_ = lean_nat_dec_lt(v_i_1333_, v___x_1340_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_box(0);
v___x_1343_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1339_, v___x_1342_);
lean_dec_ref(v___x_1339_);
return v___x_1343_;
}
else
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = lean_array_fget_borrowed(v_args_1332_, v_i_1333_);
lean_inc(v___x_1344_);
v___x_1345_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1339_, v___x_1344_);
lean_dec_ref(v___x_1339_);
return v___x_1345_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object* v_args_1346_, lean_object* v_i_1347_, lean_object* v_a_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1346_, v_i_1347_);
lean_dec(v_i_1347_);
lean_dec_ref(v_args_1346_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(lean_object* v___f_1350_, lean_object* v_args_1351_){
_start:
{
lean_object* v___x_1353_; uint8_t v___x_1354_; lean_object* v_val_1356_; lean_object* v___x_1359_; 
v___x_1353_ = lean_unsigned_to_nat(0u);
v___x_1354_ = 0;
v___x_1359_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1351_, v___x_1353_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1359_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
lean_ctor_set_tag(v___x_1362_, 1);
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
v_val_1356_ = v___x_1365_;
goto v___jp_1355_;
}
}
}
else
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1375_; 
v_a_1368_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1370_ = v___x_1359_;
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1359_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set_tag(v___x_1370_, 0);
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
v_val_1356_ = v___x_1373_;
goto v___jp_1355_;
}
}
}
v___jp_1355_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v_val_1356_);
v___x_1358_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1353_, v___x_1354_, v___x_1357_, v___f_1350_);
return v___x_1358_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed(lean_object* v___f_1376_, lean_object* v_args_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(v___f_1376_, v_args_1377_);
lean_dec_ref(v_args_1377_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object* v_f_1381_){
_start:
{
lean_object* v___f_1383_; lean_object* v___f_1384_; lean_object* v___f_1385_; lean_object* v___x_1386_; 
v___f_1383_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___closed__0));
v___f_1384_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1384_, 0, v_f_1381_);
lean_closure_set(v___f_1384_, 1, v___f_1383_);
v___f_1385_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1385_, 0, v___f_1384_);
v___x_1386_ = l_Lasm_JS_Function_ofFn(v___f_1385_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1388_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc(v_a_1387_);
lean_dec_ref_known(v___x_1386_, 1);
v___x_1388_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc(v_a_1389_);
lean_dec_ref_known(v___x_1388_, 1);
v___x_1390_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1391_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1389_, v___x_1390_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___y_1399_; uint8_t v___x_1426_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref_known(v___x_1391_, 1);
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1394_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_1387_);
v___x_1395_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1395_, 0, v_a_1387_);
lean_ctor_set(v___x_1395_, 1, v___x_1394_);
v___x_1396_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1397_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1426_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_1399_ = v___x_1427_;
goto v___jp_1398_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_1399_ = v___x_1428_;
goto v___jp_1398_;
}
v___jp_1398_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
lean_inc(v___y_1399_);
v___x_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1397_);
lean_ctor_set(v___x_1400_, 1, v___y_1399_);
v___x_1401_ = lean_box(0);
v___x_1402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
v___x_1403_ = l_Lasm_JS_obj(v___x_1402_);
v___x_1404_ = lean_unsigned_to_nat(3u);
v___x_1405_ = lean_mk_empty_array_with_capacity(v___x_1404_);
v___x_1406_ = lean_array_push(v___x_1405_, v___x_1395_);
v___x_1407_ = lean_array_push(v___x_1406_, v___x_1396_);
v___x_1408_ = lean_array_push(v___x_1407_, v___x_1403_);
v___x_1409_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1392_, v___x_1393_, v___x_1408_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; 
v_unused_1417_ = lean_ctor_get(v___x_1409_, 0);
lean_dec(v_unused_1417_);
v___x_1411_ = v___x_1409_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_dec(v___x_1409_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 0, v_a_1387_);
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1387_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1425_; 
lean_dec(v_a_1387_);
v_a_1418_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1420_ = v___x_1409_;
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v___x_1409_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1423_; 
if (v_isShared_1421_ == 0)
{
v___x_1423_ = v___x_1420_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_a_1418_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
lean_dec(v_a_1387_);
v_a_1429_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1391_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1391_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
else
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1444_; 
lean_dec(v_a_1387_);
v_a_1437_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1439_ = v___x_1388_;
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v___x_1388_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1442_; 
if (v_isShared_1440_ == 0)
{
v___x_1442_ = v___x_1439_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1437_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1452_; 
v_a_1445_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1447_ = v___x_1386_;
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___x_1386_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1450_; 
if (v_isShared_1448_ == 0)
{
v___x_1450_ = v___x_1447_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1445_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object* v_f_1453_, lean_object* v_a_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(v_f_1453_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object* v_f_1456_, lean_object* v_args_1457_){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = lean_unsigned_to_nat(0u);
v___x_1460_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1457_, v___x_1459_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1462_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
lean_dec_ref_known(v___x_1460_, 1);
v___x_1462_ = lean_apply_2(v_f_1456_, v_a_1461_, lean_box(0));
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1470_; 
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1470_ == 0)
{
lean_object* v_unused_1471_; 
v_unused_1471_ = lean_ctor_get(v___x_1462_, 0);
lean_dec(v_unused_1471_);
v___x_1464_ = v___x_1462_;
v_isShared_1465_ = v_isSharedCheck_1470_;
goto v_resetjp_1463_;
}
else
{
lean_dec(v___x_1462_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1470_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1468_; 
v___x_1466_ = lean_box(0);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1466_);
v___x_1468_ = v___x_1464_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1466_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
v_a_1472_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1462_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1462_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
else
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
lean_dec_ref(v_f_1456_);
v_a_1480_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1460_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1460_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1488_, lean_object* v_args_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(v_f_1488_, v_args_1489_);
lean_dec_ref(v_args_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object* v_f_1492_){
_start:
{
lean_object* v___f_1494_; lean_object* v___x_1495_; 
v___f_1494_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1494_, 0, v_f_1492_);
v___x_1495_ = l_Lasm_JS_Function_ofSyncFn(v___f_1494_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1497_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1497_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1499_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1500_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1498_, v___x_1499_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v_a_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___y_1508_; uint8_t v___x_1535_; 
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1501_);
lean_dec_ref_known(v___x_1500_, 1);
v___x_1502_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1503_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_1496_);
v___x_1504_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1504_, 0, v_a_1496_);
lean_ctor_set(v___x_1504_, 1, v___x_1503_);
v___x_1505_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1506_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1535_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_1508_ = v___x_1536_;
goto v___jp_1507_;
}
else
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_1508_ = v___x_1537_;
goto v___jp_1507_;
}
v___jp_1507_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
lean_inc(v___y_1508_);
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1506_);
lean_ctor_set(v___x_1509_, 1, v___y_1508_);
v___x_1510_ = lean_box(0);
v___x_1511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1509_);
lean_ctor_set(v___x_1511_, 1, v___x_1510_);
v___x_1512_ = l_Lasm_JS_obj(v___x_1511_);
v___x_1513_ = lean_unsigned_to_nat(3u);
v___x_1514_ = lean_mk_empty_array_with_capacity(v___x_1513_);
v___x_1515_ = lean_array_push(v___x_1514_, v___x_1504_);
v___x_1516_ = lean_array_push(v___x_1515_, v___x_1505_);
v___x_1517_ = lean_array_push(v___x_1516_, v___x_1512_);
v___x_1518_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1501_, v___x_1502_, v___x_1517_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; 
v_unused_1526_ = lean_ctor_get(v___x_1518_, 0);
lean_dec(v_unused_1526_);
v___x_1520_ = v___x_1518_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_dec(v___x_1518_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
lean_ctor_set(v___x_1520_, 0, v_a_1496_);
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1496_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
else
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1534_; 
lean_dec(v_a_1496_);
v_a_1527_ = lean_ctor_get(v___x_1518_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1529_ = v___x_1518_;
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1518_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1532_; 
if (v_isShared_1530_ == 0)
{
v___x_1532_ = v___x_1529_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_a_1527_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec(v_a_1496_);
v_a_1538_ = lean_ctor_get(v___x_1500_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1500_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1500_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec(v_a_1496_);
v_a_1546_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1497_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1497_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
else
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
v_a_1554_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1495_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1495_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object* v_f_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(v_f_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object* v___f_1571_, lean_object* v___f_1572_, lean_object* v___f_1573_, lean_object* v___f_1574_, lean_object* v___f_1575_, lean_object* v___f_1576_, lean_object* v___f_1577_, lean_object* v_d_1578_){
_start:
{
lean_object* v_signal_1579_; lean_object* v_onError_1580_; lean_object* v_onListen_1581_; lean_object* v_automaticCompression_1582_; lean_object* v_transport_1583_; lean_object* v_port_1584_; lean_object* v_hostname_1585_; lean_object* v_reusePort_1586_; lean_object* v_tcpBacklog_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v_signal_1579_ = lean_ctor_get(v_d_1578_, 0);
lean_inc(v_signal_1579_);
v_onError_1580_ = lean_ctor_get(v_d_1578_, 1);
lean_inc(v_onError_1580_);
v_onListen_1581_ = lean_ctor_get(v_d_1578_, 2);
lean_inc(v_onListen_1581_);
v_automaticCompression_1582_ = lean_ctor_get(v_d_1578_, 3);
lean_inc(v_automaticCompression_1582_);
v_transport_1583_ = lean_ctor_get(v_d_1578_, 4);
lean_inc(v_transport_1583_);
v_port_1584_ = lean_ctor_get(v_d_1578_, 5);
lean_inc(v_port_1584_);
v_hostname_1585_ = lean_ctor_get(v_d_1578_, 6);
lean_inc(v_hostname_1585_);
v_reusePort_1586_ = lean_ctor_get(v_d_1578_, 7);
lean_inc(v_reusePort_1586_);
v_tcpBacklog_1587_ = lean_ctor_get(v_d_1578_, 8);
lean_inc(v_tcpBacklog_1587_);
lean_dec_ref(v_d_1578_);
v___x_1588_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1589_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1571_, v_signal_1579_);
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1588_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
v___x_1591_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1592_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1572_, v_onError_1580_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1595_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1573_, v_onListen_1581_);
v___x_1596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1574_);
v___x_1598_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1574_, v_automaticCompression_1582_);
v___x_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1597_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1601_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1575_, v_transport_1583_);
v___x_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1600_);
lean_ctor_set(v___x_1602_, 1, v___x_1601_);
v___x_1603_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1576_);
v___x_1604_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1576_, v_port_1584_);
v___x_1605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1603_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
v___x_1606_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1607_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1577_, v_hostname_1585_);
v___x_1608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1610_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1574_, v_reusePort_1586_);
v___x_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1609_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
v___x_1612_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1613_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1576_, v_tcpBacklog_1587_);
v___x_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v___x_1615_ = lean_unsigned_to_nat(9u);
v___x_1616_ = lean_mk_empty_array_with_capacity(v___x_1615_);
v___x_1617_ = lean_array_push(v___x_1616_, v___x_1590_);
v___x_1618_ = lean_array_push(v___x_1617_, v___x_1593_);
v___x_1619_ = lean_array_push(v___x_1618_, v___x_1596_);
v___x_1620_ = lean_array_push(v___x_1619_, v___x_1599_);
v___x_1621_ = lean_array_push(v___x_1620_, v___x_1602_);
v___x_1622_ = lean_array_push(v___x_1621_, v___x_1605_);
v___x_1623_ = lean_array_push(v___x_1622_, v___x_1608_);
v___x_1624_ = lean_array_push(v___x_1623_, v___x_1611_);
v___x_1625_ = lean_array_push(v___x_1624_, v___x_1614_);
v___x_1626_ = l_Lasm_JS_Web_Support_fields(v___x_1625_);
lean_dec_ref(v___x_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object* v___f_1642_, lean_object* v___f_1643_, lean_object* v___f_1644_, lean_object* v___f_1645_, lean_object* v___f_1646_, lean_object* v___f_1647_, lean_object* v___f_1648_, lean_object* v___f_1649_, lean_object* v_d_1650_){
_start:
{
lean_object* v_signal_1651_; lean_object* v_onError_1652_; lean_object* v_onListen_1653_; lean_object* v_automaticCompression_1654_; lean_object* v_transport_1655_; lean_object* v_port_1656_; lean_object* v_hostname_1657_; lean_object* v_reusePort_1658_; lean_object* v_tcpBacklog_1659_; lean_object* v_keyFormat_1660_; lean_object* v_key_1661_; lean_object* v_cert_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v_signal_1651_ = lean_ctor_get(v_d_1650_, 0);
lean_inc(v_signal_1651_);
v_onError_1652_ = lean_ctor_get(v_d_1650_, 1);
lean_inc(v_onError_1652_);
v_onListen_1653_ = lean_ctor_get(v_d_1650_, 2);
lean_inc(v_onListen_1653_);
v_automaticCompression_1654_ = lean_ctor_get(v_d_1650_, 3);
lean_inc(v_automaticCompression_1654_);
v_transport_1655_ = lean_ctor_get(v_d_1650_, 4);
lean_inc(v_transport_1655_);
v_port_1656_ = lean_ctor_get(v_d_1650_, 5);
lean_inc(v_port_1656_);
v_hostname_1657_ = lean_ctor_get(v_d_1650_, 6);
lean_inc(v_hostname_1657_);
v_reusePort_1658_ = lean_ctor_get(v_d_1650_, 7);
lean_inc(v_reusePort_1658_);
v_tcpBacklog_1659_ = lean_ctor_get(v_d_1650_, 8);
lean_inc(v_tcpBacklog_1659_);
v_keyFormat_1660_ = lean_ctor_get(v_d_1650_, 9);
lean_inc(v_keyFormat_1660_);
v_key_1661_ = lean_ctor_get(v_d_1650_, 10);
lean_inc_ref(v_key_1661_);
v_cert_1662_ = lean_ctor_get(v_d_1650_, 11);
lean_inc_ref(v_cert_1662_);
lean_dec_ref(v_d_1650_);
v___x_1663_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1664_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1642_, v_signal_1651_);
v___x_1665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set(v___x_1665_, 1, v___x_1664_);
v___x_1666_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1667_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1643_, v_onError_1652_);
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1670_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1644_, v_onListen_1653_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1645_);
v___x_1673_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1645_, v_automaticCompression_1654_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1676_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1646_, v_transport_1655_);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1675_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1647_);
v___x_1679_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1647_, v_port_1656_);
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1678_);
lean_ctor_set(v___x_1680_, 1, v___x_1679_);
v___x_1681_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1682_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1648_, v_hostname_1657_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1685_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1645_, v_reusePort_1658_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1684_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1688_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1647_, v_tcpBacklog_1659_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1687_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_1691_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1649_, v_keyFormat_1660_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1690_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
v___x_1693_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_1694_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1694_, 0, v_key_1661_);
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1693_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
v___x_1696_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_1697_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1697_, 0, v_cert_1662_);
v___x_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = lean_unsigned_to_nat(12u);
v___x_1700_ = lean_mk_empty_array_with_capacity(v___x_1699_);
v___x_1701_ = lean_array_push(v___x_1700_, v___x_1665_);
v___x_1702_ = lean_array_push(v___x_1701_, v___x_1668_);
v___x_1703_ = lean_array_push(v___x_1702_, v___x_1671_);
v___x_1704_ = lean_array_push(v___x_1703_, v___x_1674_);
v___x_1705_ = lean_array_push(v___x_1704_, v___x_1677_);
v___x_1706_ = lean_array_push(v___x_1705_, v___x_1680_);
v___x_1707_ = lean_array_push(v___x_1706_, v___x_1683_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1686_);
v___x_1709_ = lean_array_push(v___x_1708_, v___x_1689_);
v___x_1710_ = lean_array_push(v___x_1709_, v___x_1692_);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1695_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1698_);
v___x_1713_ = l_Lasm_JS_Web_Support_fields(v___x_1712_);
lean_dec_ref(v___x_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(lean_object* v_context_1723_, lean_object* v_bytes_1724_){
_start:
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1724_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1728_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1726_, 1);
v___x_1728_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1723_, v_a_1727_);
return v___x_1728_;
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
v_a_1729_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1726_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1726_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0___boxed(lean_object* v_context_1737_, lean_object* v_bytes_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(v_context_1737_, v_bytes_1738_);
lean_dec_ref(v_bytes_1738_);
lean_dec_ref(v_context_1737_);
return v_res_1740_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1741_; uint64_t v___x_1742_; 
v___x_1741_ = 0;
v___x_1742_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(lean_object* v_o_1744_, lean_object* v_key_1745_){
_start:
{
lean_object* v_k_1747_; lean_object* v___x_1748_; 
v_k_1747_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1747_, 0, v_key_1745_);
v___x_1748_ = l_Lasm_JS_Wire_encodeIO(v_k_1747_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; uint32_t v___x_1750_; uint32_t v___x_1751_; uint64_t v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = 203;
v___x_1751_ = lasm_js_value_handle(v_o_1744_);
v___x_1752_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0);
v___x_1753_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1754_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1754_, 0, v_o_1744_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = lean_unsigned_to_nat(2u);
v___x_1756_ = lean_mk_empty_array_with_capacity(v___x_1755_);
lean_inc_ref(v_k_1747_);
v___x_1757_ = lean_array_push(v___x_1756_, v_k_1747_);
v___x_1758_ = lean_array_push(v___x_1757_, v___x_1754_);
v___x_1759_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1758_);
v___x_1760_ = lasm_js_call(v___x_1750_, v___x_1751_, v___x_1752_, v_a_1749_, v___x_1759_);
lean_dec_ref_known(v___x_1759_, 1);
lean_dec(v_a_1749_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1760_, 1);
v___x_1762_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__1));
v___x_1763_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1747_);
v___x_1764_ = lean_string_append(v___x_1762_, v___x_1763_);
lean_dec_ref(v___x_1763_);
v___x_1765_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(v___x_1764_, v_a_1761_);
lean_dec(v_a_1761_);
lean_dec_ref(v___x_1764_);
return v___x_1765_;
}
else
{
lean_object* v_a_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1773_; 
lean_dec_ref_known(v_k_1747_, 1);
v_a_1766_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1768_ = v___x_1760_;
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_a_1766_);
lean_dec(v___x_1760_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1771_; 
if (v_isShared_1769_ == 0)
{
v___x_1771_ = v___x_1768_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_a_1766_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1781_; 
lean_dec_ref_known(v_k_1747_, 1);
lean_dec(v_o_1744_);
v_a_1774_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1776_ = v___x_1748_;
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v___x_1748_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1774_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___boxed(lean_object* v_o_1782_, lean_object* v_key_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_o_1782_, v_key_1783_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(lean_object* v_self_1787_){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_1790_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_self_1787_, v___x_1789_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___boxed(lean_object* v_self_1791_, lean_object* v_a_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(v_self_1791_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(lean_object* v_x_1794_){
_start:
{
if (lean_obj_tag(v_x_1794_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1804_; 
v_a_1796_ = lean_ctor_get(v_x_1794_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v_x_1794_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1798_ = v_x_1794_;
v_isShared_1799_ = v_isSharedCheck_1804_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v_x_1794_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1804_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1801_);
return v___x_1802_;
}
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1806_; 
v_a_1805_ = lean_ctor_get(v_x_1794_, 0);
lean_inc(v_a_1805_);
lean_dec_ref_known(v_x_1794_, 1);
v___x_1806_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_1805_);
return v___x_1806_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0___boxed(lean_object* v_x_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(v_x_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed(lean_object* v_self_1812_){
_start:
{
lean_object* v___f_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; uint8_t v___x_1817_; lean_object* v_val_1819_; lean_object* v___x_1822_; 
v___f_1814_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_1815_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__1));
v___x_1816_ = lean_unsigned_to_nat(0u);
v___x_1817_ = 0;
v___x_1822_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1812_, v___x_1815_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1822_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1822_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
lean_ctor_set_tag(v___x_1825_, 1);
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
v_val_1819_ = v___x_1828_;
goto v___jp_1818_;
}
}
}
else
{
lean_object* v_a_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1838_; 
v_a_1831_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1833_ = v___x_1822_;
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_a_1831_);
lean_dec(v___x_1822_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1836_; 
if (v_isShared_1834_ == 0)
{
lean_ctor_set_tag(v___x_1833_, 0);
v___x_1836_ = v___x_1833_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_a_1831_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
v_val_1819_ = v___x_1836_;
goto v___jp_1818_;
}
}
}
v___jp_1818_:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_val_1819_);
v___x_1821_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1816_, v___x_1817_, v___x_1820_, v___f_1814_);
return v___x_1821_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___boxed(lean_object* v_self_1839_, lean_object* v_a_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed(v_self_1839_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object* v_self_1843_){
_start:
{
lean_object* v___f_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; uint8_t v___x_1848_; lean_object* v_val_1850_; lean_object* v___x_1853_; 
v___f_1845_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_1846_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_1847_ = lean_unsigned_to_nat(0u);
v___x_1848_ = 0;
v___x_1853_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1843_, v___x_1846_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1853_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1853_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
lean_ctor_set_tag(v___x_1856_, 1);
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
v_val_1850_ = v___x_1859_;
goto v___jp_1849_;
}
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
v_a_1862_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1853_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1853_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
lean_ctor_set_tag(v___x_1864_, 0);
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
v_val_1850_ = v___x_1867_;
goto v___jp_1849_;
}
}
}
v___jp_1849_:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v_val_1850_);
v___x_1852_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1847_, v___x_1848_, v___x_1851_, v___f_1845_);
return v___x_1852_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object* v_self_1870_, lean_object* v_a_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Lasm_JS_Deno_HttpServer_finished(v_self_1870_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr(lean_object* v_self_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_1877_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_self_1874_, v___x_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr___boxed(lean_object* v_self_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Lasm_JS_Deno_HttpServer_addr(v_self_1878_);
return v_res_1880_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2(void){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__1));
v___x_1885_ = l_Lasm_JS_Web_Support_args(v___x_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref(lean_object* v_self_1886_){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1888_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_1889_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1890_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1886_, v___x_1888_, v___x_1889_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref___boxed(lean_object* v_self_1891_, lean_object* v_a_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l_Lasm_JS_Deno_HttpServer_ref(v_self_1891_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref(lean_object* v_self_1895_){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1897_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_1898_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1899_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1895_, v___x_1897_, v___x_1898_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref___boxed(lean_object* v_self_1900_, lean_object* v_a_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lasm_JS_Deno_HttpServer_unref(v_self_1900_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown(lean_object* v_self_1904_){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1906_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_1907_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1908_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1904_, v___x_1906_, v___x_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___boxed(lean_object* v_self_1909_, lean_object* v_a_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = l_Lasm_JS_Deno_HttpServer_shutdown(v_self_1909_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve(lean_object* v_handler_1921_){
_start:
{
uint8_t v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1923_ = 0;
v___x_1924_ = lean_unsigned_to_nat(1u);
v___x_1925_ = ((lean_object*)(l_Lasm_JS_Deno_serve___closed__3));
v___x_1926_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1927_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_handler_1921_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
v___x_1928_ = lean_mk_empty_array_with_capacity(v___x_1924_);
v___x_1929_ = lean_array_push(v___x_1928_, v___x_1927_);
v___x_1930_ = l_Lasm_JS_Web_Support_args(v___x_1929_);
v___x_1931_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1925_, v___x_1930_, v___x_1923_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1931_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
v_a_1940_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1931_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1931_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve___boxed(lean_object* v_handler_1948_, lean_object* v_a_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lasm_JS_Deno_serve(v_handler_1948_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(lean_object* v_x_1951_){
_start:
{
if (lean_obj_tag(v_x_1951_) == 0)
{
lean_object* v___x_1952_; 
v___x_1952_ = lean_box(0);
return v___x_1952_;
}
else
{
lean_object* v_val_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v_val_1953_ = lean_ctor_get(v_x_1951_, 0);
v___x_1954_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_val_1953_);
v___x_1955_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1955_, 0, v_val_1953_);
lean_ctor_set(v___x_1955_, 1, v___x_1954_);
return v___x_1955_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0___boxed(lean_object* v_x_1956_){
_start:
{
lean_object* v_res_1957_; 
v_res_1957_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_x_1956_);
lean_dec(v_x_1956_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(lean_object* v_x_1958_){
_start:
{
if (lean_obj_tag(v_x_1958_) == 0)
{
lean_object* v___x_1959_; 
v___x_1959_ = lean_box(0);
return v___x_1959_;
}
else
{
lean_object* v_val_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v_val_1960_ = lean_ctor_get(v_x_1958_, 0);
v___x_1961_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_val_1960_);
v___x_1962_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1962_, 0, v_val_1960_);
lean_ctor_set(v___x_1962_, 1, v___x_1961_);
return v___x_1962_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1___boxed(lean_object* v_x_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_x_1963_);
lean_dec(v_x_1963_);
return v_res_1964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(lean_object* v_x_1965_){
_start:
{
if (lean_obj_tag(v_x_1965_) == 0)
{
lean_object* v___x_1966_; 
v___x_1966_ = lean_box(0);
return v___x_1966_;
}
else
{
lean_object* v___x_1967_; 
v___x_1967_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_1967_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2___boxed(lean_object* v_x_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_x_1968_);
lean_dec(v_x_1968_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions(lean_object* v_options_1977_, lean_object* v_handler_1978_){
_start:
{
lean_object* v_signal_1980_; lean_object* v_onError_1981_; lean_object* v_onListen_1982_; lean_object* v_automaticCompression_1983_; lean_object* v_transport_1984_; lean_object* v_port_1985_; lean_object* v_hostname_1986_; lean_object* v_reusePort_1987_; lean_object* v_tcpBacklog_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v_signal_1980_ = lean_ctor_get(v_options_1977_, 0);
lean_inc(v_signal_1980_);
v_onError_1981_ = lean_ctor_get(v_options_1977_, 1);
lean_inc(v_onError_1981_);
v_onListen_1982_ = lean_ctor_get(v_options_1977_, 2);
lean_inc(v_onListen_1982_);
v_automaticCompression_1983_ = lean_ctor_get(v_options_1977_, 3);
lean_inc(v_automaticCompression_1983_);
v_transport_1984_ = lean_ctor_get(v_options_1977_, 4);
lean_inc(v_transport_1984_);
v_port_1985_ = lean_ctor_get(v_options_1977_, 5);
lean_inc(v_port_1985_);
v_hostname_1986_ = lean_ctor_get(v_options_1977_, 6);
lean_inc(v_hostname_1986_);
v_reusePort_1987_ = lean_ctor_get(v_options_1977_, 7);
lean_inc(v_reusePort_1987_);
v_tcpBacklog_1988_ = lean_ctor_get(v_options_1977_, 8);
lean_inc(v_tcpBacklog_1988_);
lean_dec_ref(v_options_1977_);
v___x_1989_ = 0;
v___x_1990_ = lean_unsigned_to_nat(2u);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithOptions___closed__1));
v___x_1992_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1993_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1980_);
lean_dec(v_signal_1980_);
v___x_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1992_);
lean_ctor_set(v___x_1994_, 1, v___x_1993_);
v___x_1995_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1996_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_1981_);
lean_dec(v_onError_1981_);
v___x_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1995_);
lean_ctor_set(v___x_1997_, 1, v___x_1996_);
v___x_1998_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1999_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_1982_);
lean_dec(v_onListen_1982_);
v___x_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1998_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
v___x_2001_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2002_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_1983_);
lean_dec(v_automaticCompression_1983_);
v___x_2003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2001_);
lean_ctor_set(v___x_2003_, 1, v___x_2002_);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_2005_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_1984_);
lean_dec(v_transport_1984_);
v___x_2006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2004_);
lean_ctor_set(v___x_2006_, 1, v___x_2005_);
v___x_2007_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_2008_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_1985_);
v___x_2009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2007_);
lean_ctor_set(v___x_2009_, 1, v___x_2008_);
v___x_2010_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_2011_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1986_);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2010_);
lean_ctor_set(v___x_2012_, 1, v___x_2011_);
v___x_2013_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_2014_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1987_);
lean_dec(v_reusePort_1987_);
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2013_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_2017_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_1988_);
v___x_2018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2016_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___x_2019_ = lean_unsigned_to_nat(9u);
v___x_2020_ = lean_mk_empty_array_with_capacity(v___x_2019_);
v___x_2021_ = lean_array_push(v___x_2020_, v___x_1994_);
v___x_2022_ = lean_array_push(v___x_2021_, v___x_1997_);
v___x_2023_ = lean_array_push(v___x_2022_, v___x_2000_);
v___x_2024_ = lean_array_push(v___x_2023_, v___x_2003_);
v___x_2025_ = lean_array_push(v___x_2024_, v___x_2006_);
v___x_2026_ = lean_array_push(v___x_2025_, v___x_2009_);
v___x_2027_ = lean_array_push(v___x_2026_, v___x_2012_);
v___x_2028_ = lean_array_push(v___x_2027_, v___x_2015_);
v___x_2029_ = lean_array_push(v___x_2028_, v___x_2018_);
v___x_2030_ = l_Lasm_JS_Web_Support_fields(v___x_2029_);
lean_dec_ref(v___x_2029_);
v___x_2031_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_2032_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2032_, 0, v_handler_1978_);
lean_ctor_set(v___x_2032_, 1, v___x_2031_);
v___x_2033_ = lean_mk_empty_array_with_capacity(v___x_1990_);
v___x_2034_ = lean_array_push(v___x_2033_, v___x_2030_);
v___x_2035_ = lean_array_push(v___x_2034_, v___x_2032_);
v___x_2036_ = l_Lasm_JS_Web_Support_args(v___x_2035_);
v___x_2037_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1991_, v___x_2036_, v___x_1989_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2045_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2038_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
}
else
{
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2053_; 
v_a_2046_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2048_ = v___x_2037_;
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v___x_2037_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2051_; 
if (v_isShared_2049_ == 0)
{
v___x_2051_ = v___x_2048_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_a_2046_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions___boxed(lean_object* v_options_2054_, lean_object* v_handler_2055_, lean_object* v_a_2056_){
_start:
{
lean_object* v_res_2057_; 
v_res_2057_ = l_Lasm_JS_Deno_serveWithOptions(v_options_2054_, v_handler_2055_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(lean_object* v_x_2058_){
_start:
{
if (lean_obj_tag(v_x_2058_) == 0)
{
lean_object* v___x_2059_; 
v___x_2059_ = lean_box(0);
return v___x_2059_;
}
else
{
lean_object* v___x_2060_; 
v___x_2060_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_2060_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0___boxed(lean_object* v_x_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_x_2061_);
lean_dec(v_x_2061_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions(lean_object* v_tlsOptions_2070_, lean_object* v_handler_2071_){
_start:
{
lean_object* v_signal_2073_; lean_object* v_onError_2074_; lean_object* v_onListen_2075_; lean_object* v_automaticCompression_2076_; lean_object* v_transport_2077_; lean_object* v_port_2078_; lean_object* v_hostname_2079_; lean_object* v_reusePort_2080_; lean_object* v_tcpBacklog_2081_; lean_object* v_keyFormat_2082_; lean_object* v_key_2083_; lean_object* v_cert_2084_; uint8_t v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v_signal_2073_ = lean_ctor_get(v_tlsOptions_2070_, 0);
lean_inc(v_signal_2073_);
v_onError_2074_ = lean_ctor_get(v_tlsOptions_2070_, 1);
lean_inc(v_onError_2074_);
v_onListen_2075_ = lean_ctor_get(v_tlsOptions_2070_, 2);
lean_inc(v_onListen_2075_);
v_automaticCompression_2076_ = lean_ctor_get(v_tlsOptions_2070_, 3);
lean_inc(v_automaticCompression_2076_);
v_transport_2077_ = lean_ctor_get(v_tlsOptions_2070_, 4);
lean_inc(v_transport_2077_);
v_port_2078_ = lean_ctor_get(v_tlsOptions_2070_, 5);
lean_inc(v_port_2078_);
v_hostname_2079_ = lean_ctor_get(v_tlsOptions_2070_, 6);
lean_inc(v_hostname_2079_);
v_reusePort_2080_ = lean_ctor_get(v_tlsOptions_2070_, 7);
lean_inc(v_reusePort_2080_);
v_tcpBacklog_2081_ = lean_ctor_get(v_tlsOptions_2070_, 8);
lean_inc(v_tcpBacklog_2081_);
v_keyFormat_2082_ = lean_ctor_get(v_tlsOptions_2070_, 9);
lean_inc(v_keyFormat_2082_);
v_key_2083_ = lean_ctor_get(v_tlsOptions_2070_, 10);
lean_inc_ref(v_key_2083_);
v_cert_2084_ = lean_ctor_get(v_tlsOptions_2070_, 11);
lean_inc_ref(v_cert_2084_);
lean_dec_ref(v_tlsOptions_2070_);
v___x_2085_ = 0;
v___x_2086_ = lean_unsigned_to_nat(2u);
v___x_2087_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithTlsOptions___closed__1));
v___x_2088_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_2089_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2073_);
lean_dec(v_signal_2073_);
v___x_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2088_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
v___x_2091_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2092_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_2074_);
lean_dec(v_onError_2074_);
v___x_2093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2091_);
lean_ctor_set(v___x_2093_, 1, v___x_2092_);
v___x_2094_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2095_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_2075_);
lean_dec(v_onListen_2075_);
v___x_2096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2094_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
v___x_2097_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2098_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_2076_);
lean_dec(v_automaticCompression_2076_);
v___x_2099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2097_);
lean_ctor_set(v___x_2099_, 1, v___x_2098_);
v___x_2100_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_2101_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_2077_);
lean_dec(v_transport_2077_);
v___x_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2100_);
lean_ctor_set(v___x_2102_, 1, v___x_2101_);
v___x_2103_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_2104_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_2078_);
v___x_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2103_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_2107_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2079_);
v___x_2108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2106_);
lean_ctor_set(v___x_2108_, 1, v___x_2107_);
v___x_2109_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_2110_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2080_);
lean_dec(v_reusePort_2080_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_2113_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_2081_);
v___x_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2112_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_2116_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_keyFormat_2082_);
lean_dec(v_keyFormat_2082_);
v___x_2117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2115_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_2119_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2119_, 0, v_key_2083_);
v___x_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2118_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_2122_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2122_, 0, v_cert_2084_);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2121_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = lean_unsigned_to_nat(12u);
v___x_2125_ = lean_mk_empty_array_with_capacity(v___x_2124_);
v___x_2126_ = lean_array_push(v___x_2125_, v___x_2090_);
v___x_2127_ = lean_array_push(v___x_2126_, v___x_2093_);
v___x_2128_ = lean_array_push(v___x_2127_, v___x_2096_);
v___x_2129_ = lean_array_push(v___x_2128_, v___x_2099_);
v___x_2130_ = lean_array_push(v___x_2129_, v___x_2102_);
v___x_2131_ = lean_array_push(v___x_2130_, v___x_2105_);
v___x_2132_ = lean_array_push(v___x_2131_, v___x_2108_);
v___x_2133_ = lean_array_push(v___x_2132_, v___x_2111_);
v___x_2134_ = lean_array_push(v___x_2133_, v___x_2114_);
v___x_2135_ = lean_array_push(v___x_2134_, v___x_2117_);
v___x_2136_ = lean_array_push(v___x_2135_, v___x_2120_);
v___x_2137_ = lean_array_push(v___x_2136_, v___x_2123_);
v___x_2138_ = l_Lasm_JS_Web_Support_fields(v___x_2137_);
lean_dec_ref(v___x_2137_);
v___x_2139_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_2140_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2140_, 0, v_handler_2071_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = lean_mk_empty_array_with_capacity(v___x_2086_);
v___x_2142_ = lean_array_push(v___x_2141_, v___x_2138_);
v___x_2143_ = lean_array_push(v___x_2142_, v___x_2140_);
v___x_2144_ = l_Lasm_JS_Web_Support_args(v___x_2143_);
v___x_2145_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2087_, v___x_2144_, v___x_2085_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2145_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2145_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
v_a_2154_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2145_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2145_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___boxed(lean_object* v_tlsOptions_2162_, lean_object* v_handler_2163_, lean_object* v_a_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lasm_JS_Deno_serveWithTlsOptions(v_tlsOptions_2162_, v_handler_2163_);
return v_res_2165_;
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
