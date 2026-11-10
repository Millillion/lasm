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
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSNat;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lasm_JS_instFromJSValue;
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSHttpServer___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSHttpServer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSHttpServer___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSHttpServer = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSHttpServer___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSHttpServer___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSHttpServer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Deno.HttpServer"};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSHttpServer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSHttpServer = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__2_value;
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
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "remoteAddr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "completed"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.ServeHandlerInfo"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.ServeHandler"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeHandler = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandler___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lasm.JS.Value"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__3_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__4;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__7_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__0;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__1;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__2_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__3;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsOnError = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Deno.ServeOptionsOnError"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
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
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsOnListen = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.ServeOptionsOnListen"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
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
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0, .m_arity = 8, .m_num_fixed = 7, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__3_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__4_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "keyFormat"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cert"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*8, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0, .m_arity = 9, .m_num_fixed = 8, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__3_value),((lean_object*)&l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_HttpServer_finished___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_HttpServer_finished___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_HttpServer_finished___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_HttpServer_finished___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_HttpServer_finished___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "finished"};
static const lean_object* l_Lasm_JS_Deno_HttpServer_finished___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_HttpServer_finished___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSHttpServer___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSHttpServer___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpServer___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Deno_instFromJSHttpServer___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(uint8_t v_x_22_){
_start:
{
if (v_x_22_ == 0)
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(0u);
return v___x_23_;
}
else
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(1u);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorIdx___boxed(lean_object* v_x_25_){
_start:
{
uint8_t v_x_boxed_26_; lean_object* v_res_27_; 
v_x_boxed_26_ = lean_unbox(v_x_25_);
v_res_27_ = l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(v_x_boxed_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___redArg(lean_object* v_k_28_){
_start:
{
lean_inc(v_k_28_);
return v_k_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___redArg___boxed(lean_object* v_k_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lasm_JS_Deno_NetAddrTransport_ctorElim___redArg(v_k_29_);
lean_dec(v_k_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, uint8_t v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_inc(v_k_35_);
return v_k_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_ctorElim___boxed(lean_object* v_motive_36_, lean_object* v_ctorIdx_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_k_40_){
_start:
{
uint8_t v_t_boxed_41_; lean_object* v_res_42_; 
v_t_boxed_41_ = lean_unbox(v_t_38_);
v_res_42_ = l_Lasm_JS_Deno_NetAddrTransport_ctorElim(v_motive_36_, v_ctorIdx_37_, v_t_boxed_41_, v_h_39_, v_k_40_);
lean_dec(v_k_40_);
lean_dec(v_ctorIdx_37_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___redArg(lean_object* v_tcp_43_){
_start:
{
lean_inc(v_tcp_43_);
return v_tcp_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___redArg___boxed(lean_object* v_tcp_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___redArg(v_tcp_44_);
lean_dec(v_tcp_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim(lean_object* v_motive_46_, uint8_t v_t_47_, lean_object* v_h_48_, lean_object* v_tcp_49_){
_start:
{
lean_inc(v_tcp_49_);
return v_tcp_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp_elim___boxed(lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_tcp_53_){
_start:
{
uint8_t v_t_boxed_54_; lean_object* v_res_55_; 
v_t_boxed_54_ = lean_unbox(v_t_51_);
v_res_55_ = l_Lasm_JS_Deno_NetAddrTransport_tcp_elim(v_motive_50_, v_t_boxed_54_, v_h_52_, v_tcp_53_);
lean_dec(v_tcp_53_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___redArg(lean_object* v_udp_56_){
_start:
{
lean_inc(v_udp_56_);
return v_udp_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___redArg___boxed(lean_object* v_udp_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lasm_JS_Deno_NetAddrTransport_udp_elim___redArg(v_udp_57_);
lean_dec(v_udp_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim(lean_object* v_motive_59_, uint8_t v_t_60_, lean_object* v_h_61_, lean_object* v_udp_62_){
_start:
{
lean_inc(v_udp_62_);
return v_udp_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp_elim___boxed(lean_object* v_motive_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_udp_66_){
_start:
{
uint8_t v_t_boxed_67_; lean_object* v_res_68_; 
v_t_boxed_67_ = lean_unbox(v_t_64_);
v_res_68_ = l_Lasm_JS_Deno_NetAddrTransport_udp_elim(v_motive_63_, v_t_boxed_67_, v_h_65_, v_udp_66_);
lean_dec(v_udp_66_);
return v_res_68_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(uint8_t v_x_69_, uint8_t v_y_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_71_ = l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(v_x_69_);
v___x_72_ = l_Lasm_JS_Deno_NetAddrTransport_ctorIdx(v_y_70_);
v___x_73_ = lean_nat_dec_eq(v___x_71_, v___x_72_);
lean_dec(v___x_72_);
lean_dec(v___x_71_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport_beq___boxed(lean_object* v_x_74_, lean_object* v_y_75_){
_start:
{
uint8_t v_x_21__boxed_76_; uint8_t v_y_22__boxed_77_; uint8_t v_res_78_; lean_object* v_r_79_; 
v_x_21__boxed_76_ = lean_unbox(v_x_74_);
v_y_22__boxed_77_ = lean_unbox(v_y_75_);
v_res_78_ = l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(v_x_21__boxed_76_, v_y_22__boxed_77_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(2u);
v___x_89_ = lean_nat_to_int(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(1u);
v___x_91_ = lean_nat_to_int(v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr(uint8_t v_x_92_, lean_object* v_prec_93_){
_start:
{
lean_object* v___y_95_; lean_object* v___y_102_; 
if (v_x_92_ == 0)
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_unsigned_to_nat(1024u);
v___x_109_ = lean_nat_dec_le(v___x_108_, v_prec_93_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_95_ = v___x_110_;
goto v___jp_94_;
}
else
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_95_ = v___x_111_;
goto v___jp_94_;
}
}
else
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = lean_unsigned_to_nat(1024u);
v___x_113_ = lean_nat_dec_le(v___x_112_, v_prec_93_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_102_ = v___x_114_;
goto v___jp_101_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_102_ = v___x_115_;
goto v___jp_101_;
}
}
v___jp_94_:
{
lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_96_ = ((lean_object*)(l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__1));
lean_inc(v___y_95_);
v___x_97_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_97_, 0, v___y_95_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = 0;
v___x_99_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*1, v___x_98_);
v___x_100_ = l_Repr_addAppParen(v___x_99_, v_prec_93_);
return v___x_100_;
}
v___jp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_103_ = ((lean_object*)(l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__3));
lean_inc(v___y_102_);
v___x_104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_104_, 0, v___y_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = 0;
v___x_106_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set_uint8(v___x_106_, sizeof(void*)*1, v___x_105_);
v___x_107_ = l_Repr_addAppParen(v___x_106_, v_prec_93_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___boxed(lean_object* v_x_116_, lean_object* v_prec_117_){
_start:
{
uint8_t v_x_117__boxed_118_; lean_object* v_res_119_; 
v_x_117__boxed_118_ = lean_unbox(v_x_116_);
v_res_119_ = l_Lasm_JS_Deno_instReprNetAddrTransport_repr(v_x_117__boxed_118_, v_prec_117_);
lean_dec(v_prec_117_);
return v_res_119_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default(void){
_start:
{
uint8_t v___x_122_; 
v___x_122_ = 0;
return v___x_122_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedNetAddrTransport(void){
_start:
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(uint8_t v_x_130_){
_start:
{
if (v_x_130_ == 0)
{
lean_object* v___x_131_; 
v___x_131_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_131_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__3));
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___boxed(lean_object* v_x_133_){
_start:
{
uint8_t v_x_40__boxed_134_; lean_object* v_res_135_; 
v_x_40__boxed_134_ = lean_unbox(v_x_133_);
v_res_135_ = l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(v_x_40__boxed_134_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(lean_object* v_x_147_){
_start:
{
if (lean_obj_tag(v_x_147_) == 4)
{
lean_object* v_s_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_s_150_ = lean_ctor_get(v_x_147_, 0);
v___x_151_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_152_ = lean_string_dec_eq(v_s_150_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2));
v___x_154_ = lean_string_dec_eq(v_s_150_, v___x_153_);
if (v___x_154_ == 0)
{
goto v___jp_148_;
}
else
{
lean_object* v___x_155_; 
v___x_155_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2));
return v___x_155_;
}
}
else
{
lean_object* v___x_156_; 
v___x_156_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3));
return v___x_156_;
}
}
else
{
goto v___jp_148_;
}
v___jp_148_:
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__1));
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___boxed(lean_object* v_x_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(v_x_157_);
lean_dec(v_x_157_);
return v_res_158_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg(){
_start:
{
uint8_t v___x_167_; 
v___x_167_ = 1;
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg___boxed(lean_object* v___dummy_168_){
_start:
{
uint8_t v_res_169_; lean_object* v_r_170_; 
v_res_169_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg();
v_r_170_ = lean_box(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(lean_object* v_x_171_, lean_object* v_y_172_){
_start:
{
uint8_t v___x_173_; 
v___x_173_ = 1;
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed(lean_object* v_x_174_, lean_object* v_y_175_){
_start:
{
uint8_t v_res_176_; lean_object* v_r_177_; 
v_res_176_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(v_x_174_, v_y_175_);
v_r_177_ = lean_box(v_res_176_);
return v_r_177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(lean_object* v_prec_183_){
_start:
{
lean_object* v___y_185_; lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_unsigned_to_nat(1024u);
v___x_192_ = lean_nat_dec_le(v___x_191_, v_prec_183_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; 
v___x_193_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_185_ = v___x_193_;
goto v___jp_184_;
}
else
{
lean_object* v___x_194_; 
v___x_194_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_185_ = v___x_194_;
goto v___jp_184_;
}
v___jp_184_:
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_186_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__1));
lean_inc(v___y_185_);
v___x_187_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_187_, 0, v___y_185_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = 0;
v___x_189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_188_);
v___x_190_ = l_Repr_addAppParen(v___x_189_, v_prec_183_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___boxed(lean_object* v_prec_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_195_);
lean_dec(v_prec_195_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(lean_object* v_x_197_, lean_object* v_prec_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed(lean_object* v_x_200_, lean_object* v_prec_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(v_x_200_, v_prec_201_);
lean_dec(v_prec_201_);
return v_res_202_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_box(0);
return v___x_205_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_box(0);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0(lean_object* v_x_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(lean_object* v_x_215_){
_start:
{
if (lean_obj_tag(v_x_215_) == 4)
{
lean_object* v_s_218_; lean_object* v___x_219_; uint8_t v___x_220_; 
v_s_218_ = lean_ctor_get(v_x_215_, 0);
v___x_219_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_220_ = lean_string_dec_eq(v_s_218_, v___x_219_);
if (v___x_220_ == 0)
{
goto v___jp_216_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_221_;
}
}
else
{
goto v___jp_216_;
}
v___jp_216_:
{
lean_object* v___x_217_; 
v___x_217_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0));
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___boxed(lean_object* v_x_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(v_x_222_);
lean_dec(v_x_222_);
return v_res_223_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg(){
_start:
{
uint8_t v___x_232_; 
v___x_232_ = 1;
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg___boxed(lean_object* v___dummy_233_){
_start:
{
uint8_t v_res_234_; lean_object* v_r_235_; 
v_res_234_ = l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___redArg();
v_r_235_ = lean_box(v_res_234_);
return v_r_235_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(lean_object* v_x_236_, lean_object* v_y_237_){
_start:
{
uint8_t v___x_238_; 
v___x_238_ = 1;
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___boxed(lean_object* v_x_239_, lean_object* v_y_240_){
_start:
{
uint8_t v_res_241_; lean_object* v_r_242_; 
v_res_241_ = l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(v_x_239_, v_y_240_);
v_r_242_ = lean_box(v_res_241_);
return v_r_242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(lean_object* v_prec_248_){
_start:
{
lean_object* v___y_250_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_unsigned_to_nat(1024u);
v___x_257_ = lean_nat_dec_le(v___x_256_, v_prec_248_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; 
v___x_258_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__4);
v___y_250_ = v___x_258_;
goto v___jp_249_;
}
else
{
lean_object* v___x_259_; 
v___x_259_ = lean_obj_once(&l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5, &l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5_once, _init_l_Lasm_JS_Deno_instReprNetAddrTransport_repr___closed__5);
v___y_250_ = v___x_259_;
goto v___jp_249_;
}
v___jp_249_:
{
lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_251_ = ((lean_object*)(l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___closed__1));
lean_inc(v___y_250_);
v___x_252_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_252_, 0, v___y_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = 0;
v___x_254_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set_uint8(v___x_254_, sizeof(void*)*1, v___x_253_);
v___x_255_ = l_Repr_addAppParen(v___x_254_, v_prec_248_);
return v___x_255_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg___boxed(lean_object* v_prec_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(v_prec_260_);
lean_dec(v_prec_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(lean_object* v_x_262_, lean_object* v_prec_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(v_prec_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___boxed(lean_object* v_x_265_, lean_object* v_prec_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(v_x_265_, v_prec_266_);
lean_dec(v_prec_266_);
return v_res_267_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default(void){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_box(0);
return v___x_270_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat(void){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_box(0);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0(lean_object* v_x_275_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0(lean_object* v_x_283_){
_start:
{
if (lean_obj_tag(v_x_283_) == 4)
{
lean_object* v_s_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_s_286_ = lean_ctor_get(v_x_283_, 0);
v___x_287_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0));
v___x_288_ = lean_string_dec_eq(v_s_286_, v___x_287_);
if (v___x_288_ == 0)
{
goto v___jp_284_;
}
else
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_289_;
}
}
else
{
goto v___jp_284_;
}
v___jp_284_:
{
lean_object* v___x_285_; 
v___x_285_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__0));
return v___x_285_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0___boxed(lean_object* v_x_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat___lam__0(v_x_290_);
lean_dec(v_x_290_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(lean_object* v___x_302_, lean_object* v___x_303_, lean_object* v___x_304_, lean_object* v_d_305_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_307_ = l_Lasm_JS_readField___redArg(v___x_302_, v_d_305_, v___x_306_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref(v___x_304_);
lean_dec_ref(v___x_303_);
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v_a_316_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_307_, 1);
v___x_317_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_318_ = l_Lasm_JS_readField___redArg(v___x_303_, v_d_305_, v___x_317_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
lean_dec(v_a_316_);
lean_dec_ref(v___x_304_);
v_a_319_ = lean_ctor_get(v___x_318_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_318_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_318_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v_a_327_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v___x_318_, 1);
v___x_328_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_329_ = l_Lasm_JS_readField___redArg(v___x_304_, v_d_305_, v___x_328_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
lean_dec(v_a_327_);
lean_dec(v_a_316_);
v_a_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_347_; 
v_a_338_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_347_ == 0)
{
v___x_340_ = v___x_329_;
v_isShared_341_ = v_isSharedCheck_347_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_329_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_347_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; uint8_t v___x_343_; lean_object* v___x_345_; 
v___x_342_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_342_, 0, v_a_327_);
lean_ctor_set(v___x_342_, 1, v_a_338_);
v___x_343_ = lean_unbox(v_a_316_);
lean_dec(v_a_316_);
lean_ctor_set_uint8(v___x_342_, sizeof(void*)*2, v___x_343_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v___x_342_);
v___x_345_ = v___x_340_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_342_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed(lean_object* v___x_348_, lean_object* v___x_349_, lean_object* v___x_350_, lean_object* v_d_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(v___x_348_, v___x_349_, v___x_350_, v_d_351_);
lean_dec(v_d_351_);
return v_res_352_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__0(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___f_356_; 
v___x_353_ = l_Lasm_JS_instFromJSNat;
v___x_354_ = l_Lasm_JS_instFromJSString;
v___x_355_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport));
v___f_356_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed), 4, 3);
lean_closure_set(v___f_356_, 0, v___x_355_);
lean_closure_set(v___f_356_, 1, v___x_354_);
lean_closure_set(v___f_356_, 2, v___x_353_);
return v___f_356_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__2(void){
_start:
{
uint8_t v___x_358_; lean_object* v___x_359_; lean_object* v___f_360_; lean_object* v___x_361_; 
v___x_358_ = 0;
v___x_359_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___f_360_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSNetAddr___closed__0, &l_Lasm_JS_Deno_instFromJSNetAddr___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__0);
v___x_361_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_361_, 0, v___f_360_);
lean_ctor_set(v___x_361_, 1, v___x_359_);
lean_ctor_set_uint8(v___x_361_, sizeof(void*)*2, v___x_358_);
return v___x_361_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr(void){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSNetAddr___closed__2, &l_Lasm_JS_Deno_instFromJSNetAddr___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSNetAddr___closed__2);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(lean_object* v___x_365_, lean_object* v___x_366_, lean_object* v_d_367_){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0));
v___x_369_ = l_Lasm_JS_readField___redArg(v___x_365_, v_d_367_, v___x_368_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_377_; 
lean_dec_ref(v___x_366_);
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_377_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_370_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v_a_378_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_a_378_);
lean_dec_ref_known(v___x_369_, 1);
v___x_379_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__1));
v___x_380_ = l_Lasm_JS_readField___redArg(v___x_366_, v_d_367_, v___x_379_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
lean_dec(v_a_378_);
v_a_381_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_380_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_380_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
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
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_397_; 
v_a_389_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_397_ == 0)
{
v___x_391_ = v___x_380_;
v_isShared_392_ = v_isSharedCheck_397_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_380_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_397_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v_a_378_);
lean_ctor_set(v___x_393_, 1, v_a_389_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 0, v___x_393_);
v___x_395_ = v___x_391_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v___x_393_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed(lean_object* v___x_398_, lean_object* v___x_399_, lean_object* v_d_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(v___x_398_, v___x_399_, v_d_400_);
lean_dec(v_d_400_);
return v_res_401_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___f_404_; 
v___x_402_ = l_Lasm_JS_instFromJSValue;
v___x_403_ = l_Lasm_JS_Deno_instFromJSNetAddr;
v___f_404_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed), 3, 2);
lean_closure_set(v___f_404_, 0, v___x_403_);
lean_closure_set(v___f_404_, 1, v___x_402_);
return v___f_404_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2(void){
_start:
{
uint8_t v___x_406_; lean_object* v___x_407_; lean_object* v___f_408_; lean_object* v___x_409_; 
v___x_406_ = 0;
v___x_407_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1));
v___f_408_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0, &l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0);
v___x_409_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_409_, 0, v___f_408_);
lean_ctor_set(v___x_409_, 1, v___x_407_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*2, v___x_406_);
return v___x_409_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSServeHandlerInfo(void){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2, &l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__2);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object* v_x_418_){
_start:
{
if (lean_obj_tag(v_x_418_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_428_; 
v_a_420_ = lean_ctor_get(v_x_418_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_428_ == 0)
{
v___x_422_ = v_x_418_;
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v_x_418_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_420_);
v___x_425_ = v_reuseFailAlloc_427_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_426_; 
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
return v___x_426_;
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_439_; 
v_a_429_ = lean_ctor_get(v_x_418_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_439_ == 0)
{
v___x_431_ = v_x_418_;
v_isShared_432_ = v_isSharedCheck_439_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v_x_418_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_439_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_433_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_434_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_434_, 0, v_a_429_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 0, v___x_434_);
v___x_436_ = v___x_431_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_438_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
lean_object* v___x_437_; 
v___x_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
return v___x_437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object* v_x_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(v_x_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object* v_f_443_, lean_object* v_a_444_, lean_object* v___f_445_, lean_object* v_x_446_){
_start:
{
if (lean_obj_tag(v_x_446_) == 0)
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_456_; 
lean_dec_ref(v___f_445_);
lean_dec(v_a_444_);
lean_dec_ref(v_f_443_);
v_a_448_ = lean_ctor_get(v_x_446_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v_x_446_);
if (v_isSharedCheck_456_ == 0)
{
v___x_450_ = v_x_446_;
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v_x_446_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_455_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
lean_object* v___x_454_; 
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
return v___x_454_;
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v_a_457_ = lean_ctor_get(v_x_446_, 0);
lean_inc(v_a_457_);
lean_dec_ref_known(v_x_446_, 1);
v___x_458_ = lean_unsigned_to_nat(0u);
v___x_459_ = 0;
v___x_460_ = lean_apply_3(v_f_443_, v_a_444_, v_a_457_, lean_box(0));
v___x_461_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_458_, v___x_459_, v___x_460_, v___f_445_);
return v___x_461_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object* v_f_462_, lean_object* v_a_463_, lean_object* v___f_464_, lean_object* v_x_465_, lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(v_f_462_, v_a_463_, v___f_464_, v_x_465_);
return v_res_467_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__4(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_473_ = lean_string_utf8_byte_size(v___x_472_);
return v___x_473_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__4);
v___x_476_ = lean_nat_dec_eq(v___x_475_, v___x_474_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2(lean_object* v_d_481_, lean_object* v_key_482_){
_start:
{
if (lean_obj_tag(v_d_481_) == 8)
{
lean_object* v___x_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_510_; 
v___x_483_ = l_Lasm_JS_Data_field(v_d_481_, v_key_482_);
v_isSharedCheck_510_ = !lean_is_exclusive(v_d_481_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; 
v_unused_511_ = lean_ctor_get(v_d_481_, 0);
lean_dec(v_unused_511_);
v___x_485_ = v_d_481_;
v_isShared_486_ = v_isSharedCheck_510_;
goto v_resetjp_484_;
}
else
{
lean_dec(v_d_481_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_510_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
if (lean_obj_tag(v___x_483_) == 9)
{
lean_object* v_value_487_; lean_object* v___x_489_; 
v_value_487_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_value_487_);
lean_dec_ref_known(v___x_483_, 2);
if (v_isShared_486_ == 0)
{
lean_ctor_set_tag(v___x_485_, 1);
lean_ctor_set(v___x_485_, 0, v_value_487_);
v___x_489_ = v___x_485_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_value_487_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
else
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_491_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_492_ = lean_string_append(v___x_491_, v_key_482_);
v___x_493_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_494_ = lean_string_append(v___x_492_, v___x_493_);
v___x_495_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__2));
v___x_496_ = lean_string_append(v___x_494_, v___x_495_);
v___x_497_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_498_ = lean_string_append(v___x_496_, v___x_497_);
v___x_499_ = l_Lasm_JS_Data_describe(v___x_483_);
v___x_500_ = lean_string_append(v___x_498_, v___x_499_);
lean_dec_ref(v___x_499_);
v___x_501_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_502_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__6));
v___x_503_ = lean_string_append(v___x_500_, v___x_502_);
if (v_isShared_486_ == 0)
{
lean_ctor_set_tag(v___x_485_, 0);
lean_ctor_set(v___x_485_, 0, v___x_503_);
v___x_505_ = v___x_485_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
else
{
lean_object* v___x_508_; 
if (v_isShared_486_ == 0)
{
lean_ctor_set_tag(v___x_485_, 0);
lean_ctor_set(v___x_485_, 0, v___x_500_);
v___x_508_ = v___x_485_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_500_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
else
{
lean_object* v___x_512_; 
lean_dec(v_d_481_);
v___x_512_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__8));
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___boxed(lean_object* v_d_513_, lean_object* v_key_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2(v_d_513_, v_key_514_);
lean_dec_ref(v_key_514_);
return v_res_515_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__0));
v___x_517_ = lean_string_utf8_byte_size(v___x_516_);
return v___x_517_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__1(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_518_ = lean_unsigned_to_nat(0u);
v___x_519_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_520_ = lean_nat_dec_eq(v___x_519_, v___x_518_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_524_, lean_object* v_key_525_){
_start:
{
if (lean_obj_tag(v_d_524_) == 8)
{
lean_object* v___x_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_557_; 
v___x_526_ = l_Lasm_JS_Data_field(v_d_524_, v_key_525_);
v_isSharedCheck_557_ = !lean_is_exclusive(v_d_524_);
if (v_isSharedCheck_557_ == 0)
{
lean_object* v_unused_558_; 
v_unused_558_ = lean_ctor_get(v_d_524_, 0);
lean_dec(v_unused_558_);
v___x_528_ = v_d_524_;
v_isShared_529_ = v_isSharedCheck_557_;
goto v_resetjp_527_;
}
else
{
lean_dec(v_d_524_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_557_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
if (lean_obj_tag(v___x_526_) == 4)
{
lean_object* v_s_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v_s_550_ = lean_ctor_get(v___x_526_, 0);
lean_inc_ref(v_s_550_);
v___x_551_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__0));
v___x_552_ = lean_string_dec_eq(v_s_550_, v___x_551_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_553_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__2));
v___x_554_ = lean_string_dec_eq(v_s_550_, v___x_553_);
lean_dec_ref(v_s_550_);
if (v___x_554_ == 0)
{
goto v___jp_530_;
}
else
{
lean_object* v___x_555_; 
lean_dec_ref_known(v___x_526_, 1);
lean_del_object(v___x_528_);
v___x_555_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__2));
return v___x_555_;
}
}
else
{
lean_object* v___x_556_; 
lean_dec_ref_known(v___x_526_, 1);
lean_dec_ref(v_s_550_);
lean_del_object(v___x_528_);
v___x_556_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0___closed__3));
return v___x_556_;
}
}
else
{
goto v___jp_530_;
}
v___jp_530_:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_531_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_532_ = lean_string_append(v___x_531_, v_key_525_);
v___x_533_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
v___x_535_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___closed__1));
v___x_536_ = lean_string_append(v___x_534_, v___x_535_);
v___x_537_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_538_ = lean_string_append(v___x_536_, v___x_537_);
v___x_539_ = l_Lasm_JS_Data_describe(v___x_526_);
v___x_540_ = lean_string_append(v___x_538_, v___x_539_);
lean_dec_ref(v___x_539_);
v___x_541_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__1);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_542_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_543_ = lean_string_append(v___x_540_, v___x_542_);
if (v_isShared_529_ == 0)
{
lean_ctor_set_tag(v___x_528_, 0);
lean_ctor_set(v___x_528_, 0, v___x_543_);
v___x_545_ = v___x_528_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_543_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
else
{
lean_object* v___x_548_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set_tag(v___x_528_, 0);
lean_ctor_set(v___x_528_, 0, v___x_540_);
v___x_548_ = v___x_528_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_540_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
else
{
lean_object* v___x_559_; 
lean_dec(v_d_524_);
v___x_559_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___closed__3));
return v___x_559_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_560_, lean_object* v_key_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3(v_d_560_, v_key_561_);
lean_dec_ref(v_key_561_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_566_, lean_object* v_key_567_){
_start:
{
if (lean_obj_tag(v_d_566_) == 8)
{
lean_object* v___x_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_599_; 
v___x_568_ = l_Lasm_JS_Data_field(v_d_566_, v_key_567_);
v_isSharedCheck_599_ = !lean_is_exclusive(v_d_566_);
if (v_isSharedCheck_599_ == 0)
{
lean_object* v_unused_600_; 
v_unused_600_ = lean_ctor_get(v_d_566_, 0);
lean_dec(v_unused_600_);
v___x_570_ = v_d_566_;
v_isShared_571_ = v_isSharedCheck_599_;
goto v_resetjp_569_;
}
else
{
lean_dec(v_d_566_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_599_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
if (lean_obj_tag(v___x_568_) == 4)
{
lean_object* v_s_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
lean_del_object(v___x_570_);
v_s_572_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_568_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_s_572_);
lean_dec(v___x_568_);
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
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_s_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_580_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_581_ = lean_string_append(v___x_580_, v_key_567_);
v___x_582_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_583_ = lean_string_append(v___x_581_, v___x_582_);
v___x_584_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_585_ = lean_string_append(v___x_583_, v___x_584_);
v___x_586_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_587_ = lean_string_append(v___x_585_, v___x_586_);
v___x_588_ = l_Lasm_JS_Data_describe(v___x_568_);
v___x_589_ = lean_string_append(v___x_587_, v___x_588_);
lean_dec_ref(v___x_588_);
v___x_590_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__5);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_591_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__6));
v___x_592_ = lean_string_append(v___x_589_, v___x_591_);
if (v_isShared_571_ == 0)
{
lean_ctor_set_tag(v___x_570_, 0);
lean_ctor_set(v___x_570_, 0, v___x_592_);
v___x_594_ = v___x_570_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_592_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
else
{
lean_object* v___x_597_; 
if (v_isShared_571_ == 0)
{
lean_ctor_set_tag(v___x_570_, 0);
lean_ctor_set(v___x_570_, 0, v___x_589_);
v___x_597_ = v___x_570_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_589_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
}
else
{
lean_object* v___x_601_; 
lean_dec(v_d_566_);
v___x_601_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___closed__1));
return v___x_601_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_602_, lean_object* v_key_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4(v_d_602_, v_key_603_);
lean_dec_ref(v_key_603_);
return v_res_604_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__3(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = lean_unsigned_to_nat(0u);
v___x_609_ = lean_nat_to_int(v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5(lean_object* v_d_614_, lean_object* v_key_615_){
_start:
{
if (lean_obj_tag(v_d_614_) == 8)
{
lean_object* v___x_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_659_; 
v___x_616_ = l_Lasm_JS_Data_field(v_d_614_, v_key_615_);
v_isSharedCheck_659_ = !lean_is_exclusive(v_d_614_);
if (v_isSharedCheck_659_ == 0)
{
lean_object* v_unused_660_; 
v_unused_660_ = lean_ctor_get(v_d_614_, 0);
lean_dec(v_unused_660_);
v___x_618_ = v_d_614_;
v_isShared_619_ = v_isSharedCheck_659_;
goto v_resetjp_617_;
}
else
{
lean_dec(v_d_614_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_659_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v_a_621_; lean_object* v_a_647_; 
switch(lean_obj_tag(v___x_616_))
{
case 3:
{
double v_n_653_; lean_object* v___x_654_; 
v_n_653_ = lean_ctor_get_float(v___x_616_, 0);
v___x_654_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_653_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v___x_655_; 
v___x_655_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__5));
v_a_621_ = v___x_655_;
goto v___jp_620_;
}
else
{
lean_object* v_val_656_; 
v_val_656_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_val_656_);
lean_dec_ref_known(v___x_654_, 1);
v_a_647_ = v_val_656_;
goto v___jp_646_;
}
}
case 5:
{
lean_object* v_i_657_; 
v_i_657_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_i_657_);
v_a_647_ = v_i_657_;
goto v___jp_646_;
}
default: 
{
lean_object* v___x_658_; 
v___x_658_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v_a_621_ = v___x_658_;
goto v___jp_620_;
}
}
v___jp_620_:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_622_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_623_ = lean_string_append(v___x_622_, v_key_615_);
v___x_624_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_625_ = lean_string_append(v___x_623_, v___x_624_);
v___x_626_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__0));
v___x_627_ = lean_string_append(v___x_625_, v___x_626_);
v___x_628_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_629_ = lean_string_append(v___x_627_, v___x_628_);
v___x_630_ = l_Lasm_JS_Data_describe(v___x_616_);
v___x_631_ = lean_string_append(v___x_629_, v___x_630_);
lean_dec_ref(v___x_630_);
v___x_632_ = lean_string_utf8_byte_size(v_a_621_);
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = lean_nat_dec_eq(v___x_632_, v___x_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_641_; 
v___x_635_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__1));
v___x_636_ = lean_string_append(v___x_635_, v_a_621_);
v___x_637_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__2));
v___x_638_ = lean_string_append(v___x_636_, v___x_637_);
v___x_639_ = lean_string_append(v___x_631_, v___x_638_);
lean_dec_ref(v___x_638_);
if (v_isShared_619_ == 0)
{
lean_ctor_set_tag(v___x_618_, 0);
lean_ctor_set(v___x_618_, 0, v___x_639_);
v___x_641_ = v___x_618_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_639_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
else
{
lean_object* v___x_644_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set_tag(v___x_618_, 0);
lean_ctor_set(v___x_618_, 0, v___x_631_);
v___x_644_ = v___x_618_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_631_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
v___jp_646_:
{
lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_648_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__3);
v___x_649_ = lean_int_dec_le(v___x_648_, v_a_647_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; 
lean_dec(v_a_647_);
v___x_650_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__4));
v_a_621_ = v___x_650_;
goto v___jp_620_;
}
else
{
lean_object* v___x_651_; lean_object* v___x_652_; 
lean_del_object(v___x_618_);
lean_dec(v___x_616_);
v___x_651_ = l_Int_toNat(v_a_647_);
lean_dec(v_a_647_);
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
}
}
else
{
lean_object* v___x_661_; 
lean_dec(v_d_614_);
v___x_661_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__6));
return v___x_661_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_d_662_, lean_object* v_key_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5(v_d_662_, v_key_663_);
lean_dec_ref(v_key_663_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1(lean_object* v_d_667_, lean_object* v_key_668_){
_start:
{
if (lean_obj_tag(v_d_667_) == 8)
{
lean_object* v___x_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_720_; 
v___x_669_ = l_Lasm_JS_Data_field(v_d_667_, v_key_668_);
v_isSharedCheck_720_ = !lean_is_exclusive(v_d_667_);
if (v_isSharedCheck_720_ == 0)
{
lean_object* v_unused_721_; 
v_unused_721_ = lean_ctor_get(v_d_667_, 0);
lean_dec(v_unused_721_);
v___x_671_ = v_d_667_;
v_isShared_672_ = v_isSharedCheck_720_;
goto v_resetjp_670_;
}
else
{
lean_dec(v_d_667_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_720_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v_a_674_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
lean_inc(v___x_669_);
v___x_700_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3(v___x_669_, v___x_699_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
v_a_674_ = v_a_701_;
goto v___jp_673_;
}
else
{
lean_object* v_a_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v_a_702_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_702_);
lean_dec_ref_known(v___x_700_, 1);
v___x_703_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
lean_inc(v___x_669_);
v___x_704_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4(v___x_669_, v___x_703_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; 
lean_dec(v_a_702_);
v_a_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_705_);
lean_dec_ref_known(v___x_704_, 1);
v_a_674_ = v_a_705_;
goto v___jp_673_;
}
else
{
lean_object* v_a_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_a_706_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_706_);
lean_dec_ref_known(v___x_704_, 1);
v___x_707_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc(v___x_669_);
v___x_708_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5(v___x_669_, v___x_707_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; 
lean_dec(v_a_706_);
lean_dec(v_a_702_);
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_708_, 1);
v_a_674_ = v_a_709_;
goto v___jp_673_;
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_719_; 
lean_del_object(v___x_671_);
lean_dec(v___x_669_);
v_a_710_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_719_ == 0)
{
v___x_712_ = v___x_708_;
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_708_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; uint8_t v___x_715_; lean_object* v___x_717_; 
v___x_714_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_714_, 0, v_a_706_);
lean_ctor_set(v___x_714_, 1, v_a_710_);
v___x_715_ = lean_unbox(v_a_702_);
lean_dec(v_a_702_);
lean_ctor_set_uint8(v___x_714_, sizeof(void*)*2, v___x_715_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_714_);
v___x_717_ = v___x_712_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_714_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
v___jp_673_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_675_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__0));
v___x_676_ = lean_string_append(v___x_675_, v_key_668_);
v___x_677_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__1));
v___x_678_ = lean_string_append(v___x_676_, v___x_677_);
v___x_679_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___x_680_ = lean_string_append(v___x_678_, v___x_679_);
v___x_681_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2___closed__3));
v___x_682_ = lean_string_append(v___x_680_, v___x_681_);
v___x_683_ = l_Lasm_JS_Data_describe(v___x_669_);
v___x_684_ = lean_string_append(v___x_682_, v___x_683_);
lean_dec_ref(v___x_683_);
v___x_685_ = lean_string_utf8_byte_size(v_a_674_);
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = lean_nat_dec_eq(v___x_685_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_688_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__1));
v___x_689_ = lean_string_append(v___x_688_, v_a_674_);
lean_dec_ref(v_a_674_);
v___x_690_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__2));
v___x_691_ = lean_string_append(v___x_689_, v___x_690_);
v___x_692_ = lean_string_append(v___x_684_, v___x_691_);
lean_dec_ref(v___x_691_);
if (v_isShared_672_ == 0)
{
lean_ctor_set_tag(v___x_671_, 0);
lean_ctor_set(v___x_671_, 0, v___x_692_);
v___x_694_ = v___x_671_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
else
{
lean_object* v___x_697_; 
lean_dec_ref(v_a_674_);
if (v_isShared_672_ == 0)
{
lean_ctor_set_tag(v___x_671_, 0);
lean_ctor_set(v___x_671_, 0, v___x_684_);
v___x_697_ = v___x_671_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_684_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
else
{
lean_object* v___x_722_; 
lean_dec(v_d_667_);
v___x_722_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1___closed__0));
return v___x_722_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1___boxed(lean_object* v_d_723_, lean_object* v_key_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1(v_d_723_, v_key_724_);
lean_dec_ref(v_key_724_);
return v_res_725_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_732_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___x_733_ = lean_unsigned_to_nat(46u);
v___x_734_ = lean_unsigned_to_nat(193u);
v___x_735_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4));
v___x_736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3));
v___x_737_ = l_mkPanicMessageWithDecl(v___x_736_, v___x_735_, v___x_734_, v___x_733_, v___x_732_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(lean_object* v_context_739_, lean_object* v_d_740_){
_start:
{
lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_749_; lean_object* v_received_750_; lean_object* v___y_769_; lean_object* v_a_772_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__0));
lean_inc(v_d_740_);
v___x_797_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1(v_d_740_, v___x_796_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_798_);
lean_dec_ref_known(v___x_797_, 1);
v_a_772_ = v_a_798_;
goto v___jp_771_;
}
else
{
lean_object* v_a_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v_a_799_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_797_, 1);
v___x_800_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___closed__1));
lean_inc(v_d_740_);
v___x_801_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__2(v_d_740_, v___x_800_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; 
lean_dec(v_a_799_);
v_a_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_801_, 1);
v_a_772_ = v_a_802_;
goto v___jp_771_;
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_d_740_);
v_a_803_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_811_ == 0)
{
v___x_805_ = v___x_801_;
v_isShared_806_ = v_isSharedCheck_811_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_801_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_811_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v___x_809_; 
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v_a_799_);
lean_ctor_set(v___x_807_, 1, v_a_803_);
if (v_isShared_806_ == 0)
{
lean_ctor_set_tag(v___x_805_, 0);
lean_ctor_set(v___x_805_, 0, v___x_807_);
v___x_809_ = v___x_805_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
v___jp_742_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_745_ = lean_string_append(v___y_743_, v___y_744_);
lean_dec_ref(v___y_744_);
v___x_746_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
v___x_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
return v___x_747_;
}
v___jp_748_:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_751_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_752_ = lean_string_append(v___x_751_, v_context_739_);
v___x_753_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_754_ = lean_string_append(v___x_752_, v___x_753_);
v___x_755_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1));
v___x_756_ = lean_string_append(v___x_754_, v___x_755_);
v___x_757_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_758_ = lean_string_append(v___x_756_, v___x_757_);
v___x_759_ = lean_string_append(v___x_758_, v_received_750_);
lean_dec_ref(v_received_750_);
v___x_760_ = lean_string_utf8_byte_size(v___y_749_);
v___x_761_ = lean_unsigned_to_nat(0u);
v___x_762_ = lean_nat_dec_eq(v___x_760_, v___x_761_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_763_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__1));
v___x_764_ = lean_string_append(v___x_763_, v___y_749_);
lean_dec_ref(v___y_749_);
v___x_765_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__2));
v___x_766_ = lean_string_append(v___x_764_, v___x_765_);
v___y_743_ = v___x_759_;
v___y_744_ = v___x_766_;
goto v___jp_742_;
}
else
{
lean_object* v___x_767_; 
lean_dec_ref(v___y_749_);
v___x_767_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___y_743_ = v___x_759_;
v___y_744_ = v___x_767_;
goto v___jp_742_;
}
}
v___jp_768_:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lasm_JS_Data_describe(v_d_740_);
v___y_749_ = v___y_769_;
v_received_750_ = v___x_770_;
goto v___jp_748_;
}
v___jp_771_:
{
if (lean_obj_tag(v_d_740_) == 9)
{
lean_object* v_value_773_; lean_object* v_description_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v_value_773_ = lean_ctor_get(v_d_740_, 0);
v_description_774_ = lean_ctor_get(v_d_740_, 1);
v___x_775_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_776_ = lean_string_dec_eq(v_description_774_, v___x_775_);
if (v___x_776_ == 0)
{
v___y_769_ = v_a_772_;
goto v___jp_768_;
}
else
{
lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_793_; 
lean_inc(v_value_773_);
v_isSharedCheck_793_ = !lean_is_exclusive(v_d_740_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; lean_object* v_unused_795_; 
v_unused_794_ = lean_ctor_get(v_d_740_, 1);
lean_dec(v_unused_794_);
v_unused_795_ = lean_ctor_get(v_d_740_, 0);
lean_dec(v_unused_795_);
v___x_778_ = v_d_740_;
v_isShared_779_ = v_isSharedCheck_793_;
goto v_resetjp_777_;
}
else
{
lean_dec(v_d_740_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_793_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
uint32_t v___x_780_; uint64_t v___x_781_; lean_object* v___x_783_; 
v___x_780_ = 206;
v___x_781_ = 0ULL;
lean_inc(v_value_773_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 1, v___x_775_);
v___x_783_ = v___x_778_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_value_773_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_775_);
v___x_783_ = v_reuseFailAlloc_792_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
uint32_t v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lasm_js_value_handle(v_value_773_);
lean_dec(v_value_773_);
v___x_785_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_780_, v___x_781_, v___x_783_, v___x_784_);
lean_dec_ref(v___x_783_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_a_786_; uint8_t v___x_787_; 
v_a_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_a_786_);
lean_dec_ref_known(v___x_785_, 1);
v___x_787_ = lean_string_validate_utf8(v_a_786_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; 
lean_dec(v_a_786_);
v___x_788_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6);
v___x_789_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_788_);
v___y_749_ = v_a_772_;
v_received_750_ = v___x_789_;
goto v___jp_748_;
}
else
{
lean_object* v___x_790_; 
v___x_790_ = lean_string_from_utf8_unchecked(v_a_786_);
v___y_749_ = v_a_772_;
v_received_750_ = v___x_790_;
goto v___jp_748_;
}
}
else
{
lean_object* v___x_791_; 
lean_dec_ref_known(v___x_785_, 1);
v___x_791_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7));
v___y_749_ = v_a_772_;
v_received_750_ = v___x_791_;
goto v___jp_748_;
}
}
}
}
}
else
{
v___y_769_ = v_a_772_;
goto v___jp_768_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_812_, lean_object* v_d_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v_context_812_, v_d_813_);
lean_dec_ref(v_context_812_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(lean_object* v_args_817_, lean_object* v_i_818_){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_820_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_821_ = lean_unsigned_to_nat(1u);
v___x_822_ = lean_nat_add(v_i_818_, v___x_821_);
v___x_823_ = l_Nat_reprFast(v___x_822_);
v___x_824_ = lean_string_append(v___x_820_, v___x_823_);
lean_dec_ref(v___x_823_);
v___x_825_ = lean_array_get_size(v_args_817_);
v___x_826_ = lean_nat_dec_lt(v_i_818_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = lean_box(0);
v___x_828_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_824_, v___x_827_);
lean_dec_ref(v___x_824_);
return v___x_828_;
}
else
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_array_fget_borrowed(v_args_817_, v_i_818_);
lean_inc(v___x_829_);
v___x_830_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_824_, v___x_829_);
lean_dec_ref(v___x_824_);
return v___x_830_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___boxed(lean_object* v_args_831_, lean_object* v_i_832_, lean_object* v_a_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_831_, v_i_832_);
lean_dec(v_i_832_);
lean_dec_ref(v_args_831_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(lean_object* v_f_835_, lean_object* v___f_836_, lean_object* v_args_837_, lean_object* v_x_838_){
_start:
{
if (lean_obj_tag(v_x_838_) == 0)
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_848_; 
lean_dec_ref(v___f_836_);
lean_dec_ref(v_f_835_);
v_a_840_ = lean_ctor_get(v_x_838_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v_x_838_);
if (v_isSharedCheck_848_ == 0)
{
v___x_842_ = v_x_838_;
v_isShared_843_ = v_isSharedCheck_848_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v_x_838_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_848_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_847_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
lean_object* v___x_846_; 
v___x_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
}
}
else
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_870_; 
v_a_849_ = lean_ctor_get(v_x_838_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v_x_838_);
if (v_isSharedCheck_870_ == 0)
{
v___x_851_ = v_x_838_;
v_isShared_852_ = v_isSharedCheck_870_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v_x_838_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_870_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___f_853_; lean_object* v___x_854_; lean_object* v___x_855_; uint8_t v___x_856_; lean_object* v_val_858_; lean_object* v___x_861_; 
v___f_853_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_853_, 0, v_f_835_);
lean_closure_set(v___f_853_, 1, v_a_849_);
lean_closure_set(v___f_853_, 2, v___f_836_);
v___x_854_ = lean_unsigned_to_nat(1u);
v___x_855_ = lean_unsigned_to_nat(0u);
v___x_856_ = 0;
v___x_861_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_837_, v___x_854_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v___x_864_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref_known(v___x_861_, 1);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v_a_862_);
v___x_864_ = v___x_851_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
v_val_858_ = v___x_864_;
goto v___jp_857_;
}
}
else
{
lean_object* v_a_866_; lean_object* v___x_868_; 
v_a_866_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_861_, 1);
if (v_isShared_852_ == 0)
{
lean_ctor_set_tag(v___x_851_, 0);
lean_ctor_set(v___x_851_, 0, v_a_866_);
v___x_868_ = v___x_851_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
v_val_858_ = v___x_868_;
goto v___jp_857_;
}
}
v___jp_857_:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_859_, 0, v_val_858_);
v___x_860_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_855_, v___x_856_, v___x_859_, v___f_853_);
return v___x_860_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed(lean_object* v_f_871_, lean_object* v___f_872_, lean_object* v_args_873_, lean_object* v_x_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(v_f_871_, v___f_872_, v_args_873_, v_x_874_);
lean_dec_ref(v_args_873_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(lean_object* v_args_877_, lean_object* v_i_878_){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_880_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_881_ = lean_unsigned_to_nat(1u);
v___x_882_ = lean_nat_add(v_i_878_, v___x_881_);
v___x_883_ = l_Nat_reprFast(v___x_882_);
v___x_884_ = lean_string_append(v___x_880_, v___x_883_);
lean_dec_ref(v___x_883_);
v___x_885_ = lean_array_get_size(v_args_877_);
v___x_886_ = lean_nat_dec_lt(v_i_878_, v___x_885_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = lean_box(0);
v___x_888_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_884_, v___x_887_);
lean_dec_ref(v___x_884_);
return v___x_888_;
}
else
{
lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_889_ = lean_array_fget_borrowed(v_args_877_, v_i_878_);
lean_inc(v___x_889_);
v___x_890_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_884_, v___x_889_);
lean_dec_ref(v___x_884_);
return v___x_890_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1___boxed(lean_object* v_args_891_, lean_object* v_i_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_891_, v_i_892_);
lean_dec(v_i_892_);
lean_dec_ref(v_args_891_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(lean_object* v_f_895_, lean_object* v___f_896_, lean_object* v_args_897_){
_start:
{
lean_object* v___f_899_; lean_object* v___x_900_; uint8_t v___x_901_; lean_object* v_val_903_; lean_object* v___x_906_; 
lean_inc_ref(v_args_897_);
v___f_899_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_899_, 0, v_f_895_);
lean_closure_set(v___f_899_, 1, v___f_896_);
lean_closure_set(v___f_899_, 2, v_args_897_);
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = 0;
v___x_906_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_897_, v___x_900_);
lean_dec_ref(v_args_897_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
lean_ctor_set_tag(v___x_909_, 1);
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
v_val_903_ = v___x_912_;
goto v___jp_902_;
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
v_a_915_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_906_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_906_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
lean_ctor_set_tag(v___x_917_, 0);
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
v_val_903_ = v___x_920_;
goto v___jp_902_;
}
}
}
v___jp_902_:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_904_, 0, v_val_903_);
v___x_905_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_900_, v___x_901_, v___x_904_, v___f_899_);
return v___x_905_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed(lean_object* v_f_923_, lean_object* v___f_924_, lean_object* v_args_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(v_f_923_, v___f_924_, v_args_925_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object* v_f_929_){
_start:
{
lean_object* v___f_931_; lean_object* v___f_932_; lean_object* v___x_933_; 
v___f_931_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_932_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_932_, 0, v_f_929_);
lean_closure_set(v___f_932_, 1, v___f_931_);
v___x_933_ = l_Lasm_JS_Function_ofFn(v___f_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_933_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_933_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
v_a_942_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_933_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_933_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object* v_f_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lasm_JS_Deno_ServeHandler_ofFn(v_f_950_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object* v_f_953_, lean_object* v_args_954_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_956_ = lean_unsigned_to_nat(0u);
v___x_957_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_954_, v___x_956_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
v___x_959_ = lean_unsigned_to_nat(1u);
v___x_960_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_954_, v___x_959_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v_a_961_; lean_object* v___x_962_; 
v_a_961_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref_known(v___x_960_, 1);
v___x_962_ = lean_apply_3(v_f_953_, v_a_958_, v_a_961_, lean_box(0));
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_972_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_972_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_972_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_972_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_967_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_968_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_968_, 0, v_a_963_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 0, v___x_968_);
v___x_970_ = v___x_965_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
v_a_973_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_962_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_962_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v_a_958_);
lean_dec_ref(v_f_953_);
v_a_981_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_960_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_960_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
lean_dec_ref(v_f_953_);
v_a_989_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_957_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_957_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_997_, lean_object* v_args_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(v_f_997_, v_args_998_);
lean_dec_ref(v_args_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object* v_f_1001_){
_start:
{
lean_object* v___f_1003_; lean_object* v___x_1004_; 
v___f_1003_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1003_, 0, v_f_1001_);
v___x_1004_ = l_Lasm_JS_Function_ofSyncFn(v___f_1003_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1012_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1007_ = v___x_1004_;
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_1004_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_1005_);
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
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
v_a_1013_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1004_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1004_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object* v_f_1021_, lean_object* v_a_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn(v_f_1021_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(lean_object* v_f_1031_, lean_object* v___f_1032_, lean_object* v_x_1033_){
_start:
{
if (lean_obj_tag(v_x_1033_) == 0)
{
lean_object* v___x_1035_; 
lean_dec_ref(v___f_1032_);
lean_dec_ref(v_f_1031_);
v___x_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1035_, 0, v_x_1033_);
return v___x_1035_;
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v_a_1036_ = lean_ctor_get(v_x_1033_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v_x_1033_, 1);
v___x_1037_ = lean_unsigned_to_nat(0u);
v___x_1038_ = 0;
v___x_1039_ = lean_apply_2(v_f_1031_, v_a_1036_, lean_box(0));
v___x_1040_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1037_, v___x_1038_, v___x_1039_, v___f_1032_);
return v___x_1040_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed(lean_object* v_f_1041_, lean_object* v___f_1042_, lean_object* v_x_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(v_f_1041_, v___f_1042_, v_x_1043_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(lean_object* v___f_1046_, lean_object* v_args_1047_){
_start:
{
lean_object* v___x_1049_; uint8_t v___x_1050_; lean_object* v_val_1052_; lean_object* v___x_1055_; lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
v___x_1049_ = lean_unsigned_to_nat(0u);
v___x_1050_ = 0;
v___x_1055_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1047_, v___x_1049_);
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1055_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1055_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v___jp_1051_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1053_, 0, v_val_1052_);
v___x_1054_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1049_, v___x_1050_, v___x_1053_, v___f_1046_);
return v___x_1054_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
lean_ctor_set_tag(v___x_1058_, 1);
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
v_val_1052_ = v___x_1061_;
goto v___jp_1051_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed(lean_object* v___f_1064_, lean_object* v_args_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(v___f_1064_, v_args_1065_);
lean_dec_ref(v_args_1065_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object* v_f_1068_){
_start:
{
lean_object* v___f_1070_; lean_object* v___f_1071_; lean_object* v___f_1072_; lean_object* v___x_1073_; 
v___f_1070_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_1071_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1071_, 0, v_f_1068_);
lean_closure_set(v___f_1071_, 1, v___f_1070_);
v___f_1072_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1072_, 0, v___f_1071_);
v___x_1073_ = l_Lasm_JS_Function_ofFn(v___f_1072_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1073_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1073_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
v_a_1082_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1073_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1073_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
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
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object* v_f_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(v_f_1090_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(lean_object* v_f_1093_, lean_object* v_args_1094_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v_a_1098_; lean_object* v___x_1099_; 
v___x_1096_ = lean_unsigned_to_nat(0u);
v___x_1097_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1094_, v___x_1096_);
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref(v___x_1097_);
v___x_1099_ = lean_apply_2(v_f_1093_, v_a_1098_, lean_box(0));
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1109_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1109_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1109_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_1105_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1105_, 0, v_a_1100_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1105_);
v___x_1107_ = v___x_1102_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
v_a_1110_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1099_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1099_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed(lean_object* v_f_1118_, lean_object* v_args_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(v_f_1118_, v_args_1119_);
lean_dec_ref(v_args_1119_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object* v_f_1122_){
_start:
{
lean_object* v___f_1124_; lean_object* v___x_1125_; 
v___f_1124_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1124_, 0, v_f_1122_);
v___x_1125_ = l_Lasm_JS_Function_ofSyncFn(v___f_1124_);
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1125_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1125_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
v_a_1134_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1125_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1125_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object* v_f_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(v_f_1142_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object* v_x_1156_){
_start:
{
if (lean_obj_tag(v_x_1156_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1166_; 
v_a_1158_ = lean_ctor_get(v_x_1156_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_x_1156_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1160_ = v_x_1156_;
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v_x_1156_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
return v___x_1164_;
}
}
}
else
{
lean_object* v___x_1167_; 
lean_dec_ref_known(v_x_1156_, 1);
v___x_1167_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___closed__1));
return v___x_1167_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object* v_x_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(v_x_1168_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object* v_f_1171_, lean_object* v___f_1172_, lean_object* v_x_1173_){
_start:
{
if (lean_obj_tag(v_x_1173_) == 0)
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1183_; 
lean_dec_ref(v___f_1172_);
lean_dec_ref(v_f_1171_);
v_a_1175_ = lean_ctor_get(v_x_1173_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_x_1173_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1177_ = v_x_1173_;
v_isShared_1178_ = v_isSharedCheck_1183_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v_x_1173_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1183_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
lean_object* v___x_1181_; 
v___x_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
return v___x_1181_;
}
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1185_; uint8_t v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v_a_1184_ = lean_ctor_get(v_x_1173_, 0);
lean_inc(v_a_1184_);
lean_dec_ref_known(v_x_1173_, 1);
v___x_1185_ = lean_unsigned_to_nat(0u);
v___x_1186_ = 0;
v___x_1187_ = lean_apply_2(v_f_1171_, v_a_1184_, lean_box(0));
v___x_1188_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1185_, v___x_1186_, v___x_1187_, v___f_1172_);
return v___x_1188_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object* v_f_1189_, lean_object* v___f_1190_, lean_object* v_x_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(v_f_1189_, v___f_1190_, v_x_1191_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(lean_object* v_context_1194_, lean_object* v_d_1195_){
_start:
{
lean_object* v___y_1198_; lean_object* v___y_1199_; lean_object* v___y_1204_; lean_object* v_received_1205_; lean_object* v___y_1224_; lean_object* v_a_1227_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
lean_inc(v_d_1195_);
v___x_1252_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__3(v_d_1195_, v___x_1251_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v_a_1253_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_a_1253_);
lean_dec_ref_known(v___x_1252_, 1);
v_a_1227_ = v_a_1253_;
goto v___jp_1226_;
}
else
{
lean_object* v_a_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v_a_1254_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_a_1254_);
lean_dec_ref_known(v___x_1252_, 1);
v___x_1255_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
lean_inc(v_d_1195_);
v___x_1256_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__4(v_d_1195_, v___x_1255_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; 
lean_dec(v_a_1254_);
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_a_1257_);
lean_dec_ref_known(v___x_1256_, 1);
v_a_1227_ = v_a_1257_;
goto v___jp_1226_;
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v_a_1258_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_a_1258_);
lean_dec_ref_known(v___x_1256_, 1);
v___x_1259_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc(v_d_1195_);
v___x_1260_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5(v_d_1195_, v___x_1259_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; 
lean_dec(v_a_1258_);
lean_dec(v_a_1254_);
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___x_1260_, 1);
v_a_1227_ = v_a_1261_;
goto v___jp_1226_;
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1271_; 
lean_dec(v_d_1195_);
v_a_1262_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1264_ = v___x_1260_;
v_isShared_1265_ = v_isSharedCheck_1271_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1260_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1271_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1266_; uint8_t v___x_1267_; lean_object* v___x_1269_; 
v___x_1266_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1266_, 0, v_a_1258_);
lean_ctor_set(v___x_1266_, 1, v_a_1262_);
v___x_1267_ = lean_unbox(v_a_1254_);
lean_dec(v_a_1254_);
lean_ctor_set_uint8(v___x_1266_, sizeof(void*)*2, v___x_1267_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set_tag(v___x_1264_, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1266_);
v___x_1269_ = v___x_1264_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1266_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
v___jp_1197_:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1200_ = lean_string_append(v___y_1198_, v___y_1199_);
lean_dec_ref(v___y_1199_);
v___x_1201_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
v___x_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
return v___x_1202_;
}
v___jp_1203_:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1206_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1207_ = lean_string_append(v___x_1206_, v_context_1194_);
v___x_1208_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1209_ = lean_string_append(v___x_1207_, v___x_1208_);
v___x_1210_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___closed__1));
v___x_1211_ = lean_string_append(v___x_1209_, v___x_1210_);
v___x_1212_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1213_ = lean_string_append(v___x_1211_, v___x_1212_);
v___x_1214_ = lean_string_append(v___x_1213_, v_received_1205_);
lean_dec_ref(v_received_1205_);
v___x_1215_ = lean_string_utf8_byte_size(v___y_1204_);
v___x_1216_ = lean_unsigned_to_nat(0u);
v___x_1217_ = lean_nat_dec_eq(v___x_1215_, v___x_1216_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1218_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__1));
v___x_1219_ = lean_string_append(v___x_1218_, v___y_1204_);
lean_dec_ref(v___y_1204_);
v___x_1220_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0_spec__1_spec__5___closed__2));
v___x_1221_ = lean_string_append(v___x_1219_, v___x_1220_);
v___y_1198_ = v___x_1214_;
v___y_1199_ = v___x_1221_;
goto v___jp_1197_;
}
else
{
lean_object* v___x_1222_; 
lean_dec_ref(v___y_1204_);
v___x_1222_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___y_1198_ = v___x_1214_;
v___y_1199_ = v___x_1222_;
goto v___jp_1197_;
}
}
v___jp_1223_:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lasm_JS_Data_describe(v_d_1195_);
v___y_1204_ = v___y_1224_;
v_received_1205_ = v___x_1225_;
goto v___jp_1203_;
}
v___jp_1226_:
{
if (lean_obj_tag(v_d_1195_) == 9)
{
lean_object* v_value_1228_; lean_object* v_description_1229_; lean_object* v___x_1230_; uint8_t v___x_1231_; 
v_value_1228_ = lean_ctor_get(v_d_1195_, 0);
v_description_1229_ = lean_ctor_get(v_d_1195_, 1);
v___x_1230_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_1231_ = lean_string_dec_eq(v_description_1229_, v___x_1230_);
if (v___x_1231_ == 0)
{
v___y_1224_ = v_a_1227_;
goto v___jp_1223_;
}
else
{
lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1248_; 
lean_inc(v_value_1228_);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_d_1195_);
if (v_isSharedCheck_1248_ == 0)
{
lean_object* v_unused_1249_; lean_object* v_unused_1250_; 
v_unused_1249_ = lean_ctor_get(v_d_1195_, 1);
lean_dec(v_unused_1249_);
v_unused_1250_ = lean_ctor_get(v_d_1195_, 0);
lean_dec(v_unused_1250_);
v___x_1233_ = v_d_1195_;
v_isShared_1234_ = v_isSharedCheck_1248_;
goto v_resetjp_1232_;
}
else
{
lean_dec(v_d_1195_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1248_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
uint32_t v___x_1235_; uint64_t v___x_1236_; lean_object* v___x_1238_; 
v___x_1235_ = 206;
v___x_1236_ = 0ULL;
lean_inc(v_value_1228_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 1, v___x_1230_);
v___x_1238_ = v___x_1233_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_value_1228_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v___x_1230_);
v___x_1238_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
uint32_t v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lasm_js_value_handle(v_value_1228_);
lean_dec(v_value_1228_);
v___x_1240_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1235_, v___x_1236_, v___x_1238_, v___x_1239_);
lean_dec_ref(v___x_1238_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; uint8_t v___x_1242_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1241_);
lean_dec_ref_known(v___x_1240_, 1);
v___x_1242_ = lean_string_validate_utf8(v_a_1241_);
if (v___x_1242_ == 0)
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
lean_dec(v_a_1241_);
v___x_1243_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6);
v___x_1244_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1243_);
v___y_1204_ = v_a_1227_;
v_received_1205_ = v___x_1244_;
goto v___jp_1203_;
}
else
{
lean_object* v___x_1245_; 
v___x_1245_ = lean_string_from_utf8_unchecked(v_a_1241_);
v___y_1204_ = v_a_1227_;
v_received_1205_ = v___x_1245_;
goto v___jp_1203_;
}
}
else
{
lean_object* v___x_1246_; 
lean_dec_ref_known(v___x_1240_, 1);
v___x_1246_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7));
v___y_1204_ = v_a_1227_;
v_received_1205_ = v___x_1246_;
goto v___jp_1203_;
}
}
}
}
}
else
{
v___y_1224_ = v_a_1227_;
goto v___jp_1223_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1272_, lean_object* v_d_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1272_, v_d_1273_);
lean_dec_ref(v_context_1272_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object* v_args_1276_, lean_object* v_i_1277_){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; 
v___x_1279_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1280_ = lean_unsigned_to_nat(1u);
v___x_1281_ = lean_nat_add(v_i_1277_, v___x_1280_);
v___x_1282_ = l_Nat_reprFast(v___x_1281_);
v___x_1283_ = lean_string_append(v___x_1279_, v___x_1282_);
lean_dec_ref(v___x_1282_);
v___x_1284_ = lean_array_get_size(v_args_1276_);
v___x_1285_ = lean_nat_dec_lt(v_i_1277_, v___x_1284_);
if (v___x_1285_ == 0)
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = lean_box(0);
v___x_1287_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1283_, v___x_1286_);
lean_dec_ref(v___x_1283_);
return v___x_1287_;
}
else
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = lean_array_fget_borrowed(v_args_1276_, v_i_1277_);
lean_inc(v___x_1288_);
v___x_1289_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1283_, v___x_1288_);
lean_dec_ref(v___x_1283_);
return v___x_1289_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object* v_args_1290_, lean_object* v_i_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1290_, v_i_1291_);
lean_dec(v_i_1291_);
lean_dec_ref(v_args_1290_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(lean_object* v___f_1294_, lean_object* v_args_1295_){
_start:
{
lean_object* v___x_1297_; uint8_t v___x_1298_; lean_object* v_val_1300_; lean_object* v___x_1303_; 
v___x_1297_ = lean_unsigned_to_nat(0u);
v___x_1298_ = 0;
v___x_1303_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1295_, v___x_1297_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 1);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_a_1304_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
v_val_1300_ = v___x_1309_;
goto v___jp_1299_;
}
}
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
v_a_1312_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1303_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1303_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 0);
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
v_val_1300_ = v___x_1317_;
goto v___jp_1299_;
}
}
}
v___jp_1299_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1301_, 0, v_val_1300_);
v___x_1302_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1297_, v___x_1298_, v___x_1301_, v___f_1294_);
return v___x_1302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed(lean_object* v___f_1320_, lean_object* v_args_1321_, lean_object* v___y_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(v___f_1320_, v_args_1321_);
lean_dec_ref(v_args_1321_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object* v_f_1325_){
_start:
{
lean_object* v___f_1327_; lean_object* v___f_1328_; lean_object* v___f_1329_; lean_object* v___x_1330_; 
v___f_1327_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___closed__0));
v___f_1328_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1328_, 0, v_f_1325_);
lean_closure_set(v___f_1328_, 1, v___f_1327_);
v___f_1329_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1329_, 0, v___f_1328_);
v___x_1330_ = l_Lasm_JS_Function_ofFn(v___f_1329_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1333_ = v___x_1330_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1330_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
else
{
lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1346_; 
v_a_1339_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1341_ = v___x_1330_;
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1330_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1344_; 
if (v_isShared_1342_ == 0)
{
v___x_1344_ = v___x_1341_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1339_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object* v_f_1347_, lean_object* v_a_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(v_f_1347_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object* v_f_1350_, lean_object* v_args_1351_){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_unsigned_to_nat(0u);
v___x_1354_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1351_, v___x_1353_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; lean_object* v___x_1356_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_a_1355_);
lean_dec_ref_known(v___x_1354_, 1);
v___x_1356_ = lean_apply_2(v_f_1350_, v_a_1355_, lean_box(0));
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1364_; 
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1364_ == 0)
{
lean_object* v_unused_1365_; 
v_unused_1365_ = lean_ctor_get(v___x_1356_, 0);
lean_dec(v_unused_1365_);
v___x_1358_ = v___x_1356_;
v_isShared_1359_ = v_isSharedCheck_1364_;
goto v_resetjp_1357_;
}
else
{
lean_dec(v___x_1356_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1364_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1360_ = lean_box(0);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1360_);
v___x_1362_ = v___x_1358_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
v_a_1366_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1356_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1356_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
else
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
lean_dec_ref(v_f_1350_);
v_a_1374_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1354_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1354_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1382_, lean_object* v_args_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(v_f_1382_, v_args_1383_);
lean_dec_ref(v_args_1383_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object* v_f_1386_){
_start:
{
lean_object* v___f_1388_; lean_object* v___x_1389_; 
v___f_1388_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1388_, 0, v_f_1386_);
v___x_1389_ = l_Lasm_JS_Function_ofSyncFn(v___f_1388_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___x_1389_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
v_a_1398_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v___x_1389_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1389_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object* v_f_1406_, lean_object* v_a_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(v_f_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object* v___f_1415_, lean_object* v___f_1416_, lean_object* v___f_1417_, lean_object* v___f_1418_, lean_object* v___f_1419_, lean_object* v___f_1420_, lean_object* v___f_1421_, lean_object* v_d_1422_){
_start:
{
lean_object* v_signal_1423_; lean_object* v_onError_1424_; lean_object* v_onListen_1425_; lean_object* v_automaticCompression_1426_; lean_object* v_transport_1427_; lean_object* v_port_1428_; lean_object* v_hostname_1429_; lean_object* v_reusePort_1430_; lean_object* v_tcpBacklog_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v_signal_1423_ = lean_ctor_get(v_d_1422_, 0);
lean_inc(v_signal_1423_);
v_onError_1424_ = lean_ctor_get(v_d_1422_, 1);
lean_inc(v_onError_1424_);
v_onListen_1425_ = lean_ctor_get(v_d_1422_, 2);
lean_inc(v_onListen_1425_);
v_automaticCompression_1426_ = lean_ctor_get(v_d_1422_, 3);
lean_inc(v_automaticCompression_1426_);
v_transport_1427_ = lean_ctor_get(v_d_1422_, 4);
lean_inc(v_transport_1427_);
v_port_1428_ = lean_ctor_get(v_d_1422_, 5);
lean_inc(v_port_1428_);
v_hostname_1429_ = lean_ctor_get(v_d_1422_, 6);
lean_inc(v_hostname_1429_);
v_reusePort_1430_ = lean_ctor_get(v_d_1422_, 7);
lean_inc(v_reusePort_1430_);
v_tcpBacklog_1431_ = lean_ctor_get(v_d_1422_, 8);
lean_inc(v_tcpBacklog_1431_);
lean_dec_ref(v_d_1422_);
v___x_1432_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1433_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1415_, v_signal_1423_);
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1432_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1436_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1416_, v_onError_1424_);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1439_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1417_, v_onListen_1425_);
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1418_);
v___x_1442_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1418_, v_automaticCompression_1426_);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1441_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1445_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1419_, v_transport_1427_);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1420_);
v___x_1448_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1420_, v_port_1428_);
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1447_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1451_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1421_, v_hostname_1429_);
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1450_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1454_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1418_, v_reusePort_1430_);
v___x_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1453_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1457_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1420_, v_tcpBacklog_1431_);
v___x_1458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1456_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = lean_unsigned_to_nat(9u);
v___x_1460_ = lean_mk_empty_array_with_capacity(v___x_1459_);
v___x_1461_ = lean_array_push(v___x_1460_, v___x_1434_);
v___x_1462_ = lean_array_push(v___x_1461_, v___x_1437_);
v___x_1463_ = lean_array_push(v___x_1462_, v___x_1440_);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1443_);
v___x_1465_ = lean_array_push(v___x_1464_, v___x_1446_);
v___x_1466_ = lean_array_push(v___x_1465_, v___x_1449_);
v___x_1467_ = lean_array_push(v___x_1466_, v___x_1452_);
v___x_1468_ = lean_array_push(v___x_1467_, v___x_1455_);
v___x_1469_ = lean_array_push(v___x_1468_, v___x_1458_);
v___x_1470_ = l_Lasm_JS_Web_Support_fields(v___x_1469_);
lean_dec_ref(v___x_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object* v___f_1486_, lean_object* v___f_1487_, lean_object* v___f_1488_, lean_object* v___f_1489_, lean_object* v___f_1490_, lean_object* v___f_1491_, lean_object* v___f_1492_, lean_object* v___f_1493_, lean_object* v_d_1494_){
_start:
{
lean_object* v_signal_1495_; lean_object* v_onError_1496_; lean_object* v_onListen_1497_; lean_object* v_automaticCompression_1498_; lean_object* v_transport_1499_; lean_object* v_port_1500_; lean_object* v_hostname_1501_; lean_object* v_reusePort_1502_; lean_object* v_tcpBacklog_1503_; lean_object* v_keyFormat_1504_; lean_object* v_key_1505_; lean_object* v_cert_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_signal_1495_ = lean_ctor_get(v_d_1494_, 0);
lean_inc(v_signal_1495_);
v_onError_1496_ = lean_ctor_get(v_d_1494_, 1);
lean_inc(v_onError_1496_);
v_onListen_1497_ = lean_ctor_get(v_d_1494_, 2);
lean_inc(v_onListen_1497_);
v_automaticCompression_1498_ = lean_ctor_get(v_d_1494_, 3);
lean_inc(v_automaticCompression_1498_);
v_transport_1499_ = lean_ctor_get(v_d_1494_, 4);
lean_inc(v_transport_1499_);
v_port_1500_ = lean_ctor_get(v_d_1494_, 5);
lean_inc(v_port_1500_);
v_hostname_1501_ = lean_ctor_get(v_d_1494_, 6);
lean_inc(v_hostname_1501_);
v_reusePort_1502_ = lean_ctor_get(v_d_1494_, 7);
lean_inc(v_reusePort_1502_);
v_tcpBacklog_1503_ = lean_ctor_get(v_d_1494_, 8);
lean_inc(v_tcpBacklog_1503_);
v_keyFormat_1504_ = lean_ctor_get(v_d_1494_, 9);
lean_inc(v_keyFormat_1504_);
v_key_1505_ = lean_ctor_get(v_d_1494_, 10);
lean_inc_ref(v_key_1505_);
v_cert_1506_ = lean_ctor_get(v_d_1494_, 11);
lean_inc_ref(v_cert_1506_);
lean_dec_ref(v_d_1494_);
v___x_1507_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1508_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1486_, v_signal_1495_);
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1507_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
v___x_1510_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1511_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1487_, v_onError_1496_);
v___x_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1514_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1488_, v_onListen_1497_);
v___x_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1513_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
lean_inc_ref(v___f_1489_);
v___x_1517_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1489_, v_automaticCompression_1498_);
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1516_);
lean_ctor_set(v___x_1518_, 1, v___x_1517_);
v___x_1519_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1520_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1490_, v_transport_1499_);
v___x_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1519_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
lean_inc_ref(v___f_1491_);
v___x_1523_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1491_, v_port_1500_);
v___x_1524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1522_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1526_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1492_, v_hostname_1501_);
v___x_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1525_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
v___x_1528_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1529_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1489_, v_reusePort_1502_);
v___x_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1528_);
lean_ctor_set(v___x_1530_, 1, v___x_1529_);
v___x_1531_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1532_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1491_, v_tcpBacklog_1503_);
v___x_1533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1531_);
lean_ctor_set(v___x_1533_, 1, v___x_1532_);
v___x_1534_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_1535_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1493_, v_keyFormat_1504_);
v___x_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1534_);
lean_ctor_set(v___x_1536_, 1, v___x_1535_);
v___x_1537_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_1538_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1538_, 0, v_key_1505_);
v___x_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1537_);
lean_ctor_set(v___x_1539_, 1, v___x_1538_);
v___x_1540_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_1541_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1541_, 0, v_cert_1506_);
v___x_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1540_);
lean_ctor_set(v___x_1542_, 1, v___x_1541_);
v___x_1543_ = lean_unsigned_to_nat(12u);
v___x_1544_ = lean_mk_empty_array_with_capacity(v___x_1543_);
v___x_1545_ = lean_array_push(v___x_1544_, v___x_1509_);
v___x_1546_ = lean_array_push(v___x_1545_, v___x_1512_);
v___x_1547_ = lean_array_push(v___x_1546_, v___x_1515_);
v___x_1548_ = lean_array_push(v___x_1547_, v___x_1518_);
v___x_1549_ = lean_array_push(v___x_1548_, v___x_1521_);
v___x_1550_ = lean_array_push(v___x_1549_, v___x_1524_);
v___x_1551_ = lean_array_push(v___x_1550_, v___x_1527_);
v___x_1552_ = lean_array_push(v___x_1551_, v___x_1530_);
v___x_1553_ = lean_array_push(v___x_1552_, v___x_1533_);
v___x_1554_ = lean_array_push(v___x_1553_, v___x_1536_);
v___x_1555_ = lean_array_push(v___x_1554_, v___x_1539_);
v___x_1556_ = lean_array_push(v___x_1555_, v___x_1542_);
v___x_1557_ = l_Lasm_JS_Web_Support_fields(v___x_1556_);
lean_dec_ref(v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___lam__0(lean_object* v_x_1567_){
_start:
{
if (lean_obj_tag(v_x_1567_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1577_; 
v_a_1569_ = lean_ctor_get(v_x_1567_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v_x_1567_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1571_ = v_x_1567_;
v_isShared_1572_ = v_isSharedCheck_1577_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v_x_1567_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1577_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v___x_1575_; 
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
return v___x_1575_;
}
}
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1579_; 
v_a_1578_ = lean_ctor_get(v_x_1567_, 0);
lean_inc(v_a_1578_);
lean_dec_ref_known(v_x_1567_, 1);
v___x_1579_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_1578_);
return v___x_1579_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___lam__0___boxed(lean_object* v_x_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lasm_JS_Deno_HttpServer_finished___lam__0(v_x_1580_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object* v_self_1585_){
_start:
{
lean_object* v___f_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; lean_object* v_val_1592_; lean_object* v___x_1595_; 
v___f_1587_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_1588_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__1));
v___x_1589_ = lean_unsigned_to_nat(0u);
v___x_1590_ = 0;
v___x_1595_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1585_, v___x_1588_);
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v___x_1595_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
lean_ctor_set_tag(v___x_1598_, 1);
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
v_val_1592_ = v___x_1601_;
goto v___jp_1591_;
}
}
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
v_a_1604_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1595_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1595_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
lean_ctor_set_tag(v___x_1606_, 0);
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
v_val_1592_ = v___x_1609_;
goto v___jp_1591_;
}
}
}
v___jp_1591_:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1593_, 0, v_val_1592_);
v___x_1594_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1589_, v___x_1590_, v___x_1593_, v___f_1587_);
return v___x_1594_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object* v_self_1612_, lean_object* v_a_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lasm_JS_Deno_HttpServer_finished(v_self_1612_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0_spec__0(lean_object* v_context_1615_, lean_object* v_bytes_1616_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1616_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v___x_1620_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1618_, 1);
v___x_1620_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1615_, v_a_1619_);
return v___x_1620_;
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1628_; 
v_a_1621_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1623_ = v___x_1618_;
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1618_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1626_; 
if (v_isShared_1624_ == 0)
{
v___x_1626_ = v___x_1623_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_a_1621_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0_spec__0___boxed(lean_object* v_context_1629_, lean_object* v_bytes_1630_, lean_object* v_a_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0_spec__0(v_context_1629_, v_bytes_1630_);
lean_dec_ref(v_bytes_1630_);
lean_dec_ref(v_context_1629_);
return v_res_1632_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1633_; uint64_t v___x_1634_; 
v___x_1633_ = 0;
v___x_1634_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0(lean_object* v_o_1636_, lean_object* v_key_1637_){
_start:
{
lean_object* v_k_1639_; lean_object* v___x_1640_; 
v_k_1639_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1639_, 0, v_key_1637_);
v___x_1640_ = l_Lasm_JS_Wire_encodeIO(v_k_1639_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; uint32_t v___x_1642_; uint32_t v___x_1643_; uint64_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = 203;
v___x_1643_ = lasm_js_value_handle(v_o_1636_);
v___x_1644_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__0);
v___x_1645_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_1646_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1646_, 0, v_o_1636_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = lean_unsigned_to_nat(2u);
v___x_1648_ = lean_mk_empty_array_with_capacity(v___x_1647_);
lean_inc_ref(v_k_1639_);
v___x_1649_ = lean_array_push(v___x_1648_, v_k_1639_);
v___x_1650_ = lean_array_push(v___x_1649_, v___x_1646_);
v___x_1651_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
v___x_1652_ = lasm_js_call(v___x_1642_, v___x_1643_, v___x_1644_, v_a_1641_, v___x_1651_);
lean_dec_ref_known(v___x_1651_, 1);
lean_dec(v_a_1641_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v___x_1652_, 1);
v___x_1654_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___closed__1));
v___x_1655_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1639_);
v___x_1656_ = lean_string_append(v___x_1654_, v___x_1655_);
lean_dec_ref(v___x_1655_);
v___x_1657_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0_spec__0(v___x_1656_, v_a_1653_);
lean_dec(v_a_1653_);
lean_dec_ref(v___x_1656_);
return v___x_1657_;
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
lean_dec_ref_known(v_k_1639_, 1);
v_a_1658_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1652_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1652_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_dec_ref_known(v_k_1639_, 1);
lean_dec(v_o_1636_);
v_a_1666_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1640_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1640_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0___boxed(lean_object* v_o_1674_, lean_object* v_key_1675_, lean_object* v_a_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0(v_o_1674_, v_key_1675_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr(lean_object* v_self_1679_){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_1682_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_HttpServer_addr_spec__0(v_self_1679_, v___x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr___boxed(lean_object* v_self_1683_, lean_object* v_a_1684_){
_start:
{
lean_object* v_res_1685_; 
v_res_1685_ = l_Lasm_JS_Deno_HttpServer_addr(v_self_1683_);
return v_res_1685_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2(void){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__1));
v___x_1690_ = l_Lasm_JS_Web_Support_args(v___x_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref(lean_object* v_self_1691_){
_start:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1693_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_1694_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1695_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1691_, v___x_1693_, v___x_1694_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref___boxed(lean_object* v_self_1696_, lean_object* v_a_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l_Lasm_JS_Deno_HttpServer_ref(v_self_1696_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref(lean_object* v_self_1700_){
_start:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1702_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_1703_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1704_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1700_, v___x_1702_, v___x_1703_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref___boxed(lean_object* v_self_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lasm_JS_Deno_HttpServer_unref(v_self_1705_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown(lean_object* v_self_1709_){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_1712_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_1713_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1709_, v___x_1711_, v___x_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___boxed(lean_object* v_self_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lasm_JS_Deno_HttpServer_shutdown(v_self_1714_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve(lean_object* v_handler_1726_){
_start:
{
uint8_t v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1728_ = 0;
v___x_1729_ = lean_unsigned_to_nat(1u);
v___x_1730_ = ((lean_object*)(l_Lasm_JS_Deno_serve___closed__3));
v___x_1731_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_1732_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1732_, 0, v_handler_1726_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
v___x_1733_ = lean_mk_empty_array_with_capacity(v___x_1729_);
v___x_1734_ = lean_array_push(v___x_1733_, v___x_1732_);
v___x_1735_ = l_Lasm_JS_Web_Support_args(v___x_1734_);
v___x_1736_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1730_, v___x_1735_, v___x_1728_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1736_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1736_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
else
{
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
v_a_1745_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1747_ = v___x_1736_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1736_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve___boxed(lean_object* v_handler_1753_, lean_object* v_a_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lasm_JS_Deno_serve(v_handler_1753_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(lean_object* v_x_1756_){
_start:
{
if (lean_obj_tag(v_x_1756_) == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_box(0);
return v___x_1757_;
}
else
{
lean_object* v_val_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v_val_1758_ = lean_ctor_get(v_x_1756_, 0);
v___x_1759_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_1758_);
v___x_1760_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1760_, 0, v_val_1758_);
lean_ctor_set(v___x_1760_, 1, v___x_1759_);
return v___x_1760_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0___boxed(lean_object* v_x_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_x_1761_);
lean_dec(v_x_1761_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(lean_object* v_x_1763_){
_start:
{
if (lean_obj_tag(v_x_1763_) == 0)
{
lean_object* v___x_1764_; 
v___x_1764_ = lean_box(0);
return v___x_1764_;
}
else
{
lean_object* v_val_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v_val_1765_ = lean_ctor_get(v_x_1763_, 0);
v___x_1766_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_1765_);
v___x_1767_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1767_, 0, v_val_1765_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
return v___x_1767_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1___boxed(lean_object* v_x_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_x_1768_);
lean_dec(v_x_1768_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(lean_object* v_x_1770_){
_start:
{
if (lean_obj_tag(v_x_1770_) == 0)
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_box(0);
return v___x_1771_;
}
else
{
lean_object* v___x_1772_; 
v___x_1772_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0___closed__1));
return v___x_1772_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2___boxed(lean_object* v_x_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_x_1773_);
lean_dec(v_x_1773_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions(lean_object* v_options_1782_, lean_object* v_handler_1783_){
_start:
{
lean_object* v_signal_1785_; lean_object* v_onError_1786_; lean_object* v_onListen_1787_; lean_object* v_automaticCompression_1788_; lean_object* v_transport_1789_; lean_object* v_port_1790_; lean_object* v_hostname_1791_; lean_object* v_reusePort_1792_; lean_object* v_tcpBacklog_1793_; uint8_t v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v_signal_1785_ = lean_ctor_get(v_options_1782_, 0);
lean_inc(v_signal_1785_);
v_onError_1786_ = lean_ctor_get(v_options_1782_, 1);
lean_inc(v_onError_1786_);
v_onListen_1787_ = lean_ctor_get(v_options_1782_, 2);
lean_inc(v_onListen_1787_);
v_automaticCompression_1788_ = lean_ctor_get(v_options_1782_, 3);
lean_inc(v_automaticCompression_1788_);
v_transport_1789_ = lean_ctor_get(v_options_1782_, 4);
lean_inc(v_transport_1789_);
v_port_1790_ = lean_ctor_get(v_options_1782_, 5);
lean_inc(v_port_1790_);
v_hostname_1791_ = lean_ctor_get(v_options_1782_, 6);
lean_inc(v_hostname_1791_);
v_reusePort_1792_ = lean_ctor_get(v_options_1782_, 7);
lean_inc(v_reusePort_1792_);
v_tcpBacklog_1793_ = lean_ctor_get(v_options_1782_, 8);
lean_inc(v_tcpBacklog_1793_);
lean_dec_ref(v_options_1782_);
v___x_1794_ = 0;
v___x_1795_ = lean_unsigned_to_nat(2u);
v___x_1796_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithOptions___closed__1));
v___x_1797_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1798_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1785_);
lean_dec(v_signal_1785_);
v___x_1799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1797_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1801_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_1786_);
lean_dec(v_onError_1786_);
v___x_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1800_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
v___x_1803_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1804_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_1787_);
lean_dec(v_onListen_1787_);
v___x_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1803_);
lean_ctor_set(v___x_1805_, 1, v___x_1804_);
v___x_1806_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_1807_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_1788_);
lean_dec(v_automaticCompression_1788_);
v___x_1808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1806_);
lean_ctor_set(v___x_1808_, 1, v___x_1807_);
v___x_1809_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1810_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_1789_);
lean_dec(v_transport_1789_);
v___x_1811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1809_);
lean_ctor_set(v___x_1811_, 1, v___x_1810_);
v___x_1812_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_1813_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_1790_);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1812_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
v___x_1815_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1816_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1791_);
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
v___x_1818_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1819_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1792_);
lean_dec(v_reusePort_1792_);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1818_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1822_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_1793_);
v___x_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1821_);
lean_ctor_set(v___x_1823_, 1, v___x_1822_);
v___x_1824_ = lean_unsigned_to_nat(9u);
v___x_1825_ = lean_mk_empty_array_with_capacity(v___x_1824_);
v___x_1826_ = lean_array_push(v___x_1825_, v___x_1799_);
v___x_1827_ = lean_array_push(v___x_1826_, v___x_1802_);
v___x_1828_ = lean_array_push(v___x_1827_, v___x_1805_);
v___x_1829_ = lean_array_push(v___x_1828_, v___x_1808_);
v___x_1830_ = lean_array_push(v___x_1829_, v___x_1811_);
v___x_1831_ = lean_array_push(v___x_1830_, v___x_1814_);
v___x_1832_ = lean_array_push(v___x_1831_, v___x_1817_);
v___x_1833_ = lean_array_push(v___x_1832_, v___x_1820_);
v___x_1834_ = lean_array_push(v___x_1833_, v___x_1823_);
v___x_1835_ = l_Lasm_JS_Web_Support_fields(v___x_1834_);
lean_dec_ref(v___x_1834_);
v___x_1836_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_1837_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1837_, 0, v_handler_1783_);
lean_ctor_set(v___x_1837_, 1, v___x_1836_);
v___x_1838_ = lean_mk_empty_array_with_capacity(v___x_1795_);
v___x_1839_ = lean_array_push(v___x_1838_, v___x_1835_);
v___x_1840_ = lean_array_push(v___x_1839_, v___x_1837_);
v___x_1841_ = l_Lasm_JS_Web_Support_args(v___x_1840_);
v___x_1842_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1796_, v___x_1841_, v___x_1794_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
v_a_1851_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1842_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1842_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions___boxed(lean_object* v_options_1859_, lean_object* v_handler_1860_, lean_object* v_a_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Lasm_JS_Deno_serveWithOptions(v_options_1859_, v_handler_1860_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(lean_object* v_x_1863_){
_start:
{
if (lean_obj_tag(v_x_1863_) == 0)
{
lean_object* v___x_1864_; 
v___x_1864_ = lean_box(0);
return v___x_1864_;
}
else
{
lean_object* v___x_1865_; 
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat___lam__0___closed__1));
return v___x_1865_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0___boxed(lean_object* v_x_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_x_1866_);
lean_dec(v_x_1866_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions(lean_object* v_tlsOptions_1875_, lean_object* v_handler_1876_){
_start:
{
lean_object* v_signal_1878_; lean_object* v_onError_1879_; lean_object* v_onListen_1880_; lean_object* v_automaticCompression_1881_; lean_object* v_transport_1882_; lean_object* v_port_1883_; lean_object* v_hostname_1884_; lean_object* v_reusePort_1885_; lean_object* v_tcpBacklog_1886_; lean_object* v_keyFormat_1887_; lean_object* v_key_1888_; lean_object* v_cert_1889_; uint8_t v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v_signal_1878_ = lean_ctor_get(v_tlsOptions_1875_, 0);
lean_inc(v_signal_1878_);
v_onError_1879_ = lean_ctor_get(v_tlsOptions_1875_, 1);
lean_inc(v_onError_1879_);
v_onListen_1880_ = lean_ctor_get(v_tlsOptions_1875_, 2);
lean_inc(v_onListen_1880_);
v_automaticCompression_1881_ = lean_ctor_get(v_tlsOptions_1875_, 3);
lean_inc(v_automaticCompression_1881_);
v_transport_1882_ = lean_ctor_get(v_tlsOptions_1875_, 4);
lean_inc(v_transport_1882_);
v_port_1883_ = lean_ctor_get(v_tlsOptions_1875_, 5);
lean_inc(v_port_1883_);
v_hostname_1884_ = lean_ctor_get(v_tlsOptions_1875_, 6);
lean_inc(v_hostname_1884_);
v_reusePort_1885_ = lean_ctor_get(v_tlsOptions_1875_, 7);
lean_inc(v_reusePort_1885_);
v_tcpBacklog_1886_ = lean_ctor_get(v_tlsOptions_1875_, 8);
lean_inc(v_tcpBacklog_1886_);
v_keyFormat_1887_ = lean_ctor_get(v_tlsOptions_1875_, 9);
lean_inc(v_keyFormat_1887_);
v_key_1888_ = lean_ctor_get(v_tlsOptions_1875_, 10);
lean_inc_ref(v_key_1888_);
v_cert_1889_ = lean_ctor_get(v_tlsOptions_1875_, 11);
lean_inc_ref(v_cert_1889_);
lean_dec_ref(v_tlsOptions_1875_);
v___x_1890_ = 0;
v___x_1891_ = lean_unsigned_to_nat(2u);
v___x_1892_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithTlsOptions___closed__1));
v___x_1893_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_1894_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1878_);
lean_dec(v_signal_1878_);
v___x_1895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1893_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
v___x_1896_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_1897_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_1879_);
lean_dec(v_onError_1879_);
v___x_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1896_);
lean_ctor_set(v___x_1898_, 1, v___x_1897_);
v___x_1899_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_1900_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_1880_);
lean_dec(v_onListen_1880_);
v___x_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1899_);
lean_ctor_set(v___x_1901_, 1, v___x_1900_);
v___x_1902_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_1903_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_1881_);
lean_dec(v_automaticCompression_1881_);
v___x_1904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1904_, 0, v___x_1902_);
lean_ctor_set(v___x_1904_, 1, v___x_1903_);
v___x_1905_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__0));
v___x_1906_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_1882_);
lean_dec(v_transport_1882_);
v___x_1907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1905_);
lean_ctor_set(v___x_1907_, 1, v___x_1906_);
v___x_1908_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__2));
v___x_1909_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_1883_);
v___x_1910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1908_);
lean_ctor_set(v___x_1910_, 1, v___x_1909_);
v___x_1911_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___closed__1));
v___x_1912_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1884_);
v___x_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1911_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__4));
v___x_1915_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1885_);
lean_dec(v_reusePort_1885_);
v___x_1916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1914_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
v___x_1917_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__5));
v___x_1918_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_1886_);
v___x_1919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1917_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
v___x_1920_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_1921_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_keyFormat_1887_);
lean_dec(v_keyFormat_1887_);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1920_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1923_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_1924_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_key_1888_);
v___x_1925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1923_);
lean_ctor_set(v___x_1925_, 1, v___x_1924_);
v___x_1926_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_1927_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1927_, 0, v_cert_1889_);
v___x_1928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1926_);
lean_ctor_set(v___x_1928_, 1, v___x_1927_);
v___x_1929_ = lean_unsigned_to_nat(12u);
v___x_1930_ = lean_mk_empty_array_with_capacity(v___x_1929_);
v___x_1931_ = lean_array_push(v___x_1930_, v___x_1895_);
v___x_1932_ = lean_array_push(v___x_1931_, v___x_1898_);
v___x_1933_ = lean_array_push(v___x_1932_, v___x_1901_);
v___x_1934_ = lean_array_push(v___x_1933_, v___x_1904_);
v___x_1935_ = lean_array_push(v___x_1934_, v___x_1907_);
v___x_1936_ = lean_array_push(v___x_1935_, v___x_1910_);
v___x_1937_ = lean_array_push(v___x_1936_, v___x_1913_);
v___x_1938_ = lean_array_push(v___x_1937_, v___x_1916_);
v___x_1939_ = lean_array_push(v___x_1938_, v___x_1919_);
v___x_1940_ = lean_array_push(v___x_1939_, v___x_1922_);
v___x_1941_ = lean_array_push(v___x_1940_, v___x_1925_);
v___x_1942_ = lean_array_push(v___x_1941_, v___x_1928_);
v___x_1943_ = l_Lasm_JS_Web_Support_fields(v___x_1942_);
lean_dec_ref(v___x_1942_);
v___x_1944_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_1945_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1945_, 0, v_handler_1876_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = lean_mk_empty_array_with_capacity(v___x_1891_);
v___x_1947_ = lean_array_push(v___x_1946_, v___x_1943_);
v___x_1948_ = lean_array_push(v___x_1947_, v___x_1945_);
v___x_1949_ = l_Lasm_JS_Web_Support_args(v___x_1948_);
v___x_1950_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1892_, v___x_1949_, v___x_1890_);
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1950_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1950_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
else
{
lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1966_; 
v_a_1959_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_1966_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_1966_ == 0)
{
v___x_1961_ = v___x_1950_;
v_isShared_1962_ = v_isSharedCheck_1966_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v___x_1950_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1966_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1964_; 
if (v_isShared_1962_ == 0)
{
v___x_1964_ = v___x_1961_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v_a_1959_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___boxed(lean_object* v_tlsOptions_1967_, lean_object* v_handler_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lasm_JS_Deno_serveWithTlsOptions(v_tlsOptions_1967_, v_handler_1968_);
return v_res_1970_;
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
l_Lasm_JS_Deno_instFromJSServeHandlerInfo = _init_l_Lasm_JS_Deno_instFromJSServeHandlerInfo();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSServeHandlerInfo);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
