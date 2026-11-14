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
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7_value;
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
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx___impl(uint8_t v_x_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_box(v_x_29_);
v___x_31_ = lean_obj_tag_nat(v___x_30_);
lean_dec(v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx___impl___boxed(lean_object* v_x_32_){
_start:
{
uint8_t v_x_4__boxed_33_; lean_object* v_res_34_; 
v_x_4__boxed_33_ = lean_unbox(v_x_32_);
v_res_34_ = l_Lasm_JS_Deno_NetAddrTransport_ctorIdx___impl(v_x_4__boxed_33_);
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
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_78_ = lean_box(v_x_76_);
v___x_79_ = lean_obj_tag_nat(v___x_78_);
lean_dec(v___x_78_);
v___x_80_ = lean_box(v_y_77_);
v___x_81_ = lean_obj_tag_nat(v___x_80_);
lean_dec(v___x_80_);
v___x_82_ = lean_nat_dec_eq(v___x_79_, v___x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport_beq___boxed(lean_object* v_x_83_, lean_object* v_y_84_){
_start:
{
uint8_t v_x_24__boxed_85_; uint8_t v_y_25__boxed_86_; uint8_t v_res_87_; lean_object* v_r_88_; 
v_x_24__boxed_85_ = lean_unbox(v_x_83_);
v_y_25__boxed_86_ = lean_unbox(v_y_84_);
v_res_87_ = l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(v_x_24__boxed_85_, v_y_25__boxed_86_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(2u);
v___x_98_ = lean_nat_to_int(v___x_97_);
return v___x_98_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_unsigned_to_nat(1u);
v___x_100_ = lean_nat_to_int(v___x_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr(uint8_t v_x_101_, lean_object* v_prec_102_){
_start:
{
lean_object* v___y_104_; lean_object* v___y_111_; 
if (v_x_101_ == 0)
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(1024u);
v___x_118_ = lean_nat_dec_le(v___x_117_, v_prec_102_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; 
v___x_119_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_104_ = v___x_119_;
goto v___jp_103_;
}
else
{
lean_object* v___x_120_; 
v___x_120_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_104_ = v___x_120_;
goto v___jp_103_;
}
}
else
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1024u);
v___x_122_ = lean_nat_dec_le(v___x_121_, v_prec_102_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_111_ = v___x_123_;
goto v___jp_110_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_111_ = v___x_124_;
goto v___jp_110_;
}
}
v___jp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_105_ = ((lean_object*)(l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__1));
lean_inc(v___y_104_);
v___x_106_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_106_, 0, v___y_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = 0;
v___x_108_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1, v___x_107_);
v___x_109_ = l_Repr_addAppParen(v___x_108_, v_prec_102_);
return v___x_109_;
}
v___jp_110_:
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_112_ = ((lean_object*)(l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__3));
lean_inc(v___y_111_);
v___x_113_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_113_, 0, v___y_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = 0;
v___x_115_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*1, v___x_114_);
v___x_116_ = l_Repr_addAppParen(v___x_115_, v_prec_102_);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___boxed(lean_object* v_x_125_, lean_object* v_prec_126_){
_start:
{
uint8_t v_x_117__boxed_127_; lean_object* v_res_128_; 
v_x_117__boxed_127_ = lean_unbox(v_x_125_);
v_res_128_ = l_Lasm_JS_Deno_instReprNetAddrTransport_repr(v_x_117__boxed_127_, v_prec_126_);
lean_dec(v_prec_126_);
return v_res_128_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default(void){
_start:
{
uint8_t v___x_131_; 
v___x_131_ = 0;
return v___x_131_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedNetAddrTransport(void){
_start:
{
uint8_t v___x_132_; 
v___x_132_ = 0;
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(uint8_t v_x_139_){
_start:
{
if (v_x_139_ == 0)
{
lean_object* v___x_140_; 
v___x_140_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_140_;
}
else
{
lean_object* v___x_141_; 
v___x_141_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__3));
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___boxed(lean_object* v_x_142_){
_start:
{
uint8_t v_x_40__boxed_143_; lean_object* v_res_144_; 
v_x_40__boxed_143_ = lean_unbox(v_x_142_);
v_res_144_ = l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(v_x_40__boxed_143_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(lean_object* v_x_156_){
_start:
{
if (lean_obj_tag(v_x_156_) == 4)
{
lean_object* v_s_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v_s_159_ = lean_ctor_get(v_x_156_, 0);
v___x_160_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_161_ = lean_string_dec_eq(v_s_159_, v___x_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2));
v___x_163_ = lean_string_dec_eq(v_s_159_, v___x_162_);
if (v___x_163_ == 0)
{
goto v___jp_157_;
}
else
{
lean_object* v___x_164_; 
v___x_164_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2));
return v___x_164_;
}
}
else
{
lean_object* v___x_165_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3));
return v___x_165_;
}
}
else
{
goto v___jp_157_;
}
v___jp_157_:
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__1));
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___boxed(lean_object* v_x_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(v_x_166_);
lean_dec(v_x_166_);
return v_res_167_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg(){
_start:
{
uint8_t v___x_176_; 
v___x_176_ = 1;
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg___boxed(lean_object* v___dummy_177_){
_start:
{
uint8_t v_res_178_; lean_object* v_r_179_; 
v_res_178_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg();
v_r_179_ = lean_box(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(lean_object* v_x_180_, lean_object* v_y_181_){
_start:
{
uint8_t v___x_182_; 
v___x_182_ = 1;
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed(lean_object* v_x_183_, lean_object* v_y_184_){
_start:
{
uint8_t v_res_185_; lean_object* v_r_186_; 
v_res_185_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(v_x_183_, v_y_184_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(lean_object* v_prec_192_){
_start:
{
lean_object* v___y_194_; lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_200_ = lean_unsigned_to_nat(1024u);
v___x_201_ = lean_nat_dec_le(v___x_200_, v_prec_192_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; 
v___x_202_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_194_ = v___x_202_;
goto v___jp_193_;
}
else
{
lean_object* v___x_203_; 
v___x_203_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_194_ = v___x_203_;
goto v___jp_193_;
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_195_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__1));
lean_inc(v___y_194_);
v___x_196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_196_, 0, v___y_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = 0;
v___x_198_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set_uint8(v___x_198_, sizeof(void*)*1, v___x_197_);
v___x_199_ = l_Repr_addAppParen(v___x_198_, v_prec_192_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___boxed(lean_object* v_prec_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_204_);
lean_dec(v_prec_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(lean_object* v_x_206_, lean_object* v_prec_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed(lean_object* v_x_209_, lean_object* v_prec_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(v_x_209_, v_prec_210_);
lean_dec(v_prec_210_);
return v_res_211_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(0);
return v___x_214_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport(void){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lean_box(0);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0(lean_object* v_x_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(lean_object* v_x_224_){
_start:
{
if (lean_obj_tag(v_x_224_) == 4)
{
lean_object* v_s_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v_s_227_ = lean_ctor_get(v_x_224_, 0);
v___x_228_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_229_ = lean_string_dec_eq(v_s_227_, v___x_228_);
if (v___x_229_ == 0)
{
goto v___jp_225_;
}
else
{
lean_object* v___x_230_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_230_;
}
}
else
{
goto v___jp_225_;
}
v___jp_225_:
{
lean_object* v___x_226_; 
v___x_226_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0));
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___boxed(lean_object* v_x_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(v_x_231_);
lean_dec(v_x_231_);
return v_res_232_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg(){
_start:
{
uint8_t v___x_241_; 
v___x_241_ = 1;
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg___boxed(lean_object* v___dummy_242_){
_start:
{
uint8_t v_res_243_; lean_object* v_r_244_; 
v_res_243_ = l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg();
v_r_244_ = lean_box(v_res_243_);
return v_r_244_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(lean_object* v_x_245_, lean_object* v_y_246_){
_start:
{
uint8_t v___x_247_; 
v___x_247_ = 1;
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___boxed(lean_object* v_x_248_, lean_object* v_y_249_){
_start:
{
uint8_t v_res_250_; lean_object* v_r_251_; 
v_res_250_ = l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(v_x_248_, v_y_249_);
v_r_251_ = lean_box(v_res_250_);
return v_r_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(lean_object* v_prec_257_){
_start:
{
lean_object* v___y_259_; lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = lean_unsigned_to_nat(1024u);
v___x_266_ = lean_nat_dec_le(v___x_265_, v_prec_257_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; 
v___x_267_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_259_ = v___x_267_;
goto v___jp_258_;
}
else
{
lean_object* v___x_268_; 
v___x_268_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_259_ = v___x_268_;
goto v___jp_258_;
}
v___jp_258_:
{
lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_260_ = ((lean_object*)(l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__1));
lean_inc(v___y_259_);
v___x_261_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_261_, 0, v___y_259_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = 0;
v___x_263_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_263_, 0, v___x_261_);
lean_ctor_set_uint8(v___x_263_, sizeof(void*)*1, v___x_262_);
v___x_264_ = l_Repr_addAppParen(v___x_263_, v_prec_257_);
return v___x_264_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___boxed(lean_object* v_prec_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(v_prec_269_);
lean_dec(v_prec_269_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(lean_object* v_x_271_, lean_object* v_prec_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(v_prec_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___boxed(lean_object* v_x_274_, lean_object* v_prec_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(v_x_274_, v_prec_275_);
lean_dec(v_prec_275_);
return v_res_276_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default(void){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = lean_box(0);
return v___x_279_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat(void){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_box(0);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0(lean_object* v_x_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0(lean_object* v_x_292_){
_start:
{
if (lean_obj_tag(v_x_292_) == 4)
{
lean_object* v_s_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v_s_295_ = lean_ctor_get(v_x_292_, 0);
v___x_296_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0));
v___x_297_ = lean_string_dec_eq(v_s_295_, v___x_296_);
if (v___x_297_ == 0)
{
goto v___jp_293_;
}
else
{
lean_object* v___x_298_; 
v___x_298_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_298_;
}
}
else
{
goto v___jp_293_;
}
v___jp_293_:
{
lean_object* v___x_294_; 
v___x_294_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0));
return v___x_294_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___boxed(lean_object* v_x_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0(v_x_299_);
lean_dec(v_x_299_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(lean_object* v___x_311_, lean_object* v___x_312_, lean_object* v___x_313_, lean_object* v_d_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_316_ = l_Lasm_JS_readField___redArg(v___x_311_, v_d_314_, v___x_315_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
lean_dec_ref(v___x_313_);
lean_dec_ref(v___x_312_);
v_a_317_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_316_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v_a_325_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_325_);
lean_dec_ref_known(v___x_316_, 1);
v___x_326_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_327_ = l_Lasm_JS_readField___redArg(v___x_312_, v_d_314_, v___x_326_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v_a_325_);
lean_dec_ref(v___x_313_);
v_a_328_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_327_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_a_336_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_a_336_);
lean_dec_ref_known(v___x_327_, 1);
v___x_337_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_338_ = l_Lasm_JS_readField___redArg(v___x_313_, v_d_314_, v___x_337_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
lean_dec(v_a_336_);
lean_dec(v_a_325_);
v_a_339_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_338_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_338_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_356_; 
v_a_347_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_356_ == 0)
{
v___x_349_ = v___x_338_;
v_isShared_350_ = v_isSharedCheck_356_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_338_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_356_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; uint8_t v___x_352_; lean_object* v___x_354_; 
v___x_351_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_351_, 0, v_a_336_);
lean_ctor_set(v___x_351_, 1, v_a_347_);
v___x_352_ = lean_unbox(v_a_325_);
lean_dec(v_a_325_);
lean_ctor_set_uint8(v___x_351_, sizeof(void*)*2, v___x_352_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_351_);
v___x_354_ = v___x_349_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_351_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed(lean_object* v___x_357_, lean_object* v___x_358_, lean_object* v___x_359_, lean_object* v_d_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(v___x_357_, v___x_358_, v___x_359_, v_d_360_);
lean_dec(v_d_360_);
return v_res_361_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__0(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___f_365_; 
v___x_362_ = l_Lasm_JS_instFromJSNat;
v___x_363_ = l_Lasm_JS_instFromJSString;
v___x_364_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport));
v___f_365_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed), 4, 3);
lean_closure_set(v___f_365_, 0, v___x_364_);
lean_closure_set(v___f_365_, 1, v___x_363_);
lean_closure_set(v___f_365_, 2, v___x_362_);
return v___f_365_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__2(void){
_start:
{
uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___f_369_; lean_object* v___x_370_; 
v___x_367_ = 0;
v___x_368_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___f_369_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSNetAddr___closed__0, &l_Lasm_JS_Deno_instFromJSNetAddr___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__0);
v___x_370_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_370_, 0, v___f_369_);
lean_ctor_set(v___x_370_, 1, v___x_368_);
lean_ctor_set_uint8(v___x_370_, sizeof(void*)*2, v___x_367_);
return v___x_370_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSNetAddr___closed__2, &l_Lasm_JS_Deno_instFromJSNetAddr___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__2);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object* v_x_379_){
_start:
{
if (lean_obj_tag(v_x_379_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_389_; 
v_a_381_ = lean_ctor_get(v_x_379_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v_x_379_);
if (v_isSharedCheck_389_ == 0)
{
v___x_383_ = v_x_379_;
v_isShared_384_ = v_isSharedCheck_389_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v_x_379_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_389_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_388_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v___x_387_; 
v___x_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
return v___x_387_;
}
}
}
else
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_400_; 
v_a_390_ = lean_ctor_get(v_x_379_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v_x_379_);
if (v_isSharedCheck_400_ == 0)
{
v___x_392_ = v_x_379_;
v_isShared_393_ = v_isSharedCheck_400_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v_x_379_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_400_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_394_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_395_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_395_, 0, v_a_390_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___x_395_);
v___x_397_ = v___x_392_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_395_);
v___x_397_ = v_reuseFailAlloc_399_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; 
v___x_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
return v___x_398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object* v_x_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(v_x_401_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object* v_f_404_, lean_object* v_a_405_, lean_object* v___f_406_, lean_object* v_x_407_){
_start:
{
if (lean_obj_tag(v_x_407_) == 0)
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_417_; 
lean_dec_ref(v___f_406_);
lean_dec(v_a_405_);
lean_dec_ref(v_f_404_);
v_a_409_ = lean_ctor_get(v_x_407_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v_x_407_);
if (v_isSharedCheck_417_ == 0)
{
v___x_411_ = v_x_407_;
v_isShared_412_ = v_isSharedCheck_417_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v_x_407_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_417_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_416_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; 
v___x_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
}
}
else
{
lean_object* v_a_418_; lean_object* v___x_419_; uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_a_418_ = lean_ctor_get(v_x_407_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v_x_407_, 1);
v___x_419_ = lean_unsigned_to_nat(0u);
v___x_420_ = 0;
v___x_421_ = lean_apply_3(v_f_404_, v_a_405_, v_a_418_, lean_box(0));
v___x_422_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_419_, v___x_420_, v___x_421_, v___f_406_);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object* v_f_423_, lean_object* v_a_424_, lean_object* v___f_425_, lean_object* v_x_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(v_f_423_, v_a_424_, v___f_425_, v_x_426_);
return v_res_428_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_435_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___x_436_ = lean_unsigned_to_nat(46u);
v___x_437_ = lean_unsigned_to_nat(193u);
v___x_438_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4));
v___x_439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3));
v___x_440_ = l_mkPanicMessageWithDecl(v___x_439_, v___x_438_, v___x_437_, v___x_436_, v___x_435_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(lean_object* v_context_442_, lean_object* v_d_443_){
_start:
{
lean_object* v_received_446_; 
if (lean_obj_tag(v_d_443_) == 9)
{
lean_object* v_value_460_; lean_object* v___x_461_; 
v_value_460_ = lean_ctor_get(v_d_443_, 0);
lean_inc(v_value_460_);
lean_dec_ref_known(v_d_443_, 2);
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v_value_460_);
return v___x_461_;
}
else
{
if (lean_obj_tag(v_d_443_) == 9)
{
lean_object* v_value_462_; lean_object* v_description_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_value_462_ = lean_ctor_get(v_d_443_, 0);
v_description_463_ = lean_ctor_get(v_d_443_, 1);
v___x_464_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_465_ = lean_string_dec_eq(v_description_463_, v___x_464_);
if (v___x_465_ == 0)
{
goto v___jp_458_;
}
else
{
uint32_t v___x_466_; uint64_t v___x_467_; lean_object* v___x_468_; uint32_t v___x_469_; lean_object* v___x_470_; 
lean_inc_n(v_value_462_, 2);
lean_dec_ref_known(v_d_443_, 2);
v___x_466_ = 206;
v___x_467_ = 0ULL;
v___x_468_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_468_, 0, v_value_462_);
lean_ctor_set(v___x_468_, 1, v___x_464_);
v___x_469_ = lasm_js_value_handle(v_value_462_);
lean_dec(v_value_462_);
v___x_470_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_466_, v___x_467_, v___x_468_, v___x_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; uint8_t v___x_472_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref_known(v___x_470_, 1);
v___x_472_ = lean_string_validate_utf8(v_a_471_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec(v_a_471_);
v___x_473_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6);
v___x_474_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_473_);
v_received_446_ = v___x_474_;
goto v___jp_445_;
}
else
{
lean_object* v___x_475_; 
v___x_475_ = lean_string_from_utf8_unchecked(v_a_471_);
v_received_446_ = v___x_475_;
goto v___jp_445_;
}
}
else
{
lean_object* v___x_476_; 
lean_dec_ref_known(v___x_470_, 1);
v___x_476_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7));
v_received_446_ = v___x_476_;
goto v___jp_445_;
}
}
}
else
{
goto v___jp_458_;
}
}
v___jp_445_:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_447_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_448_ = lean_string_append(v___x_447_, v_context_442_);
v___x_449_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_450_ = lean_string_append(v___x_448_, v___x_449_);
v___x_451_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1));
v___x_452_ = lean_string_append(v___x_450_, v___x_451_);
v___x_453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_454_ = lean_string_append(v___x_452_, v___x_453_);
v___x_455_ = lean_string_append(v___x_454_, v_received_446_);
lean_dec_ref(v_received_446_);
v___x_456_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
v___x_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
v___jp_458_:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lasm_JS_Data_describe(v_d_443_);
v_received_446_ = v___x_459_;
goto v___jp_445_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_477_, lean_object* v_d_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v_context_477_, v_d_478_);
lean_dec_ref(v_context_477_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(lean_object* v_args_482_, lean_object* v_i_483_){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_485_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_add(v_i_483_, v___x_486_);
v___x_488_ = l_Nat_reprFast(v___x_487_);
v___x_489_ = lean_string_append(v___x_485_, v___x_488_);
lean_dec_ref(v___x_488_);
v___x_490_ = lean_array_get_size(v_args_482_);
v___x_491_ = lean_nat_dec_lt(v_i_483_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_box(0);
v___x_493_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_489_, v___x_492_);
lean_dec_ref(v___x_489_);
return v___x_493_;
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_array_fget_borrowed(v_args_482_, v_i_483_);
lean_inc(v___x_494_);
v___x_495_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_489_, v___x_494_);
lean_dec_ref(v___x_489_);
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___boxed(lean_object* v_args_496_, lean_object* v_i_497_, lean_object* v_a_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_496_, v_i_497_);
lean_dec(v_i_497_);
lean_dec_ref(v_args_496_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(lean_object* v_f_500_, lean_object* v___f_501_, lean_object* v_args_502_, lean_object* v_x_503_){
_start:
{
if (lean_obj_tag(v_x_503_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_513_; 
lean_dec_ref(v___f_501_);
lean_dec_ref(v_f_500_);
v_a_505_ = lean_ctor_get(v_x_503_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_503_);
if (v_isSharedCheck_513_ == 0)
{
v___x_507_ = v_x_503_;
v_isShared_508_ = v_isSharedCheck_513_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v_x_503_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_513_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_505_);
v___x_510_ = v_reuseFailAlloc_512_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_511_; 
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_535_; 
v_a_514_ = lean_ctor_get(v_x_503_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v_x_503_);
if (v_isSharedCheck_535_ == 0)
{
v___x_516_ = v_x_503_;
v_isShared_517_ = v_isSharedCheck_535_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v_x_503_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_535_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___f_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; lean_object* v_val_523_; lean_object* v___x_526_; 
v___f_518_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_518_, 0, v_f_500_);
lean_closure_set(v___f_518_, 1, v_a_514_);
lean_closure_set(v___f_518_, 2, v___f_501_);
v___x_519_ = lean_unsigned_to_nat(1u);
v___x_520_ = lean_unsigned_to_nat(0u);
v___x_521_ = 0;
v___x_526_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_502_, v___x_519_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_527_);
lean_dec_ref_known(v___x_526_, 1);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v_a_527_);
v___x_529_ = v___x_516_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_527_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
v_val_523_ = v___x_529_;
goto v___jp_522_;
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_533_; 
v_a_531_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_526_, 1);
if (v_isShared_517_ == 0)
{
lean_ctor_set_tag(v___x_516_, 0);
lean_ctor_set(v___x_516_, 0, v_a_531_);
v___x_533_ = v___x_516_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_531_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
v_val_523_ = v___x_533_;
goto v___jp_522_;
}
}
v___jp_522_:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v_val_523_);
v___x_525_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_520_, v___x_521_, v___x_524_, v___f_518_);
return v___x_525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed(lean_object* v_f_536_, lean_object* v___f_537_, lean_object* v_args_538_, lean_object* v_x_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(v_f_536_, v___f_537_, v_args_538_, v_x_539_);
lean_dec_ref(v_args_538_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(lean_object* v_args_542_, lean_object* v_i_543_){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_545_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_546_ = lean_unsigned_to_nat(1u);
v___x_547_ = lean_nat_add(v_i_543_, v___x_546_);
v___x_548_ = l_Nat_reprFast(v___x_547_);
v___x_549_ = lean_string_append(v___x_545_, v___x_548_);
lean_dec_ref(v___x_548_);
v___x_550_ = lean_array_get_size(v_args_542_);
v___x_551_ = lean_nat_dec_lt(v_i_543_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_box(0);
v___x_553_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_549_, v___x_552_);
lean_dec_ref(v___x_549_);
return v___x_553_;
}
else
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_array_fget_borrowed(v_args_542_, v_i_543_);
lean_inc(v___x_554_);
v___x_555_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_549_, v___x_554_);
lean_dec_ref(v___x_549_);
return v___x_555_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1___boxed(lean_object* v_args_556_, lean_object* v_i_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_556_, v_i_557_);
lean_dec(v_i_557_);
lean_dec_ref(v_args_556_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(lean_object* v_f_560_, lean_object* v___f_561_, lean_object* v_args_562_){
_start:
{
lean_object* v___f_564_; lean_object* v___x_565_; uint8_t v___x_566_; lean_object* v_val_568_; lean_object* v___x_571_; 
lean_inc_ref(v_args_562_);
v___f_564_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_564_, 0, v_f_560_);
lean_closure_set(v___f_564_, 1, v___f_561_);
lean_closure_set(v___f_564_, 2, v_args_562_);
v___x_565_ = lean_unsigned_to_nat(0u);
v___x_566_ = 0;
v___x_571_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_562_, v___x_565_);
lean_dec_ref(v_args_562_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_571_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_571_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set_tag(v___x_574_, 1);
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
v_val_568_ = v___x_577_;
goto v___jp_567_;
}
}
}
else
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
v_a_580_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_571_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_571_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 0);
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_580_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
v_val_568_ = v___x_585_;
goto v___jp_567_;
}
}
}
v___jp_567_:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v_val_568_);
v___x_570_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_565_, v___x_566_, v___x_569_, v___f_564_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed(lean_object* v_f_588_, lean_object* v___f_589_, lean_object* v_args_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(v_f_588_, v___f_589_, v_args_590_);
return v_res_592_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___x_601_ = lean_nat_abs(v___x_600_);
return v___x_601_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_602_ = lean_cstr_to_nat("9007199254740991");
v___x_603_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6);
v___x_604_ = lean_nat_dec_le(v___x_603_, v___x_602_);
return v___x_604_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___x_606_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
return v___x_606_;
}
}
static double _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9(void){
_start:
{
lean_object* v___x_607_; double v___x_608_; 
v___x_607_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___x_608_ = l_Float_ofInt(v___x_607_);
return v___x_608_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10(void){
_start:
{
double v___x_609_; lean_object* v___x_610_; 
v___x_609_ = lean_float_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9);
v___x_610_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_610_, 0, v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object* v_f_611_){
_start:
{
lean_object* v___f_613_; lean_object* v___f_614_; lean_object* v___x_615_; 
v___f_613_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_614_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_614_, 0, v_f_611_);
lean_closure_set(v___f_614_, 1, v___f_613_);
v___x_615_ = l_Lasm_JS_Function_ofFn(v___f_614_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_617_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_616_);
lean_dec_ref_known(v___x_615_, 1);
v___x_617_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_617_, 1);
v___x_619_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_620_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_618_, v___x_619_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___y_628_; uint8_t v___x_655_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_623_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_616_);
v___x_624_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_624_, 0, v_a_616_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_626_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_655_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; 
v___x_656_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_628_ = v___x_656_;
goto v___jp_627_;
}
else
{
lean_object* v___x_657_; 
v___x_657_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_628_ = v___x_657_;
goto v___jp_627_;
}
v___jp_627_:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
lean_inc(v___y_628_);
v___x_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_626_);
lean_ctor_set(v___x_629_, 1, v___y_628_);
v___x_630_ = lean_box(0);
v___x_631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = l_Lasm_JS_obj(v___x_631_);
v___x_633_ = lean_unsigned_to_nat(3u);
v___x_634_ = lean_mk_empty_array_with_capacity(v___x_633_);
v___x_635_ = lean_array_push(v___x_634_, v___x_624_);
v___x_636_ = lean_array_push(v___x_635_, v___x_625_);
v___x_637_ = lean_array_push(v___x_636_, v___x_632_);
v___x_638_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_621_, v___x_622_, v___x_637_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_645_ == 0)
{
lean_object* v_unused_646_; 
v_unused_646_ = lean_ctor_get(v___x_638_, 0);
lean_dec(v_unused_646_);
v___x_640_ = v___x_638_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_dec(v___x_638_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v_a_616_);
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_616_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
lean_dec(v_a_616_);
v_a_647_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_638_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_638_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
else
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
lean_dec(v_a_616_);
v_a_658_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_620_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_620_);
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
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
lean_dec(v_a_616_);
v_a_666_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_617_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_617_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
v_a_674_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_615_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_615_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object* v_f_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lasm_JS_Deno_ServeHandler_ofFn(v_f_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object* v_f_685_, lean_object* v_args_686_){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_686_, v___x_688_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref_known(v___x_689_, 1);
v___x_691_ = lean_unsigned_to_nat(1u);
v___x_692_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_686_, v___x_691_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_694_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_a_693_);
lean_dec_ref_known(v___x_692_, 1);
v___x_694_ = lean_apply_3(v_f_685_, v_a_690_, v_a_693_, lean_box(0));
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_704_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_704_ == 0)
{
v___x_697_ = v___x_694_;
v_isShared_698_ = v_isSharedCheck_704_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_694_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_704_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
v___x_699_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_700_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_700_, 0, v_a_695_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_700_);
v___x_702_ = v___x_697_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_700_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
v_a_705_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_694_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_694_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec(v_a_690_);
lean_dec_ref(v_f_685_);
v_a_713_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_692_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_692_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_dec_ref(v_f_685_);
v_a_721_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_689_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_689_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_729_, lean_object* v_args_730_, lean_object* v___y_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(v_f_729_, v_args_730_);
lean_dec_ref(v_args_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object* v_f_733_){
_start:
{
lean_object* v___f_735_; lean_object* v___x_736_; 
v___f_735_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_735_, 0, v_f_733_);
v___x_736_ = l_Lasm_JS_Function_ofSyncFn(v___f_735_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_738_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v___x_736_, 1);
v___x_738_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_738_, 1);
v___x_740_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_741_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_739_, v___x_740_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___y_749_; uint8_t v___x_776_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_744_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_737_);
v___x_745_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_745_, 0, v_a_737_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_747_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_776_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; 
v___x_777_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_749_ = v___x_777_;
goto v___jp_748_;
}
else
{
lean_object* v___x_778_; 
v___x_778_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_749_ = v___x_778_;
goto v___jp_748_;
}
v___jp_748_:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
lean_inc(v___y_749_);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_747_);
lean_ctor_set(v___x_750_, 1, v___y_749_);
v___x_751_ = lean_box(0);
v___x_752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_750_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
v___x_753_ = l_Lasm_JS_obj(v___x_752_);
v___x_754_ = lean_unsigned_to_nat(3u);
v___x_755_ = lean_mk_empty_array_with_capacity(v___x_754_);
v___x_756_ = lean_array_push(v___x_755_, v___x_745_);
v___x_757_ = lean_array_push(v___x_756_, v___x_746_);
v___x_758_ = lean_array_push(v___x_757_, v___x_753_);
v___x_759_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_742_, v___x_743_, v___x_758_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_766_ == 0)
{
lean_object* v_unused_767_; 
v_unused_767_ = lean_ctor_get(v___x_759_, 0);
lean_dec(v_unused_767_);
v___x_761_ = v___x_759_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_dec(v___x_759_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v_a_737_);
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_737_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec(v_a_737_);
v_a_768_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_759_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_759_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v_a_737_);
v_a_779_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_741_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_741_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec(v_a_737_);
v_a_787_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_738_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_738_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
v_a_795_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_736_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_736_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object* v_f_803_, lean_object* v_a_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn(v_f_803_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(lean_object* v_f_813_, lean_object* v___f_814_, lean_object* v_x_815_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v___x_817_; 
lean_dec_ref(v___f_814_);
lean_dec_ref(v_f_813_);
v___x_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_817_, 0, v_x_815_);
return v___x_817_;
}
else
{
lean_object* v_a_818_; lean_object* v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_a_818_ = lean_ctor_get(v_x_815_, 0);
lean_inc(v_a_818_);
lean_dec_ref_known(v_x_815_, 1);
v___x_819_ = lean_unsigned_to_nat(0u);
v___x_820_ = 0;
v___x_821_ = lean_apply_2(v_f_813_, v_a_818_, lean_box(0));
v___x_822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_819_, v___x_820_, v___x_821_, v___f_814_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed(lean_object* v_f_823_, lean_object* v___f_824_, lean_object* v_x_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(v_f_823_, v___f_824_, v_x_825_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(lean_object* v___f_828_, lean_object* v_args_829_){
_start:
{
lean_object* v___x_831_; uint8_t v___x_832_; lean_object* v_val_834_; lean_object* v___x_837_; lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = 0;
v___x_837_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_829_, v___x_831_);
v_a_838_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_837_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_837_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v___jp_833_:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_835_, 0, v_val_834_);
v___x_836_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_831_, v___x_832_, v___x_835_, v___f_828_);
return v___x_836_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
lean_ctor_set_tag(v___x_840_, 1);
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
v_val_834_ = v___x_843_;
goto v___jp_833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed(lean_object* v___f_846_, lean_object* v_args_847_, lean_object* v___y_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(v___f_846_, v_args_847_);
lean_dec_ref(v_args_847_);
return v_res_849_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_851_ = lean_nat_abs(v___x_850_);
return v___x_851_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_852_ = lean_cstr_to_nat("9007199254740991");
v___x_853_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__0);
v___x_854_ = lean_nat_dec_le(v___x_853_, v___x_852_);
return v___x_854_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_856_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
static double _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3(void){
_start:
{
lean_object* v___x_857_; double v___x_858_; 
v___x_857_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___x_858_ = l_Float_ofInt(v___x_857_);
return v___x_858_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4(void){
_start:
{
double v___x_859_; lean_object* v___x_860_; 
v___x_859_ = lean_float_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__3);
v___x_860_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_860_, 0, v___x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object* v_f_861_){
_start:
{
lean_object* v___f_863_; lean_object* v___f_864_; lean_object* v___f_865_; lean_object* v___x_866_; 
v___f_863_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_864_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_864_, 0, v_f_861_);
lean_closure_set(v___f_864_, 1, v___f_863_);
v___f_865_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_865_, 0, v___f_864_);
v___x_866_ = l_Lasm_JS_Function_ofFn(v___f_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
v___x_868_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_871_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_869_, v___x_870_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___y_879_; uint8_t v___x_906_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v___x_873_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_874_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_867_);
v___x_875_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_875_, 0, v_a_867_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_877_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_906_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; 
v___x_907_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_879_ = v___x_907_;
goto v___jp_878_;
}
else
{
lean_object* v___x_908_; 
v___x_908_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_879_ = v___x_908_;
goto v___jp_878_;
}
v___jp_878_:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
lean_inc(v___y_879_);
v___x_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_877_);
lean_ctor_set(v___x_880_, 1, v___y_879_);
v___x_881_ = lean_box(0);
v___x_882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_880_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = l_Lasm_JS_obj(v___x_882_);
v___x_884_ = lean_unsigned_to_nat(3u);
v___x_885_ = lean_mk_empty_array_with_capacity(v___x_884_);
v___x_886_ = lean_array_push(v___x_885_, v___x_875_);
v___x_887_ = lean_array_push(v___x_886_, v___x_876_);
v___x_888_ = lean_array_push(v___x_887_, v___x_883_);
v___x_889_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_872_, v___x_873_, v___x_888_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; 
v_unused_897_ = lean_ctor_get(v___x_889_, 0);
lean_dec(v_unused_897_);
v___x_891_ = v___x_889_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_dec(v___x_889_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v_a_867_);
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_867_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_dec(v_a_867_);
v_a_898_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_889_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_889_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v_a_867_);
v_a_909_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_871_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_871_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_a_867_);
v_a_917_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_868_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_868_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
v_a_925_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_866_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_866_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object* v_f_933_, lean_object* v_a_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(v_f_933_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(lean_object* v_f_936_, lean_object* v_args_937_){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v_a_941_; lean_object* v___x_942_; 
v___x_939_ = lean_unsigned_to_nat(0u);
v___x_940_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_937_, v___x_939_);
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref(v___x_940_);
v___x_942_ = lean_apply_2(v_f_936_, v_a_941_, lean_box(0));
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_952_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_952_ == 0)
{
v___x_945_ = v___x_942_;
v_isShared_946_ = v_isSharedCheck_952_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_942_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_952_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
v___x_947_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_948_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_948_, 0, v_a_943_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_948_);
v___x_950_ = v___x_945_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
v_a_953_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_942_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_942_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed(lean_object* v_f_961_, lean_object* v_args_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(v_f_961_, v_args_962_);
lean_dec_ref(v_args_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object* v_f_965_){
_start:
{
lean_object* v___f_967_; lean_object* v___x_968_; 
v___f_967_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_967_, 0, v_f_965_);
v___x_968_ = l_Lasm_JS_Function_ofSyncFn(v___f_967_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_970_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v___x_970_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_970_, 1);
v___x_972_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_973_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_971_, v___x_972_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___y_981_; uint8_t v___x_1008_; 
v_a_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_a_974_);
lean_dec_ref_known(v___x_973_, 1);
v___x_975_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_976_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_969_);
v___x_977_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_977_, 0, v_a_969_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_979_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1008_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_981_ = v___x_1009_;
goto v___jp_980_;
}
else
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_981_ = v___x_1010_;
goto v___jp_980_;
}
v___jp_980_:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
lean_inc(v___y_981_);
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_979_);
lean_ctor_set(v___x_982_, 1, v___y_981_);
v___x_983_ = lean_box(0);
v___x_984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = l_Lasm_JS_obj(v___x_984_);
v___x_986_ = lean_unsigned_to_nat(3u);
v___x_987_ = lean_mk_empty_array_with_capacity(v___x_986_);
v___x_988_ = lean_array_push(v___x_987_, v___x_977_);
v___x_989_ = lean_array_push(v___x_988_, v___x_978_);
v___x_990_ = lean_array_push(v___x_989_, v___x_985_);
v___x_991_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_974_, v___x_975_, v___x_990_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_998_ == 0)
{
lean_object* v_unused_999_; 
v_unused_999_ = lean_ctor_get(v___x_991_, 0);
lean_dec(v_unused_999_);
v___x_993_ = v___x_991_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_dec(v___x_991_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v_a_969_);
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_969_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec(v_a_969_);
v_a_1000_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_991_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_991_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
lean_dec(v_a_969_);
v_a_1011_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_973_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_973_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
lean_dec(v_a_969_);
v_a_1019_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_970_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_970_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
v_a_1027_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_968_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_968_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object* v_f_1035_, lean_object* v_a_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(v_f_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object* v_x_1049_){
_start:
{
if (lean_obj_tag(v_x_1049_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1059_; 
v_a_1051_ = lean_ctor_get(v_x_1049_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_x_1049_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1053_ = v_x_1049_;
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v_x_1049_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
return v___x_1057_;
}
}
}
else
{
lean_object* v___x_1060_; 
lean_dec_ref_known(v_x_1049_, 1);
v___x_1060_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__1));
return v___x_1060_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object* v_x_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(v_x_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object* v_f_1064_, lean_object* v___f_1065_, lean_object* v_x_1066_){
_start:
{
if (lean_obj_tag(v_x_1066_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1076_; 
lean_dec_ref(v___f_1065_);
lean_dec_ref(v_f_1064_);
v_a_1068_ = lean_ctor_get(v_x_1066_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_x_1066_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1070_ = v_x_1066_;
v_isShared_1071_ = v_isSharedCheck_1076_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v_x_1066_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1076_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
return v___x_1074_;
}
}
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_a_1077_ = lean_ctor_get(v_x_1066_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v_x_1066_, 1);
v___x_1078_ = lean_unsigned_to_nat(0u);
v___x_1079_ = 0;
v___x_1080_ = lean_apply_2(v_f_1064_, v_a_1077_, lean_box(0));
v___x_1081_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1078_, v___x_1079_, v___x_1080_, v___f_1065_);
return v___x_1081_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object* v_f_1082_, lean_object* v___f_1083_, lean_object* v_x_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(v_f_1082_, v___f_1083_, v_x_1084_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(lean_object* v_d_1094_, lean_object* v_key_1095_){
_start:
{
if (lean_obj_tag(v_d_1094_) == 8)
{
lean_object* v___x_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1121_; 
v___x_1096_ = l_Lasm_JS_Data_field(v_d_1094_, v_key_1095_);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_d_1094_);
if (v_isSharedCheck_1121_ == 0)
{
lean_object* v_unused_1122_; 
v_unused_1122_ = lean_ctor_get(v_d_1094_, 0);
lean_dec(v_unused_1122_);
v___x_1098_ = v_d_1094_;
v_isShared_1099_ = v_isSharedCheck_1121_;
goto v_resetjp_1097_;
}
else
{
lean_dec(v_d_1094_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1121_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
if (lean_obj_tag(v___x_1096_) == 4)
{
lean_object* v_s_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_del_object(v___x_1098_);
v_s_1100_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1096_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_s_1100_);
lean_dec(v___x_1096_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set_tag(v___x_1102_, 1);
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_s_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
else
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1119_; 
v___x_1108_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1109_ = lean_string_append(v___x_1108_, v_key_1095_);
v___x_1110_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1111_ = lean_string_append(v___x_1109_, v___x_1110_);
v___x_1112_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__2));
v___x_1113_ = lean_string_append(v___x_1111_, v___x_1112_);
v___x_1114_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1115_ = lean_string_append(v___x_1113_, v___x_1114_);
v___x_1116_ = l_Lasm_JS_Data_describe(v___x_1096_);
v___x_1117_ = lean_string_append(v___x_1115_, v___x_1116_);
lean_dec_ref(v___x_1116_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set_tag(v___x_1098_, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1117_);
v___x_1119_ = v___x_1098_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
else
{
lean_object* v___x_1123_; 
lean_dec(v_d_1094_);
v___x_1123_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__5));
return v___x_1123_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1124_, lean_object* v_key_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1124_, v_key_1125_);
lean_dec_ref(v_key_1125_);
return v_res_1126_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1130_ = lean_unsigned_to_nat(0u);
v___x_1131_ = lean_nat_to_int(v___x_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(lean_object* v_d_1136_, lean_object* v_key_1137_){
_start:
{
if (lean_obj_tag(v_d_1136_) == 8)
{
lean_object* v___x_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1181_; 
v___x_1138_ = l_Lasm_JS_Data_field(v_d_1136_, v_key_1137_);
v_isSharedCheck_1181_ = !lean_is_exclusive(v_d_1136_);
if (v_isSharedCheck_1181_ == 0)
{
lean_object* v_unused_1182_; 
v_unused_1182_ = lean_ctor_get(v_d_1136_, 0);
lean_dec(v_unused_1182_);
v___x_1140_ = v_d_1136_;
v_isShared_1141_ = v_isSharedCheck_1181_;
goto v_resetjp_1139_;
}
else
{
lean_dec(v_d_1136_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1181_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v_a_1143_; lean_object* v_a_1169_; 
switch(lean_obj_tag(v___x_1138_))
{
case 3:
{
double v_n_1175_; lean_object* v___x_1176_; 
v_n_1175_ = lean_ctor_get_float(v___x_1138_, 0);
v___x_1176_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1175_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__5));
v_a_1143_ = v___x_1177_;
goto v___jp_1142_;
}
else
{
lean_object* v_val_1178_; 
v_val_1178_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_val_1178_);
lean_dec_ref_known(v___x_1176_, 1);
v_a_1169_ = v_val_1178_;
goto v___jp_1168_;
}
}
case 5:
{
lean_object* v_i_1179_; 
v_i_1179_ = lean_ctor_get(v___x_1138_, 0);
lean_inc(v_i_1179_);
v_a_1169_ = v_i_1179_;
goto v___jp_1168_;
}
default: 
{
lean_object* v___x_1180_; 
v___x_1180_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v_a_1143_ = v___x_1180_;
goto v___jp_1142_;
}
}
v___jp_1142_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1144_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1145_ = lean_string_append(v___x_1144_, v_key_1137_);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1147_ = lean_string_append(v___x_1145_, v___x_1146_);
v___x_1148_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__0));
v___x_1149_ = lean_string_append(v___x_1147_, v___x_1148_);
v___x_1150_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1151_ = lean_string_append(v___x_1149_, v___x_1150_);
v___x_1152_ = l_Lasm_JS_Data_describe(v___x_1138_);
v___x_1153_ = lean_string_append(v___x_1151_, v___x_1152_);
lean_dec_ref(v___x_1152_);
v___x_1154_ = lean_string_utf8_byte_size(v_a_1143_);
v___x_1155_ = lean_unsigned_to_nat(0u);
v___x_1156_ = lean_nat_dec_eq(v___x_1154_, v___x_1155_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1157_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1));
v___x_1158_ = lean_string_append(v___x_1157_, v_a_1143_);
v___x_1159_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2));
v___x_1160_ = lean_string_append(v___x_1158_, v___x_1159_);
v___x_1161_ = lean_string_append(v___x_1153_, v___x_1160_);
lean_dec_ref(v___x_1160_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set_tag(v___x_1140_, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1161_);
v___x_1163_ = v___x_1140_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
else
{
lean_object* v___x_1166_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set_tag(v___x_1140_, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1153_);
v___x_1166_ = v___x_1140_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1153_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
v___jp_1168_:
{
lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1170_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__3);
v___x_1171_ = lean_int_dec_le(v___x_1170_, v_a_1169_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; 
lean_dec(v_a_1169_);
v___x_1172_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__4));
v_a_1143_ = v___x_1172_;
goto v___jp_1142_;
}
else
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
lean_del_object(v___x_1140_);
lean_dec(v___x_1138_);
v___x_1173_ = l_Int_toNat(v_a_1169_);
lean_dec(v_a_1169_);
v___x_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
return v___x_1174_;
}
}
}
}
else
{
lean_object* v___x_1183_; 
lean_dec(v_d_1136_);
v___x_1183_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__6));
return v___x_1183_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___boxed(lean_object* v_d_1184_, lean_object* v_key_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1184_, v_key_1185_);
lean_dec_ref(v_key_1185_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(lean_object* v_d_1190_, lean_object* v_key_1191_){
_start:
{
if (lean_obj_tag(v_d_1190_) == 8)
{
lean_object* v___x_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1219_; 
v___x_1192_ = l_Lasm_JS_Data_field(v_d_1190_, v_key_1191_);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_d_1190_);
if (v_isSharedCheck_1219_ == 0)
{
lean_object* v_unused_1220_; 
v_unused_1220_ = lean_ctor_get(v_d_1190_, 0);
lean_dec(v_unused_1220_);
v___x_1194_ = v_d_1190_;
v_isShared_1195_ = v_isSharedCheck_1219_;
goto v_resetjp_1193_;
}
else
{
lean_dec(v_d_1190_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1219_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
if (lean_obj_tag(v___x_1192_) == 4)
{
lean_object* v_s_1212_; lean_object* v___x_1213_; uint8_t v___x_1214_; 
v_s_1212_ = lean_ctor_get(v___x_1192_, 0);
v___x_1213_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_1214_ = lean_string_dec_eq(v_s_1212_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; uint8_t v___x_1216_; 
v___x_1215_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2));
v___x_1216_ = lean_string_dec_eq(v_s_1212_, v___x_1215_);
if (v___x_1216_ == 0)
{
goto v___jp_1196_;
}
else
{
lean_object* v___x_1217_; 
lean_dec_ref_known(v___x_1192_, 1);
lean_del_object(v___x_1194_);
v___x_1217_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2));
return v___x_1217_;
}
}
else
{
lean_object* v___x_1218_; 
lean_dec_ref_known(v___x_1192_, 1);
lean_del_object(v___x_1194_);
v___x_1218_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3));
return v___x_1218_;
}
}
else
{
goto v___jp_1196_;
}
v___jp_1196_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1197_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_1198_ = lean_string_append(v___x_1197_, v_key_1191_);
v___x_1199_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_1200_ = lean_string_append(v___x_1198_, v___x_1199_);
v___x_1201_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1));
v___x_1202_ = lean_string_append(v___x_1200_, v___x_1201_);
v___x_1203_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_1204_ = lean_string_append(v___x_1202_, v___x_1203_);
v___x_1205_ = l_Lasm_JS_Data_describe(v___x_1192_);
v___x_1206_ = lean_string_append(v___x_1204_, v___x_1205_);
lean_dec_ref(v___x_1205_);
v___x_1207_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__0));
v___x_1208_ = lean_string_append(v___x_1206_, v___x_1207_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set_tag(v___x_1194_, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1208_);
v___x_1210_ = v___x_1194_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
else
{
lean_object* v___x_1221_; 
lean_dec(v_d_1190_);
v___x_1221_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___closed__1));
return v___x_1221_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1222_, lean_object* v_key_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1222_, v_key_1223_);
lean_dec_ref(v_key_1223_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(lean_object* v_context_1225_, lean_object* v_d_1226_){
_start:
{
lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1235_; lean_object* v_received_1236_; lean_object* v___y_1255_; lean_object* v_a_1258_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
lean_inc(v_d_1226_);
v___x_1283_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1226_, v___x_1282_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1283_, 1);
v_a_1258_ = v_a_1284_;
goto v___jp_1257_;
}
else
{
lean_object* v_a_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v_a_1285_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1285_);
lean_dec_ref_known(v___x_1283_, 1);
v___x_1286_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
lean_inc(v_d_1226_);
v___x_1287_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1226_, v___x_1286_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v_a_1288_; 
lean_dec(v_a_1285_);
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1287_, 1);
v_a_1258_ = v_a_1288_;
goto v___jp_1257_;
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_a_1289_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1289_);
lean_dec_ref_known(v___x_1287_, 1);
v___x_1290_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc(v_d_1226_);
v___x_1291_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1226_, v___x_1290_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; 
lean_dec(v_a_1289_);
lean_dec(v_a_1285_);
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
lean_inc(v_a_1292_);
lean_dec_ref_known(v___x_1291_, 1);
v_a_1258_ = v_a_1292_;
goto v___jp_1257_;
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1302_; 
lean_dec(v_d_1226_);
v_a_1293_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1295_ = v___x_1291_;
v_isShared_1296_ = v_isSharedCheck_1302_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1291_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1302_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1297_; uint8_t v___x_1298_; lean_object* v___x_1300_; 
v___x_1297_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1297_, 0, v_a_1289_);
lean_ctor_set(v___x_1297_, 1, v_a_1293_);
v___x_1298_ = lean_unbox(v_a_1285_);
lean_dec(v_a_1285_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*2, v___x_1298_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set_tag(v___x_1295_, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1297_);
v___x_1300_ = v___x_1295_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v___x_1297_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
v___jp_1228_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1231_ = lean_string_append(v___y_1229_, v___y_1230_);
lean_dec_ref(v___y_1230_);
v___x_1232_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
v___x_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
return v___x_1233_;
}
v___jp_1234_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1237_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1238_ = lean_string_append(v___x_1237_, v_context_1225_);
v___x_1239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1240_ = lean_string_append(v___x_1238_, v___x_1239_);
v___x_1241_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___x_1242_ = lean_string_append(v___x_1240_, v___x_1241_);
v___x_1243_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1244_ = lean_string_append(v___x_1242_, v___x_1243_);
v___x_1245_ = lean_string_append(v___x_1244_, v_received_1236_);
lean_dec_ref(v_received_1236_);
v___x_1246_ = lean_string_utf8_byte_size(v___y_1235_);
v___x_1247_ = lean_unsigned_to_nat(0u);
v___x_1248_ = lean_nat_dec_eq(v___x_1246_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1249_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__1));
v___x_1250_ = lean_string_append(v___x_1249_, v___y_1235_);
lean_dec_ref(v___y_1235_);
v___x_1251_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___closed__2));
v___x_1252_ = lean_string_append(v___x_1250_, v___x_1251_);
v___y_1229_ = v___x_1245_;
v___y_1230_ = v___x_1252_;
goto v___jp_1228_;
}
else
{
lean_object* v___x_1253_; 
lean_dec_ref(v___y_1235_);
v___x_1253_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___y_1229_ = v___x_1245_;
v___y_1230_ = v___x_1253_;
goto v___jp_1228_;
}
}
v___jp_1254_:
{
lean_object* v___x_1256_; 
v___x_1256_ = l_Lasm_JS_Data_describe(v_d_1226_);
v___y_1235_ = v___y_1255_;
v_received_1236_ = v___x_1256_;
goto v___jp_1234_;
}
v___jp_1257_:
{
if (lean_obj_tag(v_d_1226_) == 9)
{
lean_object* v_value_1259_; lean_object* v_description_1260_; lean_object* v___x_1261_; uint8_t v___x_1262_; 
v_value_1259_ = lean_ctor_get(v_d_1226_, 0);
v_description_1260_ = lean_ctor_get(v_d_1226_, 1);
v___x_1261_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1262_ = lean_string_dec_eq(v_description_1260_, v___x_1261_);
if (v___x_1262_ == 0)
{
v___y_1255_ = v_a_1258_;
goto v___jp_1254_;
}
else
{
lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1279_; 
lean_inc(v_value_1259_);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_d_1226_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; lean_object* v_unused_1281_; 
v_unused_1280_ = lean_ctor_get(v_d_1226_, 1);
lean_dec(v_unused_1280_);
v_unused_1281_ = lean_ctor_get(v_d_1226_, 0);
lean_dec(v_unused_1281_);
v___x_1264_ = v_d_1226_;
v_isShared_1265_ = v_isSharedCheck_1279_;
goto v_resetjp_1263_;
}
else
{
lean_dec(v_d_1226_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1279_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
uint32_t v___x_1266_; uint64_t v___x_1267_; lean_object* v___x_1269_; 
v___x_1266_ = 206;
v___x_1267_ = 0ULL;
lean_inc(v_value_1259_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 1, v___x_1261_);
v___x_1269_ = v___x_1264_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_value_1259_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v___x_1261_);
v___x_1269_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
uint32_t v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lasm_js_value_handle(v_value_1259_);
lean_dec(v_value_1259_);
v___x_1271_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1266_, v___x_1267_, v___x_1269_, v___x_1270_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; uint8_t v___x_1273_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_a_1272_);
lean_dec_ref_known(v___x_1271_, 1);
v___x_1273_ = lean_string_validate_utf8(v_a_1272_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_dec(v_a_1272_);
v___x_1274_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6);
v___x_1275_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1274_);
v___y_1235_ = v_a_1258_;
v_received_1236_ = v___x_1275_;
goto v___jp_1234_;
}
else
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_string_from_utf8_unchecked(v_a_1272_);
v___y_1235_ = v_a_1258_;
v_received_1236_ = v___x_1276_;
goto v___jp_1234_;
}
}
else
{
lean_object* v___x_1277_; 
lean_dec_ref_known(v___x_1271_, 1);
v___x_1277_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7));
v___y_1235_ = v_a_1258_;
v_received_1236_ = v___x_1277_;
goto v___jp_1234_;
}
}
}
}
}
else
{
v___y_1255_ = v_a_1258_;
goto v___jp_1254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1303_, lean_object* v_d_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1303_, v_d_1304_);
lean_dec_ref(v_context_1303_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object* v_args_1307_, lean_object* v_i_1308_){
_start:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; 
v___x_1310_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1311_ = lean_unsigned_to_nat(1u);
v___x_1312_ = lean_nat_add(v_i_1308_, v___x_1311_);
v___x_1313_ = l_Nat_reprFast(v___x_1312_);
v___x_1314_ = lean_string_append(v___x_1310_, v___x_1313_);
lean_dec_ref(v___x_1313_);
v___x_1315_ = lean_array_get_size(v_args_1307_);
v___x_1316_ = lean_nat_dec_lt(v_i_1308_, v___x_1315_);
if (v___x_1316_ == 0)
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = lean_box(0);
v___x_1318_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1314_, v___x_1317_);
lean_dec_ref(v___x_1314_);
return v___x_1318_;
}
else
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = lean_array_fget_borrowed(v_args_1307_, v_i_1308_);
lean_inc(v___x_1319_);
v___x_1320_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1314_, v___x_1319_);
lean_dec_ref(v___x_1314_);
return v___x_1320_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object* v_args_1321_, lean_object* v_i_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1321_, v_i_1322_);
lean_dec(v_i_1322_);
lean_dec_ref(v_args_1321_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(lean_object* v___f_1325_, lean_object* v_args_1326_){
_start:
{
lean_object* v___x_1328_; uint8_t v___x_1329_; lean_object* v_val_1331_; lean_object* v___x_1334_; 
v___x_1328_ = lean_unsigned_to_nat(0u);
v___x_1329_ = 0;
v___x_1334_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1326_, v___x_1328_);
if (lean_obj_tag(v___x_1334_) == 0)
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
v_a_1335_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1334_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1334_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
lean_ctor_set_tag(v___x_1337_, 1);
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
v_val_1331_ = v___x_1340_;
goto v___jp_1330_;
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
v_a_1343_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1334_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1334_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
lean_ctor_set_tag(v___x_1345_, 0);
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
v_val_1331_ = v___x_1348_;
goto v___jp_1330_;
}
}
}
v___jp_1330_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1332_, 0, v_val_1331_);
v___x_1333_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1328_, v___x_1329_, v___x_1332_, v___f_1325_);
return v___x_1333_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed(lean_object* v___f_1351_, lean_object* v_args_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(v___f_1351_, v_args_1352_);
lean_dec_ref(v_args_1352_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object* v_f_1356_){
_start:
{
lean_object* v___f_1358_; lean_object* v___f_1359_; lean_object* v___f_1360_; lean_object* v___x_1361_; 
v___f_1358_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___closed__0));
v___f_1359_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1359_, 0, v_f_1356_);
lean_closure_set(v___f_1359_, 1, v___f_1358_);
v___f_1360_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1360_, 0, v___f_1359_);
v___x_1361_ = l_Lasm_JS_Function_ofFn(v___f_1360_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1363_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1361_, 1);
v___x_1363_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v_a_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
lean_inc(v_a_1364_);
lean_dec_ref_known(v___x_1363_, 1);
v___x_1365_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1366_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1364_, v___x_1365_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___y_1374_; uint8_t v___x_1401_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v___x_1368_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1369_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_1362_);
v___x_1370_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1370_, 0, v_a_1362_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1372_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1401_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1401_ == 0)
{
lean_object* v___x_1402_; 
v___x_1402_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_1374_ = v___x_1402_;
goto v___jp_1373_;
}
else
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_1374_ = v___x_1403_;
goto v___jp_1373_;
}
v___jp_1373_:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
lean_inc(v___y_1374_);
v___x_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1372_);
lean_ctor_set(v___x_1375_, 1, v___y_1374_);
v___x_1376_ = lean_box(0);
v___x_1377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1375_);
lean_ctor_set(v___x_1377_, 1, v___x_1376_);
v___x_1378_ = l_Lasm_JS_obj(v___x_1377_);
v___x_1379_ = lean_unsigned_to_nat(3u);
v___x_1380_ = lean_mk_empty_array_with_capacity(v___x_1379_);
v___x_1381_ = lean_array_push(v___x_1380_, v___x_1370_);
v___x_1382_ = lean_array_push(v___x_1381_, v___x_1371_);
v___x_1383_ = lean_array_push(v___x_1382_, v___x_1378_);
v___x_1384_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1367_, v___x_1368_, v___x_1383_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1391_ == 0)
{
lean_object* v_unused_1392_; 
v_unused_1392_ = lean_ctor_get(v___x_1384_, 0);
lean_dec(v_unused_1392_);
v___x_1386_ = v___x_1384_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_dec(v___x_1384_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v_a_1362_);
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1362_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
else
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
lean_dec(v_a_1362_);
v_a_1393_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1384_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1384_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec(v_a_1362_);
v_a_1404_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1366_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1366_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_dec(v_a_1362_);
v_a_1412_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1363_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1363_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
else
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1427_; 
v_a_1420_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1422_ = v___x_1361_;
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1361_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1425_; 
if (v_isShared_1423_ == 0)
{
v___x_1425_ = v___x_1422_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_a_1420_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object* v_f_1428_, lean_object* v_a_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(v_f_1428_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object* v_f_1431_, lean_object* v_args_1432_){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = lean_unsigned_to_nat(0u);
v___x_1435_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1432_, v___x_1434_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1437_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1436_);
lean_dec_ref_known(v___x_1435_, 1);
v___x_1437_ = lean_apply_2(v_f_1431_, v_a_1436_, lean_box(0));
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1445_; 
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1445_ == 0)
{
lean_object* v_unused_1446_; 
v_unused_1446_ = lean_ctor_get(v___x_1437_, 0);
lean_dec(v_unused_1446_);
v___x_1439_ = v___x_1437_;
v_isShared_1440_ = v_isSharedCheck_1445_;
goto v_resetjp_1438_;
}
else
{
lean_dec(v___x_1437_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1445_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1441_ = lean_box(0);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 0, v___x_1441_);
v___x_1443_ = v___x_1439_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
v_a_1447_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1437_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1437_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_dec_ref(v_f_1431_);
v_a_1455_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1435_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1435_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1463_, lean_object* v_args_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(v_f_1463_, v_args_1464_);
lean_dec_ref(v_args_1464_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object* v_f_1467_){
_start:
{
lean_object* v___f_1469_; lean_object* v___x_1470_; 
v___f_1469_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1469_, 0, v_f_1467_);
v___x_1470_ = l_Lasm_JS_Function_ofSyncFn(v___f_1469_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1472_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v___x_1470_, 1);
v___x_1472_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1473_);
lean_dec_ref_known(v___x_1472_, 1);
v___x_1474_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1475_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1473_, v___x_1474_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___y_1483_; uint8_t v___x_1510_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v___x_1477_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1478_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_a_1471_);
v___x_1479_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1479_, 0, v_a_1471_);
lean_ctor_set(v___x_1479_, 1, v___x_1478_);
v___x_1480_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1481_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1510_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__1);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__2);
v___y_1483_ = v___x_1511_;
goto v___jp_1482_;
}
else
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___closed__4);
v___y_1483_ = v___x_1512_;
goto v___jp_1482_;
}
v___jp_1482_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_inc(v___y_1483_);
v___x_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1481_);
lean_ctor_set(v___x_1484_, 1, v___y_1483_);
v___x_1485_ = lean_box(0);
v___x_1486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1484_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
v___x_1487_ = l_Lasm_JS_obj(v___x_1486_);
v___x_1488_ = lean_unsigned_to_nat(3u);
v___x_1489_ = lean_mk_empty_array_with_capacity(v___x_1488_);
v___x_1490_ = lean_array_push(v___x_1489_, v___x_1479_);
v___x_1491_ = lean_array_push(v___x_1490_, v___x_1480_);
v___x_1492_ = lean_array_push(v___x_1491_, v___x_1487_);
v___x_1493_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1476_, v___x_1477_, v___x_1492_);
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1500_; 
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1500_ == 0)
{
lean_object* v_unused_1501_; 
v_unused_1501_ = lean_ctor_get(v___x_1493_, 0);
lean_dec(v_unused_1501_);
v___x_1495_ = v___x_1493_;
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
else
{
lean_dec(v___x_1493_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
lean_ctor_set(v___x_1495_, 0, v_a_1471_);
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_a_1471_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
else
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1509_; 
lean_dec(v_a_1471_);
v_a_1502_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1504_ = v___x_1493_;
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1493_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1507_; 
if (v_isShared_1505_ == 0)
{
v___x_1507_ = v___x_1504_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_a_1502_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec(v_a_1471_);
v_a_1513_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1475_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1475_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
else
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1528_; 
lean_dec(v_a_1471_);
v_a_1521_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1523_ = v___x_1472_;
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1472_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1526_; 
if (v_isShared_1524_ == 0)
{
v___x_1526_ = v___x_1523_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1521_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
}
else
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
v_a_1529_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1531_ = v___x_1470_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1470_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_a_1529_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object* v_f_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(v_f_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object* v___f_1546_, lean_object* v___f_1547_, lean_object* v___f_1548_, lean_object* v___f_1549_, lean_object* v___f_1550_, lean_object* v___f_1551_, lean_object* v___f_1552_, lean_object* v_d_1553_){
_start:
{
lean_object* v_signal_1554_; lean_object* v_onError_1555_; lean_object* v_onListen_1556_; lean_object* v_automaticCompression_1557_; lean_object* v_transport_1558_; lean_object* v_port_1559_; lean_object* v_hostname_1560_; lean_object* v_reusePort_1561_; lean_object* v_tcpBacklog_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v_signal_1554_ = lean_ctor_get(v_d_1553_, 0);
lean_inc(v_signal_1554_);
v_onError_1555_ = lean_ctor_get(v_d_1553_, 1);
lean_inc(v_onError_1555_);
v_onListen_1556_ = lean_ctor_get(v_d_1553_, 2);
lean_inc(v_onListen_1556_);
v_automaticCompression_1557_ = lean_ctor_get(v_d_1553_, 3);
lean_inc(v_automaticCompression_1557_);
v_transport_1558_ = lean_ctor_get(v_d_1553_, 4);
lean_inc(v_transport_1558_);
v_port_1559_ = lean_ctor_get(v_d_1553_, 5);
lean_inc(v_port_1559_);
v_hostname_1560_ = lean_ctor_get(v_d_1553_, 6);
lean_inc(v_hostname_1560_);
v_reusePort_1561_ = lean_ctor_get(v_d_1553_, 7);
lean_inc(v_reusePort_1561_);
v_tcpBacklog_1562_ = lean_ctor_get(v_d_1553_, 8);
lean_inc(v_tcpBacklog_1562_);
lean_dec_ref(v_d_1553_);
v___x_1563_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1564_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1546_, v_signal_1554_);
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set(v___x_1565_, 1, v___x_1564_);
v___x_1566_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1567_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1547_, v_onError_1555_);
v___x_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
v___x_1569_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1570_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1548_, v_onListen_1556_);
v___x_1571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1569_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1549_);
v___x_1573_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1549_, v_automaticCompression_1557_);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1572_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
v___x_1575_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1576_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1550_, v_transport_1558_);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1551_);
v___x_1579_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1551_, v_port_1559_);
v___x_1580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1578_);
lean_ctor_set(v___x_1580_, 1, v___x_1579_);
v___x_1581_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1582_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1552_, v_hostname_1560_);
v___x_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1581_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1585_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1549_, v_reusePort_1561_);
v___x_1586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1584_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
v___x_1587_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1588_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1551_, v_tcpBacklog_1562_);
v___x_1589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = lean_unsigned_to_nat(9u);
v___x_1591_ = lean_mk_empty_array_with_capacity(v___x_1590_);
v___x_1592_ = lean_array_push(v___x_1591_, v___x_1565_);
v___x_1593_ = lean_array_push(v___x_1592_, v___x_1568_);
v___x_1594_ = lean_array_push(v___x_1593_, v___x_1571_);
v___x_1595_ = lean_array_push(v___x_1594_, v___x_1574_);
v___x_1596_ = lean_array_push(v___x_1595_, v___x_1577_);
v___x_1597_ = lean_array_push(v___x_1596_, v___x_1580_);
v___x_1598_ = lean_array_push(v___x_1597_, v___x_1583_);
v___x_1599_ = lean_array_push(v___x_1598_, v___x_1586_);
v___x_1600_ = lean_array_push(v___x_1599_, v___x_1589_);
v___x_1601_ = l_Lasm_JS_Web_Support_fields(v___x_1600_);
lean_dec_ref(v___x_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object* v___f_1617_, lean_object* v___f_1618_, lean_object* v___f_1619_, lean_object* v___f_1620_, lean_object* v___f_1621_, lean_object* v___f_1622_, lean_object* v___f_1623_, lean_object* v___f_1624_, lean_object* v_d_1625_){
_start:
{
lean_object* v_signal_1626_; lean_object* v_onError_1627_; lean_object* v_onListen_1628_; lean_object* v_automaticCompression_1629_; lean_object* v_transport_1630_; lean_object* v_port_1631_; lean_object* v_hostname_1632_; lean_object* v_reusePort_1633_; lean_object* v_tcpBacklog_1634_; lean_object* v_keyFormat_1635_; lean_object* v_key_1636_; lean_object* v_cert_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v_signal_1626_ = lean_ctor_get(v_d_1625_, 0);
lean_inc(v_signal_1626_);
v_onError_1627_ = lean_ctor_get(v_d_1625_, 1);
lean_inc(v_onError_1627_);
v_onListen_1628_ = lean_ctor_get(v_d_1625_, 2);
lean_inc(v_onListen_1628_);
v_automaticCompression_1629_ = lean_ctor_get(v_d_1625_, 3);
lean_inc(v_automaticCompression_1629_);
v_transport_1630_ = lean_ctor_get(v_d_1625_, 4);
lean_inc(v_transport_1630_);
v_port_1631_ = lean_ctor_get(v_d_1625_, 5);
lean_inc(v_port_1631_);
v_hostname_1632_ = lean_ctor_get(v_d_1625_, 6);
lean_inc(v_hostname_1632_);
v_reusePort_1633_ = lean_ctor_get(v_d_1625_, 7);
lean_inc(v_reusePort_1633_);
v_tcpBacklog_1634_ = lean_ctor_get(v_d_1625_, 8);
lean_inc(v_tcpBacklog_1634_);
v_keyFormat_1635_ = lean_ctor_get(v_d_1625_, 9);
lean_inc(v_keyFormat_1635_);
v_key_1636_ = lean_ctor_get(v_d_1625_, 10);
lean_inc_ref(v_key_1636_);
v_cert_1637_ = lean_ctor_get(v_d_1625_, 11);
lean_inc_ref(v_cert_1637_);
lean_dec_ref(v_d_1625_);
v___x_1638_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1639_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1617_, v_signal_1626_);
v___x_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1638_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1642_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1618_, v_onError_1627_);
v___x_1643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1641_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
v___x_1644_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1645_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1619_, v_onListen_1628_);
v___x_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1644_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1620_);
v___x_1648_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1620_, v_automaticCompression_1629_);
v___x_1649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1647_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
v___x_1650_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1651_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1621_, v_transport_1630_);
v___x_1652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1650_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1622_);
v___x_1654_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1622_, v_port_1631_);
v___x_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1653_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1657_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1623_, v_hostname_1632_);
v___x_1658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1656_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1660_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1620_, v_reusePort_1633_);
v___x_1661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1659_);
lean_ctor_set(v___x_1661_, 1, v___x_1660_);
v___x_1662_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1663_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1622_, v_tcpBacklog_1634_);
v___x_1664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1662_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
v___x_1665_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_1666_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1624_, v_keyFormat_1635_);
v___x_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1665_);
lean_ctor_set(v___x_1667_, 1, v___x_1666_);
v___x_1668_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_1669_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1669_, 0, v_key_1636_);
v___x_1670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1668_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_1672_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1672_, 0, v_cert_1637_);
v___x_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1671_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___x_1674_ = lean_unsigned_to_nat(12u);
v___x_1675_ = lean_mk_empty_array_with_capacity(v___x_1674_);
v___x_1676_ = lean_array_push(v___x_1675_, v___x_1640_);
v___x_1677_ = lean_array_push(v___x_1676_, v___x_1643_);
v___x_1678_ = lean_array_push(v___x_1677_, v___x_1646_);
v___x_1679_ = lean_array_push(v___x_1678_, v___x_1649_);
v___x_1680_ = lean_array_push(v___x_1679_, v___x_1652_);
v___x_1681_ = lean_array_push(v___x_1680_, v___x_1655_);
v___x_1682_ = lean_array_push(v___x_1681_, v___x_1658_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1661_);
v___x_1684_ = lean_array_push(v___x_1683_, v___x_1664_);
v___x_1685_ = lean_array_push(v___x_1684_, v___x_1667_);
v___x_1686_ = lean_array_push(v___x_1685_, v___x_1670_);
v___x_1687_ = lean_array_push(v___x_1686_, v___x_1673_);
v___x_1688_ = l_Lasm_JS_Web_Support_fields(v___x_1687_);
lean_dec_ref(v___x_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(lean_object* v_context_1698_, lean_object* v_bytes_1699_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1699_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1703_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1702_);
lean_dec_ref_known(v___x_1701_, 1);
v___x_1703_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1698_, v_a_1702_);
return v___x_1703_;
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
v_a_1704_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1706_ = v___x_1701_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1701_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_a_1704_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0___boxed(lean_object* v_context_1712_, lean_object* v_bytes_1713_, lean_object* v_a_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(v_context_1712_, v_bytes_1713_);
lean_dec_ref(v_bytes_1713_);
lean_dec_ref(v_context_1712_);
return v_res_1715_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1716_; uint64_t v___x_1717_; 
v___x_1716_ = 0;
v___x_1717_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1716_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(lean_object* v_o_1719_, lean_object* v_key_1720_){
_start:
{
lean_object* v_k_1722_; lean_object* v___x_1723_; 
v_k_1722_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1722_, 0, v_key_1720_);
lean_inc_ref(v_k_1722_);
v___x_1723_ = l_Lasm_JS_Wire_encodeIO(v_k_1722_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; uint32_t v___x_1725_; uint32_t v___x_1726_; uint64_t v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1725_ = 203;
v___x_1726_ = lasm_js_value_handle(v_o_1719_);
v___x_1727_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__0);
v___x_1728_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1729_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1729_, 0, v_o_1719_);
lean_ctor_set(v___x_1729_, 1, v___x_1728_);
v___x_1730_ = lean_unsigned_to_nat(2u);
v___x_1731_ = lean_mk_empty_array_with_capacity(v___x_1730_);
lean_inc_ref(v_k_1722_);
v___x_1732_ = lean_array_push(v___x_1731_, v_k_1722_);
v___x_1733_ = lean_array_push(v___x_1732_, v___x_1729_);
v___x_1734_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
v___x_1735_ = lasm_js_call(v___x_1725_, v___x_1726_, v___x_1727_, v_a_1724_, v___x_1734_);
lean_dec_ref_known(v___x_1734_, 1);
lean_dec(v_a_1724_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v___x_1737_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___closed__1));
v___x_1738_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1722_);
v___x_1739_ = lean_string_append(v___x_1737_, v___x_1738_);
lean_dec_ref(v___x_1738_);
v___x_1740_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0_spec__0(v___x_1739_, v_a_1736_);
lean_dec(v_a_1736_);
lean_dec_ref(v___x_1739_);
return v___x_1740_;
}
else
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1748_; 
lean_dec_ref_known(v_k_1722_, 1);
v_a_1741_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1743_ = v___x_1735_;
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1735_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1746_; 
if (v_isShared_1744_ == 0)
{
v___x_1746_ = v___x_1743_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_a_1741_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1756_; 
lean_dec_ref_known(v_k_1722_, 1);
lean_dec(v_o_1719_);
v_a_1749_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1723_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1723_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
v___x_1754_ = v___x_1751_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1749_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0___boxed(lean_object* v_o_1757_, lean_object* v_key_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_o_1757_, v_key_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(lean_object* v_self_1762_){
_start:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1764_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_1765_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_self_1762_, v___x_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___boxed(lean_object* v_self_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(v_self_1766_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(lean_object* v_x_1769_){
_start:
{
if (lean_obj_tag(v_x_1769_) == 0)
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1779_; 
v_a_1771_ = lean_ctor_get(v_x_1769_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v_x_1769_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1773_ = v_x_1769_;
v_isShared_1774_ = v_isSharedCheck_1779_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v_x_1769_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1779_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
lean_object* v___x_1777_; 
v___x_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
return v___x_1777_;
}
}
}
else
{
lean_object* v_a_1780_; lean_object* v___x_1781_; 
v_a_1780_ = lean_ctor_get(v_x_1769_, 0);
lean_inc(v_a_1780_);
lean_dec_ref_known(v_x_1769_, 1);
v___x_1781_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_1780_);
return v___x_1781_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0___boxed(lean_object* v_x_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed___lam__0(v_x_1782_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed(lean_object* v_self_1787_){
_start:
{
lean_object* v___f_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; lean_object* v_val_1794_; lean_object* v___x_1797_; 
v___f_1789_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_1790_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__1));
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = 0;
v___x_1797_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1787_, v___x_1790_);
if (lean_obj_tag(v___x_1797_) == 0)
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
v_a_1798_ = lean_ctor_get(v___x_1797_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1797_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1797_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1797_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set_tag(v___x_1800_, 1);
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
v_val_1794_ = v___x_1803_;
goto v___jp_1793_;
}
}
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
v_a_1806_ = lean_ctor_get(v___x_1797_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1797_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1797_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1797_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 0);
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
v_val_1794_ = v___x_1811_;
goto v___jp_1793_;
}
}
}
v___jp_1793_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v_val_1794_);
v___x_1796_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1791_, v___x_1792_, v___x_1795_, v___f_1789_);
return v___x_1796_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___boxed(lean_object* v_self_1814_, lean_object* v_a_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed(v_self_1814_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object* v_self_1818_){
_start:
{
lean_object* v___f_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; lean_object* v_val_1825_; lean_object* v___x_1828_; 
v___f_1820_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object* v_self_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lasm_JS_Deno_HttpServer_finished(v_self_1845_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr(lean_object* v_self_1849_){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_1852_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ServeHandlerInfo_remoteAddr_spec__0(v_self_1849_, v___x_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr___boxed(lean_object* v_self_1853_, lean_object* v_a_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lasm_JS_Deno_HttpServer_addr(v_self_1853_);
return v_res_1855_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2(void){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__1));
v___x_1860_ = l_Lasm_JS_Web_Support_args(v___x_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref(lean_object* v_self_1861_){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1863_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_1864_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1865_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1861_, v___x_1863_, v___x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref___boxed(lean_object* v_self_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l_Lasm_JS_Deno_HttpServer_ref(v_self_1866_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref(lean_object* v_self_1870_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1872_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_1873_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1874_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1870_, v___x_1872_, v___x_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref___boxed(lean_object* v_self_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lasm_JS_Deno_HttpServer_unref(v_self_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown(lean_object* v_self_1879_){
_start:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1881_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_1882_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1883_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1879_, v___x_1881_, v___x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___boxed(lean_object* v_self_1884_, lean_object* v_a_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lasm_JS_Deno_HttpServer_shutdown(v_self_1884_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve(lean_object* v_handler_1896_){
_start:
{
uint8_t v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1898_ = 0;
v___x_1899_ = lean_unsigned_to_nat(1u);
v___x_1900_ = ((lean_object*)(l_Lasm_JS_Deno_serve___closed__3));
v___x_1901_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_1902_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1902_, 0, v_handler_1896_);
lean_ctor_set(v___x_1902_, 1, v___x_1901_);
v___x_1903_ = lean_mk_empty_array_with_capacity(v___x_1899_);
v___x_1904_ = lean_array_push(v___x_1903_, v___x_1902_);
v___x_1905_ = l_Lasm_JS_Web_Support_args(v___x_1904_);
v___x_1906_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1900_, v___x_1905_, v___x_1898_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
v_a_1915_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1906_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1906_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve___boxed(lean_object* v_handler_1923_, lean_object* v_a_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_Lasm_JS_Deno_serve(v_handler_1923_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(lean_object* v_x_1926_){
_start:
{
if (lean_obj_tag(v_x_1926_) == 0)
{
lean_object* v___x_1927_; 
v___x_1927_ = lean_box(0);
return v___x_1927_;
}
else
{
lean_object* v_val_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v_val_1928_ = lean_ctor_get(v_x_1926_, 0);
v___x_1929_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_val_1928_);
v___x_1930_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1930_, 0, v_val_1928_);
lean_ctor_set(v___x_1930_, 1, v___x_1929_);
return v___x_1930_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0___boxed(lean_object* v_x_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_x_1931_);
lean_dec(v_x_1931_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(lean_object* v_x_1933_){
_start:
{
if (lean_obj_tag(v_x_1933_) == 0)
{
lean_object* v___x_1934_; 
v___x_1934_ = lean_box(0);
return v___x_1934_;
}
else
{
lean_object* v_val_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v_val_1935_ = lean_ctor_get(v_x_1933_, 0);
v___x_1936_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_val_1935_);
v___x_1937_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1937_, 0, v_val_1935_);
lean_ctor_set(v___x_1937_, 1, v___x_1936_);
return v___x_1937_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1___boxed(lean_object* v_x_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_x_1938_);
lean_dec(v_x_1938_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(lean_object* v_x_1940_){
_start:
{
if (lean_obj_tag(v_x_1940_) == 0)
{
lean_object* v___x_1941_; 
v___x_1941_ = lean_box(0);
return v___x_1941_;
}
else
{
lean_object* v___x_1942_; 
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_1942_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2___boxed(lean_object* v_x_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_x_1943_);
lean_dec(v_x_1943_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions(lean_object* v_options_1952_, lean_object* v_handler_1953_){
_start:
{
lean_object* v_signal_1955_; lean_object* v_onError_1956_; lean_object* v_onListen_1957_; lean_object* v_automaticCompression_1958_; lean_object* v_transport_1959_; lean_object* v_port_1960_; lean_object* v_hostname_1961_; lean_object* v_reusePort_1962_; lean_object* v_tcpBacklog_1963_; uint8_t v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v_signal_1955_ = lean_ctor_get(v_options_1952_, 0);
lean_inc(v_signal_1955_);
v_onError_1956_ = lean_ctor_get(v_options_1952_, 1);
lean_inc(v_onError_1956_);
v_onListen_1957_ = lean_ctor_get(v_options_1952_, 2);
lean_inc(v_onListen_1957_);
v_automaticCompression_1958_ = lean_ctor_get(v_options_1952_, 3);
lean_inc(v_automaticCompression_1958_);
v_transport_1959_ = lean_ctor_get(v_options_1952_, 4);
lean_inc(v_transport_1959_);
v_port_1960_ = lean_ctor_get(v_options_1952_, 5);
lean_inc(v_port_1960_);
v_hostname_1961_ = lean_ctor_get(v_options_1952_, 6);
lean_inc(v_hostname_1961_);
v_reusePort_1962_ = lean_ctor_get(v_options_1952_, 7);
lean_inc(v_reusePort_1962_);
v_tcpBacklog_1963_ = lean_ctor_get(v_options_1952_, 8);
lean_inc(v_tcpBacklog_1963_);
lean_dec_ref(v_options_1952_);
v___x_1964_ = 0;
v___x_1965_ = lean_unsigned_to_nat(2u);
v___x_1966_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithOptions___closed__1));
v___x_1967_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1968_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1955_);
lean_dec(v_signal_1955_);
v___x_1969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1967_);
lean_ctor_set(v___x_1969_, 1, v___x_1968_);
v___x_1970_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1971_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_1956_);
lean_dec(v_onError_1956_);
v___x_1972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1970_);
lean_ctor_set(v___x_1972_, 1, v___x_1971_);
v___x_1973_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1974_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_1957_);
lean_dec(v_onListen_1957_);
v___x_1975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1973_);
lean_ctor_set(v___x_1975_, 1, v___x_1974_);
v___x_1976_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_1977_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_1958_);
lean_dec(v_automaticCompression_1958_);
v___x_1978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1976_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
v___x_1979_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1980_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_1959_);
lean_dec(v_transport_1959_);
v___x_1981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1979_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1982_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_1983_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_1960_);
v___x_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1982_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1986_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1961_);
v___x_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1985_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1989_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1962_);
lean_dec(v_reusePort_1962_);
v___x_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1988_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1992_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_1963_);
v___x_1993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1991_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
v___x_1994_ = lean_unsigned_to_nat(9u);
v___x_1995_ = lean_mk_empty_array_with_capacity(v___x_1994_);
v___x_1996_ = lean_array_push(v___x_1995_, v___x_1969_);
v___x_1997_ = lean_array_push(v___x_1996_, v___x_1972_);
v___x_1998_ = lean_array_push(v___x_1997_, v___x_1975_);
v___x_1999_ = lean_array_push(v___x_1998_, v___x_1978_);
v___x_2000_ = lean_array_push(v___x_1999_, v___x_1981_);
v___x_2001_ = lean_array_push(v___x_2000_, v___x_1984_);
v___x_2002_ = lean_array_push(v___x_2001_, v___x_1987_);
v___x_2003_ = lean_array_push(v___x_2002_, v___x_1990_);
v___x_2004_ = lean_array_push(v___x_2003_, v___x_1993_);
v___x_2005_ = l_Lasm_JS_Web_Support_fields(v___x_2004_);
lean_dec_ref(v___x_2004_);
v___x_2006_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_2007_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2007_, 0, v_handler_1953_);
lean_ctor_set(v___x_2007_, 1, v___x_2006_);
v___x_2008_ = lean_mk_empty_array_with_capacity(v___x_1965_);
v___x_2009_ = lean_array_push(v___x_2008_, v___x_2005_);
v___x_2010_ = lean_array_push(v___x_2009_, v___x_2007_);
v___x_2011_ = l_Lasm_JS_Web_Support_args(v___x_2010_);
v___x_2012_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1966_, v___x_2011_, v___x_1964_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_2012_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_2012_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
v_a_2021_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2012_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2012_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions___boxed(lean_object* v_options_2029_, lean_object* v_handler_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lasm_JS_Deno_serveWithOptions(v_options_2029_, v_handler_2030_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(lean_object* v_x_2033_){
_start:
{
if (lean_obj_tag(v_x_2033_) == 0)
{
lean_object* v___x_2034_; 
v___x_2034_ = lean_box(0);
return v___x_2034_;
}
else
{
lean_object* v___x_2035_; 
v___x_2035_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_2035_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0___boxed(lean_object* v_x_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_x_2036_);
lean_dec(v_x_2036_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions(lean_object* v_tlsOptions_2045_, lean_object* v_handler_2046_){
_start:
{
lean_object* v_signal_2048_; lean_object* v_onError_2049_; lean_object* v_onListen_2050_; lean_object* v_automaticCompression_2051_; lean_object* v_transport_2052_; lean_object* v_port_2053_; lean_object* v_hostname_2054_; lean_object* v_reusePort_2055_; lean_object* v_tcpBacklog_2056_; lean_object* v_keyFormat_2057_; lean_object* v_key_2058_; lean_object* v_cert_2059_; uint8_t v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v_signal_2048_ = lean_ctor_get(v_tlsOptions_2045_, 0);
lean_inc(v_signal_2048_);
v_onError_2049_ = lean_ctor_get(v_tlsOptions_2045_, 1);
lean_inc(v_onError_2049_);
v_onListen_2050_ = lean_ctor_get(v_tlsOptions_2045_, 2);
lean_inc(v_onListen_2050_);
v_automaticCompression_2051_ = lean_ctor_get(v_tlsOptions_2045_, 3);
lean_inc(v_automaticCompression_2051_);
v_transport_2052_ = lean_ctor_get(v_tlsOptions_2045_, 4);
lean_inc(v_transport_2052_);
v_port_2053_ = lean_ctor_get(v_tlsOptions_2045_, 5);
lean_inc(v_port_2053_);
v_hostname_2054_ = lean_ctor_get(v_tlsOptions_2045_, 6);
lean_inc(v_hostname_2054_);
v_reusePort_2055_ = lean_ctor_get(v_tlsOptions_2045_, 7);
lean_inc(v_reusePort_2055_);
v_tcpBacklog_2056_ = lean_ctor_get(v_tlsOptions_2045_, 8);
lean_inc(v_tcpBacklog_2056_);
v_keyFormat_2057_ = lean_ctor_get(v_tlsOptions_2045_, 9);
lean_inc(v_keyFormat_2057_);
v_key_2058_ = lean_ctor_get(v_tlsOptions_2045_, 10);
lean_inc_ref(v_key_2058_);
v_cert_2059_ = lean_ctor_get(v_tlsOptions_2045_, 11);
lean_inc_ref(v_cert_2059_);
lean_dec_ref(v_tlsOptions_2045_);
v___x_2060_ = 0;
v___x_2061_ = lean_unsigned_to_nat(2u);
v___x_2062_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithTlsOptions___closed__1));
v___x_2063_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_2064_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2048_);
lean_dec(v_signal_2048_);
v___x_2065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2063_);
lean_ctor_set(v___x_2065_, 1, v___x_2064_);
v___x_2066_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2067_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_2049_);
lean_dec(v_onError_2049_);
v___x_2068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2066_);
lean_ctor_set(v___x_2068_, 1, v___x_2067_);
v___x_2069_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2070_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_2050_);
lean_dec(v_onListen_2050_);
v___x_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2069_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
v___x_2072_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2073_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_2051_);
lean_dec(v_automaticCompression_2051_);
v___x_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2072_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_2076_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_2052_);
lean_dec(v_transport_2052_);
v___x_2077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2075_);
lean_ctor_set(v___x_2077_, 1, v___x_2076_);
v___x_2078_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_2079_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_2053_);
v___x_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2078_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___x_2081_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_2082_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2054_);
v___x_2083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2081_);
lean_ctor_set(v___x_2083_, 1, v___x_2082_);
v___x_2084_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_2085_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2055_);
lean_dec(v_reusePort_2055_);
v___x_2086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2084_);
lean_ctor_set(v___x_2086_, 1, v___x_2085_);
v___x_2087_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_2088_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_2056_);
v___x_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2087_);
lean_ctor_set(v___x_2089_, 1, v___x_2088_);
v___x_2090_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_2091_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_keyFormat_2057_);
lean_dec(v_keyFormat_2057_);
v___x_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2090_);
lean_ctor_set(v___x_2092_, 1, v___x_2091_);
v___x_2093_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_2094_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2094_, 0, v_key_2058_);
v___x_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2093_);
lean_ctor_set(v___x_2095_, 1, v___x_2094_);
v___x_2096_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_2097_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2097_, 0, v_cert_2059_);
v___x_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2096_);
lean_ctor_set(v___x_2098_, 1, v___x_2097_);
v___x_2099_ = lean_unsigned_to_nat(12u);
v___x_2100_ = lean_mk_empty_array_with_capacity(v___x_2099_);
v___x_2101_ = lean_array_push(v___x_2100_, v___x_2065_);
v___x_2102_ = lean_array_push(v___x_2101_, v___x_2068_);
v___x_2103_ = lean_array_push(v___x_2102_, v___x_2071_);
v___x_2104_ = lean_array_push(v___x_2103_, v___x_2074_);
v___x_2105_ = lean_array_push(v___x_2104_, v___x_2077_);
v___x_2106_ = lean_array_push(v___x_2105_, v___x_2080_);
v___x_2107_ = lean_array_push(v___x_2106_, v___x_2083_);
v___x_2108_ = lean_array_push(v___x_2107_, v___x_2086_);
v___x_2109_ = lean_array_push(v___x_2108_, v___x_2089_);
v___x_2110_ = lean_array_push(v___x_2109_, v___x_2092_);
v___x_2111_ = lean_array_push(v___x_2110_, v___x_2095_);
v___x_2112_ = lean_array_push(v___x_2111_, v___x_2098_);
v___x_2113_ = l_Lasm_JS_Web_Support_fields(v___x_2112_);
lean_dec_ref(v___x_2112_);
v___x_2114_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0___closed__0));
v___x_2115_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2115_, 0, v_handler_2046_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___x_2116_ = lean_mk_empty_array_with_capacity(v___x_2061_);
v___x_2117_ = lean_array_push(v___x_2116_, v___x_2113_);
v___x_2118_ = lean_array_push(v___x_2117_, v___x_2115_);
v___x_2119_ = l_Lasm_JS_Web_Support_args(v___x_2118_);
v___x_2120_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2062_, v___x_2119_, v___x_2060_);
if (lean_obj_tag(v___x_2120_) == 0)
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
v_a_2121_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2120_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2120_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
v_a_2129_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2120_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2120_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___boxed(lean_object* v_tlsOptions_2137_, lean_object* v_handler_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Lasm_JS_Deno_serveWithTlsOptions(v_tlsOptions_2137_, v_handler_2138_);
return v_res_2140_;
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
