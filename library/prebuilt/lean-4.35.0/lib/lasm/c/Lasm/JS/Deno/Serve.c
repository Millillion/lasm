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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
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
lean_object* v___f_623_; lean_object* v___f_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___f_623_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_624_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_624_, 0, v_f_621_);
lean_closure_set(v___f_624_, 1, v___f_623_);
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = l_Lasm_JS_Function_ofFn(v___f_624_, v___x_625_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; lean_object* v___x_628_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_a_627_);
lean_dec_ref_known(v___x_626_, 1);
v___x_628_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_628_, 1);
v___x_630_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_631_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_629_, v___x_630_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___y_639_; uint8_t v___x_666_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___x_631_, 1);
v___x_633_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_634_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_627_);
v___x_635_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_635_, 0, v_a_627_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_637_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_666_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; 
v___x_667_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_639_ = v___x_667_;
goto v___jp_638_;
}
else
{
lean_object* v___x_668_; 
v___x_668_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_639_ = v___x_668_;
goto v___jp_638_;
}
v___jp_638_:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
lean_inc(v___y_639_);
v___x_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_637_);
lean_ctor_set(v___x_640_, 1, v___y_639_);
v___x_641_ = lean_box(0);
v___x_642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = l_Lasm_JS_obj(v___x_642_);
v___x_644_ = lean_unsigned_to_nat(3u);
v___x_645_ = lean_mk_empty_array_with_capacity(v___x_644_);
v___x_646_ = lean_array_push(v___x_645_, v___x_635_);
v___x_647_ = lean_array_push(v___x_646_, v___x_636_);
v___x_648_ = lean_array_push(v___x_647_, v___x_643_);
v___x_649_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_632_, v___x_633_, v___x_648_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_656_ == 0)
{
lean_object* v_unused_657_; 
v_unused_657_ = lean_ctor_get(v___x_649_, 0);
lean_dec(v_unused_657_);
v___x_651_ = v___x_649_;
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
else
{
lean_dec(v___x_649_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v_a_627_);
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_627_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
else
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
lean_dec(v_a_627_);
v_a_658_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_649_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_649_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_661_ == 0)
{
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_658_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec(v_a_627_);
v_a_669_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_631_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_631_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
lean_dec(v_a_627_);
v_a_677_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_628_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_628_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
v_a_685_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_626_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_626_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object* v_f_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lasm_JS_Deno_ServeHandler_ofFn(v_f_693_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object* v_f_696_, lean_object* v_args_697_){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_unsigned_to_nat(0u);
v___x_700_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_697_, v___x_699_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
v___x_702_ = lean_unsigned_to_nat(1u);
v___x_703_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_697_, v___x_702_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; lean_object* v___x_705_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_703_, 1);
v___x_705_ = lean_apply_3(v_f_696_, v_a_701_, v_a_704_, lean_box(0));
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_715_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_715_ == 0)
{
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_715_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_715_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_711_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_711_, 0, v_a_706_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v___x_711_);
v___x_713_ = v___x_708_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v___x_711_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
v_a_716_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_705_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_705_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_dec(v_a_701_);
lean_dec_ref(v_f_696_);
v_a_724_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_703_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_703_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
lean_dec_ref(v_f_696_);
v_a_732_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_700_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_700_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_740_, lean_object* v_args_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(v_f_740_, v_args_741_);
lean_dec_ref(v_args_741_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object* v_f_744_){
_start:
{
lean_object* v___f_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___f_746_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_746_, 0, v_f_744_);
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = l_Lasm_JS_Function_ofSyncFn(v___f_746_, v___x_747_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
lean_dec_ref_known(v___x_750_, 1);
v___x_752_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_753_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_751_, v___x_752_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___y_761_; uint8_t v___x_788_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_753_, 1);
v___x_755_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_756_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_749_);
v___x_757_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_757_, 0, v_a_749_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
v___x_758_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_759_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_788_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; 
v___x_789_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_761_ = v___x_789_;
goto v___jp_760_;
}
else
{
lean_object* v___x_790_; 
v___x_790_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_761_ = v___x_790_;
goto v___jp_760_;
}
v___jp_760_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
lean_inc(v___y_761_);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_759_);
lean_ctor_set(v___x_762_, 1, v___y_761_);
v___x_763_ = lean_box(0);
v___x_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_762_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = l_Lasm_JS_obj(v___x_764_);
v___x_766_ = lean_unsigned_to_nat(3u);
v___x_767_ = lean_mk_empty_array_with_capacity(v___x_766_);
v___x_768_ = lean_array_push(v___x_767_, v___x_757_);
v___x_769_ = lean_array_push(v___x_768_, v___x_758_);
v___x_770_ = lean_array_push(v___x_769_, v___x_765_);
v___x_771_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_754_, v___x_755_, v___x_770_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_778_ == 0)
{
lean_object* v_unused_779_; 
v_unused_779_ = lean_ctor_get(v___x_771_, 0);
lean_dec(v_unused_779_);
v___x_773_ = v___x_771_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_dec(v___x_771_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v_a_749_);
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_749_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_a_749_);
v_a_780_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_771_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_771_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v_a_749_);
v_a_791_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_753_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_753_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec(v_a_749_);
v_a_799_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_750_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_750_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
v_a_807_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_748_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_748_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object* v_f_815_, lean_object* v_a_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn(v_f_815_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(lean_object* v_f_825_, lean_object* v___f_826_, lean_object* v_x_827_){
_start:
{
if (lean_obj_tag(v_x_827_) == 0)
{
lean_object* v___x_829_; 
lean_dec_ref(v___f_826_);
lean_dec_ref(v_f_825_);
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v_x_827_);
return v___x_829_;
}
else
{
lean_object* v_a_830_; lean_object* v___x_831_; uint8_t v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_a_830_ = lean_ctor_get(v_x_827_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v_x_827_, 1);
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = 0;
v___x_833_ = lean_apply_2(v_f_825_, v_a_830_, lean_box(0));
v___x_834_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_831_, v___x_832_, v___x_833_, v___f_826_);
return v___x_834_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed(lean_object* v_f_835_, lean_object* v___f_836_, lean_object* v_x_837_, lean_object* v___y_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(v_f_835_, v___f_836_, v_x_837_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(lean_object* v___f_840_, lean_object* v_args_841_){
_start:
{
lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v_val_846_; lean_object* v___x_849_; lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v___x_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = 0;
v___x_849_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_841_, v___x_843_);
v_a_850_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_849_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_849_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v___jp_845_:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v_val_846_);
v___x_848_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_843_, v___x_844_, v___x_847_, v___f_840_);
return v___x_848_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set_tag(v___x_852_, 1);
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
v_val_846_ = v___x_855_;
goto v___jp_845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed(lean_object* v___f_858_, lean_object* v_args_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(v___f_858_, v_args_859_);
lean_dec_ref(v_args_859_);
return v_res_861_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_863_ = lean_nat_abs(v___x_862_);
return v___x_863_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; 
v___x_864_ = lean_cstr_to_nat("9007199254740991");
v___x_865_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0);
v___x_866_ = lean_nat_dec_le(v___x_865_, v___x_864_);
return v___x_866_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_868_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
return v___x_868_;
}
}
static double _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3(void){
_start:
{
lean_object* v___x_869_; double v___x_870_; 
v___x_869_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_870_ = l_Float_ofInt(v___x_869_);
return v___x_870_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4(void){
_start:
{
double v___x_871_; lean_object* v___x_872_; 
v___x_871_ = lean_float_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3);
v___x_872_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object* v_f_873_){
_start:
{
lean_object* v___f_875_; lean_object* v___f_876_; lean_object* v___f_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___f_875_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_876_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_876_, 0, v_f_873_);
lean_closure_set(v___f_876_, 1, v___f_875_);
v___f_877_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_877_, 0, v___f_876_);
v___x_878_ = lean_unsigned_to_nat(0u);
v___x_879_ = l_Lasm_JS_Function_ofFn(v___f_877_, v___x_878_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_881_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
v___x_883_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_884_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_882_, v___x_883_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___y_892_; uint8_t v___x_919_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref_known(v___x_884_, 1);
v___x_886_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_887_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_880_);
v___x_888_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_888_, 0, v_a_880_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
v___x_889_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_890_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_919_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; 
v___x_920_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_892_ = v___x_920_;
goto v___jp_891_;
}
else
{
lean_object* v___x_921_; 
v___x_921_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_892_ = v___x_921_;
goto v___jp_891_;
}
v___jp_891_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
lean_inc(v___y_892_);
v___x_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_890_);
lean_ctor_set(v___x_893_, 1, v___y_892_);
v___x_894_ = lean_box(0);
v___x_895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_893_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = l_Lasm_JS_obj(v___x_895_);
v___x_897_ = lean_unsigned_to_nat(3u);
v___x_898_ = lean_mk_empty_array_with_capacity(v___x_897_);
v___x_899_ = lean_array_push(v___x_898_, v___x_888_);
v___x_900_ = lean_array_push(v___x_899_, v___x_889_);
v___x_901_ = lean_array_push(v___x_900_, v___x_896_);
v___x_902_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_885_, v___x_886_, v___x_901_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; 
v_unused_910_ = lean_ctor_get(v___x_902_, 0);
lean_dec(v_unused_910_);
v___x_904_ = v___x_902_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_dec(v___x_902_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 0, v_a_880_);
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_880_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
else
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec(v_a_880_);
v_a_911_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_902_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_902_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_a_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
lean_dec(v_a_880_);
v_a_922_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_884_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_884_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
else
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_dec(v_a_880_);
v_a_930_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_881_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_881_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_930_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
else
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
v_a_938_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_879_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_879_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object* v_f_946_, lean_object* v_a_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(v_f_946_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(lean_object* v_f_949_, lean_object* v_args_950_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v_a_954_; lean_object* v___x_955_; 
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_950_, v___x_952_);
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref(v___x_953_);
v___x_955_ = lean_apply_2(v_f_949_, v_a_954_, lean_box(0));
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_965_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_965_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_965_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_965_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_960_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_961_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_961_, 0, v_a_956_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_961_);
v___x_963_ = v___x_958_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_a_966_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_955_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_955_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed(lean_object* v_f_974_, lean_object* v_args_975_, lean_object* v___y_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(v_f_974_, v_args_975_);
lean_dec_ref(v_args_975_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object* v_f_978_){
_start:
{
lean_object* v___f_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___f_980_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_980_, 0, v_f_978_);
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = l_Lasm_JS_Function_ofSyncFn(v___f_980_, v___x_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_982_, 1);
v___x_984_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_987_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_985_, v___x_986_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___y_995_; uint8_t v___x_1022_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_987_, 1);
v___x_989_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_990_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_983_);
v___x_991_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_991_, 0, v_a_983_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_993_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1022_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_995_ = v___x_1023_;
goto v___jp_994_;
}
else
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_995_ = v___x_1024_;
goto v___jp_994_;
}
v___jp_994_:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
lean_inc(v___y_995_);
v___x_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_993_);
lean_ctor_set(v___x_996_, 1, v___y_995_);
v___x_997_ = lean_box(0);
v___x_998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = l_Lasm_JS_obj(v___x_998_);
v___x_1000_ = lean_unsigned_to_nat(3u);
v___x_1001_ = lean_mk_empty_array_with_capacity(v___x_1000_);
v___x_1002_ = lean_array_push(v___x_1001_, v___x_991_);
v___x_1003_ = lean_array_push(v___x_1002_, v___x_992_);
v___x_1004_ = lean_array_push(v___x_1003_, v___x_999_);
v___x_1005_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_988_, v___x_989_, v___x_1004_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1012_; 
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1012_ == 0)
{
lean_object* v_unused_1013_; 
v_unused_1013_ = lean_ctor_get(v___x_1005_, 0);
lean_dec(v_unused_1013_);
v___x_1007_ = v___x_1005_;
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
else
{
lean_dec(v___x_1005_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v_a_983_);
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_983_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_dec(v_a_983_);
v_a_1014_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_1005_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1005_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec(v_a_983_);
v_a_1025_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_987_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_987_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
lean_dec(v_a_983_);
v_a_1033_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_984_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_984_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
v_a_1041_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_982_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_982_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object* v_f_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(v_f_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object* v_x_1063_){
_start:
{
if (lean_obj_tag(v_x_1063_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1073_; 
v_a_1065_ = lean_ctor_get(v_x_1063_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_x_1063_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1067_ = v_x_1063_;
v_isShared_1068_ = v_isSharedCheck_1073_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v_x_1063_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1073_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
return v___x_1071_;
}
}
}
else
{
lean_object* v___x_1074_; 
lean_dec_ref_known(v_x_1063_, 1);
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__1));
return v___x_1074_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object* v_x_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(v_x_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object* v_f_1078_, lean_object* v___f_1079_, lean_object* v_x_1080_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1090_; 
lean_dec_ref(v___f_1079_);
lean_dec_ref(v_f_1078_);
v_a_1082_ = lean_ctor_get(v_x_1080_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_x_1080_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1084_ = v_x_1080_;
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v_x_1080_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1088_; 
v___x_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
return v___x_1088_;
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_a_1091_ = lean_ctor_get(v_x_1080_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v_x_1080_, 1);
v___x_1092_ = lean_unsigned_to_nat(0u);
v___x_1093_ = 0;
v___x_1094_ = lean_apply_2(v_f_1078_, v_a_1091_, lean_box(0));
v___x_1095_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1092_, v___x_1093_, v___x_1094_, v___f_1079_);
return v___x_1095_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object* v_f_1096_, lean_object* v___f_1097_, lean_object* v_x_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(v_f_1096_, v___f_1097_, v_x_1098_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(lean_object* v_d_1108_, lean_object* v_key_1109_){
_start:
{
if (lean_obj_tag(v_d_1108_) == 8)
{
lean_object* v___x_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1141_; 
v___x_1110_ = l_Lasm_JS_Data_field(v_d_1108_, v_key_1109_);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_d_1108_);
if (v_isSharedCheck_1141_ == 0)
{
lean_object* v_unused_1142_; 
v_unused_1142_ = lean_ctor_get(v_d_1108_, 0);
lean_dec(v_unused_1142_);
v___x_1112_ = v_d_1108_;
v_isShared_1113_ = v_isSharedCheck_1141_;
goto v_resetjp_1111_;
}
else
{
lean_dec(v_d_1108_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1141_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
if (lean_obj_tag(v___x_1110_) == 4)
{
lean_object* v_s_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_del_object(v___x_1112_);
v_s_1114_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1110_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_s_1114_);
lean_dec(v___x_1110_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
lean_ctor_set_tag(v___x_1116_, 1);
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_s_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
else
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; 
v___x_1122_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1123_ = lean_string_append(v___x_1122_, v_key_1109_);
v___x_1124_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1125_ = lean_string_append(v___x_1123_, v___x_1124_);
v___x_1126_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__2));
v___x_1127_ = lean_string_append(v___x_1125_, v___x_1126_);
v___x_1128_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1129_ = lean_string_append(v___x_1127_, v___x_1128_);
v___x_1130_ = l_Lasm_JS_Data_describe(v___x_1110_);
v___x_1131_ = lean_string_append(v___x_1129_, v___x_1130_);
lean_dec_ref(v___x_1130_);
v___x_1132_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1133_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___x_1134_ = lean_string_append(v___x_1131_, v___x_1133_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1134_);
v___x_1136_ = v___x_1112_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
else
{
lean_object* v___x_1139_; 
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1131_);
v___x_1139_ = v___x_1112_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1131_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
else
{
lean_object* v___x_1143_; 
lean_dec(v_d_1108_);
v___x_1143_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__5));
return v___x_1143_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1144_, lean_object* v_key_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1144_, v_key_1145_);
lean_dec_ref(v_key_1145_);
return v_res_1146_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = lean_unsigned_to_nat(0u);
v___x_1151_ = lean_nat_to_int(v___x_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(lean_object* v_d_1156_, lean_object* v_key_1157_){
_start:
{
if (lean_obj_tag(v_d_1156_) == 8)
{
lean_object* v___x_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1201_; 
v___x_1158_ = l_Lasm_JS_Data_field(v_d_1156_, v_key_1157_);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_d_1156_);
if (v_isSharedCheck_1201_ == 0)
{
lean_object* v_unused_1202_; 
v_unused_1202_ = lean_ctor_get(v_d_1156_, 0);
lean_dec(v_unused_1202_);
v___x_1160_ = v_d_1156_;
v_isShared_1161_ = v_isSharedCheck_1201_;
goto v_resetjp_1159_;
}
else
{
lean_dec(v_d_1156_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1201_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v_a_1163_; lean_object* v_a_1189_; 
switch(lean_obj_tag(v___x_1158_))
{
case 3:
{
double v_n_1195_; lean_object* v___x_1196_; 
v_n_1195_ = lean_ctor_get_float(v___x_1158_, 0);
v___x_1196_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1195_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v___x_1197_; 
v___x_1197_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__5));
v_a_1163_ = v___x_1197_;
goto v___jp_1162_;
}
else
{
lean_object* v_val_1198_; 
v_val_1198_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_val_1198_);
lean_dec_ref_known(v___x_1196_, 1);
v_a_1189_ = v_val_1198_;
goto v___jp_1188_;
}
}
case 5:
{
lean_object* v_i_1199_; 
v_i_1199_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_i_1199_);
v_a_1189_ = v_i_1199_;
goto v___jp_1188_;
}
default: 
{
lean_object* v___x_1200_; 
v___x_1200_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v_a_1163_ = v___x_1200_;
goto v___jp_1162_;
}
}
v___jp_1162_:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1164_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1165_ = lean_string_append(v___x_1164_, v_key_1157_);
v___x_1166_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1167_ = lean_string_append(v___x_1165_, v___x_1166_);
v___x_1168_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__0));
v___x_1169_ = lean_string_append(v___x_1167_, v___x_1168_);
v___x_1170_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1171_ = lean_string_append(v___x_1169_, v___x_1170_);
v___x_1172_ = l_Lasm_JS_Data_describe(v___x_1158_);
v___x_1173_ = lean_string_append(v___x_1171_, v___x_1172_);
lean_dec_ref(v___x_1172_);
v___x_1174_ = lean_string_utf8_byte_size(v_a_1163_);
v___x_1175_ = lean_unsigned_to_nat(0u);
v___x_1176_ = lean_nat_dec_eq(v___x_1174_, v___x_1175_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1177_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1));
v___x_1178_ = lean_string_append(v___x_1177_, v_a_1163_);
v___x_1179_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2));
v___x_1180_ = lean_string_append(v___x_1178_, v___x_1179_);
v___x_1181_ = lean_string_append(v___x_1173_, v___x_1180_);
lean_dec_ref(v___x_1180_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1181_);
v___x_1183_ = v___x_1160_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
else
{
lean_object* v___x_1186_; 
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1173_);
v___x_1186_ = v___x_1160_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1173_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
v___jp_1188_:
{
lean_object* v___x_1190_; uint8_t v___x_1191_; 
v___x_1190_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3);
v___x_1191_ = lean_int_dec_le(v___x_1190_, v_a_1189_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; 
lean_dec(v_a_1189_);
v___x_1192_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__4));
v_a_1163_ = v___x_1192_;
goto v___jp_1162_;
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
lean_del_object(v___x_1160_);
lean_dec(v___x_1158_);
v___x_1193_ = l_Int_toNat(v_a_1189_);
lean_dec(v_a_1189_);
v___x_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
return v___x_1194_;
}
}
}
}
else
{
lean_object* v___x_1203_; 
lean_dec(v_d_1156_);
v___x_1203_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__6));
return v___x_1203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___boxed(lean_object* v_d_1204_, lean_object* v_key_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1204_, v_key_1205_);
lean_dec_ref(v_key_1205_);
return v_res_1206_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0));
v___x_1208_ = lean_string_utf8_byte_size(v___x_1207_);
return v___x_1208_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1209_ = lean_unsigned_to_nat(0u);
v___x_1210_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0);
v___x_1211_ = lean_nat_dec_eq(v___x_1210_, v___x_1209_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(lean_object* v_d_1215_, lean_object* v_key_1216_){
_start:
{
if (lean_obj_tag(v_d_1215_) == 8)
{
lean_object* v___x_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1248_; 
v___x_1217_ = l_Lasm_JS_Data_field(v_d_1215_, v_key_1216_);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_d_1215_);
if (v_isSharedCheck_1248_ == 0)
{
lean_object* v_unused_1249_; 
v_unused_1249_ = lean_ctor_get(v_d_1215_, 0);
lean_dec(v_unused_1249_);
v___x_1219_ = v_d_1215_;
v_isShared_1220_ = v_isSharedCheck_1248_;
goto v_resetjp_1218_;
}
else
{
lean_dec(v_d_1215_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1248_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
if (lean_obj_tag(v___x_1217_) == 4)
{
lean_object* v_s_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; 
v_s_1241_ = lean_ctor_get(v___x_1217_, 0);
lean_inc_ref(v_s_1241_);
v___x_1242_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_1243_ = lean_string_dec_eq(v_s_1241_, v___x_1242_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; uint8_t v___x_1245_; 
v___x_1244_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2));
v___x_1245_ = lean_string_dec_eq(v_s_1241_, v___x_1244_);
lean_dec_ref(v_s_1241_);
if (v___x_1245_ == 0)
{
goto v___jp_1221_;
}
else
{
lean_object* v___x_1246_; 
lean_dec_ref_known(v___x_1217_, 1);
lean_del_object(v___x_1219_);
v___x_1246_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2));
return v___x_1246_;
}
}
else
{
lean_object* v___x_1247_; 
lean_dec_ref(v_s_1241_);
lean_dec_ref_known(v___x_1217_, 1);
lean_del_object(v___x_1219_);
v___x_1247_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3));
return v___x_1247_;
}
}
else
{
goto v___jp_1221_;
}
v___jp_1221_:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; uint8_t v___x_1232_; 
v___x_1222_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1223_ = lean_string_append(v___x_1222_, v_key_1216_);
v___x_1224_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1225_ = lean_string_append(v___x_1223_, v___x_1224_);
v___x_1226_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1));
v___x_1227_ = lean_string_append(v___x_1225_, v___x_1226_);
v___x_1228_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1229_ = lean_string_append(v___x_1227_, v___x_1228_);
v___x_1230_ = l_Lasm_JS_Data_describe(v___x_1217_);
v___x_1231_ = lean_string_append(v___x_1229_, v___x_1230_);
lean_dec_ref(v___x_1230_);
v___x_1232_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1233_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__2));
v___x_1234_ = lean_string_append(v___x_1231_, v___x_1233_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set_tag(v___x_1219_, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1234_);
v___x_1236_ = v___x_1219_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
else
{
lean_object* v___x_1239_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set_tag(v___x_1219_, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1231_);
v___x_1239_ = v___x_1219_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1231_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
}
else
{
lean_object* v___x_1250_; 
lean_dec(v_d_1215_);
v___x_1250_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__3));
return v___x_1250_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1251_, lean_object* v_key_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1251_, v_key_1252_);
lean_dec_ref(v_key_1252_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(lean_object* v_context_1254_, lean_object* v_d_1255_){
_start:
{
lean_object* v___y_1258_; lean_object* v___y_1259_; lean_object* v___y_1264_; lean_object* v_received_1265_; lean_object* v___y_1284_; lean_object* v_a_1287_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1311_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
lean_inc(v_d_1255_);
v___x_1312_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1255_, v___x_1311_);
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; 
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1313_);
lean_dec_ref_known(v___x_1312_, 1);
v_a_1287_ = v_a_1313_;
goto v___jp_1286_;
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v_a_1314_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1314_);
lean_dec_ref_known(v___x_1312_, 1);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
lean_inc(v_d_1255_);
v___x_1316_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1255_, v___x_1315_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; 
lean_dec(v_a_1314_);
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1316_, 1);
v_a_1287_ = v_a_1317_;
goto v___jp_1286_;
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v_a_1318_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1318_);
lean_dec_ref_known(v___x_1316_, 1);
v___x_1319_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc(v_d_1255_);
v___x_1320_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1255_, v___x_1319_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; 
lean_dec(v_a_1318_);
lean_dec(v_a_1314_);
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v___x_1320_, 1);
v_a_1287_ = v_a_1321_;
goto v___jp_1286_;
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1331_; 
lean_dec(v_d_1255_);
v_a_1322_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1324_ = v___x_1320_;
v_isShared_1325_ = v_isSharedCheck_1331_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1320_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1331_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; uint8_t v___x_1327_; lean_object* v___x_1329_; 
v___x_1326_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1326_, 0, v_a_1318_);
lean_ctor_set(v___x_1326_, 1, v_a_1322_);
v___x_1327_ = lean_unbox(v_a_1314_);
lean_dec(v_a_1314_);
lean_ctor_set_uint8(v___x_1326_, sizeof(void*)*2, v___x_1327_);
if (v_isShared_1325_ == 0)
{
lean_ctor_set_tag(v___x_1324_, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1326_);
v___x_1329_ = v___x_1324_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1326_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
}
v___jp_1257_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1260_ = lean_string_append(v___y_1258_, v___y_1259_);
lean_dec_ref(v___y_1259_);
v___x_1261_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
return v___x_1262_;
}
v___jp_1263_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1266_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1267_ = lean_string_append(v___x_1266_, v_context_1254_);
v___x_1268_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1269_ = lean_string_append(v___x_1267_, v___x_1268_);
v___x_1270_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___x_1271_ = lean_string_append(v___x_1269_, v___x_1270_);
v___x_1272_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1273_ = lean_string_append(v___x_1271_, v___x_1272_);
v___x_1274_ = lean_string_append(v___x_1273_, v_received_1265_);
lean_dec_ref(v_received_1265_);
v___x_1275_ = lean_string_utf8_byte_size(v___y_1264_);
v___x_1276_ = lean_unsigned_to_nat(0u);
v___x_1277_ = lean_nat_dec_eq(v___x_1275_, v___x_1276_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1278_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1));
v___x_1279_ = lean_string_append(v___x_1278_, v___y_1264_);
lean_dec_ref(v___y_1264_);
v___x_1280_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2));
v___x_1281_ = lean_string_append(v___x_1279_, v___x_1280_);
v___y_1258_ = v___x_1274_;
v___y_1259_ = v___x_1281_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1282_; 
lean_dec_ref(v___y_1264_);
v___x_1282_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___y_1258_ = v___x_1274_;
v___y_1259_ = v___x_1282_;
goto v___jp_1257_;
}
}
v___jp_1283_:
{
lean_object* v___x_1285_; 
v___x_1285_ = l_Lasm_JS_Data_describe(v_d_1255_);
v___y_1264_ = v___y_1284_;
v_received_1265_ = v___x_1285_;
goto v___jp_1263_;
}
v___jp_1286_:
{
if (lean_obj_tag(v_d_1255_) == 9)
{
lean_object* v_value_1288_; lean_object* v_description_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v_value_1288_ = lean_ctor_get(v_d_1255_, 0);
v_description_1289_ = lean_ctor_get(v_d_1255_, 1);
v___x_1290_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1291_ = lean_string_dec_eq(v_description_1289_, v___x_1290_);
if (v___x_1291_ == 0)
{
v___y_1284_ = v_a_1287_;
goto v___jp_1283_;
}
else
{
lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1308_; 
lean_inc(v_value_1288_);
v_isSharedCheck_1308_ = !lean_is_exclusive(v_d_1255_);
if (v_isSharedCheck_1308_ == 0)
{
lean_object* v_unused_1309_; lean_object* v_unused_1310_; 
v_unused_1309_ = lean_ctor_get(v_d_1255_, 1);
lean_dec(v_unused_1309_);
v_unused_1310_ = lean_ctor_get(v_d_1255_, 0);
lean_dec(v_unused_1310_);
v___x_1293_ = v_d_1255_;
v_isShared_1294_ = v_isSharedCheck_1308_;
goto v_resetjp_1292_;
}
else
{
lean_dec(v_d_1255_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1308_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
uint32_t v___x_1295_; uint64_t v___x_1296_; lean_object* v___x_1298_; 
v___x_1295_ = 206;
v___x_1296_ = 0ULL;
lean_inc(v_value_1288_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 1, v___x_1290_);
v___x_1298_ = v___x_1293_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_value_1288_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v___x_1290_);
v___x_1298_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
uint32_t v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = lasm_js_value_handle(v_value_1288_);
lean_dec(v_value_1288_);
v___x_1300_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1295_, v___x_1296_, v___x_1298_, v___x_1299_);
lean_dec_ref(v___x_1298_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; uint8_t v___x_1302_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref_known(v___x_1300_, 1);
v___x_1302_ = lean_string_validate_utf8(v_a_1301_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
lean_dec(v_a_1301_);
v___x_1303_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_1304_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1303_);
v___y_1264_ = v_a_1287_;
v_received_1265_ = v___x_1304_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1305_; 
v___x_1305_ = lean_string_from_utf8_unchecked(v_a_1301_);
v___y_1264_ = v_a_1287_;
v_received_1265_ = v___x_1305_;
goto v___jp_1263_;
}
}
else
{
lean_object* v___x_1306_; 
lean_dec_ref_known(v___x_1300_, 1);
v___x_1306_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v___y_1264_ = v_a_1287_;
v_received_1265_ = v___x_1306_;
goto v___jp_1263_;
}
}
}
}
}
else
{
v___y_1284_ = v_a_1287_;
goto v___jp_1283_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1332_, lean_object* v_d_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1332_, v_d_1333_);
lean_dec_ref(v_context_1332_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object* v_args_1336_, lean_object* v_i_1337_){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; uint8_t v___x_1345_; 
v___x_1339_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1340_ = lean_unsigned_to_nat(1u);
v___x_1341_ = lean_nat_add(v_i_1337_, v___x_1340_);
v___x_1342_ = l_Nat_reprFast(v___x_1341_);
v___x_1343_ = lean_string_append(v___x_1339_, v___x_1342_);
lean_dec_ref(v___x_1342_);
v___x_1344_ = lean_array_get_size(v_args_1336_);
v___x_1345_ = lean_nat_dec_lt(v_i_1337_, v___x_1344_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1346_ = lean_box(0);
v___x_1347_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1343_, v___x_1346_);
lean_dec_ref(v___x_1343_);
return v___x_1347_;
}
else
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = lean_array_fget_borrowed(v_args_1336_, v_i_1337_);
lean_inc(v___x_1348_);
v___x_1349_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1343_, v___x_1348_);
lean_dec_ref(v___x_1343_);
return v___x_1349_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object* v_args_1350_, lean_object* v_i_1351_, lean_object* v_a_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1350_, v_i_1351_);
lean_dec(v_i_1351_);
lean_dec_ref(v_args_1350_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(lean_object* v___f_1354_, lean_object* v_args_1355_){
_start:
{
lean_object* v___x_1357_; uint8_t v___x_1358_; lean_object* v_val_1360_; lean_object* v___x_1363_; 
v___x_1357_ = lean_unsigned_to_nat(0u);
v___x_1358_ = 0;
v___x_1363_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1355_, v___x_1357_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1363_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1363_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
lean_ctor_set_tag(v___x_1366_, 1);
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
v_val_1360_ = v___x_1369_;
goto v___jp_1359_;
}
}
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
v_a_1372_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1363_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1363_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
lean_ctor_set_tag(v___x_1374_, 0);
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
v_val_1360_ = v___x_1377_;
goto v___jp_1359_;
}
}
}
v___jp_1359_:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v_val_1360_);
v___x_1362_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1357_, v___x_1358_, v___x_1361_, v___f_1354_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed(lean_object* v___f_1380_, lean_object* v_args_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(v___f_1380_, v_args_1381_);
lean_dec_ref(v_args_1381_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object* v_f_1385_){
_start:
{
lean_object* v___f_1387_; lean_object* v___f_1388_; lean_object* v___f_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___f_1387_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___closed__0));
v___f_1388_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1388_, 0, v_f_1385_);
lean_closure_set(v___f_1388_, 1, v___f_1387_);
v___f_1389_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1389_, 0, v___f_1388_);
v___x_1390_ = lean_unsigned_to_nat(0u);
v___x_1391_ = l_Lasm_JS_Function_ofFn(v___f_1389_, v___x_1390_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; lean_object* v___x_1393_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref_known(v___x_1391_, 1);
v___x_1393_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___x_1393_, 1);
v___x_1395_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1396_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1394_, v___x_1395_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___y_1404_; uint8_t v___x_1431_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
lean_dec_ref_known(v___x_1396_, 1);
v___x_1398_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1399_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_1392_);
v___x_1400_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1400_, 0, v_a_1392_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1402_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1431_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_1404_ = v___x_1432_;
goto v___jp_1403_;
}
else
{
lean_object* v___x_1433_; 
v___x_1433_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_1404_ = v___x_1433_;
goto v___jp_1403_;
}
v___jp_1403_:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
lean_inc(v___y_1404_);
v___x_1405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1402_);
lean_ctor_set(v___x_1405_, 1, v___y_1404_);
v___x_1406_ = lean_box(0);
v___x_1407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1405_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
v___x_1408_ = l_Lasm_JS_obj(v___x_1407_);
v___x_1409_ = lean_unsigned_to_nat(3u);
v___x_1410_ = lean_mk_empty_array_with_capacity(v___x_1409_);
v___x_1411_ = lean_array_push(v___x_1410_, v___x_1400_);
v___x_1412_ = lean_array_push(v___x_1411_, v___x_1401_);
v___x_1413_ = lean_array_push(v___x_1412_, v___x_1408_);
v___x_1414_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1397_, v___x_1398_, v___x_1413_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1421_ == 0)
{
lean_object* v_unused_1422_; 
v_unused_1422_ = lean_ctor_get(v___x_1414_, 0);
lean_dec(v_unused_1422_);
v___x_1416_ = v___x_1414_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_dec(v___x_1414_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v_a_1392_);
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1392_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec(v_a_1392_);
v_a_1423_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1414_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1414_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec(v_a_1392_);
v_a_1434_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1396_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1396_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_dec(v_a_1392_);
v_a_1442_ = lean_ctor_get(v___x_1393_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1393_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1393_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
v_a_1450_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1391_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1391_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object* v_f_1458_, lean_object* v_a_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(v_f_1458_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object* v_f_1461_, lean_object* v_args_1462_){
_start:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1464_ = lean_unsigned_to_nat(0u);
v___x_1465_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1462_, v___x_1464_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_a_1466_; lean_object* v___x_1467_; 
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_a_1466_);
lean_dec_ref_known(v___x_1465_, 1);
v___x_1467_ = lean_apply_2(v_f_1461_, v_a_1466_, lean_box(0));
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1475_; 
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1475_ == 0)
{
lean_object* v_unused_1476_; 
v_unused_1476_ = lean_ctor_get(v___x_1467_, 0);
lean_dec(v_unused_1476_);
v___x_1469_ = v___x_1467_;
v_isShared_1470_ = v_isSharedCheck_1475_;
goto v_resetjp_1468_;
}
else
{
lean_dec(v___x_1467_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1475_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1471_; lean_object* v___x_1473_; 
v___x_1471_ = lean_box(0);
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 0, v___x_1471_);
v___x_1473_ = v___x_1469_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v___x_1471_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
else
{
lean_object* v_a_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1484_; 
v_a_1477_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1479_ = v___x_1467_;
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_a_1477_);
lean_dec(v___x_1467_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1482_; 
if (v_isShared_1480_ == 0)
{
v___x_1482_ = v___x_1479_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_a_1477_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_dec_ref(v_f_1461_);
v_a_1485_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1465_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1465_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
if (v_isShared_1488_ == 0)
{
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1493_, lean_object* v_args_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(v_f_1493_, v_args_1494_);
lean_dec_ref(v_args_1494_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object* v_f_1497_){
_start:
{
lean_object* v___f_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___f_1499_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1499_, 0, v_f_1497_);
v___x_1500_ = lean_unsigned_to_nat(0u);
v___x_1501_ = l_Lasm_JS_Function_ofSyncFn(v___f_1499_, v___x_1500_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1506_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1504_, v___x_1505_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___y_1514_; uint8_t v___x_1541_; 
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
lean_inc(v_a_1507_);
lean_dec_ref_known(v___x_1506_, 1);
v___x_1508_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1509_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_1502_);
v___x_1510_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1510_, 0, v_a_1502_);
lean_ctor_set(v___x_1510_, 1, v___x_1509_);
v___x_1511_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1512_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1541_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1541_ == 0)
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_1514_ = v___x_1542_;
goto v___jp_1513_;
}
else
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_1514_ = v___x_1543_;
goto v___jp_1513_;
}
v___jp_1513_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
lean_inc(v___y_1514_);
v___x_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1512_);
lean_ctor_set(v___x_1515_, 1, v___y_1514_);
v___x_1516_ = lean_box(0);
v___x_1517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1515_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
v___x_1518_ = l_Lasm_JS_obj(v___x_1517_);
v___x_1519_ = lean_unsigned_to_nat(3u);
v___x_1520_ = lean_mk_empty_array_with_capacity(v___x_1519_);
v___x_1521_ = lean_array_push(v___x_1520_, v___x_1510_);
v___x_1522_ = lean_array_push(v___x_1521_, v___x_1511_);
v___x_1523_ = lean_array_push(v___x_1522_, v___x_1518_);
v___x_1524_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1507_, v___x_1508_, v___x_1523_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1531_ == 0)
{
lean_object* v_unused_1532_; 
v_unused_1532_ = lean_ctor_get(v___x_1524_, 0);
lean_dec(v_unused_1532_);
v___x_1526_ = v___x_1524_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_dec(v___x_1524_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 0, v_a_1502_);
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1502_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
lean_dec(v_a_1502_);
v_a_1533_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1524_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1524_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_a_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
lean_dec(v_a_1502_);
v_a_1544_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1506_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1506_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
lean_dec(v_a_1502_);
v_a_1552_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1503_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1503_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
else
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1567_; 
v_a_1560_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1562_ = v___x_1501_;
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1501_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object* v_f_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(v_f_1568_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object* v___f_1577_, lean_object* v___f_1578_, lean_object* v___f_1579_, lean_object* v___f_1580_, lean_object* v___f_1581_, lean_object* v___f_1582_, lean_object* v___f_1583_, lean_object* v_d_1584_){
_start:
{
lean_object* v_signal_1585_; lean_object* v_onError_1586_; lean_object* v_onListen_1587_; lean_object* v_automaticCompression_1588_; lean_object* v_transport_1589_; lean_object* v_port_1590_; lean_object* v_hostname_1591_; lean_object* v_reusePort_1592_; lean_object* v_tcpBacklog_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v_signal_1585_ = lean_ctor_get(v_d_1584_, 0);
lean_inc(v_signal_1585_);
v_onError_1586_ = lean_ctor_get(v_d_1584_, 1);
lean_inc(v_onError_1586_);
v_onListen_1587_ = lean_ctor_get(v_d_1584_, 2);
lean_inc(v_onListen_1587_);
v_automaticCompression_1588_ = lean_ctor_get(v_d_1584_, 3);
lean_inc(v_automaticCompression_1588_);
v_transport_1589_ = lean_ctor_get(v_d_1584_, 4);
lean_inc(v_transport_1589_);
v_port_1590_ = lean_ctor_get(v_d_1584_, 5);
lean_inc(v_port_1590_);
v_hostname_1591_ = lean_ctor_get(v_d_1584_, 6);
lean_inc(v_hostname_1591_);
v_reusePort_1592_ = lean_ctor_get(v_d_1584_, 7);
lean_inc(v_reusePort_1592_);
v_tcpBacklog_1593_ = lean_ctor_get(v_d_1584_, 8);
lean_inc(v_tcpBacklog_1593_);
lean_dec_ref(v_d_1584_);
v___x_1594_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1595_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1577_, v_signal_1585_);
v___x_1596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1598_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1578_, v_onError_1586_);
v___x_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1597_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1601_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1579_, v_onListen_1587_);
v___x_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1600_);
lean_ctor_set(v___x_1602_, 1, v___x_1601_);
v___x_1603_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1580_);
v___x_1604_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1580_, v_automaticCompression_1588_);
v___x_1605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1603_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
v___x_1606_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1607_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1581_, v_transport_1589_);
v___x_1608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1582_);
v___x_1610_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1582_, v_port_1590_);
v___x_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1609_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
v___x_1612_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1613_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1583_, v_hostname_1591_);
v___x_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v___x_1615_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1616_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1580_, v_reusePort_1592_);
v___x_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1615_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1619_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1582_, v_tcpBacklog_1593_);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1618_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
v___x_1621_ = lean_unsigned_to_nat(9u);
v___x_1622_ = lean_mk_empty_array_with_capacity(v___x_1621_);
v___x_1623_ = lean_array_push(v___x_1622_, v___x_1596_);
v___x_1624_ = lean_array_push(v___x_1623_, v___x_1599_);
v___x_1625_ = lean_array_push(v___x_1624_, v___x_1602_);
v___x_1626_ = lean_array_push(v___x_1625_, v___x_1605_);
v___x_1627_ = lean_array_push(v___x_1626_, v___x_1608_);
v___x_1628_ = lean_array_push(v___x_1627_, v___x_1611_);
v___x_1629_ = lean_array_push(v___x_1628_, v___x_1614_);
v___x_1630_ = lean_array_push(v___x_1629_, v___x_1617_);
v___x_1631_ = lean_array_push(v___x_1630_, v___x_1620_);
v___x_1632_ = l_Lasm_JS_Web_Support_fields(v___x_1631_);
lean_dec_ref(v___x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object* v___f_1648_, lean_object* v___f_1649_, lean_object* v___f_1650_, lean_object* v___f_1651_, lean_object* v___f_1652_, lean_object* v___f_1653_, lean_object* v___f_1654_, lean_object* v___f_1655_, lean_object* v_d_1656_){
_start:
{
lean_object* v_signal_1657_; lean_object* v_onError_1658_; lean_object* v_onListen_1659_; lean_object* v_automaticCompression_1660_; lean_object* v_transport_1661_; lean_object* v_port_1662_; lean_object* v_hostname_1663_; lean_object* v_reusePort_1664_; lean_object* v_tcpBacklog_1665_; lean_object* v_keyFormat_1666_; lean_object* v_key_1667_; lean_object* v_cert_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v_signal_1657_ = lean_ctor_get(v_d_1656_, 0);
lean_inc(v_signal_1657_);
v_onError_1658_ = lean_ctor_get(v_d_1656_, 1);
lean_inc(v_onError_1658_);
v_onListen_1659_ = lean_ctor_get(v_d_1656_, 2);
lean_inc(v_onListen_1659_);
v_automaticCompression_1660_ = lean_ctor_get(v_d_1656_, 3);
lean_inc(v_automaticCompression_1660_);
v_transport_1661_ = lean_ctor_get(v_d_1656_, 4);
lean_inc(v_transport_1661_);
v_port_1662_ = lean_ctor_get(v_d_1656_, 5);
lean_inc(v_port_1662_);
v_hostname_1663_ = lean_ctor_get(v_d_1656_, 6);
lean_inc(v_hostname_1663_);
v_reusePort_1664_ = lean_ctor_get(v_d_1656_, 7);
lean_inc(v_reusePort_1664_);
v_tcpBacklog_1665_ = lean_ctor_get(v_d_1656_, 8);
lean_inc(v_tcpBacklog_1665_);
v_keyFormat_1666_ = lean_ctor_get(v_d_1656_, 9);
lean_inc(v_keyFormat_1666_);
v_key_1667_ = lean_ctor_get(v_d_1656_, 10);
lean_inc_ref(v_key_1667_);
v_cert_1668_ = lean_ctor_get(v_d_1656_, 11);
lean_inc_ref(v_cert_1668_);
lean_dec_ref(v_d_1656_);
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1670_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1648_, v_signal_1657_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1673_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1649_, v_onError_1658_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1676_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1650_, v_onListen_1659_);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1675_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1651_);
v___x_1679_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1651_, v_automaticCompression_1660_);
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1678_);
lean_ctor_set(v___x_1680_, 1, v___x_1679_);
v___x_1681_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1682_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1652_, v_transport_1661_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1653_);
v___x_1685_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1653_, v_port_1662_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1684_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1688_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1654_, v_hostname_1663_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1687_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1691_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1651_, v_reusePort_1664_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1690_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
v___x_1693_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1694_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1653_, v_tcpBacklog_1665_);
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1693_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
v___x_1696_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_1697_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1655_, v_keyFormat_1666_);
v___x_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_1700_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1700_, 0, v_key_1667_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1699_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
v___x_1702_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_1703_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1703_, 0, v_cert_1668_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1702_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = lean_unsigned_to_nat(12u);
v___x_1706_ = lean_mk_empty_array_with_capacity(v___x_1705_);
v___x_1707_ = lean_array_push(v___x_1706_, v___x_1671_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1674_);
v___x_1709_ = lean_array_push(v___x_1708_, v___x_1677_);
v___x_1710_ = lean_array_push(v___x_1709_, v___x_1680_);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1683_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1686_);
v___x_1713_ = lean_array_push(v___x_1712_, v___x_1689_);
v___x_1714_ = lean_array_push(v___x_1713_, v___x_1692_);
v___x_1715_ = lean_array_push(v___x_1714_, v___x_1695_);
v___x_1716_ = lean_array_push(v___x_1715_, v___x_1698_);
v___x_1717_ = lean_array_push(v___x_1716_, v___x_1701_);
v___x_1718_ = lean_array_push(v___x_1717_, v___x_1704_);
v___x_1719_ = l_Lasm_JS_Web_Support_fields(v___x_1718_);
lean_dec_ref(v___x_1718_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(lean_object* v_context_1729_, lean_object* v_bytes_1730_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1730_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1734_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_a_1733_);
lean_dec_ref_known(v___x_1732_, 1);
v___x_1734_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1729_, v_a_1733_);
return v___x_1734_;
}
else
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1742_; 
v_a_1735_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1737_ = v___x_1732_;
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v___x_1732_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_a_1735_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0___boxed(lean_object* v_context_1743_, lean_object* v_bytes_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(v_context_1743_, v_bytes_1744_);
lean_dec_ref(v_bytes_1744_);
lean_dec_ref(v_context_1743_);
return v_res_1746_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1747_; uint64_t v___x_1748_; 
v___x_1747_ = 0;
v___x_1748_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1747_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(lean_object* v_o_1750_, lean_object* v_key_1751_){
_start:
{
lean_object* v_k_1753_; lean_object* v___x_1754_; 
v_k_1753_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1753_, 0, v_key_1751_);
v___x_1754_ = l_Lasm_JS_Wire_encodeIO(v_k_1753_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; uint32_t v___x_1756_; uint32_t v___x_1757_; uint64_t v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1755_);
lean_dec_ref_known(v___x_1754_, 1);
v___x_1756_ = 203;
v___x_1757_ = lasm_js_value_handle(v_o_1750_);
v___x_1758_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0);
v___x_1759_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1760_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1760_, 0, v_o_1750_);
lean_ctor_set(v___x_1760_, 1, v___x_1759_);
v___x_1761_ = lean_unsigned_to_nat(2u);
v___x_1762_ = lean_mk_empty_array_with_capacity(v___x_1761_);
lean_inc_ref(v_k_1753_);
v___x_1763_ = lean_array_push(v___x_1762_, v_k_1753_);
v___x_1764_ = lean_array_push(v___x_1763_, v___x_1760_);
v___x_1765_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
v___x_1766_ = lasm_js_call(v___x_1756_, v___x_1757_, v___x_1758_, v_a_1755_, v___x_1765_);
lean_dec_ref_known(v___x_1765_, 1);
lean_dec(v_a_1755_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v___x_1768_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__1));
v___x_1769_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1753_);
v___x_1770_ = lean_string_append(v___x_1768_, v___x_1769_);
lean_dec_ref(v___x_1769_);
v___x_1771_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(v___x_1770_, v_a_1767_);
lean_dec(v_a_1767_);
lean_dec_ref(v___x_1770_);
return v___x_1771_;
}
else
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1779_; 
lean_dec_ref_known(v_k_1753_, 1);
v_a_1772_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1774_ = v___x_1766_;
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1766_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1777_; 
if (v_isShared_1775_ == 0)
{
v___x_1777_ = v___x_1774_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1772_);
v___x_1777_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
return v___x_1777_;
}
}
}
}
else
{
lean_object* v_a_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1787_; 
lean_dec_ref_known(v_k_1753_, 1);
lean_dec(v_o_1750_);
v_a_1780_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1782_ = v___x_1754_;
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_a_1780_);
lean_dec(v___x_1754_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1785_; 
if (v_isShared_1783_ == 0)
{
v___x_1785_ = v___x_1782_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_a_1780_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
return v___x_1785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___boxed(lean_object* v_o_1788_, lean_object* v_key_1789_, lean_object* v_a_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_o_1788_, v_key_1789_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(lean_object* v_self_1793_){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_1796_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_self_1793_, v___x_1795_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___boxed(lean_object* v_self_1797_, lean_object* v_a_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(v_self_1797_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(lean_object* v_x_1800_){
_start:
{
if (lean_obj_tag(v_x_1800_) == 0)
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1810_; 
v_a_1802_ = lean_ctor_get(v_x_1800_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v_x_1800_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1804_ = v_x_1800_;
v_isShared_1805_ = v_isSharedCheck_1810_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v_x_1800_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1810_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1808_; 
v___x_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
return v___x_1808_;
}
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1812_; 
v_a_1811_ = lean_ctor_get(v_x_1800_, 0);
lean_inc(v_a_1811_);
lean_dec_ref_known(v_x_1800_, 1);
v___x_1812_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_1811_);
return v___x_1812_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0___boxed(lean_object* v_x_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(v_x_1813_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed(lean_object* v_self_1818_){
_start:
{
lean_object* v___f_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; lean_object* v_val_1825_; lean_object* v___x_1828_; 
v___f_1820_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__1));
v___x_1822_ = lean_unsigned_to_nat(0u);
v___x_1823_ = 0;
v___x_1828_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1818_, v___x_1821_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1828_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1828_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set_tag(v___x_1831_, 1);
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
v_val_1825_ = v___x_1834_;
goto v___jp_1824_;
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
v_a_1837_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1839_ = v___x_1828_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1828_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
lean_ctor_set_tag(v___x_1839_, 0);
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
v_val_1825_ = v___x_1842_;
goto v___jp_1824_;
}
}
}
v___jp_1824_:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1826_, 0, v_val_1825_);
v___x_1827_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1822_, v___x_1823_, v___x_1826_, v___f_1820_);
return v___x_1827_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___boxed(lean_object* v_self_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed(v_self_1845_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object* v_self_1849_){
_start:
{
lean_object* v___f_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; uint8_t v___x_1854_; lean_object* v_val_1856_; lean_object* v___x_1859_; 
v___f_1851_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_1852_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_1853_ = lean_unsigned_to_nat(0u);
v___x_1854_ = 0;
v___x_1859_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1849_, v___x_1852_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1867_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1862_ = v___x_1859_;
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1859_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1865_; 
if (v_isShared_1863_ == 0)
{
lean_ctor_set_tag(v___x_1862_, 1);
v___x_1865_ = v___x_1862_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1860_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
v_val_1856_ = v___x_1865_;
goto v___jp_1855_;
}
}
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
v_a_1868_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1859_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1859_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
lean_ctor_set_tag(v___x_1870_, 0);
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
v_val_1856_ = v___x_1873_;
goto v___jp_1855_;
}
}
}
v___jp_1855_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1857_, 0, v_val_1856_);
v___x_1858_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1853_, v___x_1854_, v___x_1857_, v___f_1851_);
return v___x_1858_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object* v_self_1876_, lean_object* v_a_1877_){
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_Lasm_JS_Deno_HttpServer_finished(v_self_1876_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr(lean_object* v_self_1880_){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_1883_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_self_1880_, v___x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr___boxed(lean_object* v_self_1884_, lean_object* v_a_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lasm_JS_Deno_HttpServer_addr(v_self_1884_);
return v_res_1886_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2(void){
_start:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1890_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__1));
v___x_1891_ = l_Lasm_JS_Web_Support_args(v___x_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref(lean_object* v_self_1892_){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1894_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_1895_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1896_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1892_, v___x_1894_, v___x_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref___boxed(lean_object* v_self_1897_, lean_object* v_a_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lasm_JS_Deno_HttpServer_ref(v_self_1897_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref(lean_object* v_self_1901_){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1903_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_1904_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1905_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1901_, v___x_1903_, v___x_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref___boxed(lean_object* v_self_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_Lasm_JS_Deno_HttpServer_unref(v_self_1906_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown(lean_object* v_self_1910_){
_start:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1912_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_1913_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1914_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1910_, v___x_1912_, v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___boxed(lean_object* v_self_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lasm_JS_Deno_HttpServer_shutdown(v_self_1915_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve(lean_object* v_handler_1927_){
_start:
{
uint8_t v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1929_ = 0;
v___x_1930_ = lean_unsigned_to_nat(1u);
v___x_1931_ = ((lean_object*)(l_Lasm_JS_Deno_serve___closed__3));
v___x_1932_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1933_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1933_, 0, v_handler_1927_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
v___x_1934_ = lean_mk_empty_array_with_capacity(v___x_1930_);
v___x_1935_ = lean_array_push(v___x_1934_, v___x_1933_);
v___x_1936_ = l_Lasm_JS_Web_Support_args(v___x_1935_);
v___x_1937_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1931_, v___x_1936_, v___x_1929_);
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
v_a_1938_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1937_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1937_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
v_a_1946_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1937_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1937_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve___boxed(lean_object* v_handler_1954_, lean_object* v_a_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lasm_JS_Deno_serve(v_handler_1954_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(lean_object* v_x_1957_){
_start:
{
if (lean_obj_tag(v_x_1957_) == 0)
{
lean_object* v___x_1958_; 
v___x_1958_ = lean_box(0);
return v___x_1958_;
}
else
{
lean_object* v_val_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v_val_1959_ = lean_ctor_get(v_x_1957_, 0);
v___x_1960_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_val_1959_);
v___x_1961_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1961_, 0, v_val_1959_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
return v___x_1961_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0___boxed(lean_object* v_x_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_x_1962_);
lean_dec(v_x_1962_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(lean_object* v_x_1964_){
_start:
{
if (lean_obj_tag(v_x_1964_) == 0)
{
lean_object* v___x_1965_; 
v___x_1965_ = lean_box(0);
return v___x_1965_;
}
else
{
lean_object* v_val_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v_val_1966_ = lean_ctor_get(v_x_1964_, 0);
v___x_1967_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_val_1966_);
v___x_1968_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1968_, 0, v_val_1966_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
return v___x_1968_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1___boxed(lean_object* v_x_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_x_1969_);
lean_dec(v_x_1969_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(lean_object* v_x_1971_){
_start:
{
if (lean_obj_tag(v_x_1971_) == 0)
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_box(0);
return v___x_1972_;
}
else
{
lean_object* v___x_1973_; 
v___x_1973_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_1973_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2___boxed(lean_object* v_x_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_x_1974_);
lean_dec(v_x_1974_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions(lean_object* v_options_1983_, lean_object* v_handler_1984_){
_start:
{
lean_object* v_signal_1986_; lean_object* v_onError_1987_; lean_object* v_onListen_1988_; lean_object* v_automaticCompression_1989_; lean_object* v_transport_1990_; lean_object* v_port_1991_; lean_object* v_hostname_1992_; lean_object* v_reusePort_1993_; lean_object* v_tcpBacklog_1994_; uint8_t v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
v_signal_1986_ = lean_ctor_get(v_options_1983_, 0);
lean_inc(v_signal_1986_);
v_onError_1987_ = lean_ctor_get(v_options_1983_, 1);
lean_inc(v_onError_1987_);
v_onListen_1988_ = lean_ctor_get(v_options_1983_, 2);
lean_inc(v_onListen_1988_);
v_automaticCompression_1989_ = lean_ctor_get(v_options_1983_, 3);
lean_inc(v_automaticCompression_1989_);
v_transport_1990_ = lean_ctor_get(v_options_1983_, 4);
lean_inc(v_transport_1990_);
v_port_1991_ = lean_ctor_get(v_options_1983_, 5);
lean_inc(v_port_1991_);
v_hostname_1992_ = lean_ctor_get(v_options_1983_, 6);
lean_inc(v_hostname_1992_);
v_reusePort_1993_ = lean_ctor_get(v_options_1983_, 7);
lean_inc(v_reusePort_1993_);
v_tcpBacklog_1994_ = lean_ctor_get(v_options_1983_, 8);
lean_inc(v_tcpBacklog_1994_);
lean_dec_ref(v_options_1983_);
v___x_1995_ = 0;
v___x_1996_ = lean_unsigned_to_nat(2u);
v___x_1997_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithOptions___closed__1));
v___x_1998_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1999_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1986_);
lean_dec(v_signal_1986_);
v___x_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1998_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
v___x_2001_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2002_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_1987_);
lean_dec(v_onError_1987_);
v___x_2003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2001_);
lean_ctor_set(v___x_2003_, 1, v___x_2002_);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2005_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_1988_);
lean_dec(v_onListen_1988_);
v___x_2006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2004_);
lean_ctor_set(v___x_2006_, 1, v___x_2005_);
v___x_2007_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2008_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_1989_);
lean_dec(v_automaticCompression_1989_);
v___x_2009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2007_);
lean_ctor_set(v___x_2009_, 1, v___x_2008_);
v___x_2010_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_2011_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_1990_);
lean_dec(v_transport_1990_);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2010_);
lean_ctor_set(v___x_2012_, 1, v___x_2011_);
v___x_2013_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_2014_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_1991_);
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2013_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_2017_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1992_);
v___x_2018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2016_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___x_2019_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_2020_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1993_);
lean_dec(v_reusePort_1993_);
v___x_2021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2019_);
lean_ctor_set(v___x_2021_, 1, v___x_2020_);
v___x_2022_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_2023_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_1994_);
v___x_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2022_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
v___x_2025_ = lean_unsigned_to_nat(9u);
v___x_2026_ = lean_mk_empty_array_with_capacity(v___x_2025_);
v___x_2027_ = lean_array_push(v___x_2026_, v___x_2000_);
v___x_2028_ = lean_array_push(v___x_2027_, v___x_2003_);
v___x_2029_ = lean_array_push(v___x_2028_, v___x_2006_);
v___x_2030_ = lean_array_push(v___x_2029_, v___x_2009_);
v___x_2031_ = lean_array_push(v___x_2030_, v___x_2012_);
v___x_2032_ = lean_array_push(v___x_2031_, v___x_2015_);
v___x_2033_ = lean_array_push(v___x_2032_, v___x_2018_);
v___x_2034_ = lean_array_push(v___x_2033_, v___x_2021_);
v___x_2035_ = lean_array_push(v___x_2034_, v___x_2024_);
v___x_2036_ = l_Lasm_JS_Web_Support_fields(v___x_2035_);
lean_dec_ref(v___x_2035_);
v___x_2037_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_2038_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2038_, 0, v_handler_1984_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = lean_mk_empty_array_with_capacity(v___x_1996_);
v___x_2040_ = lean_array_push(v___x_2039_, v___x_2036_);
v___x_2041_ = lean_array_push(v___x_2040_, v___x_2038_);
v___x_2042_ = l_Lasm_JS_Web_Support_args(v___x_2041_);
v___x_2043_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1997_, v___x_2042_, v___x_1995_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2051_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2046_ = v___x_2043_;
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2043_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2047_ == 0)
{
v___x_2049_ = v___x_2046_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2044_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
else
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2059_; 
v_a_2052_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2054_ = v___x_2043_;
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2043_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_2055_ == 0)
{
v___x_2057_ = v___x_2054_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_a_2052_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions___boxed(lean_object* v_options_2060_, lean_object* v_handler_2061_, lean_object* v_a_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Lasm_JS_Deno_serveWithOptions(v_options_2060_, v_handler_2061_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(lean_object* v_x_2064_){
_start:
{
if (lean_obj_tag(v_x_2064_) == 0)
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_box(0);
return v___x_2065_;
}
else
{
lean_object* v___x_2066_; 
v___x_2066_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_2066_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0___boxed(lean_object* v_x_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_x_2067_);
lean_dec(v_x_2067_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions(lean_object* v_tlsOptions_2076_, lean_object* v_handler_2077_){
_start:
{
lean_object* v_signal_2079_; lean_object* v_onError_2080_; lean_object* v_onListen_2081_; lean_object* v_automaticCompression_2082_; lean_object* v_transport_2083_; lean_object* v_port_2084_; lean_object* v_hostname_2085_; lean_object* v_reusePort_2086_; lean_object* v_tcpBacklog_2087_; lean_object* v_keyFormat_2088_; lean_object* v_key_2089_; lean_object* v_cert_2090_; uint8_t v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v_signal_2079_ = lean_ctor_get(v_tlsOptions_2076_, 0);
lean_inc(v_signal_2079_);
v_onError_2080_ = lean_ctor_get(v_tlsOptions_2076_, 1);
lean_inc(v_onError_2080_);
v_onListen_2081_ = lean_ctor_get(v_tlsOptions_2076_, 2);
lean_inc(v_onListen_2081_);
v_automaticCompression_2082_ = lean_ctor_get(v_tlsOptions_2076_, 3);
lean_inc(v_automaticCompression_2082_);
v_transport_2083_ = lean_ctor_get(v_tlsOptions_2076_, 4);
lean_inc(v_transport_2083_);
v_port_2084_ = lean_ctor_get(v_tlsOptions_2076_, 5);
lean_inc(v_port_2084_);
v_hostname_2085_ = lean_ctor_get(v_tlsOptions_2076_, 6);
lean_inc(v_hostname_2085_);
v_reusePort_2086_ = lean_ctor_get(v_tlsOptions_2076_, 7);
lean_inc(v_reusePort_2086_);
v_tcpBacklog_2087_ = lean_ctor_get(v_tlsOptions_2076_, 8);
lean_inc(v_tcpBacklog_2087_);
v_keyFormat_2088_ = lean_ctor_get(v_tlsOptions_2076_, 9);
lean_inc(v_keyFormat_2088_);
v_key_2089_ = lean_ctor_get(v_tlsOptions_2076_, 10);
lean_inc_ref(v_key_2089_);
v_cert_2090_ = lean_ctor_get(v_tlsOptions_2076_, 11);
lean_inc_ref(v_cert_2090_);
lean_dec_ref(v_tlsOptions_2076_);
v___x_2091_ = 0;
v___x_2092_ = lean_unsigned_to_nat(2u);
v___x_2093_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithTlsOptions___closed__1));
v___x_2094_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_2095_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2079_);
lean_dec(v_signal_2079_);
v___x_2096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2094_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
v___x_2097_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2098_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_2080_);
lean_dec(v_onError_2080_);
v___x_2099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2097_);
lean_ctor_set(v___x_2099_, 1, v___x_2098_);
v___x_2100_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2101_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_2081_);
lean_dec(v_onListen_2081_);
v___x_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2100_);
lean_ctor_set(v___x_2102_, 1, v___x_2101_);
v___x_2103_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2104_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_2082_);
lean_dec(v_automaticCompression_2082_);
v___x_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2103_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_2107_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_2083_);
lean_dec(v_transport_2083_);
v___x_2108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2106_);
lean_ctor_set(v___x_2108_, 1, v___x_2107_);
v___x_2109_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_2110_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_2084_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_2113_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2085_);
v___x_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2112_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_2116_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2086_);
lean_dec(v_reusePort_2086_);
v___x_2117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2115_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_2119_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_2087_);
v___x_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2118_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_2122_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_keyFormat_2088_);
lean_dec(v_keyFormat_2088_);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2121_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_2125_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2125_, 0, v_key_2089_);
v___x_2126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2124_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
v___x_2127_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_2128_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2128_, 0, v_cert_2090_);
v___x_2129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2127_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = lean_unsigned_to_nat(12u);
v___x_2131_ = lean_mk_empty_array_with_capacity(v___x_2130_);
v___x_2132_ = lean_array_push(v___x_2131_, v___x_2096_);
v___x_2133_ = lean_array_push(v___x_2132_, v___x_2099_);
v___x_2134_ = lean_array_push(v___x_2133_, v___x_2102_);
v___x_2135_ = lean_array_push(v___x_2134_, v___x_2105_);
v___x_2136_ = lean_array_push(v___x_2135_, v___x_2108_);
v___x_2137_ = lean_array_push(v___x_2136_, v___x_2111_);
v___x_2138_ = lean_array_push(v___x_2137_, v___x_2114_);
v___x_2139_ = lean_array_push(v___x_2138_, v___x_2117_);
v___x_2140_ = lean_array_push(v___x_2139_, v___x_2120_);
v___x_2141_ = lean_array_push(v___x_2140_, v___x_2123_);
v___x_2142_ = lean_array_push(v___x_2141_, v___x_2126_);
v___x_2143_ = lean_array_push(v___x_2142_, v___x_2129_);
v___x_2144_ = l_Lasm_JS_Web_Support_fields(v___x_2143_);
lean_dec_ref(v___x_2143_);
v___x_2145_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_2146_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2146_, 0, v_handler_2077_);
lean_ctor_set(v___x_2146_, 1, v___x_2145_);
v___x_2147_ = lean_mk_empty_array_with_capacity(v___x_2092_);
v___x_2148_ = lean_array_push(v___x_2147_, v___x_2144_);
v___x_2149_ = lean_array_push(v___x_2148_, v___x_2146_);
v___x_2150_ = l_Lasm_JS_Web_Support_args(v___x_2149_);
v___x_2151_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2093_, v___x_2150_, v___x_2091_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2159_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2154_ = v___x_2151_;
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2151_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2155_ == 0)
{
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2152_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
else
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2167_; 
v_a_2160_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2162_ = v___x_2151_;
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v___x_2151_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2165_; 
if (v_isShared_2163_ == 0)
{
v___x_2165_ = v___x_2162_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_a_2160_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___boxed(lean_object* v_tlsOptions_2168_, lean_object* v_handler_2169_, lean_object* v_a_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Lasm_JS_Deno_serveWithTlsOptions(v_tlsOptions_2168_, v_handler_2169_);
return v_res_2171_;
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
