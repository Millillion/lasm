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
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
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
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reusePort"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tcpBacklog"};
static const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3_value;
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
uint8_t v___x_44_; 
v___x_44_ = 1;
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___redArg___boxed(lean_object* v___dummy_45_){
_start:
{
uint8_t v_res_46_; lean_object* v_r_47_; 
v_res_46_ = l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___redArg();
v_r_47_ = lean_box(v_res_46_);
return v_r_47_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq(lean_object* v_x_48_, lean_object* v_y_49_){
_start:
{
uint8_t v___x_50_; 
v___x_50_ = 1;
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq___boxed(lean_object* v_x_51_, lean_object* v_y_52_){
_start:
{
uint8_t v_res_53_; lean_object* v_r_54_; 
v_res_53_ = l_Lasm_JS_Deno_instBEqServeUnixOptionsTransport_beq(v_x_51_, v_y_52_);
v_r_54_ = lean_box(v_res_53_);
return v_r_54_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_unsigned_to_nat(2u);
v___x_61_ = lean_nat_to_int(v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(1u);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg(lean_object* v_prec_64_){
_start:
{
lean_object* v___y_66_; lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(1024u);
v___x_73_ = lean_nat_dec_le(v___x_72_, v_prec_64_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___y_66_ = v___x_74_;
goto v___jp_65_;
}
else
{
lean_object* v___x_75_; 
v___x_75_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___y_66_ = v___x_75_;
goto v___jp_65_;
}
v___jp_65_:
{
lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_67_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__1));
lean_inc(v___y_66_);
v___x_68_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_68_, 0, v___y_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = 0;
v___x_70_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set_uint8(v___x_70_, sizeof(void*)*1, v___x_69_);
v___x_71_ = l_Repr_addAppParen(v___x_70_, v_prec_64_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___boxed(lean_object* v_prec_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg(v_prec_76_);
lean_dec(v_prec_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr(lean_object* v_x_78_, lean_object* v_prec_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg(v_prec_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___boxed(lean_object* v_x_81_, lean_object* v_prec_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr(v_x_81_, v_prec_82_);
lean_dec(v_prec_82_);
return v_res_83_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport_default(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_box(0);
return v___x_86_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeUnixOptionsTransport(void){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_box(0);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0(lean_object* v_x_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__1));
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0(lean_object* v_x_100_){
_start:
{
if (lean_obj_tag(v_x_100_) == 4)
{
lean_object* v_s_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_s_103_ = lean_ctor_get(v_x_100_, 0);
v___x_104_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__0));
v___x_105_ = lean_string_dec_eq(v_s_103_, v___x_104_);
if (v___x_105_ == 0)
{
goto v___jp_101_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__2));
return v___x_106_;
}
}
else
{
goto v___jp_101_;
}
v___jp_101_:
{
lean_object* v___x_102_; 
v___x_102_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___closed__1));
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0___boxed(lean_object* v_x_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lasm_JS_Deno_instFromJSServeUnixOptionsTransport___lam__0(v_x_107_);
lean_dec(v_x_107_);
return v_res_108_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg(){
_start:
{
uint8_t v___x_117_; 
v___x_117_ = 1;
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg___boxed(lean_object* v___dummy_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___redArg();
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(lean_object* v_x_121_, lean_object* v_y_122_){
_start:
{
uint8_t v___x_123_; 
v___x_123_ = 1;
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed(lean_object* v_x_124_, lean_object* v_y_125_){
_start:
{
uint8_t v_res_126_; lean_object* v_r_127_; 
v_res_126_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(v_x_124_, v_y_125_);
v_r_127_ = lean_box(v_res_126_);
return v_r_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(lean_object* v_prec_133_){
_start:
{
lean_object* v___y_135_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(1024u);
v___x_142_ = lean_nat_dec_le(v___x_141_, v_prec_133_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___y_135_ = v___x_143_;
goto v___jp_134_;
}
else
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___y_135_ = v___x_144_;
goto v___jp_134_;
}
v___jp_134_:
{
lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_136_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___closed__1));
lean_inc(v___y_135_);
v___x_137_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_137_, 0, v___y_135_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
v___x_138_ = 0;
v___x_139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_139_, 0, v___x_137_);
lean_ctor_set_uint8(v___x_139_, sizeof(void*)*1, v___x_138_);
v___x_140_ = l_Repr_addAppParen(v___x_139_, v_prec_133_);
return v___x_140_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg___boxed(lean_object* v_prec_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_145_);
lean_dec(v_prec_145_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(lean_object* v_x_147_, lean_object* v_prec_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_prec_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed(lean_object* v_x_150_, lean_object* v_prec_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(v_x_150_, v_prec_151_);
lean_dec(v_prec_151_);
return v_res_152_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_box(0);
return v___x_155_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_box(0);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0(lean_object* v_x_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(lean_object* v_x_168_){
_start:
{
if (lean_obj_tag(v_x_168_) == 4)
{
lean_object* v_s_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v_s_171_ = lean_ctor_get(v_x_168_, 0);
v___x_172_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__0));
v___x_173_ = lean_string_dec_eq(v_s_171_, v___x_172_);
if (v___x_173_ == 0)
{
goto v___jp_169_;
}
else
{
lean_object* v___x_174_; 
v___x_174_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_174_;
}
}
else
{
goto v___jp_169_;
}
v___jp_169_:
{
lean_object* v___x_170_; 
v___x_170_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___closed__0));
return v___x_170_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0___boxed(lean_object* v_x_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport___lam__0(v_x_175_);
lean_dec(v_x_175_);
return v_res_176_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___redArg(){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = 1;
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___redArg___boxed(lean_object* v___dummy_186_){
_start:
{
uint8_t v_res_187_; lean_object* v_r_188_; 
v_res_187_ = l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___redArg();
v_r_188_ = lean_box(v_res_187_);
return v_r_188_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq(lean_object* v_x_189_, lean_object* v_y_190_){
_start:
{
uint8_t v___x_191_; 
v___x_191_ = 1;
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq___boxed(lean_object* v_x_192_, lean_object* v_y_193_){
_start:
{
uint8_t v_res_194_; lean_object* v_r_195_; 
v_res_194_ = l_Lasm_JS_Deno_instBEqServeTcpTlsOptionsKeyFormat_beq(v_x_192_, v_y_193_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg(lean_object* v_prec_201_){
_start:
{
lean_object* v___y_203_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = lean_unsigned_to_nat(1024u);
v___x_210_ = lean_nat_dec_le(v___x_209_, v_prec_201_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
v___x_211_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___y_203_ = v___x_211_;
goto v___jp_202_;
}
else
{
lean_object* v___x_212_; 
v___x_212_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___y_203_ = v___x_212_;
goto v___jp_202_;
}
v___jp_202_:
{
lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_204_ = ((lean_object*)(l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___closed__1));
lean_inc(v___y_203_);
v___x_205_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_205_, 0, v___y_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = 0;
v___x_207_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_207_, 0, v___x_205_);
lean_ctor_set_uint8(v___x_207_, sizeof(void*)*1, v___x_206_);
v___x_208_ = l_Repr_addAppParen(v___x_207_, v_prec_201_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg___boxed(lean_object* v_prec_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg(v_prec_213_);
lean_dec(v_prec_213_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr(lean_object* v_x_215_, lean_object* v_prec_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___redArg(v_prec_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr___boxed(lean_object* v_x_218_, lean_object* v_prec_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lasm_JS_Deno_instReprServeTcpTlsOptionsKeyFormat_repr(v_x_218_, v_prec_219_);
lean_dec(v_prec_219_);
return v_res_220_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat_default(void){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_box(0);
return v___x_223_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedServeTcpTlsOptionsKeyFormat(void){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lean_box(0);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0(lean_object* v_x_228_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1));
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0(lean_object* v_x_236_){
_start:
{
if (lean_obj_tag(v_x_236_) == 4)
{
lean_object* v_s_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v_s_239_ = lean_ctor_get(v_x_236_, 0);
v___x_240_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0));
v___x_241_ = lean_string_dec_eq(v_s_239_, v___x_240_);
if (v___x_241_ == 0)
{
goto v___jp_237_;
}
else
{
lean_object* v___x_242_; 
v___x_242_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1));
return v___x_242_;
}
}
else
{
goto v___jp_237_;
}
v___jp_237_:
{
lean_object* v___x_238_; 
v___x_238_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___closed__0));
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0___boxed(lean_object* v_x_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lasm_JS_Deno_instFromJSServeTcpTlsOptionsKeyFormat___lam__0(v_x_243_);
lean_dec(v_x_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object* v_x_259_){
_start:
{
if (lean_obj_tag(v_x_259_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_269_; 
v_a_261_ = lean_ctor_get(v_x_259_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v_x_259_);
if (v_isSharedCheck_269_ == 0)
{
v___x_263_ = v_x_259_;
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v_x_259_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_268_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
lean_object* v___x_267_; 
v___x_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
return v___x_267_;
}
}
}
else
{
lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_280_; 
v_a_270_ = lean_ctor_get(v_x_259_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v_x_259_);
if (v_isSharedCheck_280_ == 0)
{
v___x_272_ = v_x_259_;
v_isShared_273_ = v_isSharedCheck_280_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v_x_259_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_280_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_274_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_275_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_275_, 0, v_a_270_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_275_);
v___x_277_ = v___x_272_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_275_);
v___x_277_ = v_reuseFailAlloc_279_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
lean_object* v___x_278_; 
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
return v___x_278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object* v_x_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(v_x_281_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object* v_f_284_, lean_object* v_a_285_, lean_object* v___f_286_, lean_object* v_x_287_){
_start:
{
if (lean_obj_tag(v_x_287_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_297_; 
lean_dec_ref(v___f_286_);
lean_dec(v_a_285_);
lean_dec_ref(v_f_284_);
v_a_289_ = lean_ctor_get(v_x_287_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v_x_287_);
if (v_isSharedCheck_297_ == 0)
{
v___x_291_ = v_x_287_;
v_isShared_292_ = v_isSharedCheck_297_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v_x_287_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_297_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_296_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
lean_object* v___x_295_; 
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
}
}
else
{
lean_object* v_a_298_; lean_object* v___x_299_; uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_a_298_ = lean_ctor_get(v_x_287_, 0);
lean_inc(v_a_298_);
lean_dec_ref_known(v_x_287_, 1);
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = 0;
v___x_301_ = lean_apply_3(v_f_284_, v_a_285_, v_a_298_, lean_box(0));
v___x_302_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_299_, v___x_300_, v___x_301_, v___f_286_);
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object* v_f_303_, lean_object* v_a_304_, lean_object* v___f_305_, lean_object* v_x_306_, lean_object* v___y_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(v_f_303_, v_a_304_, v___f_305_, v_x_306_);
return v_res_308_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_313_ = lean_string_utf8_byte_size(v___x_312_);
return v___x_313_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__3);
v___x_316_ = lean_nat_dec_eq(v___x_315_, v___x_314_);
return v___x_316_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_321_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__8));
v___x_322_ = lean_unsigned_to_nat(46u);
v___x_323_ = lean_unsigned_to_nat(193u);
v___x_324_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__7));
v___x_325_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__6));
v___x_326_ = l_mkPanicMessageWithDecl(v___x_325_, v___x_324_, v___x_323_, v___x_322_, v___x_321_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(lean_object* v_context_328_, lean_object* v_d_329_){
_start:
{
lean_object* v___y_332_; lean_object* v___y_333_; 
if (lean_obj_tag(v_d_329_) == 9)
{
lean_object* v_value_337_; lean_object* v___x_338_; 
v_value_337_ = lean_ctor_get(v_d_329_, 0);
lean_inc(v_value_337_);
lean_dec_ref_known(v_d_329_, 2);
v___x_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_338_, 0, v_value_337_);
return v___x_338_;
}
else
{
lean_object* v___x_339_; lean_object* v_received_341_; 
v___x_339_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
if (lean_obj_tag(v_d_329_) == 9)
{
lean_object* v_value_355_; lean_object* v_description_356_; uint8_t v___x_357_; 
v_value_355_ = lean_ctor_get(v_d_329_, 0);
v_description_356_ = lean_ctor_get(v_d_329_, 1);
v___x_357_ = lean_string_dec_eq(v_description_356_, v___x_339_);
if (v___x_357_ == 0)
{
goto v___jp_353_;
}
else
{
uint32_t v___x_358_; uint64_t v___x_359_; lean_object* v___x_360_; uint32_t v___x_361_; lean_object* v___x_362_; 
lean_inc_n(v_value_355_, 2);
lean_dec_ref_known(v_d_329_, 2);
v___x_358_ = 206;
v___x_359_ = 0ULL;
v___x_360_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_360_, 0, v_value_355_);
lean_ctor_set(v___x_360_, 1, v___x_339_);
v___x_361_ = lasm_js_value_handle(v_value_355_);
lean_dec(v_value_355_);
v___x_362_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_358_, v___x_359_, v___x_360_, v___x_361_);
lean_dec_ref_known(v___x_360_, 2);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; uint8_t v___x_364_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_363_);
lean_dec_ref_known(v___x_362_, 1);
v___x_364_ = lean_string_validate_utf8(v_a_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec(v_a_363_);
v___x_365_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_366_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_365_);
v_received_341_ = v___x_366_;
goto v___jp_340_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_string_from_utf8_unchecked(v_a_363_);
v_received_341_ = v___x_367_;
goto v___jp_340_;
}
}
else
{
lean_object* v___x_368_; 
lean_dec_ref_known(v___x_362_, 1);
v___x_368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v_received_341_ = v___x_368_;
goto v___jp_340_;
}
}
}
else
{
goto v___jp_353_;
}
v___jp_340_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_343_ = lean_string_append(v___x_342_, v_context_328_);
v___x_344_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_345_ = lean_string_append(v___x_343_, v___x_344_);
v___x_346_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___closed__0));
v___x_347_ = lean_string_append(v___x_345_, v___x_346_);
v___x_348_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_349_ = lean_string_append(v___x_347_, v___x_348_);
v___x_350_ = lean_string_append(v___x_349_, v_received_341_);
lean_dec_ref(v_received_341_);
v___x_351_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; 
v___x_352_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___y_332_ = v___x_350_;
v___y_333_ = v___x_352_;
goto v___jp_331_;
}
else
{
v___y_332_ = v___x_350_;
v___y_333_ = v___x_339_;
goto v___jp_331_;
}
}
v___jp_353_:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lasm_JS_Data_describe(v_d_329_);
v_received_341_ = v___x_354_;
goto v___jp_340_;
}
}
v___jp_331_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = lean_string_append(v___y_332_, v___y_333_);
v___x_335_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
v___x_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_369_, lean_object* v_d_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v_context_369_, v_d_370_);
lean_dec_ref(v_context_369_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(lean_object* v_args_374_, lean_object* v_i_375_){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_377_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = lean_nat_add(v_i_375_, v___x_378_);
v___x_380_ = l_Nat_reprFast(v___x_379_);
v___x_381_ = lean_string_append(v___x_377_, v___x_380_);
lean_dec_ref(v___x_380_);
v___x_382_ = lean_array_get_size(v_args_374_);
v___x_383_ = lean_nat_dec_lt(v_i_375_, v___x_382_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_box(0);
v___x_385_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_381_, v___x_384_);
lean_dec_ref(v___x_381_);
return v___x_385_;
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = lean_array_fget_borrowed(v_args_374_, v_i_375_);
lean_inc(v___x_386_);
v___x_387_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_381_, v___x_386_);
lean_dec_ref(v___x_381_);
return v___x_387_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___boxed(lean_object* v_args_388_, lean_object* v_i_389_, lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_388_, v_i_389_);
lean_dec(v_i_389_);
lean_dec_ref(v_args_388_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(lean_object* v_f_392_, lean_object* v___f_393_, lean_object* v_args_394_, lean_object* v_x_395_){
_start:
{
if (lean_obj_tag(v_x_395_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_405_; 
lean_dec_ref(v___f_393_);
lean_dec_ref(v_f_392_);
v_a_397_ = lean_ctor_get(v_x_395_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v_x_395_);
if (v_isSharedCheck_405_ == 0)
{
v___x_399_ = v_x_395_;
v_isShared_400_ = v_isSharedCheck_405_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v_x_395_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_405_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_397_);
v___x_402_ = v_reuseFailAlloc_404_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; 
v___x_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
return v___x_403_;
}
}
}
else
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_427_; 
v_a_406_ = lean_ctor_get(v_x_395_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v_x_395_);
if (v_isSharedCheck_427_ == 0)
{
v___x_408_ = v_x_395_;
v_isShared_409_ = v_isSharedCheck_427_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v_x_395_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_427_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___f_410_; lean_object* v___x_411_; lean_object* v___x_412_; uint8_t v___x_413_; lean_object* v_val_415_; lean_object* v___x_418_; 
v___f_410_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_410_, 0, v_f_392_);
lean_closure_set(v___f_410_, 1, v_a_406_);
lean_closure_set(v___f_410_, 2, v___f_393_);
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = lean_unsigned_to_nat(0u);
v___x_413_ = 0;
v___x_418_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_394_, v___x_411_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v___x_421_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_419_);
lean_dec_ref_known(v___x_418_, 1);
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 0, v_a_419_);
v___x_421_ = v___x_408_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_419_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
v_val_415_ = v___x_421_;
goto v___jp_414_;
}
}
else
{
lean_object* v_a_423_; lean_object* v___x_425_; 
v_a_423_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_423_);
lean_dec_ref_known(v___x_418_, 1);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 0);
lean_ctor_set(v___x_408_, 0, v_a_423_);
v___x_425_ = v___x_408_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
v_val_415_ = v___x_425_;
goto v___jp_414_;
}
}
v___jp_414_:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v_val_415_);
v___x_417_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_412_, v___x_413_, v___x_416_, v___f_410_);
return v___x_417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed(lean_object* v_f_428_, lean_object* v___f_429_, lean_object* v_args_430_, lean_object* v_x_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(v_f_428_, v___f_429_, v_args_430_, v_x_431_);
lean_dec_ref(v_args_430_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(lean_object* v_args_434_, lean_object* v_i_435_){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_437_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_438_ = lean_unsigned_to_nat(1u);
v___x_439_ = lean_nat_add(v_i_435_, v___x_438_);
v___x_440_ = l_Nat_reprFast(v___x_439_);
v___x_441_ = lean_string_append(v___x_437_, v___x_440_);
lean_dec_ref(v___x_440_);
v___x_442_ = lean_array_get_size(v_args_434_);
v___x_443_ = lean_nat_dec_lt(v_i_435_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_box(0);
v___x_445_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_441_, v___x_444_);
lean_dec_ref(v___x_441_);
return v___x_445_;
}
else
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_array_fget_borrowed(v_args_434_, v_i_435_);
lean_inc(v___x_446_);
v___x_447_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_441_, v___x_446_);
lean_dec_ref(v___x_441_);
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1___boxed(lean_object* v_args_448_, lean_object* v_i_449_, lean_object* v_a_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_448_, v_i_449_);
lean_dec(v_i_449_);
lean_dec_ref(v_args_448_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(lean_object* v_f_452_, lean_object* v___f_453_, lean_object* v_args_454_){
_start:
{
lean_object* v___f_456_; lean_object* v___x_457_; uint8_t v___x_458_; lean_object* v_val_460_; lean_object* v___x_463_; 
lean_inc_ref(v_args_454_);
v___f_456_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_456_, 0, v_f_452_);
lean_closure_set(v___f_456_, 1, v___f_453_);
lean_closure_set(v___f_456_, 2, v_args_454_);
v___x_457_ = lean_unsigned_to_nat(0u);
v___x_458_ = 0;
v___x_463_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_454_, v___x_457_);
lean_dec_ref(v_args_454_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
lean_ctor_set_tag(v___x_466_, 1);
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
v_val_460_ = v___x_469_;
goto v___jp_459_;
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
v_a_472_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_463_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_463_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set_tag(v___x_474_, 0);
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
v_val_460_ = v___x_477_;
goto v___jp_459_;
}
}
}
v___jp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v_val_460_);
v___x_462_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_457_, v___x_458_, v___x_461_, v___f_456_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed(lean_object* v_f_480_, lean_object* v___f_481_, lean_object* v_args_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(v_f_480_, v___f_481_, v_args_482_);
return v_res_484_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___x_493_ = lean_nat_abs(v___x_492_);
return v___x_493_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_494_ = lean_cstr_to_nat("9007199254740991");
v___x_495_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__6);
v___x_496_ = lean_nat_dec_le(v___x_495_, v___x_494_);
return v___x_496_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___x_498_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
}
static double _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9(void){
_start:
{
lean_object* v___x_499_; double v___x_500_; 
v___x_499_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__2);
v___x_500_ = l_Float_ofInt(v___x_499_);
return v___x_500_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10(void){
_start:
{
double v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_float_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__9);
v___x_502_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_502_, 0, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object* v_f_503_){
_start:
{
lean_object* v___f_505_; lean_object* v___f_506_; lean_object* v___x_507_; 
v___f_505_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_506_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_506_, 0, v_f_503_);
lean_closure_set(v___f_506_, 1, v___f_505_);
v___x_507_ = l_Lasm_JS_Function_ofFn(v___f_506_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_509_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_a_508_);
lean_dec_ref_known(v___x_507_, 1);
v___x_509_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_a_510_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_a_510_);
lean_dec_ref_known(v___x_509_, 1);
v___x_511_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_512_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_510_, v___x_511_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___y_520_; uint8_t v___x_547_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v___x_514_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_515_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_508_);
v___x_516_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_516_, 0, v_a_508_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_518_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_547_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; 
v___x_548_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_520_ = v___x_548_;
goto v___jp_519_;
}
else
{
lean_object* v___x_549_; 
v___x_549_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_520_ = v___x_549_;
goto v___jp_519_;
}
v___jp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
lean_inc(v___y_520_);
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_518_);
lean_ctor_set(v___x_521_, 1, v___y_520_);
v___x_522_ = lean_box(0);
v___x_523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = l_Lasm_JS_obj(v___x_523_);
v___x_525_ = lean_unsigned_to_nat(3u);
v___x_526_ = lean_mk_empty_array_with_capacity(v___x_525_);
v___x_527_ = lean_array_push(v___x_526_, v___x_516_);
v___x_528_ = lean_array_push(v___x_527_, v___x_517_);
v___x_529_ = lean_array_push(v___x_528_, v___x_524_);
v___x_530_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_513_, v___x_514_, v___x_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_537_ == 0)
{
lean_object* v_unused_538_; 
v_unused_538_ = lean_ctor_get(v___x_530_, 0);
lean_dec(v_unused_538_);
v___x_532_ = v___x_530_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_dec(v___x_530_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 0, v_a_508_);
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_508_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
else
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
lean_dec(v_a_508_);
v_a_539_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_546_ == 0)
{
v___x_541_ = v___x_530_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_530_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_539_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec(v_a_508_);
v_a_550_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_512_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_512_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
lean_dec(v_a_508_);
v_a_558_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_509_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_509_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
else
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
v_a_566_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_507_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_507_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object* v_f_574_, lean_object* v_a_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lasm_JS_Deno_ServeHandler_ofFn(v_f_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object* v_f_577_, lean_object* v_args_578_){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_578_, v___x_580_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
v___x_583_ = lean_unsigned_to_nat(1u);
v___x_584_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_578_, v___x_583_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_586_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = lean_apply_3(v_f_577_, v_a_582_, v_a_585_, lean_box(0));
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_596_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_596_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_596_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_596_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_591_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_592_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_592_, 0, v_a_587_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_592_);
v___x_594_ = v___x_589_;
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
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
v_a_597_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_586_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_586_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_a_582_);
lean_dec_ref(v_f_577_);
v_a_605_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_584_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_584_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec_ref(v_f_577_);
v_a_613_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_581_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_581_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_621_, lean_object* v_args_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(v_f_621_, v_args_622_);
lean_dec_ref(v_args_622_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object* v_f_625_){
_start:
{
lean_object* v___f_627_; lean_object* v___x_628_; 
v___f_627_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_627_, 0, v_f_625_);
v___x_628_ = l_Lasm_JS_Function_ofSyncFn(v___f_627_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_628_, 1);
v___x_630_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_633_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_631_, v___x_632_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___y_641_; uint8_t v___x_668_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_634_);
lean_dec_ref_known(v___x_633_, 1);
v___x_635_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_636_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_629_);
v___x_637_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_637_, 0, v_a_629_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_639_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_668_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; 
v___x_669_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_641_ = v___x_669_;
goto v___jp_640_;
}
else
{
lean_object* v___x_670_; 
v___x_670_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_641_ = v___x_670_;
goto v___jp_640_;
}
v___jp_640_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
lean_inc(v___y_641_);
v___x_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_639_);
lean_ctor_set(v___x_642_, 1, v___y_641_);
v___x_643_ = lean_box(0);
v___x_644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = l_Lasm_JS_obj(v___x_644_);
v___x_646_ = lean_unsigned_to_nat(3u);
v___x_647_ = lean_mk_empty_array_with_capacity(v___x_646_);
v___x_648_ = lean_array_push(v___x_647_, v___x_637_);
v___x_649_ = lean_array_push(v___x_648_, v___x_638_);
v___x_650_ = lean_array_push(v___x_649_, v___x_645_);
v___x_651_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_634_, v___x_635_, v___x_650_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_658_ == 0)
{
lean_object* v_unused_659_; 
v_unused_659_ = lean_ctor_get(v___x_651_, 0);
lean_dec(v_unused_659_);
v___x_653_ = v___x_651_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_dec(v___x_651_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v_a_629_);
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_629_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_dec(v_a_629_);
v_a_660_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_651_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_651_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
lean_dec(v_a_629_);
v_a_671_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_633_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_633_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
lean_dec(v_a_629_);
v_a_679_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_630_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_630_);
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
v_a_687_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_628_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_628_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object* v_f_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn(v_f_695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1(lean_object* v_f_705_, lean_object* v___f_706_, lean_object* v_x_707_){
_start:
{
if (lean_obj_tag(v_x_707_) == 0)
{
lean_object* v___x_709_; 
lean_dec_ref(v___f_706_);
lean_dec_ref(v_f_705_);
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v_x_707_);
return v___x_709_;
}
else
{
lean_object* v_a_710_; lean_object* v___x_711_; uint8_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v_a_710_ = lean_ctor_get(v_x_707_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v_x_707_, 1);
v___x_711_ = lean_unsigned_to_nat(0u);
v___x_712_ = 0;
v___x_713_ = lean_apply_2(v_f_705_, v_a_710_, lean_box(0));
v___x_714_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_711_, v___x_712_, v___x_713_, v___f_706_);
return v___x_714_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1___boxed(lean_object* v_f_715_, lean_object* v___f_716_, lean_object* v_x_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1(v_f_715_, v___f_716_, v_x_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0(lean_object* v___f_720_, lean_object* v_args_721_){
_start:
{
lean_object* v___x_723_; uint8_t v___x_724_; lean_object* v_val_726_; lean_object* v___x_729_; lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = 0;
v___x_729_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_721_, v___x_723_);
v_a_730_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_729_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_729_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v___jp_725_:
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v_val_726_);
v___x_728_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_723_, v___x_724_, v___x_727_, v___f_720_);
return v___x_728_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set_tag(v___x_732_, 1);
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
v_val_726_ = v___x_735_;
goto v___jp_725_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0___boxed(lean_object* v___f_738_, lean_object* v_args_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0(v___f_738_, v_args_739_);
lean_dec_ref(v_args_739_);
return v_res_741_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___x_743_ = lean_nat_abs(v___x_742_);
return v___x_743_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_744_ = lean_cstr_to_nat("9007199254740991");
v___x_745_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__0);
v___x_746_ = lean_nat_dec_le(v___x_745_, v___x_744_);
return v___x_746_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___x_748_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
return v___x_748_;
}
}
static double _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3(void){
_start:
{
lean_object* v___x_749_; double v___x_750_; 
v___x_749_ = lean_obj_once(&l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3, &l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3_once, _init_l_Lasm_JS_Deno_instReprServeUnixOptionsTransport_repr___redArg___closed__3);
v___x_750_ = l_Float_ofInt(v___x_749_);
return v___x_750_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4(void){
_start:
{
double v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_float_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__3);
v___x_752_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_752_, 0, v___x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn(lean_object* v_f_753_){
_start:
{
lean_object* v___f_755_; lean_object* v___f_756_; lean_object* v___f_757_; lean_object* v___x_758_; 
v___f_755_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_756_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_756_, 0, v_f_753_);
lean_closure_set(v___f_756_, 1, v___f_755_);
v___f_757_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_757_, 0, v___f_756_);
v___x_758_ = l_Lasm_JS_Function_ofFn(v___f_757_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v___x_760_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_a_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_a_761_);
lean_dec_ref_known(v___x_760_, 1);
v___x_762_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_763_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_761_, v___x_762_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___y_771_; uint8_t v___x_798_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v___x_763_, 1);
v___x_765_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_766_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_759_);
v___x_767_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_767_, 0, v_a_759_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v___x_768_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_769_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_798_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
v___x_799_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_771_ = v___x_799_;
goto v___jp_770_;
}
else
{
lean_object* v___x_800_; 
v___x_800_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_771_ = v___x_800_;
goto v___jp_770_;
}
v___jp_770_:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
lean_inc(v___y_771_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_769_);
lean_ctor_set(v___x_772_, 1, v___y_771_);
v___x_773_ = lean_box(0);
v___x_774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_774_, 0, v___x_772_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
v___x_775_ = l_Lasm_JS_obj(v___x_774_);
v___x_776_ = lean_unsigned_to_nat(3u);
v___x_777_ = lean_mk_empty_array_with_capacity(v___x_776_);
v___x_778_ = lean_array_push(v___x_777_, v___x_767_);
v___x_779_ = lean_array_push(v___x_778_, v___x_768_);
v___x_780_ = lean_array_push(v___x_779_, v___x_775_);
v___x_781_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_764_, v___x_765_, v___x_780_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_788_ == 0)
{
lean_object* v_unused_789_; 
v_unused_789_ = lean_ctor_get(v___x_781_, 0);
lean_dec(v_unused_789_);
v___x_783_ = v___x_781_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_dec(v___x_781_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v_a_759_);
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_759_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec(v_a_759_);
v_a_790_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_781_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_781_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
}
else
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
lean_dec(v_a_759_);
v_a_801_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_763_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_763_);
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
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
lean_dec(v_a_759_);
v_a_809_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_760_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_760_);
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
else
{
lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_824_; 
v_a_817_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_824_ == 0)
{
v___x_819_ = v___x_758_;
v_isShared_820_ = v_isSharedCheck_824_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_758_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_824_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_822_; 
if (v_isShared_820_ == 0)
{
v___x_822_ = v___x_819_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_a_817_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___boxed(lean_object* v_f_825_, lean_object* v_a_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn(v_f_825_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0(lean_object* v_f_828_, lean_object* v_args_829_){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v_a_833_; lean_object* v___x_834_; 
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_829_, v___x_831_);
v_a_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_a_833_);
lean_dec_ref(v___x_832_);
v___x_834_ = lean_apply_2(v_f_828_, v_a_833_, lean_box(0));
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_844_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_844_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_844_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_844_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_839_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_840_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_840_, 0, v_a_835_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_840_);
v___x_842_ = v___x_837_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
v_a_845_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_834_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_834_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0___boxed(lean_object* v_f_853_, lean_object* v_args_854_, lean_object* v___y_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0(v_f_853_, v_args_854_);
lean_dec_ref(v_args_854_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn(lean_object* v_f_857_){
_start:
{
lean_object* v___f_859_; lean_object* v___x_860_; 
v___f_859_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_859_, 0, v_f_857_);
v___x_860_ = l_Lasm_JS_Function_ofSyncFn(v___f_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_862_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v___x_862_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_862_, 1);
v___x_864_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_865_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_863_, v___x_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___y_873_; uint8_t v___x_900_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_868_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_861_);
v___x_869_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_869_, 0, v_a_861_);
lean_ctor_set(v___x_869_, 1, v___x_868_);
v___x_870_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_871_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_900_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; 
v___x_901_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_873_ = v___x_901_;
goto v___jp_872_;
}
else
{
lean_object* v___x_902_; 
v___x_902_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_873_ = v___x_902_;
goto v___jp_872_;
}
v___jp_872_:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
lean_inc(v___y_873_);
v___x_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_871_);
lean_ctor_set(v___x_874_, 1, v___y_873_);
v___x_875_ = lean_box(0);
v___x_876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_874_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = l_Lasm_JS_obj(v___x_876_);
v___x_878_ = lean_unsigned_to_nat(3u);
v___x_879_ = lean_mk_empty_array_with_capacity(v___x_878_);
v___x_880_ = lean_array_push(v___x_879_, v___x_869_);
v___x_881_ = lean_array_push(v___x_880_, v___x_870_);
v___x_882_ = lean_array_push(v___x_881_, v___x_877_);
v___x_883_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_866_, v___x_867_, v___x_882_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_890_ == 0)
{
lean_object* v_unused_891_; 
v_unused_891_ = lean_ctor_get(v___x_883_, 0);
lean_dec(v_unused_891_);
v___x_885_ = v___x_883_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_dec(v___x_883_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v_a_861_);
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_861_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_dec(v_a_861_);
v_a_892_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_883_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_883_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec(v_a_861_);
v_a_903_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_865_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_865_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
else
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec(v_a_861_);
v_a_911_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_862_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_862_);
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
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
v_a_919_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_860_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_860_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___boxed(lean_object* v_f_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn(v_f_927_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0(lean_object* v_x_941_){
_start:
{
if (lean_obj_tag(v_x_941_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_951_; 
v_a_943_ = lean_ctor_get(v_x_941_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v_x_941_);
if (v_isSharedCheck_951_ == 0)
{
v___x_945_ = v_x_941_;
v_isShared_946_ = v_isSharedCheck_951_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v_x_941_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_951_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_950_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
lean_object* v___x_949_; 
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
}
}
else
{
lean_object* v___x_952_; 
lean_dec_ref_known(v_x_941_, 1);
v___x_952_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___closed__1));
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0___boxed(lean_object* v_x_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__0(v_x_953_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1(lean_object* v_f_956_, lean_object* v___f_957_, lean_object* v_x_958_){
_start:
{
if (lean_obj_tag(v_x_958_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v___f_957_);
lean_dec_ref(v_f_956_);
v_a_960_ = lean_ctor_get(v_x_958_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_968_ == 0)
{
v___x_962_ = v_x_958_;
v_isShared_963_ = v_isSharedCheck_968_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v_x_958_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_968_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_967_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; 
v___x_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
return v___x_966_;
}
}
}
else
{
lean_object* v_a_969_; lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v_a_969_ = lean_ctor_get(v_x_958_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v_x_958_, 1);
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = 0;
v___x_972_ = lean_apply_2(v_f_956_, v_a_969_, lean_box(0));
v___x_973_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_970_, v___x_971_, v___x_972_, v___f_957_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1___boxed(lean_object* v_f_974_, lean_object* v___f_975_, lean_object* v_x_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1(v_f_974_, v___f_975_, v_x_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(lean_object* v_args_979_, lean_object* v_i_980_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; uint8_t v___x_988_; 
v___x_982_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_983_ = lean_unsigned_to_nat(1u);
v___x_984_ = lean_nat_add(v_i_980_, v___x_983_);
v___x_985_ = l_Nat_reprFast(v___x_984_);
v___x_986_ = lean_string_append(v___x_982_, v___x_985_);
lean_dec_ref(v___x_985_);
v___x_987_ = lean_array_get_size(v_args_979_);
v___x_988_ = lean_nat_dec_lt(v_i_980_, v___x_987_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_box(0);
v___x_990_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0_spec__0_spec__1(v___x_986_, v___x_989_);
lean_dec_ref(v___x_986_);
return v___x_990_;
}
else
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_array_fget_borrowed(v_args_979_, v_i_980_);
lean_inc(v___x_991_);
v___x_992_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0_spec__0_spec__1(v___x_986_, v___x_991_);
lean_dec_ref(v___x_986_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0___boxed(lean_object* v_args_993_, lean_object* v_i_994_, lean_object* v_a_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(v_args_993_, v_i_994_);
lean_dec(v_i_994_);
lean_dec_ref(v_args_993_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2(lean_object* v___f_997_, lean_object* v_args_998_){
_start:
{
lean_object* v___x_1000_; uint8_t v___x_1001_; lean_object* v_val_1003_; lean_object* v___x_1006_; 
v___x_1000_ = lean_unsigned_to_nat(0u);
v___x_1001_ = 0;
v___x_1006_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(v_args_998_, v___x_1000_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 1);
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
v_val_1003_ = v___x_1012_;
goto v___jp_1002_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
v_a_1015_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1006_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1006_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set_tag(v___x_1017_, 0);
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
v_val_1003_ = v___x_1020_;
goto v___jp_1002_;
}
}
}
v___jp_1002_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v_val_1003_);
v___x_1005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1000_, v___x_1001_, v___x_1004_, v___f_997_);
return v___x_1005_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2___boxed(lean_object* v___f_1023_, lean_object* v_args_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2(v___f_1023_, v_args_1024_);
lean_dec_ref(v_args_1024_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn(lean_object* v_f_1028_){
_start:
{
lean_object* v___f_1030_; lean_object* v___f_1031_; lean_object* v___f_1032_; lean_object* v___x_1033_; 
v___f_1030_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___closed__0));
v___f_1031_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1031_, 0, v_f_1028_);
lean_closure_set(v___f_1031_, 1, v___f_1030_);
v___f_1032_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1032_, 0, v___f_1031_);
v___x_1033_ = l_Lasm_JS_Function_ofFn(v___f_1032_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_a_1034_; lean_object* v___x_1035_; 
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1034_);
lean_dec_ref_known(v___x_1033_, 1);
v___x_1035_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1038_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1036_, v___x_1037_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___y_1046_; uint8_t v___x_1073_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref_known(v___x_1038_, 1);
v___x_1040_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1041_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1034_);
v___x_1042_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1042_, 0, v_a_1034_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1044_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1073_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1046_ = v___x_1074_;
goto v___jp_1045_;
}
else
{
lean_object* v___x_1075_; 
v___x_1075_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1046_ = v___x_1075_;
goto v___jp_1045_;
}
v___jp_1045_:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
lean_inc(v___y_1046_);
v___x_1047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1044_);
lean_ctor_set(v___x_1047_, 1, v___y_1046_);
v___x_1048_ = lean_box(0);
v___x_1049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = l_Lasm_JS_obj(v___x_1049_);
v___x_1051_ = lean_unsigned_to_nat(3u);
v___x_1052_ = lean_mk_empty_array_with_capacity(v___x_1051_);
v___x_1053_ = lean_array_push(v___x_1052_, v___x_1042_);
v___x_1054_ = lean_array_push(v___x_1053_, v___x_1043_);
v___x_1055_ = lean_array_push(v___x_1054_, v___x_1050_);
v___x_1056_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1039_, v___x_1040_, v___x_1055_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v___x_1056_, 0);
lean_dec(v_unused_1064_);
v___x_1058_ = v___x_1056_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_dec(v___x_1056_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 0, v_a_1034_);
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1034_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
lean_dec(v_a_1034_);
v_a_1065_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___x_1056_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1056_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
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
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
lean_dec(v_a_1034_);
v_a_1076_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1078_ = v___x_1038_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1038_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1076_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_dec(v_a_1034_);
v_a_1084_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1035_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1035_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
else
{
lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1099_; 
v_a_1092_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1094_ = v___x_1033_;
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1033_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1097_; 
if (v_isShared_1095_ == 0)
{
v___x_1097_ = v___x_1094_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_a_1092_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___boxed(lean_object* v_f_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn(v_f_1100_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0(lean_object* v_f_1103_, lean_object* v_args_1104_){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = lean_unsigned_to_nat(0u);
v___x_1107_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn_spec__0(v_args_1104_, v___x_1106_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v_a_1108_; lean_object* v___x_1109_; 
v_a_1108_ = lean_ctor_get(v___x_1107_, 0);
lean_inc(v_a_1108_);
lean_dec_ref_known(v___x_1107_, 1);
v___x_1109_ = lean_apply_2(v_f_1103_, v_a_1108_, lean_box(0));
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1117_; 
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1117_ == 0)
{
lean_object* v_unused_1118_; 
v_unused_1118_ = lean_ctor_get(v___x_1109_, 0);
lean_dec(v_unused_1118_);
v___x_1111_ = v___x_1109_;
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
else
{
lean_dec(v___x_1109_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1115_; 
v___x_1113_ = lean_box(0);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1113_);
v___x_1115_ = v___x_1111_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
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
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1109_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1109_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1109_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec_ref(v_f_1103_);
v_a_1127_ = lean_ctor_get(v___x_1107_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1107_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1107_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1135_, lean_object* v_args_1136_, lean_object* v___y_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0(v_f_1135_, v_args_1136_);
lean_dec_ref(v_args_1136_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn(lean_object* v_f_1139_){
_start:
{
lean_object* v___f_1141_; lean_object* v___x_1142_; 
v___f_1141_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1141_, 0, v_f_1139_);
v___x_1142_ = l_Lasm_JS_Function_ofSyncFn(v___f_1141_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1144_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1143_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1144_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1147_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1145_, v___x_1146_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___y_1155_; uint8_t v___x_1182_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1147_, 1);
v___x_1149_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1150_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1143_);
v___x_1151_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1151_, 0, v_a_1143_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1153_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1182_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1182_ == 0)
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1155_ = v___x_1183_;
goto v___jp_1154_;
}
else
{
lean_object* v___x_1184_; 
v___x_1184_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1155_ = v___x_1184_;
goto v___jp_1154_;
}
v___jp_1154_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
lean_inc(v___y_1155_);
v___x_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1153_);
lean_ctor_set(v___x_1156_, 1, v___y_1155_);
v___x_1157_ = lean_box(0);
v___x_1158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = l_Lasm_JS_obj(v___x_1158_);
v___x_1160_ = lean_unsigned_to_nat(3u);
v___x_1161_ = lean_mk_empty_array_with_capacity(v___x_1160_);
v___x_1162_ = lean_array_push(v___x_1161_, v___x_1151_);
v___x_1163_ = lean_array_push(v___x_1162_, v___x_1152_);
v___x_1164_ = lean_array_push(v___x_1163_, v___x_1159_);
v___x_1165_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1148_, v___x_1149_, v___x_1164_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; 
v_unused_1173_ = lean_ctor_get(v___x_1165_, 0);
lean_dec(v_unused_1173_);
v___x_1167_ = v___x_1165_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_dec(v___x_1165_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v_a_1143_);
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1143_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
lean_dec(v_a_1143_);
v_a_1174_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1165_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1165_);
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
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec(v_a_1143_);
v_a_1185_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1147_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1147_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
lean_dec(v_a_1143_);
v_a_1193_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v___x_1144_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1144_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
v_a_1201_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1142_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1142_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn___boxed(lean_object* v_f_1209_, lean_object* v_a_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofSyncFn(v_f_1209_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0(lean_object* v___f_1218_, lean_object* v___f_1219_, lean_object* v___f_1220_, lean_object* v___f_1221_, lean_object* v___f_1222_, lean_object* v_d_1223_){
_start:
{
lean_object* v_signal_1224_; lean_object* v_onError_1225_; lean_object* v_onListen_1226_; lean_object* v_automaticCompression_1227_; lean_object* v_transport_1228_; lean_object* v_path_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v_signal_1224_ = lean_ctor_get(v_d_1223_, 0);
lean_inc(v_signal_1224_);
v_onError_1225_ = lean_ctor_get(v_d_1223_, 1);
lean_inc(v_onError_1225_);
v_onListen_1226_ = lean_ctor_get(v_d_1223_, 2);
lean_inc(v_onListen_1226_);
v_automaticCompression_1227_ = lean_ctor_get(v_d_1223_, 3);
lean_inc(v_automaticCompression_1227_);
v_transport_1228_ = lean_ctor_get(v_d_1223_, 4);
lean_inc(v_transport_1228_);
v_path_1229_ = lean_ctor_get(v_d_1223_, 5);
lean_inc_ref(v_path_1229_);
lean_dec_ref(v_d_1223_);
v___x_1230_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_1231_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1218_, v_signal_1224_);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1230_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
v___x_1233_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_1234_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1219_, v_onError_1225_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_1237_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1220_, v_onListen_1226_);
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1236_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_1240_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1221_, v_automaticCompression_1227_);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1239_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v___x_1242_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_1243_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1222_, v_transport_1228_);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1242_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___x_1245_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__5));
v___x_1246_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1246_, 0, v_path_1229_);
v___x_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1245_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = lean_unsigned_to_nat(6u);
v___x_1249_ = lean_mk_empty_array_with_capacity(v___x_1248_);
v___x_1250_ = lean_array_push(v___x_1249_, v___x_1232_);
v___x_1251_ = lean_array_push(v___x_1250_, v___x_1235_);
v___x_1252_ = lean_array_push(v___x_1251_, v___x_1238_);
v___x_1253_ = lean_array_push(v___x_1252_, v___x_1241_);
v___x_1254_ = lean_array_push(v___x_1253_, v___x_1244_);
v___x_1255_ = lean_array_push(v___x_1254_, v___x_1247_);
v___x_1256_ = l_Lasm_JS_Web_Support_fields(v___x_1255_);
lean_dec_ref(v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(lean_object* v_context_1272_, lean_object* v_d_1273_){
_start:
{
lean_object* v___y_1276_; lean_object* v___y_1277_; 
if (lean_obj_tag(v_d_1273_) == 9)
{
lean_object* v_value_1281_; lean_object* v___x_1282_; 
v_value_1281_ = lean_ctor_get(v_d_1273_, 0);
lean_inc(v_value_1281_);
lean_dec_ref_known(v_d_1273_, 2);
v___x_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1282_, 0, v_value_1281_);
return v___x_1282_;
}
else
{
lean_object* v___x_1283_; lean_object* v_received_1285_; 
v___x_1283_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
if (lean_obj_tag(v_d_1273_) == 9)
{
lean_object* v_value_1299_; lean_object* v_description_1300_; uint8_t v___x_1301_; 
v_value_1299_ = lean_ctor_get(v_d_1273_, 0);
v_description_1300_ = lean_ctor_get(v_d_1273_, 1);
v___x_1301_ = lean_string_dec_eq(v_description_1300_, v___x_1283_);
if (v___x_1301_ == 0)
{
goto v___jp_1297_;
}
else
{
uint32_t v___x_1302_; uint64_t v___x_1303_; lean_object* v___x_1304_; uint32_t v___x_1305_; lean_object* v___x_1306_; 
lean_inc_n(v_value_1299_, 2);
lean_dec_ref_known(v_d_1273_, 2);
v___x_1302_ = 206;
v___x_1303_ = 0ULL;
v___x_1304_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1304_, 0, v_value_1299_);
lean_ctor_set(v___x_1304_, 1, v___x_1283_);
v___x_1305_ = lasm_js_value_handle(v_value_1299_);
lean_dec(v_value_1299_);
v___x_1306_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1302_, v___x_1303_, v___x_1304_, v___x_1305_);
lean_dec_ref_known(v___x_1304_, 2);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; uint8_t v___x_1308_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1306_, 1);
v___x_1308_ = lean_string_validate_utf8(v_a_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_dec(v_a_1307_);
v___x_1309_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__9);
v___x_1310_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1309_);
v_received_1285_ = v___x_1310_;
goto v___jp_1284_;
}
else
{
lean_object* v___x_1311_; 
v___x_1311_ = lean_string_from_utf8_unchecked(v_a_1307_);
v_received_1285_ = v___x_1311_;
goto v___jp_1284_;
}
}
else
{
lean_object* v___x_1312_; 
lean_dec_ref_known(v___x_1306_, 1);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__10));
v_received_1285_ = v___x_1312_;
goto v___jp_1284_;
}
}
}
else
{
goto v___jp_1297_;
}
v___jp_1284_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v___x_1286_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1287_ = lean_string_append(v___x_1286_, v_context_1272_);
v___x_1288_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1289_ = lean_string_append(v___x_1287_, v___x_1288_);
v___x_1290_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfoUnixAddr___closed__0));
v___x_1291_ = lean_string_append(v___x_1289_, v___x_1290_);
v___x_1292_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1293_ = lean_string_append(v___x_1291_, v___x_1292_);
v___x_1294_ = lean_string_append(v___x_1293_, v_received_1285_);
lean_dec_ref(v_received_1285_);
v___x_1295_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; 
v___x_1296_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___closed__5));
v___y_1276_ = v___x_1294_;
v___y_1277_ = v___x_1296_;
goto v___jp_1275_;
}
else
{
v___y_1276_ = v___x_1294_;
v___y_1277_ = v___x_1283_;
goto v___jp_1275_;
}
}
v___jp_1297_:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lasm_JS_Data_describe(v_d_1273_);
v_received_1285_ = v___x_1298_;
goto v___jp_1284_;
}
}
v___jp_1275_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1278_ = lean_string_append(v___y_1276_, v___y_1277_);
v___x_1279_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
v___x_1280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
return v___x_1280_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1313_, lean_object* v_d_1314_, lean_object* v_a_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(v_context_1313_, v_d_1314_);
lean_dec_ref(v_context_1313_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(lean_object* v_args_1317_, lean_object* v_i_1318_){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; 
v___x_1320_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1321_ = lean_unsigned_to_nat(1u);
v___x_1322_ = lean_nat_add(v_i_1318_, v___x_1321_);
v___x_1323_ = l_Nat_reprFast(v___x_1322_);
v___x_1324_ = lean_string_append(v___x_1320_, v___x_1323_);
lean_dec_ref(v___x_1323_);
v___x_1325_ = lean_array_get_size(v_args_1317_);
v___x_1326_ = lean_nat_dec_lt(v_i_1318_, v___x_1325_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_box(0);
v___x_1328_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(v___x_1324_, v___x_1327_);
lean_dec_ref(v___x_1324_);
return v___x_1328_;
}
else
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = lean_array_fget_borrowed(v_args_1317_, v_i_1318_);
lean_inc(v___x_1329_);
v___x_1330_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0_spec__0(v___x_1324_, v___x_1329_);
lean_dec_ref(v___x_1324_);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0___boxed(lean_object* v_args_1331_, lean_object* v_i_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(v_args_1331_, v_i_1332_);
lean_dec(v_i_1332_);
lean_dec_ref(v_args_1331_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2(lean_object* v_f_1335_, lean_object* v___f_1336_, lean_object* v_args_1337_, lean_object* v_x_1338_){
_start:
{
if (lean_obj_tag(v_x_1338_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1348_; 
lean_dec_ref(v___f_1336_);
lean_dec_ref(v_f_1335_);
v_a_1340_ = lean_ctor_get(v_x_1338_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_x_1338_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1342_ = v_x_1338_;
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v_x_1338_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
}
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1370_; 
v_a_1349_ = lean_ctor_get(v_x_1338_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_x_1338_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1351_ = v_x_1338_;
v_isShared_1352_ = v_isSharedCheck_1370_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v_x_1338_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1370_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___f_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; lean_object* v_val_1358_; lean_object* v___x_1361_; 
v___f_1353_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1353_, 0, v_f_1335_);
lean_closure_set(v___f_1353_, 1, v_a_1349_);
lean_closure_set(v___f_1353_, 2, v___f_1336_);
v___x_1354_ = lean_unsigned_to_nat(1u);
v___x_1355_ = lean_unsigned_to_nat(0u);
v___x_1356_ = 0;
v___x_1361_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(v_args_1337_, v___x_1354_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1364_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1361_, 1);
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v_a_1362_);
v___x_1364_ = v___x_1351_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1362_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
v_val_1358_ = v___x_1364_;
goto v___jp_1357_;
}
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; 
v_a_1366_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1361_, 1);
if (v_isShared_1352_ == 0)
{
lean_ctor_set_tag(v___x_1351_, 0);
lean_ctor_set(v___x_1351_, 0, v_a_1366_);
v___x_1368_ = v___x_1351_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1366_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
v_val_1358_ = v___x_1368_;
goto v___jp_1357_;
}
}
v___jp_1357_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1359_, 0, v_val_1358_);
v___x_1360_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1355_, v___x_1356_, v___x_1359_, v___f_1353_);
return v___x_1360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2___boxed(lean_object* v_f_1371_, lean_object* v___f_1372_, lean_object* v_args_1373_, lean_object* v_x_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2(v_f_1371_, v___f_1372_, v_args_1373_, v_x_1374_);
lean_dec_ref(v_args_1373_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0(lean_object* v_f_1377_, lean_object* v___f_1378_, lean_object* v_args_1379_){
_start:
{
lean_object* v___f_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; lean_object* v_val_1385_; lean_object* v___x_1388_; 
lean_inc_ref(v_args_1379_);
v___f_1381_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1381_, 0, v_f_1377_);
lean_closure_set(v___f_1381_, 1, v___f_1378_);
lean_closure_set(v___f_1381_, 2, v_args_1379_);
v___x_1382_ = lean_unsigned_to_nat(0u);
v___x_1383_ = 0;
v___x_1388_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_1379_, v___x_1382_);
lean_dec_ref(v_args_1379_);
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1388_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1388_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
lean_ctor_set_tag(v___x_1391_, 1);
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
v_val_1385_ = v___x_1394_;
goto v___jp_1384_;
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
v_a_1397_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1388_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1388_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
lean_ctor_set_tag(v___x_1399_, 0);
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
v_val_1385_ = v___x_1402_;
goto v___jp_1384_;
}
}
}
v___jp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1386_, 0, v_val_1385_);
v___x_1387_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1382_, v___x_1383_, v___x_1386_, v___f_1381_);
return v___x_1387_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0___boxed(lean_object* v_f_1405_, lean_object* v___f_1406_, lean_object* v_args_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0(v_f_1405_, v___f_1406_, v_args_1407_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn(lean_object* v_f_1410_){
_start:
{
lean_object* v___f_1412_; lean_object* v___f_1413_; lean_object* v___x_1414_; 
v___f_1412_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_1413_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1413_, 0, v_f_1410_);
lean_closure_set(v___f_1413_, 1, v___f_1412_);
v___x_1414_ = l_Lasm_JS_Function_ofFn(v___f_1413_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1416_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1415_);
lean_dec_ref_known(v___x_1414_, 1);
v___x_1416_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
v___x_1418_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1419_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1417_, v___x_1418_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___y_1427_; uint8_t v___x_1454_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1421_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1422_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1415_);
v___x_1423_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1423_, 0, v_a_1415_);
lean_ctor_set(v___x_1423_, 1, v___x_1422_);
v___x_1424_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1425_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1454_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_1427_ = v___x_1455_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_1427_ = v___x_1456_;
goto v___jp_1426_;
}
v___jp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
lean_inc(v___y_1427_);
v___x_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1425_);
lean_ctor_set(v___x_1428_, 1, v___y_1427_);
v___x_1429_ = lean_box(0);
v___x_1430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1428_);
lean_ctor_set(v___x_1430_, 1, v___x_1429_);
v___x_1431_ = l_Lasm_JS_obj(v___x_1430_);
v___x_1432_ = lean_unsigned_to_nat(3u);
v___x_1433_ = lean_mk_empty_array_with_capacity(v___x_1432_);
v___x_1434_ = lean_array_push(v___x_1433_, v___x_1423_);
v___x_1435_ = lean_array_push(v___x_1434_, v___x_1424_);
v___x_1436_ = lean_array_push(v___x_1435_, v___x_1431_);
v___x_1437_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1420_, v___x_1421_, v___x_1436_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1444_; 
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1444_ == 0)
{
lean_object* v_unused_1445_; 
v_unused_1445_ = lean_ctor_get(v___x_1437_, 0);
lean_dec(v_unused_1445_);
v___x_1439_ = v___x_1437_;
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
else
{
lean_dec(v___x_1437_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1442_; 
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 0, v_a_1415_);
v___x_1442_ = v___x_1439_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1415_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec(v_a_1415_);
v_a_1446_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1437_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1437_);
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
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec(v_a_1415_);
v_a_1457_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1419_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1419_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
lean_dec(v_a_1415_);
v_a_1465_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1416_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1416_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
v_a_1473_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1475_ = v___x_1414_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1414_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1478_; 
if (v_isShared_1476_ == 0)
{
v___x_1478_ = v___x_1475_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1473_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn___boxed(lean_object* v_f_1481_, lean_object* v_a_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn(v_f_1481_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0(lean_object* v_f_1484_, lean_object* v_args_1485_){
_start:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = lean_unsigned_to_nat(0u);
v___x_1488_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_1485_, v___x_1487_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1489_);
lean_dec_ref_known(v___x_1488_, 1);
v___x_1490_ = lean_unsigned_to_nat(1u);
v___x_1491_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandlerUnixAddr_ofFn_spec__0(v_args_1485_, v___x_1490_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_object* v_a_1492_; lean_object* v___x_1493_; 
v_a_1492_ = lean_ctor_get(v___x_1491_, 0);
lean_inc(v_a_1492_);
lean_dec_ref_known(v___x_1491_, 1);
v___x_1493_ = lean_apply_3(v_f_1484_, v_a_1489_, v_a_1492_, lean_box(0));
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1503_; 
v_a_1494_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1496_ = v___x_1493_;
v_isShared_1497_ = v_isSharedCheck_1503_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___x_1493_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1503_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1501_; 
v___x_1498_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_1499_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1499_, 0, v_a_1494_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 0, v___x_1499_);
v___x_1501_ = v___x_1496_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1499_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
v_a_1504_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1493_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1493_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1509_; 
if (v_isShared_1507_ == 0)
{
v___x_1509_ = v___x_1506_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_a_1504_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
else
{
lean_object* v_a_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1519_; 
lean_dec(v_a_1489_);
lean_dec_ref(v_f_1484_);
v_a_1512_ = lean_ctor_get(v___x_1491_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1514_ = v___x_1491_;
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_a_1512_);
lean_dec(v___x_1491_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v___x_1517_; 
if (v_isShared_1515_ == 0)
{
v___x_1517_ = v___x_1514_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_a_1512_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec_ref(v_f_1484_);
v_a_1520_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1488_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1488_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0___boxed(lean_object* v_f_1528_, lean_object* v_args_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0(v_f_1528_, v_args_1529_);
lean_dec_ref(v_args_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn(lean_object* v_f_1532_){
_start:
{
lean_object* v___f_1534_; lean_object* v___x_1535_; 
v___f_1534_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1534_, 0, v_f_1532_);
v___x_1535_ = l_Lasm_JS_Function_ofSyncFn(v___f_1534_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v___x_1537_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v___x_1537_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1537_, 1);
v___x_1539_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1540_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1538_, v___x_1539_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___y_1548_; uint8_t v___x_1575_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
v___x_1542_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1543_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1536_);
v___x_1544_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1544_, 0, v_a_1536_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
v___x_1545_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1546_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1575_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__7);
if (v___x_1575_ == 0)
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__8);
v___y_1548_ = v___x_1576_;
goto v___jp_1547_;
}
else
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_obj_once(&l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10, &l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_ServeHandler_ofFn___closed__10);
v___y_1548_ = v___x_1577_;
goto v___jp_1547_;
}
v___jp_1547_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_inc(v___y_1548_);
v___x_1549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1546_);
lean_ctor_set(v___x_1549_, 1, v___y_1548_);
v___x_1550_ = lean_box(0);
v___x_1551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = l_Lasm_JS_obj(v___x_1551_);
v___x_1553_ = lean_unsigned_to_nat(3u);
v___x_1554_ = lean_mk_empty_array_with_capacity(v___x_1553_);
v___x_1555_ = lean_array_push(v___x_1554_, v___x_1544_);
v___x_1556_ = lean_array_push(v___x_1555_, v___x_1545_);
v___x_1557_ = lean_array_push(v___x_1556_, v___x_1552_);
v___x_1558_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1541_, v___x_1542_, v___x_1557_);
if (lean_obj_tag(v___x_1558_) == 0)
{
lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1565_ == 0)
{
lean_object* v_unused_1566_; 
v_unused_1566_ = lean_ctor_get(v___x_1558_, 0);
lean_dec(v_unused_1566_);
v___x_1560_ = v___x_1558_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_dec(v___x_1558_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 0, v_a_1536_);
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1536_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
lean_dec(v_a_1536_);
v_a_1567_ = lean_ctor_get(v___x_1558_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v___x_1558_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1558_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1567_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
}
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
lean_dec(v_a_1536_);
v_a_1578_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1540_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1540_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_dec(v_a_1536_);
v_a_1586_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1537_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1537_);
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
v_a_1594_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1535_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1535_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn___boxed(lean_object* v_f_1602_, lean_object* v_a_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lasm_JS_Deno_ServeHandlerUnixAddr_ofSyncFn(v_f_1602_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object* v_f_1612_){
_start:
{
lean_object* v___f_1614_; lean_object* v___f_1615_; lean_object* v___f_1616_; lean_object* v___x_1617_; 
v___f_1614_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__0));
v___f_1615_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1615_, 0, v_f_1612_);
lean_closure_set(v___f_1615_, 1, v___f_1614_);
v___f_1616_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1616_, 0, v___f_1615_);
v___x_1617_ = l_Lasm_JS_Function_ofFn(v___f_1616_);
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
v___x_1657_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1657_ == 0)
{
lean_object* v___x_1658_; 
v___x_1658_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1630_ = v___x_1658_;
goto v___jp_1629_;
}
else
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object* v_f_1684_, lean_object* v_a_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(v_f_1684_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object* v_f_1687_){
_start:
{
lean_object* v___f_1689_; lean_object* v___x_1690_; 
v___f_1689_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1689_, 0, v_f_1687_);
v___x_1690_ = l_Lasm_JS_Function_ofSyncFn(v___f_1689_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1692_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_a_1693_);
lean_dec_ref_known(v___x_1692_, 1);
v___x_1694_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1695_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1693_, v___x_1694_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___y_1703_; uint8_t v___x_1730_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1698_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1691_);
v___x_1699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1699_, 0, v_a_1691_);
lean_ctor_set(v___x_1699_, 1, v___x_1698_);
v___x_1700_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1701_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1730_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1703_ = v___x_1731_;
goto v___jp_1702_;
}
else
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1703_ = v___x_1732_;
goto v___jp_1702_;
}
v___jp_1702_:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
lean_inc(v___y_1703_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1701_);
lean_ctor_set(v___x_1704_, 1, v___y_1703_);
v___x_1705_ = lean_box(0);
v___x_1706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1706_, 0, v___x_1704_);
lean_ctor_set(v___x_1706_, 1, v___x_1705_);
v___x_1707_ = l_Lasm_JS_obj(v___x_1706_);
v___x_1708_ = lean_unsigned_to_nat(3u);
v___x_1709_ = lean_mk_empty_array_with_capacity(v___x_1708_);
v___x_1710_ = lean_array_push(v___x_1709_, v___x_1699_);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1700_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1707_);
v___x_1713_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1696_, v___x_1697_, v___x_1712_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1720_ == 0)
{
lean_object* v_unused_1721_; 
v_unused_1721_ = lean_ctor_get(v___x_1713_, 0);
lean_dec(v_unused_1721_);
v___x_1715_ = v___x_1713_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_dec(v___x_1713_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v_a_1691_);
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1691_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec(v_a_1691_);
v_a_1722_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1713_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1713_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1740_; 
lean_dec(v_a_1691_);
v_a_1733_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1735_ = v___x_1695_;
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1695_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1738_; 
if (v_isShared_1736_ == 0)
{
v___x_1738_ = v___x_1735_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
else
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1748_; 
lean_dec(v_a_1691_);
v_a_1741_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1743_ = v___x_1692_;
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1692_);
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
v_a_1749_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1690_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1690_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object* v_f_1757_, lean_object* v_a_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(v_f_1757_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object* v_f_1767_, lean_object* v___f_1768_, lean_object* v_x_1769_){
_start:
{
if (lean_obj_tag(v_x_1769_) == 0)
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1779_; 
lean_dec_ref(v___f_1768_);
lean_dec_ref(v_f_1767_);
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
lean_object* v_a_1780_; lean_object* v___x_1781_; uint8_t v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v_a_1780_ = lean_ctor_get(v_x_1769_, 0);
lean_inc(v_a_1780_);
lean_dec_ref_known(v_x_1769_, 1);
v___x_1781_ = lean_unsigned_to_nat(0u);
v___x_1782_ = 0;
v___x_1783_ = lean_apply_2(v_f_1767_, v_a_1780_, lean_box(0));
v___x_1784_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1781_, v___x_1782_, v___x_1783_, v___f_1768_);
return v___x_1784_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object* v_f_1785_, lean_object* v___f_1786_, lean_object* v_x_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(v_f_1785_, v___f_1786_, v_x_1787_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object* v_args_1790_, lean_object* v_i_1791_){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; 
v___x_1793_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___closed__0));
v___x_1794_ = lean_unsigned_to_nat(1u);
v___x_1795_ = lean_nat_add(v_i_1791_, v___x_1794_);
v___x_1796_ = l_Nat_reprFast(v___x_1795_);
v___x_1797_ = lean_string_append(v___x_1793_, v___x_1796_);
lean_dec_ref(v___x_1796_);
v___x_1798_ = lean_array_get_size(v_args_1790_);
v___x_1799_ = lean_nat_dec_lt(v_i_1791_, v___x_1798_);
if (v___x_1799_ == 0)
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = lean_box(0);
v___x_1801_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0_spec__0_spec__1(v___x_1797_, v___x_1800_);
lean_dec_ref(v___x_1797_);
return v___x_1801_;
}
else
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = lean_array_fget_borrowed(v_args_1790_, v_i_1791_);
lean_inc(v___x_1802_);
v___x_1803_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0_spec__0_spec__1(v___x_1797_, v___x_1802_);
lean_dec_ref(v___x_1797_);
return v___x_1803_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object* v_args_1804_, lean_object* v_i_1805_, lean_object* v_a_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1804_, v_i_1805_);
lean_dec(v_i_1805_);
lean_dec_ref(v_args_1804_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object* v___f_1808_, lean_object* v_args_1809_){
_start:
{
lean_object* v___x_1811_; uint8_t v___x_1812_; lean_object* v_val_1814_; lean_object* v___x_1817_; 
v___x_1811_ = lean_unsigned_to_nat(0u);
v___x_1812_ = 0;
v___x_1817_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1809_, v___x_1811_);
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
lean_ctor_set_tag(v___x_1820_, 1);
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
v_val_1814_ = v___x_1823_;
goto v___jp_1813_;
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
lean_ctor_set_tag(v___x_1828_, 0);
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
v_val_1814_ = v___x_1831_;
goto v___jp_1813_;
}
}
}
v___jp_1813_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1815_, 0, v_val_1814_);
v___x_1816_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1811_, v___x_1812_, v___x_1815_, v___f_1808_);
return v___x_1816_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object* v___f_1834_, lean_object* v_args_1835_, lean_object* v___y_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(v___f_1834_, v_args_1835_);
lean_dec_ref(v_args_1835_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object* v_f_1838_){
_start:
{
lean_object* v___f_1840_; lean_object* v___f_1841_; lean_object* v___f_1842_; lean_object* v___x_1843_; 
v___f_1840_ = ((lean_object*)(l_Lasm_JS_Deno_ServeOptionsUnixAddrOnListen_ofFn___closed__0));
v___f_1841_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1841_, 0, v_f_1838_);
lean_closure_set(v___f_1841_, 1, v___f_1840_);
v___f_1842_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1842_, 0, v___f_1841_);
v___x_1843_ = l_Lasm_JS_Function_ofFn(v___f_1842_);
if (lean_obj_tag(v___x_1843_) == 0)
{
lean_object* v_a_1844_; lean_object* v___x_1845_; 
v_a_1844_ = lean_ctor_get(v___x_1843_, 0);
lean_inc(v_a_1844_);
lean_dec_ref_known(v___x_1843_, 1);
v___x_1845_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
lean_inc(v_a_1846_);
lean_dec_ref_known(v___x_1845_, 1);
v___x_1847_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1848_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1846_, v___x_1847_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_a_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___y_1856_; uint8_t v___x_1883_; 
v_a_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v___x_1848_, 1);
v___x_1850_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1851_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1844_);
v___x_1852_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1852_, 0, v_a_1844_);
lean_ctor_set(v___x_1852_, 1, v___x_1851_);
v___x_1853_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1854_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1883_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1883_ == 0)
{
lean_object* v___x_1884_; 
v___x_1884_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1856_ = v___x_1884_;
goto v___jp_1855_;
}
else
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1856_ = v___x_1885_;
goto v___jp_1855_;
}
v___jp_1855_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
lean_inc(v___y_1856_);
v___x_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1854_);
lean_ctor_set(v___x_1857_, 1, v___y_1856_);
v___x_1858_ = lean_box(0);
v___x_1859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1857_);
lean_ctor_set(v___x_1859_, 1, v___x_1858_);
v___x_1860_ = l_Lasm_JS_obj(v___x_1859_);
v___x_1861_ = lean_unsigned_to_nat(3u);
v___x_1862_ = lean_mk_empty_array_with_capacity(v___x_1861_);
v___x_1863_ = lean_array_push(v___x_1862_, v___x_1852_);
v___x_1864_ = lean_array_push(v___x_1863_, v___x_1853_);
v___x_1865_ = lean_array_push(v___x_1864_, v___x_1860_);
v___x_1866_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1849_, v___x_1850_, v___x_1865_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1873_ == 0)
{
lean_object* v_unused_1874_; 
v_unused_1874_ = lean_ctor_get(v___x_1866_, 0);
lean_dec(v_unused_1874_);
v___x_1868_ = v___x_1866_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_dec(v___x_1866_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 0, v_a_1844_);
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1844_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec(v_a_1844_);
v_a_1875_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1866_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1866_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec(v_a_1844_);
v_a_1886_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1848_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1848_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
else
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
lean_dec(v_a_1844_);
v_a_1894_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1845_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1845_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
v___x_1899_ = v___x_1896_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1894_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1902_ = lean_ctor_get(v___x_1843_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1843_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1843_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object* v_f_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(v_f_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object* v_f_1913_, lean_object* v_args_1914_){
_start:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = lean_unsigned_to_nat(0u);
v___x_1917_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1914_, v___x_1916_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v___x_1919_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1917_, 1);
v___x_1919_ = lean_apply_2(v_f_1913_, v_a_1918_, lean_box(0));
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1927_; 
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1927_ == 0)
{
lean_object* v_unused_1928_; 
v_unused_1928_ = lean_ctor_get(v___x_1919_, 0);
lean_dec(v_unused_1928_);
v___x_1921_ = v___x_1919_;
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
else
{
lean_dec(v___x_1919_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1925_; 
v___x_1923_ = lean_box(0);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v___x_1923_);
v___x_1925_ = v___x_1921_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
v_a_1929_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1919_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1919_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec_ref(v_f_1913_);
v_a_1937_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1917_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1917_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1945_, lean_object* v_args_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(v_f_1945_, v_args_1946_);
lean_dec_ref(v_args_1946_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object* v_f_1949_){
_start:
{
lean_object* v___f_1951_; lean_object* v___x_1952_; 
v___f_1951_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1951_, 0, v_f_1949_);
v___x_1952_ = l_Lasm_JS_Function_ofSyncFn(v___f_1951_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; lean_object* v___x_1954_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_a_1953_);
lean_dec_ref_known(v___x_1952_, 1);
v___x_1954_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
lean_inc(v_a_1955_);
lean_dec_ref_known(v___x_1954_, 1);
v___x_1956_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__1));
v___x_1957_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1955_, v___x_1956_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___y_1965_; uint8_t v___x_1992_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
v___x_1959_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__2));
v___x_1960_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_a_1953_);
v___x_1961_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1961_, 0, v_a_1953_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__4));
v___x_1963_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandler_ofFn___closed__5));
v___x_1992_ = lean_uint8_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__1);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; 
v___x_1993_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__2);
v___y_1965_ = v___x_1993_;
goto v___jp_1964_;
}
else
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_obj_once(&l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4, &l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_ServeOptionsUnixAddrOnError_ofFn___closed__4);
v___y_1965_ = v___x_1994_;
goto v___jp_1964_;
}
v___jp_1964_:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
lean_inc(v___y_1965_);
v___x_1966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1963_);
lean_ctor_set(v___x_1966_, 1, v___y_1965_);
v___x_1967_ = lean_box(0);
v___x_1968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1966_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = l_Lasm_JS_obj(v___x_1968_);
v___x_1970_ = lean_unsigned_to_nat(3u);
v___x_1971_ = lean_mk_empty_array_with_capacity(v___x_1970_);
v___x_1972_ = lean_array_push(v___x_1971_, v___x_1961_);
v___x_1973_ = lean_array_push(v___x_1972_, v___x_1962_);
v___x_1974_ = lean_array_push(v___x_1973_, v___x_1969_);
v___x_1975_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1958_, v___x_1959_, v___x_1974_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1982_ == 0)
{
lean_object* v_unused_1983_; 
v_unused_1983_ = lean_ctor_get(v___x_1975_, 0);
lean_dec(v_unused_1983_);
v___x_1977_ = v___x_1975_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_dec(v___x_1975_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
lean_ctor_set(v___x_1977_, 0, v_a_1953_);
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1953_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
lean_dec(v_a_1953_);
v_a_1984_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1975_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1975_);
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
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
lean_dec(v_a_1953_);
v_a_1995_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1957_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1957_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
else
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2010_; 
lean_dec(v_a_1953_);
v_a_2003_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2005_ = v___x_1954_;
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_1954_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_2006_ == 0)
{
v___x_2008_ = v___x_2005_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
v_a_2011_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_1952_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_1952_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object* v_f_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(v_f_2019_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object* v___f_2026_, lean_object* v___f_2027_, lean_object* v___f_2028_, lean_object* v___f_2029_, lean_object* v___f_2030_, lean_object* v___f_2031_, lean_object* v___f_2032_, lean_object* v_d_2033_){
_start:
{
lean_object* v_signal_2034_; lean_object* v_onError_2035_; lean_object* v_onListen_2036_; lean_object* v_automaticCompression_2037_; lean_object* v_transport_2038_; lean_object* v_port_2039_; lean_object* v_hostname_2040_; lean_object* v_reusePort_2041_; lean_object* v_tcpBacklog_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v_signal_2034_ = lean_ctor_get(v_d_2033_, 0);
lean_inc(v_signal_2034_);
v_onError_2035_ = lean_ctor_get(v_d_2033_, 1);
lean_inc(v_onError_2035_);
v_onListen_2036_ = lean_ctor_get(v_d_2033_, 2);
lean_inc(v_onListen_2036_);
v_automaticCompression_2037_ = lean_ctor_get(v_d_2033_, 3);
lean_inc(v_automaticCompression_2037_);
v_transport_2038_ = lean_ctor_get(v_d_2033_, 4);
lean_inc(v_transport_2038_);
v_port_2039_ = lean_ctor_get(v_d_2033_, 5);
lean_inc(v_port_2039_);
v_hostname_2040_ = lean_ctor_get(v_d_2033_, 6);
lean_inc(v_hostname_2040_);
v_reusePort_2041_ = lean_ctor_get(v_d_2033_, 7);
lean_inc(v_reusePort_2041_);
v_tcpBacklog_2042_ = lean_ctor_get(v_d_2033_, 8);
lean_inc(v_tcpBacklog_2042_);
lean_dec_ref(v_d_2033_);
v___x_2043_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_2044_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2026_, v_signal_2034_);
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2043_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
v___x_2046_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_2047_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2027_, v_onError_2035_);
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2046_);
lean_ctor_set(v___x_2048_, 1, v___x_2047_);
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_2050_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2028_, v_onListen_2036_);
v___x_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2049_);
lean_ctor_set(v___x_2051_, 1, v___x_2050_);
v___x_2052_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
lean_inc_ref(v___f_2029_);
v___x_2053_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2029_, v_automaticCompression_2037_);
v___x_2054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2052_);
lean_ctor_set(v___x_2054_, 1, v___x_2053_);
v___x_2055_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_2056_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2030_, v_transport_2038_);
v___x_2057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v___x_2058_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
lean_inc_ref(v___f_2031_);
v___x_2059_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2031_, v_port_2039_);
v___x_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2058_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2062_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2032_, v_hostname_2040_);
v___x_2063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2061_);
lean_ctor_set(v___x_2063_, 1, v___x_2062_);
v___x_2064_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2065_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2029_, v_reusePort_2041_);
v___x_2066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2064_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2068_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2031_, v_tcpBacklog_2042_);
v___x_2069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2067_);
lean_ctor_set(v___x_2069_, 1, v___x_2068_);
v___x_2070_ = lean_unsigned_to_nat(9u);
v___x_2071_ = lean_mk_empty_array_with_capacity(v___x_2070_);
v___x_2072_ = lean_array_push(v___x_2071_, v___x_2045_);
v___x_2073_ = lean_array_push(v___x_2072_, v___x_2048_);
v___x_2074_ = lean_array_push(v___x_2073_, v___x_2051_);
v___x_2075_ = lean_array_push(v___x_2074_, v___x_2054_);
v___x_2076_ = lean_array_push(v___x_2075_, v___x_2057_);
v___x_2077_ = lean_array_push(v___x_2076_, v___x_2060_);
v___x_2078_ = lean_array_push(v___x_2077_, v___x_2063_);
v___x_2079_ = lean_array_push(v___x_2078_, v___x_2066_);
v___x_2080_ = lean_array_push(v___x_2079_, v___x_2069_);
v___x_2081_ = l_Lasm_JS_Web_Support_fields(v___x_2080_);
lean_dec_ref(v___x_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object* v___f_2095_, lean_object* v___f_2096_, lean_object* v___f_2097_, lean_object* v___f_2098_, lean_object* v___f_2099_, lean_object* v___f_2100_, lean_object* v___f_2101_, lean_object* v___f_2102_, lean_object* v_d_2103_){
_start:
{
lean_object* v_signal_2104_; lean_object* v_onError_2105_; lean_object* v_onListen_2106_; lean_object* v_automaticCompression_2107_; lean_object* v_transport_2108_; lean_object* v_port_2109_; lean_object* v_hostname_2110_; lean_object* v_reusePort_2111_; lean_object* v_tcpBacklog_2112_; lean_object* v_keyFormat_2113_; lean_object* v_key_2114_; lean_object* v_cert_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v_signal_2104_ = lean_ctor_get(v_d_2103_, 0);
lean_inc(v_signal_2104_);
v_onError_2105_ = lean_ctor_get(v_d_2103_, 1);
lean_inc(v_onError_2105_);
v_onListen_2106_ = lean_ctor_get(v_d_2103_, 2);
lean_inc(v_onListen_2106_);
v_automaticCompression_2107_ = lean_ctor_get(v_d_2103_, 3);
lean_inc(v_automaticCompression_2107_);
v_transport_2108_ = lean_ctor_get(v_d_2103_, 4);
lean_inc(v_transport_2108_);
v_port_2109_ = lean_ctor_get(v_d_2103_, 5);
lean_inc(v_port_2109_);
v_hostname_2110_ = lean_ctor_get(v_d_2103_, 6);
lean_inc(v_hostname_2110_);
v_reusePort_2111_ = lean_ctor_get(v_d_2103_, 7);
lean_inc(v_reusePort_2111_);
v_tcpBacklog_2112_ = lean_ctor_get(v_d_2103_, 8);
lean_inc(v_tcpBacklog_2112_);
v_keyFormat_2113_ = lean_ctor_get(v_d_2103_, 9);
lean_inc(v_keyFormat_2113_);
v_key_2114_ = lean_ctor_get(v_d_2103_, 10);
lean_inc_ref(v_key_2114_);
v_cert_2115_ = lean_ctor_get(v_d_2103_, 11);
lean_inc_ref(v_cert_2115_);
lean_dec_ref(v_d_2103_);
v___x_2116_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_2117_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2095_, v_signal_2104_);
v___x_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2116_);
lean_ctor_set(v___x_2118_, 1, v___x_2117_);
v___x_2119_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_2120_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2096_, v_onError_2105_);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2119_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_2123_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2097_, v_onListen_2106_);
v___x_2124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
lean_inc_ref(v___f_2098_);
v___x_2126_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2098_, v_automaticCompression_2107_);
v___x_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2125_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_2129_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2099_, v_transport_2108_);
v___x_2130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2128_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
lean_inc_ref(v___f_2100_);
v___x_2132_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2100_, v_port_2109_);
v___x_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2131_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2135_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2101_, v_hostname_2110_);
v___x_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2134_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2138_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2098_, v_reusePort_2111_);
v___x_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2137_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2141_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2100_, v_tcpBacklog_2112_);
v___x_2142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2140_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_2144_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2102_, v_keyFormat_2113_);
v___x_2145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2143_);
lean_ctor_set(v___x_2145_, 1, v___x_2144_);
v___x_2146_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_2147_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2147_, 0, v_key_2114_);
v___x_2148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2146_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
v___x_2149_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_2150_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2150_, 0, v_cert_2115_);
v___x_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2149_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = lean_unsigned_to_nat(12u);
v___x_2153_ = lean_mk_empty_array_with_capacity(v___x_2152_);
v___x_2154_ = lean_array_push(v___x_2153_, v___x_2118_);
v___x_2155_ = lean_array_push(v___x_2154_, v___x_2121_);
v___x_2156_ = lean_array_push(v___x_2155_, v___x_2124_);
v___x_2157_ = lean_array_push(v___x_2156_, v___x_2127_);
v___x_2158_ = lean_array_push(v___x_2157_, v___x_2130_);
v___x_2159_ = lean_array_push(v___x_2158_, v___x_2133_);
v___x_2160_ = lean_array_push(v___x_2159_, v___x_2136_);
v___x_2161_ = lean_array_push(v___x_2160_, v___x_2139_);
v___x_2162_ = lean_array_push(v___x_2161_, v___x_2142_);
v___x_2163_ = lean_array_push(v___x_2162_, v___x_2145_);
v___x_2164_ = lean_array_push(v___x_2163_, v___x_2148_);
v___x_2165_ = lean_array_push(v___x_2164_, v___x_2151_);
v___x_2166_ = l_Lasm_JS_Web_Support_fields(v___x_2165_);
lean_dec_ref(v___x_2165_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___lam__0(lean_object* v_x_2176_){
_start:
{
if (lean_obj_tag(v_x_2176_) == 0)
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2186_; 
v_a_2178_ = lean_ctor_get(v_x_2176_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v_x_2176_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2180_ = v_x_2176_;
v_isShared_2181_ = v_isSharedCheck_2186_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v_x_2176_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2186_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2183_; 
if (v_isShared_2181_ == 0)
{
v___x_2183_ = v___x_2180_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2178_);
v___x_2183_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
lean_object* v___x_2184_; 
v___x_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
return v___x_2184_;
}
}
}
else
{
lean_object* v_a_2187_; lean_object* v___x_2188_; 
v_a_2187_ = lean_ctor_get(v_x_2176_, 0);
lean_inc(v_a_2187_);
lean_dec_ref_known(v_x_2176_, 1);
v___x_2188_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_2187_);
return v___x_2188_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___lam__0___boxed(lean_object* v_x_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Lasm_JS_Deno_HttpServer_finished___lam__0(v_x_2189_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished(lean_object* v_self_2194_){
_start:
{
lean_object* v___f_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; lean_object* v_val_2201_; lean_object* v___x_2204_; 
v___f_2196_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_2197_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__1));
v___x_2198_ = lean_unsigned_to_nat(0u);
v___x_2199_ = 0;
v___x_2204_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2194_, v___x_2197_);
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
v_a_2205_ = lean_ctor_get(v___x_2204_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2204_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2204_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
lean_ctor_set_tag(v___x_2207_, 1);
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
v_val_2201_ = v___x_2210_;
goto v___jp_2200_;
}
}
}
else
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
v_a_2213_ = lean_ctor_get(v___x_2204_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2215_ = v___x_2204_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___x_2204_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
lean_ctor_set_tag(v___x_2215_, 0);
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_a_2213_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
v_val_2201_ = v___x_2218_;
goto v___jp_2200_;
}
}
}
v___jp_2200_:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2202_, 0, v_val_2201_);
v___x_2203_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2198_, v___x_2199_, v___x_2202_, v___f_2196_);
return v___x_2203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_finished___boxed(lean_object* v_self_2221_, lean_object* v_a_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Lasm_JS_Deno_HttpServer_finished(v_self_2221_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr(lean_object* v_self_2225_){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_2228_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0(v_self_2225_, v___x_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_addr___boxed(lean_object* v_self_2229_, lean_object* v_a_2230_){
_start:
{
lean_object* v_res_2231_; 
v_res_2231_ = l_Lasm_JS_Deno_HttpServer_addr(v_self_2229_);
return v_res_2231_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2(void){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__1));
v___x_2236_ = l_Lasm_JS_Web_Support_args(v___x_2235_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref(lean_object* v_self_2237_){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2239_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_2240_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_2241_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2237_, v___x_2239_, v___x_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_ref___boxed(lean_object* v_self_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l_Lasm_JS_Deno_HttpServer_ref(v_self_2242_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref(lean_object* v_self_2246_){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2248_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_2249_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_2250_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2246_, v___x_2248_, v___x_2249_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_unref___boxed(lean_object* v_self_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lasm_JS_Deno_HttpServer_unref(v_self_2251_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown(lean_object* v_self_2255_){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2257_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_2258_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_2259_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2255_, v___x_2257_, v___x_2258_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServer_shutdown___boxed(lean_object* v_self_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lasm_JS_Deno_HttpServer_shutdown(v_self_2260_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(lean_object* v_self_2264_){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_2267_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_Conn_localAddr_spec__0(v_self_2264_, v___x_2266_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___boxed(lean_object* v_self_2268_, lean_object* v_a_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr(v_self_2268_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed(lean_object* v_self_2272_){
_start:
{
lean_object* v___f_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; lean_object* v_val_2279_; lean_object* v___x_2282_; 
v___f_2274_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_2275_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_2276_ = lean_unsigned_to_nat(0u);
v___x_2277_ = 0;
v___x_2282_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2272_, v___x_2275_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___x_2282_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2282_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
lean_ctor_set_tag(v___x_2285_, 1);
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
v_val_2279_ = v___x_2288_;
goto v___jp_2278_;
}
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
v_a_2291_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2282_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2282_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 0);
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
v_val_2279_ = v___x_2296_;
goto v___jp_2278_;
}
}
}
v___jp_2278_:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2280_, 0, v_val_2279_);
v___x_2281_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2276_, v___x_2277_, v___x_2280_, v___f_2274_);
return v___x_2281_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfo_completed___boxed(lean_object* v_self_2299_, lean_object* v_a_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lasm_JS_Deno_ServeHandlerInfo_completed(v_self_2299_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_finished(lean_object* v_self_2302_){
_start:
{
lean_object* v___f_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; uint8_t v___x_2307_; lean_object* v_val_2309_; lean_object* v___x_2312_; 
v___f_2304_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_2305_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__1));
v___x_2306_ = lean_unsigned_to_nat(0u);
v___x_2307_ = 0;
v___x_2312_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2302_, v___x_2305_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2312_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2312_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
lean_ctor_set_tag(v___x_2315_, 1);
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
v_val_2309_ = v___x_2318_;
goto v___jp_2308_;
}
}
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
v_a_2321_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2312_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v___x_2312_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
lean_ctor_set_tag(v___x_2323_, 0);
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2321_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
v_val_2309_ = v___x_2326_;
goto v___jp_2308_;
}
}
}
v___jp_2308_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2310_, 0, v_val_2309_);
v___x_2311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2306_, v___x_2307_, v___x_2310_, v___f_2304_);
return v___x_2311_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_finished___boxed(lean_object* v_self_2329_, lean_object* v_a_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l_Lasm_JS_Deno_HttpServerUnixAddr_finished(v_self_2329_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_addr(lean_object* v_self_2332_){
_start:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_addr___closed__0));
v___x_2335_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0(v_self_2332_, v___x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_addr___boxed(lean_object* v_self_2336_, lean_object* v_a_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lasm_JS_Deno_HttpServerUnixAddr_addr(v_self_2336_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_ref(lean_object* v_self_2339_){
_start:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2341_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_ref___closed__0));
v___x_2342_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_2343_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2339_, v___x_2341_, v___x_2342_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_ref___boxed(lean_object* v_self_2344_, lean_object* v_a_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lasm_JS_Deno_HttpServerUnixAddr_ref(v_self_2344_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_unref(lean_object* v_self_2347_){
_start:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2349_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_unref___closed__0));
v___x_2350_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_2351_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2347_, v___x_2349_, v___x_2350_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_unref___boxed(lean_object* v_self_2352_, lean_object* v_a_2353_){
_start:
{
lean_object* v_res_2354_; 
v_res_2354_ = l_Lasm_JS_Deno_HttpServerUnixAddr_unref(v_self_2352_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_shutdown(lean_object* v_self_2355_){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2357_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_shutdown___closed__0));
v___x_2358_ = lean_obj_once(&l_Lasm_JS_Deno_HttpServer_ref___closed__2, &l_Lasm_JS_Deno_HttpServer_ref___closed__2_once, _init_l_Lasm_JS_Deno_HttpServer_ref___closed__2);
v___x_2359_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2355_, v___x_2357_, v___x_2358_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpServerUnixAddr_shutdown___boxed(lean_object* v_self_2360_, lean_object* v_a_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = l_Lasm_JS_Deno_HttpServerUnixAddr_shutdown(v_self_2360_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_remoteAddr(lean_object* v_self_2363_){
_start:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_remoteAddr___closed__0));
v___x_2366_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_ConnUnixAddr_localAddr_spec__0(v_self_2363_, v___x_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_remoteAddr___boxed(lean_object* v_self_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_remoteAddr(v_self_2367_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_completed(lean_object* v_self_2370_){
_start:
{
lean_object* v___f_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; uint8_t v___x_2375_; lean_object* v_val_2377_; lean_object* v___x_2380_; 
v___f_2372_ = ((lean_object*)(l_Lasm_JS_Deno_HttpServer_finished___closed__0));
v___x_2373_ = ((lean_object*)(l_Lasm_JS_Deno_ServeHandlerInfo_completed___closed__0));
v___x_2374_ = lean_unsigned_to_nat(0u);
v___x_2375_ = 0;
v___x_2380_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2370_, v___x_2373_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2380_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2380_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
lean_ctor_set_tag(v___x_2383_, 1);
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
v_val_2377_ = v___x_2386_;
goto v___jp_2376_;
}
}
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2396_; 
v_a_2389_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2391_ = v___x_2380_;
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2380_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2394_; 
if (v_isShared_2392_ == 0)
{
lean_ctor_set_tag(v___x_2391_, 0);
v___x_2394_ = v___x_2391_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_a_2389_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
v_val_2377_ = v___x_2394_;
goto v___jp_2376_;
}
}
}
v___jp_2376_:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2378_, 0, v_val_2377_);
v___x_2379_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2374_, v___x_2375_, v___x_2378_, v___f_2372_);
return v___x_2379_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_completed___boxed(lean_object* v_self_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_Lasm_JS_Deno_ServeHandlerInfoUnixAddr_completed(v_self_2397_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve(lean_object* v_handler_2409_){
_start:
{
uint8_t v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2411_ = 0;
v___x_2412_ = lean_unsigned_to_nat(1u);
v___x_2413_ = ((lean_object*)(l_Lasm_JS_Deno_serve___closed__3));
v___x_2414_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_2415_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2415_, 0, v_handler_2409_);
lean_ctor_set(v___x_2415_, 1, v___x_2414_);
v___x_2416_ = lean_mk_empty_array_with_capacity(v___x_2412_);
v___x_2417_ = lean_array_push(v___x_2416_, v___x_2415_);
v___x_2418_ = l_Lasm_JS_Web_Support_args(v___x_2417_);
v___x_2419_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2413_, v___x_2418_, v___x_2411_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2419_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2419_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2420_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
else
{
lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2435_; 
v_a_2428_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2430_ = v___x_2419_;
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v___x_2419_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
if (v_isShared_2431_ == 0)
{
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2428_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serve___boxed(lean_object* v_handler_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Lasm_JS_Deno_serve(v_handler_2436_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0(lean_object* v_x_2439_){
_start:
{
if (lean_obj_tag(v_x_2439_) == 0)
{
lean_object* v___x_2440_; 
v___x_2440_ = lean_box(0);
return v___x_2440_;
}
else
{
lean_object* v_val_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v_val_2441_ = lean_ctor_get(v_x_2439_, 0);
v___x_2442_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_2441_);
v___x_2443_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2443_, 0, v_val_2441_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
return v___x_2443_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0___boxed(lean_object* v_x_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0(v_x_2444_);
lean_dec(v_x_2444_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1(lean_object* v_x_2446_){
_start:
{
if (lean_obj_tag(v_x_2446_) == 0)
{
lean_object* v___x_2447_; 
v___x_2447_ = lean_box(0);
return v___x_2447_;
}
else
{
lean_object* v_val_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v_val_2448_ = lean_ctor_get(v_x_2446_, 0);
v___x_2449_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_2448_);
v___x_2450_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2450_, 0, v_val_2448_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
return v___x_2450_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1___boxed(lean_object* v_x_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1(v_x_2451_);
lean_dec(v_x_2451_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2(lean_object* v_x_2453_){
_start:
{
if (lean_obj_tag(v_x_2453_) == 0)
{
lean_object* v___x_2454_; 
v___x_2454_ = lean_box(0);
return v___x_2454_;
}
else
{
lean_object* v___x_2455_; 
v___x_2455_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptionsTransport___lam__0___closed__1));
return v___x_2455_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2___boxed(lean_object* v_x_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2(v_x_2456_);
lean_dec(v_x_2456_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithUnixOptions(lean_object* v_options_2465_, lean_object* v_handler_2466_){
_start:
{
lean_object* v_signal_2468_; lean_object* v_onError_2469_; lean_object* v_onListen_2470_; lean_object* v_automaticCompression_2471_; lean_object* v_transport_2472_; lean_object* v_path_2473_; uint8_t v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v_signal_2468_ = lean_ctor_get(v_options_2465_, 0);
v_onError_2469_ = lean_ctor_get(v_options_2465_, 1);
v_onListen_2470_ = lean_ctor_get(v_options_2465_, 2);
v_automaticCompression_2471_ = lean_ctor_get(v_options_2465_, 3);
v_transport_2472_ = lean_ctor_get(v_options_2465_, 4);
v_path_2473_ = lean_ctor_get(v_options_2465_, 5);
v___x_2474_ = 0;
v___x_2475_ = lean_unsigned_to_nat(2u);
v___x_2476_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithUnixOptions___closed__1));
v___x_2477_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_2478_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2468_);
v___x_2479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2477_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
v___x_2480_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_2481_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__0(v_onError_2469_);
v___x_2482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_2484_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__1(v_onListen_2470_);
v___x_2485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2483_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
v___x_2486_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_2487_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_2471_);
v___x_2488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2486_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
v___x_2489_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_2490_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithUnixOptions_spec__2(v_transport_2472_);
v___x_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2489_);
lean_ctor_set(v___x_2491_, 1, v___x_2490_);
v___x_2492_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__5));
lean_inc_ref(v_path_2473_);
v___x_2493_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2493_, 0, v_path_2473_);
v___x_2494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2492_);
lean_ctor_set(v___x_2494_, 1, v___x_2493_);
v___x_2495_ = lean_unsigned_to_nat(6u);
v___x_2496_ = lean_mk_empty_array_with_capacity(v___x_2495_);
v___x_2497_ = lean_array_push(v___x_2496_, v___x_2479_);
v___x_2498_ = lean_array_push(v___x_2497_, v___x_2482_);
v___x_2499_ = lean_array_push(v___x_2498_, v___x_2485_);
v___x_2500_ = lean_array_push(v___x_2499_, v___x_2488_);
v___x_2501_ = lean_array_push(v___x_2500_, v___x_2491_);
v___x_2502_ = lean_array_push(v___x_2501_, v___x_2494_);
v___x_2503_ = l_Lasm_JS_Web_Support_fields(v___x_2502_);
lean_dec_ref(v___x_2502_);
v___x_2504_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_2505_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2505_, 0, v_handler_2466_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
v___x_2506_ = lean_mk_empty_array_with_capacity(v___x_2475_);
v___x_2507_ = lean_array_push(v___x_2506_, v___x_2503_);
v___x_2508_ = lean_array_push(v___x_2507_, v___x_2505_);
v___x_2509_ = l_Lasm_JS_Web_Support_args(v___x_2508_);
v___x_2510_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2476_, v___x_2509_, v___x_2474_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2513_ = v___x_2510_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2510_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
else
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2526_; 
v_a_2519_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2521_ = v___x_2510_;
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2510_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_a_2519_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithUnixOptions___boxed(lean_object* v_options_2527_, lean_object* v_handler_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Lasm_JS_Deno_serveWithUnixOptions(v_options_2527_, v_handler_2528_);
lean_dec_ref(v_options_2527_);
return v_res_2530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(lean_object* v_x_2531_){
_start:
{
if (lean_obj_tag(v_x_2531_) == 0)
{
lean_object* v___x_2532_; 
v___x_2532_ = lean_box(0);
return v___x_2532_;
}
else
{
lean_object* v_val_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v_val_2533_ = lean_ctor_get(v_x_2531_, 0);
v___x_2534_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_2533_);
v___x_2535_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2535_, 0, v_val_2533_);
lean_ctor_set(v___x_2535_, 1, v___x_2534_);
return v___x_2535_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0___boxed(lean_object* v_x_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_x_2536_);
lean_dec(v_x_2536_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(lean_object* v_x_2538_){
_start:
{
if (lean_obj_tag(v_x_2538_) == 0)
{
lean_object* v___x_2539_; 
v___x_2539_ = lean_box(0);
return v___x_2539_;
}
else
{
lean_object* v_val_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v_val_2540_ = lean_ctor_get(v_x_2538_, 0);
v___x_2541_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
lean_inc(v_val_2540_);
v___x_2542_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2542_, 0, v_val_2540_);
lean_ctor_set(v___x_2542_, 1, v___x_2541_);
return v___x_2542_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1___boxed(lean_object* v_x_2543_){
_start:
{
lean_object* v_res_2544_; 
v_res_2544_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_x_2543_);
lean_dec(v_x_2543_);
return v_res_2544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(lean_object* v_x_2545_){
_start:
{
if (lean_obj_tag(v_x_2545_) == 0)
{
lean_object* v___x_2546_; 
v___x_2546_ = lean_box(0);
return v___x_2546_;
}
else
{
lean_object* v___x_2547_; 
v___x_2547_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport___lam__0___closed__1));
return v___x_2547_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2___boxed(lean_object* v_x_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_x_2548_);
lean_dec(v_x_2548_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions(lean_object* v_options_2557_, lean_object* v_handler_2558_){
_start:
{
lean_object* v_signal_2560_; lean_object* v_onError_2561_; lean_object* v_onListen_2562_; lean_object* v_automaticCompression_2563_; lean_object* v_transport_2564_; lean_object* v_port_2565_; lean_object* v_hostname_2566_; lean_object* v_reusePort_2567_; lean_object* v_tcpBacklog_2568_; uint8_t v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v_signal_2560_ = lean_ctor_get(v_options_2557_, 0);
lean_inc(v_signal_2560_);
v_onError_2561_ = lean_ctor_get(v_options_2557_, 1);
lean_inc(v_onError_2561_);
v_onListen_2562_ = lean_ctor_get(v_options_2557_, 2);
lean_inc(v_onListen_2562_);
v_automaticCompression_2563_ = lean_ctor_get(v_options_2557_, 3);
lean_inc(v_automaticCompression_2563_);
v_transport_2564_ = lean_ctor_get(v_options_2557_, 4);
lean_inc(v_transport_2564_);
v_port_2565_ = lean_ctor_get(v_options_2557_, 5);
lean_inc(v_port_2565_);
v_hostname_2566_ = lean_ctor_get(v_options_2557_, 6);
lean_inc(v_hostname_2566_);
v_reusePort_2567_ = lean_ctor_get(v_options_2557_, 7);
lean_inc(v_reusePort_2567_);
v_tcpBacklog_2568_ = lean_ctor_get(v_options_2557_, 8);
lean_inc(v_tcpBacklog_2568_);
lean_dec_ref(v_options_2557_);
v___x_2569_ = 0;
v___x_2570_ = lean_unsigned_to_nat(2u);
v___x_2571_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithOptions___closed__1));
v___x_2572_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_2573_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2560_);
lean_dec(v_signal_2560_);
v___x_2574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2572_);
lean_ctor_set(v___x_2574_, 1, v___x_2573_);
v___x_2575_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_2576_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_2561_);
lean_dec(v_onError_2561_);
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2575_);
lean_ctor_set(v___x_2577_, 1, v___x_2576_);
v___x_2578_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_2579_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_2562_);
lean_dec(v_onListen_2562_);
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2578_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_2582_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_2563_);
lean_dec(v_automaticCompression_2563_);
v___x_2583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2581_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_2585_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_2564_);
lean_dec(v_transport_2564_);
v___x_2586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2584_);
lean_ctor_set(v___x_2586_, 1, v___x_2585_);
v___x_2587_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_2588_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_2565_);
v___x_2589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2587_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2591_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2566_);
v___x_2592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2590_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
v___x_2593_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2594_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2567_);
lean_dec(v_reusePort_2567_);
v___x_2595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2593_);
lean_ctor_set(v___x_2595_, 1, v___x_2594_);
v___x_2596_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2597_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_2568_);
v___x_2598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2596_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = lean_unsigned_to_nat(9u);
v___x_2600_ = lean_mk_empty_array_with_capacity(v___x_2599_);
v___x_2601_ = lean_array_push(v___x_2600_, v___x_2574_);
v___x_2602_ = lean_array_push(v___x_2601_, v___x_2577_);
v___x_2603_ = lean_array_push(v___x_2602_, v___x_2580_);
v___x_2604_ = lean_array_push(v___x_2603_, v___x_2583_);
v___x_2605_ = lean_array_push(v___x_2604_, v___x_2586_);
v___x_2606_ = lean_array_push(v___x_2605_, v___x_2589_);
v___x_2607_ = lean_array_push(v___x_2606_, v___x_2592_);
v___x_2608_ = lean_array_push(v___x_2607_, v___x_2595_);
v___x_2609_ = lean_array_push(v___x_2608_, v___x_2598_);
v___x_2610_ = l_Lasm_JS_Web_Support_fields(v___x_2609_);
lean_dec_ref(v___x_2609_);
v___x_2611_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_2612_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2612_, 0, v_handler_2558_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_mk_empty_array_with_capacity(v___x_2570_);
v___x_2614_ = lean_array_push(v___x_2613_, v___x_2610_);
v___x_2615_ = lean_array_push(v___x_2614_, v___x_2612_);
v___x_2616_ = l_Lasm_JS_Web_Support_args(v___x_2615_);
v___x_2617_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2571_, v___x_2616_, v___x_2569_);
if (lean_obj_tag(v___x_2617_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2625_; 
v_a_2618_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2620_ = v___x_2617_;
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_dec(v___x_2617_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2618_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
v_a_2626_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2617_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2617_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithOptions___boxed(lean_object* v_options_2634_, lean_object* v_handler_2635_, lean_object* v_a_2636_){
_start:
{
lean_object* v_res_2637_; 
v_res_2637_ = l_Lasm_JS_Deno_serveWithOptions(v_options_2634_, v_handler_2635_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(lean_object* v_x_2638_){
_start:
{
if (lean_obj_tag(v_x_2638_) == 0)
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_box(0);
return v___x_2639_;
}
else
{
lean_object* v___x_2640_; 
v___x_2640_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptionsKeyFormat___lam__0___closed__1));
return v___x_2640_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0___boxed(lean_object* v_x_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_x_2641_);
lean_dec(v_x_2641_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions(lean_object* v_tlsOptions_2650_, lean_object* v_handler_2651_){
_start:
{
lean_object* v_signal_2653_; lean_object* v_onError_2654_; lean_object* v_onListen_2655_; lean_object* v_automaticCompression_2656_; lean_object* v_transport_2657_; lean_object* v_port_2658_; lean_object* v_hostname_2659_; lean_object* v_reusePort_2660_; lean_object* v_tcpBacklog_2661_; lean_object* v_keyFormat_2662_; lean_object* v_key_2663_; lean_object* v_cert_2664_; uint8_t v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v_signal_2653_ = lean_ctor_get(v_tlsOptions_2650_, 0);
lean_inc(v_signal_2653_);
v_onError_2654_ = lean_ctor_get(v_tlsOptions_2650_, 1);
lean_inc(v_onError_2654_);
v_onListen_2655_ = lean_ctor_get(v_tlsOptions_2650_, 2);
lean_inc(v_onListen_2655_);
v_automaticCompression_2656_ = lean_ctor_get(v_tlsOptions_2650_, 3);
lean_inc(v_automaticCompression_2656_);
v_transport_2657_ = lean_ctor_get(v_tlsOptions_2650_, 4);
lean_inc(v_transport_2657_);
v_port_2658_ = lean_ctor_get(v_tlsOptions_2650_, 5);
lean_inc(v_port_2658_);
v_hostname_2659_ = lean_ctor_get(v_tlsOptions_2650_, 6);
lean_inc(v_hostname_2659_);
v_reusePort_2660_ = lean_ctor_get(v_tlsOptions_2650_, 7);
lean_inc(v_reusePort_2660_);
v_tcpBacklog_2661_ = lean_ctor_get(v_tlsOptions_2650_, 8);
lean_inc(v_tcpBacklog_2661_);
v_keyFormat_2662_ = lean_ctor_get(v_tlsOptions_2650_, 9);
lean_inc(v_keyFormat_2662_);
v_key_2663_ = lean_ctor_get(v_tlsOptions_2650_, 10);
lean_inc_ref(v_key_2663_);
v_cert_2664_ = lean_ctor_get(v_tlsOptions_2650_, 11);
lean_inc_ref(v_cert_2664_);
lean_dec_ref(v_tlsOptions_2650_);
v___x_2665_ = 0;
v___x_2666_ = lean_unsigned_to_nat(2u);
v___x_2667_ = ((lean_object*)(l_Lasm_JS_Deno_serveWithTlsOptions___closed__1));
v___x_2668_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__0));
v___x_2669_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2653_);
lean_dec(v_signal_2653_);
v___x_2670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__1));
v___x_2672_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__0(v_onError_2654_);
lean_dec(v_onError_2654_);
v___x_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2671_);
lean_ctor_set(v___x_2673_, 1, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__2));
v___x_2675_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__1(v_onListen_2655_);
lean_dec(v_onListen_2655_);
v___x_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2674_);
lean_ctor_set(v___x_2676_, 1, v___x_2675_);
v___x_2677_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__3));
v___x_2678_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_automaticCompression_2656_);
lean_dec(v_automaticCompression_2656_);
v___x_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2677_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeUnixOptions___lam__0___closed__4));
v___x_2681_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithOptions_spec__2(v_transport_2657_);
lean_dec(v_transport_2657_);
v___x_2682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2680_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
v___x_2683_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__0));
v___x_2684_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_port_2658_);
v___x_2685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2683_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__1));
v___x_2687_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2659_);
v___x_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2686_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__2));
v___x_2690_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2660_);
lean_dec(v_reusePort_2660_);
v___x_2691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2689_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0___closed__3));
v___x_2693_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_tcpBacklog_2661_);
v___x_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2692_);
lean_ctor_set(v___x_2694_, 1, v___x_2693_);
v___x_2695_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__0));
v___x_2696_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_serveWithTlsOptions_spec__0(v_keyFormat_2662_);
lean_dec(v_keyFormat_2662_);
v___x_2697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__1));
v___x_2699_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2699_, 0, v_key_2663_);
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2698_);
lean_ctor_set(v___x_2700_, 1, v___x_2699_);
v___x_2701_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0___closed__2));
v___x_2702_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2702_, 0, v_cert_2664_);
v___x_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = lean_unsigned_to_nat(12u);
v___x_2705_ = lean_mk_empty_array_with_capacity(v___x_2704_);
v___x_2706_ = lean_array_push(v___x_2705_, v___x_2670_);
v___x_2707_ = lean_array_push(v___x_2706_, v___x_2673_);
v___x_2708_ = lean_array_push(v___x_2707_, v___x_2676_);
v___x_2709_ = lean_array_push(v___x_2708_, v___x_2679_);
v___x_2710_ = lean_array_push(v___x_2709_, v___x_2682_);
v___x_2711_ = lean_array_push(v___x_2710_, v___x_2685_);
v___x_2712_ = lean_array_push(v___x_2711_, v___x_2688_);
v___x_2713_ = lean_array_push(v___x_2712_, v___x_2691_);
v___x_2714_ = lean_array_push(v___x_2713_, v___x_2694_);
v___x_2715_ = lean_array_push(v___x_2714_, v___x_2697_);
v___x_2716_ = lean_array_push(v___x_2715_, v___x_2700_);
v___x_2717_ = lean_array_push(v___x_2716_, v___x_2703_);
v___x_2718_ = l_Lasm_JS_Web_Support_fields(v___x_2717_);
lean_dec_ref(v___x_2717_);
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpServer___lam__0___closed__0));
v___x_2720_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2720_, 0, v_handler_2651_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
v___x_2721_ = lean_mk_empty_array_with_capacity(v___x_2666_);
v___x_2722_ = lean_array_push(v___x_2721_, v___x_2718_);
v___x_2723_ = lean_array_push(v___x_2722_, v___x_2720_);
v___x_2724_ = l_Lasm_JS_Web_Support_args(v___x_2723_);
v___x_2725_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2667_, v___x_2724_, v___x_2665_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2725_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2725_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
v_a_2734_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2725_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2725_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_serveWithTlsOptions___boxed(lean_object* v_tlsOptions_2742_, lean_object* v_handler_2743_, lean_object* v_a_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lasm_JS_Deno_serveWithTlsOptions(v_tlsOptions_2742_, v_handler_2743_);
return v_res_2745_;
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
