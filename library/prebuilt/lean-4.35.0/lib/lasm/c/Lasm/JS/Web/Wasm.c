// Lean compiler output
// Module: Lasm.JS.Web.Wasm
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Fetch
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
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_global();
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object*);
lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lasm_JS_Web_instToJSModule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSModule___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSModule___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSModule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSModule___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSModule = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSModule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSModule___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSModule___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModule___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModule___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModule___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSModule___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSModule___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSModule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.WebAssembly.Module"};
static const lean_object* l_Lasm_JS_Web_instFromJSModule___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSModule___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSModule = (const lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSInstance = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Web.WebAssembly.Instance"};
static const lean_object* l_Lasm_JS_Web_instFromJSInstance___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSInstance___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSInstance___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSInstance___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSInstance = (const lean_object*)&l_Lasm_JS_Web_instFromJSInstance___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSMemory = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSMemory___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.WebAssembly.Memory"};
static const lean_object* l_Lasm_JS_Web_instFromJSMemory___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSMemory___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSMemory___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSMemory___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSMemory___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSMemory___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSMemory = (const lean_object*)&l_Lasm_JS_Web_instFromJSMemory___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTable = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.WebAssembly.Table"};
static const lean_object* l_Lasm_JS_Web_instFromJSTable___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTable___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTable___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTable___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTable = (const lean_object*)&l_Lasm_JS_Web_instFromJSTable___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSGlobal = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSGlobal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.WebAssembly.Global"};
static const lean_object* l_Lasm_JS_Web_instFromJSGlobal___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSGlobal___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSGlobal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSGlobal___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSGlobal___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSGlobal___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSGlobal = (const lean_object*)&l_Lasm_JS_Web_instFromJSGlobal___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTag = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.WebAssembly.Tag"};
static const lean_object* l_Lasm_JS_Web_instFromJSTag___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTag___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTag___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTag___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTag = (const lean_object*)&l_Lasm_JS_Web_instFromJSTag___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSException = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSException___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Web.WebAssembly.Exception"};
static const lean_object* l_Lasm_JS_Web_instFromJSException___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSException___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSException___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSException___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSException___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSException___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSException = (const lean_object*)&l_Lasm_JS_Web_instFromJSException___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCompileError = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCompileError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.WebAssembly.CompileError"};
static const lean_object* l_Lasm_JS_Web_instFromJSCompileError___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompileError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompileError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCompileError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompileError___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompileError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCompileError = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompileError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSLinkError = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSLinkError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Web.WebAssembly.LinkError"};
static const lean_object* l_Lasm_JS_Web_instFromJSLinkError___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSLinkError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSLinkError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSLinkError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSLinkError___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSLinkError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSLinkError = (const lean_object*)&l_Lasm_JS_Web_instFromJSLinkError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRuntimeError = (const lean_object*)&l_Lasm_JS_Web_instToJSModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSRuntimeError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.WebAssembly.RuntimeError"};
static const lean_object* l_Lasm_JS_Web_instFromJSRuntimeError___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRuntimeError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSRuntimeError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSRuntimeError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSRuntimeError___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRuntimeError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSRuntimeError = (const lean_object*)&l_Lasm_JS_Web_instFromJSRuntimeError___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqImportExportKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqImportExportKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqImportExportKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqImportExportKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqImportExportKind___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqImportExportKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqImportExportKind = (const lean_object*)&l_Lasm_JS_Web_instBEqImportExportKind___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.ImportExportKind.function"};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.ImportExportKind.table"};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Web.ImportExportKind.memory"};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Web.ImportExportKind.global"};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Web.ImportExportKind.tag"};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprImportExportKind_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__9_value;
static lean_once_cell_t l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10;
static lean_once_cell_t l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprImportExportKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprImportExportKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprImportExportKind___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprImportExportKind = (const lean_object*)&l_Lasm_JS_Web_instReprImportExportKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedImportExportKind_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedImportExportKind;
static const lean_string_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "function"};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "table"};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "memory"};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tag"};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSImportExportKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSImportExportKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSImportExportKind___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSImportExportKind = (const lean_object*)&l_Lasm_JS_Web_instToJSImportExportKind___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSImportExportKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSImportExportKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.ImportExportKind"};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSImportExportKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSImportExportKind = (const lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqAddressType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqAddressType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqAddressType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqAddressType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqAddressType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqAddressType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqAddressType = (const lean_object*)&l_Lasm_JS_Web_instBEqAddressType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprAddressType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.AddressType.i32"};
static const lean_object* l_Lasm_JS_Web_instReprAddressType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprAddressType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprAddressType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprAddressType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprAddressType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprAddressType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprAddressType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.AddressType.i64"};
static const lean_object* l_Lasm_JS_Web_instReprAddressType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprAddressType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprAddressType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprAddressType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprAddressType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprAddressType_repr___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprAddressType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprAddressType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprAddressType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprAddressType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprAddressType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprAddressType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprAddressType = (const lean_object*)&l_Lasm_JS_Web_instReprAddressType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedAddressType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedAddressType;
static const lean_string_object l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "i32"};
static const lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "i64"};
static const lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAddressType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAddressType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAddressType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddressType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAddressType = (const lean_object*)&l_Lasm_JS_Web_instToJSAddressType___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSAddressType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSAddressType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSAddressType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSAddressType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.AddressType"};
static const lean_object* l_Lasm_JS_Web_instFromJSAddressType___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSAddressType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSAddressType___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSAddressType = (const lean_object*)&l_Lasm_JS_Web_instFromJSAddressType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqTableKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqTableKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqTableKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqTableKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqTableKind___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqTableKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqTableKind = (const lean_object*)&l_Lasm_JS_Web_instBEqTableKind___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprTableKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.TableKind.externref"};
static const lean_object* l_Lasm_JS_Web_instReprTableKind_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprTableKind_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprTableKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprTableKind_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprTableKind_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprTableKind_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprTableKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.TableKind.anyfunc"};
static const lean_object* l_Lasm_JS_Web_instReprTableKind_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprTableKind_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprTableKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprTableKind_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprTableKind_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprTableKind_repr___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprTableKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprTableKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprTableKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprTableKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprTableKind___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprTableKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprTableKind = (const lean_object*)&l_Lasm_JS_Web_instReprTableKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedTableKind_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedTableKind;
static const lean_string_object l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "externref"};
static const lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "anyfunc"};
static const lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTableKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTableKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTableKind___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTableKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTableKind = (const lean_object*)&l_Lasm_JS_Web_instToJSTableKind___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSTableKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSTableKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSTableKind___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTableKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Web.TableKind"};
static const lean_object* l_Lasm_JS_Web_instFromJSTableKind___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTableKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTableKind___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTableKind = (const lean_object*)&l_Lasm_JS_Web_instFromJSTableKind___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqValueType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqValueType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqValueType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqValueType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqValueType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqValueType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqValueType = (const lean_object*)&l_Lasm_JS_Web_instBEqValueType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprValueType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.ValueType.i32"};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprValueType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprValueType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.ValueType.i64"};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprValueType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instReprValueType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.ValueType.f32"};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprValueType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instReprValueType_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.ValueType.f64"};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprValueType_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instReprValueType_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.ValueType.v128"};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprValueType_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instReprValueType_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.ValueType.externref"};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprValueType_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Web_instReprValueType_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.ValueType.anyfunc"};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprValueType_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Web_instReprValueType_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType_repr___closed__13_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprValueType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprValueType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprValueType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprValueType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprValueType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprValueType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprValueType = (const lean_object*)&l_Lasm_JS_Web_instReprValueType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedValueType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedValueType;
static const lean_string_object l_Lasm_JS_Web_instToJSValueType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "f32"};
static const lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSValueType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "f64"};
static const lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSValueType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "v128"};
static const lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSValueType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSValueType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSValueType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSValueType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSValueType = (const lean_object*)&l_Lasm_JS_Web_instToJSValueType___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSValueType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSValueType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSValueType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Web.ValueType"};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSValueType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSValueType___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSValueType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSValueType___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSValueType = (const lean_object*)&l_Lasm_JS_Web_instFromJSValueType___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "importedStringConstants"};
static const lean_object* l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "builtins"};
static const lean_object* l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__1;
static lean_once_cell_t l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions;
static const lean_string_object l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__0;
static const lean_string_object l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.ModuleExportDescriptor"};
static const lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor;
static const lean_string_object l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__0;
static const lean_string_object l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.ModuleImportDescriptor"};
static const lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor;
static const lean_string_object l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "initial"};
static const lean_object* l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "maximum"};
static const lean_object* l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "address"};
static const lean_object* l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSMemoryDescriptor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAddressType___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSMemoryDescriptor___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSMemoryDescriptor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSMemoryDescriptor = (const lean_object*)&l_Lasm_JS_Web_instToJSMemoryDescriptor___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSTableDescriptor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "element"};
static const lean_object* l_Lasm_JS_Web_instToJSTableDescriptor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTableDescriptor___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTableDescriptor___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTableDescriptor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTableDescriptor___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAddressType___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSTableDescriptor___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTableDescriptor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTableDescriptor = (const lean_object*)&l_Lasm_JS_Web_instToJSTableDescriptor___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mutable"};
static const lean_object* l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSGlobalDescriptor = (const lean_object*)&l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "parameters"};
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__6_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__5_value),((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSTagType___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__9_value),((lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__7_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___lam__1___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTagType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTagType___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSValueType___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSTagType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTagType = (const lean_object*)&l_Lasm_JS_Web_instToJSTagType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSExceptionOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "traceStack"};
static const lean_object* l_Lasm_JS_Web_instToJSExceptionOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSExceptionOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSExceptionOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSExceptionOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSExceptionOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSGlobalDescriptor___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSExceptionOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSExceptionOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSExceptionOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSExceptionOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSModule___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instFromJSInstance___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Web.WebAssemblyInstantiatedSource"};
static const lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.WebAssembly.Module.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "WebAssembly.Module"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Module_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_new___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__6_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__6_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__6_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Array (Lasm.JS.Web.ModuleExportDescriptor)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "an element is not Lasm.JS.Web.ModuleExportDescriptor"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_exports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Web.WebAssembly.Module.exports"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_exports___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_exports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "WebAssembly.Module.exports"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_exports___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Module_exports___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_exports___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_exports___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_exports___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Array (Lasm.JS.Web.ModuleImportDescriptor)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "an element is not Lasm.JS.Web.ModuleImportDescriptor"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_imports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Web.WebAssembly.Module.imports"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_imports___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_imports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "WebAssembly.Module.imports"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_imports___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Module_imports___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_imports___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_imports___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_imports___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSModule___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Array (Lasm.JS.Value)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "an element is not Lasm.JS.Value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lasm.JS.Web.WebAssembly.Module.customSections"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "WebAssembly.Module.customSections"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Instance_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.WebAssembly.Instance.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Instance_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "WebAssembly.Instance"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Instance_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Instance_exports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "exports"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_exports___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Memory_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.WebAssembly.Memory.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Memory_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "WebAssembly.Memory"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Memory_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Memory_buffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "buffer"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_buffer___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "grow"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "toFixedLengthBuffer"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__0_value;
static const lean_array_object l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "toResizableBuffer"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Table_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Web.WebAssembly.Table.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Table_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "WebAssembly.Table"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Table_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_new___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Table_length___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_length___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_length___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_length(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_length___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_grow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_grow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Table_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_get___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_get___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_get___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Table_set___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_set___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_set___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Global_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.WebAssembly.Global.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Global_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Global_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "WebAssembly.Global"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Global_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Global_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Global_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_value(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_value___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_setValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_setValue___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Global_valueOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "valueOf"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_valueOf___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Tag_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.WebAssembly.Tag.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Tag_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "WebAssembly.Tag"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Tag_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Exception_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.WebAssembly.Exception.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Exception_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "WebAssembly.Exception"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Exception_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_new___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Exception_stack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stack"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_stack___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Exception_getArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "getArg"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_getArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Exception_is___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "is"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_is___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.WebAssembly.CompileError.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "WebAssembly.CompileError"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_name(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_name___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.WebAssembly.LinkError.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "WebAssembly.LinkError"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_name(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_name___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_message(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_message___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.WebAssembly.RuntimeError.new"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "WebAssembly.RuntimeError"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_name(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_name___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_message(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_message___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web: empty global path"};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_JSTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "WebAssembly"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_JSTag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "JSTag"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_JSTag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_JSTag___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_JSTag();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_validate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Web.WebAssembly.validate"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_validate___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_validate___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_validate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "WebAssembly.validate"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_validate___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_validate___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_validate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_validate___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_validate___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_validate___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_validate___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_validate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_validate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_compile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_compile___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_compile___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_compile___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_compile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.WebAssembly.compile"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_compile___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_compile___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_compile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "WebAssembly.compile"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_compile___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_compile___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_compile___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_compile___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_compile___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_compile___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_compile___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__6_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_instantiate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Web.WebAssembly.instantiate"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_instantiate___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiate___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_instantiate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "WebAssembly.instantiate"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_instantiate___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiate___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_instantiate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiate___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiate___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_instantiate___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiate___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiate___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Lasm.JS.Web.WebAssembly.instantiateWithModuleObject"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiate___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.WebAssembly.compileStreaming"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "WebAssembly.compileStreaming"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Web.WebAssembly.instantiateStreaming"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "WebAssembly.instantiateStreaming"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSModule___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModule___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModule___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModule___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSModule___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorIdx(uint8_t v_x_85_){
_start:
{
switch(v_x_85_)
{
case 0:
{
lean_object* v___x_86_; 
v___x_86_ = lean_unsigned_to_nat(0u);
return v___x_86_;
}
case 1:
{
lean_object* v___x_87_; 
v___x_87_ = lean_unsigned_to_nat(1u);
return v___x_87_;
}
case 2:
{
lean_object* v___x_88_; 
v___x_88_ = lean_unsigned_to_nat(2u);
return v___x_88_;
}
case 3:
{
lean_object* v___x_89_; 
v___x_89_ = lean_unsigned_to_nat(3u);
return v___x_89_;
}
default: 
{
lean_object* v___x_90_; 
v___x_90_ = lean_unsigned_to_nat(4u);
return v___x_90_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorIdx___boxed(lean_object* v_x_91_){
_start:
{
uint8_t v_x_boxed_92_; lean_object* v_res_93_; 
v_x_boxed_92_ = lean_unbox(v_x_91_);
v_res_93_ = l_Lasm_JS_Web_ImportExportKind_ctorIdx(v_x_boxed_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___redArg(lean_object* v_k_94_){
_start:
{
lean_inc(v_k_94_);
return v_k_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___redArg___boxed(lean_object* v_k_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lasm_JS_Web_ImportExportKind_ctorElim___redArg(v_k_95_);
lean_dec(v_k_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim(lean_object* v_motive_97_, lean_object* v_ctorIdx_98_, uint8_t v_t_99_, lean_object* v_h_100_, lean_object* v_k_101_){
_start:
{
lean_inc(v_k_101_);
return v_k_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___boxed(lean_object* v_motive_102_, lean_object* v_ctorIdx_103_, lean_object* v_t_104_, lean_object* v_h_105_, lean_object* v_k_106_){
_start:
{
uint8_t v_t_boxed_107_; lean_object* v_res_108_; 
v_t_boxed_107_ = lean_unbox(v_t_104_);
v_res_108_ = l_Lasm_JS_Web_ImportExportKind_ctorElim(v_motive_102_, v_ctorIdx_103_, v_t_boxed_107_, v_h_105_, v_k_106_);
lean_dec(v_k_106_);
lean_dec(v_ctorIdx_103_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___redArg(lean_object* v_function_109_){
_start:
{
lean_inc(v_function_109_);
return v_function_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___redArg___boxed(lean_object* v_function_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lasm_JS_Web_ImportExportKind_function_elim___redArg(v_function_110_);
lean_dec(v_function_110_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim(lean_object* v_motive_112_, uint8_t v_t_113_, lean_object* v_h_114_, lean_object* v_function_115_){
_start:
{
lean_inc(v_function_115_);
return v_function_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___boxed(lean_object* v_motive_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_function_119_){
_start:
{
uint8_t v_t_boxed_120_; lean_object* v_res_121_; 
v_t_boxed_120_ = lean_unbox(v_t_117_);
v_res_121_ = l_Lasm_JS_Web_ImportExportKind_function_elim(v_motive_116_, v_t_boxed_120_, v_h_118_, v_function_119_);
lean_dec(v_function_119_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___redArg(lean_object* v_table_122_){
_start:
{
lean_inc(v_table_122_);
return v_table_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___redArg___boxed(lean_object* v_table_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lasm_JS_Web_ImportExportKind_table_elim___redArg(v_table_123_);
lean_dec(v_table_123_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim(lean_object* v_motive_125_, uint8_t v_t_126_, lean_object* v_h_127_, lean_object* v_table_128_){
_start:
{
lean_inc(v_table_128_);
return v_table_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___boxed(lean_object* v_motive_129_, lean_object* v_t_130_, lean_object* v_h_131_, lean_object* v_table_132_){
_start:
{
uint8_t v_t_boxed_133_; lean_object* v_res_134_; 
v_t_boxed_133_ = lean_unbox(v_t_130_);
v_res_134_ = l_Lasm_JS_Web_ImportExportKind_table_elim(v_motive_129_, v_t_boxed_133_, v_h_131_, v_table_132_);
lean_dec(v_table_132_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___redArg(lean_object* v_memory_135_){
_start:
{
lean_inc(v_memory_135_);
return v_memory_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___redArg___boxed(lean_object* v_memory_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lasm_JS_Web_ImportExportKind_memory_elim___redArg(v_memory_136_);
lean_dec(v_memory_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim(lean_object* v_motive_138_, uint8_t v_t_139_, lean_object* v_h_140_, lean_object* v_memory_141_){
_start:
{
lean_inc(v_memory_141_);
return v_memory_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___boxed(lean_object* v_motive_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_memory_145_){
_start:
{
uint8_t v_t_boxed_146_; lean_object* v_res_147_; 
v_t_boxed_146_ = lean_unbox(v_t_143_);
v_res_147_ = l_Lasm_JS_Web_ImportExportKind_memory_elim(v_motive_142_, v_t_boxed_146_, v_h_144_, v_memory_145_);
lean_dec(v_memory_145_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___redArg(lean_object* v_global_148_){
_start:
{
lean_inc(v_global_148_);
return v_global_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___redArg___boxed(lean_object* v_global_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lasm_JS_Web_ImportExportKind_global_elim___redArg(v_global_149_);
lean_dec(v_global_149_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim(lean_object* v_motive_151_, uint8_t v_t_152_, lean_object* v_h_153_, lean_object* v_global_154_){
_start:
{
lean_inc(v_global_154_);
return v_global_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___boxed(lean_object* v_motive_155_, lean_object* v_t_156_, lean_object* v_h_157_, lean_object* v_global_158_){
_start:
{
uint8_t v_t_boxed_159_; lean_object* v_res_160_; 
v_t_boxed_159_ = lean_unbox(v_t_156_);
v_res_160_ = l_Lasm_JS_Web_ImportExportKind_global_elim(v_motive_155_, v_t_boxed_159_, v_h_157_, v_global_158_);
lean_dec(v_global_158_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___redArg(lean_object* v_tag_161_){
_start:
{
lean_inc(v_tag_161_);
return v_tag_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___redArg___boxed(lean_object* v_tag_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lasm_JS_Web_ImportExportKind_tag_elim___redArg(v_tag_162_);
lean_dec(v_tag_162_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim(lean_object* v_motive_164_, uint8_t v_t_165_, lean_object* v_h_166_, lean_object* v_tag_167_){
_start:
{
lean_inc(v_tag_167_);
return v_tag_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___boxed(lean_object* v_motive_168_, lean_object* v_t_169_, lean_object* v_h_170_, lean_object* v_tag_171_){
_start:
{
uint8_t v_t_boxed_172_; lean_object* v_res_173_; 
v_t_boxed_172_ = lean_unbox(v_t_169_);
v_res_173_ = l_Lasm_JS_Web_ImportExportKind_tag_elim(v_motive_168_, v_t_boxed_172_, v_h_170_, v_tag_171_);
lean_dec(v_tag_171_);
return v_res_173_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqImportExportKind_beq(uint8_t v_x_174_, uint8_t v_y_175_){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = l_Lasm_JS_Web_ImportExportKind_ctorIdx(v_x_174_);
v___x_177_ = l_Lasm_JS_Web_ImportExportKind_ctorIdx(v_y_175_);
v___x_178_ = lean_nat_dec_eq(v___x_176_, v___x_177_);
lean_dec(v___x_177_);
lean_dec(v___x_176_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqImportExportKind_beq___boxed(lean_object* v_x_179_, lean_object* v_y_180_){
_start:
{
uint8_t v_x_21__boxed_181_; uint8_t v_y_22__boxed_182_; uint8_t v_res_183_; lean_object* v_r_184_; 
v_x_21__boxed_181_ = lean_unbox(v_x_179_);
v_y_22__boxed_182_ = lean_unbox(v_y_180_);
v_res_183_ = l_Lasm_JS_Web_instBEqImportExportKind_beq(v_x_21__boxed_181_, v_y_22__boxed_182_);
v_r_184_ = lean_box(v_res_183_);
return v_r_184_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_unsigned_to_nat(2u);
v___x_203_ = lean_nat_to_int(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_unsigned_to_nat(1u);
v___x_205_ = lean_nat_to_int(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr(uint8_t v_x_206_, lean_object* v_prec_207_){
_start:
{
lean_object* v___y_209_; lean_object* v___y_216_; lean_object* v___y_223_; lean_object* v___y_230_; lean_object* v___y_237_; 
switch(v_x_206_)
{
case 0:
{
lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(1024u);
v___x_244_ = lean_nat_dec_le(v___x_243_, v_prec_207_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_209_ = v___x_245_;
goto v___jp_208_;
}
else
{
lean_object* v___x_246_; 
v___x_246_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_209_ = v___x_246_;
goto v___jp_208_;
}
}
case 1:
{
lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_247_ = lean_unsigned_to_nat(1024u);
v___x_248_ = lean_nat_dec_le(v___x_247_, v_prec_207_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
v___x_249_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_216_ = v___x_249_;
goto v___jp_215_;
}
else
{
lean_object* v___x_250_; 
v___x_250_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_216_ = v___x_250_;
goto v___jp_215_;
}
}
case 2:
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = lean_unsigned_to_nat(1024u);
v___x_252_ = lean_nat_dec_le(v___x_251_, v_prec_207_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
v___x_253_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_223_ = v___x_253_;
goto v___jp_222_;
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_223_ = v___x_254_;
goto v___jp_222_;
}
}
case 3:
{
lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_255_ = lean_unsigned_to_nat(1024u);
v___x_256_ = lean_nat_dec_le(v___x_255_, v_prec_207_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; 
v___x_257_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_230_ = v___x_257_;
goto v___jp_229_;
}
else
{
lean_object* v___x_258_; 
v___x_258_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_230_ = v___x_258_;
goto v___jp_229_;
}
}
default: 
{
lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_unsigned_to_nat(1024u);
v___x_260_ = lean_nat_dec_le(v___x_259_, v_prec_207_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_237_ = v___x_261_;
goto v___jp_236_;
}
else
{
lean_object* v___x_262_; 
v___x_262_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_237_ = v___x_262_;
goto v___jp_236_;
}
}
}
v___jp_208_:
{
lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_210_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__1));
lean_inc(v___y_209_);
v___x_211_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_211_, 0, v___y_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = 0;
v___x_213_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set_uint8(v___x_213_, sizeof(void*)*1, v___x_212_);
v___x_214_ = l_Repr_addAppParen(v___x_213_, v_prec_207_);
return v___x_214_;
}
v___jp_215_:
{
lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_217_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__3));
lean_inc(v___y_216_);
v___x_218_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_218_, 0, v___y_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = 0;
v___x_220_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_220_, 0, v___x_218_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*1, v___x_219_);
v___x_221_ = l_Repr_addAppParen(v___x_220_, v_prec_207_);
return v___x_221_;
}
v___jp_222_:
{
lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_224_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__5));
lean_inc(v___y_223_);
v___x_225_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_225_, 0, v___y_223_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = 0;
v___x_227_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_227_, 0, v___x_225_);
lean_ctor_set_uint8(v___x_227_, sizeof(void*)*1, v___x_226_);
v___x_228_ = l_Repr_addAppParen(v___x_227_, v_prec_207_);
return v___x_228_;
}
v___jp_229_:
{
lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_231_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__7));
lean_inc(v___y_230_);
v___x_232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_232_, 0, v___y_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = 0;
v___x_234_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*1, v___x_233_);
v___x_235_ = l_Repr_addAppParen(v___x_234_, v_prec_207_);
return v___x_235_;
}
v___jp_236_:
{
lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_238_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__9));
lean_inc(v___y_237_);
v___x_239_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_239_, 0, v___y_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = 0;
v___x_241_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set_uint8(v___x_241_, sizeof(void*)*1, v___x_240_);
v___x_242_ = l_Repr_addAppParen(v___x_241_, v_prec_207_);
return v___x_242_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___boxed(lean_object* v_x_263_, lean_object* v_prec_264_){
_start:
{
uint8_t v_x_279__boxed_265_; lean_object* v_res_266_; 
v_x_279__boxed_265_ = lean_unbox(v_x_263_);
v_res_266_ = l_Lasm_JS_Web_instReprImportExportKind_repr(v_x_279__boxed_265_, v_prec_264_);
lean_dec(v_prec_264_);
return v_res_266_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedImportExportKind_default(void){
_start:
{
uint8_t v___x_269_; 
v___x_269_ = 0;
return v___x_269_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedImportExportKind(void){
_start:
{
uint8_t v___x_270_; 
v___x_270_ = 0;
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0(uint8_t v_x_286_){
_start:
{
switch(v_x_286_)
{
case 0:
{
lean_object* v___x_287_; 
v___x_287_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__1));
return v___x_287_;
}
case 1:
{
lean_object* v___x_288_; 
v___x_288_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__3));
return v___x_288_;
}
case 2:
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__5));
return v___x_289_;
}
case 3:
{
lean_object* v___x_290_; 
v___x_290_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__7));
return v___x_290_;
}
default: 
{
lean_object* v___x_291_; 
v___x_291_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__9));
return v___x_291_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___boxed(lean_object* v_x_292_){
_start:
{
uint8_t v_x_91__boxed_293_; lean_object* v_res_294_; 
v_x_91__boxed_293_ = lean_unbox(v_x_292_);
v_res_294_ = l_Lasm_JS_Web_instToJSImportExportKind___lam__0(v_x_91__boxed_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0(lean_object* v_x_315_){
_start:
{
if (lean_obj_tag(v_x_315_) == 4)
{
lean_object* v_s_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v_s_318_ = lean_ctor_get(v_x_315_, 0);
v___x_319_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0));
v___x_320_ = lean_string_dec_eq(v_s_318_, v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2));
v___x_322_ = lean_string_dec_eq(v_s_318_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4));
v___x_324_ = lean_string_dec_eq(v_s_318_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_325_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6));
v___x_326_ = lean_string_dec_eq(v_s_318_, v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_327_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8));
v___x_328_ = lean_string_dec_eq(v_s_318_, v___x_327_);
if (v___x_328_ == 0)
{
goto v___jp_316_;
}
else
{
lean_object* v___x_329_; 
v___x_329_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__2));
return v___x_329_;
}
}
else
{
lean_object* v___x_330_; 
v___x_330_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__3));
return v___x_330_;
}
}
else
{
lean_object* v___x_331_; 
v___x_331_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__4));
return v___x_331_;
}
}
else
{
lean_object* v___x_332_; 
v___x_332_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__5));
return v___x_332_;
}
}
else
{
lean_object* v___x_333_; 
v___x_333_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__6));
return v___x_333_;
}
}
else
{
goto v___jp_316_;
}
v___jp_316_:
{
lean_object* v___x_317_; 
v___x_317_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__1));
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___boxed(lean_object* v_x_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Lasm_JS_Web_instFromJSImportExportKind___lam__0(v_x_334_);
lean_dec(v_x_334_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorIdx(uint8_t v_x_343_){
_start:
{
if (v_x_343_ == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_unsigned_to_nat(0u);
return v___x_344_;
}
else
{
lean_object* v___x_345_; 
v___x_345_ = lean_unsigned_to_nat(1u);
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorIdx___boxed(lean_object* v_x_346_){
_start:
{
uint8_t v_x_boxed_347_; lean_object* v_res_348_; 
v_x_boxed_347_ = lean_unbox(v_x_346_);
v_res_348_ = l_Lasm_JS_Web_AddressType_ctorIdx(v_x_boxed_347_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___redArg(lean_object* v_k_349_){
_start:
{
lean_inc(v_k_349_);
return v_k_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___redArg___boxed(lean_object* v_k_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lasm_JS_Web_AddressType_ctorElim___redArg(v_k_350_);
lean_dec(v_k_350_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim(lean_object* v_motive_352_, lean_object* v_ctorIdx_353_, uint8_t v_t_354_, lean_object* v_h_355_, lean_object* v_k_356_){
_start:
{
lean_inc(v_k_356_);
return v_k_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___boxed(lean_object* v_motive_357_, lean_object* v_ctorIdx_358_, lean_object* v_t_359_, lean_object* v_h_360_, lean_object* v_k_361_){
_start:
{
uint8_t v_t_boxed_362_; lean_object* v_res_363_; 
v_t_boxed_362_ = lean_unbox(v_t_359_);
v_res_363_ = l_Lasm_JS_Web_AddressType_ctorElim(v_motive_357_, v_ctorIdx_358_, v_t_boxed_362_, v_h_360_, v_k_361_);
lean_dec(v_k_361_);
lean_dec(v_ctorIdx_358_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___redArg(lean_object* v_i32_364_){
_start:
{
lean_inc(v_i32_364_);
return v_i32_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___redArg___boxed(lean_object* v_i32_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lasm_JS_Web_AddressType_i32_elim___redArg(v_i32_365_);
lean_dec(v_i32_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim(lean_object* v_motive_367_, uint8_t v_t_368_, lean_object* v_h_369_, lean_object* v_i32_370_){
_start:
{
lean_inc(v_i32_370_);
return v_i32_370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___boxed(lean_object* v_motive_371_, lean_object* v_t_372_, lean_object* v_h_373_, lean_object* v_i32_374_){
_start:
{
uint8_t v_t_boxed_375_; lean_object* v_res_376_; 
v_t_boxed_375_ = lean_unbox(v_t_372_);
v_res_376_ = l_Lasm_JS_Web_AddressType_i32_elim(v_motive_371_, v_t_boxed_375_, v_h_373_, v_i32_374_);
lean_dec(v_i32_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___redArg(lean_object* v_i64_377_){
_start:
{
lean_inc(v_i64_377_);
return v_i64_377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___redArg___boxed(lean_object* v_i64_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lasm_JS_Web_AddressType_i64_elim___redArg(v_i64_378_);
lean_dec(v_i64_378_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim(lean_object* v_motive_380_, uint8_t v_t_381_, lean_object* v_h_382_, lean_object* v_i64_383_){
_start:
{
lean_inc(v_i64_383_);
return v_i64_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___boxed(lean_object* v_motive_384_, lean_object* v_t_385_, lean_object* v_h_386_, lean_object* v_i64_387_){
_start:
{
uint8_t v_t_boxed_388_; lean_object* v_res_389_; 
v_t_boxed_388_ = lean_unbox(v_t_385_);
v_res_389_ = l_Lasm_JS_Web_AddressType_i64_elim(v_motive_384_, v_t_boxed_388_, v_h_386_, v_i64_387_);
lean_dec(v_i64_387_);
return v_res_389_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqAddressType_beq(uint8_t v_x_390_, uint8_t v_y_391_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_392_ = l_Lasm_JS_Web_AddressType_ctorIdx(v_x_390_);
v___x_393_ = l_Lasm_JS_Web_AddressType_ctorIdx(v_y_391_);
v___x_394_ = lean_nat_dec_eq(v___x_392_, v___x_393_);
lean_dec(v___x_393_);
lean_dec(v___x_392_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqAddressType_beq___boxed(lean_object* v_x_395_, lean_object* v_y_396_){
_start:
{
uint8_t v_x_21__boxed_397_; uint8_t v_y_22__boxed_398_; uint8_t v_res_399_; lean_object* v_r_400_; 
v_x_21__boxed_397_ = lean_unbox(v_x_395_);
v_y_22__boxed_398_ = lean_unbox(v_y_396_);
v_res_399_ = l_Lasm_JS_Web_instBEqAddressType_beq(v_x_21__boxed_397_, v_y_22__boxed_398_);
v_r_400_ = lean_box(v_res_399_);
return v_r_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprAddressType_repr(uint8_t v_x_409_, lean_object* v_prec_410_){
_start:
{
lean_object* v___y_412_; lean_object* v___y_419_; 
if (v_x_409_ == 0)
{
lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_425_ = lean_unsigned_to_nat(1024u);
v___x_426_ = lean_nat_dec_le(v___x_425_, v_prec_410_);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; 
v___x_427_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_412_ = v___x_427_;
goto v___jp_411_;
}
else
{
lean_object* v___x_428_; 
v___x_428_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_412_ = v___x_428_;
goto v___jp_411_;
}
}
else
{
lean_object* v___x_429_; uint8_t v___x_430_; 
v___x_429_ = lean_unsigned_to_nat(1024u);
v___x_430_ = lean_nat_dec_le(v___x_429_, v_prec_410_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
v___x_431_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_419_ = v___x_431_;
goto v___jp_418_;
}
else
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_419_ = v___x_432_;
goto v___jp_418_;
}
}
v___jp_411_:
{
lean_object* v___x_413_; lean_object* v___x_414_; uint8_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_413_ = ((lean_object*)(l_Lasm_JS_Web_instReprAddressType_repr___closed__1));
lean_inc(v___y_412_);
v___x_414_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_414_, 0, v___y_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = 0;
v___x_416_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_416_, 0, v___x_414_);
lean_ctor_set_uint8(v___x_416_, sizeof(void*)*1, v___x_415_);
v___x_417_ = l_Repr_addAppParen(v___x_416_, v_prec_410_);
return v___x_417_;
}
v___jp_418_:
{
lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_420_ = ((lean_object*)(l_Lasm_JS_Web_instReprAddressType_repr___closed__3));
lean_inc(v___y_419_);
v___x_421_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_421_, 0, v___y_419_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = 0;
v___x_423_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_423_, 0, v___x_421_);
lean_ctor_set_uint8(v___x_423_, sizeof(void*)*1, v___x_422_);
v___x_424_ = l_Repr_addAppParen(v___x_423_, v_prec_410_);
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprAddressType_repr___boxed(lean_object* v_x_433_, lean_object* v_prec_434_){
_start:
{
uint8_t v_x_113__boxed_435_; lean_object* v_res_436_; 
v_x_113__boxed_435_ = lean_unbox(v_x_433_);
v_res_436_ = l_Lasm_JS_Web_instReprAddressType_repr(v_x_113__boxed_435_, v_prec_434_);
lean_dec(v_prec_434_);
return v_res_436_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedAddressType_default(void){
_start:
{
uint8_t v___x_439_; 
v___x_439_ = 0;
return v___x_439_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedAddressType(void){
_start:
{
uint8_t v___x_440_; 
v___x_440_ = 0;
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0(uint8_t v_x_447_){
_start:
{
if (v_x_447_ == 0)
{
lean_object* v___x_448_; 
v___x_448_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
return v___x_448_;
}
else
{
lean_object* v___x_449_; 
v___x_449_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0___boxed(lean_object* v_x_450_){
_start:
{
uint8_t v_x_40__boxed_451_; lean_object* v_res_452_; 
v_x_40__boxed_451_ = lean_unbox(v_x_450_);
v_res_452_ = l_Lasm_JS_Web_instToJSAddressType___lam__0(v_x_40__boxed_451_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0(lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 4)
{
lean_object* v_s_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v_s_466_ = lean_ctor_get(v_x_463_, 0);
v___x_467_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__0));
v___x_468_ = lean_string_dec_eq(v_s_466_, v___x_467_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__2));
v___x_470_ = lean_string_dec_eq(v_s_466_, v___x_469_);
if (v___x_470_ == 0)
{
goto v___jp_464_;
}
else
{
lean_object* v___x_471_; 
v___x_471_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__1));
return v___x_471_;
}
}
else
{
lean_object* v___x_472_; 
v___x_472_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__2));
return v___x_472_;
}
}
else
{
goto v___jp_464_;
}
v___jp_464_:
{
lean_object* v___x_465_; 
v___x_465_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__0));
return v___x_465_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0___boxed(lean_object* v_x_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lasm_JS_Web_instFromJSAddressType___lam__0(v_x_473_);
lean_dec(v_x_473_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorIdx(uint8_t v_x_482_){
_start:
{
if (v_x_482_ == 0)
{
lean_object* v___x_483_; 
v___x_483_ = lean_unsigned_to_nat(0u);
return v___x_483_;
}
else
{
lean_object* v___x_484_; 
v___x_484_ = lean_unsigned_to_nat(1u);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorIdx___boxed(lean_object* v_x_485_){
_start:
{
uint8_t v_x_boxed_486_; lean_object* v_res_487_; 
v_x_boxed_486_ = lean_unbox(v_x_485_);
v_res_487_ = l_Lasm_JS_Web_TableKind_ctorIdx(v_x_boxed_486_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___redArg(lean_object* v_k_488_){
_start:
{
lean_inc(v_k_488_);
return v_k_488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___redArg___boxed(lean_object* v_k_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lasm_JS_Web_TableKind_ctorElim___redArg(v_k_489_);
lean_dec(v_k_489_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim(lean_object* v_motive_491_, lean_object* v_ctorIdx_492_, uint8_t v_t_493_, lean_object* v_h_494_, lean_object* v_k_495_){
_start:
{
lean_inc(v_k_495_);
return v_k_495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___boxed(lean_object* v_motive_496_, lean_object* v_ctorIdx_497_, lean_object* v_t_498_, lean_object* v_h_499_, lean_object* v_k_500_){
_start:
{
uint8_t v_t_boxed_501_; lean_object* v_res_502_; 
v_t_boxed_501_ = lean_unbox(v_t_498_);
v_res_502_ = l_Lasm_JS_Web_TableKind_ctorElim(v_motive_496_, v_ctorIdx_497_, v_t_boxed_501_, v_h_499_, v_k_500_);
lean_dec(v_k_500_);
lean_dec(v_ctorIdx_497_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___redArg(lean_object* v_externref_503_){
_start:
{
lean_inc(v_externref_503_);
return v_externref_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___redArg___boxed(lean_object* v_externref_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lasm_JS_Web_TableKind_externref_elim___redArg(v_externref_504_);
lean_dec(v_externref_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim(lean_object* v_motive_506_, uint8_t v_t_507_, lean_object* v_h_508_, lean_object* v_externref_509_){
_start:
{
lean_inc(v_externref_509_);
return v_externref_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___boxed(lean_object* v_motive_510_, lean_object* v_t_511_, lean_object* v_h_512_, lean_object* v_externref_513_){
_start:
{
uint8_t v_t_boxed_514_; lean_object* v_res_515_; 
v_t_boxed_514_ = lean_unbox(v_t_511_);
v_res_515_ = l_Lasm_JS_Web_TableKind_externref_elim(v_motive_510_, v_t_boxed_514_, v_h_512_, v_externref_513_);
lean_dec(v_externref_513_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___redArg(lean_object* v_anyfunc_516_){
_start:
{
lean_inc(v_anyfunc_516_);
return v_anyfunc_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___redArg___boxed(lean_object* v_anyfunc_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lasm_JS_Web_TableKind_anyfunc_elim___redArg(v_anyfunc_517_);
lean_dec(v_anyfunc_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim(lean_object* v_motive_519_, uint8_t v_t_520_, lean_object* v_h_521_, lean_object* v_anyfunc_522_){
_start:
{
lean_inc(v_anyfunc_522_);
return v_anyfunc_522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___boxed(lean_object* v_motive_523_, lean_object* v_t_524_, lean_object* v_h_525_, lean_object* v_anyfunc_526_){
_start:
{
uint8_t v_t_boxed_527_; lean_object* v_res_528_; 
v_t_boxed_527_ = lean_unbox(v_t_524_);
v_res_528_ = l_Lasm_JS_Web_TableKind_anyfunc_elim(v_motive_523_, v_t_boxed_527_, v_h_525_, v_anyfunc_526_);
lean_dec(v_anyfunc_526_);
return v_res_528_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqTableKind_beq(uint8_t v_x_529_, uint8_t v_y_530_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v___x_531_ = l_Lasm_JS_Web_TableKind_ctorIdx(v_x_529_);
v___x_532_ = l_Lasm_JS_Web_TableKind_ctorIdx(v_y_530_);
v___x_533_ = lean_nat_dec_eq(v___x_531_, v___x_532_);
lean_dec(v___x_532_);
lean_dec(v___x_531_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqTableKind_beq___boxed(lean_object* v_x_534_, lean_object* v_y_535_){
_start:
{
uint8_t v_x_21__boxed_536_; uint8_t v_y_22__boxed_537_; uint8_t v_res_538_; lean_object* v_r_539_; 
v_x_21__boxed_536_ = lean_unbox(v_x_534_);
v_y_22__boxed_537_ = lean_unbox(v_y_535_);
v_res_538_ = l_Lasm_JS_Web_instBEqTableKind_beq(v_x_21__boxed_536_, v_y_22__boxed_537_);
v_r_539_ = lean_box(v_res_538_);
return v_r_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprTableKind_repr(uint8_t v_x_548_, lean_object* v_prec_549_){
_start:
{
lean_object* v___y_551_; lean_object* v___y_558_; 
if (v_x_548_ == 0)
{
lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_564_ = lean_unsigned_to_nat(1024u);
v___x_565_ = lean_nat_dec_le(v___x_564_, v_prec_549_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
v___x_566_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_551_ = v___x_566_;
goto v___jp_550_;
}
else
{
lean_object* v___x_567_; 
v___x_567_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_551_ = v___x_567_;
goto v___jp_550_;
}
}
else
{
lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_568_ = lean_unsigned_to_nat(1024u);
v___x_569_ = lean_nat_dec_le(v___x_568_, v_prec_549_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
v___x_570_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_558_ = v___x_570_;
goto v___jp_557_;
}
else
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_558_ = v___x_571_;
goto v___jp_557_;
}
}
v___jp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_552_ = ((lean_object*)(l_Lasm_JS_Web_instReprTableKind_repr___closed__1));
lean_inc(v___y_551_);
v___x_553_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_553_, 0, v___y_551_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = 0;
v___x_555_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_555_, 0, v___x_553_);
lean_ctor_set_uint8(v___x_555_, sizeof(void*)*1, v___x_554_);
v___x_556_ = l_Repr_addAppParen(v___x_555_, v_prec_549_);
return v___x_556_;
}
v___jp_557_:
{
lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_559_ = ((lean_object*)(l_Lasm_JS_Web_instReprTableKind_repr___closed__3));
lean_inc(v___y_558_);
v___x_560_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_560_, 0, v___y_558_);
lean_ctor_set(v___x_560_, 1, v___x_559_);
v___x_561_ = 0;
v___x_562_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_562_, 0, v___x_560_);
lean_ctor_set_uint8(v___x_562_, sizeof(void*)*1, v___x_561_);
v___x_563_ = l_Repr_addAppParen(v___x_562_, v_prec_549_);
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprTableKind_repr___boxed(lean_object* v_x_572_, lean_object* v_prec_573_){
_start:
{
uint8_t v_x_113__boxed_574_; lean_object* v_res_575_; 
v_x_113__boxed_574_ = lean_unbox(v_x_572_);
v_res_575_ = l_Lasm_JS_Web_instReprTableKind_repr(v_x_113__boxed_574_, v_prec_573_);
lean_dec(v_prec_573_);
return v_res_575_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedTableKind_default(void){
_start:
{
uint8_t v___x_578_; 
v___x_578_ = 0;
return v___x_578_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedTableKind(void){
_start:
{
uint8_t v___x_579_; 
v___x_579_ = 0;
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0(uint8_t v_x_586_){
_start:
{
if (v_x_586_ == 0)
{
lean_object* v___x_587_; 
v___x_587_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
return v___x_587_;
}
else
{
lean_object* v___x_588_; 
v___x_588_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
return v___x_588_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0___boxed(lean_object* v_x_589_){
_start:
{
uint8_t v_x_40__boxed_590_; lean_object* v_res_591_; 
v_x_40__boxed_590_ = lean_unbox(v_x_589_);
v_res_591_ = l_Lasm_JS_Web_instToJSTableKind___lam__0(v_x_40__boxed_590_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0(lean_object* v_x_602_){
_start:
{
if (lean_obj_tag(v_x_602_) == 4)
{
lean_object* v_s_605_; lean_object* v___x_606_; uint8_t v___x_607_; 
v_s_605_ = lean_ctor_get(v_x_602_, 0);
v___x_606_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__0));
v___x_607_ = lean_string_dec_eq(v_s_605_, v___x_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_608_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__2));
v___x_609_ = lean_string_dec_eq(v_s_605_, v___x_608_);
if (v___x_609_ == 0)
{
goto v___jp_603_;
}
else
{
lean_object* v___x_610_; 
v___x_610_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__1));
return v___x_610_;
}
}
else
{
lean_object* v___x_611_; 
v___x_611_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__2));
return v___x_611_;
}
}
else
{
goto v___jp_603_;
}
v___jp_603_:
{
lean_object* v___x_604_; 
v___x_604_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__0));
return v___x_604_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0___boxed(lean_object* v_x_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lasm_JS_Web_instFromJSTableKind___lam__0(v_x_612_);
lean_dec(v_x_612_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorIdx(uint8_t v_x_621_){
_start:
{
switch(v_x_621_)
{
case 0:
{
lean_object* v___x_622_; 
v___x_622_ = lean_unsigned_to_nat(0u);
return v___x_622_;
}
case 1:
{
lean_object* v___x_623_; 
v___x_623_ = lean_unsigned_to_nat(1u);
return v___x_623_;
}
case 2:
{
lean_object* v___x_624_; 
v___x_624_ = lean_unsigned_to_nat(2u);
return v___x_624_;
}
case 3:
{
lean_object* v___x_625_; 
v___x_625_ = lean_unsigned_to_nat(3u);
return v___x_625_;
}
case 4:
{
lean_object* v___x_626_; 
v___x_626_ = lean_unsigned_to_nat(4u);
return v___x_626_;
}
case 5:
{
lean_object* v___x_627_; 
v___x_627_ = lean_unsigned_to_nat(5u);
return v___x_627_;
}
default: 
{
lean_object* v___x_628_; 
v___x_628_ = lean_unsigned_to_nat(6u);
return v___x_628_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorIdx___boxed(lean_object* v_x_629_){
_start:
{
uint8_t v_x_boxed_630_; lean_object* v_res_631_; 
v_x_boxed_630_ = lean_unbox(v_x_629_);
v_res_631_ = l_Lasm_JS_Web_ValueType_ctorIdx(v_x_boxed_630_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___redArg(lean_object* v_k_632_){
_start:
{
lean_inc(v_k_632_);
return v_k_632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___redArg___boxed(lean_object* v_k_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lasm_JS_Web_ValueType_ctorElim___redArg(v_k_633_);
lean_dec(v_k_633_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim(lean_object* v_motive_635_, lean_object* v_ctorIdx_636_, uint8_t v_t_637_, lean_object* v_h_638_, lean_object* v_k_639_){
_start:
{
lean_inc(v_k_639_);
return v_k_639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___boxed(lean_object* v_motive_640_, lean_object* v_ctorIdx_641_, lean_object* v_t_642_, lean_object* v_h_643_, lean_object* v_k_644_){
_start:
{
uint8_t v_t_boxed_645_; lean_object* v_res_646_; 
v_t_boxed_645_ = lean_unbox(v_t_642_);
v_res_646_ = l_Lasm_JS_Web_ValueType_ctorElim(v_motive_640_, v_ctorIdx_641_, v_t_boxed_645_, v_h_643_, v_k_644_);
lean_dec(v_k_644_);
lean_dec(v_ctorIdx_641_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___redArg(lean_object* v_i32_647_){
_start:
{
lean_inc(v_i32_647_);
return v_i32_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___redArg___boxed(lean_object* v_i32_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lasm_JS_Web_ValueType_i32_elim___redArg(v_i32_648_);
lean_dec(v_i32_648_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim(lean_object* v_motive_650_, uint8_t v_t_651_, lean_object* v_h_652_, lean_object* v_i32_653_){
_start:
{
lean_inc(v_i32_653_);
return v_i32_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___boxed(lean_object* v_motive_654_, lean_object* v_t_655_, lean_object* v_h_656_, lean_object* v_i32_657_){
_start:
{
uint8_t v_t_boxed_658_; lean_object* v_res_659_; 
v_t_boxed_658_ = lean_unbox(v_t_655_);
v_res_659_ = l_Lasm_JS_Web_ValueType_i32_elim(v_motive_654_, v_t_boxed_658_, v_h_656_, v_i32_657_);
lean_dec(v_i32_657_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___redArg(lean_object* v_i64_660_){
_start:
{
lean_inc(v_i64_660_);
return v_i64_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___redArg___boxed(lean_object* v_i64_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lasm_JS_Web_ValueType_i64_elim___redArg(v_i64_661_);
lean_dec(v_i64_661_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim(lean_object* v_motive_663_, uint8_t v_t_664_, lean_object* v_h_665_, lean_object* v_i64_666_){
_start:
{
lean_inc(v_i64_666_);
return v_i64_666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___boxed(lean_object* v_motive_667_, lean_object* v_t_668_, lean_object* v_h_669_, lean_object* v_i64_670_){
_start:
{
uint8_t v_t_boxed_671_; lean_object* v_res_672_; 
v_t_boxed_671_ = lean_unbox(v_t_668_);
v_res_672_ = l_Lasm_JS_Web_ValueType_i64_elim(v_motive_667_, v_t_boxed_671_, v_h_669_, v_i64_670_);
lean_dec(v_i64_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___redArg(lean_object* v_f32_673_){
_start:
{
lean_inc(v_f32_673_);
return v_f32_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___redArg___boxed(lean_object* v_f32_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lasm_JS_Web_ValueType_f32_elim___redArg(v_f32_674_);
lean_dec(v_f32_674_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim(lean_object* v_motive_676_, uint8_t v_t_677_, lean_object* v_h_678_, lean_object* v_f32_679_){
_start:
{
lean_inc(v_f32_679_);
return v_f32_679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___boxed(lean_object* v_motive_680_, lean_object* v_t_681_, lean_object* v_h_682_, lean_object* v_f32_683_){
_start:
{
uint8_t v_t_boxed_684_; lean_object* v_res_685_; 
v_t_boxed_684_ = lean_unbox(v_t_681_);
v_res_685_ = l_Lasm_JS_Web_ValueType_f32_elim(v_motive_680_, v_t_boxed_684_, v_h_682_, v_f32_683_);
lean_dec(v_f32_683_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___redArg(lean_object* v_f64_686_){
_start:
{
lean_inc(v_f64_686_);
return v_f64_686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___redArg___boxed(lean_object* v_f64_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lasm_JS_Web_ValueType_f64_elim___redArg(v_f64_687_);
lean_dec(v_f64_687_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim(lean_object* v_motive_689_, uint8_t v_t_690_, lean_object* v_h_691_, lean_object* v_f64_692_){
_start:
{
lean_inc(v_f64_692_);
return v_f64_692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___boxed(lean_object* v_motive_693_, lean_object* v_t_694_, lean_object* v_h_695_, lean_object* v_f64_696_){
_start:
{
uint8_t v_t_boxed_697_; lean_object* v_res_698_; 
v_t_boxed_697_ = lean_unbox(v_t_694_);
v_res_698_ = l_Lasm_JS_Web_ValueType_f64_elim(v_motive_693_, v_t_boxed_697_, v_h_695_, v_f64_696_);
lean_dec(v_f64_696_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___redArg(lean_object* v_v128_699_){
_start:
{
lean_inc(v_v128_699_);
return v_v128_699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___redArg___boxed(lean_object* v_v128_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lasm_JS_Web_ValueType_v128_elim___redArg(v_v128_700_);
lean_dec(v_v128_700_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim(lean_object* v_motive_702_, uint8_t v_t_703_, lean_object* v_h_704_, lean_object* v_v128_705_){
_start:
{
lean_inc(v_v128_705_);
return v_v128_705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___boxed(lean_object* v_motive_706_, lean_object* v_t_707_, lean_object* v_h_708_, lean_object* v_v128_709_){
_start:
{
uint8_t v_t_boxed_710_; lean_object* v_res_711_; 
v_t_boxed_710_ = lean_unbox(v_t_707_);
v_res_711_ = l_Lasm_JS_Web_ValueType_v128_elim(v_motive_706_, v_t_boxed_710_, v_h_708_, v_v128_709_);
lean_dec(v_v128_709_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___redArg(lean_object* v_externref_712_){
_start:
{
lean_inc(v_externref_712_);
return v_externref_712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___redArg___boxed(lean_object* v_externref_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lasm_JS_Web_ValueType_externref_elim___redArg(v_externref_713_);
lean_dec(v_externref_713_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim(lean_object* v_motive_715_, uint8_t v_t_716_, lean_object* v_h_717_, lean_object* v_externref_718_){
_start:
{
lean_inc(v_externref_718_);
return v_externref_718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___boxed(lean_object* v_motive_719_, lean_object* v_t_720_, lean_object* v_h_721_, lean_object* v_externref_722_){
_start:
{
uint8_t v_t_boxed_723_; lean_object* v_res_724_; 
v_t_boxed_723_ = lean_unbox(v_t_720_);
v_res_724_ = l_Lasm_JS_Web_ValueType_externref_elim(v_motive_719_, v_t_boxed_723_, v_h_721_, v_externref_722_);
lean_dec(v_externref_722_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___redArg(lean_object* v_anyfunc_725_){
_start:
{
lean_inc(v_anyfunc_725_);
return v_anyfunc_725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___redArg___boxed(lean_object* v_anyfunc_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lasm_JS_Web_ValueType_anyfunc_elim___redArg(v_anyfunc_726_);
lean_dec(v_anyfunc_726_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim(lean_object* v_motive_728_, uint8_t v_t_729_, lean_object* v_h_730_, lean_object* v_anyfunc_731_){
_start:
{
lean_inc(v_anyfunc_731_);
return v_anyfunc_731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___boxed(lean_object* v_motive_732_, lean_object* v_t_733_, lean_object* v_h_734_, lean_object* v_anyfunc_735_){
_start:
{
uint8_t v_t_boxed_736_; lean_object* v_res_737_; 
v_t_boxed_736_ = lean_unbox(v_t_733_);
v_res_737_ = l_Lasm_JS_Web_ValueType_anyfunc_elim(v_motive_732_, v_t_boxed_736_, v_h_734_, v_anyfunc_735_);
lean_dec(v_anyfunc_735_);
return v_res_737_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqValueType_beq(uint8_t v_x_738_, uint8_t v_y_739_){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_740_ = l_Lasm_JS_Web_ValueType_ctorIdx(v_x_738_);
v___x_741_ = l_Lasm_JS_Web_ValueType_ctorIdx(v_y_739_);
v___x_742_ = lean_nat_dec_eq(v___x_740_, v___x_741_);
lean_dec(v___x_741_);
lean_dec(v___x_740_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqValueType_beq___boxed(lean_object* v_x_743_, lean_object* v_y_744_){
_start:
{
uint8_t v_x_21__boxed_745_; uint8_t v_y_22__boxed_746_; uint8_t v_res_747_; lean_object* v_r_748_; 
v_x_21__boxed_745_ = lean_unbox(v_x_743_);
v_y_22__boxed_746_ = lean_unbox(v_y_744_);
v_res_747_ = l_Lasm_JS_Web_instBEqValueType_beq(v_x_21__boxed_745_, v_y_22__boxed_746_);
v_r_748_ = lean_box(v_res_747_);
return v_r_748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprValueType_repr(uint8_t v_x_772_, lean_object* v_prec_773_){
_start:
{
lean_object* v___y_775_; lean_object* v___y_782_; lean_object* v___y_789_; lean_object* v___y_796_; lean_object* v___y_803_; lean_object* v___y_810_; lean_object* v___y_817_; 
switch(v_x_772_)
{
case 0:
{
lean_object* v___x_823_; uint8_t v___x_824_; 
v___x_823_ = lean_unsigned_to_nat(1024u);
v___x_824_ = lean_nat_dec_le(v___x_823_, v_prec_773_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; 
v___x_825_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_775_ = v___x_825_;
goto v___jp_774_;
}
else
{
lean_object* v___x_826_; 
v___x_826_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_775_ = v___x_826_;
goto v___jp_774_;
}
}
case 1:
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = lean_unsigned_to_nat(1024u);
v___x_828_ = lean_nat_dec_le(v___x_827_, v_prec_773_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; 
v___x_829_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_782_ = v___x_829_;
goto v___jp_781_;
}
else
{
lean_object* v___x_830_; 
v___x_830_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_782_ = v___x_830_;
goto v___jp_781_;
}
}
case 2:
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = lean_unsigned_to_nat(1024u);
v___x_832_ = lean_nat_dec_le(v___x_831_, v_prec_773_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; 
v___x_833_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_789_ = v___x_833_;
goto v___jp_788_;
}
else
{
lean_object* v___x_834_; 
v___x_834_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_789_ = v___x_834_;
goto v___jp_788_;
}
}
case 3:
{
lean_object* v___x_835_; uint8_t v___x_836_; 
v___x_835_ = lean_unsigned_to_nat(1024u);
v___x_836_ = lean_nat_dec_le(v___x_835_, v_prec_773_);
if (v___x_836_ == 0)
{
lean_object* v___x_837_; 
v___x_837_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_796_ = v___x_837_;
goto v___jp_795_;
}
else
{
lean_object* v___x_838_; 
v___x_838_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_796_ = v___x_838_;
goto v___jp_795_;
}
}
case 4:
{
lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_839_ = lean_unsigned_to_nat(1024u);
v___x_840_ = lean_nat_dec_le(v___x_839_, v_prec_773_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; 
v___x_841_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_803_ = v___x_841_;
goto v___jp_802_;
}
else
{
lean_object* v___x_842_; 
v___x_842_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_803_ = v___x_842_;
goto v___jp_802_;
}
}
case 5:
{
lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_843_ = lean_unsigned_to_nat(1024u);
v___x_844_ = lean_nat_dec_le(v___x_843_, v_prec_773_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; 
v___x_845_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_810_ = v___x_845_;
goto v___jp_809_;
}
else
{
lean_object* v___x_846_; 
v___x_846_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_810_ = v___x_846_;
goto v___jp_809_;
}
}
default: 
{
lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_847_ = lean_unsigned_to_nat(1024u);
v___x_848_ = lean_nat_dec_le(v___x_847_, v_prec_773_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; 
v___x_849_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_817_ = v___x_849_;
goto v___jp_816_;
}
else
{
lean_object* v___x_850_; 
v___x_850_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_817_ = v___x_850_;
goto v___jp_816_;
}
}
}
v___jp_774_:
{
lean_object* v___x_776_; lean_object* v___x_777_; uint8_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_776_ = ((lean_object*)(l_Lasm_JS_Web_instReprValueType_repr___closed__1));
lean_inc(v___y_775_);
v___x_777_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_777_, 0, v___y_775_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
v___x_778_ = 0;
v___x_779_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_779_, 0, v___x_777_);
lean_ctor_set_uint8(v___x_779_, sizeof(void*)*1, v___x_778_);
v___x_780_ = l_Repr_addAppParen(v___x_779_, v_prec_773_);
return v___x_780_;
}
v___jp_781_:
{
lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_783_ = ((lean_object*)(l_Lasm_JS_Web_instReprValueType_repr___closed__3));
lean_inc(v___y_782_);
v___x_784_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_784_, 0, v___y_782_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = 0;
v___x_786_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_786_, 0, v___x_784_);
lean_ctor_set_uint8(v___x_786_, sizeof(void*)*1, v___x_785_);
v___x_787_ = l_Repr_addAppParen(v___x_786_, v_prec_773_);
return v___x_787_;
}
v___jp_788_:
{
lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_790_ = ((lean_object*)(l_Lasm_JS_Web_instReprValueType_repr___closed__5));
lean_inc(v___y_789_);
v___x_791_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_791_, 0, v___y_789_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
v___x_792_ = 0;
v___x_793_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_793_, 0, v___x_791_);
lean_ctor_set_uint8(v___x_793_, sizeof(void*)*1, v___x_792_);
v___x_794_ = l_Repr_addAppParen(v___x_793_, v_prec_773_);
return v___x_794_;
}
v___jp_795_:
{
lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_797_ = ((lean_object*)(l_Lasm_JS_Web_instReprValueType_repr___closed__7));
lean_inc(v___y_796_);
v___x_798_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_798_, 0, v___y_796_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = 0;
v___x_800_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_800_, 0, v___x_798_);
lean_ctor_set_uint8(v___x_800_, sizeof(void*)*1, v___x_799_);
v___x_801_ = l_Repr_addAppParen(v___x_800_, v_prec_773_);
return v___x_801_;
}
v___jp_802_:
{
lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_804_ = ((lean_object*)(l_Lasm_JS_Web_instReprValueType_repr___closed__9));
lean_inc(v___y_803_);
v___x_805_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_805_, 0, v___y_803_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = 0;
v___x_807_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_807_, 0, v___x_805_);
lean_ctor_set_uint8(v___x_807_, sizeof(void*)*1, v___x_806_);
v___x_808_ = l_Repr_addAppParen(v___x_807_, v_prec_773_);
return v___x_808_;
}
v___jp_809_:
{
lean_object* v___x_811_; lean_object* v___x_812_; uint8_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_811_ = ((lean_object*)(l_Lasm_JS_Web_instReprValueType_repr___closed__11));
lean_inc(v___y_810_);
v___x_812_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_812_, 0, v___y_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = 0;
v___x_814_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set_uint8(v___x_814_, sizeof(void*)*1, v___x_813_);
v___x_815_ = l_Repr_addAppParen(v___x_814_, v_prec_773_);
return v___x_815_;
}
v___jp_816_:
{
lean_object* v___x_818_; lean_object* v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_818_ = ((lean_object*)(l_Lasm_JS_Web_instReprValueType_repr___closed__13));
lean_inc(v___y_817_);
v___x_819_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_819_, 0, v___y_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = 0;
v___x_821_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_821_, 0, v___x_819_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*1, v___x_820_);
v___x_822_ = l_Repr_addAppParen(v___x_821_, v_prec_773_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprValueType_repr___boxed(lean_object* v_x_851_, lean_object* v_prec_852_){
_start:
{
uint8_t v_x_383__boxed_853_; lean_object* v_res_854_; 
v_x_383__boxed_853_ = lean_unbox(v_x_851_);
v_res_854_ = l_Lasm_JS_Web_instReprValueType_repr(v_x_383__boxed_853_, v_prec_852_);
lean_dec(v_prec_852_);
return v_res_854_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedValueType_default(void){
_start:
{
uint8_t v___x_857_; 
v___x_857_ = 0;
return v___x_857_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedValueType(void){
_start:
{
uint8_t v___x_858_; 
v___x_858_ = 0;
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0(uint8_t v_x_868_){
_start:
{
switch(v_x_868_)
{
case 0:
{
lean_object* v___x_869_; 
v___x_869_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
return v___x_869_;
}
case 1:
{
lean_object* v___x_870_; 
v___x_870_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
return v___x_870_;
}
case 2:
{
lean_object* v___x_871_; 
v___x_871_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1));
return v___x_871_;
}
case 3:
{
lean_object* v___x_872_; 
v___x_872_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3));
return v___x_872_;
}
case 4:
{
lean_object* v___x_873_; 
v___x_873_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5));
return v___x_873_;
}
case 5:
{
lean_object* v___x_874_; 
v___x_874_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
return v___x_874_;
}
default: 
{
lean_object* v___x_875_; 
v___x_875_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
return v___x_875_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSValueType___lam__0___boxed(lean_object* v_x_876_){
_start:
{
uint8_t v_x_113__boxed_877_; lean_object* v_res_878_; 
v_x_113__boxed_877_ = lean_unbox(v_x_876_);
v_res_878_ = l_Lasm_JS_Web_instToJSValueType___lam__0(v_x_113__boxed_877_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0(lean_object* v_x_904_){
_start:
{
if (lean_obj_tag(v_x_904_) == 4)
{
lean_object* v_s_907_; lean_object* v___x_908_; uint8_t v___x_909_; 
v_s_907_ = lean_ctor_get(v_x_904_, 0);
v___x_908_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__0));
v___x_909_ = lean_string_dec_eq(v_s_907_, v___x_908_);
if (v___x_909_ == 0)
{
lean_object* v___x_910_; uint8_t v___x_911_; 
v___x_910_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__2));
v___x_911_ = lean_string_dec_eq(v_s_907_, v___x_910_);
if (v___x_911_ == 0)
{
lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_912_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__0));
v___x_913_ = lean_string_dec_eq(v_s_907_, v___x_912_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; uint8_t v___x_915_; 
v___x_914_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__2));
v___x_915_ = lean_string_dec_eq(v_s_907_, v___x_914_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; uint8_t v___x_917_; 
v___x_916_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__4));
v___x_917_ = lean_string_dec_eq(v_s_907_, v___x_916_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; uint8_t v___x_919_; 
v___x_918_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__0));
v___x_919_ = lean_string_dec_eq(v_s_907_, v___x_918_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_920_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__2));
v___x_921_ = lean_string_dec_eq(v_s_907_, v___x_920_);
if (v___x_921_ == 0)
{
goto v___jp_905_;
}
else
{
lean_object* v___x_922_; 
v___x_922_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__1));
return v___x_922_;
}
}
else
{
lean_object* v___x_923_; 
v___x_923_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__2));
return v___x_923_;
}
}
else
{
lean_object* v___x_924_; 
v___x_924_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__3));
return v___x_924_;
}
}
else
{
lean_object* v___x_925_; 
v___x_925_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__4));
return v___x_925_;
}
}
else
{
lean_object* v___x_926_; 
v___x_926_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__5));
return v___x_926_;
}
}
else
{
lean_object* v___x_927_; 
v___x_927_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__6));
return v___x_927_;
}
}
else
{
lean_object* v___x_928_; 
v___x_928_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__7));
return v___x_928_;
}
}
else
{
goto v___jp_905_;
}
v___jp_905_:
{
lean_object* v___x_906_; 
v___x_906_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSValueType___lam__0___closed__0));
return v___x_906_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSValueType___lam__0___boxed(lean_object* v_x_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lasm_JS_Web_instFromJSValueType___lam__0(v_x_929_);
lean_dec(v_x_929_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0(lean_object* v___f_940_, lean_object* v___x_941_, lean_object* v_d_942_){
_start:
{
lean_object* v_importedStringConstants_943_; lean_object* v_builtins_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_961_; 
v_importedStringConstants_943_ = lean_ctor_get(v_d_942_, 0);
v_builtins_944_ = lean_ctor_get(v_d_942_, 1);
v_isSharedCheck_961_ = !lean_is_exclusive(v_d_942_);
if (v_isSharedCheck_961_ == 0)
{
v___x_946_ = v_d_942_;
v_isShared_947_ = v_isSharedCheck_961_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_builtins_944_);
lean_inc(v_importedStringConstants_943_);
lean_dec(v_d_942_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_961_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_948_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__0));
v___x_949_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_940_, v_importedStringConstants_943_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 1, v___x_949_);
lean_ctor_set(v___x_946_, 0, v___x_948_);
v___x_951_ = v___x_946_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v___x_949_);
v___x_951_ = v_reuseFailAlloc_960_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_952_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__1));
v___x_953_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_941_, v_builtins_944_);
v___x_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
v___x_955_ = lean_unsigned_to_nat(2u);
v___x_956_ = lean_mk_empty_array_with_capacity(v___x_955_);
v___x_957_ = lean_array_push(v___x_956_, v___x_951_);
v___x_958_ = lean_array_push(v___x_957_, v___x_954_);
v___x_959_ = l_Lasm_JS_Web_Support_fields(v___x_958_);
lean_dec_ref(v___x_958_);
return v___x_959_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__1(void){
_start:
{
lean_object* v___f_963_; lean_object* v___x_964_; 
v___f_963_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__0));
v___x_964_ = l_Lasm_JS_instToJSArray___redArg(v___f_963_);
return v___x_964_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__2(void){
_start:
{
lean_object* v___x_965_; lean_object* v___f_966_; lean_object* v___f_967_; 
v___x_965_ = lean_obj_once(&l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__1, &l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__1_once, _init_l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__1);
v___f_966_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__0));
v___f_967_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0), 3, 2);
lean_closure_set(v___f_967_, 0, v___f_966_);
lean_closure_set(v___f_967_, 1, v___x_965_);
return v___f_967_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions(void){
_start:
{
lean_object* v___f_968_; 
v___f_968_ = lean_obj_once(&l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__2, &l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__2_once, _init_l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___closed__2);
return v___f_968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0(lean_object* v___x_971_, lean_object* v___x_972_, lean_object* v_d_973_){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_975_ = l_Lasm_JS_readField___redArg(v___x_971_, v_d_973_, v___x_974_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec_ref(v___x_972_);
v_a_976_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_975_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_975_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
else
{
lean_object* v_a_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v_a_984_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_984_);
lean_dec_ref_known(v___x_975_, 1);
v___x_985_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1));
v___x_986_ = l_Lasm_JS_readField___redArg(v___x_972_, v_d_973_, v___x_985_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec(v_a_984_);
v_a_987_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_986_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_986_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1004_; 
v_a_995_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_997_ = v___x_986_;
v_isShared_998_ = v_isSharedCheck_1004_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_986_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1004_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; uint8_t v___x_1000_; lean_object* v___x_1002_; 
v___x_999_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_999_, 0, v_a_984_);
v___x_1000_ = lean_unbox(v_a_995_);
lean_dec(v_a_995_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*1, v___x_1000_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v___x_999_);
v___x_1002_ = v___x_997_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_999_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___boxed(lean_object* v___x_1005_, lean_object* v___x_1006_, lean_object* v_d_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0(v___x_1005_, v___x_1006_, v_d_1007_);
lean_dec(v_d_1007_);
return v_res_1008_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__0(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___f_1011_; 
v___x_1009_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind));
v___x_1010_ = l_Lasm_JS_instFromJSString;
v___f_1011_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1011_, 0, v___x_1010_);
lean_closure_set(v___f_1011_, 1, v___x_1009_);
return v___f_1011_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__2(void){
_start:
{
uint8_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___f_1015_; lean_object* v___x_1016_; 
v___x_1013_ = 0;
v___x_1014_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__1));
v___f_1015_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__0, &l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__0_once, _init_l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__0);
v___x_1016_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1016_, 0, v___f_1015_);
lean_ctor_set(v___x_1016_, 1, v___x_1014_);
lean_ctor_set_uint8(v___x_1016_, sizeof(void*)*2, v___x_1013_);
return v___x_1016_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSModuleExportDescriptor(void){
_start:
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__2, &l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__2_once, _init_l_Lasm_JS_Web_instFromJSModuleExportDescriptor___closed__2);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0(lean_object* v___x_1019_, lean_object* v___x_1020_, lean_object* v_d_1021_){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0));
lean_inc_ref(v___x_1019_);
v___x_1023_ = l_Lasm_JS_readField___redArg(v___x_1019_, v_d_1021_, v___x_1022_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_dec_ref(v___x_1020_);
lean_dec_ref(v___x_1019_);
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_a_1032_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1023_, 1);
v___x_1033_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_1034_ = l_Lasm_JS_readField___redArg(v___x_1019_, v_d_1021_, v___x_1033_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v_a_1032_);
lean_dec_ref(v___x_1020_);
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_a_1043_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1034_, 1);
v___x_1044_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1));
v___x_1045_ = l_Lasm_JS_readField___redArg(v___x_1020_, v_d_1021_, v___x_1044_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec(v_a_1043_);
lean_dec(v_a_1032_);
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1045_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1045_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1063_; 
v_a_1054_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1056_ = v___x_1045_;
v_isShared_1057_ = v_isSharedCheck_1063_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1045_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1063_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; uint8_t v___x_1059_; lean_object* v___x_1061_; 
v___x_1058_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1058_, 0, v_a_1032_);
lean_ctor_set(v___x_1058_, 1, v_a_1043_);
v___x_1059_ = lean_unbox(v_a_1054_);
lean_dec(v_a_1054_);
lean_ctor_set_uint8(v___x_1058_, sizeof(void*)*2, v___x_1059_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v___x_1058_);
v___x_1061_ = v___x_1056_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1058_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___boxed(lean_object* v___x_1064_, lean_object* v___x_1065_, lean_object* v_d_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0(v___x_1064_, v___x_1065_, v_d_1066_);
lean_dec(v_d_1066_);
return v_res_1067_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__0(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___f_1070_; 
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind));
v___x_1069_ = l_Lasm_JS_instFromJSString;
v___f_1070_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1070_, 0, v___x_1069_);
lean_closure_set(v___f_1070_, 1, v___x_1068_);
return v___f_1070_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__2(void){
_start:
{
uint8_t v___x_1072_; lean_object* v___x_1073_; lean_object* v___f_1074_; lean_object* v___x_1075_; 
v___x_1072_ = 0;
v___x_1073_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__1));
v___f_1074_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__0, &l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__0_once, _init_l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__0);
v___x_1075_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1075_, 0, v___f_1074_);
lean_ctor_set(v___x_1075_, 1, v___x_1073_);
lean_ctor_set_uint8(v___x_1075_, sizeof(void*)*2, v___x_1072_);
return v___x_1075_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSModuleImportDescriptor(void){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__2, &l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__2_once, _init_l_Lasm_JS_Web_instFromJSModuleImportDescriptor___closed__2);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0(lean_object* v___f_1080_, lean_object* v_d_1081_){
_start:
{
lean_object* v_initial_1082_; lean_object* v_maximum_1083_; lean_object* v_address_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v_initial_1082_ = lean_ctor_get(v_d_1081_, 0);
lean_inc(v_initial_1082_);
v_maximum_1083_ = lean_ctor_get(v_d_1081_, 1);
lean_inc(v_maximum_1083_);
v_address_1084_ = lean_ctor_get(v_d_1081_, 2);
lean_inc(v_address_1084_);
lean_dec_ref(v_d_1081_);
v___x_1085_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0));
v___x_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set(v___x_1086_, 1, v_initial_1082_);
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1));
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
lean_ctor_set(v___x_1088_, 1, v_maximum_1083_);
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2));
v___x_1090_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1080_, v_address_1084_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = lean_unsigned_to_nat(3u);
v___x_1093_ = lean_mk_empty_array_with_capacity(v___x_1092_);
v___x_1094_ = lean_array_push(v___x_1093_, v___x_1086_);
v___x_1095_ = lean_array_push(v___x_1094_, v___x_1088_);
v___x_1096_ = lean_array_push(v___x_1095_, v___x_1091_);
v___x_1097_ = l_Lasm_JS_Web_Support_fields(v___x_1096_);
lean_dec_ref(v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTableDescriptor___lam__0(lean_object* v___f_1102_, lean_object* v_d_1103_){
_start:
{
uint8_t v_element_1104_; lean_object* v_initial_1105_; lean_object* v_maximum_1106_; lean_object* v_address_1107_; lean_object* v___x_1108_; lean_object* v___y_1110_; 
v_element_1104_ = lean_ctor_get_uint8(v_d_1103_, sizeof(void*)*3);
v_initial_1105_ = lean_ctor_get(v_d_1103_, 0);
lean_inc(v_initial_1105_);
v_maximum_1106_ = lean_ctor_get(v_d_1103_, 1);
lean_inc(v_maximum_1106_);
v_address_1107_ = lean_ctor_get(v_d_1103_, 2);
lean_inc(v_address_1107_);
lean_dec_ref(v_d_1103_);
v___x_1108_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableDescriptor___lam__0___closed__0));
if (v_element_1104_ == 0)
{
lean_object* v___x_1126_; 
v___x_1126_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_1110_ = v___x_1126_;
goto v___jp_1109_;
}
else
{
lean_object* v___x_1127_; 
v___x_1127_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_1110_ = v___x_1127_;
goto v___jp_1109_;
}
v___jp_1109_:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_inc(v___y_1110_);
v___x_1111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1108_);
lean_ctor_set(v___x_1111_, 1, v___y_1110_);
v___x_1112_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0));
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v_initial_1105_);
v___x_1114_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1));
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
lean_ctor_set(v___x_1115_, 1, v_maximum_1106_);
v___x_1116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2));
v___x_1117_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1102_, v_address_1107_);
v___x_1118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = lean_unsigned_to_nat(4u);
v___x_1120_ = lean_mk_empty_array_with_capacity(v___x_1119_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1111_);
v___x_1122_ = lean_array_push(v___x_1121_, v___x_1113_);
v___x_1123_ = lean_array_push(v___x_1122_, v___x_1115_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1118_);
v___x_1125_ = l_Lasm_JS_Web_Support_fields(v___x_1124_);
lean_dec_ref(v___x_1124_);
return v___x_1125_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0(lean_object* v___f_1133_, lean_object* v_d_1134_){
_start:
{
uint8_t v_value_1135_; lean_object* v_mutable_1136_; lean_object* v___x_1137_; lean_object* v___y_1139_; 
v_value_1135_ = lean_ctor_get_uint8(v_d_1134_, sizeof(void*)*1);
v_mutable_1136_ = lean_ctor_get(v_d_1134_, 0);
lean_inc(v_mutable_1136_);
lean_dec_ref(v_d_1134_);
v___x_1137_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
switch(v_value_1135_)
{
case 0:
{
lean_object* v___x_1149_; 
v___x_1149_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
v___y_1139_ = v___x_1149_;
goto v___jp_1138_;
}
case 1:
{
lean_object* v___x_1150_; 
v___x_1150_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
v___y_1139_ = v___x_1150_;
goto v___jp_1138_;
}
case 2:
{
lean_object* v___x_1151_; 
v___x_1151_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1));
v___y_1139_ = v___x_1151_;
goto v___jp_1138_;
}
case 3:
{
lean_object* v___x_1152_; 
v___x_1152_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3));
v___y_1139_ = v___x_1152_;
goto v___jp_1138_;
}
case 4:
{
lean_object* v___x_1153_; 
v___x_1153_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5));
v___y_1139_ = v___x_1153_;
goto v___jp_1138_;
}
case 5:
{
lean_object* v___x_1154_; 
v___x_1154_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_1139_ = v___x_1154_;
goto v___jp_1138_;
}
default: 
{
lean_object* v___x_1155_; 
v___x_1155_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_1139_ = v___x_1155_;
goto v___jp_1138_;
}
}
v___jp_1138_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
lean_inc(v___y_1139_);
v___x_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1137_);
lean_ctor_set(v___x_1140_, 1, v___y_1139_);
v___x_1141_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__1));
v___x_1142_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_mutable_1136_);
v___x_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = lean_unsigned_to_nat(2u);
v___x_1145_ = lean_mk_empty_array_with_capacity(v___x_1144_);
v___x_1146_ = lean_array_push(v___x_1145_, v___x_1140_);
v___x_1147_ = lean_array_push(v___x_1146_, v___x_1143_);
v___x_1148_ = l_Lasm_JS_Web_Support_fields(v___x_1147_);
lean_dec_ref(v___x_1147_);
return v___x_1148_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTagType___lam__1(lean_object* v___f_1180_, lean_object* v_d_1181_){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; size_t v_sz_1184_; size_t v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1182_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTagType___lam__1___closed__0));
v___x_1183_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTagType___lam__1___closed__10));
v_sz_1184_ = lean_array_size(v_d_1181_);
v___x_1185_ = ((size_t)0ULL);
v___x_1186_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1183_, v___f_1180_, v_sz_1184_, v___x_1185_, v_d_1181_);
v___x_1187_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1182_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = lean_unsigned_to_nat(1u);
v___x_1190_ = lean_mk_empty_array_with_capacity(v___x_1189_);
v___x_1191_ = lean_array_push(v___x_1190_, v___x_1188_);
v___x_1192_ = l_Lasm_JS_Web_Support_fields(v___x_1191_);
lean_dec_ref(v___x_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSExceptionOptions___lam__0(lean_object* v___f_1197_, lean_object* v_d_1198_){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1199_ = ((lean_object*)(l_Lasm_JS_Web_instToJSExceptionOptions___lam__0___closed__0));
v___x_1200_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1197_, v_d_1198_);
v___x_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1199_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
v___x_1202_ = lean_unsigned_to_nat(1u);
v___x_1203_ = lean_mk_empty_array_with_capacity(v___x_1202_);
v___x_1204_ = lean_array_push(v___x_1203_, v___x_1201_);
v___x_1205_ = l_Lasm_JS_Web_Support_fields(v___x_1204_);
lean_dec_ref(v___x_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0(lean_object* v___x_1210_, lean_object* v___x_1211_, lean_object* v_d_1212_){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0));
v___x_1214_ = l_Lasm_JS_readField___redArg(v___x_1210_, v_d_1212_, v___x_1213_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_dec_ref(v___x_1211_);
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1214_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1214_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v_a_1223_ = lean_ctor_get(v___x_1214_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v___x_1214_, 1);
v___x_1224_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___closed__0));
v___x_1225_ = l_Lasm_JS_readField___redArg(v___x_1211_, v_d_1212_, v___x_1224_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec(v_a_1223_);
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1225_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1225_);
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
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1242_; 
v_a_1234_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1236_ = v___x_1225_;
v_isShared_1237_ = v_isSharedCheck_1242_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1225_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1242_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1240_; 
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v_a_1223_);
lean_ctor_set(v___x_1238_, 1, v_a_1234_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 0, v___x_1238_);
v___x_1240_ = v___x_1236_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v___x_1238_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___boxed(lean_object* v___x_1243_, lean_object* v___x_1244_, lean_object* v_d_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0(v___x_1243_, v___x_1244_, v_d_1245_);
lean_dec(v_d_1245_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0_spec__0(lean_object* v_x_1256_){
_start:
{
if (lean_obj_tag(v_x_1256_) == 0)
{
lean_object* v___x_1257_; 
v___x_1257_ = lean_box(0);
return v___x_1257_;
}
else
{
lean_object* v_val_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1268_; 
v_val_1258_ = lean_ctor_get(v_x_1256_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v_x_1256_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1260_ = v_x_1256_;
v_isShared_1261_ = v_isSharedCheck_1268_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_val_1258_);
lean_dec(v_x_1256_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1268_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
size_t v_sz_1262_; size_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1266_; 
v_sz_1262_ = lean_array_size(v_val_1258_);
v___x_1263_ = ((size_t)0ULL);
v___x_1264_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1262_, v___x_1263_, v_val_1258_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set_tag(v___x_1260_, 7);
lean_ctor_set(v___x_1260_, 0, v___x_1264_);
v___x_1266_ = v___x_1260_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(lean_object* v_x_1269_){
_start:
{
if (lean_obj_tag(v_x_1269_) == 0)
{
lean_object* v___x_1270_; 
v___x_1270_ = lean_box(0);
return v___x_1270_;
}
else
{
lean_object* v_val_1271_; lean_object* v_importedStringConstants_1272_; lean_object* v_builtins_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1290_; 
v_val_1271_ = lean_ctor_get(v_x_1269_, 0);
lean_inc(v_val_1271_);
lean_dec_ref_known(v_x_1269_, 1);
v_importedStringConstants_1272_ = lean_ctor_get(v_val_1271_, 0);
v_builtins_1273_ = lean_ctor_get(v_val_1271_, 1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_val_1271_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1275_ = v_val_1271_;
v_isShared_1276_ = v_isSharedCheck_1290_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_builtins_1273_);
lean_inc(v_importedStringConstants_1272_);
lean_dec(v_val_1271_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1290_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1280_; 
v___x_1277_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__0));
v___x_1278_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_importedStringConstants_1272_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 1, v___x_1278_);
lean_ctor_set(v___x_1275_, 0, v___x_1277_);
v___x_1280_ = v___x_1275_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1277_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1281_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__1));
v___x_1282_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0_spec__0(v_builtins_1273_);
v___x_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = lean_unsigned_to_nat(2u);
v___x_1285_ = lean_mk_empty_array_with_capacity(v___x_1284_);
v___x_1286_ = lean_array_push(v___x_1285_, v___x_1280_);
v___x_1287_ = lean_array_push(v___x_1286_, v___x_1283_);
v___x_1288_ = l_Lasm_JS_Web_Support_fields(v___x_1287_);
lean_dec_ref(v___x_1287_);
return v___x_1288_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1295_ = lean_string_utf8_byte_size(v___x_1294_);
return v___x_1295_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; uint8_t v___x_1298_; 
v___x_1296_ = lean_unsigned_to_nat(0u);
v___x_1297_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3);
v___x_1298_ = lean_nat_dec_eq(v___x_1297_, v___x_1296_);
return v___x_1298_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1303_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__8));
v___x_1304_ = lean_unsigned_to_nat(46u);
v___x_1305_ = lean_unsigned_to_nat(193u);
v___x_1306_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v___x_1307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6));
v___x_1308_ = l_mkPanicMessageWithDecl(v___x_1307_, v___x_1306_, v___x_1305_, v___x_1304_, v___x_1303_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(lean_object* v_context_1310_, lean_object* v_d_1311_){
_start:
{
lean_object* v___y_1314_; lean_object* v___y_1315_; 
if (lean_obj_tag(v_d_1311_) == 9)
{
lean_object* v_value_1319_; lean_object* v___x_1320_; 
v_value_1319_ = lean_ctor_get(v_d_1311_, 0);
lean_inc(v_value_1319_);
lean_dec_ref_known(v_d_1311_, 2);
v___x_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1320_, 0, v_value_1319_);
return v___x_1320_;
}
else
{
lean_object* v___x_1321_; lean_object* v_received_1323_; 
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_1311_) == 9)
{
lean_object* v_value_1337_; lean_object* v_description_1338_; uint8_t v___x_1339_; 
v_value_1337_ = lean_ctor_get(v_d_1311_, 0);
v_description_1338_ = lean_ctor_get(v_d_1311_, 1);
v___x_1339_ = lean_string_dec_eq(v_description_1338_, v___x_1321_);
if (v___x_1339_ == 0)
{
goto v___jp_1335_;
}
else
{
uint32_t v___x_1340_; uint64_t v___x_1341_; lean_object* v___x_1342_; uint32_t v___x_1343_; lean_object* v___x_1344_; 
lean_inc_n(v_value_1337_, 2);
lean_dec_ref_known(v_d_1311_, 2);
v___x_1340_ = 206;
v___x_1341_ = 0ULL;
v___x_1342_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1342_, 0, v_value_1337_);
lean_ctor_set(v___x_1342_, 1, v___x_1321_);
v___x_1343_ = lasm_js_value_handle(v_value_1337_);
lean_dec(v_value_1337_);
v___x_1344_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1340_, v___x_1341_, v___x_1342_, v___x_1343_);
lean_dec_ref_known(v___x_1342_, 2);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; uint8_t v___x_1346_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v___x_1346_ = lean_string_validate_utf8(v_a_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
lean_dec(v_a_1345_);
v___x_1347_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_1348_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1347_);
v_received_1323_ = v___x_1348_;
goto v___jp_1322_;
}
else
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_string_from_utf8_unchecked(v_a_1345_);
v_received_1323_ = v___x_1349_;
goto v___jp_1322_;
}
}
else
{
lean_object* v___x_1350_; 
lean_dec_ref_known(v___x_1344_, 1);
v___x_1350_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_1323_ = v___x_1350_;
goto v___jp_1322_;
}
}
}
else
{
goto v___jp_1335_;
}
v___jp_1322_:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; uint8_t v___x_1333_; 
v___x_1324_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1325_ = lean_string_append(v___x_1324_, v_context_1310_);
v___x_1326_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1327_ = lean_string_append(v___x_1325_, v___x_1326_);
v___x_1328_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModule___closed__1));
v___x_1329_ = lean_string_append(v___x_1327_, v___x_1328_);
v___x_1330_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1331_ = lean_string_append(v___x_1329_, v___x_1330_);
v___x_1332_ = lean_string_append(v___x_1331_, v_received_1323_);
lean_dec_ref(v_received_1323_);
v___x_1333_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; 
v___x_1334_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_1314_ = v___x_1332_;
v___y_1315_ = v___x_1334_;
goto v___jp_1313_;
}
else
{
v___y_1314_ = v___x_1332_;
v___y_1315_ = v___x_1321_;
goto v___jp_1313_;
}
}
v___jp_1335_:
{
lean_object* v___x_1336_; 
v___x_1336_ = l_Lasm_JS_Data_describe(v_d_1311_);
v_received_1323_ = v___x_1336_;
goto v___jp_1322_;
}
}
v___jp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1316_ = lean_string_append(v___y_1314_, v___y_1315_);
v___x_1317_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
v___x_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
return v___x_1318_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___boxed(lean_object* v_context_1351_, lean_object* v_d_1352_, lean_object* v_a_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(v_context_1351_, v_d_1352_);
lean_dec_ref(v_context_1351_);
return v_res_1354_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_1356_; uint64_t v___x_1357_; 
v___x_1356_ = 0;
v___x_1357_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1356_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(lean_object* v_b_1358_, lean_object* v_args_1359_, uint8_t v_await_1360_){
_start:
{
uint64_t v___y_1363_; uint64_t v___y_1364_; uint64_t v___x_1407_; uint64_t v___y_1409_; 
v___x_1407_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1360_ == 0)
{
uint64_t v___x_1414_; 
v___x_1414_ = 0ULL;
v___y_1409_ = v___x_1414_;
goto v___jp_1408_;
}
else
{
uint64_t v___x_1415_; 
v___x_1415_ = 2ULL;
v___y_1409_ = v___x_1415_;
goto v___jp_1408_;
}
v___jp_1362_:
{
uint64_t v_flags_1365_; uint32_t v___x_1366_; lean_object* v___x_1367_; uint32_t v___x_1368_; lean_object* v___x_1369_; 
v_flags_1365_ = lean_uint64_lor(v___y_1363_, v___y_1364_);
v___x_1366_ = 214;
v___x_1367_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1358_, v_args_1359_);
v___x_1368_ = 0;
v___x_1369_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1366_, v_flags_1365_, v___x_1367_, v___x_1368_);
lean_dec(v___x_1367_);
if (lean_obj_tag(v___x_1369_) == 0)
{
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; lean_object* v___x_1371_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1370_);
lean_dec_ref_known(v___x_1369_, 1);
v___x_1371_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1370_);
lean_dec(v_a_1370_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_a_1372_);
lean_dec_ref_known(v___x_1371_, 1);
v___x_1373_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1358_);
v___x_1374_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(v___x_1373_, v_a_1372_);
lean_dec_ref(v___x_1373_);
return v___x_1374_;
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
v_a_1375_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1371_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1371_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
v_a_1383_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1369_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1369_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
lean_ctor_set_tag(v___x_1385_, 1);
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1406_; 
v_a_1391_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1393_ = v___x_1369_;
v_isShared_1394_ = v_isSharedCheck_1406_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1369_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1406_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1404_; 
v___x_1395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1396_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1358_);
v___x_1397_ = lean_string_append(v___x_1395_, v___x_1396_);
lean_dec_ref(v___x_1396_);
v___x_1398_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1399_ = lean_string_append(v___x_1397_, v___x_1398_);
v___x_1400_ = lean_io_error_to_string(v_a_1391_);
v___x_1401_ = lean_string_append(v___x_1399_, v___x_1400_);
lean_dec_ref(v___x_1400_);
v___x_1402_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
if (v_isShared_1394_ == 0)
{
lean_ctor_set(v___x_1393_, 0, v___x_1402_);
v___x_1404_ = v___x_1393_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___x_1402_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
v___jp_1408_:
{
uint8_t v_construct_1410_; uint64_t v___x_1411_; 
v_construct_1410_ = lean_ctor_get_uint8(v_b_1358_, sizeof(void*)*4);
v___x_1411_ = lean_uint64_lor(v___x_1407_, v___y_1409_);
if (v_construct_1410_ == 0)
{
uint64_t v___x_1412_; 
v___x_1412_ = 0ULL;
v___y_1363_ = v___x_1411_;
v___y_1364_ = v___x_1412_;
goto v___jp_1362_;
}
else
{
uint64_t v___x_1413_; 
v___x_1413_ = 4ULL;
v___y_1363_ = v___x_1411_;
v___y_1364_ = v___x_1413_;
goto v___jp_1362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___boxed(lean_object* v_b_1416_, lean_object* v_args_1417_, lean_object* v_await_1418_, lean_object* v_a_1419_){
_start:
{
uint8_t v_await_boxed_1420_; lean_object* v_res_1421_; 
v_await_boxed_1420_ = lean_unbox(v_await_1418_);
v_res_1421_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(v_b_1416_, v_args_1417_, v_await_boxed_1420_);
lean_dec_ref(v_b_1416_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_new(lean_object* v_bytes_1431_, lean_object* v_options_1432_){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; lean_object* v___x_1443_; 
v___x_1434_ = lean_unsigned_to_nat(2u);
v___x_1435_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_new___closed__3));
v___x_1436_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1436_, 0, v_bytes_1431_);
v___x_1437_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_1432_);
v___x_1438_ = lean_mk_empty_array_with_capacity(v___x_1434_);
v___x_1439_ = lean_array_push(v___x_1438_, v___x_1436_);
v___x_1440_ = lean_array_push(v___x_1439_, v___x_1437_);
v___x_1441_ = l_Lasm_JS_Web_Support_args(v___x_1440_);
v___x_1442_ = 0;
v___x_1443_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(v___x_1435_, v___x_1441_, v___x_1442_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_new___boxed(lean_object* v_bytes_1444_, lean_object* v_options_1445_, lean_object* v_a_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lasm_JS_Web_WebAssembly_Module_new(v_bytes_1444_, v_options_1445_);
return v_res_1447_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0));
v___x_1452_ = lean_string_utf8_byte_size(v___x_1451_);
return v___x_1452_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v___x_1453_ = lean_unsigned_to_nat(0u);
v___x_1454_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3);
v___x_1455_ = lean_nat_dec_eq(v___x_1454_, v___x_1453_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(lean_object* v_d_1460_, lean_object* v_key_1461_){
_start:
{
if (lean_obj_tag(v_d_1460_) == 8)
{
lean_object* v___x_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1502_; 
v___x_1462_ = l_Lasm_JS_Data_field(v_d_1460_, v_key_1461_);
v_isSharedCheck_1502_ = !lean_is_exclusive(v_d_1460_);
if (v_isSharedCheck_1502_ == 0)
{
lean_object* v_unused_1503_; 
v_unused_1503_ = lean_ctor_get(v_d_1460_, 0);
lean_dec(v_unused_1503_);
v___x_1464_ = v_d_1460_;
v_isShared_1465_ = v_isSharedCheck_1502_;
goto v_resetjp_1463_;
}
else
{
lean_dec(v_d_1460_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1502_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
if (lean_obj_tag(v___x_1462_) == 4)
{
lean_object* v_s_1486_; lean_object* v___x_1487_; uint8_t v___x_1488_; 
v_s_1486_ = lean_ctor_get(v___x_1462_, 0);
lean_inc_ref(v_s_1486_);
v___x_1487_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0));
v___x_1488_ = lean_string_dec_eq(v_s_1486_, v___x_1487_);
if (v___x_1488_ == 0)
{
lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1489_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2));
v___x_1490_ = lean_string_dec_eq(v_s_1486_, v___x_1489_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; uint8_t v___x_1492_; 
v___x_1491_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4));
v___x_1492_ = lean_string_dec_eq(v_s_1486_, v___x_1491_);
if (v___x_1492_ == 0)
{
lean_object* v___x_1493_; uint8_t v___x_1494_; 
v___x_1493_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6));
v___x_1494_ = lean_string_dec_eq(v_s_1486_, v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1495_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8));
v___x_1496_ = lean_string_dec_eq(v_s_1486_, v___x_1495_);
lean_dec_ref(v_s_1486_);
if (v___x_1496_ == 0)
{
goto v___jp_1466_;
}
else
{
lean_object* v___x_1497_; 
lean_dec_ref_known(v___x_1462_, 1);
lean_del_object(v___x_1464_);
v___x_1497_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__2));
return v___x_1497_;
}
}
else
{
lean_object* v___x_1498_; 
lean_dec_ref_known(v___x_1462_, 1);
lean_dec_ref(v_s_1486_);
lean_del_object(v___x_1464_);
v___x_1498_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__3));
return v___x_1498_;
}
}
else
{
lean_object* v___x_1499_; 
lean_dec_ref_known(v___x_1462_, 1);
lean_dec_ref(v_s_1486_);
lean_del_object(v___x_1464_);
v___x_1499_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__4));
return v___x_1499_;
}
}
else
{
lean_object* v___x_1500_; 
lean_dec_ref_known(v___x_1462_, 1);
lean_dec_ref(v_s_1486_);
lean_del_object(v___x_1464_);
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__5));
return v___x_1500_;
}
}
else
{
lean_object* v___x_1501_; 
lean_dec_ref_known(v___x_1462_, 1);
lean_dec_ref(v_s_1486_);
lean_del_object(v___x_1464_);
v___x_1501_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__6));
return v___x_1501_;
}
}
else
{
goto v___jp_1466_;
}
v___jp_1466_:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; uint8_t v___x_1477_; 
v___x_1467_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_1468_ = lean_string_append(v___x_1467_, v_key_1461_);
v___x_1469_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_1470_ = lean_string_append(v___x_1468_, v___x_1469_);
v___x_1471_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___closed__1));
v___x_1472_ = lean_string_append(v___x_1470_, v___x_1471_);
v___x_1473_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_1474_ = lean_string_append(v___x_1472_, v___x_1473_);
v___x_1475_ = l_Lasm_JS_Data_describe(v___x_1462_);
v___x_1476_ = lean_string_append(v___x_1474_, v___x_1475_);
lean_dec_ref(v___x_1475_);
v___x_1477_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1478_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5));
v___x_1479_ = lean_string_append(v___x_1476_, v___x_1478_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set_tag(v___x_1464_, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1479_);
v___x_1481_ = v___x_1464_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
else
{
lean_object* v___x_1484_; 
if (v_isShared_1465_ == 0)
{
lean_ctor_set_tag(v___x_1464_, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1476_);
v___x_1484_ = v___x_1464_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___x_1476_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
}
else
{
lean_object* v___x_1504_; 
lean_dec(v_d_1460_);
v___x_1504_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__7));
return v___x_1504_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1505_, lean_object* v_key_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_d_1505_, v_key_1506_);
lean_dec_ref(v_key_1506_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(lean_object* v_d_1511_, lean_object* v_key_1512_){
_start:
{
if (lean_obj_tag(v_d_1511_) == 8)
{
lean_object* v___x_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1544_; 
v___x_1513_ = l_Lasm_JS_Data_field(v_d_1511_, v_key_1512_);
v_isSharedCheck_1544_ = !lean_is_exclusive(v_d_1511_);
if (v_isSharedCheck_1544_ == 0)
{
lean_object* v_unused_1545_; 
v_unused_1545_ = lean_ctor_get(v_d_1511_, 0);
lean_dec(v_unused_1545_);
v___x_1515_ = v_d_1511_;
v_isShared_1516_ = v_isSharedCheck_1544_;
goto v_resetjp_1514_;
}
else
{
lean_dec(v_d_1511_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1544_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
if (lean_obj_tag(v___x_1513_) == 4)
{
lean_object* v_s_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1524_; 
lean_del_object(v___x_1515_);
v_s_1517_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1519_ = v___x_1513_;
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_s_1517_);
lean_dec(v___x_1513_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1522_; 
if (v_isShared_1520_ == 0)
{
lean_ctor_set_tag(v___x_1519_, 1);
v___x_1522_ = v___x_1519_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_s_1517_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
else
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; 
v___x_1525_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_1526_ = lean_string_append(v___x_1525_, v_key_1512_);
v___x_1527_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_1528_ = lean_string_append(v___x_1526_, v___x_1527_);
v___x_1529_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0));
v___x_1530_ = lean_string_append(v___x_1528_, v___x_1529_);
v___x_1531_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_1532_ = lean_string_append(v___x_1530_, v___x_1531_);
v___x_1533_ = l_Lasm_JS_Data_describe(v___x_1513_);
v___x_1534_ = lean_string_append(v___x_1532_, v___x_1533_);
lean_dec_ref(v___x_1533_);
v___x_1535_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1536_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___x_1537_ = lean_string_append(v___x_1534_, v___x_1536_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set_tag(v___x_1515_, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1537_);
v___x_1539_ = v___x_1515_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
else
{
lean_object* v___x_1542_; 
if (v_isShared_1516_ == 0)
{
lean_ctor_set_tag(v___x_1515_, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1534_);
v___x_1542_ = v___x_1515_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1534_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
}
else
{
lean_object* v___x_1546_; 
lean_dec(v_d_1511_);
v___x_1546_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__1));
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1547_, lean_object* v_key_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_d_1547_, v_key_1548_);
lean_dec_ref(v_key_1548_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(size_t v_sz_1550_, size_t v_i_1551_, lean_object* v_bs_1552_){
_start:
{
uint8_t v___x_1553_; 
v___x_1553_ = lean_usize_dec_lt(v_i_1551_, v_sz_1550_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1554_, 0, v_bs_1552_);
return v___x_1554_;
}
else
{
lean_object* v_v_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_v_1555_ = lean_array_uget_borrowed(v_bs_1552_, v_i_1551_);
v___x_1556_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
lean_inc(v_v_1555_);
v___x_1557_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1555_, v___x_1556_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec_ref(v_bs_1552_);
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1557_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1557_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
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
lean_object* v_a_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_a_1566_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1557_, 1);
v___x_1567_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1));
lean_inc(v_v_1555_);
v___x_1568_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_v_1555_, v___x_1567_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_dec(v_a_1566_);
lean_dec_ref(v_bs_1552_);
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1568_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1568_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
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
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
else
{
lean_object* v_a_1577_; lean_object* v___x_1578_; lean_object* v_bs_x27_1579_; lean_object* v___x_1580_; uint8_t v___x_1581_; size_t v___x_1582_; size_t v___x_1583_; lean_object* v___x_1584_; 
v_a_1577_ = lean_ctor_get(v___x_1568_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1568_, 1);
v___x_1578_ = lean_unsigned_to_nat(0u);
v_bs_x27_1579_ = lean_array_uset(v_bs_1552_, v_i_1551_, v___x_1578_);
v___x_1580_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1580_, 0, v_a_1566_);
v___x_1581_ = lean_unbox(v_a_1577_);
lean_dec(v_a_1577_);
lean_ctor_set_uint8(v___x_1580_, sizeof(void*)*1, v___x_1581_);
v___x_1582_ = ((size_t)1ULL);
v___x_1583_ = lean_usize_add(v_i_1551_, v___x_1582_);
v___x_1584_ = lean_array_uset(v_bs_x27_1579_, v_i_1551_, v___x_1580_);
v_i_1551_ = v___x_1583_;
v_bs_1552_ = v___x_1584_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3___boxed(lean_object* v_sz_1586_, lean_object* v_i_1587_, lean_object* v_bs_1588_){
_start:
{
size_t v_sz_boxed_1589_; size_t v_i_boxed_1590_; lean_object* v_res_1591_; 
v_sz_boxed_1589_ = lean_unbox_usize(v_sz_1586_);
lean_dec(v_sz_1586_);
v_i_boxed_1590_ = lean_unbox_usize(v_i_1587_);
lean_dec(v_i_1587_);
v_res_1591_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(v_sz_boxed_1589_, v_i_boxed_1590_, v_bs_1588_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(lean_object* v_context_1596_, lean_object* v_d_1597_){
_start:
{
lean_object* v___y_1600_; lean_object* v___y_1601_; lean_object* v___y_1606_; lean_object* v_received_1607_; lean_object* v___y_1626_; lean_object* v_a_1629_; 
if (lean_obj_tag(v_d_1597_) == 7)
{
lean_object* v_items_1653_; size_t v_sz_1654_; size_t v___x_1655_; lean_object* v___x_1656_; 
v_items_1653_ = lean_ctor_get(v_d_1597_, 0);
v_sz_1654_ = lean_array_size(v_items_1653_);
v___x_1655_ = ((size_t)0ULL);
lean_inc_ref(v_items_1653_);
v___x_1656_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(v_sz_1654_, v___x_1655_, v_items_1653_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; uint8_t v___x_1661_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
v___x_1658_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__3));
v___x_1659_ = lean_string_utf8_byte_size(v_a_1657_);
v___x_1660_ = lean_unsigned_to_nat(0u);
v___x_1661_ = lean_nat_dec_eq(v___x_1659_, v___x_1660_);
if (v___x_1661_ == 0)
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1662_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1663_ = lean_string_append(v___x_1662_, v_a_1657_);
lean_dec(v_a_1657_);
v___x_1664_ = lean_string_append(v___x_1658_, v___x_1663_);
lean_dec_ref(v___x_1663_);
v_a_1629_ = v___x_1664_;
goto v___jp_1628_;
}
else
{
lean_dec(v_a_1657_);
v_a_1629_ = v___x_1658_;
goto v___jp_1628_;
}
}
else
{
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1665_; 
v_a_1665_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1665_);
lean_dec_ref_known(v___x_1656_, 1);
v_a_1629_ = v_a_1665_;
goto v___jp_1628_;
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_dec_ref_known(v_d_1597_, 1);
v_a_1666_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1656_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1656_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 0);
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_1674_; 
v___x_1674_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_1629_ = v___x_1674_;
goto v___jp_1628_;
}
v___jp_1599_:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = lean_string_append(v___y_1600_, v___y_1601_);
lean_dec_ref(v___y_1601_);
v___x_1603_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1602_);
v___x_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
return v___x_1604_;
}
v___jp_1605_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1608_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1609_ = lean_string_append(v___x_1608_, v_context_1596_);
v___x_1610_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1611_ = lean_string_append(v___x_1609_, v___x_1610_);
v___x_1612_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__0));
v___x_1613_ = lean_string_append(v___x_1611_, v___x_1612_);
v___x_1614_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1615_ = lean_string_append(v___x_1613_, v___x_1614_);
v___x_1616_ = lean_string_append(v___x_1615_, v_received_1607_);
lean_dec_ref(v_received_1607_);
v___x_1617_ = lean_string_utf8_byte_size(v___y_1606_);
v___x_1618_ = lean_unsigned_to_nat(0u);
v___x_1619_ = lean_nat_dec_eq(v___x_1617_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1620_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_1621_ = lean_string_append(v___x_1620_, v___y_1606_);
lean_dec_ref(v___y_1606_);
v___x_1622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_1623_ = lean_string_append(v___x_1621_, v___x_1622_);
v___y_1600_ = v___x_1616_;
v___y_1601_ = v___x_1623_;
goto v___jp_1599_;
}
else
{
lean_object* v___x_1624_; 
lean_dec_ref(v___y_1606_);
v___x_1624_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_1600_ = v___x_1616_;
v___y_1601_ = v___x_1624_;
goto v___jp_1599_;
}
}
v___jp_1625_:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lasm_JS_Data_describe(v_d_1597_);
v___y_1606_ = v___y_1626_;
v_received_1607_ = v___x_1627_;
goto v___jp_1605_;
}
v___jp_1628_:
{
if (lean_obj_tag(v_d_1597_) == 9)
{
lean_object* v_value_1630_; lean_object* v_description_1631_; lean_object* v___x_1632_; uint8_t v___x_1633_; 
v_value_1630_ = lean_ctor_get(v_d_1597_, 0);
v_description_1631_ = lean_ctor_get(v_d_1597_, 1);
v___x_1632_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1633_ = lean_string_dec_eq(v_description_1631_, v___x_1632_);
if (v___x_1633_ == 0)
{
v___y_1626_ = v_a_1629_;
goto v___jp_1625_;
}
else
{
lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1650_; 
lean_inc(v_value_1630_);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_d_1597_);
if (v_isSharedCheck_1650_ == 0)
{
lean_object* v_unused_1651_; lean_object* v_unused_1652_; 
v_unused_1651_ = lean_ctor_get(v_d_1597_, 1);
lean_dec(v_unused_1651_);
v_unused_1652_ = lean_ctor_get(v_d_1597_, 0);
lean_dec(v_unused_1652_);
v___x_1635_ = v_d_1597_;
v_isShared_1636_ = v_isSharedCheck_1650_;
goto v_resetjp_1634_;
}
else
{
lean_dec(v_d_1597_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1650_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
uint32_t v___x_1637_; uint64_t v___x_1638_; lean_object* v___x_1640_; 
v___x_1637_ = 206;
v___x_1638_ = 0ULL;
lean_inc(v_value_1630_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 1, v___x_1632_);
v___x_1640_ = v___x_1635_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_value_1630_);
lean_ctor_set(v_reuseFailAlloc_1649_, 1, v___x_1632_);
v___x_1640_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
uint32_t v___x_1641_; lean_object* v___x_1642_; 
v___x_1641_ = lasm_js_value_handle(v_value_1630_);
lean_dec(v_value_1630_);
v___x_1642_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1637_, v___x_1638_, v___x_1640_, v___x_1641_);
lean_dec_ref(v___x_1640_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; uint8_t v___x_1644_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1642_, 1);
v___x_1644_ = lean_string_validate_utf8(v_a_1643_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
lean_dec(v_a_1643_);
v___x_1645_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_1646_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1645_);
v___y_1606_ = v_a_1629_;
v_received_1607_ = v___x_1646_;
goto v___jp_1605_;
}
else
{
lean_object* v___x_1647_; 
v___x_1647_ = lean_string_from_utf8_unchecked(v_a_1643_);
v___y_1606_ = v_a_1629_;
v_received_1607_ = v___x_1647_;
goto v___jp_1605_;
}
}
else
{
lean_object* v___x_1648_; 
lean_dec_ref_known(v___x_1642_, 1);
v___x_1648_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v___y_1606_ = v_a_1629_;
v_received_1607_ = v___x_1648_;
goto v___jp_1605_;
}
}
}
}
}
else
{
v___y_1626_ = v_a_1629_;
goto v___jp_1625_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___boxed(lean_object* v_context_1675_, lean_object* v_d_1676_, lean_object* v_a_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(v_context_1675_, v_d_1676_);
lean_dec_ref(v_context_1675_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(lean_object* v_b_1679_, lean_object* v_args_1680_, uint8_t v_await_1681_){
_start:
{
uint64_t v___y_1684_; uint64_t v___y_1685_; uint64_t v___x_1728_; uint64_t v___y_1730_; 
v___x_1728_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1681_ == 0)
{
uint64_t v___x_1735_; 
v___x_1735_ = 0ULL;
v___y_1730_ = v___x_1735_;
goto v___jp_1729_;
}
else
{
uint64_t v___x_1736_; 
v___x_1736_ = 2ULL;
v___y_1730_ = v___x_1736_;
goto v___jp_1729_;
}
v___jp_1683_:
{
uint64_t v_flags_1686_; uint32_t v___x_1687_; lean_object* v___x_1688_; uint32_t v___x_1689_; lean_object* v___x_1690_; 
v_flags_1686_ = lean_uint64_lor(v___y_1684_, v___y_1685_);
v___x_1687_ = 214;
v___x_1688_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1679_, v_args_1680_);
v___x_1689_ = 0;
v___x_1690_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1687_, v_flags_1686_, v___x_1688_, v___x_1689_);
lean_dec(v___x_1688_);
if (lean_obj_tag(v___x_1690_) == 0)
{
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1692_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1691_);
lean_dec(v_a_1691_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_a_1693_);
lean_dec_ref_known(v___x_1692_, 1);
v___x_1694_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1679_);
v___x_1695_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(v___x_1694_, v_a_1693_);
lean_dec_ref(v___x_1694_);
return v___x_1695_;
}
else
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
v_a_1696_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v___x_1692_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1692_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
v_a_1704_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1706_ = v___x_1690_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1690_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
lean_ctor_set_tag(v___x_1706_, 1);
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
else
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1727_; 
v_a_1712_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1714_ = v___x_1690_;
v_isShared_1715_ = v_isSharedCheck_1727_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___x_1690_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1727_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1725_; 
v___x_1716_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1717_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1679_);
v___x_1718_ = lean_string_append(v___x_1716_, v___x_1717_);
lean_dec_ref(v___x_1717_);
v___x_1719_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1720_ = lean_string_append(v___x_1718_, v___x_1719_);
v___x_1721_ = lean_io_error_to_string(v_a_1712_);
v___x_1722_ = lean_string_append(v___x_1720_, v___x_1721_);
lean_dec_ref(v___x_1721_);
v___x_1723_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 0, v___x_1723_);
v___x_1725_ = v___x_1714_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1723_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
}
v___jp_1729_:
{
uint8_t v_construct_1731_; uint64_t v___x_1732_; 
v_construct_1731_ = lean_ctor_get_uint8(v_b_1679_, sizeof(void*)*4);
v___x_1732_ = lean_uint64_lor(v___x_1728_, v___y_1730_);
if (v_construct_1731_ == 0)
{
uint64_t v___x_1733_; 
v___x_1733_ = 0ULL;
v___y_1684_ = v___x_1732_;
v___y_1685_ = v___x_1733_;
goto v___jp_1683_;
}
else
{
uint64_t v___x_1734_; 
v___x_1734_ = 4ULL;
v___y_1684_ = v___x_1732_;
v___y_1685_ = v___x_1734_;
goto v___jp_1683_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0___boxed(lean_object* v_b_1737_, lean_object* v_args_1738_, lean_object* v_await_1739_, lean_object* v_a_1740_){
_start:
{
uint8_t v_await_boxed_1741_; lean_object* v_res_1742_; 
v_await_boxed_1741_ = lean_unbox(v_await_1739_);
v_res_1742_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(v_b_1737_, v_args_1738_, v_await_boxed_1741_);
lean_dec_ref(v_b_1737_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports(lean_object* v_moduleObject_1751_){
_start:
{
uint8_t v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1753_ = 0;
v___x_1754_ = lean_unsigned_to_nat(1u);
v___x_1755_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_exports___closed__2));
v___x_1756_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1757_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1757_, 0, v_moduleObject_1751_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = lean_mk_empty_array_with_capacity(v___x_1754_);
v___x_1759_ = lean_array_push(v___x_1758_, v___x_1757_);
v___x_1760_ = l_Lasm_JS_Web_Support_args(v___x_1759_);
v___x_1761_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(v___x_1755_, v___x_1760_, v___x_1753_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports___boxed(lean_object* v_moduleObject_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Lasm_JS_Web_WebAssembly_Module_exports(v_moduleObject_1762_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(size_t v_sz_1765_, size_t v_i_1766_, lean_object* v_bs_1767_){
_start:
{
uint8_t v___x_1768_; 
v___x_1768_ = lean_usize_dec_lt(v_i_1766_, v_sz_1765_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1769_, 0, v_bs_1767_);
return v___x_1769_;
}
else
{
lean_object* v_v_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v_v_1770_ = lean_array_uget_borrowed(v_bs_1767_, v_i_1766_);
v___x_1771_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0));
lean_inc(v_v_1770_);
v___x_1772_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1770_, v___x_1771_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
lean_dec_ref(v_bs_1767_);
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1772_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1772_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v_a_1781_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1772_, 1);
v___x_1782_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
lean_inc(v_v_1770_);
v___x_1783_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1770_, v___x_1782_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v_a_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1791_; 
lean_dec(v_a_1781_);
lean_dec_ref(v_bs_1767_);
v_a_1784_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1791_ == 0)
{
v___x_1786_ = v___x_1783_;
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_a_1784_);
lean_dec(v___x_1783_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1789_; 
if (v_isShared_1787_ == 0)
{
v___x_1789_ = v___x_1786_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_a_1784_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
}
else
{
lean_object* v_a_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v_a_1792_ = lean_ctor_get(v___x_1783_, 0);
lean_inc(v_a_1792_);
lean_dec_ref_known(v___x_1783_, 1);
v___x_1793_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1));
lean_inc(v_v_1770_);
v___x_1794_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_v_1770_, v___x_1793_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
lean_dec(v_a_1792_);
lean_dec(v_a_1781_);
lean_dec_ref(v_bs_1767_);
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1794_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
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
lean_object* v_a_1803_; lean_object* v___x_1804_; lean_object* v_bs_x27_1805_; lean_object* v___x_1806_; uint8_t v___x_1807_; size_t v___x_1808_; size_t v___x_1809_; lean_object* v___x_1810_; 
v_a_1803_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_a_1803_);
lean_dec_ref_known(v___x_1794_, 1);
v___x_1804_ = lean_unsigned_to_nat(0u);
v_bs_x27_1805_ = lean_array_uset(v_bs_1767_, v_i_1766_, v___x_1804_);
v___x_1806_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1806_, 0, v_a_1781_);
lean_ctor_set(v___x_1806_, 1, v_a_1792_);
v___x_1807_ = lean_unbox(v_a_1803_);
lean_dec(v_a_1803_);
lean_ctor_set_uint8(v___x_1806_, sizeof(void*)*2, v___x_1807_);
v___x_1808_ = ((size_t)1ULL);
v___x_1809_ = lean_usize_add(v_i_1766_, v___x_1808_);
v___x_1810_ = lean_array_uset(v_bs_x27_1805_, v_i_1766_, v___x_1806_);
v_i_1766_ = v___x_1809_;
v_bs_1767_ = v___x_1810_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_1812_, lean_object* v_i_1813_, lean_object* v_bs_1814_){
_start:
{
size_t v_sz_boxed_1815_; size_t v_i_boxed_1816_; lean_object* v_res_1817_; 
v_sz_boxed_1815_ = lean_unbox_usize(v_sz_1812_);
lean_dec(v_sz_1812_);
v_i_boxed_1816_ = lean_unbox_usize(v_i_1813_);
lean_dec(v_i_1813_);
v_res_1817_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(v_sz_boxed_1815_, v_i_boxed_1816_, v_bs_1814_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(lean_object* v_context_1820_, lean_object* v_d_1821_){
_start:
{
lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1830_; lean_object* v_received_1831_; lean_object* v___y_1850_; lean_object* v_a_1853_; 
if (lean_obj_tag(v_d_1821_) == 7)
{
lean_object* v_items_1877_; size_t v_sz_1878_; size_t v___x_1879_; lean_object* v___x_1880_; 
v_items_1877_ = lean_ctor_get(v_d_1821_, 0);
v_sz_1878_ = lean_array_size(v_items_1877_);
v___x_1879_ = ((size_t)0ULL);
lean_inc_ref(v_items_1877_);
v___x_1880_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(v_sz_1878_, v___x_1879_, v_items_1877_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; uint8_t v___x_1885_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
v___x_1882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__1));
v___x_1883_ = lean_string_utf8_byte_size(v_a_1881_);
v___x_1884_ = lean_unsigned_to_nat(0u);
v___x_1885_ = lean_nat_dec_eq(v___x_1883_, v___x_1884_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1886_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1887_ = lean_string_append(v___x_1886_, v_a_1881_);
lean_dec(v_a_1881_);
v___x_1888_ = lean_string_append(v___x_1882_, v___x_1887_);
lean_dec_ref(v___x_1887_);
v_a_1853_ = v___x_1888_;
goto v___jp_1852_;
}
else
{
lean_dec(v_a_1881_);
v_a_1853_ = v___x_1882_;
goto v___jp_1852_;
}
}
else
{
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1889_; 
v_a_1889_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1889_);
lean_dec_ref_known(v___x_1880_, 1);
v_a_1853_ = v_a_1889_;
goto v___jp_1852_;
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
lean_dec_ref_known(v_d_1821_, 1);
v_a_1890_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1880_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1880_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
lean_ctor_set_tag(v___x_1892_, 0);
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
}
else
{
lean_object* v___x_1898_; 
v___x_1898_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_1853_ = v___x_1898_;
goto v___jp_1852_;
}
v___jp_1823_:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1826_ = lean_string_append(v___y_1824_, v___y_1825_);
lean_dec_ref(v___y_1825_);
v___x_1827_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
v___x_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
return v___x_1828_;
}
v___jp_1829_:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; uint8_t v___x_1843_; 
v___x_1832_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1833_ = lean_string_append(v___x_1832_, v_context_1820_);
v___x_1834_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1835_ = lean_string_append(v___x_1833_, v___x_1834_);
v___x_1836_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__0));
v___x_1837_ = lean_string_append(v___x_1835_, v___x_1836_);
v___x_1838_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1839_ = lean_string_append(v___x_1837_, v___x_1838_);
v___x_1840_ = lean_string_append(v___x_1839_, v_received_1831_);
lean_dec_ref(v_received_1831_);
v___x_1841_ = lean_string_utf8_byte_size(v___y_1830_);
v___x_1842_ = lean_unsigned_to_nat(0u);
v___x_1843_ = lean_nat_dec_eq(v___x_1841_, v___x_1842_);
if (v___x_1843_ == 0)
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_1845_ = lean_string_append(v___x_1844_, v___y_1830_);
lean_dec_ref(v___y_1830_);
v___x_1846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_1847_ = lean_string_append(v___x_1845_, v___x_1846_);
v___y_1824_ = v___x_1840_;
v___y_1825_ = v___x_1847_;
goto v___jp_1823_;
}
else
{
lean_object* v___x_1848_; 
lean_dec_ref(v___y_1830_);
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_1824_ = v___x_1840_;
v___y_1825_ = v___x_1848_;
goto v___jp_1823_;
}
}
v___jp_1849_:
{
lean_object* v___x_1851_; 
v___x_1851_ = l_Lasm_JS_Data_describe(v_d_1821_);
v___y_1830_ = v___y_1850_;
v_received_1831_ = v___x_1851_;
goto v___jp_1829_;
}
v___jp_1852_:
{
if (lean_obj_tag(v_d_1821_) == 9)
{
lean_object* v_value_1854_; lean_object* v_description_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; 
v_value_1854_ = lean_ctor_get(v_d_1821_, 0);
v_description_1855_ = lean_ctor_get(v_d_1821_, 1);
v___x_1856_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1857_ = lean_string_dec_eq(v_description_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
v___y_1850_ = v_a_1853_;
goto v___jp_1849_;
}
else
{
lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1874_; 
lean_inc(v_value_1854_);
v_isSharedCheck_1874_ = !lean_is_exclusive(v_d_1821_);
if (v_isSharedCheck_1874_ == 0)
{
lean_object* v_unused_1875_; lean_object* v_unused_1876_; 
v_unused_1875_ = lean_ctor_get(v_d_1821_, 1);
lean_dec(v_unused_1875_);
v_unused_1876_ = lean_ctor_get(v_d_1821_, 0);
lean_dec(v_unused_1876_);
v___x_1859_ = v_d_1821_;
v_isShared_1860_ = v_isSharedCheck_1874_;
goto v_resetjp_1858_;
}
else
{
lean_dec(v_d_1821_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1874_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
uint32_t v___x_1861_; uint64_t v___x_1862_; lean_object* v___x_1864_; 
v___x_1861_ = 206;
v___x_1862_ = 0ULL;
lean_inc(v_value_1854_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 1, v___x_1856_);
v___x_1864_ = v___x_1859_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_value_1854_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v___x_1856_);
v___x_1864_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
uint32_t v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = lasm_js_value_handle(v_value_1854_);
lean_dec(v_value_1854_);
v___x_1866_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1861_, v___x_1862_, v___x_1864_, v___x_1865_);
lean_dec_ref(v___x_1864_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; uint8_t v___x_1868_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1867_);
lean_dec_ref_known(v___x_1866_, 1);
v___x_1868_ = lean_string_validate_utf8(v_a_1867_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
lean_dec(v_a_1867_);
v___x_1869_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_1870_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1869_);
v___y_1830_ = v_a_1853_;
v_received_1831_ = v___x_1870_;
goto v___jp_1829_;
}
else
{
lean_object* v___x_1871_; 
v___x_1871_ = lean_string_from_utf8_unchecked(v_a_1867_);
v___y_1830_ = v_a_1853_;
v_received_1831_ = v___x_1871_;
goto v___jp_1829_;
}
}
else
{
lean_object* v___x_1872_; 
lean_dec_ref_known(v___x_1866_, 1);
v___x_1872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v___y_1830_ = v_a_1853_;
v_received_1831_ = v___x_1872_;
goto v___jp_1829_;
}
}
}
}
}
else
{
v___y_1850_ = v_a_1853_;
goto v___jp_1849_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___boxed(lean_object* v_context_1899_, lean_object* v_d_1900_, lean_object* v_a_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(v_context_1899_, v_d_1900_);
lean_dec_ref(v_context_1899_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(lean_object* v_b_1903_, lean_object* v_args_1904_, uint8_t v_await_1905_){
_start:
{
uint64_t v___y_1908_; uint64_t v___y_1909_; uint64_t v___x_1952_; uint64_t v___y_1954_; 
v___x_1952_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1905_ == 0)
{
uint64_t v___x_1959_; 
v___x_1959_ = 0ULL;
v___y_1954_ = v___x_1959_;
goto v___jp_1953_;
}
else
{
uint64_t v___x_1960_; 
v___x_1960_ = 2ULL;
v___y_1954_ = v___x_1960_;
goto v___jp_1953_;
}
v___jp_1907_:
{
uint64_t v_flags_1910_; uint32_t v___x_1911_; lean_object* v___x_1912_; uint32_t v___x_1913_; lean_object* v___x_1914_; 
v_flags_1910_ = lean_uint64_lor(v___y_1908_, v___y_1909_);
v___x_1911_ = 214;
v___x_1912_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1903_, v_args_1904_);
v___x_1913_ = 0;
v___x_1914_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1911_, v_flags_1910_, v___x_1912_, v___x_1913_);
lean_dec(v___x_1912_);
if (lean_obj_tag(v___x_1914_) == 0)
{
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1916_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v___x_1916_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1915_);
lean_dec(v_a_1915_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v___x_1916_, 1);
v___x_1918_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1903_);
v___x_1919_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(v___x_1918_, v_a_1917_);
lean_dec_ref(v___x_1918_);
return v___x_1919_;
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
v_a_1920_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1916_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1916_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
v_a_1928_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1914_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1914_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
lean_ctor_set_tag(v___x_1930_, 1);
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1951_; 
v_a_1936_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1938_ = v___x_1914_;
v_isShared_1939_ = v_isSharedCheck_1951_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1914_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1951_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1940_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1941_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1903_);
v___x_1942_ = lean_string_append(v___x_1940_, v___x_1941_);
lean_dec_ref(v___x_1941_);
v___x_1943_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1944_ = lean_string_append(v___x_1942_, v___x_1943_);
v___x_1945_ = lean_io_error_to_string(v_a_1936_);
v___x_1946_ = lean_string_append(v___x_1944_, v___x_1945_);
lean_dec_ref(v___x_1945_);
v___x_1947_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1946_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1947_);
v___x_1949_ = v___x_1938_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
v___jp_1953_:
{
uint8_t v_construct_1955_; uint64_t v___x_1956_; 
v_construct_1955_ = lean_ctor_get_uint8(v_b_1903_, sizeof(void*)*4);
v___x_1956_ = lean_uint64_lor(v___x_1952_, v___y_1954_);
if (v_construct_1955_ == 0)
{
uint64_t v___x_1957_; 
v___x_1957_ = 0ULL;
v___y_1908_ = v___x_1956_;
v___y_1909_ = v___x_1957_;
goto v___jp_1907_;
}
else
{
uint64_t v___x_1958_; 
v___x_1958_ = 4ULL;
v___y_1908_ = v___x_1956_;
v___y_1909_ = v___x_1958_;
goto v___jp_1907_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0___boxed(lean_object* v_b_1961_, lean_object* v_args_1962_, lean_object* v_await_1963_, lean_object* v_a_1964_){
_start:
{
uint8_t v_await_boxed_1965_; lean_object* v_res_1966_; 
v_await_boxed_1965_ = lean_unbox(v_await_1963_);
v_res_1966_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(v_b_1961_, v_args_1962_, v_await_boxed_1965_);
lean_dec_ref(v_b_1961_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports(lean_object* v_moduleObject_1975_){
_start:
{
uint8_t v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1977_ = 0;
v___x_1978_ = lean_unsigned_to_nat(1u);
v___x_1979_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_imports___closed__2));
v___x_1980_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1981_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1981_, 0, v_moduleObject_1975_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1982_ = lean_mk_empty_array_with_capacity(v___x_1978_);
v___x_1983_ = lean_array_push(v___x_1982_, v___x_1981_);
v___x_1984_ = l_Lasm_JS_Web_Support_args(v___x_1983_);
v___x_1985_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(v___x_1979_, v___x_1984_, v___x_1977_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports___boxed(lean_object* v_moduleObject_1986_, lean_object* v_a_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_Lasm_JS_Web_WebAssembly_Module_imports(v_moduleObject_1986_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(size_t v_sz_1991_, size_t v_i_1992_, lean_object* v_bs_1993_){
_start:
{
uint8_t v___x_1994_; 
v___x_1994_ = lean_usize_dec_lt(v_i_1992_, v_sz_1991_);
if (v___x_1994_ == 0)
{
lean_object* v___x_1995_; 
v___x_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1995_, 0, v_bs_1993_);
return v___x_1995_;
}
else
{
lean_object* v_v_1996_; 
v_v_1996_ = lean_array_uget_borrowed(v_bs_1993_, v_i_1992_);
if (lean_obj_tag(v_v_1996_) == 9)
{
lean_object* v_value_1997_; lean_object* v___x_1998_; lean_object* v_bs_x27_1999_; size_t v___x_2000_; size_t v___x_2001_; lean_object* v___x_2002_; 
v_value_1997_ = lean_ctor_get(v_v_1996_, 0);
lean_inc(v_value_1997_);
v___x_1998_ = lean_unsigned_to_nat(0u);
v_bs_x27_1999_ = lean_array_uset(v_bs_1993_, v_i_1992_, v___x_1998_);
v___x_2000_ = ((size_t)1ULL);
v___x_2001_ = lean_usize_add(v_i_1992_, v___x_2000_);
v___x_2002_ = lean_array_uset(v_bs_x27_1999_, v_i_1992_, v_value_1997_);
v_i_1992_ = v___x_2001_;
v_bs_1993_ = v___x_2002_;
goto _start;
}
else
{
lean_object* v___x_2004_; 
lean_dec_ref(v_bs_1993_);
v___x_2004_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___closed__0));
return v___x_2004_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_2005_, lean_object* v_i_2006_, lean_object* v_bs_2007_){
_start:
{
size_t v_sz_boxed_2008_; size_t v_i_boxed_2009_; lean_object* v_res_2010_; 
v_sz_boxed_2008_ = lean_unbox_usize(v_sz_2005_);
lean_dec(v_sz_2005_);
v_i_boxed_2009_ = lean_unbox_usize(v_i_2006_);
lean_dec(v_i_2006_);
v_res_2010_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(v_sz_boxed_2008_, v_i_boxed_2009_, v_bs_2007_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(lean_object* v_context_2013_, lean_object* v_d_2014_){
_start:
{
lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___y_2023_; lean_object* v_received_2024_; lean_object* v___y_2043_; lean_object* v_a_2046_; 
if (lean_obj_tag(v_d_2014_) == 7)
{
lean_object* v_items_2070_; size_t v_sz_2071_; size_t v___x_2072_; lean_object* v___x_2073_; 
v_items_2070_ = lean_ctor_get(v_d_2014_, 0);
v_sz_2071_ = lean_array_size(v_items_2070_);
v___x_2072_ = ((size_t)0ULL);
lean_inc_ref(v_items_2070_);
v___x_2073_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(v_sz_2071_, v___x_2072_, v_items_2070_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; 
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2074_);
lean_dec_ref_known(v___x_2073_, 1);
v___x_2075_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__1));
v___x_2076_ = lean_string_utf8_byte_size(v_a_2074_);
v___x_2077_ = lean_unsigned_to_nat(0u);
v___x_2078_ = lean_nat_dec_eq(v___x_2076_, v___x_2077_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2079_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2080_ = lean_string_append(v___x_2079_, v_a_2074_);
lean_dec(v_a_2074_);
v___x_2081_ = lean_string_append(v___x_2075_, v___x_2080_);
lean_dec_ref(v___x_2080_);
v_a_2046_ = v___x_2081_;
goto v___jp_2045_;
}
else
{
lean_dec(v_a_2074_);
v_a_2046_ = v___x_2075_;
goto v___jp_2045_;
}
}
else
{
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2082_; 
v_a_2082_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2082_);
lean_dec_ref_known(v___x_2073_, 1);
v_a_2046_ = v_a_2082_;
goto v___jp_2045_;
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
lean_dec_ref_known(v_d_2014_, 1);
v_a_2083_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2073_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2073_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
lean_ctor_set_tag(v___x_2085_, 0);
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
}
else
{
lean_object* v___x_2091_; 
v___x_2091_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_2046_ = v___x_2091_;
goto v___jp_2045_;
}
v___jp_2016_:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2019_ = lean_string_append(v___y_2017_, v___y_2018_);
lean_dec_ref(v___y_2018_);
v___x_2020_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
v___x_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
return v___x_2021_;
}
v___jp_2022_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2026_ = lean_string_append(v___x_2025_, v_context_2013_);
v___x_2027_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2028_ = lean_string_append(v___x_2026_, v___x_2027_);
v___x_2029_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__0));
v___x_2030_ = lean_string_append(v___x_2028_, v___x_2029_);
v___x_2031_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2032_ = lean_string_append(v___x_2030_, v___x_2031_);
v___x_2033_ = lean_string_append(v___x_2032_, v_received_2024_);
lean_dec_ref(v_received_2024_);
v___x_2034_ = lean_string_utf8_byte_size(v___y_2023_);
v___x_2035_ = lean_unsigned_to_nat(0u);
v___x_2036_ = lean_nat_dec_eq(v___x_2034_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2037_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_2038_ = lean_string_append(v___x_2037_, v___y_2023_);
lean_dec_ref(v___y_2023_);
v___x_2039_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_2040_ = lean_string_append(v___x_2038_, v___x_2039_);
v___y_2017_ = v___x_2033_;
v___y_2018_ = v___x_2040_;
goto v___jp_2016_;
}
else
{
lean_object* v___x_2041_; 
lean_dec_ref(v___y_2023_);
v___x_2041_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_2017_ = v___x_2033_;
v___y_2018_ = v___x_2041_;
goto v___jp_2016_;
}
}
v___jp_2042_:
{
lean_object* v___x_2044_; 
v___x_2044_ = l_Lasm_JS_Data_describe(v_d_2014_);
v___y_2023_ = v___y_2043_;
v_received_2024_ = v___x_2044_;
goto v___jp_2022_;
}
v___jp_2045_:
{
if (lean_obj_tag(v_d_2014_) == 9)
{
lean_object* v_value_2047_; lean_object* v_description_2048_; lean_object* v___x_2049_; uint8_t v___x_2050_; 
v_value_2047_ = lean_ctor_get(v_d_2014_, 0);
v_description_2048_ = lean_ctor_get(v_d_2014_, 1);
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2050_ = lean_string_dec_eq(v_description_2048_, v___x_2049_);
if (v___x_2050_ == 0)
{
v___y_2043_ = v_a_2046_;
goto v___jp_2042_;
}
else
{
lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2067_; 
lean_inc(v_value_2047_);
v_isSharedCheck_2067_ = !lean_is_exclusive(v_d_2014_);
if (v_isSharedCheck_2067_ == 0)
{
lean_object* v_unused_2068_; lean_object* v_unused_2069_; 
v_unused_2068_ = lean_ctor_get(v_d_2014_, 1);
lean_dec(v_unused_2068_);
v_unused_2069_ = lean_ctor_get(v_d_2014_, 0);
lean_dec(v_unused_2069_);
v___x_2052_ = v_d_2014_;
v_isShared_2053_ = v_isSharedCheck_2067_;
goto v_resetjp_2051_;
}
else
{
lean_dec(v_d_2014_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2067_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
uint32_t v___x_2054_; uint64_t v___x_2055_; lean_object* v___x_2057_; 
v___x_2054_ = 206;
v___x_2055_ = 0ULL;
lean_inc(v_value_2047_);
if (v_isShared_2053_ == 0)
{
lean_ctor_set(v___x_2052_, 1, v___x_2049_);
v___x_2057_ = v___x_2052_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_value_2047_);
lean_ctor_set(v_reuseFailAlloc_2066_, 1, v___x_2049_);
v___x_2057_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
uint32_t v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = lasm_js_value_handle(v_value_2047_);
lean_dec(v_value_2047_);
v___x_2059_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2054_, v___x_2055_, v___x_2057_, v___x_2058_);
lean_dec_ref(v___x_2057_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; uint8_t v___x_2061_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2060_);
lean_dec_ref_known(v___x_2059_, 1);
v___x_2061_ = lean_string_validate_utf8(v_a_2060_);
if (v___x_2061_ == 0)
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
lean_dec(v_a_2060_);
v___x_2062_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2063_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2062_);
v___y_2023_ = v_a_2046_;
v_received_2024_ = v___x_2063_;
goto v___jp_2022_;
}
else
{
lean_object* v___x_2064_; 
v___x_2064_ = lean_string_from_utf8_unchecked(v_a_2060_);
v___y_2023_ = v_a_2046_;
v_received_2024_ = v___x_2064_;
goto v___jp_2022_;
}
}
else
{
lean_object* v___x_2065_; 
lean_dec_ref_known(v___x_2059_, 1);
v___x_2065_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v___y_2023_ = v_a_2046_;
v_received_2024_ = v___x_2065_;
goto v___jp_2022_;
}
}
}
}
}
else
{
v___y_2043_ = v_a_2046_;
goto v___jp_2042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___boxed(lean_object* v_context_2092_, lean_object* v_d_2093_, lean_object* v_a_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(v_context_2092_, v_d_2093_);
lean_dec_ref(v_context_2092_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(lean_object* v_b_2096_, lean_object* v_args_2097_, uint8_t v_await_2098_){
_start:
{
uint64_t v___y_2101_; uint64_t v___y_2102_; uint64_t v___x_2145_; uint64_t v___y_2147_; 
v___x_2145_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2098_ == 0)
{
uint64_t v___x_2152_; 
v___x_2152_ = 0ULL;
v___y_2147_ = v___x_2152_;
goto v___jp_2146_;
}
else
{
uint64_t v___x_2153_; 
v___x_2153_ = 2ULL;
v___y_2147_ = v___x_2153_;
goto v___jp_2146_;
}
v___jp_2100_:
{
uint64_t v_flags_2103_; uint32_t v___x_2104_; lean_object* v___x_2105_; uint32_t v___x_2106_; lean_object* v___x_2107_; 
v_flags_2103_ = lean_uint64_lor(v___y_2101_, v___y_2102_);
v___x_2104_ = 214;
v___x_2105_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2096_, v_args_2097_);
v___x_2106_ = 0;
v___x_2107_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2104_, v_flags_2103_, v___x_2105_, v___x_2106_);
lean_dec(v___x_2105_);
if (lean_obj_tag(v___x_2107_) == 0)
{
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2109_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2107_, 1);
v___x_2109_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2108_);
lean_dec(v_a_2108_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_a_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v_a_2110_ = lean_ctor_get(v___x_2109_, 0);
lean_inc(v_a_2110_);
lean_dec_ref_known(v___x_2109_, 1);
v___x_2111_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2096_);
v___x_2112_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(v___x_2111_, v_a_2110_);
lean_dec_ref(v___x_2111_);
return v___x_2112_;
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
v_a_2113_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2109_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2109_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
v_a_2121_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2107_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2107_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
lean_ctor_set_tag(v___x_2123_, 1);
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2144_; 
v_a_2129_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2131_ = v___x_2107_;
v_isShared_2132_ = v_isSharedCheck_2144_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2107_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2144_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2142_; 
v___x_2133_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2134_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2096_);
v___x_2135_ = lean_string_append(v___x_2133_, v___x_2134_);
lean_dec_ref(v___x_2134_);
v___x_2136_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2137_ = lean_string_append(v___x_2135_, v___x_2136_);
v___x_2138_ = lean_io_error_to_string(v_a_2129_);
v___x_2139_ = lean_string_append(v___x_2137_, v___x_2138_);
lean_dec_ref(v___x_2138_);
v___x_2140_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
if (v_isShared_2132_ == 0)
{
lean_ctor_set(v___x_2131_, 0, v___x_2140_);
v___x_2142_ = v___x_2131_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
v___jp_2146_:
{
uint8_t v_construct_2148_; uint64_t v___x_2149_; 
v_construct_2148_ = lean_ctor_get_uint8(v_b_2096_, sizeof(void*)*4);
v___x_2149_ = lean_uint64_lor(v___x_2145_, v___y_2147_);
if (v_construct_2148_ == 0)
{
uint64_t v___x_2150_; 
v___x_2150_ = 0ULL;
v___y_2101_ = v___x_2149_;
v___y_2102_ = v___x_2150_;
goto v___jp_2100_;
}
else
{
uint64_t v___x_2151_; 
v___x_2151_ = 4ULL;
v___y_2101_ = v___x_2149_;
v___y_2102_ = v___x_2151_;
goto v___jp_2100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0___boxed(lean_object* v_b_2154_, lean_object* v_args_2155_, lean_object* v_await_2156_, lean_object* v_a_2157_){
_start:
{
uint8_t v_await_boxed_2158_; lean_object* v_res_2159_; 
v_await_boxed_2158_ = lean_unbox(v_await_2156_);
v_res_2159_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(v_b_2154_, v_args_2155_, v_await_boxed_2158_);
lean_dec_ref(v_b_2154_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(size_t v_sz_2160_, size_t v_i_2161_, lean_object* v_bs_2162_){
_start:
{
uint8_t v___x_2164_; 
v___x_2164_ = lean_usize_dec_lt(v_i_2161_, v_sz_2160_);
if (v___x_2164_ == 0)
{
lean_object* v___x_2165_; 
v___x_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2165_, 0, v_bs_2162_);
return v___x_2165_;
}
else
{
lean_object* v_v_2166_; lean_object* v___x_2167_; lean_object* v_bs_x27_2168_; lean_object* v___x_2169_; 
v_v_2166_ = lean_array_uget(v_bs_2162_, v_i_2161_);
v___x_2167_ = lean_unsigned_to_nat(0u);
v_bs_x27_2168_ = lean_array_uset(v_bs_2162_, v_i_2161_, v___x_2167_);
v___x_2169_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_v_2166_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v_a_2170_; size_t v___x_2171_; size_t v___x_2172_; lean_object* v___x_2173_; 
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_a_2170_);
lean_dec_ref_known(v___x_2169_, 1);
v___x_2171_ = ((size_t)1ULL);
v___x_2172_ = lean_usize_add(v_i_2161_, v___x_2171_);
v___x_2173_ = lean_array_uset(v_bs_x27_2168_, v_i_2161_, v_a_2170_);
v_i_2161_ = v___x_2172_;
v_bs_2162_ = v___x_2173_;
goto _start;
}
else
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
lean_dec_ref(v_bs_x27_2168_);
v_a_2175_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2177_ = v___x_2169_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2169_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2175_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1___boxed(lean_object* v_sz_2183_, lean_object* v_i_2184_, lean_object* v_bs_2185_, lean_object* v___y_2186_){
_start:
{
size_t v_sz_boxed_2187_; size_t v_i_boxed_2188_; lean_object* v_res_2189_; 
v_sz_boxed_2187_ = lean_unbox_usize(v_sz_2183_);
lean_dec(v_sz_2183_);
v_i_boxed_2188_ = lean_unbox_usize(v_i_2184_);
lean_dec(v_i_2184_);
v_res_2189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(v_sz_boxed_2187_, v_i_boxed_2188_, v_bs_2185_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections(lean_object* v_moduleObject_2198_, lean_object* v_sectionName_2199_){
_start:
{
uint8_t v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2201_ = 0;
v___x_2202_ = lean_unsigned_to_nat(2u);
v___x_2203_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__2));
v___x_2204_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2205_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2205_, 0, v_moduleObject_2198_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
v___x_2206_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2206_, 0, v_sectionName_2199_);
v___x_2207_ = lean_mk_empty_array_with_capacity(v___x_2202_);
v___x_2208_ = lean_array_push(v___x_2207_, v___x_2205_);
v___x_2209_ = lean_array_push(v___x_2208_, v___x_2206_);
v___x_2210_ = l_Lasm_JS_Web_Support_args(v___x_2209_);
v___x_2211_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(v___x_2203_, v___x_2210_, v___x_2201_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; size_t v_sz_2213_; size_t v___x_2214_; lean_object* v___x_2215_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc(v_a_2212_);
lean_dec_ref_known(v___x_2211_, 1);
v_sz_2213_ = lean_array_size(v_a_2212_);
v___x_2214_ = ((size_t)0ULL);
v___x_2215_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(v_sz_2213_, v___x_2214_, v_a_2212_);
return v___x_2215_;
}
else
{
lean_object* v_a_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
v_a_2216_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2218_ = v___x_2211_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_a_2216_);
lean_dec(v___x_2211_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2216_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections___boxed(lean_object* v_moduleObject_2224_, lean_object* v_sectionName_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Lasm_JS_Web_WebAssembly_Module_customSections(v_moduleObject_2224_, v_sectionName_2225_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(lean_object* v_context_2228_, lean_object* v_d_2229_){
_start:
{
lean_object* v___y_2232_; lean_object* v___y_2233_; 
if (lean_obj_tag(v_d_2229_) == 9)
{
lean_object* v_value_2237_; lean_object* v___x_2238_; 
v_value_2237_ = lean_ctor_get(v_d_2229_, 0);
lean_inc(v_value_2237_);
lean_dec_ref_known(v_d_2229_, 2);
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_value_2237_);
return v___x_2238_;
}
else
{
lean_object* v___x_2239_; lean_object* v_received_2241_; 
v___x_2239_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_2229_) == 9)
{
lean_object* v_value_2255_; lean_object* v_description_2256_; uint8_t v___x_2257_; 
v_value_2255_ = lean_ctor_get(v_d_2229_, 0);
v_description_2256_ = lean_ctor_get(v_d_2229_, 1);
v___x_2257_ = lean_string_dec_eq(v_description_2256_, v___x_2239_);
if (v___x_2257_ == 0)
{
goto v___jp_2253_;
}
else
{
uint32_t v___x_2258_; uint64_t v___x_2259_; lean_object* v___x_2260_; uint32_t v___x_2261_; lean_object* v___x_2262_; 
lean_inc_n(v_value_2255_, 2);
lean_dec_ref_known(v_d_2229_, 2);
v___x_2258_ = 206;
v___x_2259_ = 0ULL;
v___x_2260_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2260_, 0, v_value_2255_);
lean_ctor_set(v___x_2260_, 1, v___x_2239_);
v___x_2261_ = lasm_js_value_handle(v_value_2255_);
lean_dec(v_value_2255_);
v___x_2262_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2258_, v___x_2259_, v___x_2260_, v___x_2261_);
lean_dec_ref_known(v___x_2260_, 2);
if (lean_obj_tag(v___x_2262_) == 0)
{
lean_object* v_a_2263_; uint8_t v___x_2264_; 
v_a_2263_ = lean_ctor_get(v___x_2262_, 0);
lean_inc(v_a_2263_);
lean_dec_ref_known(v___x_2262_, 1);
v___x_2264_ = lean_string_validate_utf8(v_a_2263_);
if (v___x_2264_ == 0)
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
lean_dec(v_a_2263_);
v___x_2265_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2266_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2265_);
v_received_2241_ = v___x_2266_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2267_; 
v___x_2267_ = lean_string_from_utf8_unchecked(v_a_2263_);
v_received_2241_ = v___x_2267_;
goto v___jp_2240_;
}
}
else
{
lean_object* v___x_2268_; 
lean_dec_ref_known(v___x_2262_, 1);
v___x_2268_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_2241_ = v___x_2268_;
goto v___jp_2240_;
}
}
}
else
{
goto v___jp_2253_;
}
v___jp_2240_:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; uint8_t v___x_2251_; 
v___x_2242_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2243_ = lean_string_append(v___x_2242_, v_context_2228_);
v___x_2244_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2245_ = lean_string_append(v___x_2243_, v___x_2244_);
v___x_2246_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInstance___closed__0));
v___x_2247_ = lean_string_append(v___x_2245_, v___x_2246_);
v___x_2248_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2249_ = lean_string_append(v___x_2247_, v___x_2248_);
v___x_2250_ = lean_string_append(v___x_2249_, v_received_2241_);
lean_dec_ref(v_received_2241_);
v___x_2251_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_2251_ == 0)
{
lean_object* v___x_2252_; 
v___x_2252_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_2232_ = v___x_2250_;
v___y_2233_ = v___x_2252_;
goto v___jp_2231_;
}
else
{
v___y_2232_ = v___x_2250_;
v___y_2233_ = v___x_2239_;
goto v___jp_2231_;
}
}
v___jp_2253_:
{
lean_object* v___x_2254_; 
v___x_2254_ = l_Lasm_JS_Data_describe(v_d_2229_);
v_received_2241_ = v___x_2254_;
goto v___jp_2240_;
}
}
v___jp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2234_ = lean_string_append(v___y_2232_, v___y_2233_);
v___x_2235_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
v___x_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
return v___x_2236_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0___boxed(lean_object* v_context_2269_, lean_object* v_d_2270_, lean_object* v_a_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(v_context_2269_, v_d_2270_);
lean_dec_ref(v_context_2269_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(lean_object* v_b_2273_, lean_object* v_args_2274_, uint8_t v_await_2275_){
_start:
{
uint64_t v___y_2278_; uint64_t v___y_2279_; uint64_t v___x_2322_; uint64_t v___y_2324_; 
v___x_2322_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2275_ == 0)
{
uint64_t v___x_2329_; 
v___x_2329_ = 0ULL;
v___y_2324_ = v___x_2329_;
goto v___jp_2323_;
}
else
{
uint64_t v___x_2330_; 
v___x_2330_ = 2ULL;
v___y_2324_ = v___x_2330_;
goto v___jp_2323_;
}
v___jp_2277_:
{
uint64_t v_flags_2280_; uint32_t v___x_2281_; lean_object* v___x_2282_; uint32_t v___x_2283_; lean_object* v___x_2284_; 
v_flags_2280_ = lean_uint64_lor(v___y_2278_, v___y_2279_);
v___x_2281_ = 214;
v___x_2282_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2273_, v_args_2274_);
v___x_2283_ = 0;
v___x_2284_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2281_, v_flags_2280_, v___x_2282_, v___x_2283_);
lean_dec(v___x_2282_);
if (lean_obj_tag(v___x_2284_) == 0)
{
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2286_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2284_, 1);
v___x_2286_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2285_);
lean_dec(v_a_2285_);
if (lean_obj_tag(v___x_2286_) == 0)
{
lean_object* v_a_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v_a_2287_ = lean_ctor_get(v___x_2286_, 0);
lean_inc(v_a_2287_);
lean_dec_ref_known(v___x_2286_, 1);
v___x_2288_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2273_);
v___x_2289_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(v___x_2288_, v_a_2287_);
lean_dec_ref(v___x_2288_);
return v___x_2289_;
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2297_; 
v_a_2290_ = lean_ctor_get(v___x_2286_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2292_ = v___x_2286_;
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___x_2286_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_a_2290_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
v_a_2298_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2284_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2284_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set_tag(v___x_2300_, 1);
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2321_; 
v_a_2306_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2308_ = v___x_2284_;
v_isShared_2309_ = v_isSharedCheck_2321_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2284_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2321_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2319_; 
v___x_2310_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2311_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2273_);
v___x_2312_ = lean_string_append(v___x_2310_, v___x_2311_);
lean_dec_ref(v___x_2311_);
v___x_2313_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2314_ = lean_string_append(v___x_2312_, v___x_2313_);
v___x_2315_ = lean_io_error_to_string(v_a_2306_);
v___x_2316_ = lean_string_append(v___x_2314_, v___x_2315_);
lean_dec_ref(v___x_2315_);
v___x_2317_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 0, v___x_2317_);
v___x_2319_ = v___x_2308_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2317_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
v___jp_2323_:
{
uint8_t v_construct_2325_; uint64_t v___x_2326_; 
v_construct_2325_ = lean_ctor_get_uint8(v_b_2273_, sizeof(void*)*4);
v___x_2326_ = lean_uint64_lor(v___x_2322_, v___y_2324_);
if (v_construct_2325_ == 0)
{
uint64_t v___x_2327_; 
v___x_2327_ = 0ULL;
v___y_2278_ = v___x_2326_;
v___y_2279_ = v___x_2327_;
goto v___jp_2277_;
}
else
{
uint64_t v___x_2328_; 
v___x_2328_ = 4ULL;
v___y_2278_ = v___x_2326_;
v___y_2279_ = v___x_2328_;
goto v___jp_2277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0___boxed(lean_object* v_b_2331_, lean_object* v_args_2332_, lean_object* v_await_2333_, lean_object* v_a_2334_){
_start:
{
uint8_t v_await_boxed_2335_; lean_object* v_res_2336_; 
v_await_boxed_2335_ = lean_unbox(v_await_2333_);
v_res_2336_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(v_b_2331_, v_args_2332_, v_await_boxed_2335_);
lean_dec_ref(v_b_2331_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new(lean_object* v_module_2345_, lean_object* v_importObject_2346_){
_start:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; uint8_t v___x_2356_; lean_object* v___x_2357_; 
v___x_2348_ = lean_unsigned_to_nat(2u);
v___x_2349_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Instance_new___closed__2));
v___x_2350_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2351_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2351_, 0, v_module_2345_);
lean_ctor_set(v___x_2351_, 1, v___x_2350_);
v___x_2352_ = lean_mk_empty_array_with_capacity(v___x_2348_);
v___x_2353_ = lean_array_push(v___x_2352_, v___x_2351_);
v___x_2354_ = lean_array_push(v___x_2353_, v_importObject_2346_);
v___x_2355_ = l_Lasm_JS_Web_Support_args(v___x_2354_);
v___x_2356_ = 0;
v___x_2357_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(v___x_2349_, v___x_2355_, v___x_2356_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new___boxed(lean_object* v_module_2358_, lean_object* v_importObject_2359_, lean_object* v_a_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = l_Lasm_JS_Web_WebAssembly_Instance_new(v_module_2358_, v_importObject_2359_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports(lean_object* v_self_2363_){
_start:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Instance_exports___closed__0));
v___x_2366_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2363_, v___x_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports___boxed(lean_object* v_self_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lasm_JS_Web_WebAssembly_Instance_exports(v_self_2367_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(lean_object* v_x_2370_){
_start:
{
if (lean_obj_tag(v_x_2370_) == 0)
{
lean_object* v___x_2371_; 
v___x_2371_ = lean_box(0);
return v___x_2371_;
}
else
{
lean_object* v_val_2372_; uint8_t v___x_2373_; 
v_val_2372_ = lean_ctor_get(v_x_2370_, 0);
v___x_2373_ = lean_unbox(v_val_2372_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; 
v___x_2374_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
return v___x_2374_;
}
else
{
lean_object* v___x_2375_; 
v___x_2375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
return v___x_2375_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0___boxed(lean_object* v_x_2376_){
_start:
{
lean_object* v_res_2377_; 
v_res_2377_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_x_2376_);
lean_dec(v_x_2376_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(lean_object* v_context_2378_, lean_object* v_d_2379_){
_start:
{
lean_object* v___y_2382_; lean_object* v___y_2383_; 
if (lean_obj_tag(v_d_2379_) == 9)
{
lean_object* v_value_2387_; lean_object* v___x_2388_; 
v_value_2387_ = lean_ctor_get(v_d_2379_, 0);
lean_inc(v_value_2387_);
lean_dec_ref_known(v_d_2379_, 2);
v___x_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2388_, 0, v_value_2387_);
return v___x_2388_;
}
else
{
lean_object* v___x_2389_; lean_object* v_received_2391_; 
v___x_2389_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_2379_) == 9)
{
lean_object* v_value_2405_; lean_object* v_description_2406_; uint8_t v___x_2407_; 
v_value_2405_ = lean_ctor_get(v_d_2379_, 0);
v_description_2406_ = lean_ctor_get(v_d_2379_, 1);
v___x_2407_ = lean_string_dec_eq(v_description_2406_, v___x_2389_);
if (v___x_2407_ == 0)
{
goto v___jp_2403_;
}
else
{
uint32_t v___x_2408_; uint64_t v___x_2409_; lean_object* v___x_2410_; uint32_t v___x_2411_; lean_object* v___x_2412_; 
lean_inc_n(v_value_2405_, 2);
lean_dec_ref_known(v_d_2379_, 2);
v___x_2408_ = 206;
v___x_2409_ = 0ULL;
v___x_2410_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2410_, 0, v_value_2405_);
lean_ctor_set(v___x_2410_, 1, v___x_2389_);
v___x_2411_ = lasm_js_value_handle(v_value_2405_);
lean_dec(v_value_2405_);
v___x_2412_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2408_, v___x_2409_, v___x_2410_, v___x_2411_);
lean_dec_ref_known(v___x_2410_, 2);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; uint8_t v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2413_);
lean_dec_ref_known(v___x_2412_, 1);
v___x_2414_ = lean_string_validate_utf8(v_a_2413_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
lean_dec(v_a_2413_);
v___x_2415_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2416_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2415_);
v_received_2391_ = v___x_2416_;
goto v___jp_2390_;
}
else
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_string_from_utf8_unchecked(v_a_2413_);
v_received_2391_ = v___x_2417_;
goto v___jp_2390_;
}
}
else
{
lean_object* v___x_2418_; 
lean_dec_ref_known(v___x_2412_, 1);
v___x_2418_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_2391_ = v___x_2418_;
goto v___jp_2390_;
}
}
}
else
{
goto v___jp_2403_;
}
v___jp_2390_:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; uint8_t v___x_2401_; 
v___x_2392_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2393_ = lean_string_append(v___x_2392_, v_context_2378_);
v___x_2394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2395_ = lean_string_append(v___x_2393_, v___x_2394_);
v___x_2396_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSMemory___closed__0));
v___x_2397_ = lean_string_append(v___x_2395_, v___x_2396_);
v___x_2398_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2399_ = lean_string_append(v___x_2397_, v___x_2398_);
v___x_2400_ = lean_string_append(v___x_2399_, v_received_2391_);
lean_dec_ref(v_received_2391_);
v___x_2401_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_2401_ == 0)
{
lean_object* v___x_2402_; 
v___x_2402_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_2382_ = v___x_2400_;
v___y_2383_ = v___x_2402_;
goto v___jp_2381_;
}
else
{
v___y_2382_ = v___x_2400_;
v___y_2383_ = v___x_2389_;
goto v___jp_2381_;
}
}
v___jp_2403_:
{
lean_object* v___x_2404_; 
v___x_2404_ = l_Lasm_JS_Data_describe(v_d_2379_);
v_received_2391_ = v___x_2404_;
goto v___jp_2390_;
}
}
v___jp_2381_:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2384_ = lean_string_append(v___y_2382_, v___y_2383_);
v___x_2385_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
v___x_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
return v___x_2386_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1___boxed(lean_object* v_context_2419_, lean_object* v_d_2420_, lean_object* v_a_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(v_context_2419_, v_d_2420_);
lean_dec_ref(v_context_2419_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(lean_object* v_b_2423_, lean_object* v_args_2424_, uint8_t v_await_2425_){
_start:
{
uint64_t v___y_2428_; uint64_t v___y_2429_; uint64_t v___x_2472_; uint64_t v___y_2474_; 
v___x_2472_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2425_ == 0)
{
uint64_t v___x_2479_; 
v___x_2479_ = 0ULL;
v___y_2474_ = v___x_2479_;
goto v___jp_2473_;
}
else
{
uint64_t v___x_2480_; 
v___x_2480_ = 2ULL;
v___y_2474_ = v___x_2480_;
goto v___jp_2473_;
}
v___jp_2427_:
{
uint64_t v_flags_2430_; uint32_t v___x_2431_; lean_object* v___x_2432_; uint32_t v___x_2433_; lean_object* v___x_2434_; 
v_flags_2430_ = lean_uint64_lor(v___y_2428_, v___y_2429_);
v___x_2431_ = 214;
v___x_2432_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2423_, v_args_2424_);
v___x_2433_ = 0;
v___x_2434_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2431_, v_flags_2430_, v___x_2432_, v___x_2433_);
lean_dec(v___x_2432_);
if (lean_obj_tag(v___x_2434_) == 0)
{
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2436_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_a_2435_);
lean_dec_ref_known(v___x_2434_, 1);
v___x_2436_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2435_);
lean_dec(v_a_2435_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2438_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2423_);
v___x_2439_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(v___x_2438_, v_a_2437_);
lean_dec_ref(v___x_2438_);
return v___x_2439_;
}
else
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2447_; 
v_a_2440_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2442_ = v___x_2436_;
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v___x_2436_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2445_; 
if (v_isShared_2443_ == 0)
{
v___x_2445_ = v___x_2442_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_a_2440_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
}
}
else
{
lean_object* v_a_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2455_; 
v_a_2448_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2455_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2450_ = v___x_2434_;
v_isShared_2451_ = v_isSharedCheck_2455_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_a_2448_);
lean_dec(v___x_2434_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2455_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2453_; 
if (v_isShared_2451_ == 0)
{
lean_ctor_set_tag(v___x_2450_, 1);
v___x_2453_ = v___x_2450_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v_a_2448_);
v___x_2453_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
return v___x_2453_;
}
}
}
}
else
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2471_; 
v_a_2456_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2458_ = v___x_2434_;
v_isShared_2459_ = v_isSharedCheck_2471_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v___x_2434_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2471_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2469_; 
v___x_2460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2461_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2423_);
v___x_2462_ = lean_string_append(v___x_2460_, v___x_2461_);
lean_dec_ref(v___x_2461_);
v___x_2463_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2464_ = lean_string_append(v___x_2462_, v___x_2463_);
v___x_2465_ = lean_io_error_to_string(v_a_2456_);
v___x_2466_ = lean_string_append(v___x_2464_, v___x_2465_);
lean_dec_ref(v___x_2465_);
v___x_2467_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2466_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2467_);
v___x_2469_ = v___x_2458_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2467_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
v___jp_2473_:
{
uint8_t v_construct_2475_; uint64_t v___x_2476_; 
v_construct_2475_ = lean_ctor_get_uint8(v_b_2423_, sizeof(void*)*4);
v___x_2476_ = lean_uint64_lor(v___x_2472_, v___y_2474_);
if (v_construct_2475_ == 0)
{
uint64_t v___x_2477_; 
v___x_2477_ = 0ULL;
v___y_2428_ = v___x_2476_;
v___y_2429_ = v___x_2477_;
goto v___jp_2427_;
}
else
{
uint64_t v___x_2478_; 
v___x_2478_ = 4ULL;
v___y_2428_ = v___x_2476_;
v___y_2429_ = v___x_2478_;
goto v___jp_2427_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1___boxed(lean_object* v_b_2481_, lean_object* v_args_2482_, lean_object* v_await_2483_, lean_object* v_a_2484_){
_start:
{
uint8_t v_await_boxed_2485_; lean_object* v_res_2486_; 
v_await_boxed_2485_ = lean_unbox(v_await_2483_);
v_res_2486_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(v_b_2481_, v_args_2482_, v_await_boxed_2485_);
lean_dec_ref(v_b_2481_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new(lean_object* v_descriptor_2495_){
_start:
{
lean_object* v_initial_2497_; lean_object* v_maximum_2498_; lean_object* v_address_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; uint8_t v___x_2518_; lean_object* v___x_2519_; 
v_initial_2497_ = lean_ctor_get(v_descriptor_2495_, 0);
v_maximum_2498_ = lean_ctor_get(v_descriptor_2495_, 1);
v_address_2499_ = lean_ctor_get(v_descriptor_2495_, 2);
v___x_2500_ = lean_unsigned_to_nat(1u);
v___x_2501_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_new___closed__2));
v___x_2502_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0));
lean_inc(v_initial_2497_);
v___x_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
lean_ctor_set(v___x_2503_, 1, v_initial_2497_);
v___x_2504_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1));
lean_inc(v_maximum_2498_);
v___x_2505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
lean_ctor_set(v___x_2505_, 1, v_maximum_2498_);
v___x_2506_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2));
v___x_2507_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_address_2499_);
v___x_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2506_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
v___x_2509_ = lean_unsigned_to_nat(3u);
v___x_2510_ = lean_mk_empty_array_with_capacity(v___x_2509_);
v___x_2511_ = lean_array_push(v___x_2510_, v___x_2503_);
v___x_2512_ = lean_array_push(v___x_2511_, v___x_2505_);
v___x_2513_ = lean_array_push(v___x_2512_, v___x_2508_);
v___x_2514_ = l_Lasm_JS_Web_Support_fields(v___x_2513_);
lean_dec_ref(v___x_2513_);
v___x_2515_ = lean_mk_empty_array_with_capacity(v___x_2500_);
v___x_2516_ = lean_array_push(v___x_2515_, v___x_2514_);
v___x_2517_ = l_Lasm_JS_Web_Support_args(v___x_2516_);
v___x_2518_ = 0;
v___x_2519_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(v___x_2501_, v___x_2517_, v___x_2518_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new___boxed(lean_object* v_descriptor_2520_, lean_object* v_a_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l_Lasm_JS_Web_WebAssembly_Memory_new(v_descriptor_2520_);
lean_dec_ref(v_descriptor_2520_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer(lean_object* v_self_2524_){
_start:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_buffer___closed__0));
v___x_2527_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_2524_, v___x_2526_);
if (lean_obj_tag(v___x_2527_) == 0)
{
lean_object* v_a_2528_; lean_object* v___x_2529_; 
v_a_2528_ = lean_ctor_get(v___x_2527_, 0);
lean_inc(v_a_2528_);
lean_dec_ref_known(v___x_2527_, 1);
v___x_2529_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2528_);
return v___x_2529_;
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
v_a_2530_ = lean_ctor_get(v___x_2527_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2527_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___x_2527_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2527_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2530_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer___boxed(lean_object* v_self_2538_, lean_object* v_a_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l_Lasm_JS_Web_WebAssembly_Memory_buffer(v_self_2538_);
return v_res_2540_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2541_; uint8_t v___x_2542_; uint64_t v___x_2543_; 
v___x_2541_ = 8ULL;
v___x_2542_ = 0;
v___x_2543_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0_spec__0(v___x_2542_, v___x_2541_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(lean_object* v_o_2544_, lean_object* v_name_2545_, lean_object* v_args_2546_){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; uint64_t v___x_2551_; lean_object* v___x_2552_; 
v___x_2548_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2549_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2549_, 0, v_o_2544_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
v___x_2550_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2550_, 0, v_name_2545_);
v___x_2551_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0);
v___x_2552_ = l_Lasm_JS_Value_invokeRaw(v___x_2549_, v___x_2550_, v_args_2546_, v___x_2551_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v_a_2553_; lean_object* v___x_2554_; 
v_a_2553_ = lean_ctor_get(v___x_2552_, 0);
lean_inc(v_a_2553_);
lean_dec_ref_known(v___x_2552_, 1);
v___x_2554_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_2553_);
lean_dec(v_a_2553_);
return v___x_2554_;
}
else
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2562_; 
v_a_2555_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2557_ = v___x_2552_;
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v___x_2552_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_a_2555_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___boxed(lean_object* v_o_2563_, lean_object* v_name_2564_, lean_object* v_args_2565_, lean_object* v_a_2566_){
_start:
{
lean_object* v_res_2567_; 
v_res_2567_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_o_2563_, v_name_2564_, v_args_2565_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow(lean_object* v_self_2569_, lean_object* v_delta_2570_){
_start:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2572_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0));
v___x_2573_ = lean_unsigned_to_nat(1u);
v___x_2574_ = lean_mk_empty_array_with_capacity(v___x_2573_);
v___x_2575_ = lean_array_push(v___x_2574_, v_delta_2570_);
v___x_2576_ = l_Lasm_JS_Web_Support_args(v___x_2575_);
v___x_2577_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2569_, v___x_2572_, v___x_2576_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow___boxed(lean_object* v_self_2578_, lean_object* v_delta_2579_, lean_object* v_a_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l_Lasm_JS_Web_WebAssembly_Memory_grow(v_self_2578_, v_delta_2579_);
return v_res_2581_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2(void){
_start:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2585_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__1));
v___x_2586_ = l_Lasm_JS_Web_Support_args(v___x_2585_);
return v___x_2586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer(lean_object* v_self_2587_){
_start:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2589_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__0));
v___x_2590_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_2591_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2587_, v___x_2589_, v___x_2590_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_a_2592_; lean_object* v___x_2593_; 
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_a_2592_);
lean_dec_ref_known(v___x_2591_, 1);
v___x_2593_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2592_);
return v___x_2593_;
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2601_; 
v_a_2594_ = lean_ctor_get(v___x_2591_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2596_ = v___x_2591_;
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v___x_2591_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2599_; 
if (v_isShared_2597_ == 0)
{
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_a_2594_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___boxed(lean_object* v_self_2602_, lean_object* v_a_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer(v_self_2602_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer(lean_object* v_self_2606_){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2608_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___closed__0));
v___x_2609_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_2610_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2606_, v___x_2608_, v___x_2609_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2612_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
v___x_2612_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2611_);
return v___x_2612_;
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2620_; 
v_a_2613_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2615_ = v___x_2610_;
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2610_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___boxed(lean_object* v_self_2621_, lean_object* v_a_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer(v_self_2621_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(lean_object* v_context_2624_, lean_object* v_d_2625_){
_start:
{
lean_object* v___y_2628_; lean_object* v___y_2629_; 
if (lean_obj_tag(v_d_2625_) == 9)
{
lean_object* v_value_2633_; lean_object* v___x_2634_; 
v_value_2633_ = lean_ctor_get(v_d_2625_, 0);
lean_inc(v_value_2633_);
lean_dec_ref_known(v_d_2625_, 2);
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v_value_2633_);
return v___x_2634_;
}
else
{
lean_object* v___x_2635_; lean_object* v_received_2637_; 
v___x_2635_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_2625_) == 9)
{
lean_object* v_value_2651_; lean_object* v_description_2652_; uint8_t v___x_2653_; 
v_value_2651_ = lean_ctor_get(v_d_2625_, 0);
v_description_2652_ = lean_ctor_get(v_d_2625_, 1);
v___x_2653_ = lean_string_dec_eq(v_description_2652_, v___x_2635_);
if (v___x_2653_ == 0)
{
goto v___jp_2649_;
}
else
{
uint32_t v___x_2654_; uint64_t v___x_2655_; lean_object* v___x_2656_; uint32_t v___x_2657_; lean_object* v___x_2658_; 
lean_inc_n(v_value_2651_, 2);
lean_dec_ref_known(v_d_2625_, 2);
v___x_2654_ = 206;
v___x_2655_ = 0ULL;
v___x_2656_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2656_, 0, v_value_2651_);
lean_ctor_set(v___x_2656_, 1, v___x_2635_);
v___x_2657_ = lasm_js_value_handle(v_value_2651_);
lean_dec(v_value_2651_);
v___x_2658_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2654_, v___x_2655_, v___x_2656_, v___x_2657_);
lean_dec_ref_known(v___x_2656_, 2);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; uint8_t v___x_2660_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = lean_string_validate_utf8(v_a_2659_);
if (v___x_2660_ == 0)
{
lean_object* v___x_2661_; lean_object* v___x_2662_; 
lean_dec(v_a_2659_);
v___x_2661_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2662_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2661_);
v_received_2637_ = v___x_2662_;
goto v___jp_2636_;
}
else
{
lean_object* v___x_2663_; 
v___x_2663_ = lean_string_from_utf8_unchecked(v_a_2659_);
v_received_2637_ = v___x_2663_;
goto v___jp_2636_;
}
}
else
{
lean_object* v___x_2664_; 
lean_dec_ref_known(v___x_2658_, 1);
v___x_2664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_2637_ = v___x_2664_;
goto v___jp_2636_;
}
}
}
else
{
goto v___jp_2649_;
}
v___jp_2636_:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; uint8_t v___x_2647_; 
v___x_2638_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2639_ = lean_string_append(v___x_2638_, v_context_2624_);
v___x_2640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2641_ = lean_string_append(v___x_2639_, v___x_2640_);
v___x_2642_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTable___closed__0));
v___x_2643_ = lean_string_append(v___x_2641_, v___x_2642_);
v___x_2644_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2645_ = lean_string_append(v___x_2643_, v___x_2644_);
v___x_2646_ = lean_string_append(v___x_2645_, v_received_2637_);
lean_dec_ref(v_received_2637_);
v___x_2647_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_2647_ == 0)
{
lean_object* v___x_2648_; 
v___x_2648_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_2628_ = v___x_2646_;
v___y_2629_ = v___x_2648_;
goto v___jp_2627_;
}
else
{
v___y_2628_ = v___x_2646_;
v___y_2629_ = v___x_2635_;
goto v___jp_2627_;
}
}
v___jp_2649_:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lasm_JS_Data_describe(v_d_2625_);
v_received_2637_ = v___x_2650_;
goto v___jp_2636_;
}
}
v___jp_2627_:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2630_ = lean_string_append(v___y_2628_, v___y_2629_);
v___x_2631_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2630_);
v___x_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
return v___x_2632_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0___boxed(lean_object* v_context_2665_, lean_object* v_d_2666_, lean_object* v_a_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(v_context_2665_, v_d_2666_);
lean_dec_ref(v_context_2665_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(lean_object* v_b_2669_, lean_object* v_args_2670_, uint8_t v_await_2671_){
_start:
{
uint64_t v___y_2674_; uint64_t v___y_2675_; uint64_t v___x_2718_; uint64_t v___y_2720_; 
v___x_2718_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2671_ == 0)
{
uint64_t v___x_2725_; 
v___x_2725_ = 0ULL;
v___y_2720_ = v___x_2725_;
goto v___jp_2719_;
}
else
{
uint64_t v___x_2726_; 
v___x_2726_ = 2ULL;
v___y_2720_ = v___x_2726_;
goto v___jp_2719_;
}
v___jp_2673_:
{
uint64_t v_flags_2676_; uint32_t v___x_2677_; lean_object* v___x_2678_; uint32_t v___x_2679_; lean_object* v___x_2680_; 
v_flags_2676_ = lean_uint64_lor(v___y_2674_, v___y_2675_);
v___x_2677_ = 214;
v___x_2678_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2669_, v_args_2670_);
v___x_2679_ = 0;
v___x_2680_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2677_, v_flags_2676_, v___x_2678_, v___x_2679_);
lean_dec(v___x_2678_);
if (lean_obj_tag(v___x_2680_) == 0)
{
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v___x_2682_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_a_2681_);
lean_dec_ref_known(v___x_2680_, 1);
v___x_2682_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2681_);
lean_dec(v_a_2681_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2684_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2669_);
v___x_2685_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(v___x_2684_, v_a_2683_);
lean_dec_ref(v___x_2684_);
return v___x_2685_;
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
v_a_2686_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2682_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2682_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
v_a_2694_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2696_ = v___x_2680_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2680_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
lean_ctor_set_tag(v___x_2696_, 1);
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2694_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2717_; 
v_a_2702_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2704_ = v___x_2680_;
v_isShared_2705_ = v_isSharedCheck_2717_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2680_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2717_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2715_; 
v___x_2706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2707_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2669_);
v___x_2708_ = lean_string_append(v___x_2706_, v___x_2707_);
lean_dec_ref(v___x_2707_);
v___x_2709_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2710_ = lean_string_append(v___x_2708_, v___x_2709_);
v___x_2711_ = lean_io_error_to_string(v_a_2702_);
v___x_2712_ = lean_string_append(v___x_2710_, v___x_2711_);
lean_dec_ref(v___x_2711_);
v___x_2713_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 0, v___x_2713_);
v___x_2715_ = v___x_2704_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v___x_2713_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
v___jp_2719_:
{
uint8_t v_construct_2721_; uint64_t v___x_2722_; 
v_construct_2721_ = lean_ctor_get_uint8(v_b_2669_, sizeof(void*)*4);
v___x_2722_ = lean_uint64_lor(v___x_2718_, v___y_2720_);
if (v_construct_2721_ == 0)
{
uint64_t v___x_2723_; 
v___x_2723_ = 0ULL;
v___y_2674_ = v___x_2722_;
v___y_2675_ = v___x_2723_;
goto v___jp_2673_;
}
else
{
uint64_t v___x_2724_; 
v___x_2724_ = 4ULL;
v___y_2674_ = v___x_2722_;
v___y_2675_ = v___x_2724_;
goto v___jp_2673_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0___boxed(lean_object* v_b_2727_, lean_object* v_args_2728_, lean_object* v_await_2729_, lean_object* v_a_2730_){
_start:
{
uint8_t v_await_boxed_2731_; lean_object* v_res_2732_; 
v_await_boxed_2731_ = lean_unbox(v_await_2729_);
v_res_2732_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(v_b_2727_, v_args_2728_, v_await_boxed_2731_);
lean_dec_ref(v_b_2727_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_new(lean_object* v_descriptor_2741_, lean_object* v_value_2742_){
_start:
{
uint8_t v_element_2744_; lean_object* v_initial_2745_; lean_object* v_maximum_2746_; lean_object* v_address_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___y_2752_; 
v_element_2744_ = lean_ctor_get_uint8(v_descriptor_2741_, sizeof(void*)*3);
v_initial_2745_ = lean_ctor_get(v_descriptor_2741_, 0);
v_maximum_2746_ = lean_ctor_get(v_descriptor_2741_, 1);
v_address_2747_ = lean_ctor_get(v_descriptor_2741_, 2);
v___x_2748_ = lean_unsigned_to_nat(2u);
v___x_2749_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_new___closed__2));
v___x_2750_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableDescriptor___lam__0___closed__0));
if (v_element_2744_ == 0)
{
lean_object* v___x_2774_; 
v___x_2774_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_2752_ = v___x_2774_;
goto v___jp_2751_;
}
else
{
lean_object* v___x_2775_; 
v___x_2775_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_2752_ = v___x_2775_;
goto v___jp_2751_;
}
v___jp_2751_:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; uint8_t v___x_2772_; lean_object* v___x_2773_; 
lean_inc(v___y_2752_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2750_);
lean_ctor_set(v___x_2753_, 1, v___y_2752_);
v___x_2754_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0));
lean_inc(v_initial_2745_);
v___x_2755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2754_);
lean_ctor_set(v___x_2755_, 1, v_initial_2745_);
v___x_2756_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1));
lean_inc(v_maximum_2746_);
v___x_2757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2756_);
lean_ctor_set(v___x_2757_, 1, v_maximum_2746_);
v___x_2758_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2));
v___x_2759_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_address_2747_);
v___x_2760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2758_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
v___x_2761_ = lean_unsigned_to_nat(4u);
v___x_2762_ = lean_mk_empty_array_with_capacity(v___x_2761_);
v___x_2763_ = lean_array_push(v___x_2762_, v___x_2753_);
v___x_2764_ = lean_array_push(v___x_2763_, v___x_2755_);
v___x_2765_ = lean_array_push(v___x_2764_, v___x_2757_);
v___x_2766_ = lean_array_push(v___x_2765_, v___x_2760_);
v___x_2767_ = l_Lasm_JS_Web_Support_fields(v___x_2766_);
lean_dec_ref(v___x_2766_);
v___x_2768_ = lean_mk_empty_array_with_capacity(v___x_2748_);
v___x_2769_ = lean_array_push(v___x_2768_, v___x_2767_);
v___x_2770_ = lean_array_push(v___x_2769_, v_value_2742_);
v___x_2771_ = l_Lasm_JS_Web_Support_args(v___x_2770_);
v___x_2772_ = 0;
v___x_2773_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(v___x_2749_, v___x_2771_, v___x_2772_);
return v___x_2773_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_new___boxed(lean_object* v_descriptor_2776_, lean_object* v_value_2777_, lean_object* v_a_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lasm_JS_Web_WebAssembly_Table_new(v_descriptor_2776_, v_value_2777_);
lean_dec_ref(v_descriptor_2776_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_length(lean_object* v_self_2781_){
_start:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2783_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_length___closed__0));
v___x_2784_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2781_, v___x_2783_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_length___boxed(lean_object* v_self_2785_, lean_object* v_a_2786_){
_start:
{
lean_object* v_res_2787_; 
v_res_2787_ = l_Lasm_JS_Web_WebAssembly_Table_length(v_self_2785_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_grow(lean_object* v_self_2788_, lean_object* v_delta_2789_, lean_object* v_value_2790_){
_start:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2792_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0));
v___x_2793_ = lean_unsigned_to_nat(2u);
v___x_2794_ = lean_mk_empty_array_with_capacity(v___x_2793_);
v___x_2795_ = lean_array_push(v___x_2794_, v_delta_2789_);
v___x_2796_ = lean_array_push(v___x_2795_, v_value_2790_);
v___x_2797_ = l_Lasm_JS_Web_Support_args(v___x_2796_);
v___x_2798_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2788_, v___x_2792_, v___x_2797_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_grow___boxed(lean_object* v_self_2799_, lean_object* v_delta_2800_, lean_object* v_value_2801_, lean_object* v_a_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lasm_JS_Web_WebAssembly_Table_grow(v_self_2799_, v_delta_2800_, v_value_2801_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_get(lean_object* v_self_2805_, lean_object* v_index_2806_){
_start:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2808_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_get___closed__0));
v___x_2809_ = lean_unsigned_to_nat(1u);
v___x_2810_ = lean_mk_empty_array_with_capacity(v___x_2809_);
v___x_2811_ = lean_array_push(v___x_2810_, v_index_2806_);
v___x_2812_ = l_Lasm_JS_Web_Support_args(v___x_2811_);
v___x_2813_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2805_, v___x_2808_, v___x_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_get___boxed(lean_object* v_self_2814_, lean_object* v_index_2815_, lean_object* v_a_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l_Lasm_JS_Web_WebAssembly_Table_get(v_self_2814_, v_index_2815_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_set(lean_object* v_self_2819_, lean_object* v_index_2820_, lean_object* v_value_2821_){
_start:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2823_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_set___closed__0));
v___x_2824_ = lean_unsigned_to_nat(2u);
v___x_2825_ = lean_mk_empty_array_with_capacity(v___x_2824_);
v___x_2826_ = lean_array_push(v___x_2825_, v_index_2820_);
v___x_2827_ = lean_array_push(v___x_2826_, v_value_2821_);
v___x_2828_ = l_Lasm_JS_Web_Support_args(v___x_2827_);
v___x_2829_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2819_, v___x_2823_, v___x_2828_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_set___boxed(lean_object* v_self_2830_, lean_object* v_index_2831_, lean_object* v_value_2832_, lean_object* v_a_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lasm_JS_Web_WebAssembly_Table_set(v_self_2830_, v_index_2831_, v_value_2832_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(lean_object* v_context_2835_, lean_object* v_d_2836_){
_start:
{
lean_object* v___y_2839_; lean_object* v___y_2840_; 
if (lean_obj_tag(v_d_2836_) == 9)
{
lean_object* v_value_2844_; lean_object* v___x_2845_; 
v_value_2844_ = lean_ctor_get(v_d_2836_, 0);
lean_inc(v_value_2844_);
lean_dec_ref_known(v_d_2836_, 2);
v___x_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2845_, 0, v_value_2844_);
return v___x_2845_;
}
else
{
lean_object* v___x_2846_; lean_object* v_received_2848_; 
v___x_2846_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_2836_) == 9)
{
lean_object* v_value_2862_; lean_object* v_description_2863_; uint8_t v___x_2864_; 
v_value_2862_ = lean_ctor_get(v_d_2836_, 0);
v_description_2863_ = lean_ctor_get(v_d_2836_, 1);
v___x_2864_ = lean_string_dec_eq(v_description_2863_, v___x_2846_);
if (v___x_2864_ == 0)
{
goto v___jp_2860_;
}
else
{
uint32_t v___x_2865_; uint64_t v___x_2866_; lean_object* v___x_2867_; uint32_t v___x_2868_; lean_object* v___x_2869_; 
lean_inc_n(v_value_2862_, 2);
lean_dec_ref_known(v_d_2836_, 2);
v___x_2865_ = 206;
v___x_2866_ = 0ULL;
v___x_2867_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2867_, 0, v_value_2862_);
lean_ctor_set(v___x_2867_, 1, v___x_2846_);
v___x_2868_ = lasm_js_value_handle(v_value_2862_);
lean_dec(v_value_2862_);
v___x_2869_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2865_, v___x_2866_, v___x_2867_, v___x_2868_);
lean_dec_ref_known(v___x_2867_, 2);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; uint8_t v___x_2871_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc(v_a_2870_);
lean_dec_ref_known(v___x_2869_, 1);
v___x_2871_ = lean_string_validate_utf8(v_a_2870_);
if (v___x_2871_ == 0)
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
lean_dec(v_a_2870_);
v___x_2872_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2873_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2872_);
v_received_2848_ = v___x_2873_;
goto v___jp_2847_;
}
else
{
lean_object* v___x_2874_; 
v___x_2874_ = lean_string_from_utf8_unchecked(v_a_2870_);
v_received_2848_ = v___x_2874_;
goto v___jp_2847_;
}
}
else
{
lean_object* v___x_2875_; 
lean_dec_ref_known(v___x_2869_, 1);
v___x_2875_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_2848_ = v___x_2875_;
goto v___jp_2847_;
}
}
}
else
{
goto v___jp_2860_;
}
v___jp_2847_:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; uint8_t v___x_2858_; 
v___x_2849_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2850_ = lean_string_append(v___x_2849_, v_context_2835_);
v___x_2851_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2852_ = lean_string_append(v___x_2850_, v___x_2851_);
v___x_2853_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSGlobal___closed__0));
v___x_2854_ = lean_string_append(v___x_2852_, v___x_2853_);
v___x_2855_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2856_ = lean_string_append(v___x_2854_, v___x_2855_);
v___x_2857_ = lean_string_append(v___x_2856_, v_received_2848_);
lean_dec_ref(v_received_2848_);
v___x_2858_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_2858_ == 0)
{
lean_object* v___x_2859_; 
v___x_2859_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_2839_ = v___x_2857_;
v___y_2840_ = v___x_2859_;
goto v___jp_2838_;
}
else
{
v___y_2839_ = v___x_2857_;
v___y_2840_ = v___x_2846_;
goto v___jp_2838_;
}
}
v___jp_2860_:
{
lean_object* v___x_2861_; 
v___x_2861_ = l_Lasm_JS_Data_describe(v_d_2836_);
v_received_2848_ = v___x_2861_;
goto v___jp_2847_;
}
}
v___jp_2838_:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2841_ = lean_string_append(v___y_2839_, v___y_2840_);
v___x_2842_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2841_);
v___x_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
return v___x_2843_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0___boxed(lean_object* v_context_2876_, lean_object* v_d_2877_, lean_object* v_a_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(v_context_2876_, v_d_2877_);
lean_dec_ref(v_context_2876_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(lean_object* v_b_2880_, lean_object* v_args_2881_, uint8_t v_await_2882_){
_start:
{
uint64_t v___y_2885_; uint64_t v___y_2886_; uint64_t v___x_2929_; uint64_t v___y_2931_; 
v___x_2929_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2882_ == 0)
{
uint64_t v___x_2936_; 
v___x_2936_ = 0ULL;
v___y_2931_ = v___x_2936_;
goto v___jp_2930_;
}
else
{
uint64_t v___x_2937_; 
v___x_2937_ = 2ULL;
v___y_2931_ = v___x_2937_;
goto v___jp_2930_;
}
v___jp_2884_:
{
uint64_t v_flags_2887_; uint32_t v___x_2888_; lean_object* v___x_2889_; uint32_t v___x_2890_; lean_object* v___x_2891_; 
v_flags_2887_ = lean_uint64_lor(v___y_2885_, v___y_2886_);
v___x_2888_ = 214;
v___x_2889_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2880_, v_args_2881_);
v___x_2890_ = 0;
v___x_2891_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2888_, v_flags_2887_, v___x_2889_, v___x_2890_);
lean_dec(v___x_2889_);
if (lean_obj_tag(v___x_2891_) == 0)
{
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v_a_2892_; lean_object* v___x_2893_; 
v_a_2892_ = lean_ctor_get(v___x_2891_, 0);
lean_inc(v_a_2892_);
lean_dec_ref_known(v___x_2891_, 1);
v___x_2893_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2892_);
lean_dec(v_a_2892_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_a_2894_);
lean_dec_ref_known(v___x_2893_, 1);
v___x_2895_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2880_);
v___x_2896_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(v___x_2895_, v_a_2894_);
lean_dec_ref(v___x_2895_);
return v___x_2896_;
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
v_a_2897_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2893_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___x_2893_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
}
else
{
lean_object* v_a_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2912_; 
v_a_2905_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2912_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2907_ = v___x_2891_;
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_a_2905_);
lean_dec(v___x_2891_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
lean_object* v___x_2910_; 
if (v_isShared_2908_ == 0)
{
lean_ctor_set_tag(v___x_2907_, 1);
v___x_2910_ = v___x_2907_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_a_2905_);
v___x_2910_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
return v___x_2910_;
}
}
}
}
else
{
lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2928_; 
v_a_2913_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2915_ = v___x_2891_;
v_isShared_2916_ = v_isSharedCheck_2928_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v___x_2891_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2928_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2926_; 
v___x_2917_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2918_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2880_);
v___x_2919_ = lean_string_append(v___x_2917_, v___x_2918_);
lean_dec_ref(v___x_2918_);
v___x_2920_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2921_ = lean_string_append(v___x_2919_, v___x_2920_);
v___x_2922_ = lean_io_error_to_string(v_a_2913_);
v___x_2923_ = lean_string_append(v___x_2921_, v___x_2922_);
lean_dec_ref(v___x_2922_);
v___x_2924_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2923_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v___x_2924_);
v___x_2926_ = v___x_2915_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v___x_2924_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
}
v___jp_2930_:
{
uint8_t v_construct_2932_; uint64_t v___x_2933_; 
v_construct_2932_ = lean_ctor_get_uint8(v_b_2880_, sizeof(void*)*4);
v___x_2933_ = lean_uint64_lor(v___x_2929_, v___y_2931_);
if (v_construct_2932_ == 0)
{
uint64_t v___x_2934_; 
v___x_2934_ = 0ULL;
v___y_2885_ = v___x_2933_;
v___y_2886_ = v___x_2934_;
goto v___jp_2884_;
}
else
{
uint64_t v___x_2935_; 
v___x_2935_ = 4ULL;
v___y_2885_ = v___x_2933_;
v___y_2886_ = v___x_2935_;
goto v___jp_2884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0___boxed(lean_object* v_b_2938_, lean_object* v_args_2939_, lean_object* v_await_2940_, lean_object* v_a_2941_){
_start:
{
uint8_t v_await_boxed_2942_; lean_object* v_res_2943_; 
v_await_boxed_2942_ = lean_unbox(v_await_2940_);
v_res_2943_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(v_b_2938_, v_args_2939_, v_await_boxed_2942_);
lean_dec_ref(v_b_2938_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_new(lean_object* v_descriptor_2952_, lean_object* v_v_2953_){
_start:
{
uint8_t v_value_2955_; lean_object* v_mutable_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___y_2961_; 
v_value_2955_ = lean_ctor_get_uint8(v_descriptor_2952_, sizeof(void*)*1);
v_mutable_2956_ = lean_ctor_get(v_descriptor_2952_, 0);
v___x_2957_ = lean_unsigned_to_nat(2u);
v___x_2958_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Global_new___closed__2));
v___x_2959_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
switch(v_value_2955_)
{
case 0:
{
lean_object* v___x_2975_; 
v___x_2975_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
v___y_2961_ = v___x_2975_;
goto v___jp_2960_;
}
case 1:
{
lean_object* v___x_2976_; 
v___x_2976_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
v___y_2961_ = v___x_2976_;
goto v___jp_2960_;
}
case 2:
{
lean_object* v___x_2977_; 
v___x_2977_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1));
v___y_2961_ = v___x_2977_;
goto v___jp_2960_;
}
case 3:
{
lean_object* v___x_2978_; 
v___x_2978_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3));
v___y_2961_ = v___x_2978_;
goto v___jp_2960_;
}
case 4:
{
lean_object* v___x_2979_; 
v___x_2979_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5));
v___y_2961_ = v___x_2979_;
goto v___jp_2960_;
}
case 5:
{
lean_object* v___x_2980_; 
v___x_2980_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_2961_ = v___x_2980_;
goto v___jp_2960_;
}
default: 
{
lean_object* v___x_2981_; 
v___x_2981_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_2961_ = v___x_2981_;
goto v___jp_2960_;
}
}
v___jp_2960_:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; uint8_t v___x_2973_; lean_object* v___x_2974_; 
lean_inc(v___y_2961_);
v___x_2962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2959_);
lean_ctor_set(v___x_2962_, 1, v___y_2961_);
v___x_2963_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__1));
v___x_2964_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_mutable_2956_);
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2963_);
lean_ctor_set(v___x_2965_, 1, v___x_2964_);
v___x_2966_ = lean_mk_empty_array_with_capacity(v___x_2957_);
lean_inc_ref(v___x_2966_);
v___x_2967_ = lean_array_push(v___x_2966_, v___x_2962_);
v___x_2968_ = lean_array_push(v___x_2967_, v___x_2965_);
v___x_2969_ = l_Lasm_JS_Web_Support_fields(v___x_2968_);
lean_dec_ref(v___x_2968_);
v___x_2970_ = lean_array_push(v___x_2966_, v___x_2969_);
v___x_2971_ = lean_array_push(v___x_2970_, v_v_2953_);
v___x_2972_ = l_Lasm_JS_Web_Support_args(v___x_2971_);
v___x_2973_ = 0;
v___x_2974_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(v___x_2958_, v___x_2972_, v___x_2973_);
return v___x_2974_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_new___boxed(lean_object* v_descriptor_2982_, lean_object* v_v_2983_, lean_object* v_a_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l_Lasm_JS_Web_WebAssembly_Global_new(v_descriptor_2982_, v_v_2983_);
lean_dec_ref(v_descriptor_2982_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_value(lean_object* v_self_2986_){
_start:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; 
v___x_2988_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
v___x_2989_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2986_, v___x_2988_);
return v___x_2989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_value___boxed(lean_object* v_self_2990_, lean_object* v_a_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l_Lasm_JS_Web_WebAssembly_Global_value(v_self_2990_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_setValue(lean_object* v_self_2993_, lean_object* v_value_2994_){
_start:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2996_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
v___x_2997_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_2993_, v___x_2996_, v_value_2994_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_setValue___boxed(lean_object* v_self_2998_, lean_object* v_value_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l_Lasm_JS_Web_WebAssembly_Global_setValue(v_self_2998_, v_value_2999_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf(lean_object* v_self_3003_){
_start:
{
lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3005_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Global_valueOf___closed__0));
v___x_3006_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_3007_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_3003_, v___x_3005_, v___x_3006_);
return v___x_3007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf___boxed(lean_object* v_self_3008_, lean_object* v_a_3009_){
_start:
{
lean_object* v_res_3010_; 
v_res_3010_ = l_Lasm_JS_Web_WebAssembly_Global_valueOf(v_self_3008_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(lean_object* v_context_3011_, lean_object* v_d_3012_){
_start:
{
lean_object* v___y_3015_; lean_object* v___y_3016_; 
if (lean_obj_tag(v_d_3012_) == 9)
{
lean_object* v_value_3020_; lean_object* v___x_3021_; 
v_value_3020_ = lean_ctor_get(v_d_3012_, 0);
lean_inc(v_value_3020_);
lean_dec_ref_known(v_d_3012_, 2);
v___x_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3021_, 0, v_value_3020_);
return v___x_3021_;
}
else
{
lean_object* v___x_3022_; lean_object* v_received_3024_; 
v___x_3022_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3012_) == 9)
{
lean_object* v_value_3038_; lean_object* v_description_3039_; uint8_t v___x_3040_; 
v_value_3038_ = lean_ctor_get(v_d_3012_, 0);
v_description_3039_ = lean_ctor_get(v_d_3012_, 1);
v___x_3040_ = lean_string_dec_eq(v_description_3039_, v___x_3022_);
if (v___x_3040_ == 0)
{
goto v___jp_3036_;
}
else
{
uint32_t v___x_3041_; uint64_t v___x_3042_; lean_object* v___x_3043_; uint32_t v___x_3044_; lean_object* v___x_3045_; 
lean_inc_n(v_value_3038_, 2);
lean_dec_ref_known(v_d_3012_, 2);
v___x_3041_ = 206;
v___x_3042_ = 0ULL;
v___x_3043_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3043_, 0, v_value_3038_);
lean_ctor_set(v___x_3043_, 1, v___x_3022_);
v___x_3044_ = lasm_js_value_handle(v_value_3038_);
lean_dec(v_value_3038_);
v___x_3045_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3041_, v___x_3042_, v___x_3043_, v___x_3044_);
lean_dec_ref_known(v___x_3043_, 2);
if (lean_obj_tag(v___x_3045_) == 0)
{
lean_object* v_a_3046_; uint8_t v___x_3047_; 
v_a_3046_ = lean_ctor_get(v___x_3045_, 0);
lean_inc(v_a_3046_);
lean_dec_ref_known(v___x_3045_, 1);
v___x_3047_ = lean_string_validate_utf8(v_a_3046_);
if (v___x_3047_ == 0)
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
lean_dec(v_a_3046_);
v___x_3048_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3049_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3048_);
v_received_3024_ = v___x_3049_;
goto v___jp_3023_;
}
else
{
lean_object* v___x_3050_; 
v___x_3050_ = lean_string_from_utf8_unchecked(v_a_3046_);
v_received_3024_ = v___x_3050_;
goto v___jp_3023_;
}
}
else
{
lean_object* v___x_3051_; 
lean_dec_ref_known(v___x_3045_, 1);
v___x_3051_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3024_ = v___x_3051_;
goto v___jp_3023_;
}
}
}
else
{
goto v___jp_3036_;
}
v___jp_3023_:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; uint8_t v___x_3034_; 
v___x_3025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3026_ = lean_string_append(v___x_3025_, v_context_3011_);
v___x_3027_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3028_ = lean_string_append(v___x_3026_, v___x_3027_);
v___x_3029_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTag___closed__0));
v___x_3030_ = lean_string_append(v___x_3028_, v___x_3029_);
v___x_3031_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3032_ = lean_string_append(v___x_3030_, v___x_3031_);
v___x_3033_ = lean_string_append(v___x_3032_, v_received_3024_);
lean_dec_ref(v_received_3024_);
v___x_3034_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3034_ == 0)
{
lean_object* v___x_3035_; 
v___x_3035_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3015_ = v___x_3033_;
v___y_3016_ = v___x_3035_;
goto v___jp_3014_;
}
else
{
v___y_3015_ = v___x_3033_;
v___y_3016_ = v___x_3022_;
goto v___jp_3014_;
}
}
v___jp_3036_:
{
lean_object* v___x_3037_; 
v___x_3037_ = l_Lasm_JS_Data_describe(v_d_3012_);
v_received_3024_ = v___x_3037_;
goto v___jp_3023_;
}
}
v___jp_3014_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3017_ = lean_string_append(v___y_3015_, v___y_3016_);
v___x_3018_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3017_);
v___x_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3018_);
return v___x_3019_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1___boxed(lean_object* v_context_3052_, lean_object* v_d_3053_, lean_object* v_a_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(v_context_3052_, v_d_3053_);
lean_dec_ref(v_context_3052_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(lean_object* v_b_3056_, lean_object* v_args_3057_, uint8_t v_await_3058_){
_start:
{
uint64_t v___y_3061_; uint64_t v___y_3062_; uint64_t v___x_3105_; uint64_t v___y_3107_; 
v___x_3105_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3058_ == 0)
{
uint64_t v___x_3112_; 
v___x_3112_ = 0ULL;
v___y_3107_ = v___x_3112_;
goto v___jp_3106_;
}
else
{
uint64_t v___x_3113_; 
v___x_3113_ = 2ULL;
v___y_3107_ = v___x_3113_;
goto v___jp_3106_;
}
v___jp_3060_:
{
uint64_t v_flags_3063_; uint32_t v___x_3064_; lean_object* v___x_3065_; uint32_t v___x_3066_; lean_object* v___x_3067_; 
v_flags_3063_ = lean_uint64_lor(v___y_3061_, v___y_3062_);
v___x_3064_ = 214;
v___x_3065_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3056_, v_args_3057_);
v___x_3066_ = 0;
v___x_3067_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3064_, v_flags_3063_, v___x_3065_, v___x_3066_);
lean_dec(v___x_3065_);
if (lean_obj_tag(v___x_3067_) == 0)
{
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3069_; 
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_a_3068_);
lean_dec_ref_known(v___x_3067_, 1);
v___x_3069_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3068_);
lean_dec(v_a_3068_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3070_);
lean_dec_ref_known(v___x_3069_, 1);
v___x_3071_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3056_);
v___x_3072_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(v___x_3071_, v_a_3070_);
lean_dec_ref(v___x_3071_);
return v___x_3072_;
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
v_a_3073_ = lean_ctor_get(v___x_3069_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_3069_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3069_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
v_a_3081_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_3067_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_3067_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
lean_ctor_set_tag(v___x_3083_, 1);
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3104_; 
v_a_3089_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3091_ = v___x_3067_;
v_isShared_3092_ = v_isSharedCheck_3104_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3067_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3104_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3102_; 
v___x_3093_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3094_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3056_);
v___x_3095_ = lean_string_append(v___x_3093_, v___x_3094_);
lean_dec_ref(v___x_3094_);
v___x_3096_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3097_ = lean_string_append(v___x_3095_, v___x_3096_);
v___x_3098_ = lean_io_error_to_string(v_a_3089_);
v___x_3099_ = lean_string_append(v___x_3097_, v___x_3098_);
lean_dec_ref(v___x_3098_);
v___x_3100_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3099_);
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 0, v___x_3100_);
v___x_3102_ = v___x_3091_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___x_3100_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
}
}
v___jp_3106_:
{
uint8_t v_construct_3108_; uint64_t v___x_3109_; 
v_construct_3108_ = lean_ctor_get_uint8(v_b_3056_, sizeof(void*)*4);
v___x_3109_ = lean_uint64_lor(v___x_3105_, v___y_3107_);
if (v_construct_3108_ == 0)
{
uint64_t v___x_3110_; 
v___x_3110_ = 0ULL;
v___y_3061_ = v___x_3109_;
v___y_3062_ = v___x_3110_;
goto v___jp_3060_;
}
else
{
uint64_t v___x_3111_; 
v___x_3111_ = 4ULL;
v___y_3061_ = v___x_3109_;
v___y_3062_ = v___x_3111_;
goto v___jp_3060_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1___boxed(lean_object* v_b_3114_, lean_object* v_args_3115_, lean_object* v_await_3116_, lean_object* v_a_3117_){
_start:
{
uint8_t v_await_boxed_3118_; lean_object* v_res_3119_; 
v_await_boxed_3118_ = lean_unbox(v_await_3116_);
v_res_3119_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(v_b_3114_, v_args_3115_, v_await_boxed_3118_);
lean_dec_ref(v_b_3114_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(size_t v_sz_3120_, size_t v_i_3121_, lean_object* v_bs_3122_){
_start:
{
uint8_t v___x_3123_; 
v___x_3123_ = lean_usize_dec_lt(v_i_3121_, v_sz_3120_);
if (v___x_3123_ == 0)
{
return v_bs_3122_;
}
else
{
lean_object* v_v_3124_; lean_object* v___x_3125_; lean_object* v_bs_x27_3126_; lean_object* v___y_3128_; uint8_t v___x_3133_; 
v_v_3124_ = lean_array_uget(v_bs_3122_, v_i_3121_);
v___x_3125_ = lean_unsigned_to_nat(0u);
v_bs_x27_3126_ = lean_array_uset(v_bs_3122_, v_i_3121_, v___x_3125_);
v___x_3133_ = lean_unbox(v_v_3124_);
lean_dec(v_v_3124_);
switch(v___x_3133_)
{
case 0:
{
lean_object* v___x_3134_; 
v___x_3134_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
v___y_3128_ = v___x_3134_;
goto v___jp_3127_;
}
case 1:
{
lean_object* v___x_3135_; 
v___x_3135_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
v___y_3128_ = v___x_3135_;
goto v___jp_3127_;
}
case 2:
{
lean_object* v___x_3136_; 
v___x_3136_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1));
v___y_3128_ = v___x_3136_;
goto v___jp_3127_;
}
case 3:
{
lean_object* v___x_3137_; 
v___x_3137_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3));
v___y_3128_ = v___x_3137_;
goto v___jp_3127_;
}
case 4:
{
lean_object* v___x_3138_; 
v___x_3138_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5));
v___y_3128_ = v___x_3138_;
goto v___jp_3127_;
}
case 5:
{
lean_object* v___x_3139_; 
v___x_3139_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_3128_ = v___x_3139_;
goto v___jp_3127_;
}
default: 
{
lean_object* v___x_3140_; 
v___x_3140_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_3128_ = v___x_3140_;
goto v___jp_3127_;
}
}
v___jp_3127_:
{
size_t v___x_3129_; size_t v___x_3130_; lean_object* v___x_3131_; 
v___x_3129_ = ((size_t)1ULL);
v___x_3130_ = lean_usize_add(v_i_3121_, v___x_3129_);
lean_inc(v___y_3128_);
v___x_3131_ = lean_array_uset(v_bs_x27_3126_, v_i_3121_, v___y_3128_);
v_i_3121_ = v___x_3130_;
v_bs_3122_ = v___x_3131_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0___boxed(lean_object* v_sz_3141_, lean_object* v_i_3142_, lean_object* v_bs_3143_){
_start:
{
size_t v_sz_boxed_3144_; size_t v_i_boxed_3145_; lean_object* v_res_3146_; 
v_sz_boxed_3144_ = lean_unbox_usize(v_sz_3141_);
lean_dec(v_sz_3141_);
v_i_boxed_3145_ = lean_unbox_usize(v_i_3142_);
lean_dec(v_i_3142_);
v_res_3146_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(v_sz_boxed_3144_, v_i_boxed_3145_, v_bs_3143_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new(lean_object* v_type_3155_){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; size_t v_sz_3160_; size_t v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; uint8_t v___x_3170_; lean_object* v___x_3171_; 
v___x_3157_ = lean_unsigned_to_nat(1u);
v___x_3158_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Tag_new___closed__2));
v___x_3159_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTagType___lam__1___closed__0));
v_sz_3160_ = lean_array_size(v_type_3155_);
v___x_3161_ = ((size_t)0ULL);
v___x_3162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(v_sz_3160_, v___x_3161_, v_type_3155_);
v___x_3163_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3162_);
v___x_3164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3159_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = lean_mk_empty_array_with_capacity(v___x_3157_);
lean_inc_ref(v___x_3165_);
v___x_3166_ = lean_array_push(v___x_3165_, v___x_3164_);
v___x_3167_ = l_Lasm_JS_Web_Support_fields(v___x_3166_);
lean_dec_ref(v___x_3166_);
v___x_3168_ = lean_array_push(v___x_3165_, v___x_3167_);
v___x_3169_ = l_Lasm_JS_Web_Support_args(v___x_3168_);
v___x_3170_ = 0;
v___x_3171_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(v___x_3158_, v___x_3169_, v___x_3170_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new___boxed(lean_object* v_type_3172_, lean_object* v_a_3173_){
_start:
{
lean_object* v_res_3174_; 
v_res_3174_ = l_Lasm_JS_Web_WebAssembly_Tag_new(v_type_3172_);
return v_res_3174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(lean_object* v_x_3175_){
_start:
{
if (lean_obj_tag(v_x_3175_) == 0)
{
lean_object* v___x_3176_; 
v___x_3176_ = lean_box(0);
return v___x_3176_;
}
else
{
lean_object* v_val_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v_val_3177_ = lean_ctor_get(v_x_3175_, 0);
v___x_3178_ = ((lean_object*)(l_Lasm_JS_Web_instToJSExceptionOptions___lam__0___closed__0));
v___x_3179_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_3177_);
v___x_3180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3178_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
v___x_3181_ = lean_unsigned_to_nat(1u);
v___x_3182_ = lean_mk_empty_array_with_capacity(v___x_3181_);
v___x_3183_ = lean_array_push(v___x_3182_, v___x_3180_);
v___x_3184_ = l_Lasm_JS_Web_Support_fields(v___x_3183_);
lean_dec_ref(v___x_3183_);
return v___x_3184_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1___boxed(lean_object* v_x_3185_){
_start:
{
lean_object* v_res_3186_; 
v_res_3186_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(v_x_3185_);
lean_dec(v_x_3185_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(size_t v_sz_3187_, size_t v_i_3188_, lean_object* v_bs_3189_){
_start:
{
uint8_t v___x_3190_; 
v___x_3190_ = lean_usize_dec_lt(v_i_3188_, v_sz_3187_);
if (v___x_3190_ == 0)
{
return v_bs_3189_;
}
else
{
lean_object* v_v_3191_; lean_object* v___x_3192_; lean_object* v_bs_x27_3193_; size_t v___x_3194_; size_t v___x_3195_; lean_object* v___x_3196_; 
v_v_3191_ = lean_array_uget(v_bs_3189_, v_i_3188_);
v___x_3192_ = lean_unsigned_to_nat(0u);
v_bs_x27_3193_ = lean_array_uset(v_bs_3189_, v_i_3188_, v___x_3192_);
v___x_3194_ = ((size_t)1ULL);
v___x_3195_ = lean_usize_add(v_i_3188_, v___x_3194_);
v___x_3196_ = lean_array_uset(v_bs_x27_3193_, v_i_3188_, v_v_3191_);
v_i_3188_ = v___x_3195_;
v_bs_3189_ = v___x_3196_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0___boxed(lean_object* v_sz_3198_, lean_object* v_i_3199_, lean_object* v_bs_3200_){
_start:
{
size_t v_sz_boxed_3201_; size_t v_i_boxed_3202_; lean_object* v_res_3203_; 
v_sz_boxed_3201_ = lean_unbox_usize(v_sz_3198_);
lean_dec(v_sz_3198_);
v_i_boxed_3202_ = lean_unbox_usize(v_i_3199_);
lean_dec(v_i_3199_);
v_res_3203_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(v_sz_boxed_3201_, v_i_boxed_3202_, v_bs_3200_);
return v_res_3203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(lean_object* v_context_3204_, lean_object* v_d_3205_){
_start:
{
lean_object* v___y_3208_; lean_object* v___y_3209_; 
if (lean_obj_tag(v_d_3205_) == 9)
{
lean_object* v_value_3213_; lean_object* v___x_3214_; 
v_value_3213_ = lean_ctor_get(v_d_3205_, 0);
lean_inc(v_value_3213_);
lean_dec_ref_known(v_d_3205_, 2);
v___x_3214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3214_, 0, v_value_3213_);
return v___x_3214_;
}
else
{
lean_object* v___x_3215_; lean_object* v_received_3217_; 
v___x_3215_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3205_) == 9)
{
lean_object* v_value_3231_; lean_object* v_description_3232_; uint8_t v___x_3233_; 
v_value_3231_ = lean_ctor_get(v_d_3205_, 0);
v_description_3232_ = lean_ctor_get(v_d_3205_, 1);
v___x_3233_ = lean_string_dec_eq(v_description_3232_, v___x_3215_);
if (v___x_3233_ == 0)
{
goto v___jp_3229_;
}
else
{
uint32_t v___x_3234_; uint64_t v___x_3235_; lean_object* v___x_3236_; uint32_t v___x_3237_; lean_object* v___x_3238_; 
lean_inc_n(v_value_3231_, 2);
lean_dec_ref_known(v_d_3205_, 2);
v___x_3234_ = 206;
v___x_3235_ = 0ULL;
v___x_3236_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3236_, 0, v_value_3231_);
lean_ctor_set(v___x_3236_, 1, v___x_3215_);
v___x_3237_ = lasm_js_value_handle(v_value_3231_);
lean_dec(v_value_3231_);
v___x_3238_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3234_, v___x_3235_, v___x_3236_, v___x_3237_);
lean_dec_ref_known(v___x_3236_, 2);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v_a_3239_; uint8_t v___x_3240_; 
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
lean_inc(v_a_3239_);
lean_dec_ref_known(v___x_3238_, 1);
v___x_3240_ = lean_string_validate_utf8(v_a_3239_);
if (v___x_3240_ == 0)
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
lean_dec(v_a_3239_);
v___x_3241_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3242_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3241_);
v_received_3217_ = v___x_3242_;
goto v___jp_3216_;
}
else
{
lean_object* v___x_3243_; 
v___x_3243_ = lean_string_from_utf8_unchecked(v_a_3239_);
v_received_3217_ = v___x_3243_;
goto v___jp_3216_;
}
}
else
{
lean_object* v___x_3244_; 
lean_dec_ref_known(v___x_3238_, 1);
v___x_3244_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3217_ = v___x_3244_;
goto v___jp_3216_;
}
}
}
else
{
goto v___jp_3229_;
}
v___jp_3216_:
{
lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; uint8_t v___x_3227_; 
v___x_3218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3219_ = lean_string_append(v___x_3218_, v_context_3204_);
v___x_3220_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3221_ = lean_string_append(v___x_3219_, v___x_3220_);
v___x_3222_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSException___closed__0));
v___x_3223_ = lean_string_append(v___x_3221_, v___x_3222_);
v___x_3224_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3225_ = lean_string_append(v___x_3223_, v___x_3224_);
v___x_3226_ = lean_string_append(v___x_3225_, v_received_3217_);
lean_dec_ref(v_received_3217_);
v___x_3227_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3227_ == 0)
{
lean_object* v___x_3228_; 
v___x_3228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3208_ = v___x_3226_;
v___y_3209_ = v___x_3228_;
goto v___jp_3207_;
}
else
{
v___y_3208_ = v___x_3226_;
v___y_3209_ = v___x_3215_;
goto v___jp_3207_;
}
}
v___jp_3229_:
{
lean_object* v___x_3230_; 
v___x_3230_ = l_Lasm_JS_Data_describe(v_d_3205_);
v_received_3217_ = v___x_3230_;
goto v___jp_3216_;
}
}
v___jp_3207_:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3210_ = lean_string_append(v___y_3208_, v___y_3209_);
v___x_3211_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3210_);
v___x_3212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3211_);
return v___x_3212_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2___boxed(lean_object* v_context_3245_, lean_object* v_d_3246_, lean_object* v_a_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(v_context_3245_, v_d_3246_);
lean_dec_ref(v_context_3245_);
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(lean_object* v_b_3249_, lean_object* v_args_3250_, uint8_t v_await_3251_){
_start:
{
uint64_t v___y_3254_; uint64_t v___y_3255_; uint64_t v___x_3298_; uint64_t v___y_3300_; 
v___x_3298_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3251_ == 0)
{
uint64_t v___x_3305_; 
v___x_3305_ = 0ULL;
v___y_3300_ = v___x_3305_;
goto v___jp_3299_;
}
else
{
uint64_t v___x_3306_; 
v___x_3306_ = 2ULL;
v___y_3300_ = v___x_3306_;
goto v___jp_3299_;
}
v___jp_3253_:
{
uint64_t v_flags_3256_; uint32_t v___x_3257_; lean_object* v___x_3258_; uint32_t v___x_3259_; lean_object* v___x_3260_; 
v_flags_3256_ = lean_uint64_lor(v___y_3254_, v___y_3255_);
v___x_3257_ = 214;
v___x_3258_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3249_, v_args_3250_);
v___x_3259_ = 0;
v___x_3260_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3257_, v_flags_3256_, v___x_3258_, v___x_3259_);
lean_dec(v___x_3258_);
if (lean_obj_tag(v___x_3260_) == 0)
{
if (lean_obj_tag(v___x_3260_) == 0)
{
lean_object* v_a_3261_; lean_object* v___x_3262_; 
v_a_3261_ = lean_ctor_get(v___x_3260_, 0);
lean_inc(v_a_3261_);
lean_dec_ref_known(v___x_3260_, 1);
v___x_3262_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3261_);
lean_dec(v_a_3261_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3262_, 1);
v___x_3264_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3249_);
v___x_3265_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(v___x_3264_, v_a_3263_);
lean_dec_ref(v___x_3264_);
return v___x_3265_;
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3273_; 
v_a_3266_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3268_ = v___x_3262_;
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3262_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
v_a_3274_ = lean_ctor_get(v___x_3260_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3260_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3260_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
lean_ctor_set_tag(v___x_3276_, 1);
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3297_; 
v_a_3282_ = lean_ctor_get(v___x_3260_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3284_ = v___x_3260_;
v_isShared_3285_ = v_isSharedCheck_3297_;
goto v_resetjp_3283_;
}
else
{
lean_inc(v_a_3282_);
lean_dec(v___x_3260_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3297_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3295_; 
v___x_3286_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3287_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3249_);
v___x_3288_ = lean_string_append(v___x_3286_, v___x_3287_);
lean_dec_ref(v___x_3287_);
v___x_3289_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3290_ = lean_string_append(v___x_3288_, v___x_3289_);
v___x_3291_ = lean_io_error_to_string(v_a_3282_);
v___x_3292_ = lean_string_append(v___x_3290_, v___x_3291_);
lean_dec_ref(v___x_3291_);
v___x_3293_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
if (v_isShared_3285_ == 0)
{
lean_ctor_set(v___x_3284_, 0, v___x_3293_);
v___x_3295_ = v___x_3284_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v___x_3293_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
}
v___jp_3299_:
{
uint8_t v_construct_3301_; uint64_t v___x_3302_; 
v_construct_3301_ = lean_ctor_get_uint8(v_b_3249_, sizeof(void*)*4);
v___x_3302_ = lean_uint64_lor(v___x_3298_, v___y_3300_);
if (v_construct_3301_ == 0)
{
uint64_t v___x_3303_; 
v___x_3303_ = 0ULL;
v___y_3254_ = v___x_3302_;
v___y_3255_ = v___x_3303_;
goto v___jp_3253_;
}
else
{
uint64_t v___x_3304_; 
v___x_3304_ = 4ULL;
v___y_3254_ = v___x_3302_;
v___y_3255_ = v___x_3304_;
goto v___jp_3253_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2___boxed(lean_object* v_b_3307_, lean_object* v_args_3308_, lean_object* v_await_3309_, lean_object* v_a_3310_){
_start:
{
uint8_t v_await_boxed_3311_; lean_object* v_res_3312_; 
v_await_boxed_3311_ = lean_unbox(v_await_3309_);
v_res_3312_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(v_b_3307_, v_args_3308_, v_await_boxed_3311_);
lean_dec_ref(v_b_3307_);
return v_res_3312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new(lean_object* v_exceptionTag_3321_, lean_object* v_payload_3322_, lean_object* v_options_3323_){
_start:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; size_t v_sz_3329_; size_t v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; uint8_t v___x_3339_; lean_object* v___x_3340_; 
v___x_3325_ = lean_unsigned_to_nat(3u);
v___x_3326_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_new___closed__2));
v___x_3327_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3328_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3328_, 0, v_exceptionTag_3321_);
lean_ctor_set(v___x_3328_, 1, v___x_3327_);
v_sz_3329_ = lean_array_size(v_payload_3322_);
v___x_3330_ = ((size_t)0ULL);
v___x_3331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(v_sz_3329_, v___x_3330_, v_payload_3322_);
v___x_3332_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
v___x_3333_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(v_options_3323_);
v___x_3334_ = lean_mk_empty_array_with_capacity(v___x_3325_);
v___x_3335_ = lean_array_push(v___x_3334_, v___x_3328_);
v___x_3336_ = lean_array_push(v___x_3335_, v___x_3332_);
v___x_3337_ = lean_array_push(v___x_3336_, v___x_3333_);
v___x_3338_ = l_Lasm_JS_Web_Support_args(v___x_3337_);
v___x_3339_ = 0;
v___x_3340_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(v___x_3326_, v___x_3338_, v___x_3339_);
return v___x_3340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new___boxed(lean_object* v_exceptionTag_3341_, lean_object* v_payload_3342_, lean_object* v_options_3343_, lean_object* v_a_3344_){
_start:
{
lean_object* v_res_3345_; 
v_res_3345_ = l_Lasm_JS_Web_WebAssembly_Exception_new(v_exceptionTag_3341_, v_payload_3342_, v_options_3343_);
lean_dec(v_options_3343_);
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(lean_object* v_o_3347_, lean_object* v_key_3348_){
_start:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
lean_inc_ref(v_key_3348_);
v___x_3350_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3350_, 0, v_key_3348_);
v___x_3351_ = l_Lasm_JS_Wire_encodeIO(v___x_3350_);
lean_dec_ref_known(v___x_3350_, 1);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; uint32_t v___x_3353_; uint32_t v___x_3354_; uint64_t v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc(v_a_3352_);
lean_dec_ref_known(v___x_3351_, 1);
v___x_3353_ = 203;
v___x_3354_ = lasm_js_value_handle(v_o_3347_);
v___x_3355_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
v___x_3356_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3357_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3357_, 0, v_o_3347_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
v___x_3358_ = lasm_js_call(v___x_3353_, v___x_3354_, v___x_3355_, v_a_3352_, v___x_3357_);
lean_dec_ref_known(v___x_3357_, 2);
lean_dec(v_a_3352_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v_a_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v_a_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_a_3359_);
lean_dec_ref_known(v___x_3358_, 1);
v___x_3360_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___closed__0));
v___x_3361_ = l_String_quote(v_key_3348_);
v___x_3362_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3361_);
v___x_3363_ = lean_unsigned_to_nat(120u);
v___x_3364_ = lean_unsigned_to_nat(0u);
v___x_3365_ = l_Std_Format_pretty(v___x_3362_, v___x_3363_, v___x_3364_, v___x_3364_);
v___x_3366_ = lean_string_append(v___x_3360_, v___x_3365_);
lean_dec_ref(v___x_3365_);
v___x_3367_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_3366_, v_a_3359_);
lean_dec(v_a_3359_);
lean_dec_ref(v___x_3366_);
return v___x_3367_;
}
else
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
lean_dec_ref(v_key_3348_);
v_a_3368_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3358_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3358_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_dec_ref(v_key_3348_);
lean_dec(v_o_3347_);
v_a_3376_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3351_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3351_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___boxed(lean_object* v_o_3384_, lean_object* v_key_3385_, lean_object* v_a_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(v_o_3384_, v_key_3385_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack(lean_object* v_self_3389_){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3391_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_stack___closed__0));
v___x_3392_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(v_self_3389_, v___x_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack___boxed(lean_object* v_self_3393_, lean_object* v_a_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Lasm_JS_Web_WebAssembly_Exception_stack(v_self_3393_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg(lean_object* v_self_3397_, lean_object* v_exceptionTag_3398_, lean_object* v_index_3399_){
_start:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___y_3405_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; uint8_t v___x_3415_; 
v___x_3401_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_getArg___closed__0));
v___x_3402_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3403_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3403_, 0, v_exceptionTag_3398_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
v___x_3412_ = lean_nat_to_int(v_index_3399_);
v___x_3413_ = lean_nat_abs(v___x_3412_);
v___x_3414_ = lean_cstr_to_nat("9007199254740991");
v___x_3415_ = lean_nat_dec_le(v___x_3413_, v___x_3414_);
lean_dec(v___x_3413_);
if (v___x_3415_ == 0)
{
lean_object* v___x_3416_; 
v___x_3416_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3412_);
v___y_3405_ = v___x_3416_;
goto v___jp_3404_;
}
else
{
double v___x_3417_; lean_object* v___x_3418_; 
v___x_3417_ = l_Float_ofInt(v___x_3412_);
lean_dec(v___x_3412_);
v___x_3418_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3418_, 0, v___x_3417_);
v___y_3405_ = v___x_3418_;
goto v___jp_3404_;
}
v___jp_3404_:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3406_ = lean_unsigned_to_nat(2u);
v___x_3407_ = lean_mk_empty_array_with_capacity(v___x_3406_);
v___x_3408_ = lean_array_push(v___x_3407_, v___x_3403_);
v___x_3409_ = lean_array_push(v___x_3408_, v___y_3405_);
v___x_3410_ = l_Lasm_JS_Web_Support_args(v___x_3409_);
v___x_3411_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_3397_, v___x_3401_, v___x_3410_);
return v___x_3411_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg___boxed(lean_object* v_self_3419_, lean_object* v_exceptionTag_3420_, lean_object* v_index_3421_, lean_object* v_a_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l_Lasm_JS_Web_WebAssembly_Exception_getArg(v_self_3419_, v_exceptionTag_3420_, v_index_3421_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is(lean_object* v_self_3425_, lean_object* v_exceptionTag_3426_){
_start:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3428_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_is___closed__0));
v___x_3429_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3430_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3430_, 0, v_exceptionTag_3426_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = lean_unsigned_to_nat(1u);
v___x_3432_ = lean_mk_empty_array_with_capacity(v___x_3431_);
v___x_3433_ = lean_array_push(v___x_3432_, v___x_3430_);
v___x_3434_ = l_Lasm_JS_Web_Support_args(v___x_3433_);
v___x_3435_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_3425_, v___x_3428_, v___x_3434_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is___boxed(lean_object* v_self_3436_, lean_object* v_exceptionTag_3437_, lean_object* v_a_3438_){
_start:
{
lean_object* v_res_3439_; 
v_res_3439_ = l_Lasm_JS_Web_WebAssembly_Exception_is(v_self_3436_, v_exceptionTag_3437_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(lean_object* v_context_3440_, lean_object* v_d_3441_){
_start:
{
lean_object* v___y_3444_; lean_object* v___y_3445_; 
if (lean_obj_tag(v_d_3441_) == 9)
{
lean_object* v_value_3449_; lean_object* v___x_3450_; 
v_value_3449_ = lean_ctor_get(v_d_3441_, 0);
lean_inc(v_value_3449_);
lean_dec_ref_known(v_d_3441_, 2);
v___x_3450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3450_, 0, v_value_3449_);
return v___x_3450_;
}
else
{
lean_object* v___x_3451_; lean_object* v_received_3453_; 
v___x_3451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3441_) == 9)
{
lean_object* v_value_3467_; lean_object* v_description_3468_; uint8_t v___x_3469_; 
v_value_3467_ = lean_ctor_get(v_d_3441_, 0);
v_description_3468_ = lean_ctor_get(v_d_3441_, 1);
v___x_3469_ = lean_string_dec_eq(v_description_3468_, v___x_3451_);
if (v___x_3469_ == 0)
{
goto v___jp_3465_;
}
else
{
uint32_t v___x_3470_; uint64_t v___x_3471_; lean_object* v___x_3472_; uint32_t v___x_3473_; lean_object* v___x_3474_; 
lean_inc_n(v_value_3467_, 2);
lean_dec_ref_known(v_d_3441_, 2);
v___x_3470_ = 206;
v___x_3471_ = 0ULL;
v___x_3472_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3472_, 0, v_value_3467_);
lean_ctor_set(v___x_3472_, 1, v___x_3451_);
v___x_3473_ = lasm_js_value_handle(v_value_3467_);
lean_dec(v_value_3467_);
v___x_3474_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3470_, v___x_3471_, v___x_3472_, v___x_3473_);
lean_dec_ref_known(v___x_3472_, 2);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; uint8_t v___x_3476_; 
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_a_3475_);
lean_dec_ref_known(v___x_3474_, 1);
v___x_3476_ = lean_string_validate_utf8(v_a_3475_);
if (v___x_3476_ == 0)
{
lean_object* v___x_3477_; lean_object* v___x_3478_; 
lean_dec(v_a_3475_);
v___x_3477_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3478_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3477_);
v_received_3453_ = v___x_3478_;
goto v___jp_3452_;
}
else
{
lean_object* v___x_3479_; 
v___x_3479_ = lean_string_from_utf8_unchecked(v_a_3475_);
v_received_3453_ = v___x_3479_;
goto v___jp_3452_;
}
}
else
{
lean_object* v___x_3480_; 
lean_dec_ref_known(v___x_3474_, 1);
v___x_3480_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3453_ = v___x_3480_;
goto v___jp_3452_;
}
}
}
else
{
goto v___jp_3465_;
}
v___jp_3452_:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; uint8_t v___x_3463_; 
v___x_3454_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3455_ = lean_string_append(v___x_3454_, v_context_3440_);
v___x_3456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3457_ = lean_string_append(v___x_3455_, v___x_3456_);
v___x_3458_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompileError___closed__0));
v___x_3459_ = lean_string_append(v___x_3457_, v___x_3458_);
v___x_3460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3461_ = lean_string_append(v___x_3459_, v___x_3460_);
v___x_3462_ = lean_string_append(v___x_3461_, v_received_3453_);
lean_dec_ref(v_received_3453_);
v___x_3463_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3463_ == 0)
{
lean_object* v___x_3464_; 
v___x_3464_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3444_ = v___x_3462_;
v___y_3445_ = v___x_3464_;
goto v___jp_3443_;
}
else
{
v___y_3444_ = v___x_3462_;
v___y_3445_ = v___x_3451_;
goto v___jp_3443_;
}
}
v___jp_3465_:
{
lean_object* v___x_3466_; 
v___x_3466_ = l_Lasm_JS_Data_describe(v_d_3441_);
v_received_3453_ = v___x_3466_;
goto v___jp_3452_;
}
}
v___jp_3443_:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3446_ = lean_string_append(v___y_3444_, v___y_3445_);
v___x_3447_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
return v___x_3448_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0___boxed(lean_object* v_context_3481_, lean_object* v_d_3482_, lean_object* v_a_3483_){
_start:
{
lean_object* v_res_3484_; 
v_res_3484_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(v_context_3481_, v_d_3482_);
lean_dec_ref(v_context_3481_);
return v_res_3484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(lean_object* v_b_3485_, lean_object* v_args_3486_, uint8_t v_await_3487_){
_start:
{
uint64_t v___y_3490_; uint64_t v___y_3491_; uint64_t v___x_3534_; uint64_t v___y_3536_; 
v___x_3534_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3487_ == 0)
{
uint64_t v___x_3541_; 
v___x_3541_ = 0ULL;
v___y_3536_ = v___x_3541_;
goto v___jp_3535_;
}
else
{
uint64_t v___x_3542_; 
v___x_3542_ = 2ULL;
v___y_3536_ = v___x_3542_;
goto v___jp_3535_;
}
v___jp_3489_:
{
uint64_t v_flags_3492_; uint32_t v___x_3493_; lean_object* v___x_3494_; uint32_t v___x_3495_; lean_object* v___x_3496_; 
v_flags_3492_ = lean_uint64_lor(v___y_3490_, v___y_3491_);
v___x_3493_ = 214;
v___x_3494_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3485_, v_args_3486_);
v___x_3495_ = 0;
v___x_3496_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3493_, v_flags_3492_, v___x_3494_, v___x_3495_);
lean_dec(v___x_3494_);
if (lean_obj_tag(v___x_3496_) == 0)
{
if (lean_obj_tag(v___x_3496_) == 0)
{
lean_object* v_a_3497_; lean_object* v___x_3498_; 
v_a_3497_ = lean_ctor_get(v___x_3496_, 0);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___x_3496_, 1);
v___x_3498_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3497_);
lean_dec(v_a_3497_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3498_, 1);
v___x_3500_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3485_);
v___x_3501_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(v___x_3500_, v_a_3499_);
lean_dec_ref(v___x_3500_);
return v___x_3501_;
}
else
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3509_; 
v_a_3502_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3504_ = v___x_3498_;
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3498_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3505_ == 0)
{
v___x_3507_ = v___x_3504_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3502_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
}
else
{
lean_object* v_a_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3517_; 
v_a_3510_ = lean_ctor_get(v___x_3496_, 0);
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3496_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3512_ = v___x_3496_;
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_a_3510_);
lean_dec(v___x_3496_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3515_; 
if (v_isShared_3513_ == 0)
{
lean_ctor_set_tag(v___x_3512_, 1);
v___x_3515_ = v___x_3512_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_a_3510_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
}
else
{
lean_object* v_a_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3533_; 
v_a_3518_ = lean_ctor_get(v___x_3496_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3496_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3520_ = v___x_3496_;
v_isShared_3521_ = v_isSharedCheck_3533_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_a_3518_);
lean_dec(v___x_3496_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3533_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3531_; 
v___x_3522_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3523_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3485_);
v___x_3524_ = lean_string_append(v___x_3522_, v___x_3523_);
lean_dec_ref(v___x_3523_);
v___x_3525_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3526_ = lean_string_append(v___x_3524_, v___x_3525_);
v___x_3527_ = lean_io_error_to_string(v_a_3518_);
v___x_3528_ = lean_string_append(v___x_3526_, v___x_3527_);
lean_dec_ref(v___x_3527_);
v___x_3529_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3528_);
if (v_isShared_3521_ == 0)
{
lean_ctor_set(v___x_3520_, 0, v___x_3529_);
v___x_3531_ = v___x_3520_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v___x_3529_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
v___jp_3535_:
{
uint8_t v_construct_3537_; uint64_t v___x_3538_; 
v_construct_3537_ = lean_ctor_get_uint8(v_b_3485_, sizeof(void*)*4);
v___x_3538_ = lean_uint64_lor(v___x_3534_, v___y_3536_);
if (v_construct_3537_ == 0)
{
uint64_t v___x_3539_; 
v___x_3539_ = 0ULL;
v___y_3490_ = v___x_3538_;
v___y_3491_ = v___x_3539_;
goto v___jp_3489_;
}
else
{
uint64_t v___x_3540_; 
v___x_3540_ = 4ULL;
v___y_3490_ = v___x_3538_;
v___y_3491_ = v___x_3540_;
goto v___jp_3489_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0___boxed(lean_object* v_b_3543_, lean_object* v_args_3544_, lean_object* v_await_3545_, lean_object* v_a_3546_){
_start:
{
uint8_t v_await_boxed_3547_; lean_object* v_res_3548_; 
v_await_boxed_3547_ = lean_unbox(v_await_3545_);
v_res_3548_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(v_b_3543_, v_args_3544_, v_await_boxed_3547_);
lean_dec_ref(v_b_3543_);
return v_res_3548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new(lean_object* v_message_3557_){
_start:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; uint8_t v___x_3565_; lean_object* v___x_3566_; 
v___x_3559_ = lean_unsigned_to_nat(1u);
v___x_3560_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__2));
v___x_3561_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_3557_);
v___x_3562_ = lean_mk_empty_array_with_capacity(v___x_3559_);
v___x_3563_ = lean_array_push(v___x_3562_, v___x_3561_);
v___x_3564_ = l_Lasm_JS_Web_Support_args(v___x_3563_);
v___x_3565_ = 0;
v___x_3566_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(v___x_3560_, v___x_3564_, v___x_3565_);
return v___x_3566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new___boxed(lean_object* v_message_3567_, lean_object* v_a_3568_){
_start:
{
lean_object* v_res_3569_; 
v_res_3569_ = l_Lasm_JS_Web_WebAssembly_CompileError_new(v_message_3567_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_name(lean_object* v_self_3570_){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3572_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_3573_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3570_, v___x_3572_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_name___boxed(lean_object* v_self_3574_, lean_object* v_a_3575_){
_start:
{
lean_object* v_res_3576_; 
v_res_3576_ = l_Lasm_JS_Web_WebAssembly_CompileError_name(v_self_3574_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message(lean_object* v_self_3578_){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; 
v___x_3580_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_3581_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3578_, v___x_3580_);
return v___x_3581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message___boxed(lean_object* v_self_3582_, lean_object* v_a_3583_){
_start:
{
lean_object* v_res_3584_; 
v_res_3584_ = l_Lasm_JS_Web_WebAssembly_CompileError_message(v_self_3582_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(lean_object* v_context_3585_, lean_object* v_d_3586_){
_start:
{
lean_object* v___y_3589_; lean_object* v___y_3590_; 
if (lean_obj_tag(v_d_3586_) == 9)
{
lean_object* v_value_3594_; lean_object* v___x_3595_; 
v_value_3594_ = lean_ctor_get(v_d_3586_, 0);
lean_inc(v_value_3594_);
lean_dec_ref_known(v_d_3586_, 2);
v___x_3595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3595_, 0, v_value_3594_);
return v___x_3595_;
}
else
{
lean_object* v___x_3596_; lean_object* v_received_3598_; 
v___x_3596_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3586_) == 9)
{
lean_object* v_value_3612_; lean_object* v_description_3613_; uint8_t v___x_3614_; 
v_value_3612_ = lean_ctor_get(v_d_3586_, 0);
v_description_3613_ = lean_ctor_get(v_d_3586_, 1);
v___x_3614_ = lean_string_dec_eq(v_description_3613_, v___x_3596_);
if (v___x_3614_ == 0)
{
goto v___jp_3610_;
}
else
{
uint32_t v___x_3615_; uint64_t v___x_3616_; lean_object* v___x_3617_; uint32_t v___x_3618_; lean_object* v___x_3619_; 
lean_inc_n(v_value_3612_, 2);
lean_dec_ref_known(v_d_3586_, 2);
v___x_3615_ = 206;
v___x_3616_ = 0ULL;
v___x_3617_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3617_, 0, v_value_3612_);
lean_ctor_set(v___x_3617_, 1, v___x_3596_);
v___x_3618_ = lasm_js_value_handle(v_value_3612_);
lean_dec(v_value_3612_);
v___x_3619_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3615_, v___x_3616_, v___x_3617_, v___x_3618_);
lean_dec_ref_known(v___x_3617_, 2);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v_a_3620_; uint8_t v___x_3621_; 
v_a_3620_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_a_3620_);
lean_dec_ref_known(v___x_3619_, 1);
v___x_3621_ = lean_string_validate_utf8(v_a_3620_);
if (v___x_3621_ == 0)
{
lean_object* v___x_3622_; lean_object* v___x_3623_; 
lean_dec(v_a_3620_);
v___x_3622_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3623_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3622_);
v_received_3598_ = v___x_3623_;
goto v___jp_3597_;
}
else
{
lean_object* v___x_3624_; 
v___x_3624_ = lean_string_from_utf8_unchecked(v_a_3620_);
v_received_3598_ = v___x_3624_;
goto v___jp_3597_;
}
}
else
{
lean_object* v___x_3625_; 
lean_dec_ref_known(v___x_3619_, 1);
v___x_3625_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3598_ = v___x_3625_;
goto v___jp_3597_;
}
}
}
else
{
goto v___jp_3610_;
}
v___jp_3597_:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; uint8_t v___x_3608_; 
v___x_3599_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3600_ = lean_string_append(v___x_3599_, v_context_3585_);
v___x_3601_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3602_ = lean_string_append(v___x_3600_, v___x_3601_);
v___x_3603_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSLinkError___closed__0));
v___x_3604_ = lean_string_append(v___x_3602_, v___x_3603_);
v___x_3605_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3606_ = lean_string_append(v___x_3604_, v___x_3605_);
v___x_3607_ = lean_string_append(v___x_3606_, v_received_3598_);
lean_dec_ref(v_received_3598_);
v___x_3608_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3608_ == 0)
{
lean_object* v___x_3609_; 
v___x_3609_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3589_ = v___x_3607_;
v___y_3590_ = v___x_3609_;
goto v___jp_3588_;
}
else
{
v___y_3589_ = v___x_3607_;
v___y_3590_ = v___x_3596_;
goto v___jp_3588_;
}
}
v___jp_3610_:
{
lean_object* v___x_3611_; 
v___x_3611_ = l_Lasm_JS_Data_describe(v_d_3586_);
v_received_3598_ = v___x_3611_;
goto v___jp_3597_;
}
}
v___jp_3588_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3591_ = lean_string_append(v___y_3589_, v___y_3590_);
v___x_3592_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3592_, 0, v___x_3591_);
v___x_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3592_);
return v___x_3593_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0___boxed(lean_object* v_context_3626_, lean_object* v_d_3627_, lean_object* v_a_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(v_context_3626_, v_d_3627_);
lean_dec_ref(v_context_3626_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(lean_object* v_b_3630_, lean_object* v_args_3631_, uint8_t v_await_3632_){
_start:
{
uint64_t v___y_3635_; uint64_t v___y_3636_; uint64_t v___x_3679_; uint64_t v___y_3681_; 
v___x_3679_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3632_ == 0)
{
uint64_t v___x_3686_; 
v___x_3686_ = 0ULL;
v___y_3681_ = v___x_3686_;
goto v___jp_3680_;
}
else
{
uint64_t v___x_3687_; 
v___x_3687_ = 2ULL;
v___y_3681_ = v___x_3687_;
goto v___jp_3680_;
}
v___jp_3634_:
{
uint64_t v_flags_3637_; uint32_t v___x_3638_; lean_object* v___x_3639_; uint32_t v___x_3640_; lean_object* v___x_3641_; 
v_flags_3637_ = lean_uint64_lor(v___y_3635_, v___y_3636_);
v___x_3638_ = 214;
v___x_3639_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3630_, v_args_3631_);
v___x_3640_ = 0;
v___x_3641_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3638_, v_flags_3637_, v___x_3639_, v___x_3640_);
lean_dec(v___x_3639_);
if (lean_obj_tag(v___x_3641_) == 0)
{
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; lean_object* v___x_3643_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_a_3642_);
lean_dec_ref_known(v___x_3641_, 1);
v___x_3643_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3642_);
lean_dec(v_a_3642_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v_a_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v_a_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3643_, 1);
v___x_3645_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3630_);
v___x_3646_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(v___x_3645_, v_a_3644_);
lean_dec_ref(v___x_3645_);
return v___x_3646_;
}
else
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
v_a_3647_ = lean_ctor_get(v___x_3643_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3643_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___x_3643_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3643_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3652_; 
if (v_isShared_3650_ == 0)
{
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3647_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
return v___x_3652_;
}
}
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
v_a_3655_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3641_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3641_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
lean_ctor_set_tag(v___x_3657_, 1);
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3678_; 
v_a_3663_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3665_ = v___x_3641_;
v_isShared_3666_ = v_isSharedCheck_3678_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3641_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3678_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3676_; 
v___x_3667_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3668_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3630_);
v___x_3669_ = lean_string_append(v___x_3667_, v___x_3668_);
lean_dec_ref(v___x_3668_);
v___x_3670_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3671_ = lean_string_append(v___x_3669_, v___x_3670_);
v___x_3672_ = lean_io_error_to_string(v_a_3663_);
v___x_3673_ = lean_string_append(v___x_3671_, v___x_3672_);
lean_dec_ref(v___x_3672_);
v___x_3674_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3673_);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 0, v___x_3674_);
v___x_3676_ = v___x_3665_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3674_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
v___jp_3680_:
{
uint8_t v_construct_3682_; uint64_t v___x_3683_; 
v_construct_3682_ = lean_ctor_get_uint8(v_b_3630_, sizeof(void*)*4);
v___x_3683_ = lean_uint64_lor(v___x_3679_, v___y_3681_);
if (v_construct_3682_ == 0)
{
uint64_t v___x_3684_; 
v___x_3684_ = 0ULL;
v___y_3635_ = v___x_3683_;
v___y_3636_ = v___x_3684_;
goto v___jp_3634_;
}
else
{
uint64_t v___x_3685_; 
v___x_3685_ = 4ULL;
v___y_3635_ = v___x_3683_;
v___y_3636_ = v___x_3685_;
goto v___jp_3634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0___boxed(lean_object* v_b_3688_, lean_object* v_args_3689_, lean_object* v_await_3690_, lean_object* v_a_3691_){
_start:
{
uint8_t v_await_boxed_3692_; lean_object* v_res_3693_; 
v_await_boxed_3692_ = lean_unbox(v_await_3690_);
v_res_3693_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(v_b_3688_, v_args_3689_, v_await_boxed_3692_);
lean_dec_ref(v_b_3688_);
return v_res_3693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new(lean_object* v_message_3702_){
_start:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; uint8_t v___x_3710_; lean_object* v___x_3711_; 
v___x_3704_ = lean_unsigned_to_nat(1u);
v___x_3705_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__2));
v___x_3706_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_3702_);
v___x_3707_ = lean_mk_empty_array_with_capacity(v___x_3704_);
v___x_3708_ = lean_array_push(v___x_3707_, v___x_3706_);
v___x_3709_ = l_Lasm_JS_Web_Support_args(v___x_3708_);
v___x_3710_ = 0;
v___x_3711_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(v___x_3705_, v___x_3709_, v___x_3710_);
return v___x_3711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new___boxed(lean_object* v_message_3712_, lean_object* v_a_3713_){
_start:
{
lean_object* v_res_3714_; 
v_res_3714_ = l_Lasm_JS_Web_WebAssembly_LinkError_new(v_message_3712_);
return v_res_3714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_name(lean_object* v_self_3715_){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3717_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_3718_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3715_, v___x_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_name___boxed(lean_object* v_self_3719_, lean_object* v_a_3720_){
_start:
{
lean_object* v_res_3721_; 
v_res_3721_ = l_Lasm_JS_Web_WebAssembly_LinkError_name(v_self_3719_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_message(lean_object* v_self_3722_){
_start:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3724_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_3725_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3722_, v___x_3724_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_message___boxed(lean_object* v_self_3726_, lean_object* v_a_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l_Lasm_JS_Web_WebAssembly_LinkError_message(v_self_3726_);
return v_res_3728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(lean_object* v_context_3729_, lean_object* v_d_3730_){
_start:
{
lean_object* v___y_3733_; lean_object* v___y_3734_; 
if (lean_obj_tag(v_d_3730_) == 9)
{
lean_object* v_value_3738_; lean_object* v___x_3739_; 
v_value_3738_ = lean_ctor_get(v_d_3730_, 0);
lean_inc(v_value_3738_);
lean_dec_ref_known(v_d_3730_, 2);
v___x_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3739_, 0, v_value_3738_);
return v___x_3739_;
}
else
{
lean_object* v___x_3740_; lean_object* v_received_3742_; 
v___x_3740_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3730_) == 9)
{
lean_object* v_value_3756_; lean_object* v_description_3757_; uint8_t v___x_3758_; 
v_value_3756_ = lean_ctor_get(v_d_3730_, 0);
v_description_3757_ = lean_ctor_get(v_d_3730_, 1);
v___x_3758_ = lean_string_dec_eq(v_description_3757_, v___x_3740_);
if (v___x_3758_ == 0)
{
goto v___jp_3754_;
}
else
{
uint32_t v___x_3759_; uint64_t v___x_3760_; lean_object* v___x_3761_; uint32_t v___x_3762_; lean_object* v___x_3763_; 
lean_inc_n(v_value_3756_, 2);
lean_dec_ref_known(v_d_3730_, 2);
v___x_3759_ = 206;
v___x_3760_ = 0ULL;
v___x_3761_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3761_, 0, v_value_3756_);
lean_ctor_set(v___x_3761_, 1, v___x_3740_);
v___x_3762_ = lasm_js_value_handle(v_value_3756_);
lean_dec(v_value_3756_);
v___x_3763_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3759_, v___x_3760_, v___x_3761_, v___x_3762_);
lean_dec_ref_known(v___x_3761_, 2);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v_a_3764_; uint8_t v___x_3765_; 
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
lean_inc(v_a_3764_);
lean_dec_ref_known(v___x_3763_, 1);
v___x_3765_ = lean_string_validate_utf8(v_a_3764_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
lean_dec(v_a_3764_);
v___x_3766_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3767_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3766_);
v_received_3742_ = v___x_3767_;
goto v___jp_3741_;
}
else
{
lean_object* v___x_3768_; 
v___x_3768_ = lean_string_from_utf8_unchecked(v_a_3764_);
v_received_3742_ = v___x_3768_;
goto v___jp_3741_;
}
}
else
{
lean_object* v___x_3769_; 
lean_dec_ref_known(v___x_3763_, 1);
v___x_3769_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3742_ = v___x_3769_;
goto v___jp_3741_;
}
}
}
else
{
goto v___jp_3754_;
}
v___jp_3741_:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; uint8_t v___x_3752_; 
v___x_3743_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3744_ = lean_string_append(v___x_3743_, v_context_3729_);
v___x_3745_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3746_ = lean_string_append(v___x_3744_, v___x_3745_);
v___x_3747_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRuntimeError___closed__0));
v___x_3748_ = lean_string_append(v___x_3746_, v___x_3747_);
v___x_3749_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3750_ = lean_string_append(v___x_3748_, v___x_3749_);
v___x_3751_ = lean_string_append(v___x_3750_, v_received_3742_);
lean_dec_ref(v_received_3742_);
v___x_3752_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3752_ == 0)
{
lean_object* v___x_3753_; 
v___x_3753_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3733_ = v___x_3751_;
v___y_3734_ = v___x_3753_;
goto v___jp_3732_;
}
else
{
v___y_3733_ = v___x_3751_;
v___y_3734_ = v___x_3740_;
goto v___jp_3732_;
}
}
v___jp_3754_:
{
lean_object* v___x_3755_; 
v___x_3755_ = l_Lasm_JS_Data_describe(v_d_3730_);
v_received_3742_ = v___x_3755_;
goto v___jp_3741_;
}
}
v___jp_3732_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; 
v___x_3735_ = lean_string_append(v___y_3733_, v___y_3734_);
v___x_3736_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3735_);
v___x_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3737_, 0, v___x_3736_);
return v___x_3737_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0___boxed(lean_object* v_context_3770_, lean_object* v_d_3771_, lean_object* v_a_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(v_context_3770_, v_d_3771_);
lean_dec_ref(v_context_3770_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(lean_object* v_b_3774_, lean_object* v_args_3775_, uint8_t v_await_3776_){
_start:
{
uint64_t v___y_3779_; uint64_t v___y_3780_; uint64_t v___x_3823_; uint64_t v___y_3825_; 
v___x_3823_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3776_ == 0)
{
uint64_t v___x_3830_; 
v___x_3830_ = 0ULL;
v___y_3825_ = v___x_3830_;
goto v___jp_3824_;
}
else
{
uint64_t v___x_3831_; 
v___x_3831_ = 2ULL;
v___y_3825_ = v___x_3831_;
goto v___jp_3824_;
}
v___jp_3778_:
{
uint64_t v_flags_3781_; uint32_t v___x_3782_; lean_object* v___x_3783_; uint32_t v___x_3784_; lean_object* v___x_3785_; 
v_flags_3781_ = lean_uint64_lor(v___y_3779_, v___y_3780_);
v___x_3782_ = 214;
v___x_3783_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3774_, v_args_3775_);
v___x_3784_ = 0;
v___x_3785_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3782_, v_flags_3781_, v___x_3783_, v___x_3784_);
lean_dec(v___x_3783_);
if (lean_obj_tag(v___x_3785_) == 0)
{
if (lean_obj_tag(v___x_3785_) == 0)
{
lean_object* v_a_3786_; lean_object* v___x_3787_; 
v_a_3786_ = lean_ctor_get(v___x_3785_, 0);
lean_inc(v_a_3786_);
lean_dec_ref_known(v___x_3785_, 1);
v___x_3787_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3786_);
lean_dec(v_a_3786_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
lean_inc(v_a_3788_);
lean_dec_ref_known(v___x_3787_, 1);
v___x_3789_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3774_);
v___x_3790_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(v___x_3789_, v_a_3788_);
lean_dec_ref(v___x_3789_);
return v___x_3790_;
}
else
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3798_; 
v_a_3791_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3793_ = v___x_3787_;
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3787_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3796_; 
if (v_isShared_3794_ == 0)
{
v___x_3796_ = v___x_3793_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_a_3791_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
}
}
else
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3806_; 
v_a_3799_ = lean_ctor_get(v___x_3785_, 0);
v_isSharedCheck_3806_ = !lean_is_exclusive(v___x_3785_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3801_ = v___x_3785_;
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v___x_3785_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3804_; 
if (v_isShared_3802_ == 0)
{
lean_ctor_set_tag(v___x_3801_, 1);
v___x_3804_ = v___x_3801_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_a_3799_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
return v___x_3804_;
}
}
}
}
else
{
lean_object* v_a_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3822_; 
v_a_3807_ = lean_ctor_get(v___x_3785_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3785_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3809_ = v___x_3785_;
v_isShared_3810_ = v_isSharedCheck_3822_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_a_3807_);
lean_dec(v___x_3785_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3822_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3820_; 
v___x_3811_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3812_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3774_);
v___x_3813_ = lean_string_append(v___x_3811_, v___x_3812_);
lean_dec_ref(v___x_3812_);
v___x_3814_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3815_ = lean_string_append(v___x_3813_, v___x_3814_);
v___x_3816_ = lean_io_error_to_string(v_a_3807_);
v___x_3817_ = lean_string_append(v___x_3815_, v___x_3816_);
lean_dec_ref(v___x_3816_);
v___x_3818_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
if (v_isShared_3810_ == 0)
{
lean_ctor_set(v___x_3809_, 0, v___x_3818_);
v___x_3820_ = v___x_3809_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3818_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
}
}
v___jp_3824_:
{
uint8_t v_construct_3826_; uint64_t v___x_3827_; 
v_construct_3826_ = lean_ctor_get_uint8(v_b_3774_, sizeof(void*)*4);
v___x_3827_ = lean_uint64_lor(v___x_3823_, v___y_3825_);
if (v_construct_3826_ == 0)
{
uint64_t v___x_3828_; 
v___x_3828_ = 0ULL;
v___y_3779_ = v___x_3827_;
v___y_3780_ = v___x_3828_;
goto v___jp_3778_;
}
else
{
uint64_t v___x_3829_; 
v___x_3829_ = 4ULL;
v___y_3779_ = v___x_3827_;
v___y_3780_ = v___x_3829_;
goto v___jp_3778_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0___boxed(lean_object* v_b_3832_, lean_object* v_args_3833_, lean_object* v_await_3834_, lean_object* v_a_3835_){
_start:
{
uint8_t v_await_boxed_3836_; lean_object* v_res_3837_; 
v_await_boxed_3836_ = lean_unbox(v_await_3834_);
v_res_3837_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(v_b_3832_, v_args_3833_, v_await_boxed_3836_);
lean_dec_ref(v_b_3832_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new(lean_object* v_message_3846_){
_start:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; uint8_t v___x_3854_; lean_object* v___x_3855_; 
v___x_3848_ = lean_unsigned_to_nat(1u);
v___x_3849_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__2));
v___x_3850_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_3846_);
v___x_3851_ = lean_mk_empty_array_with_capacity(v___x_3848_);
v___x_3852_ = lean_array_push(v___x_3851_, v___x_3850_);
v___x_3853_ = l_Lasm_JS_Web_Support_args(v___x_3852_);
v___x_3854_ = 0;
v___x_3855_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(v___x_3849_, v___x_3853_, v___x_3854_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new___boxed(lean_object* v_message_3856_, lean_object* v_a_3857_){
_start:
{
lean_object* v_res_3858_; 
v_res_3858_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_new(v_message_3856_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_name(lean_object* v_self_3859_){
_start:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3861_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_3862_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3859_, v___x_3861_);
return v___x_3862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_name___boxed(lean_object* v_self_3863_, lean_object* v_a_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_name(v_self_3863_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_message(lean_object* v_self_3866_){
_start:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3868_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_3869_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3866_, v___x_3868_);
return v___x_3869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_message___boxed(lean_object* v_self_3870_, lean_object* v_a_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_message(v_self_3870_);
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0(lean_object* v_o_3876_, lean_object* v_a_3877_){
_start:
{
if (lean_obj_tag(v_a_3877_) == 0)
{
lean_object* v___x_3879_; lean_object* v___x_3880_; 
lean_dec(v_o_3876_);
v___x_3879_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__1));
v___x_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3879_);
return v___x_3880_;
}
else
{
lean_object* v_tail_3881_; 
v_tail_3881_ = lean_ctor_get(v_a_3877_, 1);
if (lean_obj_tag(v_tail_3881_) == 0)
{
lean_object* v_head_3882_; lean_object* v___x_3883_; 
v_head_3882_ = lean_ctor_get(v_a_3877_, 0);
lean_inc(v_head_3882_);
lean_dec_ref_known(v_a_3877_, 2);
v___x_3883_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_o_3876_, v_head_3882_);
return v___x_3883_;
}
else
{
lean_object* v_head_3884_; lean_object* v___x_3885_; 
lean_inc(v_tail_3881_);
v_head_3884_ = lean_ctor_get(v_a_3877_, 0);
lean_inc(v_head_3884_);
lean_dec_ref_known(v_a_3877_, 2);
v___x_3885_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_o_3876_, v_head_3884_);
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_object* v_a_3886_; 
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
lean_inc(v_a_3886_);
lean_dec_ref_known(v___x_3885_, 1);
v_o_3876_ = v_a_3886_;
v_a_3877_ = v_tail_3881_;
goto _start;
}
else
{
lean_dec(v_tail_3881_);
return v___x_3885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___boxed(lean_object* v_o_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0(v_o_3888_, v_a_3889_);
return v_res_3891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0(lean_object* v_path_3892_){
_start:
{
lean_object* v___x_3894_; 
v___x_3894_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3894_) == 0)
{
lean_object* v_a_3895_; lean_object* v___x_3896_; 
v_a_3895_ = lean_ctor_get(v___x_3894_, 0);
lean_inc(v_a_3895_);
lean_dec_ref_known(v___x_3894_, 1);
v___x_3896_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0(v_a_3895_, v_path_3892_);
return v___x_3896_;
}
else
{
lean_dec(v_path_3892_);
return v___x_3894_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0___boxed(lean_object* v_path_3897_, lean_object* v_a_3898_){
_start:
{
lean_object* v_res_3899_; 
v_res_3899_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0(v_path_3897_);
return v_res_3899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_JSTag(){
_start:
{
lean_object* v___x_3909_; lean_object* v___x_3910_; 
v___x_3909_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_JSTag___closed__3));
v___x_3910_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0(v___x_3909_);
if (lean_obj_tag(v___x_3910_) == 0)
{
lean_object* v_a_3911_; lean_object* v___x_3913_; uint8_t v_isShared_3914_; uint8_t v_isSharedCheck_3918_; 
v_a_3911_ = lean_ctor_get(v___x_3910_, 0);
v_isSharedCheck_3918_ = !lean_is_exclusive(v___x_3910_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3913_ = v___x_3910_;
v_isShared_3914_ = v_isSharedCheck_3918_;
goto v_resetjp_3912_;
}
else
{
lean_inc(v_a_3911_);
lean_dec(v___x_3910_);
v___x_3913_ = lean_box(0);
v_isShared_3914_ = v_isSharedCheck_3918_;
goto v_resetjp_3912_;
}
v_resetjp_3912_:
{
lean_object* v___x_3916_; 
if (v_isShared_3914_ == 0)
{
v___x_3916_ = v___x_3913_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v_a_3911_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
return v___x_3916_;
}
}
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
v_a_3919_ = lean_ctor_get(v___x_3910_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3910_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3910_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3910_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___boxed(lean_object* v_a_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Lasm_JS_Web_WebAssembly_JSTag();
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_validate(lean_object* v_bytes_3937_, lean_object* v_options_3938_){
_start:
{
uint8_t v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v___x_3940_ = 0;
v___x_3941_ = lean_unsigned_to_nat(2u);
v___x_3942_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_validate___closed__2));
v___x_3943_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3943_, 0, v_bytes_3937_);
v___x_3944_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_3938_);
v___x_3945_ = lean_mk_empty_array_with_capacity(v___x_3941_);
v___x_3946_ = lean_array_push(v___x_3945_, v___x_3943_);
v___x_3947_ = lean_array_push(v___x_3946_, v___x_3944_);
v___x_3948_ = l_Lasm_JS_Web_Support_args(v___x_3947_);
v___x_3949_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v___x_3942_, v___x_3948_, v___x_3940_);
return v___x_3949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_validate___boxed(lean_object* v_bytes_3950_, lean_object* v_options_3951_, lean_object* v_a_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Lasm_JS_Web_WebAssembly_validate(v_bytes_3950_, v_options_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___lam__0(lean_object* v_x_3954_){
_start:
{
if (lean_obj_tag(v_x_3954_) == 0)
{
lean_object* v_a_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3964_; 
v_a_3956_ = lean_ctor_get(v_x_3954_, 0);
v_isSharedCheck_3964_ = !lean_is_exclusive(v_x_3954_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3958_ = v_x_3954_;
v_isShared_3959_ = v_isSharedCheck_3964_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_a_3956_);
lean_dec(v_x_3954_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3964_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3961_; 
if (v_isShared_3959_ == 0)
{
v___x_3961_ = v___x_3958_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_a_3956_);
v___x_3961_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
lean_object* v___x_3962_; 
v___x_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3961_);
return v___x_3962_;
}
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3973_; 
v_a_3965_ = lean_ctor_get(v_x_3954_, 0);
v_isSharedCheck_3973_ = !lean_is_exclusive(v_x_3954_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3967_ = v_x_3954_;
v_isShared_3968_ = v_isSharedCheck_3973_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v_x_3954_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3973_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
lean_object* v___x_3971_; 
v___x_3971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3970_);
return v___x_3971_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___lam__0___boxed(lean_object* v_x_3974_, lean_object* v___y_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lasm_JS_Web_WebAssembly_compile___lam__0(v_x_3974_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile(lean_object* v_bytes_3986_, lean_object* v_options_3987_){
_start:
{
lean_object* v___f_3989_; uint8_t v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; 
v___f_3989_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_3990_ = 0;
v___x_3991_ = lean_unsigned_to_nat(2u);
v___x_3992_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__3));
v___x_3993_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3993_, 0, v_bytes_3986_);
v___x_3994_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_3987_);
v___x_3995_ = lean_mk_empty_array_with_capacity(v___x_3991_);
v___x_3996_ = lean_array_push(v___x_3995_, v___x_3993_);
v___x_3997_ = lean_array_push(v___x_3996_, v___x_3994_);
v___x_3998_ = l_Lasm_JS_Web_Support_args(v___x_3997_);
v___x_3999_ = lean_unsigned_to_nat(0u);
v___x_4000_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_3992_, v___x_3998_);
v___x_4001_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3999_, v___x_3990_, v___x_4000_, v___f_3989_);
return v___x_4001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___boxed(lean_object* v_bytes_4002_, lean_object* v_options_4003_, lean_object* v_a_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l_Lasm_JS_Web_WebAssembly_compile(v_bytes_4002_, v_options_4003_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8(lean_object* v___f_4006_, lean_object* v_x_4007_){
_start:
{
if (lean_obj_tag(v_x_4007_) == 0)
{
lean_object* v_a_4009_; lean_object* v___x_4011_; uint8_t v_isShared_4012_; uint8_t v_isSharedCheck_4017_; 
lean_dec_ref(v___f_4006_);
v_a_4009_ = lean_ctor_get(v_x_4007_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v_x_4007_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4011_ = v_x_4007_;
v_isShared_4012_ = v_isSharedCheck_4017_;
goto v_resetjp_4010_;
}
else
{
lean_inc(v_a_4009_);
lean_dec(v_x_4007_);
v___x_4011_ = lean_box(0);
v_isShared_4012_ = v_isSharedCheck_4017_;
goto v_resetjp_4010_;
}
v_resetjp_4010_:
{
lean_object* v___x_4014_; 
if (v_isShared_4012_ == 0)
{
v___x_4014_ = v___x_4011_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4009_);
v___x_4014_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
lean_object* v___x_4015_; 
v___x_4015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4015_, 0, v___x_4014_);
return v___x_4015_;
}
}
}
else
{
lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4029_; 
v_isSharedCheck_4029_ = !lean_is_exclusive(v_x_4007_);
if (v_isSharedCheck_4029_ == 0)
{
lean_object* v_unused_4030_; 
v_unused_4030_ = lean_ctor_get(v_x_4007_, 0);
lean_dec(v_unused_4030_);
v___x_4019_ = v_x_4007_;
v_isShared_4020_ = v_isSharedCheck_4029_;
goto v_resetjp_4018_;
}
else
{
lean_dec(v_x_4007_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4029_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4021_; uint8_t v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4025_; 
v___x_4021_ = lean_unsigned_to_nat(0u);
v___x_4022_ = 0;
v___x_4023_ = lean_io_promise_new();
if (v_isShared_4020_ == 0)
{
lean_ctor_set(v___x_4019_, 0, v___x_4023_);
v___x_4025_ = v___x_4019_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4028_; 
v_reuseFailAlloc_4028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4028_, 0, v___x_4023_);
v___x_4025_ = v_reuseFailAlloc_4028_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; 
v___x_4026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4025_);
v___x_4027_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4021_, v___x_4022_, v___x_4026_, v___f_4006_);
return v___x_4027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8___boxed(lean_object* v___f_4031_, lean_object* v_x_4032_, lean_object* v___y_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8(v___f_4031_, v_x_4032_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1(lean_object* v___f_4035_, lean_object* v_bytes_4036_){
_start:
{
lean_object* v___x_4038_; uint8_t v___x_4039_; lean_object* v_val_4041_; lean_object* v___x_4044_; 
v___x_4038_ = lean_unsigned_to_nat(0u);
v___x_4039_ = 0;
v___x_4044_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4036_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4052_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4052_ == 0)
{
v___x_4047_ = v___x_4044_;
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___x_4044_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v___x_4050_; 
if (v_isShared_4048_ == 0)
{
lean_ctor_set_tag(v___x_4047_, 1);
v___x_4050_ = v___x_4047_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v_a_4045_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
v_val_4041_ = v___x_4050_;
goto v___jp_4040_;
}
}
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
v_a_4053_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4044_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4044_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
lean_ctor_set_tag(v___x_4055_, 0);
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
v_val_4041_ = v___x_4058_;
goto v___jp_4040_;
}
}
}
v___jp_4040_:
{
lean_object* v___x_4042_; lean_object* v___x_4043_; 
v___x_4042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4042_, 0, v_val_4041_);
v___x_4043_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4038_, v___x_4039_, v___x_4042_, v___f_4035_);
return v___x_4043_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1___boxed(lean_object* v___f_4061_, lean_object* v_bytes_4062_, lean_object* v___y_4063_){
_start:
{
lean_object* v_res_4064_; 
v_res_4064_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1(v___f_4061_, v_bytes_4062_);
lean_dec_ref(v_bytes_4062_);
return v_res_4064_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4(lean_object* v_failurePrefix_4065_, lean_object* v_x_4066_){
_start:
{
if (lean_obj_tag(v_x_4066_) == 0)
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4079_; 
v_a_4068_ = lean_ctor_get(v_x_4066_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v_x_4066_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4070_ = v_x_4066_;
v_isShared_4071_ = v_isSharedCheck_4079_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v_x_4066_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4079_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4076_; 
v___x_4072_ = lean_io_error_to_string(v_a_4068_);
v___x_4073_ = lean_string_append(v_failurePrefix_4065_, v___x_4072_);
lean_dec_ref(v___x_4072_);
v___x_4074_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4073_);
if (v_isShared_4071_ == 0)
{
lean_ctor_set(v___x_4070_, 0, v___x_4074_);
v___x_4076_ = v___x_4070_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v___x_4074_);
v___x_4076_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
lean_object* v___x_4077_; 
v___x_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4077_, 0, v___x_4076_);
return v___x_4077_;
}
}
}
else
{
lean_object* v___x_4080_; 
lean_dec_ref(v_failurePrefix_4065_);
v___x_4080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4080_, 0, v_x_4066_);
return v___x_4080_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4___boxed(lean_object* v_failurePrefix_4081_, lean_object* v_x_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v_res_4084_; 
v_res_4084_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4(v_failurePrefix_4081_, v_x_4082_);
return v_res_4084_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2(lean_object* v___f_4085_, lean_object* v_x_4086_){
_start:
{
if (lean_obj_tag(v_x_4086_) == 0)
{
lean_object* v_a_4088_; lean_object* v___x_4090_; uint8_t v_isShared_4091_; uint8_t v_isSharedCheck_4096_; 
lean_dec_ref(v___f_4085_);
v_a_4088_ = lean_ctor_get(v_x_4086_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v_x_4086_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4090_ = v_x_4086_;
v_isShared_4091_ = v_isSharedCheck_4096_;
goto v_resetjp_4089_;
}
else
{
lean_inc(v_a_4088_);
lean_dec(v_x_4086_);
v___x_4090_ = lean_box(0);
v_isShared_4091_ = v_isSharedCheck_4096_;
goto v_resetjp_4089_;
}
v_resetjp_4089_:
{
lean_object* v___x_4093_; 
if (v_isShared_4091_ == 0)
{
v___x_4093_ = v___x_4090_;
goto v_reusejp_4092_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_a_4088_);
v___x_4093_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4092_;
}
v_reusejp_4092_:
{
lean_object* v___x_4094_; 
v___x_4094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4094_, 0, v___x_4093_);
return v___x_4094_;
}
}
}
else
{
lean_object* v_a_4097_; lean_object* v___x_4098_; 
v_a_4097_ = lean_ctor_get(v_x_4086_, 0);
lean_inc(v_a_4097_);
lean_dec_ref_known(v_x_4086_, 1);
v___x_4098_ = lean_apply_2(v___f_4085_, v_a_4097_, lean_box(0));
return v___x_4098_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2___boxed(lean_object* v___f_4099_, lean_object* v_x_4100_, lean_object* v___y_4101_){
_start:
{
lean_object* v_res_4102_; 
v_res_4102_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2(v___f_4099_, v_x_4100_);
return v_res_4102_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7(lean_object* v___f_4103_, lean_object* v_a_4104_, uint32_t v_op_4105_, uint64_t v_flags_4106_, lean_object* v_payload_4107_, lean_object* v_x_4108_){
_start:
{
if (lean_obj_tag(v_x_4108_) == 0)
{
lean_object* v___x_4110_; 
lean_dec_ref(v___f_4103_);
v___x_4110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4110_, 0, v_x_4108_);
return v___x_4110_;
}
else
{
lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4131_; 
v_a_4111_ = lean_ctor_get(v_x_4108_, 0);
v_isSharedCheck_4131_ = !lean_is_exclusive(v_x_4108_);
if (v_isSharedCheck_4131_ == 0)
{
v___x_4113_ = v_x_4108_;
v_isShared_4114_ = v_isSharedCheck_4131_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_dec(v_x_4108_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4131_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
uint32_t v___x_4115_; lean_object* v___x_4116_; uint8_t v___x_4117_; lean_object* v_val_4119_; lean_object* v___x_4122_; 
v___x_4115_ = 0;
v___x_4116_ = lean_unsigned_to_nat(0u);
v___x_4117_ = 0;
v___x_4122_ = lasm_js_call_into(v_a_4104_, v_op_4105_, v___x_4115_, v_flags_4106_, v_a_4111_, v_payload_4107_);
lean_dec(v_a_4111_);
if (lean_obj_tag(v___x_4122_) == 0)
{
lean_object* v_a_4123_; lean_object* v___x_4125_; 
v_a_4123_ = lean_ctor_get(v___x_4122_, 0);
lean_inc(v_a_4123_);
lean_dec_ref_known(v___x_4122_, 1);
if (v_isShared_4114_ == 0)
{
lean_ctor_set(v___x_4113_, 0, v_a_4123_);
v___x_4125_ = v___x_4113_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4123_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
v_val_4119_ = v___x_4125_;
goto v___jp_4118_;
}
}
else
{
lean_object* v_a_4127_; lean_object* v___x_4129_; 
v_a_4127_ = lean_ctor_get(v___x_4122_, 0);
lean_inc(v_a_4127_);
lean_dec_ref_known(v___x_4122_, 1);
if (v_isShared_4114_ == 0)
{
lean_ctor_set_tag(v___x_4113_, 0);
lean_ctor_set(v___x_4113_, 0, v_a_4127_);
v___x_4129_ = v___x_4113_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v_a_4127_);
v___x_4129_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
v_val_4119_ = v___x_4129_;
goto v___jp_4118_;
}
}
v___jp_4118_:
{
lean_object* v___x_4120_; lean_object* v___x_4121_; 
v___x_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4120_, 0, v_val_4119_);
v___x_4121_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4116_, v___x_4117_, v___x_4120_, v___f_4103_);
return v___x_4121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7___boxed(lean_object* v___f_4132_, lean_object* v_a_4133_, lean_object* v_op_4134_, lean_object* v_flags_4135_, lean_object* v_payload_4136_, lean_object* v_x_4137_, lean_object* v___y_4138_){
_start:
{
uint32_t v_op_boxed_4139_; uint64_t v_flags_boxed_4140_; lean_object* v_res_4141_; 
v_op_boxed_4139_ = lean_unbox_uint32(v_op_4134_);
lean_dec(v_op_4134_);
v_flags_boxed_4140_ = lean_unbox_uint64(v_flags_4135_);
lean_dec_ref(v_flags_4135_);
v_res_4141_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7(v___f_4132_, v_a_4133_, v_op_boxed_4139_, v_flags_boxed_4140_, v_payload_4136_, v_x_4137_);
lean_dec(v_payload_4136_);
lean_dec(v_a_4133_);
return v_res_4141_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3(lean_object* v_a_4142_, lean_object* v_x_4143_){
_start:
{
if (lean_obj_tag(v_x_4143_) == 0)
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4153_; 
v_a_4145_ = lean_ctor_get(v_x_4143_, 0);
v_isSharedCheck_4153_ = !lean_is_exclusive(v_x_4143_);
if (v_isSharedCheck_4153_ == 0)
{
v___x_4147_ = v_x_4143_;
v_isShared_4148_ = v_isSharedCheck_4153_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v_x_4143_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4153_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
lean_object* v___x_4151_; 
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4150_);
return v___x_4151_;
}
}
}
else
{
lean_object* v___x_4154_; 
lean_dec_ref_known(v_x_4143_, 1);
v___x_4154_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_4142_);
return v___x_4154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed(lean_object* v_a_4155_, lean_object* v_x_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3(v_a_4155_, v_x_4156_);
lean_dec(v_a_4155_);
return v_res_4158_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5(lean_object* v___x_4159_, uint8_t v___x_4160_, lean_object* v___f_4161_, lean_object* v_a_4162_, uint32_t v_op_4163_, uint64_t v_flags_4164_, lean_object* v_payload_4165_, lean_object* v_x_4166_){
_start:
{
lean_object* v_val_4169_; 
if (lean_obj_tag(v_x_4166_) == 0)
{
lean_object* v___x_4172_; 
lean_dec_ref(v___f_4161_);
lean_dec(v___x_4159_);
v___x_4172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4172_, 0, v_x_4166_);
return v___x_4172_;
}
else
{
lean_object* v_a_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4187_; 
v_a_4173_ = lean_ctor_get(v_x_4166_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v_x_4166_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4175_ = v_x_4166_;
v_isShared_4176_ = v_isSharedCheck_4187_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_a_4173_);
lean_dec(v_x_4166_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4187_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
uint32_t v___x_4177_; lean_object* v___x_4178_; 
v___x_4177_ = 0;
v___x_4178_ = lasm_js_call_into(v_a_4162_, v_op_4163_, v___x_4177_, v_flags_4164_, v_a_4173_, v_payload_4165_);
lean_dec(v_a_4173_);
if (lean_obj_tag(v___x_4178_) == 0)
{
lean_object* v_a_4179_; lean_object* v___x_4181_; 
v_a_4179_ = lean_ctor_get(v___x_4178_, 0);
lean_inc(v_a_4179_);
lean_dec_ref_known(v___x_4178_, 1);
if (v_isShared_4176_ == 0)
{
lean_ctor_set(v___x_4175_, 0, v_a_4179_);
v___x_4181_ = v___x_4175_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_a_4179_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
v_val_4169_ = v___x_4181_;
goto v___jp_4168_;
}
}
else
{
lean_object* v_a_4183_; lean_object* v___x_4185_; 
v_a_4183_ = lean_ctor_get(v___x_4178_, 0);
lean_inc(v_a_4183_);
lean_dec_ref_known(v___x_4178_, 1);
if (v_isShared_4176_ == 0)
{
lean_ctor_set_tag(v___x_4175_, 0);
lean_ctor_set(v___x_4175_, 0, v_a_4183_);
v___x_4185_ = v___x_4175_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4183_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
v_val_4169_ = v___x_4185_;
goto v___jp_4168_;
}
}
}
}
v___jp_4168_:
{
lean_object* v___x_4170_; lean_object* v___x_4171_; 
v___x_4170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4170_, 0, v_val_4169_);
v___x_4171_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4159_, v___x_4160_, v___x_4170_, v___f_4161_);
return v___x_4171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5___boxed(lean_object* v___x_4188_, lean_object* v___x_4189_, lean_object* v___f_4190_, lean_object* v_a_4191_, lean_object* v_op_4192_, lean_object* v_flags_4193_, lean_object* v_payload_4194_, lean_object* v_x_4195_, lean_object* v___y_4196_){
_start:
{
uint8_t v___x_1506__boxed_4197_; uint32_t v_op_boxed_4198_; uint64_t v_flags_boxed_4199_; lean_object* v_res_4200_; 
v___x_1506__boxed_4197_ = lean_unbox(v___x_4189_);
v_op_boxed_4198_ = lean_unbox_uint32(v_op_4192_);
lean_dec(v_op_4192_);
v_flags_boxed_4199_ = lean_unbox_uint64(v_flags_4193_);
lean_dec_ref(v_flags_4193_);
v_res_4200_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5(v___x_4188_, v___x_1506__boxed_4197_, v___f_4190_, v_a_4191_, v_op_boxed_4198_, v_flags_boxed_4199_, v_payload_4194_, v_x_4195_);
lean_dec(v_payload_4194_);
lean_dec(v_a_4191_);
return v_res_4200_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6(lean_object* v_failurePrefix_4201_, uint32_t v_op_4202_, uint64_t v_flags_4203_, lean_object* v_payload_4204_, lean_object* v___f_4205_, lean_object* v___f_4206_, lean_object* v___f_4207_, lean_object* v_x_4208_){
_start:
{
if (lean_obj_tag(v_x_4208_) == 0)
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4218_; 
lean_dec_ref(v___f_4207_);
lean_dec_ref(v___f_4206_);
lean_dec_ref(v___f_4205_);
lean_dec(v_payload_4204_);
v_a_4210_ = lean_ctor_get(v_x_4208_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v_x_4208_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4212_ = v_x_4208_;
v_isShared_4213_ = v_isSharedCheck_4218_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v_x_4208_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4218_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4215_; 
if (v_isShared_4213_ == 0)
{
v___x_4215_ = v___x_4212_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v_a_4210_);
v___x_4215_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
lean_object* v___x_4216_; 
v___x_4216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4215_);
return v___x_4216_;
}
}
}
else
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4265_; 
v_a_4219_ = lean_ctor_get(v_x_4208_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v_x_4208_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4221_ = v_x_4208_;
v_isShared_4222_ = v_isSharedCheck_4265_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v_x_4208_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4265_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4223_; lean_object* v___x_4224_; uint8_t v___x_4225_; 
v___x_4223_ = lean_string_utf8_byte_size(v_failurePrefix_4201_);
v___x_4224_ = lean_unsigned_to_nat(0u);
v___x_4225_ = lean_nat_dec_eq(v___x_4223_, v___x_4224_);
if (v___x_4225_ == 0)
{
lean_object* v___f_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___f_4230_; lean_object* v_val_4232_; lean_object* v___x_4237_; 
lean_dec_ref(v___f_4207_);
lean_inc(v_a_4219_);
v___f_4226_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4226_, 0, v_a_4219_);
v___x_4227_ = lean_box(v___x_4225_);
v___x_4228_ = lean_box_uint32(v_op_4202_);
v___x_4229_ = lean_box_uint64(v_flags_4203_);
lean_inc(v_payload_4204_);
v___f_4230_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4230_, 0, v___x_4224_);
lean_closure_set(v___f_4230_, 1, v___x_4227_);
lean_closure_set(v___f_4230_, 2, v___f_4226_);
lean_closure_set(v___f_4230_, 3, v_a_4219_);
lean_closure_set(v___f_4230_, 4, v___x_4228_);
lean_closure_set(v___f_4230_, 5, v___x_4229_);
lean_closure_set(v___f_4230_, 6, v_payload_4204_);
v___x_4237_ = l_Lasm_JS_Wire_encodeIO(v_payload_4204_);
lean_dec(v_payload_4204_);
if (lean_obj_tag(v___x_4237_) == 0)
{
lean_object* v_a_4238_; lean_object* v___x_4240_; 
v_a_4238_ = lean_ctor_get(v___x_4237_, 0);
lean_inc(v_a_4238_);
lean_dec_ref_known(v___x_4237_, 1);
if (v_isShared_4222_ == 0)
{
lean_ctor_set(v___x_4221_, 0, v_a_4238_);
v___x_4240_ = v___x_4221_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_a_4238_);
v___x_4240_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
v_val_4232_ = v___x_4240_;
goto v___jp_4231_;
}
}
else
{
lean_object* v_a_4242_; lean_object* v___x_4244_; 
v_a_4242_ = lean_ctor_get(v___x_4237_, 0);
lean_inc(v_a_4242_);
lean_dec_ref_known(v___x_4237_, 1);
if (v_isShared_4222_ == 0)
{
lean_ctor_set_tag(v___x_4221_, 0);
lean_ctor_set(v___x_4221_, 0, v_a_4242_);
v___x_4244_ = v___x_4221_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_a_4242_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
v_val_4232_ = v___x_4244_;
goto v___jp_4231_;
}
}
v___jp_4231_:
{
lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
v___x_4233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4233_, 0, v_val_4232_);
v___x_4234_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4224_, v___x_4225_, v___x_4233_, v___f_4230_);
v___x_4235_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4224_, v___x_4225_, v___x_4234_, v___f_4205_);
v___x_4236_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4224_, v___x_4225_, v___x_4235_, v___f_4206_);
return v___x_4236_;
}
}
else
{
lean_object* v___f_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___f_4249_; uint8_t v___x_4250_; lean_object* v_val_4252_; lean_object* v___x_4256_; 
lean_dec_ref(v___f_4206_);
lean_dec_ref(v___f_4205_);
lean_inc(v_a_4219_);
v___f_4246_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4246_, 0, v_a_4219_);
v___x_4247_ = lean_box_uint32(v_op_4202_);
v___x_4248_ = lean_box_uint64(v_flags_4203_);
lean_inc(v_payload_4204_);
v___f_4249_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4249_, 0, v___f_4246_);
lean_closure_set(v___f_4249_, 1, v_a_4219_);
lean_closure_set(v___f_4249_, 2, v___x_4247_);
lean_closure_set(v___f_4249_, 3, v___x_4248_);
lean_closure_set(v___f_4249_, 4, v_payload_4204_);
v___x_4250_ = 0;
v___x_4256_ = l_Lasm_JS_Wire_encodeIO(v_payload_4204_);
lean_dec(v_payload_4204_);
if (lean_obj_tag(v___x_4256_) == 0)
{
lean_object* v_a_4257_; lean_object* v___x_4259_; 
v_a_4257_ = lean_ctor_get(v___x_4256_, 0);
lean_inc(v_a_4257_);
lean_dec_ref_known(v___x_4256_, 1);
if (v_isShared_4222_ == 0)
{
lean_ctor_set(v___x_4221_, 0, v_a_4257_);
v___x_4259_ = v___x_4221_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4257_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
v_val_4252_ = v___x_4259_;
goto v___jp_4251_;
}
}
else
{
lean_object* v_a_4261_; lean_object* v___x_4263_; 
v_a_4261_ = lean_ctor_get(v___x_4256_, 0);
lean_inc(v_a_4261_);
lean_dec_ref_known(v___x_4256_, 1);
if (v_isShared_4222_ == 0)
{
lean_ctor_set_tag(v___x_4221_, 0);
lean_ctor_set(v___x_4221_, 0, v_a_4261_);
v___x_4263_ = v___x_4221_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v_a_4261_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
v_val_4252_ = v___x_4263_;
goto v___jp_4251_;
}
}
v___jp_4251_:
{
lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; 
v___x_4253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4253_, 0, v_val_4252_);
v___x_4254_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4224_, v___x_4250_, v___x_4253_, v___f_4249_);
v___x_4255_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4224_, v___x_4250_, v___x_4254_, v___f_4207_);
return v___x_4255_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6___boxed(lean_object* v_failurePrefix_4266_, lean_object* v_op_4267_, lean_object* v_flags_4268_, lean_object* v_payload_4269_, lean_object* v___f_4270_, lean_object* v___f_4271_, lean_object* v___f_4272_, lean_object* v_x_4273_, lean_object* v___y_4274_){
_start:
{
uint32_t v_op_boxed_4275_; uint64_t v_flags_boxed_4276_; lean_object* v_res_4277_; 
v_op_boxed_4275_ = lean_unbox_uint32(v_op_4267_);
lean_dec(v_op_4267_);
v_flags_boxed_4276_ = lean_unbox_uint64(v_flags_4268_);
lean_dec_ref(v_flags_4268_);
v_res_4277_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6(v_failurePrefix_4266_, v_op_boxed_4275_, v_flags_boxed_4276_, v_payload_4269_, v___f_4270_, v___f_4271_, v___f_4272_, v_x_4273_);
lean_dec_ref(v_failurePrefix_4266_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_4280_, lean_object* v_key_4281_){
_start:
{
if (lean_obj_tag(v_d_4280_) == 8)
{
lean_object* v___x_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4309_; 
v___x_4282_ = l_Lasm_JS_Data_field(v_d_4280_, v_key_4281_);
v_isSharedCheck_4309_ = !lean_is_exclusive(v_d_4280_);
if (v_isSharedCheck_4309_ == 0)
{
lean_object* v_unused_4310_; 
v_unused_4310_ = lean_ctor_get(v_d_4280_, 0);
lean_dec(v_unused_4310_);
v___x_4284_ = v_d_4280_;
v_isShared_4285_ = v_isSharedCheck_4309_;
goto v_resetjp_4283_;
}
else
{
lean_dec(v_d_4280_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4309_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
if (lean_obj_tag(v___x_4282_) == 9)
{
lean_object* v_value_4286_; lean_object* v___x_4288_; 
v_value_4286_ = lean_ctor_get(v___x_4282_, 0);
lean_inc(v_value_4286_);
lean_dec_ref_known(v___x_4282_, 2);
if (v_isShared_4285_ == 0)
{
lean_ctor_set_tag(v___x_4284_, 1);
lean_ctor_set(v___x_4284_, 0, v_value_4286_);
v___x_4288_ = v___x_4284_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_value_4286_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
else
{
lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; uint8_t v___x_4300_; 
v___x_4290_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_4291_ = lean_string_append(v___x_4290_, v_key_4281_);
v___x_4292_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_4293_ = lean_string_append(v___x_4291_, v___x_4292_);
v___x_4294_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInstance___closed__0));
v___x_4295_ = lean_string_append(v___x_4293_, v___x_4294_);
v___x_4296_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_4297_ = lean_string_append(v___x_4295_, v___x_4296_);
v___x_4298_ = l_Lasm_JS_Data_describe(v___x_4282_);
v___x_4299_ = lean_string_append(v___x_4297_, v___x_4298_);
lean_dec_ref(v___x_4298_);
v___x_4300_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_4300_ == 0)
{
lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4304_; 
v___x_4301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___x_4302_ = lean_string_append(v___x_4299_, v___x_4301_);
if (v_isShared_4285_ == 0)
{
lean_ctor_set_tag(v___x_4284_, 0);
lean_ctor_set(v___x_4284_, 0, v___x_4302_);
v___x_4304_ = v___x_4284_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v___x_4302_);
v___x_4304_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
return v___x_4304_;
}
}
else
{
lean_object* v___x_4307_; 
if (v_isShared_4285_ == 0)
{
lean_ctor_set_tag(v___x_4284_, 0);
lean_ctor_set(v___x_4284_, 0, v___x_4299_);
v___x_4307_ = v___x_4284_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v___x_4299_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
return v___x_4307_;
}
}
}
}
}
else
{
lean_object* v___x_4311_; 
lean_dec(v_d_4280_);
v___x_4311_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_4311_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_4312_, lean_object* v_key_4313_){
_start:
{
lean_object* v_res_4314_; 
v_res_4314_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(v_d_4312_, v_key_4313_);
lean_dec_ref(v_key_4313_);
return v_res_4314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_4315_, lean_object* v_key_4316_){
_start:
{
if (lean_obj_tag(v_d_4315_) == 8)
{
lean_object* v___x_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4344_; 
v___x_4317_ = l_Lasm_JS_Data_field(v_d_4315_, v_key_4316_);
v_isSharedCheck_4344_ = !lean_is_exclusive(v_d_4315_);
if (v_isSharedCheck_4344_ == 0)
{
lean_object* v_unused_4345_; 
v_unused_4345_ = lean_ctor_get(v_d_4315_, 0);
lean_dec(v_unused_4345_);
v___x_4319_ = v_d_4315_;
v_isShared_4320_ = v_isSharedCheck_4344_;
goto v_resetjp_4318_;
}
else
{
lean_dec(v_d_4315_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4344_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
if (lean_obj_tag(v___x_4317_) == 9)
{
lean_object* v_value_4321_; lean_object* v___x_4323_; 
v_value_4321_ = lean_ctor_get(v___x_4317_, 0);
lean_inc(v_value_4321_);
lean_dec_ref_known(v___x_4317_, 2);
if (v_isShared_4320_ == 0)
{
lean_ctor_set_tag(v___x_4319_, 1);
lean_ctor_set(v___x_4319_, 0, v_value_4321_);
v___x_4323_ = v___x_4319_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v_value_4321_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
}
}
else
{
lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; uint8_t v___x_4335_; 
v___x_4325_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_4326_ = lean_string_append(v___x_4325_, v_key_4316_);
v___x_4327_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_4328_ = lean_string_append(v___x_4326_, v___x_4327_);
v___x_4329_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModule___closed__1));
v___x_4330_ = lean_string_append(v___x_4328_, v___x_4329_);
v___x_4331_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_4332_ = lean_string_append(v___x_4330_, v___x_4331_);
v___x_4333_ = l_Lasm_JS_Data_describe(v___x_4317_);
v___x_4334_ = lean_string_append(v___x_4332_, v___x_4333_);
lean_dec_ref(v___x_4333_);
v___x_4335_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_4335_ == 0)
{
lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4339_; 
v___x_4336_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___x_4337_ = lean_string_append(v___x_4334_, v___x_4336_);
if (v_isShared_4320_ == 0)
{
lean_ctor_set_tag(v___x_4319_, 0);
lean_ctor_set(v___x_4319_, 0, v___x_4337_);
v___x_4339_ = v___x_4319_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v___x_4337_);
v___x_4339_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
return v___x_4339_;
}
}
else
{
lean_object* v___x_4342_; 
if (v_isShared_4320_ == 0)
{
lean_ctor_set_tag(v___x_4319_, 0);
lean_ctor_set(v___x_4319_, 0, v___x_4334_);
v___x_4342_ = v___x_4319_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v___x_4334_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
}
}
else
{
lean_object* v___x_4346_; 
lean_dec(v_d_4315_);
v___x_4346_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_4346_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_4347_, lean_object* v_key_4348_){
_start:
{
lean_object* v_res_4349_; 
v_res_4349_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(v_d_4347_, v_key_4348_);
lean_dec_ref(v_key_4348_);
return v_res_4349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(lean_object* v_context_4350_, lean_object* v_d_4351_){
_start:
{
lean_object* v___y_4354_; lean_object* v___y_4355_; lean_object* v___y_4360_; lean_object* v_received_4361_; lean_object* v___y_4380_; lean_object* v_a_4383_; lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4407_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0));
lean_inc(v_d_4351_);
v___x_4408_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(v_d_4351_, v___x_4407_);
if (lean_obj_tag(v___x_4408_) == 0)
{
lean_object* v_a_4409_; 
v_a_4409_ = lean_ctor_get(v___x_4408_, 0);
lean_inc(v_a_4409_);
lean_dec_ref_known(v___x_4408_, 1);
v_a_4383_ = v_a_4409_;
goto v___jp_4382_;
}
else
{
lean_object* v_a_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v_a_4410_ = lean_ctor_get(v___x_4408_, 0);
lean_inc(v_a_4410_);
lean_dec_ref_known(v___x_4408_, 1);
v___x_4411_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___closed__0));
lean_inc(v_d_4351_);
v___x_4412_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(v_d_4351_, v___x_4411_);
if (lean_obj_tag(v___x_4412_) == 0)
{
lean_object* v_a_4413_; 
lean_dec(v_a_4410_);
v_a_4413_ = lean_ctor_get(v___x_4412_, 0);
lean_inc(v_a_4413_);
lean_dec_ref_known(v___x_4412_, 1);
v_a_4383_ = v_a_4413_;
goto v___jp_4382_;
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4422_; 
lean_dec(v_d_4351_);
v_a_4414_ = lean_ctor_get(v___x_4412_, 0);
v_isSharedCheck_4422_ = !lean_is_exclusive(v___x_4412_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4416_ = v___x_4412_;
v_isShared_4417_ = v_isSharedCheck_4422_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4412_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4422_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4418_; lean_object* v___x_4420_; 
v___x_4418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4418_, 0, v_a_4410_);
lean_ctor_set(v___x_4418_, 1, v_a_4414_);
if (v_isShared_4417_ == 0)
{
lean_ctor_set_tag(v___x_4416_, 0);
lean_ctor_set(v___x_4416_, 0, v___x_4418_);
v___x_4420_ = v___x_4416_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v___x_4418_);
v___x_4420_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
return v___x_4420_;
}
}
}
}
v___jp_4353_:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; 
v___x_4356_ = lean_string_append(v___y_4354_, v___y_4355_);
lean_dec_ref(v___y_4355_);
v___x_4357_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4357_, 0, v___x_4356_);
v___x_4358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4358_, 0, v___x_4357_);
return v___x_4358_;
}
v___jp_4359_:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; uint8_t v___x_4373_; 
v___x_4362_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4363_ = lean_string_append(v___x_4362_, v_context_4350_);
v___x_4364_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_4365_ = lean_string_append(v___x_4363_, v___x_4364_);
v___x_4366_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__1));
v___x_4367_ = lean_string_append(v___x_4365_, v___x_4366_);
v___x_4368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_4369_ = lean_string_append(v___x_4367_, v___x_4368_);
v___x_4370_ = lean_string_append(v___x_4369_, v_received_4361_);
lean_dec_ref(v_received_4361_);
v___x_4371_ = lean_string_utf8_byte_size(v___y_4360_);
v___x_4372_ = lean_unsigned_to_nat(0u);
v___x_4373_ = lean_nat_dec_eq(v___x_4371_, v___x_4372_);
if (v___x_4373_ == 0)
{
lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_4375_ = lean_string_append(v___x_4374_, v___y_4360_);
lean_dec_ref(v___y_4360_);
v___x_4376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_4377_ = lean_string_append(v___x_4375_, v___x_4376_);
v___y_4354_ = v___x_4370_;
v___y_4355_ = v___x_4377_;
goto v___jp_4353_;
}
else
{
lean_object* v___x_4378_; 
lean_dec_ref(v___y_4360_);
v___x_4378_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_4354_ = v___x_4370_;
v___y_4355_ = v___x_4378_;
goto v___jp_4353_;
}
}
v___jp_4379_:
{
lean_object* v___x_4381_; 
v___x_4381_ = l_Lasm_JS_Data_describe(v_d_4351_);
v___y_4360_ = v___y_4380_;
v_received_4361_ = v___x_4381_;
goto v___jp_4359_;
}
v___jp_4382_:
{
if (lean_obj_tag(v_d_4351_) == 9)
{
lean_object* v_value_4384_; lean_object* v_description_4385_; lean_object* v___x_4386_; uint8_t v___x_4387_; 
v_value_4384_ = lean_ctor_get(v_d_4351_, 0);
v_description_4385_ = lean_ctor_get(v_d_4351_, 1);
v___x_4386_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4387_ = lean_string_dec_eq(v_description_4385_, v___x_4386_);
if (v___x_4387_ == 0)
{
v___y_4380_ = v_a_4383_;
goto v___jp_4379_;
}
else
{
lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4404_; 
lean_inc(v_value_4384_);
v_isSharedCheck_4404_ = !lean_is_exclusive(v_d_4351_);
if (v_isSharedCheck_4404_ == 0)
{
lean_object* v_unused_4405_; lean_object* v_unused_4406_; 
v_unused_4405_ = lean_ctor_get(v_d_4351_, 1);
lean_dec(v_unused_4405_);
v_unused_4406_ = lean_ctor_get(v_d_4351_, 0);
lean_dec(v_unused_4406_);
v___x_4389_ = v_d_4351_;
v_isShared_4390_ = v_isSharedCheck_4404_;
goto v_resetjp_4388_;
}
else
{
lean_dec(v_d_4351_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4404_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
uint32_t v___x_4391_; uint64_t v___x_4392_; lean_object* v___x_4394_; 
v___x_4391_ = 206;
v___x_4392_ = 0ULL;
lean_inc(v_value_4384_);
if (v_isShared_4390_ == 0)
{
lean_ctor_set(v___x_4389_, 1, v___x_4386_);
v___x_4394_ = v___x_4389_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v_value_4384_);
lean_ctor_set(v_reuseFailAlloc_4403_, 1, v___x_4386_);
v___x_4394_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
uint32_t v___x_4395_; lean_object* v___x_4396_; 
v___x_4395_ = lasm_js_value_handle(v_value_4384_);
lean_dec(v_value_4384_);
v___x_4396_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4391_, v___x_4392_, v___x_4394_, v___x_4395_);
lean_dec_ref(v___x_4394_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_object* v_a_4397_; uint8_t v___x_4398_; 
v_a_4397_ = lean_ctor_get(v___x_4396_, 0);
lean_inc(v_a_4397_);
lean_dec_ref_known(v___x_4396_, 1);
v___x_4398_ = lean_string_validate_utf8(v_a_4397_);
if (v___x_4398_ == 0)
{
lean_object* v___x_4399_; lean_object* v___x_4400_; 
lean_dec(v_a_4397_);
v___x_4399_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_4400_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4399_);
v___y_4360_ = v_a_4383_;
v_received_4361_ = v___x_4400_;
goto v___jp_4359_;
}
else
{
lean_object* v___x_4401_; 
v___x_4401_ = lean_string_from_utf8_unchecked(v_a_4397_);
v___y_4360_ = v_a_4383_;
v_received_4361_ = v___x_4401_;
goto v___jp_4359_;
}
}
else
{
lean_object* v___x_4402_; 
lean_dec_ref_known(v___x_4396_, 1);
v___x_4402_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v___y_4360_ = v_a_4383_;
v_received_4361_ = v___x_4402_;
goto v___jp_4359_;
}
}
}
}
}
else
{
v___y_4380_ = v_a_4383_;
goto v___jp_4379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4423_, lean_object* v_d_4424_, lean_object* v_a_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(v_context_4423_, v_d_4424_);
lean_dec_ref(v_context_4423_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0(lean_object* v_context_4427_, lean_object* v_x_4428_){
_start:
{
lean_object* v_val_4431_; 
if (lean_obj_tag(v_x_4428_) == 0)
{
lean_object* v_a_4433_; lean_object* v___x_4435_; uint8_t v_isShared_4436_; uint8_t v_isSharedCheck_4441_; 
v_a_4433_ = lean_ctor_get(v_x_4428_, 0);
v_isSharedCheck_4441_ = !lean_is_exclusive(v_x_4428_);
if (v_isSharedCheck_4441_ == 0)
{
v___x_4435_ = v_x_4428_;
v_isShared_4436_ = v_isSharedCheck_4441_;
goto v_resetjp_4434_;
}
else
{
lean_inc(v_a_4433_);
lean_dec(v_x_4428_);
v___x_4435_ = lean_box(0);
v_isShared_4436_ = v_isSharedCheck_4441_;
goto v_resetjp_4434_;
}
v_resetjp_4434_:
{
lean_object* v___x_4438_; 
if (v_isShared_4436_ == 0)
{
v___x_4438_ = v___x_4435_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v_a_4433_);
v___x_4438_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
lean_object* v___x_4439_; 
v___x_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4438_);
return v___x_4439_;
}
}
}
else
{
lean_object* v_a_4442_; lean_object* v___x_4444_; uint8_t v_isShared_4445_; uint8_t v_isSharedCheck_4455_; 
v_a_4442_ = lean_ctor_get(v_x_4428_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v_x_4428_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4444_ = v_x_4428_;
v_isShared_4445_ = v_isSharedCheck_4455_;
goto v_resetjp_4443_;
}
else
{
lean_inc(v_a_4442_);
lean_dec(v_x_4428_);
v___x_4444_ = lean_box(0);
v_isShared_4445_ = v_isSharedCheck_4455_;
goto v_resetjp_4443_;
}
v_resetjp_4443_:
{
lean_object* v___x_4446_; 
v___x_4446_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(v_context_4427_, v_a_4442_);
if (lean_obj_tag(v___x_4446_) == 0)
{
lean_object* v_a_4447_; lean_object* v___x_4449_; 
v_a_4447_ = lean_ctor_get(v___x_4446_, 0);
lean_inc(v_a_4447_);
lean_dec_ref_known(v___x_4446_, 1);
if (v_isShared_4445_ == 0)
{
lean_ctor_set(v___x_4444_, 0, v_a_4447_);
v___x_4449_ = v___x_4444_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v_a_4447_);
v___x_4449_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
v_val_4431_ = v___x_4449_;
goto v___jp_4430_;
}
}
else
{
lean_object* v_a_4451_; lean_object* v___x_4453_; 
v_a_4451_ = lean_ctor_get(v___x_4446_, 0);
lean_inc(v_a_4451_);
lean_dec_ref_known(v___x_4446_, 1);
if (v_isShared_4445_ == 0)
{
lean_ctor_set_tag(v___x_4444_, 0);
lean_ctor_set(v___x_4444_, 0, v_a_4451_);
v___x_4453_ = v___x_4444_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4451_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
v_val_4431_ = v___x_4453_;
goto v___jp_4430_;
}
}
}
}
v___jp_4430_:
{
lean_object* v___x_4432_; 
v___x_4432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4432_, 0, v_val_4431_);
return v___x_4432_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0___boxed(lean_object* v_context_4456_, lean_object* v_x_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v_res_4459_; 
v_res_4459_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0(v_context_4456_, v_x_4457_);
lean_dec_ref(v_context_4456_);
return v_res_4459_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(lean_object* v_context_4460_, uint32_t v_op_4461_, uint64_t v_flags_4462_, lean_object* v_payload_4463_, lean_object* v_failurePrefix_4464_){
_start:
{
lean_object* v___f_4466_; lean_object* v___f_4467_; lean_object* v___f_4468_; lean_object* v___f_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___f_4472_; lean_object* v___f_4473_; lean_object* v___x_4474_; uint8_t v___x_4475_; lean_object* v_val_4477_; lean_object* v___x_4480_; 
v___f_4466_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4466_, 0, v_context_4460_);
v___f_4467_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4467_, 0, v___f_4466_);
v___f_4468_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4468_, 0, v___f_4467_);
lean_inc_ref(v_failurePrefix_4464_);
v___f_4469_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4469_, 0, v_failurePrefix_4464_);
v___x_4470_ = lean_box_uint32(v_op_4461_);
v___x_4471_ = lean_box_uint64(v_flags_4462_);
lean_inc_ref(v___f_4468_);
v___f_4472_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4472_, 0, v_failurePrefix_4464_);
lean_closure_set(v___f_4472_, 1, v___x_4470_);
lean_closure_set(v___f_4472_, 2, v___x_4471_);
lean_closure_set(v___f_4472_, 3, v_payload_4463_);
lean_closure_set(v___f_4472_, 4, v___f_4469_);
lean_closure_set(v___f_4472_, 5, v___f_4468_);
lean_closure_set(v___f_4472_, 6, v___f_4468_);
v___f_4473_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4473_, 0, v___f_4472_);
v___x_4474_ = lean_unsigned_to_nat(0u);
v___x_4475_ = 0;
v___x_4480_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4480_) == 0)
{
lean_object* v_a_4481_; lean_object* v___x_4483_; uint8_t v_isShared_4484_; uint8_t v_isSharedCheck_4488_; 
v_a_4481_ = lean_ctor_get(v___x_4480_, 0);
v_isSharedCheck_4488_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4488_ == 0)
{
v___x_4483_ = v___x_4480_;
v_isShared_4484_ = v_isSharedCheck_4488_;
goto v_resetjp_4482_;
}
else
{
lean_inc(v_a_4481_);
lean_dec(v___x_4480_);
v___x_4483_ = lean_box(0);
v_isShared_4484_ = v_isSharedCheck_4488_;
goto v_resetjp_4482_;
}
v_resetjp_4482_:
{
lean_object* v___x_4486_; 
if (v_isShared_4484_ == 0)
{
lean_ctor_set_tag(v___x_4483_, 1);
v___x_4486_ = v___x_4483_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4487_; 
v_reuseFailAlloc_4487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4487_, 0, v_a_4481_);
v___x_4486_ = v_reuseFailAlloc_4487_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
v_val_4477_ = v___x_4486_;
goto v___jp_4476_;
}
}
}
else
{
lean_object* v_a_4489_; lean_object* v___x_4491_; uint8_t v_isShared_4492_; uint8_t v_isSharedCheck_4496_; 
v_a_4489_ = lean_ctor_get(v___x_4480_, 0);
v_isSharedCheck_4496_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4496_ == 0)
{
v___x_4491_ = v___x_4480_;
v_isShared_4492_ = v_isSharedCheck_4496_;
goto v_resetjp_4490_;
}
else
{
lean_inc(v_a_4489_);
lean_dec(v___x_4480_);
v___x_4491_ = lean_box(0);
v_isShared_4492_ = v_isSharedCheck_4496_;
goto v_resetjp_4490_;
}
v_resetjp_4490_:
{
lean_object* v___x_4494_; 
if (v_isShared_4492_ == 0)
{
lean_ctor_set_tag(v___x_4491_, 0);
v___x_4494_ = v___x_4491_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_a_4489_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
v_val_4477_ = v___x_4494_;
goto v___jp_4476_;
}
}
}
v___jp_4476_:
{
lean_object* v___x_4478_; lean_object* v___x_4479_; 
v___x_4478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4478_, 0, v_val_4477_);
v___x_4479_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4474_, v___x_4475_, v___x_4478_, v___f_4473_);
return v___x_4479_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___boxed(lean_object* v_context_4497_, lean_object* v_op_4498_, lean_object* v_flags_4499_, lean_object* v_payload_4500_, lean_object* v_failurePrefix_4501_, lean_object* v_a_4502_){
_start:
{
uint32_t v_op_boxed_4503_; uint64_t v_flags_boxed_4504_; lean_object* v_res_4505_; 
v_op_boxed_4503_ = lean_unbox_uint32(v_op_4498_);
lean_dec(v_op_4498_);
v_flags_boxed_4504_ = lean_unbox_uint64(v_flags_4499_);
lean_dec_ref(v_flags_4499_);
v_res_4505_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(v_context_4497_, v_op_boxed_4503_, v_flags_boxed_4504_, v_payload_4500_, v_failurePrefix_4501_);
return v_res_4505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(lean_object* v_b_4506_, lean_object* v_args_4507_){
_start:
{
uint8_t v_construct_4509_; lean_object* v___x_4510_; uint32_t v___x_4511_; uint64_t v___x_4512_; uint64_t v___y_4514_; 
v_construct_4509_ = lean_ctor_get_uint8(v_b_4506_, sizeof(void*)*4);
v___x_4510_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4506_);
v___x_4511_ = 214;
v___x_4512_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_construct_4509_ == 0)
{
uint64_t v___x_4522_; 
v___x_4522_ = 0ULL;
v___y_4514_ = v___x_4522_;
goto v___jp_4513_;
}
else
{
uint64_t v___x_4523_; 
v___x_4523_ = 4ULL;
v___y_4514_ = v___x_4523_;
goto v___jp_4513_;
}
v___jp_4513_:
{
uint64_t v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; 
v___x_4515_ = lean_uint64_lor(v___x_4512_, v___y_4514_);
v___x_4516_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4506_, v_args_4507_);
v___x_4517_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4518_ = lean_string_append(v___x_4517_, v___x_4510_);
v___x_4519_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_4520_ = lean_string_append(v___x_4518_, v___x_4519_);
v___x_4521_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(v___x_4510_, v___x_4511_, v___x_4515_, v___x_4516_, v___x_4520_);
return v___x_4521_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0___boxed(lean_object* v_b_4524_, lean_object* v_args_4525_, lean_object* v_a_4526_){
_start:
{
lean_object* v_res_4527_; 
v_res_4527_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v_b_4524_, v_args_4525_);
lean_dec_ref(v_b_4524_);
return v_res_4527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiate(lean_object* v_bytes_4536_, lean_object* v_importObject_4537_, lean_object* v_options_4538_){
_start:
{
lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4540_ = lean_unsigned_to_nat(3u);
v___x_4541_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiate___closed__2));
v___x_4542_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4542_, 0, v_bytes_4536_);
v___x_4543_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4538_);
v___x_4544_ = lean_mk_empty_array_with_capacity(v___x_4540_);
v___x_4545_ = lean_array_push(v___x_4544_, v___x_4542_);
v___x_4546_ = lean_array_push(v___x_4545_, v_importObject_4537_);
v___x_4547_ = lean_array_push(v___x_4546_, v___x_4543_);
v___x_4548_ = l_Lasm_JS_Web_Support_args(v___x_4547_);
v___x_4549_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v___x_4541_, v___x_4548_);
return v___x_4549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiate___boxed(lean_object* v_bytes_4550_, lean_object* v_importObject_4551_, lean_object* v_options_4552_, lean_object* v_a_4553_){
_start:
{
lean_object* v_res_4554_; 
v_res_4554_ = l_Lasm_JS_Web_WebAssembly_instantiate(v_bytes_4550_, v_importObject_4551_, v_options_4552_);
return v_res_4554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject(lean_object* v_moduleObject_4562_, lean_object* v_importObject_4563_){
_start:
{
lean_object* v___f_4565_; uint8_t v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___f_4565_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_4566_ = 0;
v___x_4567_ = lean_unsigned_to_nat(2u);
v___x_4568_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__1));
v___x_4569_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4570_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4570_, 0, v_moduleObject_4562_);
lean_ctor_set(v___x_4570_, 1, v___x_4569_);
v___x_4571_ = lean_mk_empty_array_with_capacity(v___x_4567_);
v___x_4572_ = lean_array_push(v___x_4571_, v___x_4570_);
v___x_4573_ = lean_array_push(v___x_4572_, v_importObject_4563_);
v___x_4574_ = l_Lasm_JS_Web_Support_args(v___x_4573_);
v___x_4575_ = lean_unsigned_to_nat(0u);
v___x_4576_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_4568_, v___x_4574_);
v___x_4577_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4575_, v___x_4566_, v___x_4576_, v___f_4565_);
return v___x_4577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___boxed(lean_object* v_moduleObject_4578_, lean_object* v_importObject_4579_, lean_object* v_a_4580_){
_start:
{
lean_object* v_res_4581_; 
v_res_4581_ = l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject(v_moduleObject_4578_, v_importObject_4579_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming(lean_object* v_source_4590_, lean_object* v_options_4591_){
_start:
{
lean_object* v___f_4593_; uint8_t v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___f_4593_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_4594_ = 0;
v___x_4595_ = lean_unsigned_to_nat(2u);
v___x_4596_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__2));
v___x_4597_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4598_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4598_, 0, v_source_4590_);
lean_ctor_set(v___x_4598_, 1, v___x_4597_);
v___x_4599_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4591_);
v___x_4600_ = lean_mk_empty_array_with_capacity(v___x_4595_);
v___x_4601_ = lean_array_push(v___x_4600_, v___x_4598_);
v___x_4602_ = lean_array_push(v___x_4601_, v___x_4599_);
v___x_4603_ = l_Lasm_JS_Web_Support_args(v___x_4602_);
v___x_4604_ = lean_unsigned_to_nat(0u);
v___x_4605_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_4596_, v___x_4603_);
v___x_4606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4604_, v___x_4594_, v___x_4605_, v___f_4593_);
return v___x_4606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming___boxed(lean_object* v_source_4607_, lean_object* v_options_4608_, lean_object* v_a_4609_){
_start:
{
lean_object* v_res_4610_; 
v_res_4610_ = l_Lasm_JS_Web_WebAssembly_compileStreaming(v_source_4607_, v_options_4608_);
return v_res_4610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming(lean_object* v_source_4619_, lean_object* v_importObject_4620_, lean_object* v_options_4621_){
_start:
{
lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4623_ = lean_unsigned_to_nat(3u);
v___x_4624_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__2));
v___x_4625_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4626_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4626_, 0, v_source_4619_);
lean_ctor_set(v___x_4626_, 1, v___x_4625_);
v___x_4627_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4621_);
v___x_4628_ = lean_mk_empty_array_with_capacity(v___x_4623_);
v___x_4629_ = lean_array_push(v___x_4628_, v___x_4626_);
v___x_4630_ = lean_array_push(v___x_4629_, v_importObject_4620_);
v___x_4631_ = lean_array_push(v___x_4630_, v___x_4627_);
v___x_4632_ = l_Lasm_JS_Web_Support_args(v___x_4631_);
v___x_4633_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v___x_4624_, v___x_4632_);
return v___x_4633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming___boxed(lean_object* v_source_4634_, lean_object* v_importObject_4635_, lean_object* v_options_4636_, lean_object* v_a_4637_){
_start:
{
lean_object* v_res_4638_; 
v_res_4638_ = l_Lasm_JS_Web_WebAssembly_instantiateStreaming(v_source_4634_, v_importObject_4635_, v_options_4636_);
return v_res_4638_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Wasm(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instInhabitedImportExportKind_default = _init_l_Lasm_JS_Web_instInhabitedImportExportKind_default();
l_Lasm_JS_Web_instInhabitedImportExportKind = _init_l_Lasm_JS_Web_instInhabitedImportExportKind();
l_Lasm_JS_Web_instInhabitedAddressType_default = _init_l_Lasm_JS_Web_instInhabitedAddressType_default();
l_Lasm_JS_Web_instInhabitedAddressType = _init_l_Lasm_JS_Web_instInhabitedAddressType();
l_Lasm_JS_Web_instInhabitedTableKind_default = _init_l_Lasm_JS_Web_instInhabitedTableKind_default();
l_Lasm_JS_Web_instInhabitedTableKind = _init_l_Lasm_JS_Web_instInhabitedTableKind();
l_Lasm_JS_Web_instInhabitedValueType_default = _init_l_Lasm_JS_Web_instInhabitedValueType_default();
l_Lasm_JS_Web_instInhabitedValueType = _init_l_Lasm_JS_Web_instInhabitedValueType();
l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions = _init_l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions);
l_Lasm_JS_Web_instFromJSModuleExportDescriptor = _init_l_Lasm_JS_Web_instFromJSModuleExportDescriptor();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSModuleExportDescriptor);
l_Lasm_JS_Web_instFromJSModuleImportDescriptor = _init_l_Lasm_JS_Web_instFromJSModuleImportDescriptor();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSModuleImportDescriptor);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
