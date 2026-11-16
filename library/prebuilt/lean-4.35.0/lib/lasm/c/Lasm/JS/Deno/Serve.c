// Lean compiler output
// Module: Lasm.JS.Deno.Serve
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Fetch public import Lasm.JS.Deno.Net
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
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
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
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnVsockAddr_localAddr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnVsockAddr_localAddr_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.ServeHandlerInfo"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSHttpServerUnixAddr = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.HttpServerUnixAddr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServerUnixAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfoUnixAddr = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Deno.ServeHandlerInfoUnixAddr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSHttpServerVsockAddr = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Deno.HttpServerVsockAddr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServerVsockAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfoVsockAddr = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Deno.ServeHandlerInfoVsockAddr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__1_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Deno.ServeUnixOptionsTransport.unix"};
static const lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2;
static lean_once_cell_t l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprServeUnixOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unix"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Deno.ServeUnixOptionsTransport"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lasm.JS.Deno.ServeVsockOptionsTransport.vsock"};
static const lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprServeVsockOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeVsockOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instReprServeVsockOptionsTransport___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vsock"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Deno.ServeVsockOptionsTransport"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___closed__2_value;
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
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tcp"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__0_value)}};
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
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Deno.ServeTcpTlsOptionsKeyFormat.pem"};
static const lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pem"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Deno.ServeTcpTlsOptionsKeyFormat"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___closed__2_value;
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
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsUnixAddrOnError = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Deno.ServeOptionsUnixAddrOnError"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnError___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1;
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2;
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3;
static lean_once_cell_t l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsUnixAddrOnListen = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Deno.ServeOptionsUnixAddrOnListen"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsUnixAddrOnListen___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onError"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onListen"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "automaticCompression"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transport"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerUnixAddr = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.ServeHandlerUnixAddr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerUnixAddr___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsVsockAddrOnError = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Deno.ServeOptionsVsockAddrOnError"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnError___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsVsockAddrOnListen = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lasm.JS.Deno.ServeOptionsVsockAddrOnListen"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsVsockAddrOnListen___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cid"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeVsockOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeVsockOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerVsockAddr = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Deno.ServeHandlerVsockAddr"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeHandlerVsockAddr___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsOnError = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Deno.ServeOptionsOnError"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnError = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnError___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsOnListen = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.ServeOptionsOnListen"};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnListen = (const lean_object*)&l_Lasm_JS_Deno_instFromJSServeOptionsOnListen___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reusePort"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tcpBacklog"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0, .m_arity = 8, .m_num_fixed = 7, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "keyFormat"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cert"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*8, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0, .m_arity = 9, .m_num_fixed = 8, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeUnixOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___closed__0_value)} };
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
static const lean_string_object l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "remoteAddr"};
static const lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "completed"};
static const lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_finished(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_finished___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_addr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_addr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_ref___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_unref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_unref___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_shutdown(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_shutdown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_remoteAddr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_remoteAddr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_completed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_completed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_finished(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_finished___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_addr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_addr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_ref___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_unref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_unref___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_shutdown(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_shutdown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_remoteAddr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_remoteAddr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_completed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_completed___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_serveWithUnixOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.serveWithUnixOptions"};
static const lean_object* l_Lasm_JS_Deno_serveWithUnixOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_serveWithUnixOptions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_serveWithUnixOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_serveWithUnixOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_serveWithUnixOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_serveWithUnixOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithUnixOptions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithUnixOptions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__2___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_serveWithVsockOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Deno.serveWithVsockOptions"};
static const lean_object* l_Lasm_JS_Deno_serveWithVsockOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_serveWithVsockOptions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_serveWithVsockOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_serveWithVsockOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_serve___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_serveWithVsockOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_serveWithVsockOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithVsockOptions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithVsockOptions___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___redArg(){
_start:
{
uint8_t v___x_58_; 
v___x_58_ = 1;
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___redArg___boxed(lean_object* v___dummy_59_){
_start:
{
uint8_t v_res_60_; lean_object* v_r_61_; 
v_res_60_ = l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___redArg();
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq(lean_object* v_x_62_, lean_object* v_y_63_){
_start:
{
uint8_t v___x_64_; 
v___x_64_ = 1;
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___boxed(lean_object* v_x_65_, lean_object* v_y_66_){
_start:
{
uint8_t v_res_67_; lean_object* v_r_68_; 
v_res_67_ = l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq(v_x_65_, v_y_66_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(2u);
v___x_75_ = lean_nat_to_int(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = lean_nat_to_int(v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg(lean_object* v_prec_78_){
_start:
{
lean_object* v___y_80_; lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(1024u);
v___x_87_ = lean_nat_dec_le(v___x_86_, v_prec_78_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___y_80_ = v___x_88_;
goto v___jp_79_;
}
else
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___y_80_ = v___x_89_;
goto v___jp_79_;
}
v___jp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_81_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__1));
lean_inc(v___y_80_);
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___y_80_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = l_Repr_addAppParen(v___x_84_, v_prec_78_);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___boxed(lean_object* v_prec_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg(v_prec_90_);
lean_dec(v_prec_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr(lean_object* v_x_92_, lean_object* v_prec_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg(v_prec_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___boxed(lean_object* v_x_95_, lean_object* v_prec_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr(v_x_95_, v_prec_96_);
lean_dec(v_prec_96_);
return v_res_97_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport_default(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_box(0);
return v___x_100_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_box(0);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0(lean_object* v_x_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__1));
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0(lean_object* v_x_114_){
_start:
{
if (lean_obj_tag(v_x_114_) == 4)
{
lean_object* v_s_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v_s_117_ = lean_ctor_get(v_x_114_, 0);
v___x_118_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__0));
v___x_119_ = lean_string_dec_eq(v_s_117_, v___x_118_);
if (v___x_119_ == 0)
{
goto v___jp_115_;
}
else
{
lean_object* v___x_120_; 
v___x_120_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__2));
return v___x_120_;
}
}
else
{
goto v___jp_115_;
}
v___jp_115_:
{
lean_object* v___x_116_; 
v___x_116_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__1));
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___boxed(lean_object* v_x_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0(v_x_121_);
lean_dec(v_x_121_);
return v_res_122_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq___redArg(){
_start:
{
uint8_t v___x_131_; 
v___x_131_ = 1;
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq___redArg___boxed(lean_object* v___dummy_132_){
_start:
{
uint8_t v_res_133_; lean_object* v_r_134_; 
v_res_133_ = l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq___redArg();
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq(lean_object* v_x_135_, lean_object* v_y_136_){
_start:
{
uint8_t v___x_137_; 
v___x_137_ = 1;
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq___boxed(lean_object* v_x_138_, lean_object* v_y_139_){
_start:
{
uint8_t v_res_140_; lean_object* v_r_141_; 
v_res_140_ = l_Lasm_JS_Deno_instBEqServeVsockOptionsTransport_beq(v_x_138_, v_y_139_);
v_r_141_ = lean_box(v_res_140_);
return v_r_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg(lean_object* v_prec_147_){
_start:
{
lean_object* v___y_149_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(1024u);
v___x_156_ = lean_nat_dec_le(v___x_155_, v_prec_147_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___y_149_ = v___x_157_;
goto v___jp_148_;
}
else
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___y_149_ = v___x_158_;
goto v___jp_148_;
}
v___jp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_150_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___closed__1));
lean_inc(v___y_149_);
v___x_151_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_151_, 0, v___y_149_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
v___x_152_ = 0;
v___x_153_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_153_, 0, v___x_151_);
lean_ctor_set_uint8(v___x_153_, sizeof(void*)*1, v___x_152_);
v___x_154_ = l_Repr_addAppParen(v___x_153_, v_prec_147_);
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg___boxed(lean_object* v_prec_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg(v_prec_159_);
lean_dec(v_prec_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr(lean_object* v_x_161_, lean_object* v_prec_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___redArg(v_prec_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr___boxed(lean_object* v_x_164_, lean_object* v_prec_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lasm_JS_Deno_instReprServeVsockOptionsTransport_repr(v_x_164_, v_prec_165_);
lean_dec(v_prec_165_);
return v_res_166_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport_default(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_box(0);
return v___x_169_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_box(0);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0(lean_object* v_x_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__1));
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0(lean_object* v_x_182_){
_start:
{
if (lean_obj_tag(v_x_182_) == 4)
{
lean_object* v_s_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
v_s_185_ = lean_ctor_get(v_x_182_, 0);
v___x_186_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__0));
v___x_187_ = lean_string_dec_eq(v_s_185_, v___x_186_);
if (v___x_187_ == 0)
{
goto v___jp_183_;
}
else
{
lean_object* v___x_188_; 
v___x_188_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___closed__1));
return v___x_188_;
}
}
else
{
goto v___jp_183_;
}
v___jp_183_:
{
lean_object* v___x_184_; 
v___x_184_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___closed__0));
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0___boxed(lean_object* v_x_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lasm_JS_Deno_instFromJSServeVsockOptionsTransport___lam__0(v_x_189_);
lean_dec(v_x_189_);
return v_res_190_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg(){
_start:
{
uint8_t v___x_199_; 
v___x_199_ = 1;
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg___boxed(lean_object* v___dummy_200_){
_start:
{
uint8_t v_res_201_; lean_object* v_r_202_; 
v_res_201_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg();
v_r_202_ = lean_box(v_res_201_);
return v_r_202_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(lean_object* v_x_203_, lean_object* v_y_204_){
_start:
{
uint8_t v___x_205_; 
v___x_205_ = 1;
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed(lean_object* v_x_206_, lean_object* v_y_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(v_x_206_, v_y_207_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(lean_object* v_prec_215_){
_start:
{
lean_object* v___y_217_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_223_ = lean_unsigned_to_nat(1024u);
v___x_224_ = lean_nat_dec_le(v___x_223_, v_prec_215_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; 
v___x_225_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___y_217_ = v___x_225_;
goto v___jp_216_;
}
else
{
lean_object* v___x_226_; 
v___x_226_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___y_217_ = v___x_226_;
goto v___jp_216_;
}
v___jp_216_:
{
lean_object* v___x_218_; lean_object* v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_218_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__1));
lean_inc(v___y_217_);
v___x_219_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_219_, 0, v___y_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = 0;
v___x_221_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set_uint8(v___x_221_, sizeof(void*)*1, v___x_220_);
v___x_222_ = l_Repr_addAppParen(v___x_221_, v_prec_215_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___boxed(lean_object* v_prec_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_227_);
lean_dec(v_prec_227_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(lean_object* v_x_229_, lean_object* v_prec_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed(lean_object* v_x_232_, lean_object* v_prec_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(v_x_232_, v_prec_233_);
lean_dec(v_prec_233_);
return v_res_234_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_box(0);
return v___x_237_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport(void){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_box(0);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0(lean_object* v_x_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(lean_object* v_x_250_){
_start:
{
if (lean_obj_tag(v_x_250_) == 4)
{
lean_object* v_s_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v_s_253_ = lean_ctor_get(v_x_250_, 0);
v___x_254_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__0));
v___x_255_ = lean_string_dec_eq(v_s_253_, v___x_254_);
if (v___x_255_ == 0)
{
goto v___jp_251_;
}
else
{
lean_object* v___x_256_; 
v___x_256_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_256_;
}
}
else
{
goto v___jp_251_;
}
v___jp_251_:
{
lean_object* v___x_252_; 
v___x_252_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0));
return v___x_252_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___boxed(lean_object* v_x_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(v_x_257_);
lean_dec(v_x_257_);
return v_res_258_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___redArg(){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = 1;
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___redArg___boxed(lean_object* v___dummy_268_){
_start:
{
uint8_t v_res_269_; lean_object* v_r_270_; 
v_res_269_ = l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___redArg();
v_r_270_ = lean_box(v_res_269_);
return v_r_270_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq(lean_object* v_x_271_, lean_object* v_y_272_){
_start:
{
uint8_t v___x_273_; 
v___x_273_ = 1;
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___boxed(lean_object* v_x_274_, lean_object* v_y_275_){
_start:
{
uint8_t v_res_276_; lean_object* v_r_277_; 
v_res_276_ = l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq(v_x_274_, v_y_275_);
v_r_277_ = lean_box(v_res_276_);
return v_r_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg(lean_object* v_prec_283_){
_start:
{
lean_object* v___y_285_; lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = lean_unsigned_to_nat(1024u);
v___x_292_ = lean_nat_dec_le(v___x_291_, v_prec_283_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; 
v___x_293_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___y_285_ = v___x_293_;
goto v___jp_284_;
}
else
{
lean_object* v___x_294_; 
v___x_294_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___y_285_ = v___x_294_;
goto v___jp_284_;
}
v___jp_284_:
{
lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_286_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__1));
lean_inc(v___y_285_);
v___x_287_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_287_, 0, v___y_285_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = 0;
v___x_289_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set_uint8(v___x_289_, sizeof(void*)*1, v___x_288_);
v___x_290_ = l_Repr_addAppParen(v___x_289_, v_prec_283_);
return v___x_290_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___boxed(lean_object* v_prec_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg(v_prec_295_);
lean_dec(v_prec_295_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr(lean_object* v_x_297_, lean_object* v_prec_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg(v_prec_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___boxed(lean_object* v_x_300_, lean_object* v_prec_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr(v_x_300_, v_prec_301_);
lean_dec(v_prec_301_);
return v_res_302_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat_default(void){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = lean_box(0);
return v___x_305_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat(void){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = lean_box(0);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0(lean_object* v_x_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1));
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0(lean_object* v_x_318_){
_start:
{
if (lean_obj_tag(v_x_318_) == 4)
{
lean_object* v_s_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v_s_321_ = lean_ctor_get(v_x_318_, 0);
v___x_322_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0));
v___x_323_ = lean_string_dec_eq(v_s_321_, v___x_322_);
if (v___x_323_ == 0)
{
goto v___jp_319_;
}
else
{
lean_object* v___x_324_; 
v___x_324_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1));
return v___x_324_;
}
}
else
{
goto v___jp_319_;
}
v___jp_319_:
{
lean_object* v___x_320_; 
v___x_320_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0));
return v___x_320_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___boxed(lean_object* v_x_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0(v_x_325_);
lean_dec(v_x_325_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object* v_x_341_){
_start:
{
if (lean_obj_tag(v_x_341_) == 0)
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_351_; 
v_a_343_ = lean_ctor_get(v_x_341_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v_x_341_);
if (v_isSharedCheck_351_ == 0)
{
v___x_345_ = v_x_341_;
v_isShared_346_ = v_isSharedCheck_351_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v_x_341_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_351_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_350_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_362_; 
v_a_352_ = lean_ctor_get(v_x_341_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v_x_341_);
if (v_isSharedCheck_362_ == 0)
{
v___x_354_ = v_x_341_;
v_isShared_355_ = v_isSharedCheck_362_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v_x_341_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_362_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_356_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_357_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_357_, 0, v_a_352_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 0, v___x_357_);
v___x_359_ = v___x_354_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_357_);
v___x_359_ = v_reuseFailAlloc_361_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_360_; 
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object* v_x_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(v_x_363_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object* v_f_366_, lean_object* v_a_367_, lean_object* v___f_368_, lean_object* v_x_369_){
_start:
{
if (lean_obj_tag(v_x_369_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_379_; 
lean_dec_ref(v___f_368_);
lean_dec(v_a_367_);
lean_dec_ref(v_f_366_);
v_a_371_ = lean_ctor_get(v_x_369_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_369_);
if (v_isSharedCheck_379_ == 0)
{
v___x_373_ = v_x_369_;
v_isShared_374_ = v_isSharedCheck_379_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v_x_369_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_379_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_371_);
v___x_376_ = v_reuseFailAlloc_378_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; 
v___x_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
}
else
{
lean_object* v_a_380_; lean_object* v___x_381_; uint8_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v_a_380_ = lean_ctor_get(v_x_369_, 0);
lean_inc(v_a_380_);
lean_dec_ref_known(v_x_369_, 1);
v___x_381_ = lean_unsigned_to_nat(0u);
v___x_382_ = 0;
v___x_383_ = lean_apply_3(v_f_366_, v_a_367_, v_a_380_, lean_box(0));
v___x_384_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_381_, v___x_382_, v___x_383_, v___f_368_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object* v_f_385_, lean_object* v_a_386_, lean_object* v___f_387_, lean_object* v_x_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(v_f_385_, v_a_386_, v___f_387_, v_x_388_);
return v_res_390_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_395_ = lean_string_utf8_byte_size(v___x_394_);
return v___x_395_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_396_ = lean_unsigned_to_nat(0u);
v___x_397_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3);
v___x_398_ = lean_nat_dec_eq(v___x_397_, v___x_396_);
return v___x_398_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__8));
v___x_404_ = lean_unsigned_to_nat(46u);
v___x_405_ = lean_unsigned_to_nat(193u);
v___x_406_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7));
v___x_407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6));
v___x_408_ = l_mkPanicMessageWithDecl(v___x_407_, v___x_406_, v___x_405_, v___x_404_, v___x_403_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(lean_object* v_context_410_, lean_object* v_d_411_){
_start:
{
lean_object* v___y_414_; lean_object* v___y_415_; 
if (lean_obj_tag(v_d_411_) == 9)
{
lean_object* v_value_419_; lean_object* v___x_420_; 
v_value_419_ = lean_ctor_get(v_d_411_, 0);
lean_inc(v_value_419_);
lean_dec_ref_known(v_d_411_, 2);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v_value_419_);
return v___x_420_;
}
else
{
lean_object* v___x_421_; lean_object* v_received_423_; 
v___x_421_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
if (lean_obj_tag(v_d_411_) == 9)
{
lean_object* v_value_437_; lean_object* v_description_438_; uint8_t v___x_439_; 
v_value_437_ = lean_ctor_get(v_d_411_, 0);
v_description_438_ = lean_ctor_get(v_d_411_, 1);
v___x_439_ = lean_string_dec_eq(v_description_438_, v___x_421_);
if (v___x_439_ == 0)
{
goto v___jp_435_;
}
else
{
uint32_t v___x_440_; uint64_t v___x_441_; lean_object* v___x_442_; uint32_t v___x_443_; lean_object* v___x_444_; 
lean_inc_n(v_value_437_, 2);
lean_dec_ref_known(v_d_411_, 2);
v___x_440_ = 206;
v___x_441_ = 0ULL;
v___x_442_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_442_, 0, v_value_437_);
lean_ctor_set(v___x_442_, 1, v___x_421_);
v___x_443_ = lasm_js_value_handle(v_value_437_);
lean_dec(v_value_437_);
v___x_444_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_440_, v___x_441_, v___x_442_, v___x_443_);
lean_dec_ref_known(v___x_442_, 2);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; uint8_t v___x_446_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_a_445_);
lean_dec_ref_known(v___x_444_, 1);
v___x_446_ = lean_string_validate_utf8(v_a_445_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec(v_a_445_);
v___x_447_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_448_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_447_);
v_received_423_ = v___x_448_;
goto v___jp_422_;
}
else
{
lean_object* v___x_449_; 
v___x_449_ = lean_string_from_utf8_unchecked(v_a_445_);
v_received_423_ = v___x_449_;
goto v___jp_422_;
}
}
else
{
lean_object* v___x_450_; 
lean_dec_ref_known(v___x_444_, 1);
v___x_450_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v_received_423_ = v___x_450_;
goto v___jp_422_;
}
}
}
else
{
goto v___jp_435_;
}
v___jp_422_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_425_ = lean_string_append(v___x_424_, v_context_410_);
v___x_426_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_427_ = lean_string_append(v___x_425_, v___x_426_);
v___x_428_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0));
v___x_429_ = lean_string_append(v___x_427_, v___x_428_);
v___x_430_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_431_ = lean_string_append(v___x_429_, v___x_430_);
v___x_432_ = lean_string_append(v___x_431_, v_received_423_);
lean_dec_ref(v_received_423_);
v___x_433_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; 
v___x_434_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___y_414_ = v___x_432_;
v___y_415_ = v___x_434_;
goto v___jp_413_;
}
else
{
v___y_414_ = v___x_432_;
v___y_415_ = v___x_421_;
goto v___jp_413_;
}
}
v___jp_435_:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lasm_JS_Data_describe(v_d_411_);
v_received_423_ = v___x_436_;
goto v___jp_422_;
}
}
v___jp_413_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_string_append(v___y_414_, v___y_415_);
v___x_417_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
v___x_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_451_, lean_object* v_d_452_, lean_object* v_a_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v_context_451_, v_d_452_);
lean_dec_ref(v_context_451_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(lean_object* v_args_456_, lean_object* v_i_457_){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_459_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_nat_add(v_i_457_, v___x_460_);
v___x_462_ = l_Nat_reprFast(v___x_461_);
v___x_463_ = lean_string_append(v___x_459_, v___x_462_);
lean_dec_ref(v___x_462_);
v___x_464_ = lean_array_get_size(v_args_456_);
v___x_465_ = lean_nat_dec_lt(v_i_457_, v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = lean_box(0);
v___x_467_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_463_, v___x_466_);
lean_dec_ref(v___x_463_);
return v___x_467_;
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_array_fget_borrowed(v_args_456_, v_i_457_);
lean_inc(v___x_468_);
v___x_469_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_463_, v___x_468_);
lean_dec_ref(v___x_463_);
return v___x_469_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___boxed(lean_object* v_args_470_, lean_object* v_i_471_, lean_object* v_a_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_470_, v_i_471_);
lean_dec(v_i_471_);
lean_dec_ref(v_args_470_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(lean_object* v_f_474_, lean_object* v___f_475_, lean_object* v_args_476_, lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_487_; 
lean_dec_ref(v___f_475_);
lean_dec_ref(v_f_474_);
v_a_479_ = lean_ctor_get(v_x_477_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v_x_477_);
if (v_isSharedCheck_487_ == 0)
{
v___x_481_ = v_x_477_;
v_isShared_482_ = v_isSharedCheck_487_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v_x_477_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_487_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_486_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; 
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_509_; 
v_a_488_ = lean_ctor_get(v_x_477_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v_x_477_);
if (v_isSharedCheck_509_ == 0)
{
v___x_490_ = v_x_477_;
v_isShared_491_ = v_isSharedCheck_509_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v_x_477_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_509_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___f_492_; lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; lean_object* v_val_497_; lean_object* v___x_500_; 
v___f_492_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_492_, 0, v_f_474_);
lean_closure_set(v___f_492_, 1, v_a_488_);
lean_closure_set(v___f_492_, 2, v___f_475_);
v___x_493_ = lean_unsigned_to_nat(1u);
v___x_494_ = lean_unsigned_to_nat(0u);
v___x_495_ = 0;
v___x_500_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_476_, v___x_493_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; lean_object* v___x_503_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_501_);
lean_dec_ref_known(v___x_500_, 1);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v_a_501_);
v___x_503_ = v___x_490_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_a_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
v_val_497_ = v___x_503_;
goto v___jp_496_;
}
}
else
{
lean_object* v_a_505_; lean_object* v___x_507_; 
v_a_505_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_505_);
lean_dec_ref_known(v___x_500_, 1);
if (v_isShared_491_ == 0)
{
lean_ctor_set_tag(v___x_490_, 0);
lean_ctor_set(v___x_490_, 0, v_a_505_);
v___x_507_ = v___x_490_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_505_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
v_val_497_ = v___x_507_;
goto v___jp_496_;
}
}
v___jp_496_:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v_val_497_);
v___x_499_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_494_, v___x_495_, v___x_498_, v___f_492_);
return v___x_499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed(lean_object* v_f_510_, lean_object* v___f_511_, lean_object* v_args_512_, lean_object* v_x_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(v_f_510_, v___f_511_, v_args_512_, v_x_513_);
lean_dec_ref(v_args_512_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(lean_object* v_args_516_, lean_object* v_i_517_){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_519_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_520_ = lean_unsigned_to_nat(1u);
v___x_521_ = lean_nat_add(v_i_517_, v___x_520_);
v___x_522_ = l_Nat_reprFast(v___x_521_);
v___x_523_ = lean_string_append(v___x_519_, v___x_522_);
lean_dec_ref(v___x_522_);
v___x_524_ = lean_array_get_size(v_args_516_);
v___x_525_ = lean_nat_dec_lt(v_i_517_, v___x_524_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = lean_box(0);
v___x_527_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_523_, v___x_526_);
lean_dec_ref(v___x_523_);
return v___x_527_;
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_array_fget_borrowed(v_args_516_, v_i_517_);
lean_inc(v___x_528_);
v___x_529_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_523_, v___x_528_);
lean_dec_ref(v___x_523_);
return v___x_529_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1___boxed(lean_object* v_args_530_, lean_object* v_i_531_, lean_object* v_a_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_530_, v_i_531_);
lean_dec(v_i_531_);
lean_dec_ref(v_args_530_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(lean_object* v_f_534_, lean_object* v___f_535_, lean_object* v_args_536_){
_start:
{
lean_object* v___f_538_; lean_object* v___x_539_; uint8_t v___x_540_; lean_object* v_val_542_; lean_object* v___x_545_; 
lean_inc_ref(v_args_536_);
v___f_538_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_538_, 0, v_f_534_);
lean_closure_set(v___f_538_, 1, v___f_535_);
lean_closure_set(v___f_538_, 2, v_args_536_);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = 0;
v___x_545_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_536_, v___x_539_);
lean_dec_ref(v_args_536_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_545_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_545_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
lean_ctor_set_tag(v___x_548_, 1);
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
v_val_542_ = v___x_551_;
goto v___jp_541_;
}
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
v_a_554_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_545_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_545_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set_tag(v___x_556_, 0);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
v_val_542_ = v___x_559_;
goto v___jp_541_;
}
}
}
v___jp_541_:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v_val_542_);
v___x_544_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_539_, v___x_540_, v___x_543_, v___f_538_);
return v___x_544_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed(lean_object* v_f_562_, lean_object* v___f_563_, lean_object* v_args_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(v_f_562_, v___f_563_, v_args_564_);
return v_res_566_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___x_575_ = lean_nat_abs(v___x_574_);
return v___x_575_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_576_ = lean_cstr_to_nat("9007199254740991");
v___x_577_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6);
v___x_578_ = lean_nat_dec_le(v___x_577_, v___x_576_);
return v___x_578_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___x_580_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
return v___x_580_;
}
}
static double _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9(void){
_start:
{
lean_object* v___x_581_; double v___x_582_; 
v___x_581_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___x_582_ = l_Float_ofInt(v___x_581_);
return v___x_582_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10(void){
_start:
{
double v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_float_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9);
v___x_584_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object* v_f_585_){
_start:
{
lean_object* v___f_587_; lean_object* v___f_588_; lean_object* v___x_589_; 
v___f_587_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_588_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_588_, 0, v_f_585_);
lean_closure_set(v___f_588_, 1, v___f_587_);
v___x_589_ = l_Lasm_JS_Function_ofFn(v___f_588_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_591_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v___x_591_, 1);
v___x_593_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_594_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_592_, v___x_593_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___y_602_; uint8_t v___x_629_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_594_, 1);
v___x_596_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_597_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_590_);
v___x_598_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_598_, 0, v_a_590_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_600_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_629_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; 
v___x_630_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_602_ = v___x_630_;
goto v___jp_601_;
}
else
{
lean_object* v___x_631_; 
v___x_631_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_602_ = v___x_631_;
goto v___jp_601_;
}
v___jp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
lean_inc(v___y_602_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_600_);
lean_ctor_set(v___x_603_, 1, v___y_602_);
v___x_604_ = lean_box(0);
v___x_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_603_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = l_Lasm_JS_obj(v___x_605_);
v___x_607_ = lean_unsigned_to_nat(3u);
v___x_608_ = lean_mk_empty_array_with_capacity(v___x_607_);
v___x_609_ = lean_array_push(v___x_608_, v___x_598_);
v___x_610_ = lean_array_push(v___x_609_, v___x_599_);
v___x_611_ = lean_array_push(v___x_610_, v___x_606_);
v___x_612_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_595_, v___x_596_, v___x_611_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_619_ == 0)
{
lean_object* v_unused_620_; 
v_unused_620_ = lean_ctor_get(v___x_612_, 0);
lean_dec(v_unused_620_);
v___x_614_ = v___x_612_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_dec(v___x_612_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v_a_590_);
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_590_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec(v_a_590_);
v_a_621_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_612_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_612_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
lean_dec(v_a_590_);
v_a_632_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_594_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_594_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
lean_dec(v_a_590_);
v_a_640_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_591_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_591_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
v_a_648_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_589_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_589_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object* v_f_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lasm_JS_Deno_ServeHandler_ofFn(v_f_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object* v_f_659_, lean_object* v_args_660_){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = lean_unsigned_to_nat(0u);
v___x_663_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_660_, v___x_662_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_a_664_);
lean_dec_ref_known(v___x_663_, 1);
v___x_665_ = lean_unsigned_to_nat(1u);
v___x_666_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_660_, v___x_665_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_668_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_666_, 1);
v___x_668_ = lean_apply_3(v_f_659_, v_a_664_, v_a_667_, lean_box(0));
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_678_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_678_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_678_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_678_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_673_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_674_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_674_, 0, v_a_669_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_674_);
v___x_676_ = v___x_671_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
v_a_679_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_668_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_668_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
lean_dec(v_a_664_);
lean_dec_ref(v_f_659_);
v_a_687_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_666_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_666_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_dec_ref(v_f_659_);
v_a_695_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_663_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_663_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_703_, lean_object* v_args_704_, lean_object* v___y_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(v_f_703_, v_args_704_);
lean_dec_ref(v_args_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object* v_f_707_){
_start:
{
lean_object* v___f_709_; lean_object* v___x_710_; 
v___f_709_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_709_, 0, v_f_707_);
v___x_710_ = l_Lasm_JS_Function_ofSyncFn(v___f_709_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_712_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v___x_710_, 1);
v___x_712_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_715_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_713_, v___x_714_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___y_723_; uint8_t v___x_750_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_716_);
lean_dec_ref_known(v___x_715_, 1);
v___x_717_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_718_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_711_);
v___x_719_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_719_, 0, v_a_711_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_721_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_750_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
v___x_751_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_723_ = v___x_751_;
goto v___jp_722_;
}
else
{
lean_object* v___x_752_; 
v___x_752_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_723_ = v___x_752_;
goto v___jp_722_;
}
v___jp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
lean_inc(v___y_723_);
v___x_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_724_, 0, v___x_721_);
lean_ctor_set(v___x_724_, 1, v___y_723_);
v___x_725_ = lean_box(0);
v___x_726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = l_Lasm_JS_obj(v___x_726_);
v___x_728_ = lean_unsigned_to_nat(3u);
v___x_729_ = lean_mk_empty_array_with_capacity(v___x_728_);
v___x_730_ = lean_array_push(v___x_729_, v___x_719_);
v___x_731_ = lean_array_push(v___x_730_, v___x_720_);
v___x_732_ = lean_array_push(v___x_731_, v___x_727_);
v___x_733_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_716_, v___x_717_, v___x_732_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_740_ == 0)
{
lean_object* v_unused_741_; 
v_unused_741_ = lean_ctor_get(v___x_733_, 0);
lean_dec(v_unused_741_);
v___x_735_ = v___x_733_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_dec(v___x_733_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 0, v_a_711_);
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_711_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec(v_a_711_);
v_a_742_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_733_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_733_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec(v_a_711_);
v_a_753_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_715_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_715_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec(v_a_711_);
v_a_761_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_712_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_712_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
v_a_769_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_710_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_710_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object* v_f_777_, lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn(v_f_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1(lean_object* v_f_787_, lean_object* v___f_788_, lean_object* v_x_789_){
_start:
{
if (lean_obj_tag(v_x_789_) == 0)
{
lean_object* v___x_791_; 
lean_dec_ref(v___f_788_);
lean_dec_ref(v_f_787_);
v___x_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_791_, 0, v_x_789_);
return v___x_791_;
}
else
{
lean_object* v_a_792_; lean_object* v___x_793_; uint8_t v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v_a_792_ = lean_ctor_get(v_x_789_, 0);
lean_inc(v_a_792_);
lean_dec_ref_known(v_x_789_, 1);
v___x_793_ = lean_unsigned_to_nat(0u);
v___x_794_ = 0;
v___x_795_ = lean_apply_2(v_f_787_, v_a_792_, lean_box(0));
v___x_796_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_793_, v___x_794_, v___x_795_, v___f_788_);
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1___boxed(lean_object* v_f_797_, lean_object* v___f_798_, lean_object* v_x_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1(v_f_797_, v___f_798_, v_x_799_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0(lean_object* v___f_802_, lean_object* v_args_803_){
_start:
{
lean_object* v___x_805_; uint8_t v___x_806_; lean_object* v_val_808_; lean_object* v___x_811_; lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = 0;
v___x_811_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_803_, v___x_805_);
v_a_812_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_811_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_811_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v___jp_807_:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v_val_808_);
v___x_810_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_805_, v___x_806_, v___x_809_, v___f_802_);
return v___x_810_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
lean_ctor_set_tag(v___x_814_, 1);
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
v_val_808_ = v___x_817_;
goto v___jp_807_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0___boxed(lean_object* v___f_820_, lean_object* v_args_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0(v___f_820_, v_args_821_);
lean_dec_ref(v_args_821_);
return v_res_823_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___x_825_ = lean_nat_abs(v___x_824_);
return v___x_825_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_826_ = lean_cstr_to_nat("9007199254740991");
v___x_827_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0);
v___x_828_ = lean_nat_dec_le(v___x_827_, v___x_826_);
return v___x_828_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___x_830_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
return v___x_830_;
}
}
static double _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3(void){
_start:
{
lean_object* v___x_831_; double v___x_832_; 
v___x_831_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___x_832_ = l_Float_ofInt(v___x_831_);
return v___x_832_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4(void){
_start:
{
double v___x_833_; lean_object* v___x_834_; 
v___x_833_ = lean_float_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3);
v___x_834_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_834_, 0, v___x_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn(lean_object* v_f_835_){
_start:
{
lean_object* v___f_837_; lean_object* v___f_838_; lean_object* v___f_839_; lean_object* v___x_840_; 
v___f_837_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_838_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_838_, 0, v_f_835_);
lean_closure_set(v___f_838_, 1, v___f_837_);
v___f_839_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_839_, 0, v___f_838_);
v___x_840_ = l_Lasm_JS_Function_ofFn(v___f_839_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v_a_841_; lean_object* v___x_842_; 
v_a_841_ = lean_ctor_get(v___x_840_, 0);
lean_inc(v_a_841_);
lean_dec_ref_known(v___x_840_, 1);
v___x_842_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_842_, 1);
v___x_844_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_845_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_843_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___y_853_; uint8_t v___x_880_; 
v_a_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_846_);
lean_dec_ref_known(v___x_845_, 1);
v___x_847_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_848_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_841_);
v___x_849_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_849_, 0, v_a_841_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
v___x_850_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_851_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_880_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
v___x_881_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_853_ = v___x_881_;
goto v___jp_852_;
}
else
{
lean_object* v___x_882_; 
v___x_882_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_853_ = v___x_882_;
goto v___jp_852_;
}
v___jp_852_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
lean_inc(v___y_853_);
v___x_854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_851_);
lean_ctor_set(v___x_854_, 1, v___y_853_);
v___x_855_ = lean_box(0);
v___x_856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = l_Lasm_JS_obj(v___x_856_);
v___x_858_ = lean_unsigned_to_nat(3u);
v___x_859_ = lean_mk_empty_array_with_capacity(v___x_858_);
v___x_860_ = lean_array_push(v___x_859_, v___x_849_);
v___x_861_ = lean_array_push(v___x_860_, v___x_850_);
v___x_862_ = lean_array_push(v___x_861_, v___x_857_);
v___x_863_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_846_, v___x_847_, v___x_862_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_870_ == 0)
{
lean_object* v_unused_871_; 
v_unused_871_ = lean_ctor_get(v___x_863_, 0);
lean_dec(v_unused_871_);
v___x_865_ = v___x_863_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_dec(v___x_863_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v_a_841_);
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_841_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec(v_a_841_);
v_a_872_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_863_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_863_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
}
else
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
lean_dec(v_a_841_);
v_a_883_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_845_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_845_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec(v_a_841_);
v_a_891_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_842_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_842_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
v_a_899_ = lean_ctor_get(v___x_840_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_840_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_840_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___boxed(lean_object* v_f_907_, lean_object* v_a_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn(v_f_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0(lean_object* v_f_910_, lean_object* v_args_911_){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v_a_915_; lean_object* v___x_916_; 
v___x_913_ = lean_unsigned_to_nat(0u);
v___x_914_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_911_, v___x_913_);
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref(v___x_914_);
v___x_916_ = lean_apply_2(v_f_910_, v_a_915_, lean_box(0));
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_926_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_926_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_926_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_926_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_921_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_922_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_922_, 0, v_a_917_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_922_);
v___x_924_ = v___x_919_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
else
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
v_a_927_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v___x_916_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_916_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0___boxed(lean_object* v_f_935_, lean_object* v_args_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0(v_f_935_, v_args_936_);
lean_dec_ref(v_args_936_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn(lean_object* v_f_939_){
_start:
{
lean_object* v___f_941_; lean_object* v___x_942_; 
v___f_941_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_941_, 0, v_f_939_);
v___x_942_ = l_Lasm_JS_Function_ofSyncFn(v___f_941_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_944_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_a_943_);
lean_dec_ref_known(v___x_942_, 1);
v___x_944_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
v___x_946_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_947_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_945_, v___x_946_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___y_955_; uint8_t v___x_982_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
v___x_949_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_950_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_943_);
v___x_951_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_951_, 0, v_a_943_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_953_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_982_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; 
v___x_983_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_955_ = v___x_983_;
goto v___jp_954_;
}
else
{
lean_object* v___x_984_; 
v___x_984_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_955_ = v___x_984_;
goto v___jp_954_;
}
v___jp_954_:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
lean_inc(v___y_955_);
v___x_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_953_);
lean_ctor_set(v___x_956_, 1, v___y_955_);
v___x_957_ = lean_box(0);
v___x_958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = l_Lasm_JS_obj(v___x_958_);
v___x_960_ = lean_unsigned_to_nat(3u);
v___x_961_ = lean_mk_empty_array_with_capacity(v___x_960_);
v___x_962_ = lean_array_push(v___x_961_, v___x_951_);
v___x_963_ = lean_array_push(v___x_962_, v___x_952_);
v___x_964_ = lean_array_push(v___x_963_, v___x_959_);
v___x_965_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_948_, v___x_949_, v___x_964_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_972_ == 0)
{
lean_object* v_unused_973_; 
v_unused_973_ = lean_ctor_get(v___x_965_, 0);
lean_dec(v_unused_973_);
v___x_967_ = v___x_965_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_dec(v___x_965_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 0, v_a_943_);
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_943_);
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
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
lean_dec(v_a_943_);
v_a_974_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_965_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_965_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_974_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_dec(v_a_943_);
v_a_985_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_947_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_947_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
else
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1000_; 
lean_dec(v_a_943_);
v_a_993_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_995_ = v___x_944_;
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_944_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_993_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
v_a_1001_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_942_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_942_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___boxed(lean_object* v_f_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn(v_f_1009_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0(lean_object* v_x_1023_){
_start:
{
if (lean_obj_tag(v_x_1023_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1033_; 
v_a_1025_ = lean_ctor_get(v_x_1023_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_x_1023_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1027_ = v_x_1023_;
v_isShared_1028_ = v_isSharedCheck_1033_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v_x_1023_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1033_;
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
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
return v___x_1031_;
}
}
}
else
{
lean_object* v___x_1034_; 
lean_dec_ref_known(v_x_1023_, 1);
v___x_1034_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__1));
return v___x_1034_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___boxed(lean_object* v_x_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0(v_x_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1(lean_object* v_f_1038_, lean_object* v___f_1039_, lean_object* v_x_1040_){
_start:
{
if (lean_obj_tag(v_x_1040_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1050_; 
lean_dec_ref(v___f_1039_);
lean_dec_ref(v_f_1038_);
v_a_1042_ = lean_ctor_get(v_x_1040_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_x_1040_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1044_ = v_x_1040_;
v_isShared_1045_ = v_isSharedCheck_1050_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v_x_1040_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1050_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
lean_object* v___x_1048_; 
v___x_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
return v___x_1048_;
}
}
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1052_; uint8_t v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v_a_1051_ = lean_ctor_get(v_x_1040_, 0);
lean_inc(v_a_1051_);
lean_dec_ref_known(v_x_1040_, 1);
v___x_1052_ = lean_unsigned_to_nat(0u);
v___x_1053_ = 0;
v___x_1054_ = lean_apply_2(v_f_1038_, v_a_1051_, lean_box(0));
v___x_1055_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1052_, v___x_1053_, v___x_1054_, v___f_1039_);
return v___x_1055_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1___boxed(lean_object* v_f_1056_, lean_object* v___f_1057_, lean_object* v_x_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1(v_f_1056_, v___f_1057_, v_x_1058_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(lean_object* v_args_1061_, lean_object* v_i_1062_){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1064_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1065_ = lean_unsigned_to_nat(1u);
v___x_1066_ = lean_nat_add(v_i_1062_, v___x_1065_);
v___x_1067_ = l_Nat_reprFast(v___x_1066_);
v___x_1068_ = lean_string_append(v___x_1064_, v___x_1067_);
lean_dec_ref(v___x_1067_);
v___x_1069_ = lean_array_get_size(v_args_1061_);
v___x_1070_ = lean_nat_dec_lt(v_i_1062_, v___x_1069_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = lean_box(0);
v___x_1072_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0_spec__0_spec__1(v___x_1068_, v___x_1071_);
lean_dec_ref(v___x_1068_);
return v___x_1072_;
}
else
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = lean_array_fget_borrowed(v_args_1061_, v_i_1062_);
lean_inc(v___x_1073_);
v___x_1074_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0_spec__0_spec__1(v___x_1068_, v___x_1073_);
lean_dec_ref(v___x_1068_);
return v___x_1074_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0___boxed(lean_object* v_args_1075_, lean_object* v_i_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(v_args_1075_, v_i_1076_);
lean_dec(v_i_1076_);
lean_dec_ref(v_args_1075_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2(lean_object* v___f_1079_, lean_object* v_args_1080_){
_start:
{
lean_object* v___x_1082_; uint8_t v___x_1083_; lean_object* v_val_1085_; lean_object* v___x_1088_; 
v___x_1082_ = lean_unsigned_to_nat(0u);
v___x_1083_ = 0;
v___x_1088_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(v_args_1080_, v___x_1082_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1088_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1088_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
lean_ctor_set_tag(v___x_1091_, 1);
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
v_val_1085_ = v___x_1094_;
goto v___jp_1084_;
}
}
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1104_; 
v_a_1097_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1099_ = v___x_1088_;
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1088_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1102_; 
if (v_isShared_1100_ == 0)
{
lean_ctor_set_tag(v___x_1099_, 0);
v___x_1102_ = v___x_1099_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_a_1097_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
v_val_1085_ = v___x_1102_;
goto v___jp_1084_;
}
}
}
v___jp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1086_, 0, v_val_1085_);
v___x_1087_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1082_, v___x_1083_, v___x_1086_, v___f_1079_);
return v___x_1087_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2___boxed(lean_object* v___f_1105_, lean_object* v_args_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2(v___f_1105_, v_args_1106_);
lean_dec_ref(v_args_1106_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn(lean_object* v_f_1110_){
_start:
{
lean_object* v___f_1112_; lean_object* v___f_1113_; lean_object* v___f_1114_; lean_object* v___x_1115_; 
v___f_1112_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___closed__0));
v___f_1113_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1113_, 0, v_f_1110_);
lean_closure_set(v___f_1113_, 1, v___f_1112_);
v___f_1114_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1114_, 0, v___f_1113_);
v___x_1115_ = l_Lasm_JS_Function_ofFn(v___f_1114_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; lean_object* v___x_1117_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_a_1116_);
lean_dec_ref_known(v___x_1115_, 1);
v___x_1117_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
lean_inc(v_a_1118_);
lean_dec_ref_known(v___x_1117_, 1);
v___x_1119_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1120_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1118_, v___x_1119_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___y_1128_; uint8_t v___x_1155_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v___x_1122_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1123_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1116_);
v___x_1124_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1124_, 0, v_a_1116_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_1125_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1126_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1155_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1128_ = v___x_1156_;
goto v___jp_1127_;
}
else
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1128_ = v___x_1157_;
goto v___jp_1127_;
}
v___jp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_inc(v___y_1128_);
v___x_1129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1126_);
lean_ctor_set(v___x_1129_, 1, v___y_1128_);
v___x_1130_ = lean_box(0);
v___x_1131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_1132_ = l_Lasm_JS_obj(v___x_1131_);
v___x_1133_ = lean_unsigned_to_nat(3u);
v___x_1134_ = lean_mk_empty_array_with_capacity(v___x_1133_);
v___x_1135_ = lean_array_push(v___x_1134_, v___x_1124_);
v___x_1136_ = lean_array_push(v___x_1135_, v___x_1125_);
v___x_1137_ = lean_array_push(v___x_1136_, v___x_1132_);
v___x_1138_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1121_, v___x_1122_, v___x_1137_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v___x_1138_, 0);
lean_dec(v_unused_1146_);
v___x_1140_ = v___x_1138_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_dec(v___x_1138_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v_a_1116_);
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1116_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
else
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
lean_dec(v_a_1116_);
v_a_1147_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1149_ = v___x_1138_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1138_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1147_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_dec(v_a_1116_);
v_a_1158_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1120_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1120_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
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
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
lean_dec(v_a_1116_);
v_a_1166_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1117_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1117_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
v_a_1174_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1115_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1115_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___boxed(lean_object* v_f_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn(v_f_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0(lean_object* v_f_1185_, lean_object* v_args_1186_){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_unsigned_to_nat(0u);
v___x_1189_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(v_args_1186_, v___x_1188_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v_a_1190_; lean_object* v___x_1191_; 
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
lean_inc(v_a_1190_);
lean_dec_ref_known(v___x_1189_, 1);
v___x_1191_ = lean_apply_2(v_f_1185_, v_a_1190_, lean_box(0));
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1199_; 
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1199_ == 0)
{
lean_object* v_unused_1200_; 
v_unused_1200_ = lean_ctor_get(v___x_1191_, 0);
lean_dec(v_unused_1200_);
v___x_1193_ = v___x_1191_;
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
else
{
lean_dec(v___x_1191_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = lean_box(0);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 0, v___x_1195_);
v___x_1197_ = v___x_1193_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
v_a_1201_ = lean_ctor_get(v___x_1191_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1191_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1191_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec_ref(v_f_1185_);
v_a_1209_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1189_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1189_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1217_, lean_object* v_args_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0(v_f_1217_, v_args_1218_);
lean_dec_ref(v_args_1218_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn(lean_object* v_f_1221_){
_start:
{
lean_object* v___f_1223_; lean_object* v___x_1224_; 
v___f_1223_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1223_, 0, v_f_1221_);
v___x_1224_ = l_Lasm_JS_Function_ofSyncFn(v___f_1223_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v___x_1226_; 
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
lean_inc(v_a_1225_);
lean_dec_ref_known(v___x_1224_, 1);
v___x_1226_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_a_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_a_1227_);
lean_dec_ref_known(v___x_1226_, 1);
v___x_1228_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1229_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1227_, v___x_1228_);
if (lean_obj_tag(v___x_1229_) == 0)
{
lean_object* v_a_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___y_1237_; uint8_t v___x_1264_; 
v_a_1230_ = lean_ctor_get(v___x_1229_, 0);
lean_inc(v_a_1230_);
lean_dec_ref_known(v___x_1229_, 1);
v___x_1231_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1232_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1225_);
v___x_1233_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1233_, 0, v_a_1225_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
v___x_1234_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1235_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1264_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1264_ == 0)
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1237_ = v___x_1265_;
goto v___jp_1236_;
}
else
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1237_ = v___x_1266_;
goto v___jp_1236_;
}
v___jp_1236_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
lean_inc(v___y_1237_);
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1235_);
lean_ctor_set(v___x_1238_, 1, v___y_1237_);
v___x_1239_ = lean_box(0);
v___x_1240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1238_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = l_Lasm_JS_obj(v___x_1240_);
v___x_1242_ = lean_unsigned_to_nat(3u);
v___x_1243_ = lean_mk_empty_array_with_capacity(v___x_1242_);
v___x_1244_ = lean_array_push(v___x_1243_, v___x_1233_);
v___x_1245_ = lean_array_push(v___x_1244_, v___x_1234_);
v___x_1246_ = lean_array_push(v___x_1245_, v___x_1241_);
v___x_1247_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1230_, v___x_1231_, v___x_1246_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1254_ == 0)
{
lean_object* v_unused_1255_; 
v_unused_1255_ = lean_ctor_get(v___x_1247_, 0);
lean_dec(v_unused_1255_);
v___x_1249_ = v___x_1247_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_dec(v___x_1247_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 0, v_a_1225_);
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1225_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_dec(v_a_1225_);
v_a_1256_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1247_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1247_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
lean_dec(v_a_1225_);
v_a_1267_ = lean_ctor_get(v___x_1229_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1229_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1229_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec(v_a_1225_);
v_a_1275_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1226_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1226_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_a_1283_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1224_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1224_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___boxed(lean_object* v_f_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn(v_f_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0(lean_object* v___f_1300_, lean_object* v___f_1301_, lean_object* v___f_1302_, lean_object* v___f_1303_, lean_object* v___f_1304_, lean_object* v_d_1305_){
_start:
{
lean_object* v_signal_1306_; lean_object* v_onError_1307_; lean_object* v_onListen_1308_; lean_object* v_automaticCompression_1309_; lean_object* v_transport_1310_; lean_object* v_path_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v_signal_1306_ = lean_ctor_get(v_d_1305_, 0);
lean_inc(v_signal_1306_);
v_onError_1307_ = lean_ctor_get(v_d_1305_, 1);
lean_inc(v_onError_1307_);
v_onListen_1308_ = lean_ctor_get(v_d_1305_, 2);
lean_inc(v_onListen_1308_);
v_automaticCompression_1309_ = lean_ctor_get(v_d_1305_, 3);
lean_inc(v_automaticCompression_1309_);
v_transport_1310_ = lean_ctor_get(v_d_1305_, 4);
lean_inc(v_transport_1310_);
v_path_1311_ = lean_ctor_get(v_d_1305_, 5);
lean_inc_ref(v_path_1311_);
lean_dec_ref(v_d_1305_);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_1313_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1300_, v_signal_1306_);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_1316_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1301_, v_onError_1307_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_1319_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1302_, v_onListen_1308_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1318_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_1322_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1303_, v_automaticCompression_1309_);
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_1325_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1304_, v_transport_1310_);
v___x_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__5));
v___x_1328_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1328_, 0, v_path_1311_);
v___x_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = lean_unsigned_to_nat(6u);
v___x_1331_ = lean_mk_empty_array_with_capacity(v___x_1330_);
v___x_1332_ = lean_array_push(v___x_1331_, v___x_1314_);
v___x_1333_ = lean_array_push(v___x_1332_, v___x_1317_);
v___x_1334_ = lean_array_push(v___x_1333_, v___x_1320_);
v___x_1335_ = lean_array_push(v___x_1334_, v___x_1323_);
v___x_1336_ = lean_array_push(v___x_1335_, v___x_1326_);
v___x_1337_ = lean_array_push(v___x_1336_, v___x_1329_);
v___x_1338_ = l_Lasm_JS_Web_Support_fields(v___x_1337_);
lean_dec_ref(v___x_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(lean_object* v_context_1354_, lean_object* v_d_1355_){
_start:
{
lean_object* v___y_1358_; lean_object* v___y_1359_; 
if (lean_obj_tag(v_d_1355_) == 9)
{
lean_object* v_value_1363_; lean_object* v___x_1364_; 
v_value_1363_ = lean_ctor_get(v_d_1355_, 0);
lean_inc(v_value_1363_);
lean_dec_ref_known(v_d_1355_, 2);
v___x_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1364_, 0, v_value_1363_);
return v___x_1364_;
}
else
{
lean_object* v___x_1365_; lean_object* v_received_1367_; 
v___x_1365_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
if (lean_obj_tag(v_d_1355_) == 9)
{
lean_object* v_value_1381_; lean_object* v_description_1382_; uint8_t v___x_1383_; 
v_value_1381_ = lean_ctor_get(v_d_1355_, 0);
v_description_1382_ = lean_ctor_get(v_d_1355_, 1);
v___x_1383_ = lean_string_dec_eq(v_description_1382_, v___x_1365_);
if (v___x_1383_ == 0)
{
goto v___jp_1379_;
}
else
{
uint32_t v___x_1384_; uint64_t v___x_1385_; lean_object* v___x_1386_; uint32_t v___x_1387_; lean_object* v___x_1388_; 
lean_inc_n(v_value_1381_, 2);
lean_dec_ref_known(v_d_1355_, 2);
v___x_1384_ = 206;
v___x_1385_ = 0ULL;
v___x_1386_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1386_, 0, v_value_1381_);
lean_ctor_set(v___x_1386_, 1, v___x_1365_);
v___x_1387_ = lasm_js_value_handle(v_value_1381_);
lean_dec(v_value_1381_);
v___x_1388_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1384_, v___x_1385_, v___x_1386_, v___x_1387_);
lean_dec_ref_known(v___x_1386_, 2);
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; uint8_t v___x_1390_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc(v_a_1389_);
lean_dec_ref_known(v___x_1388_, 1);
v___x_1390_ = lean_string_validate_utf8(v_a_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec(v_a_1389_);
v___x_1391_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_1392_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1391_);
v_received_1367_ = v___x_1392_;
goto v___jp_1366_;
}
else
{
lean_object* v___x_1393_; 
v___x_1393_ = lean_string_from_utf8_unchecked(v_a_1389_);
v_received_1367_ = v___x_1393_;
goto v___jp_1366_;
}
}
else
{
lean_object* v___x_1394_; 
lean_dec_ref_known(v___x_1388_, 1);
v___x_1394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v_received_1367_ = v___x_1394_;
goto v___jp_1366_;
}
}
}
else
{
goto v___jp_1379_;
}
v___jp_1366_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1369_ = lean_string_append(v___x_1368_, v_context_1354_);
v___x_1370_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1371_ = lean_string_append(v___x_1369_, v___x_1370_);
v___x_1372_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__0));
v___x_1373_ = lean_string_append(v___x_1371_, v___x_1372_);
v___x_1374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1375_ = lean_string_append(v___x_1373_, v___x_1374_);
v___x_1376_ = lean_string_append(v___x_1375_, v_received_1367_);
lean_dec_ref(v_received_1367_);
v___x_1377_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; 
v___x_1378_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___y_1358_ = v___x_1376_;
v___y_1359_ = v___x_1378_;
goto v___jp_1357_;
}
else
{
v___y_1358_ = v___x_1376_;
v___y_1359_ = v___x_1365_;
goto v___jp_1357_;
}
}
v___jp_1379_:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lasm_JS_Data_describe(v_d_1355_);
v_received_1367_ = v___x_1380_;
goto v___jp_1366_;
}
}
v___jp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1360_ = lean_string_append(v___y_1358_, v___y_1359_);
v___x_1361_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
v___x_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1395_, lean_object* v_d_1396_, lean_object* v_a_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(v_context_1395_, v_d_1396_);
lean_dec_ref(v_context_1395_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(lean_object* v_args_1399_, lean_object* v_i_1400_){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1402_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1403_ = lean_unsigned_to_nat(1u);
v___x_1404_ = lean_nat_add(v_i_1400_, v___x_1403_);
v___x_1405_ = l_Nat_reprFast(v___x_1404_);
v___x_1406_ = lean_string_append(v___x_1402_, v___x_1405_);
lean_dec_ref(v___x_1405_);
v___x_1407_ = lean_array_get_size(v_args_1399_);
v___x_1408_ = lean_nat_dec_lt(v_i_1400_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = lean_box(0);
v___x_1410_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(v___x_1406_, v___x_1409_);
lean_dec_ref(v___x_1406_);
return v___x_1410_;
}
else
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1411_ = lean_array_fget_borrowed(v_args_1399_, v_i_1400_);
lean_inc(v___x_1411_);
v___x_1412_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(v___x_1406_, v___x_1411_);
lean_dec_ref(v___x_1406_);
return v___x_1412_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0___boxed(lean_object* v_args_1413_, lean_object* v_i_1414_, lean_object* v_a_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(v_args_1413_, v_i_1414_);
lean_dec(v_i_1414_);
lean_dec_ref(v_args_1413_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2(lean_object* v_f_1417_, lean_object* v___f_1418_, lean_object* v_args_1419_, lean_object* v_x_1420_){
_start:
{
if (lean_obj_tag(v_x_1420_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref(v___f_1418_);
lean_dec_ref(v_f_1417_);
v_a_1422_ = lean_ctor_get(v_x_1420_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_x_1420_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1424_ = v_x_1420_;
v_isShared_1425_ = v_isSharedCheck_1430_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v_x_1420_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1430_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
return v___x_1428_;
}
}
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1452_; 
v_a_1431_ = lean_ctor_get(v_x_1420_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v_x_1420_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1433_ = v_x_1420_;
v_isShared_1434_ = v_isSharedCheck_1452_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v_x_1420_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1452_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___f_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; uint8_t v___x_1438_; lean_object* v_val_1440_; lean_object* v___x_1443_; 
v___f_1435_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1435_, 0, v_f_1417_);
lean_closure_set(v___f_1435_, 1, v_a_1431_);
lean_closure_set(v___f_1435_, 2, v___f_1418_);
v___x_1436_ = lean_unsigned_to_nat(1u);
v___x_1437_ = lean_unsigned_to_nat(0u);
v___x_1438_ = 0;
v___x_1443_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(v_args_1419_, v___x_1436_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v___x_1446_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v_a_1444_);
v___x_1446_ = v___x_1433_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1444_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
v_val_1440_ = v___x_1446_;
goto v___jp_1439_;
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; 
v_a_1448_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1448_);
lean_dec_ref_known(v___x_1443_, 1);
if (v_isShared_1434_ == 0)
{
lean_ctor_set_tag(v___x_1433_, 0);
lean_ctor_set(v___x_1433_, 0, v_a_1448_);
v___x_1450_ = v___x_1433_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1448_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
v_val_1440_ = v___x_1450_;
goto v___jp_1439_;
}
}
v___jp_1439_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v_val_1440_);
v___x_1442_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1437_, v___x_1438_, v___x_1441_, v___f_1435_);
return v___x_1442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2___boxed(lean_object* v_f_1453_, lean_object* v___f_1454_, lean_object* v_args_1455_, lean_object* v_x_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2(v_f_1453_, v___f_1454_, v_args_1455_, v_x_1456_);
lean_dec_ref(v_args_1455_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0(lean_object* v_f_1459_, lean_object* v___f_1460_, lean_object* v_args_1461_){
_start:
{
lean_object* v___f_1463_; lean_object* v___x_1464_; uint8_t v___x_1465_; lean_object* v_val_1467_; lean_object* v___x_1470_; 
lean_inc_ref(v_args_1461_);
v___f_1463_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1463_, 0, v_f_1459_);
lean_closure_set(v___f_1463_, 1, v___f_1460_);
lean_closure_set(v___f_1463_, 2, v_args_1461_);
v___x_1464_ = lean_unsigned_to_nat(0u);
v___x_1465_ = 0;
v___x_1470_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_1461_, v___x_1464_);
lean_dec_ref(v_args_1461_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
lean_ctor_set_tag(v___x_1473_, 1);
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
v_val_1467_ = v___x_1476_;
goto v___jp_1466_;
}
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
v_a_1479_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1470_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1470_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set_tag(v___x_1481_, 0);
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
v_val_1467_ = v___x_1484_;
goto v___jp_1466_;
}
}
}
v___jp_1466_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1468_, 0, v_val_1467_);
v___x_1469_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1464_, v___x_1465_, v___x_1468_, v___f_1463_);
return v___x_1469_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0___boxed(lean_object* v_f_1487_, lean_object* v___f_1488_, lean_object* v_args_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0(v_f_1487_, v___f_1488_, v_args_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn(lean_object* v_f_1492_){
_start:
{
lean_object* v___f_1494_; lean_object* v___f_1495_; lean_object* v___x_1496_; 
v___f_1494_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_1495_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1495_, 0, v_f_1492_);
lean_closure_set(v___f_1495_, 1, v___f_1494_);
v___x_1496_ = l_Lasm_JS_Function_ofFn(v___f_1495_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v___x_1498_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___x_1496_, 1);
v___x_1498_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1501_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1499_, v___x_1500_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___y_1509_; uint8_t v___x_1536_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1504_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1497_);
v___x_1505_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1505_, 0, v_a_1497_);
lean_ctor_set(v___x_1505_, 1, v___x_1504_);
v___x_1506_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1507_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1536_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_1536_ == 0)
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_1509_ = v___x_1537_;
goto v___jp_1508_;
}
else
{
lean_object* v___x_1538_; 
v___x_1538_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_1509_ = v___x_1538_;
goto v___jp_1508_;
}
v___jp_1508_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
lean_inc(v___y_1509_);
v___x_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1507_);
lean_ctor_set(v___x_1510_, 1, v___y_1509_);
v___x_1511_ = lean_box(0);
v___x_1512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = l_Lasm_JS_obj(v___x_1512_);
v___x_1514_ = lean_unsigned_to_nat(3u);
v___x_1515_ = lean_mk_empty_array_with_capacity(v___x_1514_);
v___x_1516_ = lean_array_push(v___x_1515_, v___x_1505_);
v___x_1517_ = lean_array_push(v___x_1516_, v___x_1506_);
v___x_1518_ = lean_array_push(v___x_1517_, v___x_1513_);
v___x_1519_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1502_, v___x_1503_, v___x_1518_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1526_; 
v_isSharedCheck_1526_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1526_ == 0)
{
lean_object* v_unused_1527_; 
v_unused_1527_ = lean_ctor_get(v___x_1519_, 0);
lean_dec(v_unused_1527_);
v___x_1521_ = v___x_1519_;
v_isShared_1522_ = v_isSharedCheck_1526_;
goto v_resetjp_1520_;
}
else
{
lean_dec(v___x_1519_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1526_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1524_; 
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 0, v_a_1497_);
v___x_1524_ = v___x_1521_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_a_1497_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
lean_dec(v_a_1497_);
v_a_1528_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1519_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1519_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_dec(v_a_1497_);
v_a_1539_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1501_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1501_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
else
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1554_; 
lean_dec(v_a_1497_);
v_a_1547_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1549_ = v___x_1498_;
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1498_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1550_ == 0)
{
v___x_1552_ = v___x_1549_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_a_1547_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
v_a_1555_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1496_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1496_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___boxed(lean_object* v_f_1563_, lean_object* v_a_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn(v_f_1563_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0(lean_object* v_f_1566_, lean_object* v_args_1567_){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = lean_unsigned_to_nat(0u);
v___x_1570_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_1567_, v___x_1569_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
lean_inc(v_a_1571_);
lean_dec_ref_known(v___x_1570_, 1);
v___x_1572_ = lean_unsigned_to_nat(1u);
v___x_1573_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(v_args_1567_, v___x_1572_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; lean_object* v___x_1575_; 
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_a_1574_);
lean_dec_ref_known(v___x_1573_, 1);
v___x_1575_ = lean_apply_3(v_f_1566_, v_a_1571_, v_a_1574_, lean_box(0));
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1585_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1578_ = v___x_1575_;
v_isShared_1579_ = v_isSharedCheck_1585_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1575_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1585_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1580_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_1581_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1581_, 0, v_a_1576_);
lean_ctor_set(v___x_1581_, 1, v___x_1580_);
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 0, v___x_1581_);
v___x_1583_ = v___x_1578_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
v_a_1586_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1575_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1575_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
lean_dec(v_a_1571_);
lean_dec_ref(v_f_1566_);
v_a_1594_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1573_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1573_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_dec_ref(v_f_1566_);
v_a_1602_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1570_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1570_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0___boxed(lean_object* v_f_1610_, lean_object* v_args_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0(v_f_1610_, v_args_1611_);
lean_dec_ref(v_args_1611_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn(lean_object* v_f_1614_){
_start:
{
lean_object* v___f_1616_; lean_object* v___x_1617_; 
v___f_1616_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1616_, 0, v_f_1614_);
v___x_1617_ = l_Lasm_JS_Function_ofSyncFn(v___f_1616_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1619_; 
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_a_1618_);
lean_dec_ref_known(v___x_1617_, 1);
v___x_1619_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
lean_inc(v_a_1620_);
lean_dec_ref_known(v___x_1619_, 1);
v___x_1621_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1622_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1620_, v___x_1621_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v_a_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___y_1630_; uint8_t v___x_1657_; 
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
lean_inc(v_a_1623_);
lean_dec_ref_known(v___x_1622_, 1);
v___x_1624_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1625_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1618_);
v___x_1626_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1626_, 0, v_a_1618_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1628_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1657_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_1657_ == 0)
{
lean_object* v___x_1658_; 
v___x_1658_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_1630_ = v___x_1658_;
goto v___jp_1629_;
}
else
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_1630_ = v___x_1659_;
goto v___jp_1629_;
}
v___jp_1629_:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
lean_inc(v___y_1630_);
v___x_1631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1628_);
lean_ctor_set(v___x_1631_, 1, v___y_1630_);
v___x_1632_ = lean_box(0);
v___x_1633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1631_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = l_Lasm_JS_obj(v___x_1633_);
v___x_1635_ = lean_unsigned_to_nat(3u);
v___x_1636_ = lean_mk_empty_array_with_capacity(v___x_1635_);
v___x_1637_ = lean_array_push(v___x_1636_, v___x_1626_);
v___x_1638_ = lean_array_push(v___x_1637_, v___x_1627_);
v___x_1639_ = lean_array_push(v___x_1638_, v___x_1634_);
v___x_1640_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1623_, v___x_1624_, v___x_1639_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; 
v_unused_1648_ = lean_ctor_get(v___x_1640_, 0);
lean_dec(v_unused_1648_);
v___x_1642_ = v___x_1640_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_dec(v___x_1640_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 0, v_a_1618_);
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1618_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec(v_a_1618_);
v_a_1649_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1640_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1640_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
lean_dec(v_a_1618_);
v_a_1660_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1622_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1622_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_dec(v_a_1618_);
v_a_1668_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1619_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1619_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
v_a_1676_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1617_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1617_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___boxed(lean_object* v_f_1684_, lean_object* v_a_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn(v_f_1684_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofFn(lean_object* v_f_1694_){
_start:
{
lean_object* v___f_1696_; lean_object* v___f_1697_; lean_object* v___f_1698_; lean_object* v___x_1699_; 
v___f_1696_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_1697_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1697_, 0, v_f_1694_);
lean_closure_set(v___f_1697_, 1, v___f_1696_);
v___f_1698_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1698_, 0, v___f_1697_);
v___x_1699_ = l_Lasm_JS_Function_ofFn(v___f_1698_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v___x_1701_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
v___x_1701_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1702_);
lean_dec_ref_known(v___x_1701_, 1);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1704_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1702_, v___x_1703_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___y_1712_; uint8_t v___x_1739_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1704_, 1);
v___x_1706_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1707_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1700_);
v___x_1708_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_a_1700_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
v___x_1709_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1710_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1739_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1739_ == 0)
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1712_ = v___x_1740_;
goto v___jp_1711_;
}
else
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1712_ = v___x_1741_;
goto v___jp_1711_;
}
v___jp_1711_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
lean_inc(v___y_1712_);
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1710_);
lean_ctor_set(v___x_1713_, 1, v___y_1712_);
v___x_1714_ = lean_box(0);
v___x_1715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1713_);
lean_ctor_set(v___x_1715_, 1, v___x_1714_);
v___x_1716_ = l_Lasm_JS_obj(v___x_1715_);
v___x_1717_ = lean_unsigned_to_nat(3u);
v___x_1718_ = lean_mk_empty_array_with_capacity(v___x_1717_);
v___x_1719_ = lean_array_push(v___x_1718_, v___x_1708_);
v___x_1720_ = lean_array_push(v___x_1719_, v___x_1709_);
v___x_1721_ = lean_array_push(v___x_1720_, v___x_1716_);
v___x_1722_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1705_, v___x_1706_, v___x_1721_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1729_ == 0)
{
lean_object* v_unused_1730_; 
v_unused_1730_ = lean_ctor_get(v___x_1722_, 0);
lean_dec(v_unused_1730_);
v___x_1724_ = v___x_1722_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_dec(v___x_1722_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
lean_ctor_set(v___x_1724_, 0, v_a_1700_);
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1700_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
lean_dec(v_a_1700_);
v_a_1731_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1722_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1722_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec(v_a_1700_);
v_a_1742_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1704_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1704_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec(v_a_1700_);
v_a_1750_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1701_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1701_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
v_a_1758_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1699_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1699_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofFn___boxed(lean_object* v_f_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofFn(v_f_1766_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofSyncFn(lean_object* v_f_1769_){
_start:
{
lean_object* v___f_1771_; lean_object* v___x_1772_; 
v___f_1771_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1771_, 0, v_f_1769_);
v___x_1772_ = l_Lasm_JS_Function_ofSyncFn(v___f_1771_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1774_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v___x_1772_, 1);
v___x_1774_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_a_1775_);
lean_dec_ref_known(v___x_1774_, 1);
v___x_1776_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1777_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1775_, v___x_1776_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___y_1785_; uint8_t v___x_1812_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_a_1778_);
lean_dec_ref_known(v___x_1777_, 1);
v___x_1779_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1780_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1773_);
v___x_1781_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1781_, 0, v_a_1773_);
lean_ctor_set(v___x_1781_, 1, v___x_1780_);
v___x_1782_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1783_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1812_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; 
v___x_1813_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1785_ = v___x_1813_;
goto v___jp_1784_;
}
else
{
lean_object* v___x_1814_; 
v___x_1814_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1785_ = v___x_1814_;
goto v___jp_1784_;
}
v___jp_1784_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_inc(v___y_1785_);
v___x_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1783_);
lean_ctor_set(v___x_1786_, 1, v___y_1785_);
v___x_1787_ = lean_box(0);
v___x_1788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1786_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = l_Lasm_JS_obj(v___x_1788_);
v___x_1790_ = lean_unsigned_to_nat(3u);
v___x_1791_ = lean_mk_empty_array_with_capacity(v___x_1790_);
v___x_1792_ = lean_array_push(v___x_1791_, v___x_1781_);
v___x_1793_ = lean_array_push(v___x_1792_, v___x_1782_);
v___x_1794_ = lean_array_push(v___x_1793_, v___x_1789_);
v___x_1795_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1778_, v___x_1779_, v___x_1794_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1802_ == 0)
{
lean_object* v_unused_1803_; 
v_unused_1803_ = lean_ctor_get(v___x_1795_, 0);
lean_dec(v_unused_1803_);
v___x_1797_ = v___x_1795_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_dec(v___x_1795_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v_a_1773_);
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1773_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec(v_a_1773_);
v_a_1804_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1795_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1795_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1822_; 
lean_dec(v_a_1773_);
v_a_1815_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1817_ = v___x_1777_;
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1777_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1818_ == 0)
{
v___x_1820_ = v___x_1817_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_a_1815_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
lean_dec(v_a_1773_);
v_a_1823_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1774_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1774_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
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
return v___x_1828_;
}
}
}
}
else
{
lean_object* v_a_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1838_; 
v_a_1831_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1833_ = v___x_1772_;
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_a_1831_);
lean_dec(v___x_1772_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1836_; 
if (v_isShared_1834_ == 0)
{
v___x_1836_ = v___x_1833_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_a_1831_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofSyncFn___boxed(lean_object* v_f_1839_, lean_object* v_a_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_Lasm_JS_Deno_ServeOptionsVsockAddrOnError_ofSyncFn(v_f_1839_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__1(lean_object* v_f_1849_, lean_object* v___f_1850_, lean_object* v_x_1851_){
_start:
{
if (lean_obj_tag(v_x_1851_) == 0)
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1861_; 
lean_dec_ref(v___f_1850_);
lean_dec_ref(v_f_1849_);
v_a_1853_ = lean_ctor_get(v_x_1851_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v_x_1851_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1855_ = v_x_1851_;
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v_x_1851_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
return v___x_1859_;
}
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1863_; uint8_t v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v_a_1862_ = lean_ctor_get(v_x_1851_, 0);
lean_inc(v_a_1862_);
lean_dec_ref_known(v_x_1851_, 1);
v___x_1863_ = lean_unsigned_to_nat(0u);
v___x_1864_ = 0;
v___x_1865_ = lean_apply_2(v_f_1849_, v_a_1862_, lean_box(0));
v___x_1866_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1863_, v___x_1864_, v___x_1865_, v___f_1850_);
return v___x_1866_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__1___boxed(lean_object* v_f_1867_, lean_object* v___f_1868_, lean_object* v_x_1869_, lean_object* v___y_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__1(v_f_1867_, v___f_1868_, v_x_1869_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn_spec__0(lean_object* v_args_1872_, lean_object* v_i_1873_){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; uint8_t v___x_1881_; 
v___x_1875_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1876_ = lean_unsigned_to_nat(1u);
v___x_1877_ = lean_nat_add(v_i_1873_, v___x_1876_);
v___x_1878_ = l_Nat_reprFast(v___x_1877_);
v___x_1879_ = lean_string_append(v___x_1875_, v___x_1878_);
lean_dec_ref(v___x_1878_);
v___x_1880_ = lean_array_get_size(v_args_1872_);
v___x_1881_ = lean_nat_dec_lt(v_i_1873_, v___x_1880_);
if (v___x_1881_ == 0)
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = lean_box(0);
v___x_1883_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnVsockAddr_localAddr_spec__0_spec__0_spec__1(v___x_1879_, v___x_1882_);
lean_dec_ref(v___x_1879_);
return v___x_1883_;
}
else
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = lean_array_fget_borrowed(v_args_1872_, v_i_1873_);
lean_inc(v___x_1884_);
v___x_1885_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnVsockAddr_localAddr_spec__0_spec__0_spec__1(v___x_1879_, v___x_1884_);
lean_dec_ref(v___x_1879_);
return v___x_1885_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn_spec__0___boxed(lean_object* v_args_1886_, lean_object* v_i_1887_, lean_object* v_a_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn_spec__0(v_args_1886_, v_i_1887_);
lean_dec(v_i_1887_);
lean_dec_ref(v_args_1886_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__0(lean_object* v___f_1890_, lean_object* v_args_1891_){
_start:
{
lean_object* v___x_1893_; uint8_t v___x_1894_; lean_object* v_val_1896_; lean_object* v___x_1899_; 
v___x_1893_ = lean_unsigned_to_nat(0u);
v___x_1894_ = 0;
v___x_1899_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn_spec__0(v_args_1891_, v___x_1893_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
v_a_1900_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1899_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1899_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
lean_ctor_set_tag(v___x_1902_, 1);
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
v_val_1896_ = v___x_1905_;
goto v___jp_1895_;
}
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
v_a_1908_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1899_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1899_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
lean_ctor_set_tag(v___x_1910_, 0);
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
v_val_1896_ = v___x_1913_;
goto v___jp_1895_;
}
}
}
v___jp_1895_:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1897_, 0, v_val_1896_);
v___x_1898_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1893_, v___x_1894_, v___x_1897_, v___f_1890_);
return v___x_1898_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__0___boxed(lean_object* v___f_1916_, lean_object* v_args_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__0(v___f_1916_, v_args_1917_);
lean_dec_ref(v_args_1917_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn(lean_object* v_f_1920_){
_start:
{
lean_object* v___f_1922_; lean_object* v___f_1923_; lean_object* v___f_1924_; lean_object* v___x_1925_; 
v___f_1922_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___closed__0));
v___f_1923_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1923_, 0, v_f_1920_);
lean_closure_set(v___f_1923_, 1, v___f_1922_);
v___f_1924_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1924_, 0, v___f_1923_);
v___x_1925_ = l_Lasm_JS_Function_ofFn(v___f_1924_);
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v_a_1926_; lean_object* v___x_1927_; 
v_a_1926_ = lean_ctor_get(v___x_1925_, 0);
lean_inc(v_a_1926_);
lean_dec_ref_known(v___x_1925_, 1);
v___x_1927_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1928_);
lean_dec_ref_known(v___x_1927_, 1);
v___x_1929_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1930_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1928_, v___x_1929_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___y_1938_; uint8_t v___x_1965_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1933_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1926_);
v___x_1934_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1934_, 0, v_a_1926_);
lean_ctor_set(v___x_1934_, 1, v___x_1933_);
v___x_1935_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1936_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1965_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1965_ == 0)
{
lean_object* v___x_1966_; 
v___x_1966_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1938_ = v___x_1966_;
goto v___jp_1937_;
}
else
{
lean_object* v___x_1967_; 
v___x_1967_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1938_ = v___x_1967_;
goto v___jp_1937_;
}
v___jp_1937_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
lean_inc(v___y_1938_);
v___x_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1936_);
lean_ctor_set(v___x_1939_, 1, v___y_1938_);
v___x_1940_ = lean_box(0);
v___x_1941_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1939_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
v___x_1942_ = l_Lasm_JS_obj(v___x_1941_);
v___x_1943_ = lean_unsigned_to_nat(3u);
v___x_1944_ = lean_mk_empty_array_with_capacity(v___x_1943_);
v___x_1945_ = lean_array_push(v___x_1944_, v___x_1934_);
v___x_1946_ = lean_array_push(v___x_1945_, v___x_1935_);
v___x_1947_ = lean_array_push(v___x_1946_, v___x_1942_);
v___x_1948_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1931_, v___x_1932_, v___x_1947_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1955_ == 0)
{
lean_object* v_unused_1956_; 
v_unused_1956_ = lean_ctor_get(v___x_1948_, 0);
lean_dec(v_unused_1956_);
v___x_1950_ = v___x_1948_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_dec(v___x_1948_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v_a_1926_);
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1926_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
lean_dec(v_a_1926_);
v_a_1957_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v___x_1948_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1948_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
}
else
{
lean_object* v_a_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1975_; 
lean_dec(v_a_1926_);
v_a_1968_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1970_ = v___x_1930_;
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_a_1968_);
lean_dec(v___x_1930_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1973_; 
if (v_isShared_1971_ == 0)
{
v___x_1973_ = v___x_1970_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_a_1968_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_dec(v_a_1926_);
v_a_1976_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1927_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1927_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
v_a_1984_ = lean_ctor_get(v___x_1925_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1925_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1925_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn___boxed(lean_object* v_f_1992_, lean_object* v_a_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn(v_f_1992_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn___lam__0(lean_object* v_f_1995_, lean_object* v_args_1996_){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = lean_unsigned_to_nat(0u);
v___x_1999_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofFn_spec__0(v_args_1996_, v___x_1998_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2001_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref_known(v___x_1999_, 1);
v___x_2001_ = lean_apply_2(v_f_1995_, v_a_2000_, lean_box(0));
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2009_; 
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2009_ == 0)
{
lean_object* v_unused_2010_; 
v_unused_2010_ = lean_ctor_get(v___x_2001_, 0);
lean_dec(v_unused_2010_);
v___x_2003_ = v___x_2001_;
v_isShared_2004_ = v_isSharedCheck_2009_;
goto v_resetjp_2002_;
}
else
{
lean_dec(v___x_2001_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2009_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2005_ = lean_box(0);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v___x_2005_);
v___x_2007_ = v___x_2003_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2005_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
v_a_2011_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_2001_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2001_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_dec_ref(v_f_1995_);
v_a_2019_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_1999_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_1999_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_2027_, lean_object* v_args_2028_, lean_object* v___y_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn___lam__0(v_f_2027_, v_args_2028_);
lean_dec_ref(v_args_2028_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn(lean_object* v_f_2031_){
_start:
{
lean_object* v___f_2033_; lean_object* v___x_2034_; 
v___f_2033_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2033_, 0, v_f_2031_);
v___x_2034_ = l_Lasm_JS_Function_ofSyncFn(v___f_2033_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2036_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2034_, 1);
v___x_2036_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2036_, 1);
v___x_2038_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_2039_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2037_, v___x_2038_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___y_2047_; uint8_t v___x_2074_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2039_, 1);
v___x_2041_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_2042_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_2035_);
v___x_2043_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2043_, 0, v_a_2035_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___x_2044_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_2045_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_2074_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_2074_ == 0)
{
lean_object* v___x_2075_; 
v___x_2075_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_2047_ = v___x_2075_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2076_; 
v___x_2076_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_2047_ = v___x_2076_;
goto v___jp_2046_;
}
v___jp_2046_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
lean_inc(v___y_2047_);
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2045_);
lean_ctor_set(v___x_2048_, 1, v___y_2047_);
v___x_2049_ = lean_box(0);
v___x_2050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2048_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = l_Lasm_JS_obj(v___x_2050_);
v___x_2052_ = lean_unsigned_to_nat(3u);
v___x_2053_ = lean_mk_empty_array_with_capacity(v___x_2052_);
v___x_2054_ = lean_array_push(v___x_2053_, v___x_2043_);
v___x_2055_ = lean_array_push(v___x_2054_, v___x_2044_);
v___x_2056_ = lean_array_push(v___x_2055_, v___x_2051_);
v___x_2057_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2040_, v___x_2041_, v___x_2056_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2064_; 
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2064_ == 0)
{
lean_object* v_unused_2065_; 
v_unused_2065_ = lean_ctor_get(v___x_2057_, 0);
lean_dec(v_unused_2065_);
v___x_2059_ = v___x_2057_;
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
else
{
lean_dec(v___x_2057_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2062_; 
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 0, v_a_2035_);
v___x_2062_ = v___x_2059_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_a_2035_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_dec(v_a_2035_);
v_a_2066_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2057_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2057_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
lean_dec(v_a_2035_);
v_a_2077_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2039_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2039_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v_a_2035_);
v_a_2085_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2036_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2036_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
v_a_2093_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2034_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2034_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn___boxed(lean_object* v_f_2101_, lean_object* v_a_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_Lasm_JS_Deno_ServeOptionsVsockAddrOnListen_ofSyncFn(v_f_2101_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0(lean_object* v___f_2106_, lean_object* v___f_2107_, lean_object* v___f_2108_, lean_object* v___f_2109_, lean_object* v___f_2110_, lean_object* v_d_2111_){
_start:
{
lean_object* v_signal_2112_; lean_object* v_onError_2113_; lean_object* v_onListen_2114_; lean_object* v_automaticCompression_2115_; lean_object* v_transport_2116_; double v_cid_2117_; double v_port_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v_signal_2112_ = lean_ctor_get(v_d_2111_, 0);
lean_inc(v_signal_2112_);
v_onError_2113_ = lean_ctor_get(v_d_2111_, 1);
lean_inc(v_onError_2113_);
v_onListen_2114_ = lean_ctor_get(v_d_2111_, 2);
lean_inc(v_onListen_2114_);
v_automaticCompression_2115_ = lean_ctor_get(v_d_2111_, 3);
lean_inc(v_automaticCompression_2115_);
v_transport_2116_ = lean_ctor_get(v_d_2111_, 4);
lean_inc(v_transport_2116_);
v_cid_2117_ = lean_ctor_get_float(v_d_2111_, sizeof(void*)*5);
v_port_2118_ = lean_ctor_get_float(v_d_2111_, sizeof(void*)*5 + 8);
lean_dec_ref(v_d_2111_);
v___x_2119_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_2120_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2106_, v_signal_2112_);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2119_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_2123_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2107_, v_onError_2113_);
v___x_2124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_2126_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2108_, v_onListen_2114_);
v___x_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2125_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_2129_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2109_, v_automaticCompression_2115_);
v___x_2130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2128_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_2132_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2110_, v_transport_2116_);
v___x_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2131_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__0));
v___x_2135_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2135_, 0, v_cid_2117_);
v___x_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2134_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1));
v___x_2138_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2138_, 0, v_port_2118_);
v___x_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2137_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = lean_unsigned_to_nat(7u);
v___x_2141_ = lean_mk_empty_array_with_capacity(v___x_2140_);
v___x_2142_ = lean_array_push(v___x_2141_, v___x_2121_);
v___x_2143_ = lean_array_push(v___x_2142_, v___x_2124_);
v___x_2144_ = lean_array_push(v___x_2143_, v___x_2127_);
v___x_2145_ = lean_array_push(v___x_2144_, v___x_2130_);
v___x_2146_ = lean_array_push(v___x_2145_, v___x_2133_);
v___x_2147_ = lean_array_push(v___x_2146_, v___x_2136_);
v___x_2148_ = lean_array_push(v___x_2147_, v___x_2139_);
v___x_2149_ = l_Lasm_JS_Web_Support_fields(v___x_2148_);
lean_dec_ref(v___x_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0_spec__0(lean_object* v_context_2163_, lean_object* v_d_2164_){
_start:
{
lean_object* v___y_2167_; lean_object* v___y_2168_; 
if (lean_obj_tag(v_d_2164_) == 9)
{
lean_object* v_value_2172_; lean_object* v___x_2173_; 
v_value_2172_ = lean_ctor_get(v_d_2164_, 0);
lean_inc(v_value_2172_);
lean_dec_ref_known(v_d_2164_, 2);
v___x_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2173_, 0, v_value_2172_);
return v___x_2173_;
}
else
{
lean_object* v___x_2174_; lean_object* v_received_2176_; 
v___x_2174_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
if (lean_obj_tag(v_d_2164_) == 9)
{
lean_object* v_value_2190_; lean_object* v_description_2191_; uint8_t v___x_2192_; 
v_value_2190_ = lean_ctor_get(v_d_2164_, 0);
v_description_2191_ = lean_ctor_get(v_d_2164_, 1);
v___x_2192_ = lean_string_dec_eq(v_description_2191_, v___x_2174_);
if (v___x_2192_ == 0)
{
goto v___jp_2188_;
}
else
{
uint32_t v___x_2193_; uint64_t v___x_2194_; lean_object* v___x_2195_; uint32_t v___x_2196_; lean_object* v___x_2197_; 
lean_inc_n(v_value_2190_, 2);
lean_dec_ref_known(v_d_2164_, 2);
v___x_2193_ = 206;
v___x_2194_ = 0ULL;
v___x_2195_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2195_, 0, v_value_2190_);
lean_ctor_set(v___x_2195_, 1, v___x_2174_);
v___x_2196_ = lasm_js_value_handle(v_value_2190_);
lean_dec(v_value_2190_);
v___x_2197_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2193_, v___x_2194_, v___x_2195_, v___x_2196_);
lean_dec_ref_known(v___x_2195_, 2);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; uint8_t v___x_2199_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = lean_string_validate_utf8(v_a_2198_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_dec(v_a_2198_);
v___x_2200_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_2201_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2200_);
v_received_2176_ = v___x_2201_;
goto v___jp_2175_;
}
else
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_string_from_utf8_unchecked(v_a_2198_);
v_received_2176_ = v___x_2202_;
goto v___jp_2175_;
}
}
else
{
lean_object* v___x_2203_; 
lean_dec_ref_known(v___x_2197_, 1);
v___x_2203_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v_received_2176_ = v___x_2203_;
goto v___jp_2175_;
}
}
}
else
{
goto v___jp_2188_;
}
v___jp_2175_:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; uint8_t v___x_2186_; 
v___x_2177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_2178_ = lean_string_append(v___x_2177_, v_context_2163_);
v___x_2179_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_2180_ = lean_string_append(v___x_2178_, v___x_2179_);
v___x_2181_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfoVsockAddr___closed__0));
v___x_2182_ = lean_string_append(v___x_2180_, v___x_2181_);
v___x_2183_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_2184_ = lean_string_append(v___x_2182_, v___x_2183_);
v___x_2185_ = lean_string_append(v___x_2184_, v_received_2176_);
lean_dec_ref(v_received_2176_);
v___x_2186_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; 
v___x_2187_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___y_2167_ = v___x_2185_;
v___y_2168_ = v___x_2187_;
goto v___jp_2166_;
}
else
{
v___y_2167_ = v___x_2185_;
v___y_2168_ = v___x_2174_;
goto v___jp_2166_;
}
}
v___jp_2188_:
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lasm_JS_Data_describe(v_d_2164_);
v_received_2176_ = v___x_2189_;
goto v___jp_2175_;
}
}
v___jp_2166_:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = lean_string_append(v___y_2167_, v___y_2168_);
v___x_2170_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2169_);
v___x_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2170_);
return v___x_2171_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0_spec__0___boxed(lean_object* v_context_2204_, lean_object* v_d_2205_, lean_object* v_a_2206_){
_start:
{
lean_object* v_res_2207_; 
v_res_2207_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0_spec__0(v_context_2204_, v_d_2205_);
lean_dec_ref(v_context_2204_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0(lean_object* v_args_2208_, lean_object* v_i_2209_){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; uint8_t v___x_2217_; 
v___x_2211_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_2212_ = lean_unsigned_to_nat(1u);
v___x_2213_ = lean_nat_add(v_i_2209_, v___x_2212_);
v___x_2214_ = l_Nat_reprFast(v___x_2213_);
v___x_2215_ = lean_string_append(v___x_2211_, v___x_2214_);
lean_dec_ref(v___x_2214_);
v___x_2216_ = lean_array_get_size(v_args_2208_);
v___x_2217_ = lean_nat_dec_lt(v_i_2209_, v___x_2216_);
if (v___x_2217_ == 0)
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = lean_box(0);
v___x_2219_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0_spec__0(v___x_2215_, v___x_2218_);
lean_dec_ref(v___x_2215_);
return v___x_2219_;
}
else
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2220_ = lean_array_fget_borrowed(v_args_2208_, v_i_2209_);
lean_inc(v___x_2220_);
v___x_2221_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0_spec__0(v___x_2215_, v___x_2220_);
lean_dec_ref(v___x_2215_);
return v___x_2221_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0___boxed(lean_object* v_args_2222_, lean_object* v_i_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0(v_args_2222_, v_i_2223_);
lean_dec(v_i_2223_);
lean_dec_ref(v_args_2222_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__2(lean_object* v_f_2226_, lean_object* v___f_2227_, lean_object* v_args_2228_, lean_object* v_x_2229_){
_start:
{
if (lean_obj_tag(v_x_2229_) == 0)
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2239_; 
lean_dec_ref(v___f_2227_);
lean_dec_ref(v_f_2226_);
v_a_2231_ = lean_ctor_get(v_x_2229_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_x_2229_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2233_ = v_x_2229_;
v_isShared_2234_ = v_isSharedCheck_2239_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v_x_2229_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2239_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
return v___x_2237_;
}
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2261_; 
v_a_2240_ = lean_ctor_get(v_x_2229_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v_x_2229_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2242_ = v_x_2229_;
v_isShared_2243_ = v_isSharedCheck_2261_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v_x_2229_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2261_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___f_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; uint8_t v___x_2247_; lean_object* v_val_2249_; lean_object* v___x_2252_; 
v___f_2244_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2244_, 0, v_f_2226_);
lean_closure_set(v___f_2244_, 1, v_a_2240_);
lean_closure_set(v___f_2244_, 2, v___f_2227_);
v___x_2245_ = lean_unsigned_to_nat(1u);
v___x_2246_ = lean_unsigned_to_nat(0u);
v___x_2247_ = 0;
v___x_2252_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0(v_args_2228_, v___x_2245_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2255_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2252_, 1);
if (v_isShared_2243_ == 0)
{
lean_ctor_set(v___x_2242_, 0, v_a_2253_);
v___x_2255_ = v___x_2242_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_a_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
v_val_2249_ = v___x_2255_;
goto v___jp_2248_;
}
}
else
{
lean_object* v_a_2257_; lean_object* v___x_2259_; 
v_a_2257_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2257_);
lean_dec_ref_known(v___x_2252_, 1);
if (v_isShared_2243_ == 0)
{
lean_ctor_set_tag(v___x_2242_, 0);
lean_ctor_set(v___x_2242_, 0, v_a_2257_);
v___x_2259_ = v___x_2242_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_a_2257_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
v_val_2249_ = v___x_2259_;
goto v___jp_2248_;
}
}
v___jp_2248_:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2250_, 0, v_val_2249_);
v___x_2251_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2246_, v___x_2247_, v___x_2250_, v___f_2244_);
return v___x_2251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__2___boxed(lean_object* v_f_2262_, lean_object* v___f_2263_, lean_object* v_args_2264_, lean_object* v_x_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__2(v_f_2262_, v___f_2263_, v_args_2264_, v_x_2265_);
lean_dec_ref(v_args_2264_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__0(lean_object* v_f_2268_, lean_object* v___f_2269_, lean_object* v_args_2270_){
_start:
{
lean_object* v___f_2272_; lean_object* v___x_2273_; uint8_t v___x_2274_; lean_object* v_val_2276_; lean_object* v___x_2279_; 
lean_inc_ref(v_args_2270_);
v___f_2272_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_2272_, 0, v_f_2268_);
lean_closure_set(v___f_2272_, 1, v___f_2269_);
lean_closure_set(v___f_2272_, 2, v_args_2270_);
v___x_2273_ = lean_unsigned_to_nat(0u);
v___x_2274_ = 0;
v___x_2279_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_2270_, v___x_2273_);
lean_dec_ref(v_args_2270_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2279_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2279_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
lean_ctor_set_tag(v___x_2282_, 1);
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
v_val_2276_ = v___x_2285_;
goto v___jp_2275_;
}
}
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
v_a_2288_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2279_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2279_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
lean_ctor_set_tag(v___x_2290_, 0);
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
v_val_2276_ = v___x_2293_;
goto v___jp_2275_;
}
}
}
v___jp_2275_:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2277_, 0, v_val_2276_);
v___x_2278_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2273_, v___x_2274_, v___x_2277_, v___f_2272_);
return v___x_2278_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__0___boxed(lean_object* v_f_2296_, lean_object* v___f_2297_, lean_object* v_args_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__0(v_f_2296_, v___f_2297_, v_args_2298_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn(lean_object* v_f_2301_){
_start:
{
lean_object* v___f_2303_; lean_object* v___f_2304_; lean_object* v___x_2305_; 
v___f_2303_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_2304_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2304_, 0, v_f_2301_);
lean_closure_set(v___f_2304_, 1, v___f_2303_);
v___x_2305_ = l_Lasm_JS_Function_ofFn(v___f_2304_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v___x_2307_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v___x_2307_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_a_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2308_);
lean_dec_ref_known(v___x_2307_, 1);
v___x_2309_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_2310_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2308_, v___x_2309_);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___y_2318_; uint8_t v___x_2345_; 
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
lean_inc(v_a_2311_);
lean_dec_ref_known(v___x_2310_, 1);
v___x_2312_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_2313_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_2306_);
v___x_2314_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2314_, 0, v_a_2306_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_2316_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_2345_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; 
v___x_2346_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_2318_ = v___x_2346_;
goto v___jp_2317_;
}
else
{
lean_object* v___x_2347_; 
v___x_2347_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_2318_ = v___x_2347_;
goto v___jp_2317_;
}
v___jp_2317_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
lean_inc(v___y_2318_);
v___x_2319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2316_);
lean_ctor_set(v___x_2319_, 1, v___y_2318_);
v___x_2320_ = lean_box(0);
v___x_2321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2319_);
lean_ctor_set(v___x_2321_, 1, v___x_2320_);
v___x_2322_ = l_Lasm_JS_obj(v___x_2321_);
v___x_2323_ = lean_unsigned_to_nat(3u);
v___x_2324_ = lean_mk_empty_array_with_capacity(v___x_2323_);
v___x_2325_ = lean_array_push(v___x_2324_, v___x_2314_);
v___x_2326_ = lean_array_push(v___x_2325_, v___x_2315_);
v___x_2327_ = lean_array_push(v___x_2326_, v___x_2322_);
v___x_2328_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2311_, v___x_2312_, v___x_2327_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2335_ == 0)
{
lean_object* v_unused_2336_; 
v_unused_2336_ = lean_ctor_get(v___x_2328_, 0);
lean_dec(v_unused_2336_);
v___x_2330_ = v___x_2328_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_dec(v___x_2328_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v_a_2306_);
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_a_2306_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec(v_a_2306_);
v_a_2337_ = lean_ctor_get(v___x_2328_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2328_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2328_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
}
else
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
lean_dec(v_a_2306_);
v_a_2348_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___x_2310_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2310_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2348_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2363_; 
lean_dec(v_a_2306_);
v_a_2356_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2358_ = v___x_2307_;
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2307_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_a_2356_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
else
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
v_a_2364_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v___x_2305_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2305_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
if (v_isShared_2367_ == 0)
{
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_a_2364_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn___boxed(lean_object* v_f_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn(v_f_2372_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn___lam__0(lean_object* v_f_2375_, lean_object* v_args_2376_){
_start:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2378_ = lean_unsigned_to_nat(0u);
v___x_2379_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_2376_, v___x_2378_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2379_, 1);
v___x_2381_ = lean_unsigned_to_nat(1u);
v___x_2382_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerVsockAddr_ofFn_spec__0(v_args_2376_, v___x_2381_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; lean_object* v___x_2384_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
lean_inc(v_a_2383_);
lean_dec_ref_known(v___x_2382_, 1);
v___x_2384_ = lean_apply_3(v_f_2375_, v_a_2380_, v_a_2383_, lean_box(0));
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2394_; 
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2387_ = v___x_2384_;
v_isShared_2388_ = v_isSharedCheck_2394_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2384_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2394_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2392_; 
v___x_2389_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_2390_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2390_, 0, v_a_2385_);
lean_ctor_set(v___x_2390_, 1, v___x_2389_);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 0, v___x_2390_);
v___x_2392_ = v___x_2387_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v___x_2390_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
else
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
v_a_2395_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2384_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2384_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
lean_dec(v_a_2380_);
lean_dec_ref(v_f_2375_);
v_a_2403_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v___x_2382_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2382_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_dec_ref(v_f_2375_);
v_a_2411_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2379_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2379_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn___lam__0___boxed(lean_object* v_f_2419_, lean_object* v_args_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn___lam__0(v_f_2419_, v_args_2420_);
lean_dec_ref(v_args_2420_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn(lean_object* v_f_2423_){
_start:
{
lean_object* v___f_2425_; lean_object* v___x_2426_; 
v___f_2425_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2425_, 0, v_f_2423_);
v___x_2426_ = l_Lasm_JS_Function_ofSyncFn(v___f_2425_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v_a_2427_; lean_object* v___x_2428_; 
v_a_2427_ = lean_ctor_get(v___x_2426_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v___x_2426_, 1);
v___x_2428_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref_known(v___x_2428_, 1);
v___x_2430_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_2431_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2429_, v___x_2430_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_a_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___y_2439_; uint8_t v___x_2466_; 
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
lean_inc(v_a_2432_);
lean_dec_ref_known(v___x_2431_, 1);
v___x_2433_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_2434_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_2427_);
v___x_2435_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2435_, 0, v_a_2427_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_2437_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_2466_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_2439_ = v___x_2467_;
goto v___jp_2438_;
}
else
{
lean_object* v___x_2468_; 
v___x_2468_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_2439_ = v___x_2468_;
goto v___jp_2438_;
}
v___jp_2438_:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
lean_inc(v___y_2439_);
v___x_2440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2437_);
lean_ctor_set(v___x_2440_, 1, v___y_2439_);
v___x_2441_ = lean_box(0);
v___x_2442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2440_);
lean_ctor_set(v___x_2442_, 1, v___x_2441_);
v___x_2443_ = l_Lasm_JS_obj(v___x_2442_);
v___x_2444_ = lean_unsigned_to_nat(3u);
v___x_2445_ = lean_mk_empty_array_with_capacity(v___x_2444_);
v___x_2446_ = lean_array_push(v___x_2445_, v___x_2435_);
v___x_2447_ = lean_array_push(v___x_2446_, v___x_2436_);
v___x_2448_ = lean_array_push(v___x_2447_, v___x_2443_);
v___x_2449_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2432_, v___x_2433_, v___x_2448_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2456_ == 0)
{
lean_object* v_unused_2457_; 
v_unused_2457_ = lean_ctor_get(v___x_2449_, 0);
lean_dec(v_unused_2457_);
v___x_2451_ = v___x_2449_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_dec(v___x_2449_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v_a_2427_);
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2427_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
lean_dec(v_a_2427_);
v_a_2458_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2449_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2449_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
lean_dec(v_a_2427_);
v_a_2469_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2431_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2431_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
else
{
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2484_; 
lean_dec(v_a_2427_);
v_a_2477_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2479_ = v___x_2428_;
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2428_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2482_; 
if (v_isShared_2480_ == 0)
{
v___x_2482_ = v___x_2479_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_a_2477_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
}
else
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
v_a_2485_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2487_ = v___x_2426_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2426_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn___boxed(lean_object* v_f_2493_, lean_object* v_a_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lasm_JS_Deno_ServeHandlerVsockAddr_ofSyncFn(v_f_2493_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object* v_f_2503_){
_start:
{
lean_object* v___f_2505_; lean_object* v___f_2506_; lean_object* v___f_2507_; lean_object* v___x_2508_; 
v___f_2505_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_2506_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2506_, 0, v_f_2503_);
lean_closure_set(v___f_2506_, 1, v___f_2505_);
v___f_2507_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2507_, 0, v___f_2506_);
v___x_2508_ = l_Lasm_JS_Function_ofFn(v___f_2507_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_object* v_a_2509_; lean_object* v___x_2510_; 
v_a_2509_ = lean_ctor_get(v___x_2508_, 0);
lean_inc(v_a_2509_);
lean_dec_ref_known(v___x_2508_, 1);
v___x_2510_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2512_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_2513_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2511_, v___x_2512_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___y_2521_; uint8_t v___x_2548_; 
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v___x_2513_, 1);
v___x_2515_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_2516_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_2509_);
v___x_2517_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2517_, 0, v_a_2509_);
lean_ctor_set(v___x_2517_, 1, v___x_2516_);
v___x_2518_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_2519_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_2548_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_2548_ == 0)
{
lean_object* v___x_2549_; 
v___x_2549_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_2521_ = v___x_2549_;
goto v___jp_2520_;
}
else
{
lean_object* v___x_2550_; 
v___x_2550_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_2521_ = v___x_2550_;
goto v___jp_2520_;
}
v___jp_2520_:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
lean_inc(v___y_2521_);
v___x_2522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2519_);
lean_ctor_set(v___x_2522_, 1, v___y_2521_);
v___x_2523_ = lean_box(0);
v___x_2524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2522_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = l_Lasm_JS_obj(v___x_2524_);
v___x_2526_ = lean_unsigned_to_nat(3u);
v___x_2527_ = lean_mk_empty_array_with_capacity(v___x_2526_);
v___x_2528_ = lean_array_push(v___x_2527_, v___x_2517_);
v___x_2529_ = lean_array_push(v___x_2528_, v___x_2518_);
v___x_2530_ = lean_array_push(v___x_2529_, v___x_2525_);
v___x_2531_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2514_, v___x_2515_, v___x_2530_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2538_ == 0)
{
lean_object* v_unused_2539_; 
v_unused_2539_ = lean_ctor_get(v___x_2531_, 0);
lean_dec(v_unused_2539_);
v___x_2533_ = v___x_2531_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_dec(v___x_2531_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v_a_2509_);
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2509_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_dec(v_a_2509_);
v_a_2540_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2531_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2531_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
lean_dec(v_a_2509_);
v_a_2551_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2513_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v___x_2513_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
lean_dec(v_a_2509_);
v_a_2559_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2510_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2510_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
v_a_2567_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2508_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2508_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object* v_f_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(v_f_2575_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object* v_f_2578_){
_start:
{
lean_object* v___f_2580_; lean_object* v___x_2581_; 
v___f_2580_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2580_, 0, v_f_2578_);
v___x_2581_ = l_Lasm_JS_Function_ofSyncFn(v___f_2580_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_a_2582_; lean_object* v___x_2583_; 
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2582_);
lean_dec_ref_known(v___x_2581_, 1);
v___x_2583_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2583_) == 0)
{
lean_object* v_a_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_a_2584_);
lean_dec_ref_known(v___x_2583_, 1);
v___x_2585_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_2586_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2584_, v___x_2585_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___y_2594_; uint8_t v___x_2621_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_a_2587_);
lean_dec_ref_known(v___x_2586_, 1);
v___x_2588_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_2589_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_2582_);
v___x_2590_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2590_, 0, v_a_2582_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_2592_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_2621_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_2621_ == 0)
{
lean_object* v___x_2622_; 
v___x_2622_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_2594_ = v___x_2622_;
goto v___jp_2593_;
}
else
{
lean_object* v___x_2623_; 
v___x_2623_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_2594_ = v___x_2623_;
goto v___jp_2593_;
}
v___jp_2593_:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
lean_inc(v___y_2594_);
v___x_2595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2592_);
lean_ctor_set(v___x_2595_, 1, v___y_2594_);
v___x_2596_ = lean_box(0);
v___x_2597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2595_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
v___x_2598_ = l_Lasm_JS_obj(v___x_2597_);
v___x_2599_ = lean_unsigned_to_nat(3u);
v___x_2600_ = lean_mk_empty_array_with_capacity(v___x_2599_);
v___x_2601_ = lean_array_push(v___x_2600_, v___x_2590_);
v___x_2602_ = lean_array_push(v___x_2601_, v___x_2591_);
v___x_2603_ = lean_array_push(v___x_2602_, v___x_2598_);
v___x_2604_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2587_, v___x_2588_, v___x_2603_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2611_ == 0)
{
lean_object* v_unused_2612_; 
v_unused_2612_ = lean_ctor_get(v___x_2604_, 0);
lean_dec(v_unused_2612_);
v___x_2606_ = v___x_2604_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_dec(v___x_2604_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
lean_ctor_set(v___x_2606_, 0, v_a_2582_);
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2582_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2620_; 
lean_dec(v_a_2582_);
v_a_2613_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2615_ = v___x_2604_;
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2604_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2618_; 
if (v_isShared_2616_ == 0)
{
v___x_2618_ = v___x_2615_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_a_2613_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
}
}
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
lean_dec(v_a_2582_);
v_a_2624_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2586_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2586_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
lean_dec(v_a_2582_);
v_a_2632_ = lean_ctor_get(v___x_2583_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2583_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2583_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2583_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
v_a_2640_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2581_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2581_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2640_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object* v_f_2648_, lean_object* v_a_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(v_f_2648_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object* v_f_2658_, lean_object* v___f_2659_, lean_object* v_x_2660_){
_start:
{
if (lean_obj_tag(v_x_2660_) == 0)
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2670_; 
lean_dec_ref(v___f_2659_);
lean_dec_ref(v_f_2658_);
v_a_2662_ = lean_ctor_get(v_x_2660_, 0);
v_isSharedCheck_2670_ = !lean_is_exclusive(v_x_2660_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2664_ = v_x_2660_;
v_isShared_2665_ = v_isSharedCheck_2670_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v_x_2660_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2670_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
return v___x_2668_;
}
}
}
else
{
lean_object* v_a_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v_a_2671_ = lean_ctor_get(v_x_2660_, 0);
lean_inc(v_a_2671_);
lean_dec_ref_known(v_x_2660_, 1);
v___x_2672_ = lean_unsigned_to_nat(0u);
v___x_2673_ = 0;
v___x_2674_ = lean_apply_2(v_f_2658_, v_a_2671_, lean_box(0));
v___x_2675_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2672_, v___x_2673_, v___x_2674_, v___f_2659_);
return v___x_2675_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object* v_f_2676_, lean_object* v___f_2677_, lean_object* v_x_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(v_f_2676_, v___f_2677_, v_x_2678_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object* v_args_2681_, lean_object* v_i_2682_){
_start:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; uint8_t v___x_2690_; 
v___x_2684_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_2685_ = lean_unsigned_to_nat(1u);
v___x_2686_ = lean_nat_add(v_i_2682_, v___x_2685_);
v___x_2687_ = l_Nat_reprFast(v___x_2686_);
v___x_2688_ = lean_string_append(v___x_2684_, v___x_2687_);
lean_dec_ref(v___x_2687_);
v___x_2689_ = lean_array_get_size(v_args_2681_);
v___x_2690_ = lean_nat_dec_lt(v_i_2682_, v___x_2689_);
if (v___x_2690_ == 0)
{
lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2691_ = lean_box(0);
v___x_2692_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0_spec__0_spec__1(v___x_2688_, v___x_2691_);
lean_dec_ref(v___x_2688_);
return v___x_2692_;
}
else
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = lean_array_fget_borrowed(v_args_2681_, v_i_2682_);
lean_inc(v___x_2693_);
v___x_2694_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0_spec__0_spec__1(v___x_2688_, v___x_2693_);
lean_dec_ref(v___x_2688_);
return v___x_2694_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object* v_args_2695_, lean_object* v_i_2696_, lean_object* v_a_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_2695_, v_i_2696_);
lean_dec(v_i_2696_);
lean_dec_ref(v_args_2695_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object* v___f_2699_, lean_object* v_args_2700_){
_start:
{
lean_object* v___x_2702_; uint8_t v___x_2703_; lean_object* v_val_2705_; lean_object* v___x_2708_; 
v___x_2702_ = lean_unsigned_to_nat(0u);
v___x_2703_ = 0;
v___x_2708_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_2700_, v___x_2702_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2716_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2711_ = v___x_2708_;
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2708_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2714_; 
if (v_isShared_2712_ == 0)
{
lean_ctor_set_tag(v___x_2711_, 1);
v___x_2714_ = v___x_2711_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_a_2709_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
v_val_2705_ = v___x_2714_;
goto v___jp_2704_;
}
}
}
else
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
v_a_2717_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2708_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2708_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
lean_ctor_set_tag(v___x_2719_, 0);
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
v_val_2705_ = v___x_2722_;
goto v___jp_2704_;
}
}
}
v___jp_2704_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2706_, 0, v_val_2705_);
v___x_2707_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2702_, v___x_2703_, v___x_2706_, v___f_2699_);
return v___x_2707_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object* v___f_2725_, lean_object* v_args_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(v___f_2725_, v_args_2726_);
lean_dec_ref(v_args_2726_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object* v_f_2729_){
_start:
{
lean_object* v___f_2731_; lean_object* v___f_2732_; lean_object* v___f_2733_; lean_object* v___x_2734_; 
v___f_2731_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___closed__0));
v___f_2732_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2732_, 0, v_f_2729_);
lean_closure_set(v___f_2732_, 1, v___f_2731_);
v___f_2733_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2733_, 0, v___f_2732_);
v___x_2734_ = l_Lasm_JS_Function_ofFn(v___f_2733_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; lean_object* v___x_2736_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2734_, 1);
v___x_2736_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref_known(v___x_2736_, 1);
v___x_2738_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_2739_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2737_, v___x_2738_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___y_2747_; uint8_t v___x_2774_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
v___x_2741_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_2742_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_2735_);
v___x_2743_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2743_, 0, v_a_2735_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_2745_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_2774_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_2774_ == 0)
{
lean_object* v___x_2775_; 
v___x_2775_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_2747_ = v___x_2775_;
goto v___jp_2746_;
}
else
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_2747_ = v___x_2776_;
goto v___jp_2746_;
}
v___jp_2746_:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; 
lean_inc(v___y_2747_);
v___x_2748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2745_);
lean_ctor_set(v___x_2748_, 1, v___y_2747_);
v___x_2749_ = lean_box(0);
v___x_2750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2748_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = l_Lasm_JS_obj(v___x_2750_);
v___x_2752_ = lean_unsigned_to_nat(3u);
v___x_2753_ = lean_mk_empty_array_with_capacity(v___x_2752_);
v___x_2754_ = lean_array_push(v___x_2753_, v___x_2743_);
v___x_2755_ = lean_array_push(v___x_2754_, v___x_2744_);
v___x_2756_ = lean_array_push(v___x_2755_, v___x_2751_);
v___x_2757_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2740_, v___x_2741_, v___x_2756_);
if (lean_obj_tag(v___x_2757_) == 0)
{
lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2764_; 
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2764_ == 0)
{
lean_object* v_unused_2765_; 
v_unused_2765_ = lean_ctor_get(v___x_2757_, 0);
lean_dec(v_unused_2765_);
v___x_2759_ = v___x_2757_;
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
else
{
lean_dec(v___x_2757_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2762_; 
if (v_isShared_2760_ == 0)
{
lean_ctor_set(v___x_2759_, 0, v_a_2735_);
v___x_2762_ = v___x_2759_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_a_2735_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
else
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2773_; 
lean_dec(v_a_2735_);
v_a_2766_ = lean_ctor_get(v___x_2757_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2768_ = v___x_2757_;
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2757_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2766_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
}
else
{
lean_object* v_a_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2784_; 
lean_dec(v_a_2735_);
v_a_2777_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2779_ = v___x_2739_;
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_a_2777_);
lean_dec(v___x_2739_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2782_; 
if (v_isShared_2780_ == 0)
{
v___x_2782_ = v___x_2779_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2777_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_dec(v_a_2735_);
v_a_2785_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2736_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2736_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2800_; 
v_a_2793_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2795_ = v___x_2734_;
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2734_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object* v_f_2801_, lean_object* v_a_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(v_f_2801_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object* v_f_2804_, lean_object* v_args_2805_){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = lean_unsigned_to_nat(0u);
v___x_2808_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_2805_, v___x_2807_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2810_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2808_, 1);
v___x_2810_ = lean_apply_2(v_f_2804_, v_a_2809_, lean_box(0));
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2818_; 
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2818_ == 0)
{
lean_object* v_unused_2819_; 
v_unused_2819_ = lean_ctor_get(v___x_2810_, 0);
lean_dec(v_unused_2819_);
v___x_2812_ = v___x_2810_;
v_isShared_2813_ = v_isSharedCheck_2818_;
goto v_resetjp_2811_;
}
else
{
lean_dec(v___x_2810_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2818_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2814_; lean_object* v___x_2816_; 
v___x_2814_ = lean_box(0);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 0, v___x_2814_);
v___x_2816_ = v___x_2812_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v___x_2814_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
else
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
v_a_2820_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2810_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2810_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
lean_dec_ref(v_f_2804_);
v_a_2828_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2808_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2808_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_2836_, lean_object* v_args_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(v_f_2836_, v_args_2837_);
lean_dec_ref(v_args_2837_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object* v_f_2840_){
_start:
{
lean_object* v___f_2842_; lean_object* v___x_2843_; 
v___f_2842_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2842_, 0, v_f_2840_);
v___x_2843_ = l_Lasm_JS_Function_ofSyncFn(v___f_2842_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2845_; 
v_a_2844_ = lean_ctor_get(v___x_2843_, 0);
lean_inc(v_a_2844_);
lean_dec_ref_known(v___x_2843_, 1);
v___x_2845_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2845_, 1);
v___x_2847_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_2848_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2846_, v___x_2847_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___y_2856_; uint8_t v___x_2883_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2849_);
lean_dec_ref_known(v___x_2848_, 1);
v___x_2850_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_2851_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_2844_);
v___x_2852_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2852_, 0, v_a_2844_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
v___x_2853_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_2854_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_2883_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; 
v___x_2884_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_2856_ = v___x_2884_;
goto v___jp_2855_;
}
else
{
lean_object* v___x_2885_; 
v___x_2885_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_2856_ = v___x_2885_;
goto v___jp_2855_;
}
v___jp_2855_:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
lean_inc(v___y_2856_);
v___x_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2854_);
lean_ctor_set(v___x_2857_, 1, v___y_2856_);
v___x_2858_ = lean_box(0);
v___x_2859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2857_);
lean_ctor_set(v___x_2859_, 1, v___x_2858_);
v___x_2860_ = l_Lasm_JS_obj(v___x_2859_);
v___x_2861_ = lean_unsigned_to_nat(3u);
v___x_2862_ = lean_mk_empty_array_with_capacity(v___x_2861_);
v___x_2863_ = lean_array_push(v___x_2862_, v___x_2852_);
v___x_2864_ = lean_array_push(v___x_2863_, v___x_2853_);
v___x_2865_ = lean_array_push(v___x_2864_, v___x_2860_);
v___x_2866_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2849_, v___x_2850_, v___x_2865_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2873_ == 0)
{
lean_object* v_unused_2874_; 
v_unused_2874_ = lean_ctor_get(v___x_2866_, 0);
lean_dec(v_unused_2874_);
v___x_2868_ = v___x_2866_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_dec(v___x_2866_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 0, v_a_2844_);
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2844_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_dec(v_a_2844_);
v_a_2875_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2866_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2866_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
}
else
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2893_; 
lean_dec(v_a_2844_);
v_a_2886_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2888_ = v___x_2848_;
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v___x_2848_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2891_; 
if (v_isShared_2889_ == 0)
{
v___x_2891_ = v___x_2888_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_a_2886_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
}
else
{
lean_object* v_a_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2901_; 
lean_dec(v_a_2844_);
v_a_2894_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2896_ = v___x_2845_;
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_a_2894_);
lean_dec(v___x_2845_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v___x_2899_; 
if (v_isShared_2897_ == 0)
{
v___x_2899_ = v___x_2896_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v_a_2894_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
}
else
{
lean_object* v_a_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2909_; 
v_a_2902_ = lean_ctor_get(v___x_2843_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2904_ = v___x_2843_;
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_a_2902_);
lean_dec(v___x_2843_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2907_; 
if (v_isShared_2905_ == 0)
{
v___x_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v_a_2902_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object* v_f_2910_, lean_object* v_a_2911_){
_start:
{
lean_object* v_res_2912_; 
v_res_2912_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(v_f_2910_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object* v___f_2916_, lean_object* v___f_2917_, lean_object* v___f_2918_, lean_object* v___f_2919_, lean_object* v___f_2920_, lean_object* v___f_2921_, lean_object* v___f_2922_, lean_object* v_d_2923_){
_start:
{
lean_object* v_signal_2924_; lean_object* v_onError_2925_; lean_object* v_onListen_2926_; lean_object* v_automaticCompression_2927_; lean_object* v_transport_2928_; lean_object* v_port_2929_; lean_object* v_hostname_2930_; lean_object* v_reusePort_2931_; lean_object* v_tcpBacklog_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v_signal_2924_ = lean_ctor_get(v_d_2923_, 0);
lean_inc(v_signal_2924_);
v_onError_2925_ = lean_ctor_get(v_d_2923_, 1);
lean_inc(v_onError_2925_);
v_onListen_2926_ = lean_ctor_get(v_d_2923_, 2);
lean_inc(v_onListen_2926_);
v_automaticCompression_2927_ = lean_ctor_get(v_d_2923_, 3);
lean_inc(v_automaticCompression_2927_);
v_transport_2928_ = lean_ctor_get(v_d_2923_, 4);
lean_inc(v_transport_2928_);
v_port_2929_ = lean_ctor_get(v_d_2923_, 5);
lean_inc(v_port_2929_);
v_hostname_2930_ = lean_ctor_get(v_d_2923_, 6);
lean_inc(v_hostname_2930_);
v_reusePort_2931_ = lean_ctor_get(v_d_2923_, 7);
lean_inc(v_reusePort_2931_);
v_tcpBacklog_2932_ = lean_ctor_get(v_d_2923_, 8);
lean_inc(v_tcpBacklog_2932_);
lean_dec_ref(v_d_2923_);
v___x_2933_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_2934_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2916_, v_signal_2924_);
v___x_2935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2935_, 0, v___x_2933_);
lean_ctor_set(v___x_2935_, 1, v___x_2934_);
v___x_2936_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_2937_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2917_, v_onError_2925_);
v___x_2938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2936_);
lean_ctor_set(v___x_2938_, 1, v___x_2937_);
v___x_2939_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_2940_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2918_, v_onListen_2926_);
v___x_2941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2939_);
lean_ctor_set(v___x_2941_, 1, v___x_2940_);
v___x_2942_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
lean_inc_ref(v___f_2919_);
v___x_2943_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2919_, v_automaticCompression_2927_);
v___x_2944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2942_);
lean_ctor_set(v___x_2944_, 1, v___x_2943_);
v___x_2945_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_2946_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2920_, v_transport_2928_);
v___x_2947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2945_);
lean_ctor_set(v___x_2947_, 1, v___x_2946_);
v___x_2948_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1));
lean_inc_ref(v___f_2921_);
v___x_2949_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2921_, v_port_2929_);
v___x_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2948_);
lean_ctor_set(v___x_2950_, 1, v___x_2949_);
v___x_2951_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_2952_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2922_, v_hostname_2930_);
v___x_2953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2951_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2955_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2919_, v_reusePort_2931_);
v___x_2956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2954_);
lean_ctor_set(v___x_2956_, 1, v___x_2955_);
v___x_2957_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2958_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2921_, v_tcpBacklog_2932_);
v___x_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2957_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
v___x_2960_ = lean_unsigned_to_nat(9u);
v___x_2961_ = lean_mk_empty_array_with_capacity(v___x_2960_);
v___x_2962_ = lean_array_push(v___x_2961_, v___x_2935_);
v___x_2963_ = lean_array_push(v___x_2962_, v___x_2938_);
v___x_2964_ = lean_array_push(v___x_2963_, v___x_2941_);
v___x_2965_ = lean_array_push(v___x_2964_, v___x_2944_);
v___x_2966_ = lean_array_push(v___x_2965_, v___x_2947_);
v___x_2967_ = lean_array_push(v___x_2966_, v___x_2950_);
v___x_2968_ = lean_array_push(v___x_2967_, v___x_2953_);
v___x_2969_ = lean_array_push(v___x_2968_, v___x_2956_);
v___x_2970_ = lean_array_push(v___x_2969_, v___x_2959_);
v___x_2971_ = l_Lasm_JS_Web_Support_fields(v___x_2970_);
lean_dec_ref(v___x_2970_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object* v___f_2985_, lean_object* v___f_2986_, lean_object* v___f_2987_, lean_object* v___f_2988_, lean_object* v___f_2989_, lean_object* v___f_2990_, lean_object* v___f_2991_, lean_object* v___f_2992_, lean_object* v_d_2993_){
_start:
{
lean_object* v_signal_2994_; lean_object* v_onError_2995_; lean_object* v_onListen_2996_; lean_object* v_automaticCompression_2997_; lean_object* v_transport_2998_; lean_object* v_port_2999_; lean_object* v_hostname_3000_; lean_object* v_reusePort_3001_; lean_object* v_tcpBacklog_3002_; lean_object* v_keyFormat_3003_; lean_object* v_key_3004_; lean_object* v_cert_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v_signal_2994_ = lean_ctor_get(v_d_2993_, 0);
lean_inc(v_signal_2994_);
v_onError_2995_ = lean_ctor_get(v_d_2993_, 1);
lean_inc(v_onError_2995_);
v_onListen_2996_ = lean_ctor_get(v_d_2993_, 2);
lean_inc(v_onListen_2996_);
v_automaticCompression_2997_ = lean_ctor_get(v_d_2993_, 3);
lean_inc(v_automaticCompression_2997_);
v_transport_2998_ = lean_ctor_get(v_d_2993_, 4);
lean_inc(v_transport_2998_);
v_port_2999_ = lean_ctor_get(v_d_2993_, 5);
lean_inc(v_port_2999_);
v_hostname_3000_ = lean_ctor_get(v_d_2993_, 6);
lean_inc(v_hostname_3000_);
v_reusePort_3001_ = lean_ctor_get(v_d_2993_, 7);
lean_inc(v_reusePort_3001_);
v_tcpBacklog_3002_ = lean_ctor_get(v_d_2993_, 8);
lean_inc(v_tcpBacklog_3002_);
v_keyFormat_3003_ = lean_ctor_get(v_d_2993_, 9);
lean_inc(v_keyFormat_3003_);
v_key_3004_ = lean_ctor_get(v_d_2993_, 10);
lean_inc_ref(v_key_3004_);
v_cert_3005_ = lean_ctor_get(v_d_2993_, 11);
lean_inc_ref(v_cert_3005_);
lean_dec_ref(v_d_2993_);
v___x_3006_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_3007_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2985_, v_signal_2994_);
v___x_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3006_);
lean_ctor_set(v___x_3008_, 1, v___x_3007_);
v___x_3009_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_3010_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2986_, v_onError_2995_);
v___x_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3011_, 0, v___x_3009_);
lean_ctor_set(v___x_3011_, 1, v___x_3010_);
v___x_3012_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_3013_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2987_, v_onListen_2996_);
v___x_3014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3012_);
lean_ctor_set(v___x_3014_, 1, v___x_3013_);
v___x_3015_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
lean_inc_ref(v___f_2988_);
v___x_3016_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2988_, v_automaticCompression_2997_);
v___x_3017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3015_);
lean_ctor_set(v___x_3017_, 1, v___x_3016_);
v___x_3018_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_3019_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2989_, v_transport_2998_);
v___x_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3018_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1));
lean_inc_ref(v___f_2990_);
v___x_3022_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2990_, v_port_2999_);
v___x_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3021_);
lean_ctor_set(v___x_3023_, 1, v___x_3022_);
v___x_3024_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_3025_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2991_, v_hostname_3000_);
v___x_3026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3024_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
v___x_3027_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_3028_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2988_, v_reusePort_3001_);
v___x_3029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3027_);
lean_ctor_set(v___x_3029_, 1, v___x_3028_);
v___x_3030_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_3031_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2990_, v_tcpBacklog_3002_);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3030_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_3034_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2992_, v_keyFormat_3003_);
v___x_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3033_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
v___x_3036_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_3037_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3037_, 0, v_key_3004_);
v___x_3038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3036_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
v___x_3039_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_3040_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3040_, 0, v_cert_3005_);
v___x_3041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = lean_unsigned_to_nat(12u);
v___x_3043_ = lean_mk_empty_array_with_capacity(v___x_3042_);
v___x_3044_ = lean_array_push(v___x_3043_, v___x_3008_);
v___x_3045_ = lean_array_push(v___x_3044_, v___x_3011_);
v___x_3046_ = lean_array_push(v___x_3045_, v___x_3014_);
v___x_3047_ = lean_array_push(v___x_3046_, v___x_3017_);
v___x_3048_ = lean_array_push(v___x_3047_, v___x_3020_);
v___x_3049_ = lean_array_push(v___x_3048_, v___x_3023_);
v___x_3050_ = lean_array_push(v___x_3049_, v___x_3026_);
v___x_3051_ = lean_array_push(v___x_3050_, v___x_3029_);
v___x_3052_ = lean_array_push(v___x_3051_, v___x_3032_);
v___x_3053_ = lean_array_push(v___x_3052_, v___x_3035_);
v___x_3054_ = lean_array_push(v___x_3053_, v___x_3038_);
v___x_3055_ = lean_array_push(v___x_3054_, v___x_3041_);
v___x_3056_ = l_Lasm_JS_Web_Support_fields(v___x_3055_);
lean_dec_ref(v___x_3055_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___lam__0(lean_object* v_x_3066_){
_start:
{
if (lean_obj_tag(v_x_3066_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3076_; 
v_a_3068_ = lean_ctor_get(v_x_3066_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v_x_3066_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3070_ = v_x_3066_;
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v_x_3066_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3068_);
v___x_3073_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3073_);
return v___x_3074_;
}
}
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3078_; 
v_a_3077_ = lean_ctor_get(v_x_3066_, 0);
lean_inc(v_a_3077_);
lean_dec_ref_known(v_x_3066_, 1);
v___x_3078_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_3077_);
return v___x_3078_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___lam__0___boxed(lean_object* v_x_3079_, lean_object* v___y_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = l_Lasm_JS_Deno_HttpServer_finished___lam__0(v_x_3079_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object* v_self_3084_){
_start:
{
lean_object* v___f_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; uint8_t v___x_3089_; lean_object* v_val_3091_; lean_object* v___x_3094_; 
v___f_3086_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_3087_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__1));
v___x_3088_ = lean_unsigned_to_nat(0u);
v___x_3089_ = 0;
v___x_3094_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3084_, v___x_3087_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3094_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3094_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
lean_ctor_set_tag(v___x_3097_, 1);
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
v_val_3091_ = v___x_3100_;
goto v___jp_3090_;
}
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
v_a_3103_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3094_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3094_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
lean_ctor_set_tag(v___x_3105_, 0);
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
v_val_3091_ = v___x_3108_;
goto v___jp_3090_;
}
}
}
v___jp_3090_:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3092_, 0, v_val_3091_);
v___x_3093_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3088_, v___x_3089_, v___x_3092_, v___f_3086_);
return v___x_3093_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object* v_self_3111_, lean_object* v_a_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l_Lasm_JS_Deno_HttpServer_finished(v_self_3111_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr(lean_object* v_self_3115_){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3117_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_3118_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0(v_self_3115_, v___x_3117_);
return v___x_3118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr___boxed(lean_object* v_self_3119_, lean_object* v_a_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Lasm_JS_Deno_HttpServer_addr(v_self_3119_);
return v_res_3121_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2(void){
_start:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3125_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__1));
v___x_3126_ = l_Lasm_JS_Web_Support_args(v___x_3125_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref(lean_object* v_self_3127_){
_start:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3129_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_3130_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3131_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3127_, v___x_3129_, v___x_3130_);
return v___x_3131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref___boxed(lean_object* v_self_3132_, lean_object* v_a_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l_Lasm_JS_Deno_HttpServer_ref(v_self_3132_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref(lean_object* v_self_3136_){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3138_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_3139_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3140_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3136_, v___x_3138_, v___x_3139_);
return v___x_3140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref___boxed(lean_object* v_self_3141_, lean_object* v_a_3142_){
_start:
{
lean_object* v_res_3143_; 
v_res_3143_ = l_Lasm_JS_Deno_HttpServer_unref(v_self_3141_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown(lean_object* v_self_3145_){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3147_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_3148_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3149_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3145_, v___x_3147_, v___x_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___boxed(lean_object* v_self_3150_, lean_object* v_a_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l_Lasm_JS_Deno_HttpServer_shutdown(v_self_3150_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(lean_object* v_self_3154_){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_3157_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0(v_self_3154_, v___x_3156_);
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___boxed(lean_object* v_self_3158_, lean_object* v_a_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(v_self_3158_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed(lean_object* v_self_3162_){
_start:
{
lean_object* v___f_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; uint8_t v___x_3167_; lean_object* v_val_3169_; lean_object* v___x_3172_; 
v___f_3164_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_3165_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_3166_ = lean_unsigned_to_nat(0u);
v___x_3167_ = 0;
v___x_3172_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3162_, v___x_3165_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_object* v_a_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
v_a_3173_ = lean_ctor_get(v___x_3172_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3175_ = v___x_3172_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_a_3173_);
lean_dec(v___x_3172_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
lean_ctor_set_tag(v___x_3175_, 1);
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
v_val_3169_ = v___x_3178_;
goto v___jp_3168_;
}
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3188_; 
v_a_3181_ = lean_ctor_get(v___x_3172_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3183_ = v___x_3172_;
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___x_3172_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3186_; 
if (v_isShared_3184_ == 0)
{
lean_ctor_set_tag(v___x_3183_, 0);
v___x_3186_ = v___x_3183_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3181_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
v_val_3169_ = v___x_3186_;
goto v___jp_3168_;
}
}
}
v___jp_3168_:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3170_, 0, v_val_3169_);
v___x_3171_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3166_, v___x_3167_, v___x_3170_, v___f_3164_);
return v___x_3171_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___boxed(lean_object* v_self_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed(v_self_3189_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_finished(lean_object* v_self_3192_){
_start:
{
lean_object* v___f_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; uint8_t v___x_3197_; lean_object* v_val_3199_; lean_object* v___x_3202_; 
v___f_3194_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_3195_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__1));
v___x_3196_ = lean_unsigned_to_nat(0u);
v___x_3197_ = 0;
v___x_3202_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3192_, v___x_3195_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3202_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3202_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
lean_ctor_set_tag(v___x_3205_, 1);
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
v_val_3199_ = v___x_3208_;
goto v___jp_3198_;
}
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
v_a_3211_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3202_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3202_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
lean_ctor_set_tag(v___x_3213_, 0);
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
v_val_3199_ = v___x_3216_;
goto v___jp_3198_;
}
}
}
v___jp_3198_:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3200_, 0, v_val_3199_);
v___x_3201_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3196_, v___x_3197_, v___x_3200_, v___f_3194_);
return v___x_3201_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_finished___boxed(lean_object* v_self_3219_, lean_object* v_a_3220_){
_start:
{
lean_object* v_res_3221_; 
v_res_3221_ = l_Lasm_JS_Deno_HttpServerUnixAddr_finished(v_self_3219_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_addr(lean_object* v_self_3222_){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3224_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_3225_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0(v_self_3222_, v___x_3224_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_addr___boxed(lean_object* v_self_3226_, lean_object* v_a_3227_){
_start:
{
lean_object* v_res_3228_; 
v_res_3228_ = l_Lasm_JS_Deno_HttpServerUnixAddr_addr(v_self_3226_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_ref(lean_object* v_self_3229_){
_start:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3231_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_3232_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3233_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3229_, v___x_3231_, v___x_3232_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_ref___boxed(lean_object* v_self_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v_res_3236_; 
v_res_3236_ = l_Lasm_JS_Deno_HttpServerUnixAddr_ref(v_self_3234_);
return v_res_3236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_unref(lean_object* v_self_3237_){
_start:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3239_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_3240_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3241_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3237_, v___x_3239_, v___x_3240_);
return v___x_3241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_unref___boxed(lean_object* v_self_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Lasm_JS_Deno_HttpServerUnixAddr_unref(v_self_3242_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_shutdown(lean_object* v_self_3245_){
_start:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3247_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_3248_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3249_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3245_, v___x_3247_, v___x_3248_);
return v___x_3249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_shutdown___boxed(lean_object* v_self_3250_, lean_object* v_a_3251_){
_start:
{
lean_object* v_res_3252_; 
v_res_3252_ = l_Lasm_JS_Deno_HttpServerUnixAddr_shutdown(v_self_3250_);
return v_res_3252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_remoteAddr(lean_object* v_self_3253_){
_start:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3255_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_3256_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0(v_self_3253_, v___x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_remoteAddr___boxed(lean_object* v_self_3257_, lean_object* v_a_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_remoteAddr(v_self_3257_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_completed(lean_object* v_self_3260_){
_start:
{
lean_object* v___f_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; uint8_t v___x_3265_; lean_object* v_val_3267_; lean_object* v___x_3270_; 
v___f_3262_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_3263_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_3264_ = lean_unsigned_to_nat(0u);
v___x_3265_ = 0;
v___x_3270_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3260_, v___x_3263_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3278_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3273_ = v___x_3270_;
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v___x_3270_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3276_; 
if (v_isShared_3274_ == 0)
{
lean_ctor_set_tag(v___x_3273_, 1);
v___x_3276_ = v___x_3273_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_a_3271_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
v_val_3267_ = v___x_3276_;
goto v___jp_3266_;
}
}
}
else
{
lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
v_a_3279_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3281_ = v___x_3270_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3270_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
lean_ctor_set_tag(v___x_3281_, 0);
v___x_3284_ = v___x_3281_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3279_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
v_val_3267_ = v___x_3284_;
goto v___jp_3266_;
}
}
}
v___jp_3266_:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3268_, 0, v_val_3267_);
v___x_3269_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3264_, v___x_3265_, v___x_3268_, v___f_3262_);
return v___x_3269_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_completed___boxed(lean_object* v_self_3287_, lean_object* v_a_3288_){
_start:
{
lean_object* v_res_3289_; 
v_res_3289_ = l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_completed(v_self_3287_);
return v_res_3289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_finished(lean_object* v_self_3290_){
_start:
{
lean_object* v___f_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; uint8_t v___x_3295_; lean_object* v_val_3297_; lean_object* v___x_3300_; 
v___f_3292_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_3293_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__1));
v___x_3294_ = lean_unsigned_to_nat(0u);
v___x_3295_ = 0;
v___x_3300_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3290_, v___x_3293_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3308_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3303_ = v___x_3300_;
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3300_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3306_; 
if (v_isShared_3304_ == 0)
{
lean_ctor_set_tag(v___x_3303_, 1);
v___x_3306_ = v___x_3303_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v_a_3301_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
v_val_3297_ = v___x_3306_;
goto v___jp_3296_;
}
}
}
else
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3316_; 
v_a_3309_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3311_ = v___x_3300_;
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3300_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3314_; 
if (v_isShared_3312_ == 0)
{
lean_ctor_set_tag(v___x_3311_, 0);
v___x_3314_ = v___x_3311_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3309_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
v_val_3297_ = v___x_3314_;
goto v___jp_3296_;
}
}
}
v___jp_3296_:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3298_, 0, v_val_3297_);
v___x_3299_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3294_, v___x_3295_, v___x_3298_, v___f_3292_);
return v___x_3299_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_finished___boxed(lean_object* v_self_3317_, lean_object* v_a_3318_){
_start:
{
lean_object* v_res_3319_; 
v_res_3319_ = l_Lasm_JS_Deno_HttpServerVsockAddr_finished(v_self_3317_);
return v_res_3319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_addr(lean_object* v_self_3320_){
_start:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3322_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_3323_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnVsockAddr_localAddr_spec__0(v_self_3320_, v___x_3322_);
return v___x_3323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_addr___boxed(lean_object* v_self_3324_, lean_object* v_a_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l_Lasm_JS_Deno_HttpServerVsockAddr_addr(v_self_3324_);
return v_res_3326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_ref(lean_object* v_self_3327_){
_start:
{
lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3329_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_3330_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3331_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3327_, v___x_3329_, v___x_3330_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_ref___boxed(lean_object* v_self_3332_, lean_object* v_a_3333_){
_start:
{
lean_object* v_res_3334_; 
v_res_3334_ = l_Lasm_JS_Deno_HttpServerVsockAddr_ref(v_self_3332_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_unref(lean_object* v_self_3335_){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3337_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_3338_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3339_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3335_, v___x_3337_, v___x_3338_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_unref___boxed(lean_object* v_self_3340_, lean_object* v_a_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lasm_JS_Deno_HttpServerVsockAddr_unref(v_self_3340_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_shutdown(lean_object* v_self_3343_){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3345_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_3346_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_3347_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3343_, v___x_3345_, v___x_3346_);
return v___x_3347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerVsockAddr_shutdown___boxed(lean_object* v_self_3348_, lean_object* v_a_3349_){
_start:
{
lean_object* v_res_3350_; 
v_res_3350_ = l_Lasm_JS_Deno_HttpServerVsockAddr_shutdown(v_self_3348_);
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_remoteAddr(lean_object* v_self_3351_){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3353_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_3354_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnVsockAddr_localAddr_spec__0(v_self_3351_, v___x_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_remoteAddr___boxed(lean_object* v_self_3355_, lean_object* v_a_3356_){
_start:
{
lean_object* v_res_3357_; 
v_res_3357_ = l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_remoteAddr(v_self_3355_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_completed(lean_object* v_self_3358_){
_start:
{
lean_object* v___f_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; uint8_t v___x_3363_; lean_object* v_val_3365_; lean_object* v___x_3368_; 
v___f_3360_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_3361_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_3362_ = lean_unsigned_to_nat(0u);
v___x_3363_ = 0;
v___x_3368_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3358_, v___x_3361_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3368_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3368_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
lean_ctor_set_tag(v___x_3371_, 1);
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
v_val_3365_ = v___x_3374_;
goto v___jp_3364_;
}
}
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3384_; 
v_a_3377_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3379_ = v___x_3368_;
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3368_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___x_3382_; 
if (v_isShared_3380_ == 0)
{
lean_ctor_set_tag(v___x_3379_, 0);
v___x_3382_ = v___x_3379_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v_a_3377_);
v___x_3382_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
v_val_3365_ = v___x_3382_;
goto v___jp_3364_;
}
}
}
v___jp_3364_:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3366_, 0, v_val_3365_);
v___x_3367_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3362_, v___x_3363_, v___x_3366_, v___f_3360_);
return v___x_3367_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_completed___boxed(lean_object* v_self_3385_, lean_object* v_a_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l_Lasm_JS_Deno_ServeHandlerInfoVsockAddr_completed(v_self_3385_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve(lean_object* v_handler_3397_){
_start:
{
uint8_t v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3399_ = 0;
v___x_3400_ = lean_unsigned_to_nat(1u);
v___x_3401_ = ((lean_object*)(l_Lasm_JS_Deno_serve___closed__3));
v___x_3402_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_3403_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3403_, 0, v_handler_3397_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
v___x_3404_ = lean_mk_empty_array_with_capacity(v___x_3400_);
v___x_3405_ = lean_array_push(v___x_3404_, v___x_3403_);
v___x_3406_ = l_Lasm_JS_Web_Support_args(v___x_3405_);
v___x_3407_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3401_, v___x_3406_, v___x_3399_);
if (lean_obj_tag(v___x_3407_) == 0)
{
lean_object* v_a_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3415_; 
v_a_3408_ = lean_ctor_get(v___x_3407_, 0);
v_isSharedCheck_3415_ = !lean_is_exclusive(v___x_3407_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3410_ = v___x_3407_;
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_a_3408_);
lean_dec(v___x_3407_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3413_; 
if (v_isShared_3411_ == 0)
{
v___x_3413_ = v___x_3410_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_a_3408_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
return v___x_3413_;
}
}
}
else
{
lean_object* v_a_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3423_; 
v_a_3416_ = lean_ctor_get(v___x_3407_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v___x_3407_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3418_ = v___x_3407_;
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_a_3416_);
lean_dec(v___x_3407_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_a_3416_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve___boxed(lean_object* v_handler_3424_, lean_object* v_a_3425_){
_start:
{
lean_object* v_res_3426_; 
v_res_3426_ = l_Lasm_JS_Deno_serve(v_handler_3424_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0(lean_object* v_x_3427_){
_start:
{
if (lean_obj_tag(v_x_3427_) == 0)
{
lean_object* v___x_3428_; 
v___x_3428_ = lean_box(0);
return v___x_3428_;
}
else
{
lean_object* v_val_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v_val_3429_ = lean_ctor_get(v_x_3427_, 0);
v___x_3430_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_3429_);
v___x_3431_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3431_, 0, v_val_3429_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
return v___x_3431_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0___boxed(lean_object* v_x_3432_){
_start:
{
lean_object* v_res_3433_; 
v_res_3433_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0(v_x_3432_);
lean_dec(v_x_3432_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1(lean_object* v_x_3434_){
_start:
{
if (lean_obj_tag(v_x_3434_) == 0)
{
lean_object* v___x_3435_; 
v___x_3435_ = lean_box(0);
return v___x_3435_;
}
else
{
lean_object* v_val_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; 
v_val_3436_ = lean_ctor_get(v_x_3434_, 0);
v___x_3437_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_3436_);
v___x_3438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3438_, 0, v_val_3436_);
lean_ctor_set(v___x_3438_, 1, v___x_3437_);
return v___x_3438_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1___boxed(lean_object* v_x_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1(v_x_3439_);
lean_dec(v_x_3439_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2(lean_object* v_x_3441_){
_start:
{
if (lean_obj_tag(v_x_3441_) == 0)
{
lean_object* v___x_3442_; 
v___x_3442_ = lean_box(0);
return v___x_3442_;
}
else
{
lean_object* v___x_3443_; 
v___x_3443_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__1));
return v___x_3443_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2___boxed(lean_object* v_x_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2(v_x_3444_);
lean_dec(v_x_3444_);
return v_res_3445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithUnixOptions(lean_object* v_options_3453_, lean_object* v_handler_3454_){
_start:
{
lean_object* v_signal_3456_; lean_object* v_onError_3457_; lean_object* v_onListen_3458_; lean_object* v_automaticCompression_3459_; lean_object* v_transport_3460_; lean_object* v_path_3461_; uint8_t v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
v_signal_3456_ = lean_ctor_get(v_options_3453_, 0);
v_onError_3457_ = lean_ctor_get(v_options_3453_, 1);
v_onListen_3458_ = lean_ctor_get(v_options_3453_, 2);
v_automaticCompression_3459_ = lean_ctor_get(v_options_3453_, 3);
v_transport_3460_ = lean_ctor_get(v_options_3453_, 4);
v_path_3461_ = lean_ctor_get(v_options_3453_, 5);
v___x_3462_ = 0;
v___x_3463_ = lean_unsigned_to_nat(2u);
v___x_3464_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithUnixOptions___closed__1));
v___x_3465_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_3466_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3456_);
v___x_3467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3467_, 0, v___x_3465_);
lean_ctor_set(v___x_3467_, 1, v___x_3466_);
v___x_3468_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_3469_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0(v_onError_3457_);
v___x_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3468_);
lean_ctor_set(v___x_3470_, 1, v___x_3469_);
v___x_3471_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_3472_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1(v_onListen_3458_);
v___x_3473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3471_);
lean_ctor_set(v___x_3473_, 1, v___x_3472_);
v___x_3474_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_3475_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_3459_);
v___x_3476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3474_);
lean_ctor_set(v___x_3476_, 1, v___x_3475_);
v___x_3477_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_3478_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2(v_transport_3460_);
v___x_3479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3477_);
lean_ctor_set(v___x_3479_, 1, v___x_3478_);
v___x_3480_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__5));
lean_inc_ref(v_path_3461_);
v___x_3481_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3481_, 0, v_path_3461_);
v___x_3482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3480_);
lean_ctor_set(v___x_3482_, 1, v___x_3481_);
v___x_3483_ = lean_unsigned_to_nat(6u);
v___x_3484_ = lean_mk_empty_array_with_capacity(v___x_3483_);
v___x_3485_ = lean_array_push(v___x_3484_, v___x_3467_);
v___x_3486_ = lean_array_push(v___x_3485_, v___x_3470_);
v___x_3487_ = lean_array_push(v___x_3486_, v___x_3473_);
v___x_3488_ = lean_array_push(v___x_3487_, v___x_3476_);
v___x_3489_ = lean_array_push(v___x_3488_, v___x_3479_);
v___x_3490_ = lean_array_push(v___x_3489_, v___x_3482_);
v___x_3491_ = l_Lasm_JS_Web_Support_fields(v___x_3490_);
lean_dec_ref(v___x_3490_);
v___x_3492_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_3493_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3493_, 0, v_handler_3454_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = lean_mk_empty_array_with_capacity(v___x_3463_);
v___x_3495_ = lean_array_push(v___x_3494_, v___x_3491_);
v___x_3496_ = lean_array_push(v___x_3495_, v___x_3493_);
v___x_3497_ = l_Lasm_JS_Web_Support_args(v___x_3496_);
v___x_3498_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3464_, v___x_3497_, v___x_3462_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3506_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3501_ = v___x_3498_;
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_a_3499_);
lean_dec(v___x_3498_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3504_; 
if (v_isShared_3502_ == 0)
{
v___x_3504_ = v___x_3501_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_a_3499_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
}
else
{
lean_object* v_a_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
v_a_3507_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3509_ = v___x_3498_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_a_3507_);
lean_dec(v___x_3498_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
v___x_3512_ = v___x_3509_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_a_3507_);
v___x_3512_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
return v___x_3512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithUnixOptions___boxed(lean_object* v_options_3515_, lean_object* v_handler_3516_, lean_object* v_a_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Lasm_JS_Deno_serveWithUnixOptions(v_options_3515_, v_handler_3516_);
lean_dec_ref(v_options_3515_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__0(lean_object* v_x_3519_){
_start:
{
if (lean_obj_tag(v_x_3519_) == 0)
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_box(0);
return v___x_3520_;
}
else
{
lean_object* v_val_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v_val_3521_ = lean_ctor_get(v_x_3519_, 0);
v___x_3522_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_3521_);
v___x_3523_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3523_, 0, v_val_3521_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
return v___x_3523_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__0___boxed(lean_object* v_x_3524_){
_start:
{
lean_object* v_res_3525_; 
v_res_3525_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__0(v_x_3524_);
lean_dec(v_x_3524_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__1(lean_object* v_x_3526_){
_start:
{
if (lean_obj_tag(v_x_3526_) == 0)
{
lean_object* v___x_3527_; 
v___x_3527_ = lean_box(0);
return v___x_3527_;
}
else
{
lean_object* v_val_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
v_val_3528_ = lean_ctor_get(v_x_3526_, 0);
v___x_3529_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_3528_);
v___x_3530_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3530_, 0, v_val_3528_);
lean_ctor_set(v___x_3530_, 1, v___x_3529_);
return v___x_3530_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__1___boxed(lean_object* v_x_3531_){
_start:
{
lean_object* v_res_3532_; 
v_res_3532_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__1(v_x_3531_);
lean_dec(v_x_3531_);
return v_res_3532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__2(lean_object* v_x_3533_){
_start:
{
if (lean_obj_tag(v_x_3533_) == 0)
{
lean_object* v___x_3534_; 
v___x_3534_ = lean_box(0);
return v___x_3534_;
}
else
{
lean_object* v___x_3535_; 
v___x_3535_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptionsTransport___lam__0___closed__1));
return v___x_3535_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__2___boxed(lean_object* v_x_3536_){
_start:
{
lean_object* v_res_3537_; 
v_res_3537_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__2(v_x_3536_);
lean_dec(v_x_3536_);
return v_res_3537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithVsockOptions(lean_object* v_options_3545_, lean_object* v_handler_3546_){
_start:
{
lean_object* v_signal_3548_; lean_object* v_onError_3549_; lean_object* v_onListen_3550_; lean_object* v_automaticCompression_3551_; lean_object* v_transport_3552_; double v_cid_3553_; double v_port_3554_; uint8_t v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; 
v_signal_3548_ = lean_ctor_get(v_options_3545_, 0);
v_onError_3549_ = lean_ctor_get(v_options_3545_, 1);
v_onListen_3550_ = lean_ctor_get(v_options_3545_, 2);
v_automaticCompression_3551_ = lean_ctor_get(v_options_3545_, 3);
v_transport_3552_ = lean_ctor_get(v_options_3545_, 4);
v_cid_3553_ = lean_ctor_get_float(v_options_3545_, sizeof(void*)*5);
v_port_3554_ = lean_ctor_get_float(v_options_3545_, sizeof(void*)*5 + 8);
v___x_3555_ = 0;
v___x_3556_ = lean_unsigned_to_nat(2u);
v___x_3557_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithVsockOptions___closed__1));
v___x_3558_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_3559_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3548_);
v___x_3560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3558_);
lean_ctor_set(v___x_3560_, 1, v___x_3559_);
v___x_3561_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_3562_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__0(v_onError_3549_);
v___x_3563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3561_);
lean_ctor_set(v___x_3563_, 1, v___x_3562_);
v___x_3564_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_3565_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__1(v_onListen_3550_);
v___x_3566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3564_);
lean_ctor_set(v___x_3566_, 1, v___x_3565_);
v___x_3567_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_3568_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_3551_);
v___x_3569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3567_);
lean_ctor_set(v___x_3569_, 1, v___x_3568_);
v___x_3570_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_3571_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithVsockOptions_spec__2(v_transport_3552_);
v___x_3572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3570_);
lean_ctor_set(v___x_3572_, 1, v___x_3571_);
v___x_3573_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__0));
v___x_3574_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3574_, 0, v_cid_3553_);
v___x_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3573_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v___x_3576_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1));
v___x_3577_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3577_, 0, v_port_3554_);
v___x_3578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3576_);
lean_ctor_set(v___x_3578_, 1, v___x_3577_);
v___x_3579_ = lean_unsigned_to_nat(7u);
v___x_3580_ = lean_mk_empty_array_with_capacity(v___x_3579_);
v___x_3581_ = lean_array_push(v___x_3580_, v___x_3560_);
v___x_3582_ = lean_array_push(v___x_3581_, v___x_3563_);
v___x_3583_ = lean_array_push(v___x_3582_, v___x_3566_);
v___x_3584_ = lean_array_push(v___x_3583_, v___x_3569_);
v___x_3585_ = lean_array_push(v___x_3584_, v___x_3572_);
v___x_3586_ = lean_array_push(v___x_3585_, v___x_3575_);
v___x_3587_ = lean_array_push(v___x_3586_, v___x_3578_);
v___x_3588_ = l_Lasm_JS_Web_Support_fields(v___x_3587_);
lean_dec_ref(v___x_3587_);
v___x_3589_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_3590_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3590_, 0, v_handler_3546_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
v___x_3591_ = lean_mk_empty_array_with_capacity(v___x_3556_);
v___x_3592_ = lean_array_push(v___x_3591_, v___x_3588_);
v___x_3593_ = lean_array_push(v___x_3592_, v___x_3590_);
v___x_3594_ = l_Lasm_JS_Web_Support_args(v___x_3593_);
v___x_3595_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3557_, v___x_3594_, v___x_3555_);
if (lean_obj_tag(v___x_3595_) == 0)
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3603_; 
v_a_3596_ = lean_ctor_get(v___x_3595_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3595_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3598_ = v___x_3595_;
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3595_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
if (v_isShared_3599_ == 0)
{
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
else
{
lean_object* v_a_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3611_; 
v_a_3604_ = lean_ctor_get(v___x_3595_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3595_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3606_ = v___x_3595_;
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_a_3604_);
lean_dec(v___x_3595_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3609_; 
if (v_isShared_3607_ == 0)
{
v___x_3609_ = v___x_3606_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v_a_3604_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithVsockOptions___boxed(lean_object* v_options_3612_, lean_object* v_handler_3613_, lean_object* v_a_3614_){
_start:
{
lean_object* v_res_3615_; 
v_res_3615_ = l_Lasm_JS_Deno_serveWithVsockOptions(v_options_3612_, v_handler_3613_);
lean_dec_ref(v_options_3612_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(lean_object* v_x_3616_){
_start:
{
if (lean_obj_tag(v_x_3616_) == 0)
{
lean_object* v___x_3617_; 
v___x_3617_ = lean_box(0);
return v___x_3617_;
}
else
{
lean_object* v_val_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
v_val_3618_ = lean_ctor_get(v_x_3616_, 0);
v___x_3619_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_3618_);
v___x_3620_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3620_, 0, v_val_3618_);
lean_ctor_set(v___x_3620_, 1, v___x_3619_);
return v___x_3620_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0___boxed(lean_object* v_x_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_x_3621_);
lean_dec(v_x_3621_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(lean_object* v_x_3623_){
_start:
{
if (lean_obj_tag(v_x_3623_) == 0)
{
lean_object* v___x_3624_; 
v___x_3624_ = lean_box(0);
return v___x_3624_;
}
else
{
lean_object* v_val_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
v_val_3625_ = lean_ctor_get(v_x_3623_, 0);
v___x_3626_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_3625_);
v___x_3627_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3627_, 0, v_val_3625_);
lean_ctor_set(v___x_3627_, 1, v___x_3626_);
return v___x_3627_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1___boxed(lean_object* v_x_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_x_3628_);
lean_dec(v_x_3628_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(lean_object* v_x_3630_){
_start:
{
if (lean_obj_tag(v_x_3630_) == 0)
{
lean_object* v___x_3631_; 
v___x_3631_ = lean_box(0);
return v___x_3631_;
}
else
{
lean_object* v___x_3632_; 
v___x_3632_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_3632_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2___boxed(lean_object* v_x_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_x_3633_);
lean_dec(v_x_3633_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions(lean_object* v_options_3642_, lean_object* v_handler_3643_){
_start:
{
lean_object* v_signal_3645_; lean_object* v_onError_3646_; lean_object* v_onListen_3647_; lean_object* v_automaticCompression_3648_; lean_object* v_transport_3649_; lean_object* v_port_3650_; lean_object* v_hostname_3651_; lean_object* v_reusePort_3652_; lean_object* v_tcpBacklog_3653_; uint8_t v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; 
v_signal_3645_ = lean_ctor_get(v_options_3642_, 0);
lean_inc(v_signal_3645_);
v_onError_3646_ = lean_ctor_get(v_options_3642_, 1);
lean_inc(v_onError_3646_);
v_onListen_3647_ = lean_ctor_get(v_options_3642_, 2);
lean_inc(v_onListen_3647_);
v_automaticCompression_3648_ = lean_ctor_get(v_options_3642_, 3);
lean_inc(v_automaticCompression_3648_);
v_transport_3649_ = lean_ctor_get(v_options_3642_, 4);
lean_inc(v_transport_3649_);
v_port_3650_ = lean_ctor_get(v_options_3642_, 5);
lean_inc(v_port_3650_);
v_hostname_3651_ = lean_ctor_get(v_options_3642_, 6);
lean_inc(v_hostname_3651_);
v_reusePort_3652_ = lean_ctor_get(v_options_3642_, 7);
lean_inc(v_reusePort_3652_);
v_tcpBacklog_3653_ = lean_ctor_get(v_options_3642_, 8);
lean_inc(v_tcpBacklog_3653_);
lean_dec_ref(v_options_3642_);
v___x_3654_ = 0;
v___x_3655_ = lean_unsigned_to_nat(2u);
v___x_3656_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithOptions___closed__1));
v___x_3657_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_3658_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3645_);
lean_dec(v_signal_3645_);
v___x_3659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3657_);
lean_ctor_set(v___x_3659_, 1, v___x_3658_);
v___x_3660_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_3661_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_3646_);
lean_dec(v_onError_3646_);
v___x_3662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3660_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_3664_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_3647_);
lean_dec(v_onListen_3647_);
v___x_3665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3665_, 0, v___x_3663_);
lean_ctor_set(v___x_3665_, 1, v___x_3664_);
v___x_3666_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_3667_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_3648_);
lean_dec(v_automaticCompression_3648_);
v___x_3668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3666_);
lean_ctor_set(v___x_3668_, 1, v___x_3667_);
v___x_3669_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_3670_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_3649_);
lean_dec(v_transport_3649_);
v___x_3671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3669_);
lean_ctor_set(v___x_3671_, 1, v___x_3670_);
v___x_3672_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1));
v___x_3673_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_3650_);
v___x_3674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3672_);
lean_ctor_set(v___x_3674_, 1, v___x_3673_);
v___x_3675_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_3676_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_3651_);
v___x_3677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3675_);
lean_ctor_set(v___x_3677_, 1, v___x_3676_);
v___x_3678_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_3679_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_3652_);
lean_dec(v_reusePort_3652_);
v___x_3680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3678_);
lean_ctor_set(v___x_3680_, 1, v___x_3679_);
v___x_3681_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_3682_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_3653_);
v___x_3683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3681_);
lean_ctor_set(v___x_3683_, 1, v___x_3682_);
v___x_3684_ = lean_unsigned_to_nat(9u);
v___x_3685_ = lean_mk_empty_array_with_capacity(v___x_3684_);
v___x_3686_ = lean_array_push(v___x_3685_, v___x_3659_);
v___x_3687_ = lean_array_push(v___x_3686_, v___x_3662_);
v___x_3688_ = lean_array_push(v___x_3687_, v___x_3665_);
v___x_3689_ = lean_array_push(v___x_3688_, v___x_3668_);
v___x_3690_ = lean_array_push(v___x_3689_, v___x_3671_);
v___x_3691_ = lean_array_push(v___x_3690_, v___x_3674_);
v___x_3692_ = lean_array_push(v___x_3691_, v___x_3677_);
v___x_3693_ = lean_array_push(v___x_3692_, v___x_3680_);
v___x_3694_ = lean_array_push(v___x_3693_, v___x_3683_);
v___x_3695_ = l_Lasm_JS_Web_Support_fields(v___x_3694_);
lean_dec_ref(v___x_3694_);
v___x_3696_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_3697_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3697_, 0, v_handler_3643_);
lean_ctor_set(v___x_3697_, 1, v___x_3696_);
v___x_3698_ = lean_mk_empty_array_with_capacity(v___x_3655_);
v___x_3699_ = lean_array_push(v___x_3698_, v___x_3695_);
v___x_3700_ = lean_array_push(v___x_3699_, v___x_3697_);
v___x_3701_ = l_Lasm_JS_Web_Support_args(v___x_3700_);
v___x_3702_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3656_, v___x_3701_, v___x_3654_);
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_object* v_a_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3710_; 
v_a_3703_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3710_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3710_ == 0)
{
v___x_3705_ = v___x_3702_;
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_a_3703_);
lean_dec(v___x_3702_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
lean_object* v___x_3708_; 
if (v_isShared_3706_ == 0)
{
v___x_3708_ = v___x_3705_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_a_3703_);
v___x_3708_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
return v___x_3708_;
}
}
}
else
{
lean_object* v_a_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3718_; 
v_a_3711_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3713_ = v___x_3702_;
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_a_3711_);
lean_dec(v___x_3702_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v_a_3711_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions___boxed(lean_object* v_options_3719_, lean_object* v_handler_3720_, lean_object* v_a_3721_){
_start:
{
lean_object* v_res_3722_; 
v_res_3722_ = l_Lasm_JS_Deno_serveWithOptions(v_options_3719_, v_handler_3720_);
return v_res_3722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(lean_object* v_x_3723_){
_start:
{
if (lean_obj_tag(v_x_3723_) == 0)
{
lean_object* v___x_3724_; 
v___x_3724_ = lean_box(0);
return v___x_3724_;
}
else
{
lean_object* v___x_3725_; 
v___x_3725_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1));
return v___x_3725_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0___boxed(lean_object* v_x_3726_){
_start:
{
lean_object* v_res_3727_; 
v_res_3727_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_x_3726_);
lean_dec(v_x_3726_);
return v_res_3727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions(lean_object* v_tlsOptions_3735_, lean_object* v_handler_3736_){
_start:
{
lean_object* v_signal_3738_; lean_object* v_onError_3739_; lean_object* v_onListen_3740_; lean_object* v_automaticCompression_3741_; lean_object* v_transport_3742_; lean_object* v_port_3743_; lean_object* v_hostname_3744_; lean_object* v_reusePort_3745_; lean_object* v_tcpBacklog_3746_; lean_object* v_keyFormat_3747_; lean_object* v_key_3748_; lean_object* v_cert_3749_; uint8_t v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; 
v_signal_3738_ = lean_ctor_get(v_tlsOptions_3735_, 0);
lean_inc(v_signal_3738_);
v_onError_3739_ = lean_ctor_get(v_tlsOptions_3735_, 1);
lean_inc(v_onError_3739_);
v_onListen_3740_ = lean_ctor_get(v_tlsOptions_3735_, 2);
lean_inc(v_onListen_3740_);
v_automaticCompression_3741_ = lean_ctor_get(v_tlsOptions_3735_, 3);
lean_inc(v_automaticCompression_3741_);
v_transport_3742_ = lean_ctor_get(v_tlsOptions_3735_, 4);
lean_inc(v_transport_3742_);
v_port_3743_ = lean_ctor_get(v_tlsOptions_3735_, 5);
lean_inc(v_port_3743_);
v_hostname_3744_ = lean_ctor_get(v_tlsOptions_3735_, 6);
lean_inc(v_hostname_3744_);
v_reusePort_3745_ = lean_ctor_get(v_tlsOptions_3735_, 7);
lean_inc(v_reusePort_3745_);
v_tcpBacklog_3746_ = lean_ctor_get(v_tlsOptions_3735_, 8);
lean_inc(v_tcpBacklog_3746_);
v_keyFormat_3747_ = lean_ctor_get(v_tlsOptions_3735_, 9);
lean_inc(v_keyFormat_3747_);
v_key_3748_ = lean_ctor_get(v_tlsOptions_3735_, 10);
lean_inc_ref(v_key_3748_);
v_cert_3749_ = lean_ctor_get(v_tlsOptions_3735_, 11);
lean_inc_ref(v_cert_3749_);
lean_dec_ref(v_tlsOptions_3735_);
v___x_3750_ = 0;
v___x_3751_ = lean_unsigned_to_nat(2u);
v___x_3752_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithTlsOptions___closed__1));
v___x_3753_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_3754_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3738_);
lean_dec(v_signal_3738_);
v___x_3755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3753_);
lean_ctor_set(v___x_3755_, 1, v___x_3754_);
v___x_3756_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_3757_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_3739_);
lean_dec(v_onError_3739_);
v___x_3758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3756_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_3760_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_3740_);
lean_dec(v_onListen_3740_);
v___x_3761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3759_);
lean_ctor_set(v___x_3761_, 1, v___x_3760_);
v___x_3762_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_3763_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_3741_);
lean_dec(v_automaticCompression_3741_);
v___x_3764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3762_);
lean_ctor_set(v___x_3764_, 1, v___x_3763_);
v___x_3765_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_3766_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_3742_);
lean_dec(v_transport_3742_);
v___x_3767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3765_);
lean_ctor_set(v___x_3767_, 1, v___x_3766_);
v___x_3768_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeVsockOptions___lam__0___closed__1));
v___x_3769_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_3743_);
v___x_3770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3768_);
lean_ctor_set(v___x_3770_, 1, v___x_3769_);
v___x_3771_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_3772_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_3744_);
v___x_3773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3771_);
lean_ctor_set(v___x_3773_, 1, v___x_3772_);
v___x_3774_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_3775_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_3745_);
lean_dec(v_reusePort_3745_);
v___x_3776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3774_);
lean_ctor_set(v___x_3776_, 1, v___x_3775_);
v___x_3777_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_3778_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_3746_);
v___x_3779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3777_);
lean_ctor_set(v___x_3779_, 1, v___x_3778_);
v___x_3780_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_3781_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_keyFormat_3747_);
lean_dec(v_keyFormat_3747_);
v___x_3782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3780_);
lean_ctor_set(v___x_3782_, 1, v___x_3781_);
v___x_3783_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_3784_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3784_, 0, v_key_3748_);
v___x_3785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3783_);
lean_ctor_set(v___x_3785_, 1, v___x_3784_);
v___x_3786_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_3787_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3787_, 0, v_cert_3749_);
v___x_3788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3786_);
lean_ctor_set(v___x_3788_, 1, v___x_3787_);
v___x_3789_ = lean_unsigned_to_nat(12u);
v___x_3790_ = lean_mk_empty_array_with_capacity(v___x_3789_);
v___x_3791_ = lean_array_push(v___x_3790_, v___x_3755_);
v___x_3792_ = lean_array_push(v___x_3791_, v___x_3758_);
v___x_3793_ = lean_array_push(v___x_3792_, v___x_3761_);
v___x_3794_ = lean_array_push(v___x_3793_, v___x_3764_);
v___x_3795_ = lean_array_push(v___x_3794_, v___x_3767_);
v___x_3796_ = lean_array_push(v___x_3795_, v___x_3770_);
v___x_3797_ = lean_array_push(v___x_3796_, v___x_3773_);
v___x_3798_ = lean_array_push(v___x_3797_, v___x_3776_);
v___x_3799_ = lean_array_push(v___x_3798_, v___x_3779_);
v___x_3800_ = lean_array_push(v___x_3799_, v___x_3782_);
v___x_3801_ = lean_array_push(v___x_3800_, v___x_3785_);
v___x_3802_ = lean_array_push(v___x_3801_, v___x_3788_);
v___x_3803_ = l_Lasm_JS_Web_Support_fields(v___x_3802_);
lean_dec_ref(v___x_3802_);
v___x_3804_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_3805_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3805_, 0, v_handler_3736_);
lean_ctor_set(v___x_3805_, 1, v___x_3804_);
v___x_3806_ = lean_mk_empty_array_with_capacity(v___x_3751_);
v___x_3807_ = lean_array_push(v___x_3806_, v___x_3803_);
v___x_3808_ = lean_array_push(v___x_3807_, v___x_3805_);
v___x_3809_ = l_Lasm_JS_Web_Support_args(v___x_3808_);
v___x_3810_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3752_, v___x_3809_, v___x_3750_);
if (lean_obj_tag(v___x_3810_) == 0)
{
lean_object* v_a_3811_; lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3818_; 
v_a_3811_ = lean_ctor_get(v___x_3810_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3810_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3813_ = v___x_3810_;
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
else
{
lean_inc(v_a_3811_);
lean_dec(v___x_3810_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___x_3816_; 
if (v_isShared_3814_ == 0)
{
v___x_3816_ = v___x_3813_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3811_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
else
{
lean_object* v_a_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3826_; 
v_a_3819_ = lean_ctor_get(v___x_3810_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3810_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3821_ = v___x_3810_;
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_a_3819_);
lean_dec(v___x_3810_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3824_; 
if (v_isShared_3822_ == 0)
{
v___x_3824_ = v___x_3821_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_a_3819_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___boxed(lean_object* v_tlsOptions_3827_, lean_object* v_handler_3828_, lean_object* v_a_3829_){
_start:
{
lean_object* v_res_3830_; 
v_res_3830_ = l_Lasm_JS_Deno_serveWithTlsOptions(v_tlsOptions_3827_, v_handler_3828_);
return v_res_3830_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Net(uint8_t builtin);
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
res = initialize_Lasm_JS_Deno_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport_default = _init_l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport_default();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport_default);
l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport = _init_l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport);
l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport_default = _init_l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport_default();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport_default);
l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport = _init_l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeVsockOptionsTransport);
l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default = _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default);
l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport = _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport);
l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat_default = _init_l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat_default();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat_default);
l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat = _init_l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
