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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7_value;
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
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4_value)}};
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
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4_value)}};
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorIdx___impl(uint8_t v_x_85_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_box(v_x_85_);
v___x_87_ = lean_obj_tag_nat(v___x_86_);
lean_dec(v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorIdx___impl___boxed(lean_object* v_x_88_){
_start:
{
uint8_t v_x_4__boxed_89_; lean_object* v_res_90_; 
v_x_4__boxed_89_ = lean_unbox(v_x_88_);
v_res_90_ = l_Lasm_JS_Web_ImportExportKind_ctorIdx___impl(v_x_4__boxed_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___redArg(lean_object* v_k_91_){
_start:
{
lean_inc(v_k_91_);
return v_k_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___redArg___boxed(lean_object* v_k_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lasm_JS_Web_ImportExportKind_ctorElim___redArg(v_k_92_);
lean_dec(v_k_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim(lean_object* v_motive_94_, lean_object* v_ctorIdx_95_, uint8_t v_t_96_, lean_object* v_h_97_, lean_object* v_k_98_){
_start:
{
lean_inc(v_k_98_);
return v_k_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_ctorElim___boxed(lean_object* v_motive_99_, lean_object* v_ctorIdx_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_k_103_){
_start:
{
uint8_t v_t_boxed_104_; lean_object* v_res_105_; 
v_t_boxed_104_ = lean_unbox(v_t_101_);
v_res_105_ = l_Lasm_JS_Web_ImportExportKind_ctorElim(v_motive_99_, v_ctorIdx_100_, v_t_boxed_104_, v_h_102_, v_k_103_);
lean_dec(v_k_103_);
lean_dec(v_ctorIdx_100_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___redArg(lean_object* v_function_106_){
_start:
{
lean_inc(v_function_106_);
return v_function_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___redArg___boxed(lean_object* v_function_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lasm_JS_Web_ImportExportKind_function_elim___redArg(v_function_107_);
lean_dec(v_function_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim(lean_object* v_motive_109_, uint8_t v_t_110_, lean_object* v_h_111_, lean_object* v_function_112_){
_start:
{
lean_inc(v_function_112_);
return v_function_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_function_elim___boxed(lean_object* v_motive_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_function_116_){
_start:
{
uint8_t v_t_boxed_117_; lean_object* v_res_118_; 
v_t_boxed_117_ = lean_unbox(v_t_114_);
v_res_118_ = l_Lasm_JS_Web_ImportExportKind_function_elim(v_motive_113_, v_t_boxed_117_, v_h_115_, v_function_116_);
lean_dec(v_function_116_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___redArg(lean_object* v_table_119_){
_start:
{
lean_inc(v_table_119_);
return v_table_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___redArg___boxed(lean_object* v_table_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lasm_JS_Web_ImportExportKind_table_elim___redArg(v_table_120_);
lean_dec(v_table_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim(lean_object* v_motive_122_, uint8_t v_t_123_, lean_object* v_h_124_, lean_object* v_table_125_){
_start:
{
lean_inc(v_table_125_);
return v_table_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_table_elim___boxed(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_table_129_){
_start:
{
uint8_t v_t_boxed_130_; lean_object* v_res_131_; 
v_t_boxed_130_ = lean_unbox(v_t_127_);
v_res_131_ = l_Lasm_JS_Web_ImportExportKind_table_elim(v_motive_126_, v_t_boxed_130_, v_h_128_, v_table_129_);
lean_dec(v_table_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___redArg(lean_object* v_memory_132_){
_start:
{
lean_inc(v_memory_132_);
return v_memory_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___redArg___boxed(lean_object* v_memory_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lasm_JS_Web_ImportExportKind_memory_elim___redArg(v_memory_133_);
lean_dec(v_memory_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim(lean_object* v_motive_135_, uint8_t v_t_136_, lean_object* v_h_137_, lean_object* v_memory_138_){
_start:
{
lean_inc(v_memory_138_);
return v_memory_138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_memory_elim___boxed(lean_object* v_motive_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_memory_142_){
_start:
{
uint8_t v_t_boxed_143_; lean_object* v_res_144_; 
v_t_boxed_143_ = lean_unbox(v_t_140_);
v_res_144_ = l_Lasm_JS_Web_ImportExportKind_memory_elim(v_motive_139_, v_t_boxed_143_, v_h_141_, v_memory_142_);
lean_dec(v_memory_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___redArg(lean_object* v_global_145_){
_start:
{
lean_inc(v_global_145_);
return v_global_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___redArg___boxed(lean_object* v_global_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lasm_JS_Web_ImportExportKind_global_elim___redArg(v_global_146_);
lean_dec(v_global_146_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim(lean_object* v_motive_148_, uint8_t v_t_149_, lean_object* v_h_150_, lean_object* v_global_151_){
_start:
{
lean_inc(v_global_151_);
return v_global_151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_global_elim___boxed(lean_object* v_motive_152_, lean_object* v_t_153_, lean_object* v_h_154_, lean_object* v_global_155_){
_start:
{
uint8_t v_t_boxed_156_; lean_object* v_res_157_; 
v_t_boxed_156_ = lean_unbox(v_t_153_);
v_res_157_ = l_Lasm_JS_Web_ImportExportKind_global_elim(v_motive_152_, v_t_boxed_156_, v_h_154_, v_global_155_);
lean_dec(v_global_155_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___redArg(lean_object* v_tag_158_){
_start:
{
lean_inc(v_tag_158_);
return v_tag_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___redArg___boxed(lean_object* v_tag_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lasm_JS_Web_ImportExportKind_tag_elim___redArg(v_tag_159_);
lean_dec(v_tag_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim(lean_object* v_motive_161_, uint8_t v_t_162_, lean_object* v_h_163_, lean_object* v_tag_164_){
_start:
{
lean_inc(v_tag_164_);
return v_tag_164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ImportExportKind_tag_elim___boxed(lean_object* v_motive_165_, lean_object* v_t_166_, lean_object* v_h_167_, lean_object* v_tag_168_){
_start:
{
uint8_t v_t_boxed_169_; lean_object* v_res_170_; 
v_t_boxed_169_ = lean_unbox(v_t_166_);
v_res_170_ = l_Lasm_JS_Web_ImportExportKind_tag_elim(v_motive_165_, v_t_boxed_169_, v_h_167_, v_tag_168_);
lean_dec(v_tag_168_);
return v_res_170_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqImportExportKind_beq(uint8_t v_x_171_, uint8_t v_y_172_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_173_ = lean_box(v_x_171_);
v___x_174_ = lean_obj_tag_nat(v___x_173_);
lean_dec(v___x_173_);
v___x_175_ = lean_box(v_y_172_);
v___x_176_ = lean_obj_tag_nat(v___x_175_);
lean_dec(v___x_175_);
v___x_177_ = lean_nat_dec_eq(v___x_174_, v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqImportExportKind_beq___boxed(lean_object* v_x_178_, lean_object* v_y_179_){
_start:
{
uint8_t v_x_24__boxed_180_; uint8_t v_y_25__boxed_181_; uint8_t v_res_182_; lean_object* v_r_183_; 
v_x_24__boxed_180_ = lean_unbox(v_x_178_);
v_y_25__boxed_181_ = lean_unbox(v_y_179_);
v_res_182_ = l_Lasm_JS_Web_instBEqImportExportKind_beq(v_x_24__boxed_180_, v_y_25__boxed_181_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_unsigned_to_nat(2u);
v___x_202_ = lean_nat_to_int(v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(1u);
v___x_204_ = lean_nat_to_int(v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr(uint8_t v_x_205_, lean_object* v_prec_206_){
_start:
{
lean_object* v___y_208_; lean_object* v___y_215_; lean_object* v___y_222_; lean_object* v___y_229_; lean_object* v___y_236_; 
switch(v_x_205_)
{
case 0:
{
lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_242_ = lean_unsigned_to_nat(1024u);
v___x_243_ = lean_nat_dec_le(v___x_242_, v_prec_206_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; 
v___x_244_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_208_ = v___x_244_;
goto v___jp_207_;
}
else
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_208_ = v___x_245_;
goto v___jp_207_;
}
}
case 1:
{
lean_object* v___x_246_; uint8_t v___x_247_; 
v___x_246_ = lean_unsigned_to_nat(1024u);
v___x_247_ = lean_nat_dec_le(v___x_246_, v_prec_206_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; 
v___x_248_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_215_ = v___x_248_;
goto v___jp_214_;
}
else
{
lean_object* v___x_249_; 
v___x_249_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_215_ = v___x_249_;
goto v___jp_214_;
}
}
case 2:
{
lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_250_ = lean_unsigned_to_nat(1024u);
v___x_251_ = lean_nat_dec_le(v___x_250_, v_prec_206_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; 
v___x_252_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_222_ = v___x_252_;
goto v___jp_221_;
}
else
{
lean_object* v___x_253_; 
v___x_253_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_222_ = v___x_253_;
goto v___jp_221_;
}
}
case 3:
{
lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_254_ = lean_unsigned_to_nat(1024u);
v___x_255_ = lean_nat_dec_le(v___x_254_, v_prec_206_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; 
v___x_256_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_229_ = v___x_256_;
goto v___jp_228_;
}
else
{
lean_object* v___x_257_; 
v___x_257_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_229_ = v___x_257_;
goto v___jp_228_;
}
}
default: 
{
lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_258_ = lean_unsigned_to_nat(1024u);
v___x_259_ = lean_nat_dec_le(v___x_258_, v_prec_206_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; 
v___x_260_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_236_ = v___x_260_;
goto v___jp_235_;
}
else
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_236_ = v___x_261_;
goto v___jp_235_;
}
}
}
v___jp_207_:
{
lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_209_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__1));
lean_inc(v___y_208_);
v___x_210_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_210_, 0, v___y_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = 0;
v___x_212_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set_uint8(v___x_212_, sizeof(void*)*1, v___x_211_);
v___x_213_ = l_Repr_addAppParen(v___x_212_, v_prec_206_);
return v___x_213_;
}
v___jp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_216_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__3));
lean_inc(v___y_215_);
v___x_217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_217_, 0, v___y_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = 0;
v___x_219_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*1, v___x_218_);
v___x_220_ = l_Repr_addAppParen(v___x_219_, v_prec_206_);
return v___x_220_;
}
v___jp_221_:
{
lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_223_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__5));
lean_inc(v___y_222_);
v___x_224_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_224_, 0, v___y_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = 0;
v___x_226_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*1, v___x_225_);
v___x_227_ = l_Repr_addAppParen(v___x_226_, v_prec_206_);
return v___x_227_;
}
v___jp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__7));
lean_inc(v___y_229_);
v___x_231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_231_, 0, v___y_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = 0;
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_232_);
v___x_234_ = l_Repr_addAppParen(v___x_233_, v_prec_206_);
return v___x_234_;
}
v___jp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_237_ = ((lean_object*)(l_Lasm_JS_Web_instReprImportExportKind_repr___closed__9));
lean_inc(v___y_236_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_236_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = 0;
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_239_);
v___x_241_ = l_Repr_addAppParen(v___x_240_, v_prec_206_);
return v___x_241_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprImportExportKind_repr___boxed(lean_object* v_x_262_, lean_object* v_prec_263_){
_start:
{
uint8_t v_x_279__boxed_264_; lean_object* v_res_265_; 
v_x_279__boxed_264_ = lean_unbox(v_x_262_);
v_res_265_ = l_Lasm_JS_Web_instReprImportExportKind_repr(v_x_279__boxed_264_, v_prec_263_);
lean_dec(v_prec_263_);
return v_res_265_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedImportExportKind_default(void){
_start:
{
uint8_t v___x_268_; 
v___x_268_ = 0;
return v___x_268_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedImportExportKind(void){
_start:
{
uint8_t v___x_269_; 
v___x_269_ = 0;
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0(uint8_t v_x_285_){
_start:
{
switch(v_x_285_)
{
case 0:
{
lean_object* v___x_286_; 
v___x_286_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__1));
return v___x_286_;
}
case 1:
{
lean_object* v___x_287_; 
v___x_287_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__3));
return v___x_287_;
}
case 2:
{
lean_object* v___x_288_; 
v___x_288_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__5));
return v___x_288_;
}
case 3:
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__7));
return v___x_289_;
}
default: 
{
lean_object* v___x_290_; 
v___x_290_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__9));
return v___x_290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportExportKind___lam__0___boxed(lean_object* v_x_291_){
_start:
{
uint8_t v_x_91__boxed_292_; lean_object* v_res_293_; 
v_x_91__boxed_292_ = lean_unbox(v_x_291_);
v_res_293_ = l_Lasm_JS_Web_instToJSImportExportKind___lam__0(v_x_91__boxed_292_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0(lean_object* v_x_314_){
_start:
{
if (lean_obj_tag(v_x_314_) == 4)
{
lean_object* v_s_317_; lean_object* v___x_318_; uint8_t v___x_319_; 
v_s_317_ = lean_ctor_get(v_x_314_, 0);
v___x_318_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0));
v___x_319_ = lean_string_dec_eq(v_s_317_, v___x_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_320_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2));
v___x_321_ = lean_string_dec_eq(v_s_317_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4));
v___x_323_ = lean_string_dec_eq(v_s_317_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_324_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6));
v___x_325_ = lean_string_dec_eq(v_s_317_, v___x_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8));
v___x_327_ = lean_string_dec_eq(v_s_317_, v___x_326_);
if (v___x_327_ == 0)
{
goto v___jp_315_;
}
else
{
lean_object* v___x_328_; 
v___x_328_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__2));
return v___x_328_;
}
}
else
{
lean_object* v___x_329_; 
v___x_329_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__3));
return v___x_329_;
}
}
else
{
lean_object* v___x_330_; 
v___x_330_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__4));
return v___x_330_;
}
}
else
{
lean_object* v___x_331_; 
v___x_331_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__5));
return v___x_331_;
}
}
else
{
lean_object* v___x_332_; 
v___x_332_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__6));
return v___x_332_;
}
}
else
{
goto v___jp_315_;
}
v___jp_315_:
{
lean_object* v___x_316_; 
v___x_316_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__1));
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___boxed(lean_object* v_x_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lasm_JS_Web_instFromJSImportExportKind___lam__0(v_x_333_);
lean_dec(v_x_333_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorIdx___impl(uint8_t v_x_342_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_box(v_x_342_);
v___x_344_ = lean_obj_tag_nat(v___x_343_);
lean_dec(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorIdx___impl___boxed(lean_object* v_x_345_){
_start:
{
uint8_t v_x_4__boxed_346_; lean_object* v_res_347_; 
v_x_4__boxed_346_ = lean_unbox(v_x_345_);
v_res_347_ = l_Lasm_JS_Web_AddressType_ctorIdx___impl(v_x_4__boxed_346_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___redArg(lean_object* v_k_348_){
_start:
{
lean_inc(v_k_348_);
return v_k_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___redArg___boxed(lean_object* v_k_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lasm_JS_Web_AddressType_ctorElim___redArg(v_k_349_);
lean_dec(v_k_349_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim(lean_object* v_motive_351_, lean_object* v_ctorIdx_352_, uint8_t v_t_353_, lean_object* v_h_354_, lean_object* v_k_355_){
_start:
{
lean_inc(v_k_355_);
return v_k_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_ctorElim___boxed(lean_object* v_motive_356_, lean_object* v_ctorIdx_357_, lean_object* v_t_358_, lean_object* v_h_359_, lean_object* v_k_360_){
_start:
{
uint8_t v_t_boxed_361_; lean_object* v_res_362_; 
v_t_boxed_361_ = lean_unbox(v_t_358_);
v_res_362_ = l_Lasm_JS_Web_AddressType_ctorElim(v_motive_356_, v_ctorIdx_357_, v_t_boxed_361_, v_h_359_, v_k_360_);
lean_dec(v_k_360_);
lean_dec(v_ctorIdx_357_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___redArg(lean_object* v_i32_363_){
_start:
{
lean_inc(v_i32_363_);
return v_i32_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___redArg___boxed(lean_object* v_i32_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lasm_JS_Web_AddressType_i32_elim___redArg(v_i32_364_);
lean_dec(v_i32_364_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim(lean_object* v_motive_366_, uint8_t v_t_367_, lean_object* v_h_368_, lean_object* v_i32_369_){
_start:
{
lean_inc(v_i32_369_);
return v_i32_369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i32_elim___boxed(lean_object* v_motive_370_, lean_object* v_t_371_, lean_object* v_h_372_, lean_object* v_i32_373_){
_start:
{
uint8_t v_t_boxed_374_; lean_object* v_res_375_; 
v_t_boxed_374_ = lean_unbox(v_t_371_);
v_res_375_ = l_Lasm_JS_Web_AddressType_i32_elim(v_motive_370_, v_t_boxed_374_, v_h_372_, v_i32_373_);
lean_dec(v_i32_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___redArg(lean_object* v_i64_376_){
_start:
{
lean_inc(v_i64_376_);
return v_i64_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___redArg___boxed(lean_object* v_i64_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lasm_JS_Web_AddressType_i64_elim___redArg(v_i64_377_);
lean_dec(v_i64_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim(lean_object* v_motive_379_, uint8_t v_t_380_, lean_object* v_h_381_, lean_object* v_i64_382_){
_start:
{
lean_inc(v_i64_382_);
return v_i64_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddressType_i64_elim___boxed(lean_object* v_motive_383_, lean_object* v_t_384_, lean_object* v_h_385_, lean_object* v_i64_386_){
_start:
{
uint8_t v_t_boxed_387_; lean_object* v_res_388_; 
v_t_boxed_387_ = lean_unbox(v_t_384_);
v_res_388_ = l_Lasm_JS_Web_AddressType_i64_elim(v_motive_383_, v_t_boxed_387_, v_h_385_, v_i64_386_);
lean_dec(v_i64_386_);
return v_res_388_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqAddressType_beq(uint8_t v_x_389_, uint8_t v_y_390_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_391_ = lean_box(v_x_389_);
v___x_392_ = lean_obj_tag_nat(v___x_391_);
lean_dec(v___x_391_);
v___x_393_ = lean_box(v_y_390_);
v___x_394_ = lean_obj_tag_nat(v___x_393_);
lean_dec(v___x_393_);
v___x_395_ = lean_nat_dec_eq(v___x_392_, v___x_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqAddressType_beq___boxed(lean_object* v_x_396_, lean_object* v_y_397_){
_start:
{
uint8_t v_x_24__boxed_398_; uint8_t v_y_25__boxed_399_; uint8_t v_res_400_; lean_object* v_r_401_; 
v_x_24__boxed_398_ = lean_unbox(v_x_396_);
v_y_25__boxed_399_ = lean_unbox(v_y_397_);
v_res_400_ = l_Lasm_JS_Web_instBEqAddressType_beq(v_x_24__boxed_398_, v_y_25__boxed_399_);
v_r_401_ = lean_box(v_res_400_);
return v_r_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprAddressType_repr(uint8_t v_x_410_, lean_object* v_prec_411_){
_start:
{
lean_object* v___y_413_; lean_object* v___y_420_; 
if (v_x_410_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = lean_unsigned_to_nat(1024u);
v___x_427_ = lean_nat_dec_le(v___x_426_, v_prec_411_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
v___x_428_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_413_ = v___x_428_;
goto v___jp_412_;
}
else
{
lean_object* v___x_429_; 
v___x_429_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_413_ = v___x_429_;
goto v___jp_412_;
}
}
else
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = lean_unsigned_to_nat(1024u);
v___x_431_ = lean_nat_dec_le(v___x_430_, v_prec_411_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_420_ = v___x_432_;
goto v___jp_419_;
}
else
{
lean_object* v___x_433_; 
v___x_433_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_420_ = v___x_433_;
goto v___jp_419_;
}
}
v___jp_412_:
{
lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_414_ = ((lean_object*)(l_Lasm_JS_Web_instReprAddressType_repr___closed__1));
lean_inc(v___y_413_);
v___x_415_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_415_, 0, v___y_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = 0;
v___x_417_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_417_, 0, v___x_415_);
lean_ctor_set_uint8(v___x_417_, sizeof(void*)*1, v___x_416_);
v___x_418_ = l_Repr_addAppParen(v___x_417_, v_prec_411_);
return v___x_418_;
}
v___jp_419_:
{
lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_421_ = ((lean_object*)(l_Lasm_JS_Web_instReprAddressType_repr___closed__3));
lean_inc(v___y_420_);
v___x_422_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_422_, 0, v___y_420_);
lean_ctor_set(v___x_422_, 1, v___x_421_);
v___x_423_ = 0;
v___x_424_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set_uint8(v___x_424_, sizeof(void*)*1, v___x_423_);
v___x_425_ = l_Repr_addAppParen(v___x_424_, v_prec_411_);
return v___x_425_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprAddressType_repr___boxed(lean_object* v_x_434_, lean_object* v_prec_435_){
_start:
{
uint8_t v_x_113__boxed_436_; lean_object* v_res_437_; 
v_x_113__boxed_436_ = lean_unbox(v_x_434_);
v_res_437_ = l_Lasm_JS_Web_instReprAddressType_repr(v_x_113__boxed_436_, v_prec_435_);
lean_dec(v_prec_435_);
return v_res_437_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedAddressType_default(void){
_start:
{
uint8_t v___x_440_; 
v___x_440_ = 0;
return v___x_440_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedAddressType(void){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = 0;
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0(uint8_t v_x_448_){
_start:
{
if (v_x_448_ == 0)
{
lean_object* v___x_449_; 
v___x_449_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
return v___x_449_;
}
else
{
lean_object* v___x_450_; 
v___x_450_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
return v___x_450_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddressType___lam__0___boxed(lean_object* v_x_451_){
_start:
{
uint8_t v_x_40__boxed_452_; lean_object* v_res_453_; 
v_x_40__boxed_452_ = lean_unbox(v_x_451_);
v_res_453_ = l_Lasm_JS_Web_instToJSAddressType___lam__0(v_x_40__boxed_452_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0(lean_object* v_x_464_){
_start:
{
if (lean_obj_tag(v_x_464_) == 4)
{
lean_object* v_s_467_; lean_object* v___x_468_; uint8_t v___x_469_; 
v_s_467_ = lean_ctor_get(v_x_464_, 0);
v___x_468_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__0));
v___x_469_ = lean_string_dec_eq(v_s_467_, v___x_468_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_470_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__2));
v___x_471_ = lean_string_dec_eq(v_s_467_, v___x_470_);
if (v___x_471_ == 0)
{
goto v___jp_465_;
}
else
{
lean_object* v___x_472_; 
v___x_472_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__1));
return v___x_472_;
}
}
else
{
lean_object* v___x_473_; 
v___x_473_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__2));
return v___x_473_;
}
}
else
{
goto v___jp_465_;
}
v___jp_465_:
{
lean_object* v___x_466_; 
v___x_466_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAddressType___lam__0___closed__0));
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSAddressType___lam__0___boxed(lean_object* v_x_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lasm_JS_Web_instFromJSAddressType___lam__0(v_x_474_);
lean_dec(v_x_474_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorIdx___impl(uint8_t v_x_483_){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_box(v_x_483_);
v___x_485_ = lean_obj_tag_nat(v___x_484_);
lean_dec(v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorIdx___impl___boxed(lean_object* v_x_486_){
_start:
{
uint8_t v_x_4__boxed_487_; lean_object* v_res_488_; 
v_x_4__boxed_487_ = lean_unbox(v_x_486_);
v_res_488_ = l_Lasm_JS_Web_TableKind_ctorIdx___impl(v_x_4__boxed_487_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___redArg(lean_object* v_k_489_){
_start:
{
lean_inc(v_k_489_);
return v_k_489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___redArg___boxed(lean_object* v_k_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lasm_JS_Web_TableKind_ctorElim___redArg(v_k_490_);
lean_dec(v_k_490_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim(lean_object* v_motive_492_, lean_object* v_ctorIdx_493_, uint8_t v_t_494_, lean_object* v_h_495_, lean_object* v_k_496_){
_start:
{
lean_inc(v_k_496_);
return v_k_496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_ctorElim___boxed(lean_object* v_motive_497_, lean_object* v_ctorIdx_498_, lean_object* v_t_499_, lean_object* v_h_500_, lean_object* v_k_501_){
_start:
{
uint8_t v_t_boxed_502_; lean_object* v_res_503_; 
v_t_boxed_502_ = lean_unbox(v_t_499_);
v_res_503_ = l_Lasm_JS_Web_TableKind_ctorElim(v_motive_497_, v_ctorIdx_498_, v_t_boxed_502_, v_h_500_, v_k_501_);
lean_dec(v_k_501_);
lean_dec(v_ctorIdx_498_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___redArg(lean_object* v_externref_504_){
_start:
{
lean_inc(v_externref_504_);
return v_externref_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___redArg___boxed(lean_object* v_externref_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lasm_JS_Web_TableKind_externref_elim___redArg(v_externref_505_);
lean_dec(v_externref_505_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim(lean_object* v_motive_507_, uint8_t v_t_508_, lean_object* v_h_509_, lean_object* v_externref_510_){
_start:
{
lean_inc(v_externref_510_);
return v_externref_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_externref_elim___boxed(lean_object* v_motive_511_, lean_object* v_t_512_, lean_object* v_h_513_, lean_object* v_externref_514_){
_start:
{
uint8_t v_t_boxed_515_; lean_object* v_res_516_; 
v_t_boxed_515_ = lean_unbox(v_t_512_);
v_res_516_ = l_Lasm_JS_Web_TableKind_externref_elim(v_motive_511_, v_t_boxed_515_, v_h_513_, v_externref_514_);
lean_dec(v_externref_514_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___redArg(lean_object* v_anyfunc_517_){
_start:
{
lean_inc(v_anyfunc_517_);
return v_anyfunc_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___redArg___boxed(lean_object* v_anyfunc_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lasm_JS_Web_TableKind_anyfunc_elim___redArg(v_anyfunc_518_);
lean_dec(v_anyfunc_518_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim(lean_object* v_motive_520_, uint8_t v_t_521_, lean_object* v_h_522_, lean_object* v_anyfunc_523_){
_start:
{
lean_inc(v_anyfunc_523_);
return v_anyfunc_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TableKind_anyfunc_elim___boxed(lean_object* v_motive_524_, lean_object* v_t_525_, lean_object* v_h_526_, lean_object* v_anyfunc_527_){
_start:
{
uint8_t v_t_boxed_528_; lean_object* v_res_529_; 
v_t_boxed_528_ = lean_unbox(v_t_525_);
v_res_529_ = l_Lasm_JS_Web_TableKind_anyfunc_elim(v_motive_524_, v_t_boxed_528_, v_h_526_, v_anyfunc_527_);
lean_dec(v_anyfunc_527_);
return v_res_529_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqTableKind_beq(uint8_t v_x_530_, uint8_t v_y_531_){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_532_ = lean_box(v_x_530_);
v___x_533_ = lean_obj_tag_nat(v___x_532_);
lean_dec(v___x_532_);
v___x_534_ = lean_box(v_y_531_);
v___x_535_ = lean_obj_tag_nat(v___x_534_);
lean_dec(v___x_534_);
v___x_536_ = lean_nat_dec_eq(v___x_533_, v___x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqTableKind_beq___boxed(lean_object* v_x_537_, lean_object* v_y_538_){
_start:
{
uint8_t v_x_24__boxed_539_; uint8_t v_y_25__boxed_540_; uint8_t v_res_541_; lean_object* v_r_542_; 
v_x_24__boxed_539_ = lean_unbox(v_x_537_);
v_y_25__boxed_540_ = lean_unbox(v_y_538_);
v_res_541_ = l_Lasm_JS_Web_instBEqTableKind_beq(v_x_24__boxed_539_, v_y_25__boxed_540_);
v_r_542_ = lean_box(v_res_541_);
return v_r_542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprTableKind_repr(uint8_t v_x_551_, lean_object* v_prec_552_){
_start:
{
lean_object* v___y_554_; lean_object* v___y_561_; 
if (v_x_551_ == 0)
{
lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_567_ = lean_unsigned_to_nat(1024u);
v___x_568_ = lean_nat_dec_le(v___x_567_, v_prec_552_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; 
v___x_569_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_554_ = v___x_569_;
goto v___jp_553_;
}
else
{
lean_object* v___x_570_; 
v___x_570_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_554_ = v___x_570_;
goto v___jp_553_;
}
}
else
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_unsigned_to_nat(1024u);
v___x_572_ = lean_nat_dec_le(v___x_571_, v_prec_552_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; 
v___x_573_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__10);
v___y_561_ = v___x_573_;
goto v___jp_560_;
}
else
{
lean_object* v___x_574_; 
v___x_574_ = lean_obj_once(&l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11, &l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11_once, _init_l_Lasm_JS_Web_instReprImportExportKind_repr___closed__11);
v___y_561_ = v___x_574_;
goto v___jp_560_;
}
}
v___jp_553_:
{
lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_555_ = ((lean_object*)(l_Lasm_JS_Web_instReprTableKind_repr___closed__1));
lean_inc(v___y_554_);
v___x_556_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_556_, 0, v___y_554_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = 0;
v___x_558_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set_uint8(v___x_558_, sizeof(void*)*1, v___x_557_);
v___x_559_ = l_Repr_addAppParen(v___x_558_, v_prec_552_);
return v___x_559_;
}
v___jp_560_:
{
lean_object* v___x_562_; lean_object* v___x_563_; uint8_t v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_562_ = ((lean_object*)(l_Lasm_JS_Web_instReprTableKind_repr___closed__3));
lean_inc(v___y_561_);
v___x_563_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_563_, 0, v___y_561_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
v___x_564_ = 0;
v___x_565_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_565_, 0, v___x_563_);
lean_ctor_set_uint8(v___x_565_, sizeof(void*)*1, v___x_564_);
v___x_566_ = l_Repr_addAppParen(v___x_565_, v_prec_552_);
return v___x_566_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprTableKind_repr___boxed(lean_object* v_x_575_, lean_object* v_prec_576_){
_start:
{
uint8_t v_x_113__boxed_577_; lean_object* v_res_578_; 
v_x_113__boxed_577_ = lean_unbox(v_x_575_);
v_res_578_ = l_Lasm_JS_Web_instReprTableKind_repr(v_x_113__boxed_577_, v_prec_576_);
lean_dec(v_prec_576_);
return v_res_578_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedTableKind_default(void){
_start:
{
uint8_t v___x_581_; 
v___x_581_ = 0;
return v___x_581_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedTableKind(void){
_start:
{
uint8_t v___x_582_; 
v___x_582_ = 0;
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0(uint8_t v_x_589_){
_start:
{
if (v_x_589_ == 0)
{
lean_object* v___x_590_; 
v___x_590_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
return v___x_590_;
}
else
{
lean_object* v___x_591_; 
v___x_591_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
return v___x_591_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTableKind___lam__0___boxed(lean_object* v_x_592_){
_start:
{
uint8_t v_x_40__boxed_593_; lean_object* v_res_594_; 
v_x_40__boxed_593_ = lean_unbox(v_x_592_);
v_res_594_ = l_Lasm_JS_Web_instToJSTableKind___lam__0(v_x_40__boxed_593_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0(lean_object* v_x_605_){
_start:
{
if (lean_obj_tag(v_x_605_) == 4)
{
lean_object* v_s_608_; lean_object* v___x_609_; uint8_t v___x_610_; 
v_s_608_ = lean_ctor_get(v_x_605_, 0);
v___x_609_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__0));
v___x_610_ = lean_string_dec_eq(v_s_608_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_611_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__2));
v___x_612_ = lean_string_dec_eq(v_s_608_, v___x_611_);
if (v___x_612_ == 0)
{
goto v___jp_606_;
}
else
{
lean_object* v___x_613_; 
v___x_613_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__1));
return v___x_613_;
}
}
else
{
lean_object* v___x_614_; 
v___x_614_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__2));
return v___x_614_;
}
}
else
{
goto v___jp_606_;
}
v___jp_606_:
{
lean_object* v___x_607_; 
v___x_607_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTableKind___lam__0___closed__0));
return v___x_607_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTableKind___lam__0___boxed(lean_object* v_x_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lasm_JS_Web_instFromJSTableKind___lam__0(v_x_615_);
lean_dec(v_x_615_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorIdx___impl(uint8_t v_x_624_){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_box(v_x_624_);
v___x_626_ = lean_obj_tag_nat(v___x_625_);
lean_dec(v___x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorIdx___impl___boxed(lean_object* v_x_627_){
_start:
{
uint8_t v_x_4__boxed_628_; lean_object* v_res_629_; 
v_x_4__boxed_628_ = lean_unbox(v_x_627_);
v_res_629_ = l_Lasm_JS_Web_ValueType_ctorIdx___impl(v_x_4__boxed_628_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___redArg(lean_object* v_k_630_){
_start:
{
lean_inc(v_k_630_);
return v_k_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___redArg___boxed(lean_object* v_k_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lasm_JS_Web_ValueType_ctorElim___redArg(v_k_631_);
lean_dec(v_k_631_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim(lean_object* v_motive_633_, lean_object* v_ctorIdx_634_, uint8_t v_t_635_, lean_object* v_h_636_, lean_object* v_k_637_){
_start:
{
lean_inc(v_k_637_);
return v_k_637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_ctorElim___boxed(lean_object* v_motive_638_, lean_object* v_ctorIdx_639_, lean_object* v_t_640_, lean_object* v_h_641_, lean_object* v_k_642_){
_start:
{
uint8_t v_t_boxed_643_; lean_object* v_res_644_; 
v_t_boxed_643_ = lean_unbox(v_t_640_);
v_res_644_ = l_Lasm_JS_Web_ValueType_ctorElim(v_motive_638_, v_ctorIdx_639_, v_t_boxed_643_, v_h_641_, v_k_642_);
lean_dec(v_k_642_);
lean_dec(v_ctorIdx_639_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___redArg(lean_object* v_i32_645_){
_start:
{
lean_inc(v_i32_645_);
return v_i32_645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___redArg___boxed(lean_object* v_i32_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lasm_JS_Web_ValueType_i32_elim___redArg(v_i32_646_);
lean_dec(v_i32_646_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim(lean_object* v_motive_648_, uint8_t v_t_649_, lean_object* v_h_650_, lean_object* v_i32_651_){
_start:
{
lean_inc(v_i32_651_);
return v_i32_651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i32_elim___boxed(lean_object* v_motive_652_, lean_object* v_t_653_, lean_object* v_h_654_, lean_object* v_i32_655_){
_start:
{
uint8_t v_t_boxed_656_; lean_object* v_res_657_; 
v_t_boxed_656_ = lean_unbox(v_t_653_);
v_res_657_ = l_Lasm_JS_Web_ValueType_i32_elim(v_motive_652_, v_t_boxed_656_, v_h_654_, v_i32_655_);
lean_dec(v_i32_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___redArg(lean_object* v_i64_658_){
_start:
{
lean_inc(v_i64_658_);
return v_i64_658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___redArg___boxed(lean_object* v_i64_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lasm_JS_Web_ValueType_i64_elim___redArg(v_i64_659_);
lean_dec(v_i64_659_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim(lean_object* v_motive_661_, uint8_t v_t_662_, lean_object* v_h_663_, lean_object* v_i64_664_){
_start:
{
lean_inc(v_i64_664_);
return v_i64_664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_i64_elim___boxed(lean_object* v_motive_665_, lean_object* v_t_666_, lean_object* v_h_667_, lean_object* v_i64_668_){
_start:
{
uint8_t v_t_boxed_669_; lean_object* v_res_670_; 
v_t_boxed_669_ = lean_unbox(v_t_666_);
v_res_670_ = l_Lasm_JS_Web_ValueType_i64_elim(v_motive_665_, v_t_boxed_669_, v_h_667_, v_i64_668_);
lean_dec(v_i64_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___redArg(lean_object* v_f32_671_){
_start:
{
lean_inc(v_f32_671_);
return v_f32_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___redArg___boxed(lean_object* v_f32_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lasm_JS_Web_ValueType_f32_elim___redArg(v_f32_672_);
lean_dec(v_f32_672_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim(lean_object* v_motive_674_, uint8_t v_t_675_, lean_object* v_h_676_, lean_object* v_f32_677_){
_start:
{
lean_inc(v_f32_677_);
return v_f32_677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f32_elim___boxed(lean_object* v_motive_678_, lean_object* v_t_679_, lean_object* v_h_680_, lean_object* v_f32_681_){
_start:
{
uint8_t v_t_boxed_682_; lean_object* v_res_683_; 
v_t_boxed_682_ = lean_unbox(v_t_679_);
v_res_683_ = l_Lasm_JS_Web_ValueType_f32_elim(v_motive_678_, v_t_boxed_682_, v_h_680_, v_f32_681_);
lean_dec(v_f32_681_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___redArg(lean_object* v_f64_684_){
_start:
{
lean_inc(v_f64_684_);
return v_f64_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___redArg___boxed(lean_object* v_f64_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lasm_JS_Web_ValueType_f64_elim___redArg(v_f64_685_);
lean_dec(v_f64_685_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim(lean_object* v_motive_687_, uint8_t v_t_688_, lean_object* v_h_689_, lean_object* v_f64_690_){
_start:
{
lean_inc(v_f64_690_);
return v_f64_690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_f64_elim___boxed(lean_object* v_motive_691_, lean_object* v_t_692_, lean_object* v_h_693_, lean_object* v_f64_694_){
_start:
{
uint8_t v_t_boxed_695_; lean_object* v_res_696_; 
v_t_boxed_695_ = lean_unbox(v_t_692_);
v_res_696_ = l_Lasm_JS_Web_ValueType_f64_elim(v_motive_691_, v_t_boxed_695_, v_h_693_, v_f64_694_);
lean_dec(v_f64_694_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___redArg(lean_object* v_v128_697_){
_start:
{
lean_inc(v_v128_697_);
return v_v128_697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___redArg___boxed(lean_object* v_v128_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lasm_JS_Web_ValueType_v128_elim___redArg(v_v128_698_);
lean_dec(v_v128_698_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim(lean_object* v_motive_700_, uint8_t v_t_701_, lean_object* v_h_702_, lean_object* v_v128_703_){
_start:
{
lean_inc(v_v128_703_);
return v_v128_703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_v128_elim___boxed(lean_object* v_motive_704_, lean_object* v_t_705_, lean_object* v_h_706_, lean_object* v_v128_707_){
_start:
{
uint8_t v_t_boxed_708_; lean_object* v_res_709_; 
v_t_boxed_708_ = lean_unbox(v_t_705_);
v_res_709_ = l_Lasm_JS_Web_ValueType_v128_elim(v_motive_704_, v_t_boxed_708_, v_h_706_, v_v128_707_);
lean_dec(v_v128_707_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___redArg(lean_object* v_externref_710_){
_start:
{
lean_inc(v_externref_710_);
return v_externref_710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___redArg___boxed(lean_object* v_externref_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lasm_JS_Web_ValueType_externref_elim___redArg(v_externref_711_);
lean_dec(v_externref_711_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim(lean_object* v_motive_713_, uint8_t v_t_714_, lean_object* v_h_715_, lean_object* v_externref_716_){
_start:
{
lean_inc(v_externref_716_);
return v_externref_716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_externref_elim___boxed(lean_object* v_motive_717_, lean_object* v_t_718_, lean_object* v_h_719_, lean_object* v_externref_720_){
_start:
{
uint8_t v_t_boxed_721_; lean_object* v_res_722_; 
v_t_boxed_721_ = lean_unbox(v_t_718_);
v_res_722_ = l_Lasm_JS_Web_ValueType_externref_elim(v_motive_717_, v_t_boxed_721_, v_h_719_, v_externref_720_);
lean_dec(v_externref_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___redArg(lean_object* v_anyfunc_723_){
_start:
{
lean_inc(v_anyfunc_723_);
return v_anyfunc_723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___redArg___boxed(lean_object* v_anyfunc_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lasm_JS_Web_ValueType_anyfunc_elim___redArg(v_anyfunc_724_);
lean_dec(v_anyfunc_724_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim(lean_object* v_motive_726_, uint8_t v_t_727_, lean_object* v_h_728_, lean_object* v_anyfunc_729_){
_start:
{
lean_inc(v_anyfunc_729_);
return v_anyfunc_729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ValueType_anyfunc_elim___boxed(lean_object* v_motive_730_, lean_object* v_t_731_, lean_object* v_h_732_, lean_object* v_anyfunc_733_){
_start:
{
uint8_t v_t_boxed_734_; lean_object* v_res_735_; 
v_t_boxed_734_ = lean_unbox(v_t_731_);
v_res_735_ = l_Lasm_JS_Web_ValueType_anyfunc_elim(v_motive_730_, v_t_boxed_734_, v_h_732_, v_anyfunc_733_);
lean_dec(v_anyfunc_733_);
return v_res_735_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqValueType_beq(uint8_t v_x_736_, uint8_t v_y_737_){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_738_ = lean_box(v_x_736_);
v___x_739_ = lean_obj_tag_nat(v___x_738_);
lean_dec(v___x_738_);
v___x_740_ = lean_box(v_y_737_);
v___x_741_ = lean_obj_tag_nat(v___x_740_);
lean_dec(v___x_740_);
v___x_742_ = lean_nat_dec_eq(v___x_739_, v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqValueType_beq___boxed(lean_object* v_x_743_, lean_object* v_y_744_){
_start:
{
uint8_t v_x_24__boxed_745_; uint8_t v_y_25__boxed_746_; uint8_t v_res_747_; lean_object* v_r_748_; 
v_x_24__boxed_745_ = lean_unbox(v_x_743_);
v_y_25__boxed_746_ = lean_unbox(v_y_744_);
v_res_747_ = l_Lasm_JS_Web_instBEqValueType_beq(v_x_24__boxed_745_, v_y_25__boxed_746_);
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1297_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___x_1298_ = lean_unsigned_to_nat(46u);
v___x_1299_ = lean_unsigned_to_nat(193u);
v___x_1300_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4));
v___x_1301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3));
v___x_1302_ = l_mkPanicMessageWithDecl(v___x_1301_, v___x_1300_, v___x_1299_, v___x_1298_, v___x_1297_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(lean_object* v_context_1304_, lean_object* v_d_1305_){
_start:
{
lean_object* v_received_1308_; 
if (lean_obj_tag(v_d_1305_) == 9)
{
lean_object* v_value_1322_; lean_object* v___x_1323_; 
v_value_1322_ = lean_ctor_get(v_d_1305_, 0);
lean_inc(v_value_1322_);
lean_dec_ref_known(v_d_1305_, 2);
v___x_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1323_, 0, v_value_1322_);
return v___x_1323_;
}
else
{
if (lean_obj_tag(v_d_1305_) == 9)
{
lean_object* v_value_1324_; lean_object* v_description_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; 
v_value_1324_ = lean_ctor_get(v_d_1305_, 0);
v_description_1325_ = lean_ctor_get(v_d_1305_, 1);
v___x_1326_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1327_ = lean_string_dec_eq(v_description_1325_, v___x_1326_);
if (v___x_1327_ == 0)
{
goto v___jp_1320_;
}
else
{
uint32_t v___x_1328_; uint64_t v___x_1329_; lean_object* v___x_1330_; uint32_t v___x_1331_; lean_object* v___x_1332_; 
lean_inc_n(v_value_1324_, 2);
lean_dec_ref_known(v_d_1305_, 2);
v___x_1328_ = 206;
v___x_1329_ = 0ULL;
v___x_1330_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1330_, 0, v_value_1324_);
lean_ctor_set(v___x_1330_, 1, v___x_1326_);
v___x_1331_ = lasm_js_value_handle(v_value_1324_);
lean_dec(v_value_1324_);
v___x_1332_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1328_, v___x_1329_, v___x_1330_, v___x_1331_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; uint8_t v___x_1334_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1332_, 1);
v___x_1334_ = lean_string_validate_utf8(v_a_1333_);
if (v___x_1334_ == 0)
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
lean_dec(v_a_1333_);
v___x_1335_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_1336_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1335_);
v_received_1308_ = v___x_1336_;
goto v___jp_1307_;
}
else
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_string_from_utf8_unchecked(v_a_1333_);
v_received_1308_ = v___x_1337_;
goto v___jp_1307_;
}
}
else
{
lean_object* v___x_1338_; 
lean_dec_ref_known(v___x_1332_, 1);
v___x_1338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_1308_ = v___x_1338_;
goto v___jp_1307_;
}
}
}
else
{
goto v___jp_1320_;
}
}
v___jp_1307_:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1310_ = lean_string_append(v___x_1309_, v_context_1304_);
v___x_1311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1312_ = lean_string_append(v___x_1310_, v___x_1311_);
v___x_1313_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModule___closed__1));
v___x_1314_ = lean_string_append(v___x_1312_, v___x_1313_);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1316_ = lean_string_append(v___x_1314_, v___x_1315_);
v___x_1317_ = lean_string_append(v___x_1316_, v_received_1308_);
lean_dec_ref(v_received_1308_);
v___x_1318_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
v___x_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
v___jp_1320_:
{
lean_object* v___x_1321_; 
v___x_1321_ = l_Lasm_JS_Data_describe(v_d_1305_);
v_received_1308_ = v___x_1321_;
goto v___jp_1307_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___boxed(lean_object* v_context_1339_, lean_object* v_d_1340_, lean_object* v_a_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(v_context_1339_, v_d_1340_);
lean_dec_ref(v_context_1339_);
return v_res_1342_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_1344_; uint64_t v___x_1345_; 
v___x_1344_ = 0;
v___x_1345_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1344_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(lean_object* v_b_1346_, lean_object* v_args_1347_, uint8_t v_await_1348_){
_start:
{
uint64_t v___y_1351_; uint64_t v___y_1352_; uint64_t v___x_1387_; uint64_t v___y_1389_; 
v___x_1387_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1348_ == 0)
{
uint64_t v___x_1394_; 
v___x_1394_ = 0ULL;
v___y_1389_ = v___x_1394_;
goto v___jp_1388_;
}
else
{
uint64_t v___x_1395_; 
v___x_1395_ = 2ULL;
v___y_1389_ = v___x_1395_;
goto v___jp_1388_;
}
v___jp_1350_:
{
uint64_t v_flags_1353_; uint32_t v___x_1354_; lean_object* v___x_1355_; uint32_t v___x_1356_; lean_object* v___x_1357_; 
v_flags_1353_ = lean_uint64_lor(v___y_1351_, v___y_1352_);
v___x_1354_ = 214;
v___x_1355_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1346_, v_args_1347_);
v___x_1356_ = 0;
v___x_1357_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1354_, v_flags_1353_, v___x_1355_, v___x_1356_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; lean_object* v___x_1359_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
lean_dec_ref_known(v___x_1357_, 1);
v___x_1359_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1358_);
lean_dec(v_a_1358_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_a_1360_);
lean_dec_ref_known(v___x_1359_, 1);
v___x_1361_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1346_);
v___x_1362_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(v___x_1361_, v_a_1360_);
lean_dec_ref(v___x_1361_);
return v___x_1362_;
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
v_a_1363_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1359_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1359_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1386_; 
v_a_1371_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1373_ = v___x_1357_;
v_isShared_1374_ = v_isSharedCheck_1386_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1357_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1386_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1384_; 
v___x_1375_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1376_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1346_);
v___x_1377_ = lean_string_append(v___x_1375_, v___x_1376_);
lean_dec_ref(v___x_1376_);
v___x_1378_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1379_ = lean_string_append(v___x_1377_, v___x_1378_);
v___x_1380_ = lean_io_error_to_string(v_a_1371_);
v___x_1381_ = lean_string_append(v___x_1379_, v___x_1380_);
lean_dec_ref(v___x_1380_);
v___x_1382_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1381_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 0, v___x_1382_);
v___x_1384_ = v___x_1373_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
v___jp_1388_:
{
uint8_t v_construct_1390_; uint64_t v___x_1391_; 
v_construct_1390_ = lean_ctor_get_uint8(v_b_1346_, sizeof(void*)*4);
v___x_1391_ = lean_uint64_lor(v___x_1387_, v___y_1389_);
if (v_construct_1390_ == 0)
{
uint64_t v___x_1392_; 
v___x_1392_ = 0ULL;
v___y_1351_ = v___x_1391_;
v___y_1352_ = v___x_1392_;
goto v___jp_1350_;
}
else
{
uint64_t v___x_1393_; 
v___x_1393_ = 4ULL;
v___y_1351_ = v___x_1391_;
v___y_1352_ = v___x_1393_;
goto v___jp_1350_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___boxed(lean_object* v_b_1396_, lean_object* v_args_1397_, lean_object* v_await_1398_, lean_object* v_a_1399_){
_start:
{
uint8_t v_await_boxed_1400_; lean_object* v_res_1401_; 
v_await_boxed_1400_ = lean_unbox(v_await_1398_);
v_res_1401_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(v_b_1396_, v_args_1397_, v_await_boxed_1400_);
lean_dec_ref(v_b_1396_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_new(lean_object* v_bytes_1411_, lean_object* v_options_1412_){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; uint8_t v___x_1422_; lean_object* v___x_1423_; 
v___x_1414_ = lean_unsigned_to_nat(2u);
v___x_1415_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_new___closed__3));
v___x_1416_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1416_, 0, v_bytes_1411_);
v___x_1417_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_1412_);
v___x_1418_ = lean_mk_empty_array_with_capacity(v___x_1414_);
v___x_1419_ = lean_array_push(v___x_1418_, v___x_1416_);
v___x_1420_ = lean_array_push(v___x_1419_, v___x_1417_);
v___x_1421_ = l_Lasm_JS_Web_Support_args(v___x_1420_);
v___x_1422_ = 0;
v___x_1423_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(v___x_1415_, v___x_1421_, v___x_1422_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_new___boxed(lean_object* v_bytes_1424_, lean_object* v_options_1425_, lean_object* v_a_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lasm_JS_Web_WebAssembly_Module_new(v_bytes_1424_, v_options_1425_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(lean_object* v_d_1435_, lean_object* v_key_1436_){
_start:
{
if (lean_obj_tag(v_d_1435_) == 8)
{
lean_object* v___x_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1473_; 
v___x_1437_ = l_Lasm_JS_Data_field(v_d_1435_, v_key_1436_);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_d_1435_);
if (v_isSharedCheck_1473_ == 0)
{
lean_object* v_unused_1474_; 
v_unused_1474_ = lean_ctor_get(v_d_1435_, 0);
lean_dec(v_unused_1474_);
v___x_1439_ = v_d_1435_;
v_isShared_1440_ = v_isSharedCheck_1473_;
goto v_resetjp_1438_;
}
else
{
lean_dec(v_d_1435_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1473_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
if (lean_obj_tag(v___x_1437_) == 4)
{
lean_object* v_s_1457_; lean_object* v___x_1458_; uint8_t v___x_1459_; 
v_s_1457_ = lean_ctor_get(v___x_1437_, 0);
v___x_1458_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0));
v___x_1459_ = lean_string_dec_eq(v_s_1457_, v___x_1458_);
if (v___x_1459_ == 0)
{
lean_object* v___x_1460_; uint8_t v___x_1461_; 
v___x_1460_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2));
v___x_1461_ = lean_string_dec_eq(v_s_1457_, v___x_1460_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; uint8_t v___x_1463_; 
v___x_1462_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4));
v___x_1463_ = lean_string_dec_eq(v_s_1457_, v___x_1462_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; uint8_t v___x_1465_; 
v___x_1464_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6));
v___x_1465_ = lean_string_dec_eq(v_s_1457_, v___x_1464_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; uint8_t v___x_1467_; 
v___x_1466_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8));
v___x_1467_ = lean_string_dec_eq(v_s_1457_, v___x_1466_);
if (v___x_1467_ == 0)
{
goto v___jp_1441_;
}
else
{
lean_object* v___x_1468_; 
lean_dec_ref_known(v___x_1437_, 1);
lean_del_object(v___x_1439_);
v___x_1468_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__2));
return v___x_1468_;
}
}
else
{
lean_object* v___x_1469_; 
lean_dec_ref_known(v___x_1437_, 1);
lean_del_object(v___x_1439_);
v___x_1469_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__3));
return v___x_1469_;
}
}
else
{
lean_object* v___x_1470_; 
lean_dec_ref_known(v___x_1437_, 1);
lean_del_object(v___x_1439_);
v___x_1470_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__4));
return v___x_1470_;
}
}
else
{
lean_object* v___x_1471_; 
lean_dec_ref_known(v___x_1437_, 1);
lean_del_object(v___x_1439_);
v___x_1471_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__5));
return v___x_1471_;
}
}
else
{
lean_object* v___x_1472_; 
lean_dec_ref_known(v___x_1437_, 1);
lean_del_object(v___x_1439_);
v___x_1472_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__6));
return v___x_1472_;
}
}
else
{
goto v___jp_1441_;
}
v___jp_1441_:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1442_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_1443_ = lean_string_append(v___x_1442_, v_key_1436_);
v___x_1444_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_1445_ = lean_string_append(v___x_1443_, v___x_1444_);
v___x_1446_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___closed__1));
v___x_1447_ = lean_string_append(v___x_1445_, v___x_1446_);
v___x_1448_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_1449_ = lean_string_append(v___x_1447_, v___x_1448_);
v___x_1450_ = l_Lasm_JS_Data_describe(v___x_1437_);
v___x_1451_ = lean_string_append(v___x_1449_, v___x_1450_);
lean_dec_ref(v___x_1450_);
v___x_1452_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3));
v___x_1453_ = lean_string_append(v___x_1451_, v___x_1452_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set_tag(v___x_1439_, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1453_);
v___x_1455_ = v___x_1439_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
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
else
{
lean_object* v___x_1475_; 
lean_dec(v_d_1435_);
v___x_1475_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5));
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1476_, lean_object* v_key_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_d_1476_, v_key_1477_);
lean_dec_ref(v_key_1477_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(lean_object* v_d_1482_, lean_object* v_key_1483_){
_start:
{
if (lean_obj_tag(v_d_1482_) == 8)
{
lean_object* v___x_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1509_; 
v___x_1484_ = l_Lasm_JS_Data_field(v_d_1482_, v_key_1483_);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_d_1482_);
if (v_isSharedCheck_1509_ == 0)
{
lean_object* v_unused_1510_; 
v_unused_1510_ = lean_ctor_get(v_d_1482_, 0);
lean_dec(v_unused_1510_);
v___x_1486_ = v_d_1482_;
v_isShared_1487_ = v_isSharedCheck_1509_;
goto v_resetjp_1485_;
}
else
{
lean_dec(v_d_1482_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1509_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
if (lean_obj_tag(v___x_1484_) == 4)
{
lean_object* v_s_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
lean_del_object(v___x_1486_);
v_s_1488_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1484_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_s_1488_);
lean_dec(v___x_1484_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set_tag(v___x_1490_, 1);
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_s_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
else
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1507_; 
v___x_1496_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_1497_ = lean_string_append(v___x_1496_, v_key_1483_);
v___x_1498_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_1499_ = lean_string_append(v___x_1497_, v___x_1498_);
v___x_1500_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0));
v___x_1501_ = lean_string_append(v___x_1499_, v___x_1500_);
v___x_1502_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_1503_ = lean_string_append(v___x_1501_, v___x_1502_);
v___x_1504_ = l_Lasm_JS_Data_describe(v___x_1484_);
v___x_1505_ = lean_string_append(v___x_1503_, v___x_1504_);
lean_dec_ref(v___x_1504_);
if (v_isShared_1487_ == 0)
{
lean_ctor_set_tag(v___x_1486_, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1505_);
v___x_1507_ = v___x_1486_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1505_);
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
else
{
lean_object* v___x_1511_; 
lean_dec(v_d_1482_);
v___x_1511_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__1));
return v___x_1511_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1512_, lean_object* v_key_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_d_1512_, v_key_1513_);
lean_dec_ref(v_key_1513_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(size_t v_sz_1515_, size_t v_i_1516_, lean_object* v_bs_1517_){
_start:
{
uint8_t v___x_1518_; 
v___x_1518_ = lean_usize_dec_lt(v_i_1516_, v_sz_1515_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; 
v___x_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1519_, 0, v_bs_1517_);
return v___x_1519_;
}
else
{
lean_object* v_v_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v_v_1520_ = lean_array_uget_borrowed(v_bs_1517_, v_i_1516_);
v___x_1521_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
lean_inc(v_v_1520_);
v___x_1522_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1520_, v___x_1521_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec_ref(v_bs_1517_);
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v_a_1531_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1522_, 1);
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1));
lean_inc(v_v_1520_);
v___x_1533_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_v_1520_, v___x_1532_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_dec(v_a_1531_);
lean_dec_ref(v_bs_1517_);
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1533_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1533_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
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
return v___x_1539_;
}
}
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1543_; lean_object* v_bs_x27_1544_; lean_object* v___x_1545_; uint8_t v___x_1546_; size_t v___x_1547_; size_t v___x_1548_; lean_object* v___x_1549_; 
v_a_1542_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1543_ = lean_unsigned_to_nat(0u);
v_bs_x27_1544_ = lean_array_uset(v_bs_1517_, v_i_1516_, v___x_1543_);
v___x_1545_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1545_, 0, v_a_1531_);
v___x_1546_ = lean_unbox(v_a_1542_);
lean_dec(v_a_1542_);
lean_ctor_set_uint8(v___x_1545_, sizeof(void*)*1, v___x_1546_);
v___x_1547_ = ((size_t)1ULL);
v___x_1548_ = lean_usize_add(v_i_1516_, v___x_1547_);
v___x_1549_ = lean_array_uset(v_bs_x27_1544_, v_i_1516_, v___x_1545_);
v_i_1516_ = v___x_1548_;
v_bs_1517_ = v___x_1549_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3___boxed(lean_object* v_sz_1551_, lean_object* v_i_1552_, lean_object* v_bs_1553_){
_start:
{
size_t v_sz_boxed_1554_; size_t v_i_boxed_1555_; lean_object* v_res_1556_; 
v_sz_boxed_1554_ = lean_unbox_usize(v_sz_1551_);
lean_dec(v_sz_1551_);
v_i_boxed_1555_ = lean_unbox_usize(v_i_1552_);
lean_dec(v_i_1552_);
v_res_1556_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(v_sz_boxed_1554_, v_i_boxed_1555_, v_bs_1553_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(lean_object* v_context_1561_, lean_object* v_d_1562_){
_start:
{
lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1571_; lean_object* v_received_1572_; lean_object* v___y_1591_; lean_object* v_a_1594_; 
if (lean_obj_tag(v_d_1562_) == 7)
{
lean_object* v_items_1618_; size_t v_sz_1619_; size_t v___x_1620_; lean_object* v___x_1621_; 
v_items_1618_ = lean_ctor_get(v_d_1562_, 0);
v_sz_1619_ = lean_array_size(v_items_1618_);
v___x_1620_ = ((size_t)0ULL);
lean_inc_ref(v_items_1618_);
v___x_1621_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(v_sz_1619_, v___x_1620_, v_items_1618_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1623_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__3));
v___x_1624_ = lean_string_utf8_byte_size(v_a_1622_);
v___x_1625_ = lean_unsigned_to_nat(0u);
v___x_1626_ = lean_nat_dec_eq(v___x_1624_, v___x_1625_);
if (v___x_1626_ == 0)
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1627_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1628_ = lean_string_append(v___x_1627_, v_a_1622_);
lean_dec(v_a_1622_);
v___x_1629_ = lean_string_append(v___x_1623_, v___x_1628_);
lean_dec_ref(v___x_1628_);
v_a_1594_ = v___x_1629_;
goto v___jp_1593_;
}
else
{
lean_dec(v_a_1622_);
v_a_1594_ = v___x_1623_;
goto v___jp_1593_;
}
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1637_; 
lean_dec_ref_known(v_d_1562_, 1);
v_a_1630_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1632_ = v___x_1621_;
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1621_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1635_; 
if (v_isShared_1633_ == 0)
{
lean_ctor_set_tag(v___x_1632_, 0);
v___x_1635_ = v___x_1632_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1630_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
else
{
lean_object* v___x_1638_; 
v___x_1638_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_1594_ = v___x_1638_;
goto v___jp_1593_;
}
v___jp_1564_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1567_ = lean_string_append(v___y_1565_, v___y_1566_);
lean_dec_ref(v___y_1566_);
v___x_1568_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
v___x_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
return v___x_1569_;
}
v___jp_1570_:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; uint8_t v___x_1584_; 
v___x_1573_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1574_ = lean_string_append(v___x_1573_, v_context_1561_);
v___x_1575_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1576_ = lean_string_append(v___x_1574_, v___x_1575_);
v___x_1577_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__0));
v___x_1578_ = lean_string_append(v___x_1576_, v___x_1577_);
v___x_1579_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1580_ = lean_string_append(v___x_1578_, v___x_1579_);
v___x_1581_ = lean_string_append(v___x_1580_, v_received_1572_);
lean_dec_ref(v_received_1572_);
v___x_1582_ = lean_string_utf8_byte_size(v___y_1571_);
v___x_1583_ = lean_unsigned_to_nat(0u);
v___x_1584_ = lean_nat_dec_eq(v___x_1582_, v___x_1583_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1585_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_1586_ = lean_string_append(v___x_1585_, v___y_1571_);
lean_dec_ref(v___y_1571_);
v___x_1587_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_1588_ = lean_string_append(v___x_1586_, v___x_1587_);
v___y_1565_ = v___x_1581_;
v___y_1566_ = v___x_1588_;
goto v___jp_1564_;
}
else
{
lean_object* v___x_1589_; 
lean_dec_ref(v___y_1571_);
v___x_1589_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_1565_ = v___x_1581_;
v___y_1566_ = v___x_1589_;
goto v___jp_1564_;
}
}
v___jp_1590_:
{
lean_object* v___x_1592_; 
v___x_1592_ = l_Lasm_JS_Data_describe(v_d_1562_);
v___y_1571_ = v___y_1591_;
v_received_1572_ = v___x_1592_;
goto v___jp_1570_;
}
v___jp_1593_:
{
if (lean_obj_tag(v_d_1562_) == 9)
{
lean_object* v_value_1595_; lean_object* v_description_1596_; lean_object* v___x_1597_; uint8_t v___x_1598_; 
v_value_1595_ = lean_ctor_get(v_d_1562_, 0);
v_description_1596_ = lean_ctor_get(v_d_1562_, 1);
v___x_1597_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1598_ = lean_string_dec_eq(v_description_1596_, v___x_1597_);
if (v___x_1598_ == 0)
{
v___y_1591_ = v_a_1594_;
goto v___jp_1590_;
}
else
{
lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1615_; 
lean_inc(v_value_1595_);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_d_1562_);
if (v_isSharedCheck_1615_ == 0)
{
lean_object* v_unused_1616_; lean_object* v_unused_1617_; 
v_unused_1616_ = lean_ctor_get(v_d_1562_, 1);
lean_dec(v_unused_1616_);
v_unused_1617_ = lean_ctor_get(v_d_1562_, 0);
lean_dec(v_unused_1617_);
v___x_1600_ = v_d_1562_;
v_isShared_1601_ = v_isSharedCheck_1615_;
goto v_resetjp_1599_;
}
else
{
lean_dec(v_d_1562_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1615_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
uint32_t v___x_1602_; uint64_t v___x_1603_; lean_object* v___x_1605_; 
v___x_1602_ = 206;
v___x_1603_ = 0ULL;
lean_inc(v_value_1595_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set(v___x_1600_, 1, v___x_1597_);
v___x_1605_ = v___x_1600_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_value_1595_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v___x_1597_);
v___x_1605_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
uint32_t v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = lasm_js_value_handle(v_value_1595_);
lean_dec(v_value_1595_);
v___x_1607_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1602_, v___x_1603_, v___x_1605_, v___x_1606_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; uint8_t v___x_1609_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
v___x_1609_ = lean_string_validate_utf8(v_a_1608_);
if (v___x_1609_ == 0)
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
lean_dec(v_a_1608_);
v___x_1610_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_1611_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1610_);
v___y_1571_ = v_a_1594_;
v_received_1572_ = v___x_1611_;
goto v___jp_1570_;
}
else
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_string_from_utf8_unchecked(v_a_1608_);
v___y_1571_ = v_a_1594_;
v_received_1572_ = v___x_1612_;
goto v___jp_1570_;
}
}
else
{
lean_object* v___x_1613_; 
lean_dec_ref_known(v___x_1607_, 1);
v___x_1613_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v___y_1571_ = v_a_1594_;
v_received_1572_ = v___x_1613_;
goto v___jp_1570_;
}
}
}
}
}
else
{
v___y_1591_ = v_a_1594_;
goto v___jp_1590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___boxed(lean_object* v_context_1639_, lean_object* v_d_1640_, lean_object* v_a_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(v_context_1639_, v_d_1640_);
lean_dec_ref(v_context_1639_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(lean_object* v_b_1643_, lean_object* v_args_1644_, uint8_t v_await_1645_){
_start:
{
uint64_t v___y_1648_; uint64_t v___y_1649_; uint64_t v___x_1684_; uint64_t v___y_1686_; 
v___x_1684_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1645_ == 0)
{
uint64_t v___x_1691_; 
v___x_1691_ = 0ULL;
v___y_1686_ = v___x_1691_;
goto v___jp_1685_;
}
else
{
uint64_t v___x_1692_; 
v___x_1692_ = 2ULL;
v___y_1686_ = v___x_1692_;
goto v___jp_1685_;
}
v___jp_1647_:
{
uint64_t v_flags_1650_; uint32_t v___x_1651_; lean_object* v___x_1652_; uint32_t v___x_1653_; lean_object* v___x_1654_; 
v_flags_1650_ = lean_uint64_lor(v___y_1648_, v___y_1649_);
v___x_1651_ = 214;
v___x_1652_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1643_, v_args_1644_);
v___x_1653_ = 0;
v___x_1654_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1651_, v_flags_1650_, v___x_1652_, v___x_1653_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1656_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1655_);
lean_dec(v_a_1655_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
v___x_1658_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1643_);
v___x_1659_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(v___x_1658_, v_a_1657_);
lean_dec_ref(v___x_1658_);
return v___x_1659_;
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
v_a_1660_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1656_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1656_);
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
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1683_; 
v_a_1668_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1670_ = v___x_1654_;
v_isShared_1671_ = v_isSharedCheck_1683_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1654_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1683_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1672_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1673_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1643_);
v___x_1674_ = lean_string_append(v___x_1672_, v___x_1673_);
lean_dec_ref(v___x_1673_);
v___x_1675_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1676_ = lean_string_append(v___x_1674_, v___x_1675_);
v___x_1677_ = lean_io_error_to_string(v_a_1668_);
v___x_1678_ = lean_string_append(v___x_1676_, v___x_1677_);
lean_dec_ref(v___x_1677_);
v___x_1679_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 0, v___x_1679_);
v___x_1681_ = v___x_1670_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1679_);
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
v___jp_1685_:
{
uint8_t v_construct_1687_; uint64_t v___x_1688_; 
v_construct_1687_ = lean_ctor_get_uint8(v_b_1643_, sizeof(void*)*4);
v___x_1688_ = lean_uint64_lor(v___x_1684_, v___y_1686_);
if (v_construct_1687_ == 0)
{
uint64_t v___x_1689_; 
v___x_1689_ = 0ULL;
v___y_1648_ = v___x_1688_;
v___y_1649_ = v___x_1689_;
goto v___jp_1647_;
}
else
{
uint64_t v___x_1690_; 
v___x_1690_ = 4ULL;
v___y_1648_ = v___x_1688_;
v___y_1649_ = v___x_1690_;
goto v___jp_1647_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0___boxed(lean_object* v_b_1693_, lean_object* v_args_1694_, lean_object* v_await_1695_, lean_object* v_a_1696_){
_start:
{
uint8_t v_await_boxed_1697_; lean_object* v_res_1698_; 
v_await_boxed_1697_ = lean_unbox(v_await_1695_);
v_res_1698_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(v_b_1693_, v_args_1694_, v_await_boxed_1697_);
lean_dec_ref(v_b_1693_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports(lean_object* v_moduleObject_1707_){
_start:
{
uint8_t v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1709_ = 0;
v___x_1710_ = lean_unsigned_to_nat(1u);
v___x_1711_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_exports___closed__2));
v___x_1712_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1713_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1713_, 0, v_moduleObject_1707_);
lean_ctor_set(v___x_1713_, 1, v___x_1712_);
v___x_1714_ = lean_mk_empty_array_with_capacity(v___x_1710_);
v___x_1715_ = lean_array_push(v___x_1714_, v___x_1713_);
v___x_1716_ = l_Lasm_JS_Web_Support_args(v___x_1715_);
v___x_1717_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(v___x_1711_, v___x_1716_, v___x_1709_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports___boxed(lean_object* v_moduleObject_1718_, lean_object* v_a_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lasm_JS_Web_WebAssembly_Module_exports(v_moduleObject_1718_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(size_t v_sz_1721_, size_t v_i_1722_, lean_object* v_bs_1723_){
_start:
{
uint8_t v___x_1724_; 
v___x_1724_ = lean_usize_dec_lt(v_i_1722_, v_sz_1721_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1725_, 0, v_bs_1723_);
return v___x_1725_;
}
else
{
lean_object* v_v_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_v_1726_ = lean_array_uget_borrowed(v_bs_1723_, v_i_1722_);
v___x_1727_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0));
lean_inc(v_v_1726_);
v___x_1728_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1726_, v___x_1727_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec_ref(v_bs_1723_);
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1728_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1728_);
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
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v_a_1737_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1737_);
lean_dec_ref_known(v___x_1728_, 1);
v___x_1738_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
lean_inc(v_v_1726_);
v___x_1739_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1726_, v___x_1738_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
lean_dec(v_a_1737_);
lean_dec_ref(v_bs_1723_);
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1739_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1739_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
else
{
lean_object* v_a_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v_a_1748_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1739_, 1);
v___x_1749_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1));
lean_inc(v_v_1726_);
v___x_1750_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_v_1726_, v___x_1749_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
lean_dec(v_a_1748_);
lean_dec(v_a_1737_);
lean_dec_ref(v_bs_1723_);
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1750_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1750_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1760_; lean_object* v_bs_x27_1761_; lean_object* v___x_1762_; uint8_t v___x_1763_; size_t v___x_1764_; size_t v___x_1765_; lean_object* v___x_1766_; 
v_a_1759_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_a_1759_);
lean_dec_ref_known(v___x_1750_, 1);
v___x_1760_ = lean_unsigned_to_nat(0u);
v_bs_x27_1761_ = lean_array_uset(v_bs_1723_, v_i_1722_, v___x_1760_);
v___x_1762_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1762_, 0, v_a_1737_);
lean_ctor_set(v___x_1762_, 1, v_a_1748_);
v___x_1763_ = lean_unbox(v_a_1759_);
lean_dec(v_a_1759_);
lean_ctor_set_uint8(v___x_1762_, sizeof(void*)*2, v___x_1763_);
v___x_1764_ = ((size_t)1ULL);
v___x_1765_ = lean_usize_add(v_i_1722_, v___x_1764_);
v___x_1766_ = lean_array_uset(v_bs_x27_1761_, v_i_1722_, v___x_1762_);
v_i_1722_ = v___x_1765_;
v_bs_1723_ = v___x_1766_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_1768_, lean_object* v_i_1769_, lean_object* v_bs_1770_){
_start:
{
size_t v_sz_boxed_1771_; size_t v_i_boxed_1772_; lean_object* v_res_1773_; 
v_sz_boxed_1771_ = lean_unbox_usize(v_sz_1768_);
lean_dec(v_sz_1768_);
v_i_boxed_1772_ = lean_unbox_usize(v_i_1769_);
lean_dec(v_i_1769_);
v_res_1773_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(v_sz_boxed_1771_, v_i_boxed_1772_, v_bs_1770_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(lean_object* v_context_1776_, lean_object* v_d_1777_){
_start:
{
lean_object* v___y_1780_; lean_object* v___y_1781_; lean_object* v___y_1786_; lean_object* v_received_1787_; lean_object* v___y_1806_; lean_object* v_a_1809_; 
if (lean_obj_tag(v_d_1777_) == 7)
{
lean_object* v_items_1833_; size_t v_sz_1834_; size_t v___x_1835_; lean_object* v___x_1836_; 
v_items_1833_ = lean_ctor_get(v_d_1777_, 0);
v_sz_1834_ = lean_array_size(v_items_1833_);
v___x_1835_ = ((size_t)0ULL);
lean_inc_ref(v_items_1833_);
v___x_1836_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(v_sz_1834_, v___x_1835_, v_items_1833_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; 
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1836_, 1);
v___x_1838_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__1));
v___x_1839_ = lean_string_utf8_byte_size(v_a_1837_);
v___x_1840_ = lean_unsigned_to_nat(0u);
v___x_1841_ = lean_nat_dec_eq(v___x_1839_, v___x_1840_);
if (v___x_1841_ == 0)
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1842_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1843_ = lean_string_append(v___x_1842_, v_a_1837_);
lean_dec(v_a_1837_);
v___x_1844_ = lean_string_append(v___x_1838_, v___x_1843_);
lean_dec_ref(v___x_1843_);
v_a_1809_ = v___x_1844_;
goto v___jp_1808_;
}
else
{
lean_dec(v_a_1837_);
v_a_1809_ = v___x_1838_;
goto v___jp_1808_;
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_dec_ref_known(v_d_1777_, 1);
v_a_1845_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1836_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1836_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
lean_ctor_set_tag(v___x_1847_, 0);
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
else
{
lean_object* v___x_1853_; 
v___x_1853_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_1809_ = v___x_1853_;
goto v___jp_1808_;
}
v___jp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1782_ = lean_string_append(v___y_1780_, v___y_1781_);
lean_dec_ref(v___y_1781_);
v___x_1783_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1782_);
v___x_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1783_);
return v___x_1784_;
}
v___jp_1785_:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; 
v___x_1788_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1789_ = lean_string_append(v___x_1788_, v_context_1776_);
v___x_1790_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1791_ = lean_string_append(v___x_1789_, v___x_1790_);
v___x_1792_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__0));
v___x_1793_ = lean_string_append(v___x_1791_, v___x_1792_);
v___x_1794_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1795_ = lean_string_append(v___x_1793_, v___x_1794_);
v___x_1796_ = lean_string_append(v___x_1795_, v_received_1787_);
lean_dec_ref(v_received_1787_);
v___x_1797_ = lean_string_utf8_byte_size(v___y_1786_);
v___x_1798_ = lean_unsigned_to_nat(0u);
v___x_1799_ = lean_nat_dec_eq(v___x_1797_, v___x_1798_);
if (v___x_1799_ == 0)
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1800_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_1801_ = lean_string_append(v___x_1800_, v___y_1786_);
lean_dec_ref(v___y_1786_);
v___x_1802_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_1803_ = lean_string_append(v___x_1801_, v___x_1802_);
v___y_1780_ = v___x_1796_;
v___y_1781_ = v___x_1803_;
goto v___jp_1779_;
}
else
{
lean_object* v___x_1804_; 
lean_dec_ref(v___y_1786_);
v___x_1804_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_1780_ = v___x_1796_;
v___y_1781_ = v___x_1804_;
goto v___jp_1779_;
}
}
v___jp_1805_:
{
lean_object* v___x_1807_; 
v___x_1807_ = l_Lasm_JS_Data_describe(v_d_1777_);
v___y_1786_ = v___y_1806_;
v_received_1787_ = v___x_1807_;
goto v___jp_1785_;
}
v___jp_1808_:
{
if (lean_obj_tag(v_d_1777_) == 9)
{
lean_object* v_value_1810_; lean_object* v_description_1811_; lean_object* v___x_1812_; uint8_t v___x_1813_; 
v_value_1810_ = lean_ctor_get(v_d_1777_, 0);
v_description_1811_ = lean_ctor_get(v_d_1777_, 1);
v___x_1812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1813_ = lean_string_dec_eq(v_description_1811_, v___x_1812_);
if (v___x_1813_ == 0)
{
v___y_1806_ = v_a_1809_;
goto v___jp_1805_;
}
else
{
lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1830_; 
lean_inc(v_value_1810_);
v_isSharedCheck_1830_ = !lean_is_exclusive(v_d_1777_);
if (v_isSharedCheck_1830_ == 0)
{
lean_object* v_unused_1831_; lean_object* v_unused_1832_; 
v_unused_1831_ = lean_ctor_get(v_d_1777_, 1);
lean_dec(v_unused_1831_);
v_unused_1832_ = lean_ctor_get(v_d_1777_, 0);
lean_dec(v_unused_1832_);
v___x_1815_ = v_d_1777_;
v_isShared_1816_ = v_isSharedCheck_1830_;
goto v_resetjp_1814_;
}
else
{
lean_dec(v_d_1777_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1830_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
uint32_t v___x_1817_; uint64_t v___x_1818_; lean_object* v___x_1820_; 
v___x_1817_ = 206;
v___x_1818_ = 0ULL;
lean_inc(v_value_1810_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 1, v___x_1812_);
v___x_1820_ = v___x_1815_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_value_1810_);
lean_ctor_set(v_reuseFailAlloc_1829_, 1, v___x_1812_);
v___x_1820_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
uint32_t v___x_1821_; lean_object* v___x_1822_; 
v___x_1821_ = lasm_js_value_handle(v_value_1810_);
lean_dec(v_value_1810_);
v___x_1822_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1817_, v___x_1818_, v___x_1820_, v___x_1821_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; uint8_t v___x_1824_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_a_1823_);
lean_dec_ref_known(v___x_1822_, 1);
v___x_1824_ = lean_string_validate_utf8(v_a_1823_);
if (v___x_1824_ == 0)
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_dec(v_a_1823_);
v___x_1825_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_1826_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1825_);
v___y_1786_ = v_a_1809_;
v_received_1787_ = v___x_1826_;
goto v___jp_1785_;
}
else
{
lean_object* v___x_1827_; 
v___x_1827_ = lean_string_from_utf8_unchecked(v_a_1823_);
v___y_1786_ = v_a_1809_;
v_received_1787_ = v___x_1827_;
goto v___jp_1785_;
}
}
else
{
lean_object* v___x_1828_; 
lean_dec_ref_known(v___x_1822_, 1);
v___x_1828_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v___y_1786_ = v_a_1809_;
v_received_1787_ = v___x_1828_;
goto v___jp_1785_;
}
}
}
}
}
else
{
v___y_1806_ = v_a_1809_;
goto v___jp_1805_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___boxed(lean_object* v_context_1854_, lean_object* v_d_1855_, lean_object* v_a_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(v_context_1854_, v_d_1855_);
lean_dec_ref(v_context_1854_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(lean_object* v_b_1858_, lean_object* v_args_1859_, uint8_t v_await_1860_){
_start:
{
uint64_t v___y_1863_; uint64_t v___y_1864_; uint64_t v___x_1899_; uint64_t v___y_1901_; 
v___x_1899_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1860_ == 0)
{
uint64_t v___x_1906_; 
v___x_1906_ = 0ULL;
v___y_1901_ = v___x_1906_;
goto v___jp_1900_;
}
else
{
uint64_t v___x_1907_; 
v___x_1907_ = 2ULL;
v___y_1901_ = v___x_1907_;
goto v___jp_1900_;
}
v___jp_1862_:
{
uint64_t v_flags_1865_; uint32_t v___x_1866_; lean_object* v___x_1867_; uint32_t v___x_1868_; lean_object* v___x_1869_; 
v_flags_1865_ = lean_uint64_lor(v___y_1863_, v___y_1864_);
v___x_1866_ = 214;
v___x_1867_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1858_, v_args_1859_);
v___x_1868_ = 0;
v___x_1869_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1866_, v_flags_1865_, v___x_1867_, v___x_1868_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; lean_object* v___x_1871_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_a_1870_);
lean_dec_ref_known(v___x_1869_, 1);
v___x_1871_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1870_);
lean_dec(v_a_1870_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v_a_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v_a_1872_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_a_1872_);
lean_dec_ref_known(v___x_1871_, 1);
v___x_1873_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1858_);
v___x_1874_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(v___x_1873_, v_a_1872_);
lean_dec_ref(v___x_1873_);
return v___x_1874_;
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
v_a_1875_ = lean_ctor_get(v___x_1871_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1871_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1871_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1871_);
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
else
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1898_; 
v_a_1883_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1885_ = v___x_1869_;
v_isShared_1886_ = v_isSharedCheck_1898_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1869_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1898_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1896_; 
v___x_1887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1888_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1858_);
v___x_1889_ = lean_string_append(v___x_1887_, v___x_1888_);
lean_dec_ref(v___x_1888_);
v___x_1890_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1891_ = lean_string_append(v___x_1889_, v___x_1890_);
v___x_1892_ = lean_io_error_to_string(v_a_1883_);
v___x_1893_ = lean_string_append(v___x_1891_, v___x_1892_);
lean_dec_ref(v___x_1892_);
v___x_1894_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1893_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 0, v___x_1894_);
v___x_1896_ = v___x_1885_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1894_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
v___jp_1900_:
{
uint8_t v_construct_1902_; uint64_t v___x_1903_; 
v_construct_1902_ = lean_ctor_get_uint8(v_b_1858_, sizeof(void*)*4);
v___x_1903_ = lean_uint64_lor(v___x_1899_, v___y_1901_);
if (v_construct_1902_ == 0)
{
uint64_t v___x_1904_; 
v___x_1904_ = 0ULL;
v___y_1863_ = v___x_1903_;
v___y_1864_ = v___x_1904_;
goto v___jp_1862_;
}
else
{
uint64_t v___x_1905_; 
v___x_1905_ = 4ULL;
v___y_1863_ = v___x_1903_;
v___y_1864_ = v___x_1905_;
goto v___jp_1862_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0___boxed(lean_object* v_b_1908_, lean_object* v_args_1909_, lean_object* v_await_1910_, lean_object* v_a_1911_){
_start:
{
uint8_t v_await_boxed_1912_; lean_object* v_res_1913_; 
v_await_boxed_1912_ = lean_unbox(v_await_1910_);
v_res_1913_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(v_b_1908_, v_args_1909_, v_await_boxed_1912_);
lean_dec_ref(v_b_1908_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports(lean_object* v_moduleObject_1922_){
_start:
{
uint8_t v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1924_ = 0;
v___x_1925_ = lean_unsigned_to_nat(1u);
v___x_1926_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_imports___closed__2));
v___x_1927_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1928_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1928_, 0, v_moduleObject_1922_);
lean_ctor_set(v___x_1928_, 1, v___x_1927_);
v___x_1929_ = lean_mk_empty_array_with_capacity(v___x_1925_);
v___x_1930_ = lean_array_push(v___x_1929_, v___x_1928_);
v___x_1931_ = l_Lasm_JS_Web_Support_args(v___x_1930_);
v___x_1932_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(v___x_1926_, v___x_1931_, v___x_1924_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports___boxed(lean_object* v_moduleObject_1933_, lean_object* v_a_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Lasm_JS_Web_WebAssembly_Module_imports(v_moduleObject_1933_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(size_t v_sz_1938_, size_t v_i_1939_, lean_object* v_bs_1940_){
_start:
{
uint8_t v___x_1941_; 
v___x_1941_ = lean_usize_dec_lt(v_i_1939_, v_sz_1938_);
if (v___x_1941_ == 0)
{
lean_object* v___x_1942_; 
v___x_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1942_, 0, v_bs_1940_);
return v___x_1942_;
}
else
{
lean_object* v_v_1943_; 
v_v_1943_ = lean_array_uget_borrowed(v_bs_1940_, v_i_1939_);
if (lean_obj_tag(v_v_1943_) == 9)
{
lean_object* v_value_1944_; lean_object* v___x_1945_; lean_object* v_bs_x27_1946_; size_t v___x_1947_; size_t v___x_1948_; lean_object* v___x_1949_; 
v_value_1944_ = lean_ctor_get(v_v_1943_, 0);
lean_inc(v_value_1944_);
v___x_1945_ = lean_unsigned_to_nat(0u);
v_bs_x27_1946_ = lean_array_uset(v_bs_1940_, v_i_1939_, v___x_1945_);
v___x_1947_ = ((size_t)1ULL);
v___x_1948_ = lean_usize_add(v_i_1939_, v___x_1947_);
v___x_1949_ = lean_array_uset(v_bs_x27_1946_, v_i_1939_, v_value_1944_);
v_i_1939_ = v___x_1948_;
v_bs_1940_ = v___x_1949_;
goto _start;
}
else
{
lean_object* v___x_1951_; 
lean_dec_ref(v_bs_1940_);
v___x_1951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___closed__0));
return v___x_1951_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_1952_, lean_object* v_i_1953_, lean_object* v_bs_1954_){
_start:
{
size_t v_sz_boxed_1955_; size_t v_i_boxed_1956_; lean_object* v_res_1957_; 
v_sz_boxed_1955_ = lean_unbox_usize(v_sz_1952_);
lean_dec(v_sz_1952_);
v_i_boxed_1956_ = lean_unbox_usize(v_i_1953_);
lean_dec(v_i_1953_);
v_res_1957_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(v_sz_boxed_1955_, v_i_boxed_1956_, v_bs_1954_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(lean_object* v_context_1960_, lean_object* v_d_1961_){
_start:
{
lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1970_; lean_object* v_received_1971_; lean_object* v___y_1990_; lean_object* v_a_1993_; 
if (lean_obj_tag(v_d_1961_) == 7)
{
lean_object* v_items_2017_; size_t v_sz_2018_; size_t v___x_2019_; lean_object* v___x_2020_; 
v_items_2017_ = lean_ctor_get(v_d_1961_, 0);
v_sz_2018_ = lean_array_size(v_items_2017_);
v___x_2019_ = ((size_t)0ULL);
lean_inc_ref(v_items_2017_);
v___x_2020_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(v_sz_2018_, v___x_2019_, v_items_2017_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; uint8_t v___x_2025_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_a_2021_);
lean_dec_ref_known(v___x_2020_, 1);
v___x_2022_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__1));
v___x_2023_ = lean_string_utf8_byte_size(v_a_2021_);
v___x_2024_ = lean_unsigned_to_nat(0u);
v___x_2025_ = lean_nat_dec_eq(v___x_2023_, v___x_2024_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2026_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2027_ = lean_string_append(v___x_2026_, v_a_2021_);
lean_dec(v_a_2021_);
v___x_2028_ = lean_string_append(v___x_2022_, v___x_2027_);
lean_dec_ref(v___x_2027_);
v_a_1993_ = v___x_2028_;
goto v___jp_1992_;
}
else
{
lean_dec(v_a_2021_);
v_a_1993_ = v___x_2022_;
goto v___jp_1992_;
}
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
lean_dec_ref_known(v_d_1961_, 1);
v_a_2029_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_2020_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2020_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
lean_ctor_set_tag(v___x_2031_, 0);
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
else
{
lean_object* v___x_2037_; 
v___x_2037_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_1993_ = v___x_2037_;
goto v___jp_1992_;
}
v___jp_1963_:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1966_ = lean_string_append(v___y_1964_, v___y_1965_);
lean_dec_ref(v___y_1965_);
v___x_1967_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1967_);
return v___x_1968_;
}
v___jp_1969_:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; uint8_t v___x_1983_; 
v___x_1972_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1973_ = lean_string_append(v___x_1972_, v_context_1960_);
v___x_1974_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1975_ = lean_string_append(v___x_1973_, v___x_1974_);
v___x_1976_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__0));
v___x_1977_ = lean_string_append(v___x_1975_, v___x_1976_);
v___x_1978_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1979_ = lean_string_append(v___x_1977_, v___x_1978_);
v___x_1980_ = lean_string_append(v___x_1979_, v_received_1971_);
lean_dec_ref(v_received_1971_);
v___x_1981_ = lean_string_utf8_byte_size(v___y_1970_);
v___x_1982_ = lean_unsigned_to_nat(0u);
v___x_1983_ = lean_nat_dec_eq(v___x_1981_, v___x_1982_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1984_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_1985_ = lean_string_append(v___x_1984_, v___y_1970_);
lean_dec_ref(v___y_1970_);
v___x_1986_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_1987_ = lean_string_append(v___x_1985_, v___x_1986_);
v___y_1964_ = v___x_1980_;
v___y_1965_ = v___x_1987_;
goto v___jp_1963_;
}
else
{
lean_object* v___x_1988_; 
lean_dec_ref(v___y_1970_);
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_1964_ = v___x_1980_;
v___y_1965_ = v___x_1988_;
goto v___jp_1963_;
}
}
v___jp_1989_:
{
lean_object* v___x_1991_; 
v___x_1991_ = l_Lasm_JS_Data_describe(v_d_1961_);
v___y_1970_ = v___y_1990_;
v_received_1971_ = v___x_1991_;
goto v___jp_1969_;
}
v___jp_1992_:
{
if (lean_obj_tag(v_d_1961_) == 9)
{
lean_object* v_value_1994_; lean_object* v_description_1995_; lean_object* v___x_1996_; uint8_t v___x_1997_; 
v_value_1994_ = lean_ctor_get(v_d_1961_, 0);
v_description_1995_ = lean_ctor_get(v_d_1961_, 1);
v___x_1996_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1997_ = lean_string_dec_eq(v_description_1995_, v___x_1996_);
if (v___x_1997_ == 0)
{
v___y_1990_ = v_a_1993_;
goto v___jp_1989_;
}
else
{
lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2014_; 
lean_inc(v_value_1994_);
v_isSharedCheck_2014_ = !lean_is_exclusive(v_d_1961_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; lean_object* v_unused_2016_; 
v_unused_2015_ = lean_ctor_get(v_d_1961_, 1);
lean_dec(v_unused_2015_);
v_unused_2016_ = lean_ctor_get(v_d_1961_, 0);
lean_dec(v_unused_2016_);
v___x_1999_ = v_d_1961_;
v_isShared_2000_ = v_isSharedCheck_2014_;
goto v_resetjp_1998_;
}
else
{
lean_dec(v_d_1961_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2014_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
uint32_t v___x_2001_; uint64_t v___x_2002_; lean_object* v___x_2004_; 
v___x_2001_ = 206;
v___x_2002_ = 0ULL;
lean_inc(v_value_1994_);
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 1, v___x_1996_);
v___x_2004_ = v___x_1999_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_value_1994_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v___x_1996_);
v___x_2004_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
uint32_t v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = lasm_js_value_handle(v_value_1994_);
lean_dec(v_value_1994_);
v___x_2006_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2001_, v___x_2002_, v___x_2004_, v___x_2005_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v_a_2007_; uint8_t v___x_2008_; 
v_a_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_2006_, 1);
v___x_2008_ = lean_string_validate_utf8(v_a_2007_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
lean_dec(v_a_2007_);
v___x_2009_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_2010_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2009_);
v___y_1970_ = v_a_1993_;
v_received_1971_ = v___x_2010_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2011_; 
v___x_2011_ = lean_string_from_utf8_unchecked(v_a_2007_);
v___y_1970_ = v_a_1993_;
v_received_1971_ = v___x_2011_;
goto v___jp_1969_;
}
}
else
{
lean_object* v___x_2012_; 
lean_dec_ref_known(v___x_2006_, 1);
v___x_2012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v___y_1970_ = v_a_1993_;
v_received_1971_ = v___x_2012_;
goto v___jp_1969_;
}
}
}
}
}
else
{
v___y_1990_ = v_a_1993_;
goto v___jp_1989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___boxed(lean_object* v_context_2038_, lean_object* v_d_2039_, lean_object* v_a_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(v_context_2038_, v_d_2039_);
lean_dec_ref(v_context_2038_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(lean_object* v_b_2042_, lean_object* v_args_2043_, uint8_t v_await_2044_){
_start:
{
uint64_t v___y_2047_; uint64_t v___y_2048_; uint64_t v___x_2083_; uint64_t v___y_2085_; 
v___x_2083_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2044_ == 0)
{
uint64_t v___x_2090_; 
v___x_2090_ = 0ULL;
v___y_2085_ = v___x_2090_;
goto v___jp_2084_;
}
else
{
uint64_t v___x_2091_; 
v___x_2091_ = 2ULL;
v___y_2085_ = v___x_2091_;
goto v___jp_2084_;
}
v___jp_2046_:
{
uint64_t v_flags_2049_; uint32_t v___x_2050_; lean_object* v___x_2051_; uint32_t v___x_2052_; lean_object* v___x_2053_; 
v_flags_2049_ = lean_uint64_lor(v___y_2047_, v___y_2048_);
v___x_2050_ = 214;
v___x_2051_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2042_, v_args_2043_);
v___x_2052_ = 0;
v___x_2053_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2050_, v_flags_2049_, v___x_2051_, v___x_2052_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2054_; lean_object* v___x_2055_; 
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_a_2054_);
lean_dec_ref_known(v___x_2053_, 1);
v___x_2055_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2054_);
lean_dec(v_a_2054_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v_a_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
lean_inc(v_a_2056_);
lean_dec_ref_known(v___x_2055_, 1);
v___x_2057_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2042_);
v___x_2058_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(v___x_2057_, v_a_2056_);
lean_dec_ref(v___x_2057_);
return v___x_2058_;
}
else
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
v_a_2059_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2055_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2055_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
else
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2082_; 
v_a_2067_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2069_ = v___x_2053_;
v_isShared_2070_ = v_isSharedCheck_2082_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2053_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2082_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2080_; 
v___x_2071_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2072_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2042_);
v___x_2073_ = lean_string_append(v___x_2071_, v___x_2072_);
lean_dec_ref(v___x_2072_);
v___x_2074_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2075_ = lean_string_append(v___x_2073_, v___x_2074_);
v___x_2076_ = lean_io_error_to_string(v_a_2067_);
v___x_2077_ = lean_string_append(v___x_2075_, v___x_2076_);
lean_dec_ref(v___x_2076_);
v___x_2078_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 0, v___x_2078_);
v___x_2080_ = v___x_2069_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___x_2078_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
v___jp_2084_:
{
uint8_t v_construct_2086_; uint64_t v___x_2087_; 
v_construct_2086_ = lean_ctor_get_uint8(v_b_2042_, sizeof(void*)*4);
v___x_2087_ = lean_uint64_lor(v___x_2083_, v___y_2085_);
if (v_construct_2086_ == 0)
{
uint64_t v___x_2088_; 
v___x_2088_ = 0ULL;
v___y_2047_ = v___x_2087_;
v___y_2048_ = v___x_2088_;
goto v___jp_2046_;
}
else
{
uint64_t v___x_2089_; 
v___x_2089_ = 4ULL;
v___y_2047_ = v___x_2087_;
v___y_2048_ = v___x_2089_;
goto v___jp_2046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0___boxed(lean_object* v_b_2092_, lean_object* v_args_2093_, lean_object* v_await_2094_, lean_object* v_a_2095_){
_start:
{
uint8_t v_await_boxed_2096_; lean_object* v_res_2097_; 
v_await_boxed_2096_ = lean_unbox(v_await_2094_);
v_res_2097_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(v_b_2092_, v_args_2093_, v_await_boxed_2096_);
lean_dec_ref(v_b_2092_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(size_t v_sz_2098_, size_t v_i_2099_, lean_object* v_bs_2100_){
_start:
{
uint8_t v___x_2102_; 
v___x_2102_ = lean_usize_dec_lt(v_i_2099_, v_sz_2098_);
if (v___x_2102_ == 0)
{
lean_object* v___x_2103_; 
v___x_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2103_, 0, v_bs_2100_);
return v___x_2103_;
}
else
{
lean_object* v_v_2104_; lean_object* v___x_2105_; lean_object* v_bs_x27_2106_; lean_object* v___x_2107_; 
v_v_2104_ = lean_array_uget(v_bs_2100_, v_i_2099_);
v___x_2105_ = lean_unsigned_to_nat(0u);
v_bs_x27_2106_ = lean_array_uset(v_bs_2100_, v_i_2099_, v___x_2105_);
v___x_2107_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_v_2104_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; size_t v___x_2109_; size_t v___x_2110_; lean_object* v___x_2111_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2107_, 1);
v___x_2109_ = ((size_t)1ULL);
v___x_2110_ = lean_usize_add(v_i_2099_, v___x_2109_);
v___x_2111_ = lean_array_uset(v_bs_x27_2106_, v_i_2099_, v_a_2108_);
v_i_2099_ = v___x_2110_;
v_bs_2100_ = v___x_2111_;
goto _start;
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
lean_dec_ref(v_bs_x27_2106_);
v_a_2113_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2107_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2107_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1___boxed(lean_object* v_sz_2121_, lean_object* v_i_2122_, lean_object* v_bs_2123_, lean_object* v___y_2124_){
_start:
{
size_t v_sz_boxed_2125_; size_t v_i_boxed_2126_; lean_object* v_res_2127_; 
v_sz_boxed_2125_ = lean_unbox_usize(v_sz_2121_);
lean_dec(v_sz_2121_);
v_i_boxed_2126_ = lean_unbox_usize(v_i_2122_);
lean_dec(v_i_2122_);
v_res_2127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(v_sz_boxed_2125_, v_i_boxed_2126_, v_bs_2123_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections(lean_object* v_moduleObject_2136_, lean_object* v_sectionName_2137_){
_start:
{
uint8_t v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2139_ = 0;
v___x_2140_ = lean_unsigned_to_nat(2u);
v___x_2141_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__2));
v___x_2142_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2143_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2143_, 0, v_moduleObject_2136_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v___x_2144_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2144_, 0, v_sectionName_2137_);
v___x_2145_ = lean_mk_empty_array_with_capacity(v___x_2140_);
v___x_2146_ = lean_array_push(v___x_2145_, v___x_2143_);
v___x_2147_ = lean_array_push(v___x_2146_, v___x_2144_);
v___x_2148_ = l_Lasm_JS_Web_Support_args(v___x_2147_);
v___x_2149_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(v___x_2141_, v___x_2148_, v___x_2139_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; size_t v_sz_2151_; size_t v___x_2152_; lean_object* v___x_2153_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2150_);
lean_dec_ref_known(v___x_2149_, 1);
v_sz_2151_ = lean_array_size(v_a_2150_);
v___x_2152_ = ((size_t)0ULL);
v___x_2153_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(v_sz_2151_, v___x_2152_, v_a_2150_);
return v___x_2153_;
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
v_a_2154_ = lean_ctor_get(v___x_2149_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2149_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2149_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections___boxed(lean_object* v_moduleObject_2162_, lean_object* v_sectionName_2163_, lean_object* v_a_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lasm_JS_Web_WebAssembly_Module_customSections(v_moduleObject_2162_, v_sectionName_2163_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(lean_object* v_context_2166_, lean_object* v_d_2167_){
_start:
{
lean_object* v_received_2170_; 
if (lean_obj_tag(v_d_2167_) == 9)
{
lean_object* v_value_2184_; lean_object* v___x_2185_; 
v_value_2184_ = lean_ctor_get(v_d_2167_, 0);
lean_inc(v_value_2184_);
lean_dec_ref_known(v_d_2167_, 2);
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_value_2184_);
return v___x_2185_;
}
else
{
if (lean_obj_tag(v_d_2167_) == 9)
{
lean_object* v_value_2186_; lean_object* v_description_2187_; lean_object* v___x_2188_; uint8_t v___x_2189_; 
v_value_2186_ = lean_ctor_get(v_d_2167_, 0);
v_description_2187_ = lean_ctor_get(v_d_2167_, 1);
v___x_2188_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2189_ = lean_string_dec_eq(v_description_2187_, v___x_2188_);
if (v___x_2189_ == 0)
{
goto v___jp_2182_;
}
else
{
uint32_t v___x_2190_; uint64_t v___x_2191_; lean_object* v___x_2192_; uint32_t v___x_2193_; lean_object* v___x_2194_; 
lean_inc_n(v_value_2186_, 2);
lean_dec_ref_known(v_d_2167_, 2);
v___x_2190_ = 206;
v___x_2191_ = 0ULL;
v___x_2192_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2192_, 0, v_value_2186_);
lean_ctor_set(v___x_2192_, 1, v___x_2188_);
v___x_2193_ = lasm_js_value_handle(v_value_2186_);
lean_dec(v_value_2186_);
v___x_2194_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2190_, v___x_2191_, v___x_2192_, v___x_2193_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; uint8_t v___x_2196_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
lean_dec_ref_known(v___x_2194_, 1);
v___x_2196_ = lean_string_validate_utf8(v_a_2195_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
lean_dec(v_a_2195_);
v___x_2197_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_2198_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2197_);
v_received_2170_ = v___x_2198_;
goto v___jp_2169_;
}
else
{
lean_object* v___x_2199_; 
v___x_2199_ = lean_string_from_utf8_unchecked(v_a_2195_);
v_received_2170_ = v___x_2199_;
goto v___jp_2169_;
}
}
else
{
lean_object* v___x_2200_; 
lean_dec_ref_known(v___x_2194_, 1);
v___x_2200_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_2170_ = v___x_2200_;
goto v___jp_2169_;
}
}
}
else
{
goto v___jp_2182_;
}
}
v___jp_2169_:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2171_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2172_ = lean_string_append(v___x_2171_, v_context_2166_);
v___x_2173_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2174_ = lean_string_append(v___x_2172_, v___x_2173_);
v___x_2175_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInstance___closed__0));
v___x_2176_ = lean_string_append(v___x_2174_, v___x_2175_);
v___x_2177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2178_ = lean_string_append(v___x_2176_, v___x_2177_);
v___x_2179_ = lean_string_append(v___x_2178_, v_received_2170_);
lean_dec_ref(v_received_2170_);
v___x_2180_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
v___x_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
return v___x_2181_;
}
v___jp_2182_:
{
lean_object* v___x_2183_; 
v___x_2183_ = l_Lasm_JS_Data_describe(v_d_2167_);
v_received_2170_ = v___x_2183_;
goto v___jp_2169_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0___boxed(lean_object* v_context_2201_, lean_object* v_d_2202_, lean_object* v_a_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(v_context_2201_, v_d_2202_);
lean_dec_ref(v_context_2201_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(lean_object* v_b_2205_, lean_object* v_args_2206_, uint8_t v_await_2207_){
_start:
{
uint64_t v___y_2210_; uint64_t v___y_2211_; uint64_t v___x_2246_; uint64_t v___y_2248_; 
v___x_2246_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2207_ == 0)
{
uint64_t v___x_2253_; 
v___x_2253_ = 0ULL;
v___y_2248_ = v___x_2253_;
goto v___jp_2247_;
}
else
{
uint64_t v___x_2254_; 
v___x_2254_ = 2ULL;
v___y_2248_ = v___x_2254_;
goto v___jp_2247_;
}
v___jp_2209_:
{
uint64_t v_flags_2212_; uint32_t v___x_2213_; lean_object* v___x_2214_; uint32_t v___x_2215_; lean_object* v___x_2216_; 
v_flags_2212_ = lean_uint64_lor(v___y_2210_, v___y_2211_);
v___x_2213_ = 214;
v___x_2214_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2205_, v_args_2206_);
v___x_2215_ = 0;
v___x_2216_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2213_, v_flags_2212_, v___x_2214_, v___x_2215_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2218_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2217_);
lean_dec_ref_known(v___x_2216_, 1);
v___x_2218_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2217_);
lean_dec(v_a_2217_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
lean_inc(v_a_2219_);
lean_dec_ref_known(v___x_2218_, 1);
v___x_2220_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2205_);
v___x_2221_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(v___x_2220_, v_a_2219_);
lean_dec_ref(v___x_2220_);
return v___x_2221_;
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
v_a_2222_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2218_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2218_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2245_; 
v_a_2230_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2232_ = v___x_2216_;
v_isShared_2233_ = v_isSharedCheck_2245_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2216_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2245_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2243_; 
v___x_2234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2205_);
v___x_2236_ = lean_string_append(v___x_2234_, v___x_2235_);
lean_dec_ref(v___x_2235_);
v___x_2237_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2238_ = lean_string_append(v___x_2236_, v___x_2237_);
v___x_2239_ = lean_io_error_to_string(v_a_2230_);
v___x_2240_ = lean_string_append(v___x_2238_, v___x_2239_);
lean_dec_ref(v___x_2239_);
v___x_2241_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2241_);
v___x_2243_ = v___x_2232_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v___x_2241_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
}
v___jp_2247_:
{
uint8_t v_construct_2249_; uint64_t v___x_2250_; 
v_construct_2249_ = lean_ctor_get_uint8(v_b_2205_, sizeof(void*)*4);
v___x_2250_ = lean_uint64_lor(v___x_2246_, v___y_2248_);
if (v_construct_2249_ == 0)
{
uint64_t v___x_2251_; 
v___x_2251_ = 0ULL;
v___y_2210_ = v___x_2250_;
v___y_2211_ = v___x_2251_;
goto v___jp_2209_;
}
else
{
uint64_t v___x_2252_; 
v___x_2252_ = 4ULL;
v___y_2210_ = v___x_2250_;
v___y_2211_ = v___x_2252_;
goto v___jp_2209_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0___boxed(lean_object* v_b_2255_, lean_object* v_args_2256_, lean_object* v_await_2257_, lean_object* v_a_2258_){
_start:
{
uint8_t v_await_boxed_2259_; lean_object* v_res_2260_; 
v_await_boxed_2259_ = lean_unbox(v_await_2257_);
v_res_2260_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(v_b_2255_, v_args_2256_, v_await_boxed_2259_);
lean_dec_ref(v_b_2255_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new(lean_object* v_module_2269_, lean_object* v_importObject_2270_){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; lean_object* v___x_2281_; 
v___x_2272_ = lean_unsigned_to_nat(2u);
v___x_2273_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Instance_new___closed__2));
v___x_2274_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2275_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2275_, 0, v_module_2269_);
lean_ctor_set(v___x_2275_, 1, v___x_2274_);
v___x_2276_ = lean_mk_empty_array_with_capacity(v___x_2272_);
v___x_2277_ = lean_array_push(v___x_2276_, v___x_2275_);
v___x_2278_ = lean_array_push(v___x_2277_, v_importObject_2270_);
v___x_2279_ = l_Lasm_JS_Web_Support_args(v___x_2278_);
v___x_2280_ = 0;
v___x_2281_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(v___x_2273_, v___x_2279_, v___x_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new___boxed(lean_object* v_module_2282_, lean_object* v_importObject_2283_, lean_object* v_a_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Lasm_JS_Web_WebAssembly_Instance_new(v_module_2282_, v_importObject_2283_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports(lean_object* v_self_2287_){
_start:
{
lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Instance_exports___closed__0));
v___x_2290_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2287_, v___x_2289_);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports___boxed(lean_object* v_self_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lasm_JS_Web_WebAssembly_Instance_exports(v_self_2291_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(lean_object* v_x_2294_){
_start:
{
if (lean_obj_tag(v_x_2294_) == 0)
{
lean_object* v___x_2295_; 
v___x_2295_ = lean_box(0);
return v___x_2295_;
}
else
{
lean_object* v_val_2296_; uint8_t v___x_2297_; 
v_val_2296_ = lean_ctor_get(v_x_2294_, 0);
v___x_2297_ = lean_unbox(v_val_2296_);
if (v___x_2297_ == 0)
{
lean_object* v___x_2298_; 
v___x_2298_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
return v___x_2298_;
}
else
{
lean_object* v___x_2299_; 
v___x_2299_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
return v___x_2299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0___boxed(lean_object* v_x_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_x_2300_);
lean_dec(v_x_2300_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(lean_object* v_context_2302_, lean_object* v_d_2303_){
_start:
{
lean_object* v_received_2306_; 
if (lean_obj_tag(v_d_2303_) == 9)
{
lean_object* v_value_2320_; lean_object* v___x_2321_; 
v_value_2320_ = lean_ctor_get(v_d_2303_, 0);
lean_inc(v_value_2320_);
lean_dec_ref_known(v_d_2303_, 2);
v___x_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2321_, 0, v_value_2320_);
return v___x_2321_;
}
else
{
if (lean_obj_tag(v_d_2303_) == 9)
{
lean_object* v_value_2322_; lean_object* v_description_2323_; lean_object* v___x_2324_; uint8_t v___x_2325_; 
v_value_2322_ = lean_ctor_get(v_d_2303_, 0);
v_description_2323_ = lean_ctor_get(v_d_2303_, 1);
v___x_2324_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2325_ = lean_string_dec_eq(v_description_2323_, v___x_2324_);
if (v___x_2325_ == 0)
{
goto v___jp_2318_;
}
else
{
uint32_t v___x_2326_; uint64_t v___x_2327_; lean_object* v___x_2328_; uint32_t v___x_2329_; lean_object* v___x_2330_; 
lean_inc_n(v_value_2322_, 2);
lean_dec_ref_known(v_d_2303_, 2);
v___x_2326_ = 206;
v___x_2327_ = 0ULL;
v___x_2328_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2328_, 0, v_value_2322_);
lean_ctor_set(v___x_2328_, 1, v___x_2324_);
v___x_2329_ = lasm_js_value_handle(v_value_2322_);
lean_dec(v_value_2322_);
v___x_2330_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2326_, v___x_2327_, v___x_2328_, v___x_2329_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; uint8_t v___x_2332_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
v___x_2332_ = lean_string_validate_utf8(v_a_2331_);
if (v___x_2332_ == 0)
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
lean_dec(v_a_2331_);
v___x_2333_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_2334_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2333_);
v_received_2306_ = v___x_2334_;
goto v___jp_2305_;
}
else
{
lean_object* v___x_2335_; 
v___x_2335_ = lean_string_from_utf8_unchecked(v_a_2331_);
v_received_2306_ = v___x_2335_;
goto v___jp_2305_;
}
}
else
{
lean_object* v___x_2336_; 
lean_dec_ref_known(v___x_2330_, 1);
v___x_2336_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_2306_ = v___x_2336_;
goto v___jp_2305_;
}
}
}
else
{
goto v___jp_2318_;
}
}
v___jp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2308_ = lean_string_append(v___x_2307_, v_context_2302_);
v___x_2309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2310_ = lean_string_append(v___x_2308_, v___x_2309_);
v___x_2311_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSMemory___closed__0));
v___x_2312_ = lean_string_append(v___x_2310_, v___x_2311_);
v___x_2313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2314_ = lean_string_append(v___x_2312_, v___x_2313_);
v___x_2315_ = lean_string_append(v___x_2314_, v_received_2306_);
lean_dec_ref(v_received_2306_);
v___x_2316_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
v___x_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
return v___x_2317_;
}
v___jp_2318_:
{
lean_object* v___x_2319_; 
v___x_2319_ = l_Lasm_JS_Data_describe(v_d_2303_);
v_received_2306_ = v___x_2319_;
goto v___jp_2305_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1___boxed(lean_object* v_context_2337_, lean_object* v_d_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(v_context_2337_, v_d_2338_);
lean_dec_ref(v_context_2337_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(lean_object* v_b_2341_, lean_object* v_args_2342_, uint8_t v_await_2343_){
_start:
{
uint64_t v___y_2346_; uint64_t v___y_2347_; uint64_t v___x_2382_; uint64_t v___y_2384_; 
v___x_2382_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2343_ == 0)
{
uint64_t v___x_2389_; 
v___x_2389_ = 0ULL;
v___y_2384_ = v___x_2389_;
goto v___jp_2383_;
}
else
{
uint64_t v___x_2390_; 
v___x_2390_ = 2ULL;
v___y_2384_ = v___x_2390_;
goto v___jp_2383_;
}
v___jp_2345_:
{
uint64_t v_flags_2348_; uint32_t v___x_2349_; lean_object* v___x_2350_; uint32_t v___x_2351_; lean_object* v___x_2352_; 
v_flags_2348_ = lean_uint64_lor(v___y_2346_, v___y_2347_);
v___x_2349_ = 214;
v___x_2350_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2341_, v_args_2342_);
v___x_2351_ = 0;
v___x_2352_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2349_, v_flags_2348_, v___x_2350_, v___x_2351_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; lean_object* v___x_2354_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2352_, 1);
v___x_2354_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2353_);
lean_dec(v_a_2353_);
if (lean_obj_tag(v___x_2354_) == 0)
{
lean_object* v_a_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; 
v_a_2355_ = lean_ctor_get(v___x_2354_, 0);
lean_inc(v_a_2355_);
lean_dec_ref_known(v___x_2354_, 1);
v___x_2356_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2341_);
v___x_2357_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(v___x_2356_, v_a_2355_);
lean_dec_ref(v___x_2356_);
return v___x_2357_;
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
v_a_2358_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2354_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2354_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
else
{
lean_object* v_a_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2381_; 
v_a_2366_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2368_ = v___x_2352_;
v_isShared_2369_ = v_isSharedCheck_2381_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_a_2366_);
lean_dec(v___x_2352_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2381_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2379_; 
v___x_2370_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2371_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2341_);
v___x_2372_ = lean_string_append(v___x_2370_, v___x_2371_);
lean_dec_ref(v___x_2371_);
v___x_2373_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2374_ = lean_string_append(v___x_2372_, v___x_2373_);
v___x_2375_ = lean_io_error_to_string(v_a_2366_);
v___x_2376_ = lean_string_append(v___x_2374_, v___x_2375_);
lean_dec_ref(v___x_2375_);
v___x_2377_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 0, v___x_2377_);
v___x_2379_ = v___x_2368_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v___x_2377_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
}
v___jp_2383_:
{
uint8_t v_construct_2385_; uint64_t v___x_2386_; 
v_construct_2385_ = lean_ctor_get_uint8(v_b_2341_, sizeof(void*)*4);
v___x_2386_ = lean_uint64_lor(v___x_2382_, v___y_2384_);
if (v_construct_2385_ == 0)
{
uint64_t v___x_2387_; 
v___x_2387_ = 0ULL;
v___y_2346_ = v___x_2386_;
v___y_2347_ = v___x_2387_;
goto v___jp_2345_;
}
else
{
uint64_t v___x_2388_; 
v___x_2388_ = 4ULL;
v___y_2346_ = v___x_2386_;
v___y_2347_ = v___x_2388_;
goto v___jp_2345_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1___boxed(lean_object* v_b_2391_, lean_object* v_args_2392_, lean_object* v_await_2393_, lean_object* v_a_2394_){
_start:
{
uint8_t v_await_boxed_2395_; lean_object* v_res_2396_; 
v_await_boxed_2395_ = lean_unbox(v_await_2393_);
v_res_2396_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(v_b_2391_, v_args_2392_, v_await_boxed_2395_);
lean_dec_ref(v_b_2391_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new(lean_object* v_descriptor_2405_){
_start:
{
lean_object* v_initial_2407_; lean_object* v_maximum_2408_; lean_object* v_address_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; lean_object* v___x_2429_; 
v_initial_2407_ = lean_ctor_get(v_descriptor_2405_, 0);
v_maximum_2408_ = lean_ctor_get(v_descriptor_2405_, 1);
v_address_2409_ = lean_ctor_get(v_descriptor_2405_, 2);
v___x_2410_ = lean_unsigned_to_nat(1u);
v___x_2411_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_new___closed__2));
v___x_2412_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0));
lean_inc(v_initial_2407_);
v___x_2413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2412_);
lean_ctor_set(v___x_2413_, 1, v_initial_2407_);
v___x_2414_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1));
lean_inc(v_maximum_2408_);
v___x_2415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
lean_ctor_set(v___x_2415_, 1, v_maximum_2408_);
v___x_2416_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2));
v___x_2417_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_address_2409_);
v___x_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2416_);
lean_ctor_set(v___x_2418_, 1, v___x_2417_);
v___x_2419_ = lean_unsigned_to_nat(3u);
v___x_2420_ = lean_mk_empty_array_with_capacity(v___x_2419_);
v___x_2421_ = lean_array_push(v___x_2420_, v___x_2413_);
v___x_2422_ = lean_array_push(v___x_2421_, v___x_2415_);
v___x_2423_ = lean_array_push(v___x_2422_, v___x_2418_);
v___x_2424_ = l_Lasm_JS_Web_Support_fields(v___x_2423_);
lean_dec_ref(v___x_2423_);
v___x_2425_ = lean_mk_empty_array_with_capacity(v___x_2410_);
v___x_2426_ = lean_array_push(v___x_2425_, v___x_2424_);
v___x_2427_ = l_Lasm_JS_Web_Support_args(v___x_2426_);
v___x_2428_ = 0;
v___x_2429_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(v___x_2411_, v___x_2427_, v___x_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new___boxed(lean_object* v_descriptor_2430_, lean_object* v_a_2431_){
_start:
{
lean_object* v_res_2432_; 
v_res_2432_ = l_Lasm_JS_Web_WebAssembly_Memory_new(v_descriptor_2430_);
lean_dec_ref(v_descriptor_2430_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer(lean_object* v_self_2434_){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2436_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_buffer___closed__0));
v___x_2437_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2434_, v___x_2436_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2439_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v___x_2437_, 1);
v___x_2439_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2438_);
return v___x_2439_;
}
else
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2447_; 
v_a_2440_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2442_ = v___x_2437_;
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v___x_2437_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer___boxed(lean_object* v_self_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lasm_JS_Web_WebAssembly_Memory_buffer(v_self_2448_);
return v_res_2450_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2451_; uint8_t v___x_2452_; uint64_t v___x_2453_; 
v___x_2451_ = 8ULL;
v___x_2452_ = 0;
v___x_2453_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0_spec__0(v___x_2452_, v___x_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(lean_object* v_o_2454_, lean_object* v_name_2455_, lean_object* v_args_2456_){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint64_t v___x_2461_; lean_object* v___x_2462_; 
v___x_2458_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2459_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2459_, 0, v_o_2454_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
v___x_2460_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2460_, 0, v_name_2455_);
v___x_2461_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0);
v___x_2462_ = l_Lasm_JS_Value_invokeRaw(v___x_2459_, v___x_2460_, v_args_2456_, v___x_2461_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v_a_2463_; lean_object* v___x_2464_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
lean_inc(v_a_2463_);
lean_dec_ref_known(v___x_2462_, 1);
v___x_2464_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_2463_);
lean_dec(v_a_2463_);
return v___x_2464_;
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
v_a_2465_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2462_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2462_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2465_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___boxed(lean_object* v_o_2473_, lean_object* v_name_2474_, lean_object* v_args_2475_, lean_object* v_a_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_o_2473_, v_name_2474_, v_args_2475_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow(lean_object* v_self_2479_, lean_object* v_delta_2480_){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2482_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0));
v___x_2483_ = lean_unsigned_to_nat(1u);
v___x_2484_ = lean_mk_empty_array_with_capacity(v___x_2483_);
v___x_2485_ = lean_array_push(v___x_2484_, v_delta_2480_);
v___x_2486_ = l_Lasm_JS_Web_Support_args(v___x_2485_);
v___x_2487_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2479_, v___x_2482_, v___x_2486_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow___boxed(lean_object* v_self_2488_, lean_object* v_delta_2489_, lean_object* v_a_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Lasm_JS_Web_WebAssembly_Memory_grow(v_self_2488_, v_delta_2489_);
return v_res_2491_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__1));
v___x_2496_ = l_Lasm_JS_Web_Support_args(v___x_2495_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer(lean_object* v_self_2497_){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2499_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__0));
v___x_2500_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_2501_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2497_, v___x_2499_, v___x_2500_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v___x_2503_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
lean_inc(v_a_2502_);
lean_dec_ref_known(v___x_2501_, 1);
v___x_2503_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2502_);
return v___x_2503_;
}
else
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2511_; 
v_a_2504_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2511_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2511_ == 0)
{
v___x_2506_ = v___x_2501_;
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___x_2501_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v___x_2509_; 
if (v_isShared_2507_ == 0)
{
v___x_2509_ = v___x_2506_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v_a_2504_);
v___x_2509_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
return v___x_2509_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___boxed(lean_object* v_self_2512_, lean_object* v_a_2513_){
_start:
{
lean_object* v_res_2514_; 
v_res_2514_ = l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer(v_self_2512_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer(lean_object* v_self_2516_){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2518_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___closed__0));
v___x_2519_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_2520_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2516_, v___x_2518_, v___x_2519_);
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_object* v_a_2521_; lean_object* v___x_2522_; 
v_a_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_a_2521_);
lean_dec_ref_known(v___x_2520_, 1);
v___x_2522_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2521_);
return v___x_2522_;
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
v_a_2523_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2520_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2520_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___boxed(lean_object* v_self_2531_, lean_object* v_a_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer(v_self_2531_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(lean_object* v_context_2534_, lean_object* v_d_2535_){
_start:
{
lean_object* v_received_2538_; 
if (lean_obj_tag(v_d_2535_) == 9)
{
lean_object* v_value_2552_; lean_object* v___x_2553_; 
v_value_2552_ = lean_ctor_get(v_d_2535_, 0);
lean_inc(v_value_2552_);
lean_dec_ref_known(v_d_2535_, 2);
v___x_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2553_, 0, v_value_2552_);
return v___x_2553_;
}
else
{
if (lean_obj_tag(v_d_2535_) == 9)
{
lean_object* v_value_2554_; lean_object* v_description_2555_; lean_object* v___x_2556_; uint8_t v___x_2557_; 
v_value_2554_ = lean_ctor_get(v_d_2535_, 0);
v_description_2555_ = lean_ctor_get(v_d_2535_, 1);
v___x_2556_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2557_ = lean_string_dec_eq(v_description_2555_, v___x_2556_);
if (v___x_2557_ == 0)
{
goto v___jp_2550_;
}
else
{
uint32_t v___x_2558_; uint64_t v___x_2559_; lean_object* v___x_2560_; uint32_t v___x_2561_; lean_object* v___x_2562_; 
lean_inc_n(v_value_2554_, 2);
lean_dec_ref_known(v_d_2535_, 2);
v___x_2558_ = 206;
v___x_2559_ = 0ULL;
v___x_2560_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2560_, 0, v_value_2554_);
lean_ctor_set(v___x_2560_, 1, v___x_2556_);
v___x_2561_ = lasm_js_value_handle(v_value_2554_);
lean_dec(v_value_2554_);
v___x_2562_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2558_, v___x_2559_, v___x_2560_, v___x_2561_);
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_a_2563_; uint8_t v___x_2564_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc(v_a_2563_);
lean_dec_ref_known(v___x_2562_, 1);
v___x_2564_ = lean_string_validate_utf8(v_a_2563_);
if (v___x_2564_ == 0)
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
lean_dec(v_a_2563_);
v___x_2565_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_2566_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2565_);
v_received_2538_ = v___x_2566_;
goto v___jp_2537_;
}
else
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_string_from_utf8_unchecked(v_a_2563_);
v_received_2538_ = v___x_2567_;
goto v___jp_2537_;
}
}
else
{
lean_object* v___x_2568_; 
lean_dec_ref_known(v___x_2562_, 1);
v___x_2568_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_2538_ = v___x_2568_;
goto v___jp_2537_;
}
}
}
else
{
goto v___jp_2550_;
}
}
v___jp_2537_:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2540_ = lean_string_append(v___x_2539_, v_context_2534_);
v___x_2541_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2542_ = lean_string_append(v___x_2540_, v___x_2541_);
v___x_2543_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTable___closed__0));
v___x_2544_ = lean_string_append(v___x_2542_, v___x_2543_);
v___x_2545_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2546_ = lean_string_append(v___x_2544_, v___x_2545_);
v___x_2547_ = lean_string_append(v___x_2546_, v_received_2538_);
lean_dec_ref(v_received_2538_);
v___x_2548_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2547_);
v___x_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
return v___x_2549_;
}
v___jp_2550_:
{
lean_object* v___x_2551_; 
v___x_2551_ = l_Lasm_JS_Data_describe(v_d_2535_);
v_received_2538_ = v___x_2551_;
goto v___jp_2537_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0___boxed(lean_object* v_context_2569_, lean_object* v_d_2570_, lean_object* v_a_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(v_context_2569_, v_d_2570_);
lean_dec_ref(v_context_2569_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(lean_object* v_b_2573_, lean_object* v_args_2574_, uint8_t v_await_2575_){
_start:
{
uint64_t v___y_2578_; uint64_t v___y_2579_; uint64_t v___x_2614_; uint64_t v___y_2616_; 
v___x_2614_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2575_ == 0)
{
uint64_t v___x_2621_; 
v___x_2621_ = 0ULL;
v___y_2616_ = v___x_2621_;
goto v___jp_2615_;
}
else
{
uint64_t v___x_2622_; 
v___x_2622_ = 2ULL;
v___y_2616_ = v___x_2622_;
goto v___jp_2615_;
}
v___jp_2577_:
{
uint64_t v_flags_2580_; uint32_t v___x_2581_; lean_object* v___x_2582_; uint32_t v___x_2583_; lean_object* v___x_2584_; 
v_flags_2580_ = lean_uint64_lor(v___y_2578_, v___y_2579_);
v___x_2581_ = 214;
v___x_2582_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2573_, v_args_2574_);
v___x_2583_ = 0;
v___x_2584_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2581_, v_flags_2580_, v___x_2582_, v___x_2583_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; lean_object* v___x_2586_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2585_);
lean_dec_ref_known(v___x_2584_, 1);
v___x_2586_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2585_);
lean_dec(v_a_2585_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_a_2587_);
lean_dec_ref_known(v___x_2586_, 1);
v___x_2588_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2573_);
v___x_2589_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(v___x_2588_, v_a_2587_);
lean_dec_ref(v___x_2588_);
return v___x_2589_;
}
else
{
lean_object* v_a_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2597_; 
v_a_2590_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2597_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2592_ = v___x_2586_;
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_a_2590_);
lean_dec(v___x_2586_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2595_; 
if (v_isShared_2593_ == 0)
{
v___x_2595_ = v___x_2592_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2590_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
}
else
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2613_; 
v_a_2598_ = lean_ctor_get(v___x_2584_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2600_ = v___x_2584_;
v_isShared_2601_ = v_isSharedCheck_2613_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2584_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2613_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2611_; 
v___x_2602_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2603_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2573_);
v___x_2604_ = lean_string_append(v___x_2602_, v___x_2603_);
lean_dec_ref(v___x_2603_);
v___x_2605_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2606_ = lean_string_append(v___x_2604_, v___x_2605_);
v___x_2607_ = lean_io_error_to_string(v_a_2598_);
v___x_2608_ = lean_string_append(v___x_2606_, v___x_2607_);
lean_dec_ref(v___x_2607_);
v___x_2609_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2608_);
if (v_isShared_2601_ == 0)
{
lean_ctor_set(v___x_2600_, 0, v___x_2609_);
v___x_2611_ = v___x_2600_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v___x_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
v___jp_2615_:
{
uint8_t v_construct_2617_; uint64_t v___x_2618_; 
v_construct_2617_ = lean_ctor_get_uint8(v_b_2573_, sizeof(void*)*4);
v___x_2618_ = lean_uint64_lor(v___x_2614_, v___y_2616_);
if (v_construct_2617_ == 0)
{
uint64_t v___x_2619_; 
v___x_2619_ = 0ULL;
v___y_2578_ = v___x_2618_;
v___y_2579_ = v___x_2619_;
goto v___jp_2577_;
}
else
{
uint64_t v___x_2620_; 
v___x_2620_ = 4ULL;
v___y_2578_ = v___x_2618_;
v___y_2579_ = v___x_2620_;
goto v___jp_2577_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0___boxed(lean_object* v_b_2623_, lean_object* v_args_2624_, lean_object* v_await_2625_, lean_object* v_a_2626_){
_start:
{
uint8_t v_await_boxed_2627_; lean_object* v_res_2628_; 
v_await_boxed_2627_ = lean_unbox(v_await_2625_);
v_res_2628_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(v_b_2623_, v_args_2624_, v_await_boxed_2627_);
lean_dec_ref(v_b_2623_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_new(lean_object* v_descriptor_2637_, lean_object* v_value_2638_){
_start:
{
uint8_t v_element_2640_; lean_object* v_initial_2641_; lean_object* v_maximum_2642_; lean_object* v_address_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___y_2648_; 
v_element_2640_ = lean_ctor_get_uint8(v_descriptor_2637_, sizeof(void*)*3);
v_initial_2641_ = lean_ctor_get(v_descriptor_2637_, 0);
v_maximum_2642_ = lean_ctor_get(v_descriptor_2637_, 1);
v_address_2643_ = lean_ctor_get(v_descriptor_2637_, 2);
v___x_2644_ = lean_unsigned_to_nat(2u);
v___x_2645_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_new___closed__2));
v___x_2646_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableDescriptor___lam__0___closed__0));
if (v_element_2640_ == 0)
{
lean_object* v___x_2670_; 
v___x_2670_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_2648_ = v___x_2670_;
goto v___jp_2647_;
}
else
{
lean_object* v___x_2671_; 
v___x_2671_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_2648_ = v___x_2671_;
goto v___jp_2647_;
}
v___jp_2647_:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; uint8_t v___x_2668_; lean_object* v___x_2669_; 
lean_inc(v___y_2648_);
v___x_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2646_);
lean_ctor_set(v___x_2649_, 1, v___y_2648_);
v___x_2650_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0));
lean_inc(v_initial_2641_);
v___x_2651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
lean_ctor_set(v___x_2651_, 1, v_initial_2641_);
v___x_2652_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1));
lean_inc(v_maximum_2642_);
v___x_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2652_);
lean_ctor_set(v___x_2653_, 1, v_maximum_2642_);
v___x_2654_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2));
v___x_2655_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_address_2643_);
v___x_2656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2654_);
lean_ctor_set(v___x_2656_, 1, v___x_2655_);
v___x_2657_ = lean_unsigned_to_nat(4u);
v___x_2658_ = lean_mk_empty_array_with_capacity(v___x_2657_);
v___x_2659_ = lean_array_push(v___x_2658_, v___x_2649_);
v___x_2660_ = lean_array_push(v___x_2659_, v___x_2651_);
v___x_2661_ = lean_array_push(v___x_2660_, v___x_2653_);
v___x_2662_ = lean_array_push(v___x_2661_, v___x_2656_);
v___x_2663_ = l_Lasm_JS_Web_Support_fields(v___x_2662_);
lean_dec_ref(v___x_2662_);
v___x_2664_ = lean_mk_empty_array_with_capacity(v___x_2644_);
v___x_2665_ = lean_array_push(v___x_2664_, v___x_2663_);
v___x_2666_ = lean_array_push(v___x_2665_, v_value_2638_);
v___x_2667_ = l_Lasm_JS_Web_Support_args(v___x_2666_);
v___x_2668_ = 0;
v___x_2669_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(v___x_2645_, v___x_2667_, v___x_2668_);
return v___x_2669_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_new___boxed(lean_object* v_descriptor_2672_, lean_object* v_value_2673_, lean_object* v_a_2674_){
_start:
{
lean_object* v_res_2675_; 
v_res_2675_ = l_Lasm_JS_Web_WebAssembly_Table_new(v_descriptor_2672_, v_value_2673_);
lean_dec_ref(v_descriptor_2672_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_length(lean_object* v_self_2677_){
_start:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2679_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_length___closed__0));
v___x_2680_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2677_, v___x_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_length___boxed(lean_object* v_self_2681_, lean_object* v_a_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l_Lasm_JS_Web_WebAssembly_Table_length(v_self_2681_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_grow(lean_object* v_self_2684_, lean_object* v_delta_2685_, lean_object* v_value_2686_){
_start:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2688_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0));
v___x_2689_ = lean_unsigned_to_nat(2u);
v___x_2690_ = lean_mk_empty_array_with_capacity(v___x_2689_);
v___x_2691_ = lean_array_push(v___x_2690_, v_delta_2685_);
v___x_2692_ = lean_array_push(v___x_2691_, v_value_2686_);
v___x_2693_ = l_Lasm_JS_Web_Support_args(v___x_2692_);
v___x_2694_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2684_, v___x_2688_, v___x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_grow___boxed(lean_object* v_self_2695_, lean_object* v_delta_2696_, lean_object* v_value_2697_, lean_object* v_a_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lasm_JS_Web_WebAssembly_Table_grow(v_self_2695_, v_delta_2696_, v_value_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_get(lean_object* v_self_2701_, lean_object* v_index_2702_){
_start:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2704_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_get___closed__0));
v___x_2705_ = lean_unsigned_to_nat(1u);
v___x_2706_ = lean_mk_empty_array_with_capacity(v___x_2705_);
v___x_2707_ = lean_array_push(v___x_2706_, v_index_2702_);
v___x_2708_ = l_Lasm_JS_Web_Support_args(v___x_2707_);
v___x_2709_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2701_, v___x_2704_, v___x_2708_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_get___boxed(lean_object* v_self_2710_, lean_object* v_index_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Lasm_JS_Web_WebAssembly_Table_get(v_self_2710_, v_index_2711_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_set(lean_object* v_self_2715_, lean_object* v_index_2716_, lean_object* v_value_2717_){
_start:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_set___closed__0));
v___x_2720_ = lean_unsigned_to_nat(2u);
v___x_2721_ = lean_mk_empty_array_with_capacity(v___x_2720_);
v___x_2722_ = lean_array_push(v___x_2721_, v_index_2716_);
v___x_2723_ = lean_array_push(v___x_2722_, v_value_2717_);
v___x_2724_ = l_Lasm_JS_Web_Support_args(v___x_2723_);
v___x_2725_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2715_, v___x_2719_, v___x_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_set___boxed(lean_object* v_self_2726_, lean_object* v_index_2727_, lean_object* v_value_2728_, lean_object* v_a_2729_){
_start:
{
lean_object* v_res_2730_; 
v_res_2730_ = l_Lasm_JS_Web_WebAssembly_Table_set(v_self_2726_, v_index_2727_, v_value_2728_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(lean_object* v_context_2731_, lean_object* v_d_2732_){
_start:
{
lean_object* v_received_2735_; 
if (lean_obj_tag(v_d_2732_) == 9)
{
lean_object* v_value_2749_; lean_object* v___x_2750_; 
v_value_2749_ = lean_ctor_get(v_d_2732_, 0);
lean_inc(v_value_2749_);
lean_dec_ref_known(v_d_2732_, 2);
v___x_2750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2750_, 0, v_value_2749_);
return v___x_2750_;
}
else
{
if (lean_obj_tag(v_d_2732_) == 9)
{
lean_object* v_value_2751_; lean_object* v_description_2752_; lean_object* v___x_2753_; uint8_t v___x_2754_; 
v_value_2751_ = lean_ctor_get(v_d_2732_, 0);
v_description_2752_ = lean_ctor_get(v_d_2732_, 1);
v___x_2753_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2754_ = lean_string_dec_eq(v_description_2752_, v___x_2753_);
if (v___x_2754_ == 0)
{
goto v___jp_2747_;
}
else
{
uint32_t v___x_2755_; uint64_t v___x_2756_; lean_object* v___x_2757_; uint32_t v___x_2758_; lean_object* v___x_2759_; 
lean_inc_n(v_value_2751_, 2);
lean_dec_ref_known(v_d_2732_, 2);
v___x_2755_ = 206;
v___x_2756_ = 0ULL;
v___x_2757_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2757_, 0, v_value_2751_);
lean_ctor_set(v___x_2757_, 1, v___x_2753_);
v___x_2758_ = lasm_js_value_handle(v_value_2751_);
lean_dec(v_value_2751_);
v___x_2759_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2755_, v___x_2756_, v___x_2757_, v___x_2758_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v_a_2760_; uint8_t v___x_2761_; 
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
lean_inc(v_a_2760_);
lean_dec_ref_known(v___x_2759_, 1);
v___x_2761_ = lean_string_validate_utf8(v_a_2760_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; lean_object* v___x_2763_; 
lean_dec(v_a_2760_);
v___x_2762_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_2763_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2762_);
v_received_2735_ = v___x_2763_;
goto v___jp_2734_;
}
else
{
lean_object* v___x_2764_; 
v___x_2764_ = lean_string_from_utf8_unchecked(v_a_2760_);
v_received_2735_ = v___x_2764_;
goto v___jp_2734_;
}
}
else
{
lean_object* v___x_2765_; 
lean_dec_ref_known(v___x_2759_, 1);
v___x_2765_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_2735_ = v___x_2765_;
goto v___jp_2734_;
}
}
}
else
{
goto v___jp_2747_;
}
}
v___jp_2734_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2737_ = lean_string_append(v___x_2736_, v_context_2731_);
v___x_2738_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2739_ = lean_string_append(v___x_2737_, v___x_2738_);
v___x_2740_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSGlobal___closed__0));
v___x_2741_ = lean_string_append(v___x_2739_, v___x_2740_);
v___x_2742_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2743_ = lean_string_append(v___x_2741_, v___x_2742_);
v___x_2744_ = lean_string_append(v___x_2743_, v_received_2735_);
lean_dec_ref(v_received_2735_);
v___x_2745_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2744_);
v___x_2746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2745_);
return v___x_2746_;
}
v___jp_2747_:
{
lean_object* v___x_2748_; 
v___x_2748_ = l_Lasm_JS_Data_describe(v_d_2732_);
v_received_2735_ = v___x_2748_;
goto v___jp_2734_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0___boxed(lean_object* v_context_2766_, lean_object* v_d_2767_, lean_object* v_a_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(v_context_2766_, v_d_2767_);
lean_dec_ref(v_context_2766_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(lean_object* v_b_2770_, lean_object* v_args_2771_, uint8_t v_await_2772_){
_start:
{
uint64_t v___y_2775_; uint64_t v___y_2776_; uint64_t v___x_2811_; uint64_t v___y_2813_; 
v___x_2811_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2772_ == 0)
{
uint64_t v___x_2818_; 
v___x_2818_ = 0ULL;
v___y_2813_ = v___x_2818_;
goto v___jp_2812_;
}
else
{
uint64_t v___x_2819_; 
v___x_2819_ = 2ULL;
v___y_2813_ = v___x_2819_;
goto v___jp_2812_;
}
v___jp_2774_:
{
uint64_t v_flags_2777_; uint32_t v___x_2778_; lean_object* v___x_2779_; uint32_t v___x_2780_; lean_object* v___x_2781_; 
v_flags_2777_ = lean_uint64_lor(v___y_2775_, v___y_2776_);
v___x_2778_ = 214;
v___x_2779_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2770_, v_args_2771_);
v___x_2780_ = 0;
v___x_2781_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2778_, v_flags_2777_, v___x_2779_, v___x_2780_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2783_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v___x_2781_, 1);
v___x_2783_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2782_);
lean_dec(v_a_2782_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_a_2784_);
lean_dec_ref_known(v___x_2783_, 1);
v___x_2785_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2770_);
v___x_2786_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(v___x_2785_, v_a_2784_);
lean_dec_ref(v___x_2785_);
return v___x_2786_;
}
else
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
v_a_2787_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2783_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2783_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2810_; 
v_a_2795_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2797_ = v___x_2781_;
v_isShared_2798_ = v_isSharedCheck_2810_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2781_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2810_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2808_; 
v___x_2799_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2800_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2770_);
v___x_2801_ = lean_string_append(v___x_2799_, v___x_2800_);
lean_dec_ref(v___x_2800_);
v___x_2802_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2803_ = lean_string_append(v___x_2801_, v___x_2802_);
v___x_2804_ = lean_io_error_to_string(v_a_2795_);
v___x_2805_ = lean_string_append(v___x_2803_, v___x_2804_);
lean_dec_ref(v___x_2804_);
v___x_2806_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2806_);
v___x_2808_ = v___x_2797_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2806_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
}
v___jp_2812_:
{
uint8_t v_construct_2814_; uint64_t v___x_2815_; 
v_construct_2814_ = lean_ctor_get_uint8(v_b_2770_, sizeof(void*)*4);
v___x_2815_ = lean_uint64_lor(v___x_2811_, v___y_2813_);
if (v_construct_2814_ == 0)
{
uint64_t v___x_2816_; 
v___x_2816_ = 0ULL;
v___y_2775_ = v___x_2815_;
v___y_2776_ = v___x_2816_;
goto v___jp_2774_;
}
else
{
uint64_t v___x_2817_; 
v___x_2817_ = 4ULL;
v___y_2775_ = v___x_2815_;
v___y_2776_ = v___x_2817_;
goto v___jp_2774_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0___boxed(lean_object* v_b_2820_, lean_object* v_args_2821_, lean_object* v_await_2822_, lean_object* v_a_2823_){
_start:
{
uint8_t v_await_boxed_2824_; lean_object* v_res_2825_; 
v_await_boxed_2824_ = lean_unbox(v_await_2822_);
v_res_2825_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(v_b_2820_, v_args_2821_, v_await_boxed_2824_);
lean_dec_ref(v_b_2820_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_new(lean_object* v_descriptor_2834_, lean_object* v_v_2835_){
_start:
{
uint8_t v_value_2837_; lean_object* v_mutable_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___y_2843_; 
v_value_2837_ = lean_ctor_get_uint8(v_descriptor_2834_, sizeof(void*)*1);
v_mutable_2838_ = lean_ctor_get(v_descriptor_2834_, 0);
v___x_2839_ = lean_unsigned_to_nat(2u);
v___x_2840_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Global_new___closed__2));
v___x_2841_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
switch(v_value_2837_)
{
case 0:
{
lean_object* v___x_2857_; 
v___x_2857_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
v___y_2843_ = v___x_2857_;
goto v___jp_2842_;
}
case 1:
{
lean_object* v___x_2858_; 
v___x_2858_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
v___y_2843_ = v___x_2858_;
goto v___jp_2842_;
}
case 2:
{
lean_object* v___x_2859_; 
v___x_2859_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1));
v___y_2843_ = v___x_2859_;
goto v___jp_2842_;
}
case 3:
{
lean_object* v___x_2860_; 
v___x_2860_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3));
v___y_2843_ = v___x_2860_;
goto v___jp_2842_;
}
case 4:
{
lean_object* v___x_2861_; 
v___x_2861_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5));
v___y_2843_ = v___x_2861_;
goto v___jp_2842_;
}
case 5:
{
lean_object* v___x_2862_; 
v___x_2862_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_2843_ = v___x_2862_;
goto v___jp_2842_;
}
default: 
{
lean_object* v___x_2863_; 
v___x_2863_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_2843_ = v___x_2863_;
goto v___jp_2842_;
}
}
v___jp_2842_:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; uint8_t v___x_2855_; lean_object* v___x_2856_; 
lean_inc(v___y_2843_);
v___x_2844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2841_);
lean_ctor_set(v___x_2844_, 1, v___y_2843_);
v___x_2845_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__1));
v___x_2846_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_mutable_2838_);
v___x_2847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2847_, 0, v___x_2845_);
lean_ctor_set(v___x_2847_, 1, v___x_2846_);
v___x_2848_ = lean_mk_empty_array_with_capacity(v___x_2839_);
lean_inc_ref(v___x_2848_);
v___x_2849_ = lean_array_push(v___x_2848_, v___x_2844_);
v___x_2850_ = lean_array_push(v___x_2849_, v___x_2847_);
v___x_2851_ = l_Lasm_JS_Web_Support_fields(v___x_2850_);
lean_dec_ref(v___x_2850_);
v___x_2852_ = lean_array_push(v___x_2848_, v___x_2851_);
v___x_2853_ = lean_array_push(v___x_2852_, v_v_2835_);
v___x_2854_ = l_Lasm_JS_Web_Support_args(v___x_2853_);
v___x_2855_ = 0;
v___x_2856_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(v___x_2840_, v___x_2854_, v___x_2855_);
return v___x_2856_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_new___boxed(lean_object* v_descriptor_2864_, lean_object* v_v_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Lasm_JS_Web_WebAssembly_Global_new(v_descriptor_2864_, v_v_2865_);
lean_dec_ref(v_descriptor_2864_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_value(lean_object* v_self_2868_){
_start:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2870_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
v___x_2871_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2868_, v___x_2870_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_value___boxed(lean_object* v_self_2872_, lean_object* v_a_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l_Lasm_JS_Web_WebAssembly_Global_value(v_self_2872_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_setValue(lean_object* v_self_2875_, lean_object* v_value_2876_){
_start:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2878_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
v___x_2879_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_2875_, v___x_2878_, v_value_2876_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_setValue___boxed(lean_object* v_self_2880_, lean_object* v_value_2881_, lean_object* v_a_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Lasm_JS_Web_WebAssembly_Global_setValue(v_self_2880_, v_value_2881_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf(lean_object* v_self_2885_){
_start:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2887_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Global_valueOf___closed__0));
v___x_2888_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_2889_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2885_, v___x_2887_, v___x_2888_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf___boxed(lean_object* v_self_2890_, lean_object* v_a_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l_Lasm_JS_Web_WebAssembly_Global_valueOf(v_self_2890_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(lean_object* v_context_2893_, lean_object* v_d_2894_){
_start:
{
lean_object* v_received_2897_; 
if (lean_obj_tag(v_d_2894_) == 9)
{
lean_object* v_value_2911_; lean_object* v___x_2912_; 
v_value_2911_ = lean_ctor_get(v_d_2894_, 0);
lean_inc(v_value_2911_);
lean_dec_ref_known(v_d_2894_, 2);
v___x_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2912_, 0, v_value_2911_);
return v___x_2912_;
}
else
{
if (lean_obj_tag(v_d_2894_) == 9)
{
lean_object* v_value_2913_; lean_object* v_description_2914_; lean_object* v___x_2915_; uint8_t v___x_2916_; 
v_value_2913_ = lean_ctor_get(v_d_2894_, 0);
v_description_2914_ = lean_ctor_get(v_d_2894_, 1);
v___x_2915_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2916_ = lean_string_dec_eq(v_description_2914_, v___x_2915_);
if (v___x_2916_ == 0)
{
goto v___jp_2909_;
}
else
{
uint32_t v___x_2917_; uint64_t v___x_2918_; lean_object* v___x_2919_; uint32_t v___x_2920_; lean_object* v___x_2921_; 
lean_inc_n(v_value_2913_, 2);
lean_dec_ref_known(v_d_2894_, 2);
v___x_2917_ = 206;
v___x_2918_ = 0ULL;
v___x_2919_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2919_, 0, v_value_2913_);
lean_ctor_set(v___x_2919_, 1, v___x_2915_);
v___x_2920_ = lasm_js_value_handle(v_value_2913_);
lean_dec(v_value_2913_);
v___x_2921_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2917_, v___x_2918_, v___x_2919_, v___x_2920_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; uint8_t v___x_2923_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2921_, 1);
v___x_2923_ = lean_string_validate_utf8(v_a_2922_);
if (v___x_2923_ == 0)
{
lean_object* v___x_2924_; lean_object* v___x_2925_; 
lean_dec(v_a_2922_);
v___x_2924_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_2925_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2924_);
v_received_2897_ = v___x_2925_;
goto v___jp_2896_;
}
else
{
lean_object* v___x_2926_; 
v___x_2926_ = lean_string_from_utf8_unchecked(v_a_2922_);
v_received_2897_ = v___x_2926_;
goto v___jp_2896_;
}
}
else
{
lean_object* v___x_2927_; 
lean_dec_ref_known(v___x_2921_, 1);
v___x_2927_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_2897_ = v___x_2927_;
goto v___jp_2896_;
}
}
}
else
{
goto v___jp_2909_;
}
}
v___jp_2896_:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2898_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2899_ = lean_string_append(v___x_2898_, v_context_2893_);
v___x_2900_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2901_ = lean_string_append(v___x_2899_, v___x_2900_);
v___x_2902_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTag___closed__0));
v___x_2903_ = lean_string_append(v___x_2901_, v___x_2902_);
v___x_2904_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2905_ = lean_string_append(v___x_2903_, v___x_2904_);
v___x_2906_ = lean_string_append(v___x_2905_, v_received_2897_);
lean_dec_ref(v_received_2897_);
v___x_2907_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
v___x_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
return v___x_2908_;
}
v___jp_2909_:
{
lean_object* v___x_2910_; 
v___x_2910_ = l_Lasm_JS_Data_describe(v_d_2894_);
v_received_2897_ = v___x_2910_;
goto v___jp_2896_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1___boxed(lean_object* v_context_2928_, lean_object* v_d_2929_, lean_object* v_a_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(v_context_2928_, v_d_2929_);
lean_dec_ref(v_context_2928_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(lean_object* v_b_2932_, lean_object* v_args_2933_, uint8_t v_await_2934_){
_start:
{
uint64_t v___y_2937_; uint64_t v___y_2938_; uint64_t v___x_2973_; uint64_t v___y_2975_; 
v___x_2973_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2934_ == 0)
{
uint64_t v___x_2980_; 
v___x_2980_ = 0ULL;
v___y_2975_ = v___x_2980_;
goto v___jp_2974_;
}
else
{
uint64_t v___x_2981_; 
v___x_2981_ = 2ULL;
v___y_2975_ = v___x_2981_;
goto v___jp_2974_;
}
v___jp_2936_:
{
uint64_t v_flags_2939_; uint32_t v___x_2940_; lean_object* v___x_2941_; uint32_t v___x_2942_; lean_object* v___x_2943_; 
v_flags_2939_ = lean_uint64_lor(v___y_2937_, v___y_2938_);
v___x_2940_ = 214;
v___x_2941_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2932_, v_args_2933_);
v___x_2942_ = 0;
v___x_2943_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2940_, v_flags_2939_, v___x_2941_, v___x_2942_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; lean_object* v___x_2945_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
lean_inc(v_a_2944_);
lean_dec_ref_known(v___x_2943_, 1);
v___x_2945_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2944_);
lean_dec(v_a_2944_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc(v_a_2946_);
lean_dec_ref_known(v___x_2945_, 1);
v___x_2947_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2932_);
v___x_2948_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(v___x_2947_, v_a_2946_);
lean_dec_ref(v___x_2947_);
return v___x_2948_;
}
else
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2956_; 
v_a_2949_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2951_ = v___x_2945_;
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v___x_2945_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v_a_2949_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
}
}
}
}
else
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2972_; 
v_a_2957_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2959_ = v___x_2943_;
v_isShared_2960_ = v_isSharedCheck_2972_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2943_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2972_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2970_; 
v___x_2961_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2962_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2932_);
v___x_2963_ = lean_string_append(v___x_2961_, v___x_2962_);
lean_dec_ref(v___x_2962_);
v___x_2964_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2965_ = lean_string_append(v___x_2963_, v___x_2964_);
v___x_2966_ = lean_io_error_to_string(v_a_2957_);
v___x_2967_ = lean_string_append(v___x_2965_, v___x_2966_);
lean_dec_ref(v___x_2966_);
v___x_2968_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 0, v___x_2968_);
v___x_2970_ = v___x_2959_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2968_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
v___jp_2974_:
{
uint8_t v_construct_2976_; uint64_t v___x_2977_; 
v_construct_2976_ = lean_ctor_get_uint8(v_b_2932_, sizeof(void*)*4);
v___x_2977_ = lean_uint64_lor(v___x_2973_, v___y_2975_);
if (v_construct_2976_ == 0)
{
uint64_t v___x_2978_; 
v___x_2978_ = 0ULL;
v___y_2937_ = v___x_2977_;
v___y_2938_ = v___x_2978_;
goto v___jp_2936_;
}
else
{
uint64_t v___x_2979_; 
v___x_2979_ = 4ULL;
v___y_2937_ = v___x_2977_;
v___y_2938_ = v___x_2979_;
goto v___jp_2936_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1___boxed(lean_object* v_b_2982_, lean_object* v_args_2983_, lean_object* v_await_2984_, lean_object* v_a_2985_){
_start:
{
uint8_t v_await_boxed_2986_; lean_object* v_res_2987_; 
v_await_boxed_2986_ = lean_unbox(v_await_2984_);
v_res_2987_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(v_b_2982_, v_args_2983_, v_await_boxed_2986_);
lean_dec_ref(v_b_2982_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(size_t v_sz_2988_, size_t v_i_2989_, lean_object* v_bs_2990_){
_start:
{
uint8_t v___x_2991_; 
v___x_2991_ = lean_usize_dec_lt(v_i_2989_, v_sz_2988_);
if (v___x_2991_ == 0)
{
return v_bs_2990_;
}
else
{
lean_object* v_v_2992_; lean_object* v___x_2993_; lean_object* v_bs_x27_2994_; lean_object* v___y_2996_; uint8_t v___x_3001_; 
v_v_2992_ = lean_array_uget(v_bs_2990_, v_i_2989_);
v___x_2993_ = lean_unsigned_to_nat(0u);
v_bs_x27_2994_ = lean_array_uset(v_bs_2990_, v_i_2989_, v___x_2993_);
v___x_3001_ = lean_unbox(v_v_2992_);
lean_dec(v_v_2992_);
switch(v___x_3001_)
{
case 0:
{
lean_object* v___x_3002_; 
v___x_3002_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
v___y_2996_ = v___x_3002_;
goto v___jp_2995_;
}
case 1:
{
lean_object* v___x_3003_; 
v___x_3003_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
v___y_2996_ = v___x_3003_;
goto v___jp_2995_;
}
case 2:
{
lean_object* v___x_3004_; 
v___x_3004_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1));
v___y_2996_ = v___x_3004_;
goto v___jp_2995_;
}
case 3:
{
lean_object* v___x_3005_; 
v___x_3005_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3));
v___y_2996_ = v___x_3005_;
goto v___jp_2995_;
}
case 4:
{
lean_object* v___x_3006_; 
v___x_3006_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5));
v___y_2996_ = v___x_3006_;
goto v___jp_2995_;
}
case 5:
{
lean_object* v___x_3007_; 
v___x_3007_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_2996_ = v___x_3007_;
goto v___jp_2995_;
}
default: 
{
lean_object* v___x_3008_; 
v___x_3008_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_2996_ = v___x_3008_;
goto v___jp_2995_;
}
}
v___jp_2995_:
{
size_t v___x_2997_; size_t v___x_2998_; lean_object* v___x_2999_; 
v___x_2997_ = ((size_t)1ULL);
v___x_2998_ = lean_usize_add(v_i_2989_, v___x_2997_);
lean_inc(v___y_2996_);
v___x_2999_ = lean_array_uset(v_bs_x27_2994_, v_i_2989_, v___y_2996_);
v_i_2989_ = v___x_2998_;
v_bs_2990_ = v___x_2999_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0___boxed(lean_object* v_sz_3009_, lean_object* v_i_3010_, lean_object* v_bs_3011_){
_start:
{
size_t v_sz_boxed_3012_; size_t v_i_boxed_3013_; lean_object* v_res_3014_; 
v_sz_boxed_3012_ = lean_unbox_usize(v_sz_3009_);
lean_dec(v_sz_3009_);
v_i_boxed_3013_ = lean_unbox_usize(v_i_3010_);
lean_dec(v_i_3010_);
v_res_3014_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(v_sz_boxed_3012_, v_i_boxed_3013_, v_bs_3011_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new(lean_object* v_type_3023_){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; size_t v_sz_3028_; size_t v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; uint8_t v___x_3038_; lean_object* v___x_3039_; 
v___x_3025_ = lean_unsigned_to_nat(1u);
v___x_3026_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Tag_new___closed__2));
v___x_3027_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTagType___lam__1___closed__0));
v_sz_3028_ = lean_array_size(v_type_3023_);
v___x_3029_ = ((size_t)0ULL);
v___x_3030_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(v_sz_3028_, v___x_3029_, v_type_3023_);
v___x_3031_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3031_, 0, v___x_3030_);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3027_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = lean_mk_empty_array_with_capacity(v___x_3025_);
lean_inc_ref(v___x_3033_);
v___x_3034_ = lean_array_push(v___x_3033_, v___x_3032_);
v___x_3035_ = l_Lasm_JS_Web_Support_fields(v___x_3034_);
lean_dec_ref(v___x_3034_);
v___x_3036_ = lean_array_push(v___x_3033_, v___x_3035_);
v___x_3037_ = l_Lasm_JS_Web_Support_args(v___x_3036_);
v___x_3038_ = 0;
v___x_3039_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(v___x_3026_, v___x_3037_, v___x_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new___boxed(lean_object* v_type_3040_, lean_object* v_a_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l_Lasm_JS_Web_WebAssembly_Tag_new(v_type_3040_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(lean_object* v_x_3043_){
_start:
{
if (lean_obj_tag(v_x_3043_) == 0)
{
lean_object* v___x_3044_; 
v___x_3044_ = lean_box(0);
return v___x_3044_;
}
else
{
lean_object* v_val_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v_val_3045_ = lean_ctor_get(v_x_3043_, 0);
v___x_3046_ = ((lean_object*)(l_Lasm_JS_Web_instToJSExceptionOptions___lam__0___closed__0));
v___x_3047_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_3045_);
v___x_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3046_);
lean_ctor_set(v___x_3048_, 1, v___x_3047_);
v___x_3049_ = lean_unsigned_to_nat(1u);
v___x_3050_ = lean_mk_empty_array_with_capacity(v___x_3049_);
v___x_3051_ = lean_array_push(v___x_3050_, v___x_3048_);
v___x_3052_ = l_Lasm_JS_Web_Support_fields(v___x_3051_);
lean_dec_ref(v___x_3051_);
return v___x_3052_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1___boxed(lean_object* v_x_3053_){
_start:
{
lean_object* v_res_3054_; 
v_res_3054_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(v_x_3053_);
lean_dec(v_x_3053_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(size_t v_sz_3055_, size_t v_i_3056_, lean_object* v_bs_3057_){
_start:
{
uint8_t v___x_3058_; 
v___x_3058_ = lean_usize_dec_lt(v_i_3056_, v_sz_3055_);
if (v___x_3058_ == 0)
{
return v_bs_3057_;
}
else
{
lean_object* v_v_3059_; lean_object* v___x_3060_; lean_object* v_bs_x27_3061_; size_t v___x_3062_; size_t v___x_3063_; lean_object* v___x_3064_; 
v_v_3059_ = lean_array_uget(v_bs_3057_, v_i_3056_);
v___x_3060_ = lean_unsigned_to_nat(0u);
v_bs_x27_3061_ = lean_array_uset(v_bs_3057_, v_i_3056_, v___x_3060_);
v___x_3062_ = ((size_t)1ULL);
v___x_3063_ = lean_usize_add(v_i_3056_, v___x_3062_);
v___x_3064_ = lean_array_uset(v_bs_x27_3061_, v_i_3056_, v_v_3059_);
v_i_3056_ = v___x_3063_;
v_bs_3057_ = v___x_3064_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0___boxed(lean_object* v_sz_3066_, lean_object* v_i_3067_, lean_object* v_bs_3068_){
_start:
{
size_t v_sz_boxed_3069_; size_t v_i_boxed_3070_; lean_object* v_res_3071_; 
v_sz_boxed_3069_ = lean_unbox_usize(v_sz_3066_);
lean_dec(v_sz_3066_);
v_i_boxed_3070_ = lean_unbox_usize(v_i_3067_);
lean_dec(v_i_3067_);
v_res_3071_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(v_sz_boxed_3069_, v_i_boxed_3070_, v_bs_3068_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(lean_object* v_context_3072_, lean_object* v_d_3073_){
_start:
{
lean_object* v_received_3076_; 
if (lean_obj_tag(v_d_3073_) == 9)
{
lean_object* v_value_3090_; lean_object* v___x_3091_; 
v_value_3090_ = lean_ctor_get(v_d_3073_, 0);
lean_inc(v_value_3090_);
lean_dec_ref_known(v_d_3073_, 2);
v___x_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3091_, 0, v_value_3090_);
return v___x_3091_;
}
else
{
if (lean_obj_tag(v_d_3073_) == 9)
{
lean_object* v_value_3092_; lean_object* v_description_3093_; lean_object* v___x_3094_; uint8_t v___x_3095_; 
v_value_3092_ = lean_ctor_get(v_d_3073_, 0);
v_description_3093_ = lean_ctor_get(v_d_3073_, 1);
v___x_3094_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3095_ = lean_string_dec_eq(v_description_3093_, v___x_3094_);
if (v___x_3095_ == 0)
{
goto v___jp_3088_;
}
else
{
uint32_t v___x_3096_; uint64_t v___x_3097_; lean_object* v___x_3098_; uint32_t v___x_3099_; lean_object* v___x_3100_; 
lean_inc_n(v_value_3092_, 2);
lean_dec_ref_known(v_d_3073_, 2);
v___x_3096_ = 206;
v___x_3097_ = 0ULL;
v___x_3098_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3098_, 0, v_value_3092_);
lean_ctor_set(v___x_3098_, 1, v___x_3094_);
v___x_3099_ = lasm_js_value_handle(v_value_3092_);
lean_dec(v_value_3092_);
v___x_3100_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3096_, v___x_3097_, v___x_3098_, v___x_3099_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; uint8_t v___x_3102_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_a_3101_);
lean_dec_ref_known(v___x_3100_, 1);
v___x_3102_ = lean_string_validate_utf8(v_a_3101_);
if (v___x_3102_ == 0)
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
lean_dec(v_a_3101_);
v___x_3103_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_3104_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3103_);
v_received_3076_ = v___x_3104_;
goto v___jp_3075_;
}
else
{
lean_object* v___x_3105_; 
v___x_3105_ = lean_string_from_utf8_unchecked(v_a_3101_);
v_received_3076_ = v___x_3105_;
goto v___jp_3075_;
}
}
else
{
lean_object* v___x_3106_; 
lean_dec_ref_known(v___x_3100_, 1);
v___x_3106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_3076_ = v___x_3106_;
goto v___jp_3075_;
}
}
}
else
{
goto v___jp_3088_;
}
}
v___jp_3075_:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3077_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3078_ = lean_string_append(v___x_3077_, v_context_3072_);
v___x_3079_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3080_ = lean_string_append(v___x_3078_, v___x_3079_);
v___x_3081_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSException___closed__0));
v___x_3082_ = lean_string_append(v___x_3080_, v___x_3081_);
v___x_3083_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3084_ = lean_string_append(v___x_3082_, v___x_3083_);
v___x_3085_ = lean_string_append(v___x_3084_, v_received_3076_);
lean_dec_ref(v_received_3076_);
v___x_3086_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3085_);
v___x_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3086_);
return v___x_3087_;
}
v___jp_3088_:
{
lean_object* v___x_3089_; 
v___x_3089_ = l_Lasm_JS_Data_describe(v_d_3073_);
v_received_3076_ = v___x_3089_;
goto v___jp_3075_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2___boxed(lean_object* v_context_3107_, lean_object* v_d_3108_, lean_object* v_a_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(v_context_3107_, v_d_3108_);
lean_dec_ref(v_context_3107_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(lean_object* v_b_3111_, lean_object* v_args_3112_, uint8_t v_await_3113_){
_start:
{
uint64_t v___y_3116_; uint64_t v___y_3117_; uint64_t v___x_3152_; uint64_t v___y_3154_; 
v___x_3152_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3113_ == 0)
{
uint64_t v___x_3159_; 
v___x_3159_ = 0ULL;
v___y_3154_ = v___x_3159_;
goto v___jp_3153_;
}
else
{
uint64_t v___x_3160_; 
v___x_3160_ = 2ULL;
v___y_3154_ = v___x_3160_;
goto v___jp_3153_;
}
v___jp_3115_:
{
uint64_t v_flags_3118_; uint32_t v___x_3119_; lean_object* v___x_3120_; uint32_t v___x_3121_; lean_object* v___x_3122_; 
v_flags_3118_ = lean_uint64_lor(v___y_3116_, v___y_3117_);
v___x_3119_ = 214;
v___x_3120_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3111_, v_args_3112_);
v___x_3121_ = 0;
v___x_3122_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3119_, v_flags_3118_, v___x_3120_, v___x_3121_);
if (lean_obj_tag(v___x_3122_) == 0)
{
lean_object* v_a_3123_; lean_object* v___x_3124_; 
v_a_3123_ = lean_ctor_get(v___x_3122_, 0);
lean_inc(v_a_3123_);
lean_dec_ref_known(v___x_3122_, 1);
v___x_3124_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3123_);
lean_dec(v_a_3123_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3125_);
lean_dec_ref_known(v___x_3124_, 1);
v___x_3126_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3111_);
v___x_3127_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(v___x_3126_, v_a_3125_);
lean_dec_ref(v___x_3126_);
return v___x_3127_;
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
v_a_3128_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3124_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3124_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3151_; 
v_a_3136_ = lean_ctor_get(v___x_3122_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3122_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3138_ = v___x_3122_;
v_isShared_3139_ = v_isSharedCheck_3151_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3122_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3151_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3149_; 
v___x_3140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3141_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3111_);
v___x_3142_ = lean_string_append(v___x_3140_, v___x_3141_);
lean_dec_ref(v___x_3141_);
v___x_3143_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3144_ = lean_string_append(v___x_3142_, v___x_3143_);
v___x_3145_ = lean_io_error_to_string(v_a_3136_);
v___x_3146_ = lean_string_append(v___x_3144_, v___x_3145_);
lean_dec_ref(v___x_3145_);
v___x_3147_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3146_);
if (v_isShared_3139_ == 0)
{
lean_ctor_set(v___x_3138_, 0, v___x_3147_);
v___x_3149_ = v___x_3138_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
v___jp_3153_:
{
uint8_t v_construct_3155_; uint64_t v___x_3156_; 
v_construct_3155_ = lean_ctor_get_uint8(v_b_3111_, sizeof(void*)*4);
v___x_3156_ = lean_uint64_lor(v___x_3152_, v___y_3154_);
if (v_construct_3155_ == 0)
{
uint64_t v___x_3157_; 
v___x_3157_ = 0ULL;
v___y_3116_ = v___x_3156_;
v___y_3117_ = v___x_3157_;
goto v___jp_3115_;
}
else
{
uint64_t v___x_3158_; 
v___x_3158_ = 4ULL;
v___y_3116_ = v___x_3156_;
v___y_3117_ = v___x_3158_;
goto v___jp_3115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2___boxed(lean_object* v_b_3161_, lean_object* v_args_3162_, lean_object* v_await_3163_, lean_object* v_a_3164_){
_start:
{
uint8_t v_await_boxed_3165_; lean_object* v_res_3166_; 
v_await_boxed_3165_ = lean_unbox(v_await_3163_);
v_res_3166_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(v_b_3161_, v_args_3162_, v_await_boxed_3165_);
lean_dec_ref(v_b_3161_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new(lean_object* v_exceptionTag_3175_, lean_object* v_payload_3176_, lean_object* v_options_3177_){
_start:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; size_t v_sz_3183_; size_t v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; uint8_t v___x_3193_; lean_object* v___x_3194_; 
v___x_3179_ = lean_unsigned_to_nat(3u);
v___x_3180_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_new___closed__2));
v___x_3181_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3182_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3182_, 0, v_exceptionTag_3175_);
lean_ctor_set(v___x_3182_, 1, v___x_3181_);
v_sz_3183_ = lean_array_size(v_payload_3176_);
v___x_3184_ = ((size_t)0ULL);
v___x_3185_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(v_sz_3183_, v___x_3184_, v_payload_3176_);
v___x_3186_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
v___x_3187_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(v_options_3177_);
v___x_3188_ = lean_mk_empty_array_with_capacity(v___x_3179_);
v___x_3189_ = lean_array_push(v___x_3188_, v___x_3182_);
v___x_3190_ = lean_array_push(v___x_3189_, v___x_3186_);
v___x_3191_ = lean_array_push(v___x_3190_, v___x_3187_);
v___x_3192_ = l_Lasm_JS_Web_Support_args(v___x_3191_);
v___x_3193_ = 0;
v___x_3194_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(v___x_3180_, v___x_3192_, v___x_3193_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new___boxed(lean_object* v_exceptionTag_3195_, lean_object* v_payload_3196_, lean_object* v_options_3197_, lean_object* v_a_3198_){
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l_Lasm_JS_Web_WebAssembly_Exception_new(v_exceptionTag_3195_, v_payload_3196_, v_options_3197_);
lean_dec(v_options_3197_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(lean_object* v_o_3201_, lean_object* v_key_3202_){
_start:
{
lean_object* v_k_3204_; lean_object* v___x_3205_; 
v_k_3204_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3204_, 0, v_key_3202_);
lean_inc_ref(v_k_3204_);
v___x_3205_ = l_Lasm_JS_Wire_encodeIO(v_k_3204_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; uint32_t v___x_3207_; uint32_t v___x_3208_; uint64_t v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
lean_dec_ref_known(v___x_3205_, 1);
v___x_3207_ = 203;
v___x_3208_ = lasm_js_value_handle(v_o_3201_);
v___x_3209_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
v___x_3210_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3211_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3211_, 0, v_o_3201_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
v___x_3212_ = lean_unsigned_to_nat(2u);
v___x_3213_ = lean_mk_empty_array_with_capacity(v___x_3212_);
lean_inc_ref(v_k_3204_);
v___x_3214_ = lean_array_push(v___x_3213_, v_k_3204_);
v___x_3215_ = lean_array_push(v___x_3214_, v___x_3211_);
v___x_3216_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3215_);
v___x_3217_ = lasm_js_call(v___x_3207_, v___x_3208_, v___x_3209_, v_a_3206_, v___x_3216_);
lean_dec_ref_known(v___x_3216_, 1);
lean_dec(v_a_3206_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
v___x_3219_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___closed__0));
v___x_3220_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3204_);
v___x_3221_ = lean_string_append(v___x_3219_, v___x_3220_);
lean_dec_ref(v___x_3220_);
v___x_3222_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_3221_, v_a_3218_);
lean_dec(v_a_3218_);
lean_dec_ref(v___x_3221_);
return v___x_3222_;
}
else
{
lean_object* v_a_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3230_; 
lean_dec_ref_known(v_k_3204_, 1);
v_a_3223_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3225_ = v___x_3217_;
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_a_3223_);
lean_dec(v___x_3217_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3228_; 
if (v_isShared_3226_ == 0)
{
v___x_3228_ = v___x_3225_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_a_3223_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3238_; 
lean_dec_ref_known(v_k_3204_, 1);
lean_dec(v_o_3201_);
v_a_3231_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3233_ = v___x_3205_;
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_3205_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3236_; 
if (v_isShared_3234_ == 0)
{
v___x_3236_ = v___x_3233_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3231_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___boxed(lean_object* v_o_3239_, lean_object* v_key_3240_, lean_object* v_a_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(v_o_3239_, v_key_3240_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack(lean_object* v_self_3244_){
_start:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; 
v___x_3246_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_stack___closed__0));
v___x_3247_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(v_self_3244_, v___x_3246_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack___boxed(lean_object* v_self_3248_, lean_object* v_a_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lasm_JS_Web_WebAssembly_Exception_stack(v_self_3248_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg(lean_object* v_self_3252_, lean_object* v_exceptionTag_3253_, lean_object* v_index_3254_){
_start:
{
lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___y_3260_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; uint8_t v___x_3270_; 
v___x_3256_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_getArg___closed__0));
v___x_3257_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3258_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3258_, 0, v_exceptionTag_3253_);
lean_ctor_set(v___x_3258_, 1, v___x_3257_);
v___x_3267_ = lean_nat_to_int(v_index_3254_);
v___x_3268_ = lean_nat_abs(v___x_3267_);
v___x_3269_ = lean_cstr_to_nat("9007199254740991");
v___x_3270_ = lean_nat_dec_le(v___x_3268_, v___x_3269_);
lean_dec(v___x_3268_);
if (v___x_3270_ == 0)
{
lean_object* v___x_3271_; 
v___x_3271_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3267_);
v___y_3260_ = v___x_3271_;
goto v___jp_3259_;
}
else
{
double v___x_3272_; lean_object* v___x_3273_; 
v___x_3272_ = l_Float_ofInt(v___x_3267_);
lean_dec(v___x_3267_);
v___x_3273_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3273_, 0, v___x_3272_);
v___y_3260_ = v___x_3273_;
goto v___jp_3259_;
}
v___jp_3259_:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; 
v___x_3261_ = lean_unsigned_to_nat(2u);
v___x_3262_ = lean_mk_empty_array_with_capacity(v___x_3261_);
v___x_3263_ = lean_array_push(v___x_3262_, v___x_3258_);
v___x_3264_ = lean_array_push(v___x_3263_, v___y_3260_);
v___x_3265_ = l_Lasm_JS_Web_Support_args(v___x_3264_);
v___x_3266_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_3252_, v___x_3256_, v___x_3265_);
return v___x_3266_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg___boxed(lean_object* v_self_3274_, lean_object* v_exceptionTag_3275_, lean_object* v_index_3276_, lean_object* v_a_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l_Lasm_JS_Web_WebAssembly_Exception_getArg(v_self_3274_, v_exceptionTag_3275_, v_index_3276_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is(lean_object* v_self_3280_, lean_object* v_exceptionTag_3281_){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3283_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_is___closed__0));
v___x_3284_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3285_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3285_, 0, v_exceptionTag_3281_);
lean_ctor_set(v___x_3285_, 1, v___x_3284_);
v___x_3286_ = lean_unsigned_to_nat(1u);
v___x_3287_ = lean_mk_empty_array_with_capacity(v___x_3286_);
v___x_3288_ = lean_array_push(v___x_3287_, v___x_3285_);
v___x_3289_ = l_Lasm_JS_Web_Support_args(v___x_3288_);
v___x_3290_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_3280_, v___x_3283_, v___x_3289_);
return v___x_3290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is___boxed(lean_object* v_self_3291_, lean_object* v_exceptionTag_3292_, lean_object* v_a_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l_Lasm_JS_Web_WebAssembly_Exception_is(v_self_3291_, v_exceptionTag_3292_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(lean_object* v_context_3295_, lean_object* v_d_3296_){
_start:
{
lean_object* v_received_3299_; 
if (lean_obj_tag(v_d_3296_) == 9)
{
lean_object* v_value_3313_; lean_object* v___x_3314_; 
v_value_3313_ = lean_ctor_get(v_d_3296_, 0);
lean_inc(v_value_3313_);
lean_dec_ref_known(v_d_3296_, 2);
v___x_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3314_, 0, v_value_3313_);
return v___x_3314_;
}
else
{
if (lean_obj_tag(v_d_3296_) == 9)
{
lean_object* v_value_3315_; lean_object* v_description_3316_; lean_object* v___x_3317_; uint8_t v___x_3318_; 
v_value_3315_ = lean_ctor_get(v_d_3296_, 0);
v_description_3316_ = lean_ctor_get(v_d_3296_, 1);
v___x_3317_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3318_ = lean_string_dec_eq(v_description_3316_, v___x_3317_);
if (v___x_3318_ == 0)
{
goto v___jp_3311_;
}
else
{
uint32_t v___x_3319_; uint64_t v___x_3320_; lean_object* v___x_3321_; uint32_t v___x_3322_; lean_object* v___x_3323_; 
lean_inc_n(v_value_3315_, 2);
lean_dec_ref_known(v_d_3296_, 2);
v___x_3319_ = 206;
v___x_3320_ = 0ULL;
v___x_3321_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3321_, 0, v_value_3315_);
lean_ctor_set(v___x_3321_, 1, v___x_3317_);
v___x_3322_ = lasm_js_value_handle(v_value_3315_);
lean_dec(v_value_3315_);
v___x_3323_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3319_, v___x_3320_, v___x_3321_, v___x_3322_);
if (lean_obj_tag(v___x_3323_) == 0)
{
lean_object* v_a_3324_; uint8_t v___x_3325_; 
v_a_3324_ = lean_ctor_get(v___x_3323_, 0);
lean_inc(v_a_3324_);
lean_dec_ref_known(v___x_3323_, 1);
v___x_3325_ = lean_string_validate_utf8(v_a_3324_);
if (v___x_3325_ == 0)
{
lean_object* v___x_3326_; lean_object* v___x_3327_; 
lean_dec(v_a_3324_);
v___x_3326_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_3327_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3326_);
v_received_3299_ = v___x_3327_;
goto v___jp_3298_;
}
else
{
lean_object* v___x_3328_; 
v___x_3328_ = lean_string_from_utf8_unchecked(v_a_3324_);
v_received_3299_ = v___x_3328_;
goto v___jp_3298_;
}
}
else
{
lean_object* v___x_3329_; 
lean_dec_ref_known(v___x_3323_, 1);
v___x_3329_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_3299_ = v___x_3329_;
goto v___jp_3298_;
}
}
}
else
{
goto v___jp_3311_;
}
}
v___jp_3298_:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3300_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3301_ = lean_string_append(v___x_3300_, v_context_3295_);
v___x_3302_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3303_ = lean_string_append(v___x_3301_, v___x_3302_);
v___x_3304_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompileError___closed__0));
v___x_3305_ = lean_string_append(v___x_3303_, v___x_3304_);
v___x_3306_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3307_ = lean_string_append(v___x_3305_, v___x_3306_);
v___x_3308_ = lean_string_append(v___x_3307_, v_received_3299_);
lean_dec_ref(v_received_3299_);
v___x_3309_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3308_);
v___x_3310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
return v___x_3310_;
}
v___jp_3311_:
{
lean_object* v___x_3312_; 
v___x_3312_ = l_Lasm_JS_Data_describe(v_d_3296_);
v_received_3299_ = v___x_3312_;
goto v___jp_3298_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0___boxed(lean_object* v_context_3330_, lean_object* v_d_3331_, lean_object* v_a_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(v_context_3330_, v_d_3331_);
lean_dec_ref(v_context_3330_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(lean_object* v_b_3334_, lean_object* v_args_3335_, uint8_t v_await_3336_){
_start:
{
uint64_t v___y_3339_; uint64_t v___y_3340_; uint64_t v___x_3375_; uint64_t v___y_3377_; 
v___x_3375_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3336_ == 0)
{
uint64_t v___x_3382_; 
v___x_3382_ = 0ULL;
v___y_3377_ = v___x_3382_;
goto v___jp_3376_;
}
else
{
uint64_t v___x_3383_; 
v___x_3383_ = 2ULL;
v___y_3377_ = v___x_3383_;
goto v___jp_3376_;
}
v___jp_3338_:
{
uint64_t v_flags_3341_; uint32_t v___x_3342_; lean_object* v___x_3343_; uint32_t v___x_3344_; lean_object* v___x_3345_; 
v_flags_3341_ = lean_uint64_lor(v___y_3339_, v___y_3340_);
v___x_3342_ = 214;
v___x_3343_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3334_, v_args_3335_);
v___x_3344_ = 0;
v___x_3345_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3342_, v_flags_3341_, v___x_3343_, v___x_3344_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_a_3346_; lean_object* v___x_3347_; 
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc(v_a_3346_);
lean_dec_ref_known(v___x_3345_, 1);
v___x_3347_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3346_);
lean_dec(v_a_3346_);
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_object* v_a_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; 
v_a_3348_ = lean_ctor_get(v___x_3347_, 0);
lean_inc(v_a_3348_);
lean_dec_ref_known(v___x_3347_, 1);
v___x_3349_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3334_);
v___x_3350_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(v___x_3349_, v_a_3348_);
lean_dec_ref(v___x_3349_);
return v___x_3350_;
}
else
{
lean_object* v_a_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3358_; 
v_a_3351_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3353_ = v___x_3347_;
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_a_3351_);
lean_dec(v___x_3347_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3356_; 
if (v_isShared_3354_ == 0)
{
v___x_3356_ = v___x_3353_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_a_3351_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
}
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3374_; 
v_a_3359_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3374_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3361_ = v___x_3345_;
v_isShared_3362_ = v_isSharedCheck_3374_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3345_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3374_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3372_; 
v___x_3363_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3364_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3334_);
v___x_3365_ = lean_string_append(v___x_3363_, v___x_3364_);
lean_dec_ref(v___x_3364_);
v___x_3366_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3367_ = lean_string_append(v___x_3365_, v___x_3366_);
v___x_3368_ = lean_io_error_to_string(v_a_3359_);
v___x_3369_ = lean_string_append(v___x_3367_, v___x_3368_);
lean_dec_ref(v___x_3368_);
v___x_3370_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
if (v_isShared_3362_ == 0)
{
lean_ctor_set(v___x_3361_, 0, v___x_3370_);
v___x_3372_ = v___x_3361_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v___x_3370_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
}
}
}
}
v___jp_3376_:
{
uint8_t v_construct_3378_; uint64_t v___x_3379_; 
v_construct_3378_ = lean_ctor_get_uint8(v_b_3334_, sizeof(void*)*4);
v___x_3379_ = lean_uint64_lor(v___x_3375_, v___y_3377_);
if (v_construct_3378_ == 0)
{
uint64_t v___x_3380_; 
v___x_3380_ = 0ULL;
v___y_3339_ = v___x_3379_;
v___y_3340_ = v___x_3380_;
goto v___jp_3338_;
}
else
{
uint64_t v___x_3381_; 
v___x_3381_ = 4ULL;
v___y_3339_ = v___x_3379_;
v___y_3340_ = v___x_3381_;
goto v___jp_3338_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0___boxed(lean_object* v_b_3384_, lean_object* v_args_3385_, lean_object* v_await_3386_, lean_object* v_a_3387_){
_start:
{
uint8_t v_await_boxed_3388_; lean_object* v_res_3389_; 
v_await_boxed_3388_ = lean_unbox(v_await_3386_);
v_res_3389_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(v_b_3384_, v_args_3385_, v_await_boxed_3388_);
lean_dec_ref(v_b_3384_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new(lean_object* v_message_3398_){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; uint8_t v___x_3406_; lean_object* v___x_3407_; 
v___x_3400_ = lean_unsigned_to_nat(1u);
v___x_3401_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__2));
v___x_3402_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_3398_);
v___x_3403_ = lean_mk_empty_array_with_capacity(v___x_3400_);
v___x_3404_ = lean_array_push(v___x_3403_, v___x_3402_);
v___x_3405_ = l_Lasm_JS_Web_Support_args(v___x_3404_);
v___x_3406_ = 0;
v___x_3407_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(v___x_3401_, v___x_3405_, v___x_3406_);
return v___x_3407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new___boxed(lean_object* v_message_3408_, lean_object* v_a_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lasm_JS_Web_WebAssembly_CompileError_new(v_message_3408_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_name(lean_object* v_self_3411_){
_start:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_3414_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3411_, v___x_3413_);
return v___x_3414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_name___boxed(lean_object* v_self_3415_, lean_object* v_a_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Lasm_JS_Web_WebAssembly_CompileError_name(v_self_3415_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message(lean_object* v_self_3419_){
_start:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3421_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_3422_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3419_, v___x_3421_);
return v___x_3422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message___boxed(lean_object* v_self_3423_, lean_object* v_a_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_Lasm_JS_Web_WebAssembly_CompileError_message(v_self_3423_);
return v_res_3425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(lean_object* v_context_3426_, lean_object* v_d_3427_){
_start:
{
lean_object* v_received_3430_; 
if (lean_obj_tag(v_d_3427_) == 9)
{
lean_object* v_value_3444_; lean_object* v___x_3445_; 
v_value_3444_ = lean_ctor_get(v_d_3427_, 0);
lean_inc(v_value_3444_);
lean_dec_ref_known(v_d_3427_, 2);
v___x_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3445_, 0, v_value_3444_);
return v___x_3445_;
}
else
{
if (lean_obj_tag(v_d_3427_) == 9)
{
lean_object* v_value_3446_; lean_object* v_description_3447_; lean_object* v___x_3448_; uint8_t v___x_3449_; 
v_value_3446_ = lean_ctor_get(v_d_3427_, 0);
v_description_3447_ = lean_ctor_get(v_d_3427_, 1);
v___x_3448_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3449_ = lean_string_dec_eq(v_description_3447_, v___x_3448_);
if (v___x_3449_ == 0)
{
goto v___jp_3442_;
}
else
{
uint32_t v___x_3450_; uint64_t v___x_3451_; lean_object* v___x_3452_; uint32_t v___x_3453_; lean_object* v___x_3454_; 
lean_inc_n(v_value_3446_, 2);
lean_dec_ref_known(v_d_3427_, 2);
v___x_3450_ = 206;
v___x_3451_ = 0ULL;
v___x_3452_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3452_, 0, v_value_3446_);
lean_ctor_set(v___x_3452_, 1, v___x_3448_);
v___x_3453_ = lasm_js_value_handle(v_value_3446_);
lean_dec(v_value_3446_);
v___x_3454_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3450_, v___x_3451_, v___x_3452_, v___x_3453_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; uint8_t v___x_3456_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_a_3455_);
lean_dec_ref_known(v___x_3454_, 1);
v___x_3456_ = lean_string_validate_utf8(v_a_3455_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; lean_object* v___x_3458_; 
lean_dec(v_a_3455_);
v___x_3457_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_3458_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3457_);
v_received_3430_ = v___x_3458_;
goto v___jp_3429_;
}
else
{
lean_object* v___x_3459_; 
v___x_3459_ = lean_string_from_utf8_unchecked(v_a_3455_);
v_received_3430_ = v___x_3459_;
goto v___jp_3429_;
}
}
else
{
lean_object* v___x_3460_; 
lean_dec_ref_known(v___x_3454_, 1);
v___x_3460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_3430_ = v___x_3460_;
goto v___jp_3429_;
}
}
}
else
{
goto v___jp_3442_;
}
}
v___jp_3429_:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; 
v___x_3431_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3432_ = lean_string_append(v___x_3431_, v_context_3426_);
v___x_3433_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3434_ = lean_string_append(v___x_3432_, v___x_3433_);
v___x_3435_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSLinkError___closed__0));
v___x_3436_ = lean_string_append(v___x_3434_, v___x_3435_);
v___x_3437_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3438_ = lean_string_append(v___x_3436_, v___x_3437_);
v___x_3439_ = lean_string_append(v___x_3438_, v_received_3430_);
lean_dec_ref(v_received_3430_);
v___x_3440_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3439_);
v___x_3441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3440_);
return v___x_3441_;
}
v___jp_3442_:
{
lean_object* v___x_3443_; 
v___x_3443_ = l_Lasm_JS_Data_describe(v_d_3427_);
v_received_3430_ = v___x_3443_;
goto v___jp_3429_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0___boxed(lean_object* v_context_3461_, lean_object* v_d_3462_, lean_object* v_a_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(v_context_3461_, v_d_3462_);
lean_dec_ref(v_context_3461_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(lean_object* v_b_3465_, lean_object* v_args_3466_, uint8_t v_await_3467_){
_start:
{
uint64_t v___y_3470_; uint64_t v___y_3471_; uint64_t v___x_3506_; uint64_t v___y_3508_; 
v___x_3506_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3467_ == 0)
{
uint64_t v___x_3513_; 
v___x_3513_ = 0ULL;
v___y_3508_ = v___x_3513_;
goto v___jp_3507_;
}
else
{
uint64_t v___x_3514_; 
v___x_3514_ = 2ULL;
v___y_3508_ = v___x_3514_;
goto v___jp_3507_;
}
v___jp_3469_:
{
uint64_t v_flags_3472_; uint32_t v___x_3473_; lean_object* v___x_3474_; uint32_t v___x_3475_; lean_object* v___x_3476_; 
v_flags_3472_ = lean_uint64_lor(v___y_3470_, v___y_3471_);
v___x_3473_ = 214;
v___x_3474_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3465_, v_args_3466_);
v___x_3475_ = 0;
v___x_3476_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3473_, v_flags_3472_, v___x_3474_, v___x_3475_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3478_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
lean_dec_ref_known(v___x_3476_, 1);
v___x_3478_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3477_);
lean_dec(v_a_3477_);
if (lean_obj_tag(v___x_3478_) == 0)
{
lean_object* v_a_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; 
v_a_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_a_3479_);
lean_dec_ref_known(v___x_3478_, 1);
v___x_3480_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3465_);
v___x_3481_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(v___x_3480_, v_a_3479_);
lean_dec_ref(v___x_3480_);
return v___x_3481_;
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
v_a_3482_ = lean_ctor_get(v___x_3478_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3478_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3478_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3478_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3505_; 
v_a_3490_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3492_ = v___x_3476_;
v_isShared_3493_ = v_isSharedCheck_3505_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3476_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3505_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3503_; 
v___x_3494_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3495_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3465_);
v___x_3496_ = lean_string_append(v___x_3494_, v___x_3495_);
lean_dec_ref(v___x_3495_);
v___x_3497_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3498_ = lean_string_append(v___x_3496_, v___x_3497_);
v___x_3499_ = lean_io_error_to_string(v_a_3490_);
v___x_3500_ = lean_string_append(v___x_3498_, v___x_3499_);
lean_dec_ref(v___x_3499_);
v___x_3501_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3500_);
if (v_isShared_3493_ == 0)
{
lean_ctor_set(v___x_3492_, 0, v___x_3501_);
v___x_3503_ = v___x_3492_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v___x_3501_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
v___jp_3507_:
{
uint8_t v_construct_3509_; uint64_t v___x_3510_; 
v_construct_3509_ = lean_ctor_get_uint8(v_b_3465_, sizeof(void*)*4);
v___x_3510_ = lean_uint64_lor(v___x_3506_, v___y_3508_);
if (v_construct_3509_ == 0)
{
uint64_t v___x_3511_; 
v___x_3511_ = 0ULL;
v___y_3470_ = v___x_3510_;
v___y_3471_ = v___x_3511_;
goto v___jp_3469_;
}
else
{
uint64_t v___x_3512_; 
v___x_3512_ = 4ULL;
v___y_3470_ = v___x_3510_;
v___y_3471_ = v___x_3512_;
goto v___jp_3469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0___boxed(lean_object* v_b_3515_, lean_object* v_args_3516_, lean_object* v_await_3517_, lean_object* v_a_3518_){
_start:
{
uint8_t v_await_boxed_3519_; lean_object* v_res_3520_; 
v_await_boxed_3519_ = lean_unbox(v_await_3517_);
v_res_3520_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(v_b_3515_, v_args_3516_, v_await_boxed_3519_);
lean_dec_ref(v_b_3515_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new(lean_object* v_message_3529_){
_start:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; uint8_t v___x_3537_; lean_object* v___x_3538_; 
v___x_3531_ = lean_unsigned_to_nat(1u);
v___x_3532_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__2));
v___x_3533_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_3529_);
v___x_3534_ = lean_mk_empty_array_with_capacity(v___x_3531_);
v___x_3535_ = lean_array_push(v___x_3534_, v___x_3533_);
v___x_3536_ = l_Lasm_JS_Web_Support_args(v___x_3535_);
v___x_3537_ = 0;
v___x_3538_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(v___x_3532_, v___x_3536_, v___x_3537_);
return v___x_3538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new___boxed(lean_object* v_message_3539_, lean_object* v_a_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l_Lasm_JS_Web_WebAssembly_LinkError_new(v_message_3539_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_name(lean_object* v_self_3542_){
_start:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3544_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_3545_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3542_, v___x_3544_);
return v___x_3545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_name___boxed(lean_object* v_self_3546_, lean_object* v_a_3547_){
_start:
{
lean_object* v_res_3548_; 
v_res_3548_ = l_Lasm_JS_Web_WebAssembly_LinkError_name(v_self_3546_);
return v_res_3548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_message(lean_object* v_self_3549_){
_start:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3551_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_3552_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3549_, v___x_3551_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_message___boxed(lean_object* v_self_3553_, lean_object* v_a_3554_){
_start:
{
lean_object* v_res_3555_; 
v_res_3555_ = l_Lasm_JS_Web_WebAssembly_LinkError_message(v_self_3553_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(lean_object* v_context_3556_, lean_object* v_d_3557_){
_start:
{
lean_object* v_received_3560_; 
if (lean_obj_tag(v_d_3557_) == 9)
{
lean_object* v_value_3574_; lean_object* v___x_3575_; 
v_value_3574_ = lean_ctor_get(v_d_3557_, 0);
lean_inc(v_value_3574_);
lean_dec_ref_known(v_d_3557_, 2);
v___x_3575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3575_, 0, v_value_3574_);
return v___x_3575_;
}
else
{
if (lean_obj_tag(v_d_3557_) == 9)
{
lean_object* v_value_3576_; lean_object* v_description_3577_; lean_object* v___x_3578_; uint8_t v___x_3579_; 
v_value_3576_ = lean_ctor_get(v_d_3557_, 0);
v_description_3577_ = lean_ctor_get(v_d_3557_, 1);
v___x_3578_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3579_ = lean_string_dec_eq(v_description_3577_, v___x_3578_);
if (v___x_3579_ == 0)
{
goto v___jp_3572_;
}
else
{
uint32_t v___x_3580_; uint64_t v___x_3581_; lean_object* v___x_3582_; uint32_t v___x_3583_; lean_object* v___x_3584_; 
lean_inc_n(v_value_3576_, 2);
lean_dec_ref_known(v_d_3557_, 2);
v___x_3580_ = 206;
v___x_3581_ = 0ULL;
v___x_3582_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3582_, 0, v_value_3576_);
lean_ctor_set(v___x_3582_, 1, v___x_3578_);
v___x_3583_ = lasm_js_value_handle(v_value_3576_);
lean_dec(v_value_3576_);
v___x_3584_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3580_, v___x_3581_, v___x_3582_, v___x_3583_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v_a_3585_; uint8_t v___x_3586_; 
v_a_3585_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_a_3585_);
lean_dec_ref_known(v___x_3584_, 1);
v___x_3586_ = lean_string_validate_utf8(v_a_3585_);
if (v___x_3586_ == 0)
{
lean_object* v___x_3587_; lean_object* v___x_3588_; 
lean_dec(v_a_3585_);
v___x_3587_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_3588_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3587_);
v_received_3560_ = v___x_3588_;
goto v___jp_3559_;
}
else
{
lean_object* v___x_3589_; 
v___x_3589_ = lean_string_from_utf8_unchecked(v_a_3585_);
v_received_3560_ = v___x_3589_;
goto v___jp_3559_;
}
}
else
{
lean_object* v___x_3590_; 
lean_dec_ref_known(v___x_3584_, 1);
v___x_3590_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v_received_3560_ = v___x_3590_;
goto v___jp_3559_;
}
}
}
else
{
goto v___jp_3572_;
}
}
v___jp_3559_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3561_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3562_ = lean_string_append(v___x_3561_, v_context_3556_);
v___x_3563_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3564_ = lean_string_append(v___x_3562_, v___x_3563_);
v___x_3565_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRuntimeError___closed__0));
v___x_3566_ = lean_string_append(v___x_3564_, v___x_3565_);
v___x_3567_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3568_ = lean_string_append(v___x_3566_, v___x_3567_);
v___x_3569_ = lean_string_append(v___x_3568_, v_received_3560_);
lean_dec_ref(v_received_3560_);
v___x_3570_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3569_);
v___x_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3570_);
return v___x_3571_;
}
v___jp_3572_:
{
lean_object* v___x_3573_; 
v___x_3573_ = l_Lasm_JS_Data_describe(v_d_3557_);
v_received_3560_ = v___x_3573_;
goto v___jp_3559_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0___boxed(lean_object* v_context_3591_, lean_object* v_d_3592_, lean_object* v_a_3593_){
_start:
{
lean_object* v_res_3594_; 
v_res_3594_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(v_context_3591_, v_d_3592_);
lean_dec_ref(v_context_3591_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(lean_object* v_b_3595_, lean_object* v_args_3596_, uint8_t v_await_3597_){
_start:
{
uint64_t v___y_3600_; uint64_t v___y_3601_; uint64_t v___x_3636_; uint64_t v___y_3638_; 
v___x_3636_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3597_ == 0)
{
uint64_t v___x_3643_; 
v___x_3643_ = 0ULL;
v___y_3638_ = v___x_3643_;
goto v___jp_3637_;
}
else
{
uint64_t v___x_3644_; 
v___x_3644_ = 2ULL;
v___y_3638_ = v___x_3644_;
goto v___jp_3637_;
}
v___jp_3599_:
{
uint64_t v_flags_3602_; uint32_t v___x_3603_; lean_object* v___x_3604_; uint32_t v___x_3605_; lean_object* v___x_3606_; 
v_flags_3602_ = lean_uint64_lor(v___y_3600_, v___y_3601_);
v___x_3603_ = 214;
v___x_3604_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3595_, v_args_3596_);
v___x_3605_ = 0;
v___x_3606_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3603_, v_flags_3602_, v___x_3604_, v___x_3605_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3608_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_a_3607_);
lean_dec_ref_known(v___x_3606_, 1);
v___x_3608_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3607_);
lean_dec(v_a_3607_);
if (lean_obj_tag(v___x_3608_) == 0)
{
lean_object* v_a_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v_a_3609_ = lean_ctor_get(v___x_3608_, 0);
lean_inc(v_a_3609_);
lean_dec_ref_known(v___x_3608_, 1);
v___x_3610_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3595_);
v___x_3611_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(v___x_3610_, v_a_3609_);
lean_dec_ref(v___x_3610_);
return v___x_3611_;
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3619_; 
v_a_3612_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3614_ = v___x_3608_;
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3608_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v_a_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
else
{
lean_object* v_a_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3635_; 
v_a_3620_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3635_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3635_ == 0)
{
v___x_3622_ = v___x_3606_;
v_isShared_3623_ = v_isSharedCheck_3635_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_a_3620_);
lean_dec(v___x_3606_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3635_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3633_; 
v___x_3624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3625_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3595_);
v___x_3626_ = lean_string_append(v___x_3624_, v___x_3625_);
lean_dec_ref(v___x_3625_);
v___x_3627_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3628_ = lean_string_append(v___x_3626_, v___x_3627_);
v___x_3629_ = lean_io_error_to_string(v_a_3620_);
v___x_3630_ = lean_string_append(v___x_3628_, v___x_3629_);
lean_dec_ref(v___x_3629_);
v___x_3631_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3630_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 0, v___x_3631_);
v___x_3633_ = v___x_3622_;
goto v_reusejp_3632_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v___x_3631_);
v___x_3633_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3632_;
}
v_reusejp_3632_:
{
return v___x_3633_;
}
}
}
}
v___jp_3637_:
{
uint8_t v_construct_3639_; uint64_t v___x_3640_; 
v_construct_3639_ = lean_ctor_get_uint8(v_b_3595_, sizeof(void*)*4);
v___x_3640_ = lean_uint64_lor(v___x_3636_, v___y_3638_);
if (v_construct_3639_ == 0)
{
uint64_t v___x_3641_; 
v___x_3641_ = 0ULL;
v___y_3600_ = v___x_3640_;
v___y_3601_ = v___x_3641_;
goto v___jp_3599_;
}
else
{
uint64_t v___x_3642_; 
v___x_3642_ = 4ULL;
v___y_3600_ = v___x_3640_;
v___y_3601_ = v___x_3642_;
goto v___jp_3599_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0___boxed(lean_object* v_b_3645_, lean_object* v_args_3646_, lean_object* v_await_3647_, lean_object* v_a_3648_){
_start:
{
uint8_t v_await_boxed_3649_; lean_object* v_res_3650_; 
v_await_boxed_3649_ = lean_unbox(v_await_3647_);
v_res_3650_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(v_b_3645_, v_args_3646_, v_await_boxed_3649_);
lean_dec_ref(v_b_3645_);
return v_res_3650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new(lean_object* v_message_3659_){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; uint8_t v___x_3667_; lean_object* v___x_3668_; 
v___x_3661_ = lean_unsigned_to_nat(1u);
v___x_3662_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__2));
v___x_3663_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_3659_);
v___x_3664_ = lean_mk_empty_array_with_capacity(v___x_3661_);
v___x_3665_ = lean_array_push(v___x_3664_, v___x_3663_);
v___x_3666_ = l_Lasm_JS_Web_Support_args(v___x_3665_);
v___x_3667_ = 0;
v___x_3668_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(v___x_3662_, v___x_3666_, v___x_3667_);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new___boxed(lean_object* v_message_3669_, lean_object* v_a_3670_){
_start:
{
lean_object* v_res_3671_; 
v_res_3671_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_new(v_message_3669_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_name(lean_object* v_self_3672_){
_start:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3674_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_3675_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3672_, v___x_3674_);
return v___x_3675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_name___boxed(lean_object* v_self_3676_, lean_object* v_a_3677_){
_start:
{
lean_object* v_res_3678_; 
v_res_3678_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_name(v_self_3676_);
return v_res_3678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_message(lean_object* v_self_3679_){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3681_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_3682_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3679_, v___x_3681_);
return v___x_3682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_message___boxed(lean_object* v_self_3683_, lean_object* v_a_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_message(v_self_3683_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0(lean_object* v_o_3689_, lean_object* v_a_3690_){
_start:
{
if (lean_obj_tag(v_a_3690_) == 0)
{
lean_object* v___x_3692_; lean_object* v___x_3693_; 
lean_dec(v_o_3689_);
v___x_3692_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___closed__1));
v___x_3693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
return v___x_3693_;
}
else
{
lean_object* v_tail_3694_; 
v_tail_3694_ = lean_ctor_get(v_a_3690_, 1);
if (lean_obj_tag(v_tail_3694_) == 0)
{
lean_object* v_head_3695_; lean_object* v___x_3696_; 
v_head_3695_ = lean_ctor_get(v_a_3690_, 0);
lean_inc(v_head_3695_);
lean_dec_ref_known(v_a_3690_, 2);
v___x_3696_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3689_, v_head_3695_);
return v___x_3696_;
}
else
{
lean_object* v_head_3697_; lean_object* v___x_3698_; 
lean_inc(v_tail_3694_);
v_head_3697_ = lean_ctor_get(v_a_3690_, 0);
lean_inc(v_head_3697_);
lean_dec_ref_known(v_a_3690_, 2);
v___x_3698_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3689_, v_head_3697_);
if (lean_obj_tag(v___x_3698_) == 0)
{
lean_object* v_a_3699_; 
v_a_3699_ = lean_ctor_get(v___x_3698_, 0);
lean_inc(v_a_3699_);
lean_dec_ref_known(v___x_3698_, 1);
v_o_3689_ = v_a_3699_;
v_a_3690_ = v_tail_3694_;
goto _start;
}
else
{
lean_dec(v_tail_3694_);
return v___x_3698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0___boxed(lean_object* v_o_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_){
_start:
{
lean_object* v_res_3704_; 
v_res_3704_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0(v_o_3701_, v_a_3702_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0(lean_object* v_path_3705_){
_start:
{
lean_object* v___x_3707_; 
v___x_3707_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3709_; 
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v___x_3707_, 1);
v___x_3709_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0_spec__0(v_a_3708_, v_path_3705_);
return v___x_3709_;
}
else
{
lean_dec(v_path_3705_);
return v___x_3707_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0___boxed(lean_object* v_path_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0(v_path_3710_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_JSTag(){
_start:
{
lean_object* v___x_3722_; lean_object* v___x_3723_; 
v___x_3722_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_JSTag___closed__3));
v___x_3723_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_WebAssembly_JSTag_spec__0(v___x_3722_);
if (lean_obj_tag(v___x_3723_) == 0)
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3731_; 
v_a_3724_ = lean_ctor_get(v___x_3723_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3723_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3726_ = v___x_3723_;
v_isShared_3727_ = v_isSharedCheck_3731_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_a_3724_);
lean_dec(v___x_3723_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3731_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3729_; 
if (v_isShared_3727_ == 0)
{
v___x_3729_ = v___x_3726_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v_a_3724_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
return v___x_3729_;
}
}
}
else
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
v_a_3732_ = lean_ctor_get(v___x_3723_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3723_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3723_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3723_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___boxed(lean_object* v_a_3740_){
_start:
{
lean_object* v_res_3741_; 
v_res_3741_ = l_Lasm_JS_Web_WebAssembly_JSTag();
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_validate(lean_object* v_bytes_3750_, lean_object* v_options_3751_){
_start:
{
uint8_t v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; 
v___x_3753_ = 0;
v___x_3754_ = lean_unsigned_to_nat(2u);
v___x_3755_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_validate___closed__2));
v___x_3756_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3756_, 0, v_bytes_3750_);
v___x_3757_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_3751_);
v___x_3758_ = lean_mk_empty_array_with_capacity(v___x_3754_);
v___x_3759_ = lean_array_push(v___x_3758_, v___x_3756_);
v___x_3760_ = lean_array_push(v___x_3759_, v___x_3757_);
v___x_3761_ = l_Lasm_JS_Web_Support_args(v___x_3760_);
v___x_3762_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v___x_3755_, v___x_3761_, v___x_3753_);
return v___x_3762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_validate___boxed(lean_object* v_bytes_3763_, lean_object* v_options_3764_, lean_object* v_a_3765_){
_start:
{
lean_object* v_res_3766_; 
v_res_3766_ = l_Lasm_JS_Web_WebAssembly_validate(v_bytes_3763_, v_options_3764_);
return v_res_3766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___lam__0(lean_object* v_x_3767_){
_start:
{
if (lean_obj_tag(v_x_3767_) == 0)
{
lean_object* v_a_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3777_; 
v_a_3769_ = lean_ctor_get(v_x_3767_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v_x_3767_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3771_ = v_x_3767_;
v_isShared_3772_ = v_isSharedCheck_3777_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_a_3769_);
lean_dec(v_x_3767_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3777_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3774_; 
if (v_isShared_3772_ == 0)
{
v___x_3774_ = v___x_3771_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_a_3769_);
v___x_3774_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
lean_object* v___x_3775_; 
v___x_3775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3774_);
return v___x_3775_;
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3786_; 
v_a_3778_ = lean_ctor_get(v_x_3767_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v_x_3767_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3780_ = v_x_3767_;
v_isShared_3781_ = v_isSharedCheck_3786_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v_x_3767_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3786_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
lean_object* v___x_3784_; 
v___x_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3783_);
return v___x_3784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___lam__0___boxed(lean_object* v_x_3787_, lean_object* v___y_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lasm_JS_Web_WebAssembly_compile___lam__0(v_x_3787_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile(lean_object* v_bytes_3799_, lean_object* v_options_3800_){
_start:
{
lean_object* v___f_3802_; uint8_t v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___f_3802_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_3803_ = 0;
v___x_3804_ = lean_unsigned_to_nat(2u);
v___x_3805_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__3));
v___x_3806_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3806_, 0, v_bytes_3799_);
v___x_3807_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_3800_);
v___x_3808_ = lean_mk_empty_array_with_capacity(v___x_3804_);
v___x_3809_ = lean_array_push(v___x_3808_, v___x_3806_);
v___x_3810_ = lean_array_push(v___x_3809_, v___x_3807_);
v___x_3811_ = l_Lasm_JS_Web_Support_args(v___x_3810_);
v___x_3812_ = lean_unsigned_to_nat(0u);
v___x_3813_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_3805_, v___x_3811_);
v___x_3814_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3812_, v___x_3803_, v___x_3813_, v___f_3802_);
return v___x_3814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___boxed(lean_object* v_bytes_3815_, lean_object* v_options_3816_, lean_object* v_a_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Lasm_JS_Web_WebAssembly_compile(v_bytes_3815_, v_options_3816_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8(lean_object* v___f_3819_, lean_object* v_x_3820_){
_start:
{
if (lean_obj_tag(v_x_3820_) == 0)
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3830_; 
lean_dec_ref(v___f_3819_);
v_a_3822_ = lean_ctor_get(v_x_3820_, 0);
v_isSharedCheck_3830_ = !lean_is_exclusive(v_x_3820_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3824_ = v_x_3820_;
v_isShared_3825_ = v_isSharedCheck_3830_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v_x_3820_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3830_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3829_; 
v_reuseFailAlloc_3829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3829_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3829_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
lean_object* v___x_3828_; 
v___x_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3828_, 0, v___x_3827_);
return v___x_3828_;
}
}
}
else
{
lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3842_; 
v_isSharedCheck_3842_ = !lean_is_exclusive(v_x_3820_);
if (v_isSharedCheck_3842_ == 0)
{
lean_object* v_unused_3843_; 
v_unused_3843_ = lean_ctor_get(v_x_3820_, 0);
lean_dec(v_unused_3843_);
v___x_3832_ = v_x_3820_;
v_isShared_3833_ = v_isSharedCheck_3842_;
goto v_resetjp_3831_;
}
else
{
lean_dec(v_x_3820_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3842_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
lean_object* v___x_3834_; uint8_t v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3838_; 
v___x_3834_ = lean_unsigned_to_nat(0u);
v___x_3835_ = 0;
v___x_3836_ = lean_io_promise_new();
if (v_isShared_3833_ == 0)
{
lean_ctor_set(v___x_3832_, 0, v___x_3836_);
v___x_3838_ = v___x_3832_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v___x_3836_);
v___x_3838_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3839_, 0, v___x_3838_);
v___x_3840_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3834_, v___x_3835_, v___x_3839_, v___f_3819_);
return v___x_3840_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8___boxed(lean_object* v___f_3844_, lean_object* v_x_3845_, lean_object* v___y_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8(v___f_3844_, v_x_3845_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1(lean_object* v___f_3848_, lean_object* v_bytes_3849_){
_start:
{
lean_object* v___x_3851_; uint8_t v___x_3852_; lean_object* v_val_3854_; lean_object* v___x_3857_; 
v___x_3851_ = lean_unsigned_to_nat(0u);
v___x_3852_ = 0;
v___x_3857_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3849_);
if (lean_obj_tag(v___x_3857_) == 0)
{
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3865_; 
v_a_3858_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3860_ = v___x_3857_;
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3857_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
lean_ctor_set_tag(v___x_3860_, 1);
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_a_3858_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
v_val_3854_ = v___x_3863_;
goto v___jp_3853_;
}
}
}
else
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3873_; 
v_a_3866_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3868_ = v___x_3857_;
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3857_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3871_; 
if (v_isShared_3869_ == 0)
{
lean_ctor_set_tag(v___x_3868_, 0);
v___x_3871_ = v___x_3868_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3866_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
v_val_3854_ = v___x_3871_;
goto v___jp_3853_;
}
}
}
v___jp_3853_:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3855_, 0, v_val_3854_);
v___x_3856_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3851_, v___x_3852_, v___x_3855_, v___f_3848_);
return v___x_3856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1___boxed(lean_object* v___f_3874_, lean_object* v_bytes_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1(v___f_3874_, v_bytes_3875_);
lean_dec_ref(v_bytes_3875_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4(lean_object* v_failurePrefix_3878_, lean_object* v_x_3879_){
_start:
{
if (lean_obj_tag(v_x_3879_) == 0)
{
lean_object* v_a_3881_; lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3892_; 
v_a_3881_ = lean_ctor_get(v_x_3879_, 0);
v_isSharedCheck_3892_ = !lean_is_exclusive(v_x_3879_);
if (v_isSharedCheck_3892_ == 0)
{
v___x_3883_ = v_x_3879_;
v_isShared_3884_ = v_isSharedCheck_3892_;
goto v_resetjp_3882_;
}
else
{
lean_inc(v_a_3881_);
lean_dec(v_x_3879_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3892_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3889_; 
v___x_3885_ = lean_io_error_to_string(v_a_3881_);
v___x_3886_ = lean_string_append(v_failurePrefix_3878_, v___x_3885_);
lean_dec_ref(v___x_3885_);
v___x_3887_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3886_);
if (v_isShared_3884_ == 0)
{
lean_ctor_set(v___x_3883_, 0, v___x_3887_);
v___x_3889_ = v___x_3883_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v___x_3887_);
v___x_3889_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
lean_object* v___x_3890_; 
v___x_3890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3890_, 0, v___x_3889_);
return v___x_3890_;
}
}
}
else
{
lean_object* v___x_3893_; 
lean_dec_ref(v_failurePrefix_3878_);
v___x_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3893_, 0, v_x_3879_);
return v___x_3893_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4___boxed(lean_object* v_failurePrefix_3894_, lean_object* v_x_3895_, lean_object* v___y_3896_){
_start:
{
lean_object* v_res_3897_; 
v_res_3897_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4(v_failurePrefix_3894_, v_x_3895_);
return v_res_3897_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2(lean_object* v___f_3898_, lean_object* v_x_3899_){
_start:
{
if (lean_obj_tag(v_x_3899_) == 0)
{
lean_object* v_a_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3909_; 
lean_dec_ref(v___f_3898_);
v_a_3901_ = lean_ctor_get(v_x_3899_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v_x_3899_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3903_ = v_x_3899_;
v_isShared_3904_ = v_isSharedCheck_3909_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_a_3901_);
lean_dec(v_x_3899_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3909_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v___x_3906_; 
if (v_isShared_3904_ == 0)
{
v___x_3906_ = v___x_3903_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_a_3901_);
v___x_3906_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
lean_object* v___x_3907_; 
v___x_3907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3907_, 0, v___x_3906_);
return v___x_3907_;
}
}
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3911_; 
v_a_3910_ = lean_ctor_get(v_x_3899_, 0);
lean_inc(v_a_3910_);
lean_dec_ref_known(v_x_3899_, 1);
v___x_3911_ = lean_apply_2(v___f_3898_, v_a_3910_, lean_box(0));
return v___x_3911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2___boxed(lean_object* v___f_3912_, lean_object* v_x_3913_, lean_object* v___y_3914_){
_start:
{
lean_object* v_res_3915_; 
v_res_3915_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2(v___f_3912_, v_x_3913_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7(lean_object* v___f_3916_, lean_object* v_a_3917_, uint32_t v_op_3918_, uint64_t v_flags_3919_, lean_object* v_payload_3920_, lean_object* v_x_3921_){
_start:
{
if (lean_obj_tag(v_x_3921_) == 0)
{
lean_object* v___x_3923_; 
lean_dec_ref(v___f_3916_);
v___x_3923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3923_, 0, v_x_3921_);
return v___x_3923_;
}
else
{
lean_object* v_a_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3944_; 
v_a_3924_ = lean_ctor_get(v_x_3921_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v_x_3921_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3926_ = v_x_3921_;
v_isShared_3927_ = v_isSharedCheck_3944_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_a_3924_);
lean_dec(v_x_3921_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3944_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
uint32_t v___x_3928_; lean_object* v___x_3929_; uint8_t v___x_3930_; lean_object* v_val_3932_; lean_object* v___x_3935_; 
v___x_3928_ = 0;
v___x_3929_ = lean_unsigned_to_nat(0u);
v___x_3930_ = 0;
v___x_3935_ = lasm_js_call_into(v_a_3917_, v_op_3918_, v___x_3928_, v_flags_3919_, v_a_3924_, v_payload_3920_);
lean_dec(v_a_3924_);
if (lean_obj_tag(v___x_3935_) == 0)
{
lean_object* v_a_3936_; lean_object* v___x_3938_; 
v_a_3936_ = lean_ctor_get(v___x_3935_, 0);
lean_inc(v_a_3936_);
lean_dec_ref_known(v___x_3935_, 1);
if (v_isShared_3927_ == 0)
{
lean_ctor_set(v___x_3926_, 0, v_a_3936_);
v___x_3938_ = v___x_3926_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3936_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
v_val_3932_ = v___x_3938_;
goto v___jp_3931_;
}
}
else
{
lean_object* v_a_3940_; lean_object* v___x_3942_; 
v_a_3940_ = lean_ctor_get(v___x_3935_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v___x_3935_, 1);
if (v_isShared_3927_ == 0)
{
lean_ctor_set_tag(v___x_3926_, 0);
lean_ctor_set(v___x_3926_, 0, v_a_3940_);
v___x_3942_ = v___x_3926_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3940_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
v_val_3932_ = v___x_3942_;
goto v___jp_3931_;
}
}
v___jp_3931_:
{
lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3933_, 0, v_val_3932_);
v___x_3934_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3929_, v___x_3930_, v___x_3933_, v___f_3916_);
return v___x_3934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7___boxed(lean_object* v___f_3945_, lean_object* v_a_3946_, lean_object* v_op_3947_, lean_object* v_flags_3948_, lean_object* v_payload_3949_, lean_object* v_x_3950_, lean_object* v___y_3951_){
_start:
{
uint32_t v_op_boxed_3952_; uint64_t v_flags_boxed_3953_; lean_object* v_res_3954_; 
v_op_boxed_3952_ = lean_unbox_uint32(v_op_3947_);
lean_dec(v_op_3947_);
v_flags_boxed_3953_ = lean_unbox_uint64(v_flags_3948_);
lean_dec_ref(v_flags_3948_);
v_res_3954_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7(v___f_3945_, v_a_3946_, v_op_boxed_3952_, v_flags_boxed_3953_, v_payload_3949_, v_x_3950_);
lean_dec(v_payload_3949_);
lean_dec(v_a_3946_);
return v_res_3954_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3(lean_object* v_a_3955_, lean_object* v_x_3956_){
_start:
{
if (lean_obj_tag(v_x_3956_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3966_; 
v_a_3958_ = lean_ctor_get(v_x_3956_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v_x_3956_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3960_ = v_x_3956_;
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v_x_3956_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
return v___x_3964_;
}
}
}
else
{
lean_object* v___x_3967_; 
lean_dec_ref_known(v_x_3956_, 1);
v___x_3967_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3955_);
return v___x_3967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed(lean_object* v_a_3968_, lean_object* v_x_3969_, lean_object* v___y_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3(v_a_3968_, v_x_3969_);
lean_dec(v_a_3968_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5(lean_object* v___x_3972_, uint8_t v___x_3973_, lean_object* v___f_3974_, lean_object* v_a_3975_, uint32_t v_op_3976_, uint64_t v_flags_3977_, lean_object* v_payload_3978_, lean_object* v_x_3979_){
_start:
{
lean_object* v_val_3982_; 
if (lean_obj_tag(v_x_3979_) == 0)
{
lean_object* v___x_3985_; 
lean_dec_ref(v___f_3974_);
lean_dec(v___x_3972_);
v___x_3985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3985_, 0, v_x_3979_);
return v___x_3985_;
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_4000_; 
v_a_3986_ = lean_ctor_get(v_x_3979_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v_x_3979_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3988_ = v_x_3979_;
v_isShared_3989_ = v_isSharedCheck_4000_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v_x_3979_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_4000_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
uint32_t v___x_3990_; lean_object* v___x_3991_; 
v___x_3990_ = 0;
v___x_3991_ = lasm_js_call_into(v_a_3975_, v_op_3976_, v___x_3990_, v_flags_3977_, v_a_3986_, v_payload_3978_);
lean_dec(v_a_3986_);
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3994_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
lean_inc(v_a_3992_);
lean_dec_ref_known(v___x_3991_, 1);
if (v_isShared_3989_ == 0)
{
lean_ctor_set(v___x_3988_, 0, v_a_3992_);
v___x_3994_ = v___x_3988_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v_a_3992_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
v_val_3982_ = v___x_3994_;
goto v___jp_3981_;
}
}
else
{
lean_object* v_a_3996_; lean_object* v___x_3998_; 
v_a_3996_ = lean_ctor_get(v___x_3991_, 0);
lean_inc(v_a_3996_);
lean_dec_ref_known(v___x_3991_, 1);
if (v_isShared_3989_ == 0)
{
lean_ctor_set_tag(v___x_3988_, 0);
lean_ctor_set(v___x_3988_, 0, v_a_3996_);
v___x_3998_ = v___x_3988_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3996_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
v_val_3982_ = v___x_3998_;
goto v___jp_3981_;
}
}
}
}
v___jp_3981_:
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3983_, 0, v_val_3982_);
v___x_3984_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3972_, v___x_3973_, v___x_3983_, v___f_3974_);
return v___x_3984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5___boxed(lean_object* v___x_4001_, lean_object* v___x_4002_, lean_object* v___f_4003_, lean_object* v_a_4004_, lean_object* v_op_4005_, lean_object* v_flags_4006_, lean_object* v_payload_4007_, lean_object* v_x_4008_, lean_object* v___y_4009_){
_start:
{
uint8_t v___x_1506__boxed_4010_; uint32_t v_op_boxed_4011_; uint64_t v_flags_boxed_4012_; lean_object* v_res_4013_; 
v___x_1506__boxed_4010_ = lean_unbox(v___x_4002_);
v_op_boxed_4011_ = lean_unbox_uint32(v_op_4005_);
lean_dec(v_op_4005_);
v_flags_boxed_4012_ = lean_unbox_uint64(v_flags_4006_);
lean_dec_ref(v_flags_4006_);
v_res_4013_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5(v___x_4001_, v___x_1506__boxed_4010_, v___f_4003_, v_a_4004_, v_op_boxed_4011_, v_flags_boxed_4012_, v_payload_4007_, v_x_4008_);
lean_dec(v_payload_4007_);
lean_dec(v_a_4004_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6(lean_object* v_failurePrefix_4014_, uint32_t v_op_4015_, uint64_t v_flags_4016_, lean_object* v_payload_4017_, lean_object* v___f_4018_, lean_object* v___f_4019_, lean_object* v___f_4020_, lean_object* v_x_4021_){
_start:
{
if (lean_obj_tag(v_x_4021_) == 0)
{
lean_object* v_a_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4031_; 
lean_dec_ref(v___f_4020_);
lean_dec_ref(v___f_4019_);
lean_dec_ref(v___f_4018_);
lean_dec(v_payload_4017_);
v_a_4023_ = lean_ctor_get(v_x_4021_, 0);
v_isSharedCheck_4031_ = !lean_is_exclusive(v_x_4021_);
if (v_isSharedCheck_4031_ == 0)
{
v___x_4025_ = v_x_4021_;
v_isShared_4026_ = v_isSharedCheck_4031_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_a_4023_);
lean_dec(v_x_4021_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4031_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
lean_object* v___x_4028_; 
if (v_isShared_4026_ == 0)
{
v___x_4028_ = v___x_4025_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v_a_4023_);
v___x_4028_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
lean_object* v___x_4029_; 
v___x_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4028_);
return v___x_4029_;
}
}
}
else
{
lean_object* v_a_4032_; lean_object* v___x_4034_; uint8_t v_isShared_4035_; uint8_t v_isSharedCheck_4078_; 
v_a_4032_ = lean_ctor_get(v_x_4021_, 0);
v_isSharedCheck_4078_ = !lean_is_exclusive(v_x_4021_);
if (v_isSharedCheck_4078_ == 0)
{
v___x_4034_ = v_x_4021_;
v_isShared_4035_ = v_isSharedCheck_4078_;
goto v_resetjp_4033_;
}
else
{
lean_inc(v_a_4032_);
lean_dec(v_x_4021_);
v___x_4034_ = lean_box(0);
v_isShared_4035_ = v_isSharedCheck_4078_;
goto v_resetjp_4033_;
}
v_resetjp_4033_:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; uint8_t v___x_4038_; 
v___x_4036_ = lean_string_utf8_byte_size(v_failurePrefix_4014_);
v___x_4037_ = lean_unsigned_to_nat(0u);
v___x_4038_ = lean_nat_dec_eq(v___x_4036_, v___x_4037_);
if (v___x_4038_ == 0)
{
lean_object* v___f_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___f_4043_; lean_object* v_val_4045_; lean_object* v___x_4050_; 
lean_dec_ref(v___f_4020_);
lean_inc(v_a_4032_);
v___f_4039_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4039_, 0, v_a_4032_);
v___x_4040_ = lean_box(v___x_4038_);
v___x_4041_ = lean_box_uint32(v_op_4015_);
v___x_4042_ = lean_box_uint64(v_flags_4016_);
lean_inc(v_payload_4017_);
v___f_4043_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4043_, 0, v___x_4037_);
lean_closure_set(v___f_4043_, 1, v___x_4040_);
lean_closure_set(v___f_4043_, 2, v___f_4039_);
lean_closure_set(v___f_4043_, 3, v_a_4032_);
lean_closure_set(v___f_4043_, 4, v___x_4041_);
lean_closure_set(v___f_4043_, 5, v___x_4042_);
lean_closure_set(v___f_4043_, 6, v_payload_4017_);
v___x_4050_ = l_Lasm_JS_Wire_encodeIO(v_payload_4017_);
if (lean_obj_tag(v___x_4050_) == 0)
{
lean_object* v_a_4051_; lean_object* v___x_4053_; 
v_a_4051_ = lean_ctor_get(v___x_4050_, 0);
lean_inc(v_a_4051_);
lean_dec_ref_known(v___x_4050_, 1);
if (v_isShared_4035_ == 0)
{
lean_ctor_set(v___x_4034_, 0, v_a_4051_);
v___x_4053_ = v___x_4034_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_a_4051_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
v_val_4045_ = v___x_4053_;
goto v___jp_4044_;
}
}
else
{
lean_object* v_a_4055_; lean_object* v___x_4057_; 
v_a_4055_ = lean_ctor_get(v___x_4050_, 0);
lean_inc(v_a_4055_);
lean_dec_ref_known(v___x_4050_, 1);
if (v_isShared_4035_ == 0)
{
lean_ctor_set_tag(v___x_4034_, 0);
lean_ctor_set(v___x_4034_, 0, v_a_4055_);
v___x_4057_ = v___x_4034_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4058_; 
v_reuseFailAlloc_4058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4058_, 0, v_a_4055_);
v___x_4057_ = v_reuseFailAlloc_4058_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
v_val_4045_ = v___x_4057_;
goto v___jp_4044_;
}
}
v___jp_4044_:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; 
v___x_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4046_, 0, v_val_4045_);
v___x_4047_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4037_, v___x_4038_, v___x_4046_, v___f_4043_);
v___x_4048_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4037_, v___x_4038_, v___x_4047_, v___f_4018_);
v___x_4049_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4037_, v___x_4038_, v___x_4048_, v___f_4019_);
return v___x_4049_;
}
}
else
{
lean_object* v___f_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___f_4062_; uint8_t v___x_4063_; lean_object* v_val_4065_; lean_object* v___x_4069_; 
lean_dec_ref(v___f_4019_);
lean_dec_ref(v___f_4018_);
lean_inc(v_a_4032_);
v___f_4059_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4059_, 0, v_a_4032_);
v___x_4060_ = lean_box_uint32(v_op_4015_);
v___x_4061_ = lean_box_uint64(v_flags_4016_);
lean_inc(v_payload_4017_);
v___f_4062_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4062_, 0, v___f_4059_);
lean_closure_set(v___f_4062_, 1, v_a_4032_);
lean_closure_set(v___f_4062_, 2, v___x_4060_);
lean_closure_set(v___f_4062_, 3, v___x_4061_);
lean_closure_set(v___f_4062_, 4, v_payload_4017_);
v___x_4063_ = 0;
v___x_4069_ = l_Lasm_JS_Wire_encodeIO(v_payload_4017_);
if (lean_obj_tag(v___x_4069_) == 0)
{
lean_object* v_a_4070_; lean_object* v___x_4072_; 
v_a_4070_ = lean_ctor_get(v___x_4069_, 0);
lean_inc(v_a_4070_);
lean_dec_ref_known(v___x_4069_, 1);
if (v_isShared_4035_ == 0)
{
lean_ctor_set(v___x_4034_, 0, v_a_4070_);
v___x_4072_ = v___x_4034_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_a_4070_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
v_val_4065_ = v___x_4072_;
goto v___jp_4064_;
}
}
else
{
lean_object* v_a_4074_; lean_object* v___x_4076_; 
v_a_4074_ = lean_ctor_get(v___x_4069_, 0);
lean_inc(v_a_4074_);
lean_dec_ref_known(v___x_4069_, 1);
if (v_isShared_4035_ == 0)
{
lean_ctor_set_tag(v___x_4034_, 0);
lean_ctor_set(v___x_4034_, 0, v_a_4074_);
v___x_4076_ = v___x_4034_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_a_4074_);
v___x_4076_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
v_val_4065_ = v___x_4076_;
goto v___jp_4064_;
}
}
v___jp_4064_:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v___x_4066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4066_, 0, v_val_4065_);
v___x_4067_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4037_, v___x_4063_, v___x_4066_, v___f_4062_);
v___x_4068_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4037_, v___x_4063_, v___x_4067_, v___f_4020_);
return v___x_4068_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6___boxed(lean_object* v_failurePrefix_4079_, lean_object* v_op_4080_, lean_object* v_flags_4081_, lean_object* v_payload_4082_, lean_object* v___f_4083_, lean_object* v___f_4084_, lean_object* v___f_4085_, lean_object* v_x_4086_, lean_object* v___y_4087_){
_start:
{
uint32_t v_op_boxed_4088_; uint64_t v_flags_boxed_4089_; lean_object* v_res_4090_; 
v_op_boxed_4088_ = lean_unbox_uint32(v_op_4080_);
lean_dec(v_op_4080_);
v_flags_boxed_4089_ = lean_unbox_uint64(v_flags_4081_);
lean_dec_ref(v_flags_4081_);
v_res_4090_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6(v_failurePrefix_4079_, v_op_boxed_4088_, v_flags_boxed_4089_, v_payload_4082_, v___f_4083_, v___f_4084_, v___f_4085_, v_x_4086_);
lean_dec_ref(v_failurePrefix_4079_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_4093_, lean_object* v_key_4094_){
_start:
{
if (lean_obj_tag(v_d_4093_) == 8)
{
lean_object* v___x_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4116_; 
v___x_4095_ = l_Lasm_JS_Data_field(v_d_4093_, v_key_4094_);
v_isSharedCheck_4116_ = !lean_is_exclusive(v_d_4093_);
if (v_isSharedCheck_4116_ == 0)
{
lean_object* v_unused_4117_; 
v_unused_4117_ = lean_ctor_get(v_d_4093_, 0);
lean_dec(v_unused_4117_);
v___x_4097_ = v_d_4093_;
v_isShared_4098_ = v_isSharedCheck_4116_;
goto v_resetjp_4096_;
}
else
{
lean_dec(v_d_4093_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4116_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
if (lean_obj_tag(v___x_4095_) == 9)
{
lean_object* v_value_4099_; lean_object* v___x_4101_; 
v_value_4099_ = lean_ctor_get(v___x_4095_, 0);
lean_inc(v_value_4099_);
lean_dec_ref_known(v___x_4095_, 2);
if (v_isShared_4098_ == 0)
{
lean_ctor_set_tag(v___x_4097_, 1);
lean_ctor_set(v___x_4097_, 0, v_value_4099_);
v___x_4101_ = v___x_4097_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v_value_4099_);
v___x_4101_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
return v___x_4101_;
}
}
else
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4114_; 
v___x_4103_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_4104_ = lean_string_append(v___x_4103_, v_key_4094_);
v___x_4105_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_4106_ = lean_string_append(v___x_4104_, v___x_4105_);
v___x_4107_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInstance___closed__0));
v___x_4108_ = lean_string_append(v___x_4106_, v___x_4107_);
v___x_4109_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_4110_ = lean_string_append(v___x_4108_, v___x_4109_);
v___x_4111_ = l_Lasm_JS_Data_describe(v___x_4095_);
v___x_4112_ = lean_string_append(v___x_4110_, v___x_4111_);
lean_dec_ref(v___x_4111_);
if (v_isShared_4098_ == 0)
{
lean_ctor_set_tag(v___x_4097_, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4112_);
v___x_4114_ = v___x_4097_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v___x_4112_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
else
{
lean_object* v___x_4118_; 
lean_dec(v_d_4093_);
v___x_4118_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_4118_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_4119_, lean_object* v_key_4120_){
_start:
{
lean_object* v_res_4121_; 
v_res_4121_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(v_d_4119_, v_key_4120_);
lean_dec_ref(v_key_4120_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_4122_, lean_object* v_key_4123_){
_start:
{
if (lean_obj_tag(v_d_4122_) == 8)
{
lean_object* v___x_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4145_; 
v___x_4124_ = l_Lasm_JS_Data_field(v_d_4122_, v_key_4123_);
v_isSharedCheck_4145_ = !lean_is_exclusive(v_d_4122_);
if (v_isSharedCheck_4145_ == 0)
{
lean_object* v_unused_4146_; 
v_unused_4146_ = lean_ctor_get(v_d_4122_, 0);
lean_dec(v_unused_4146_);
v___x_4126_ = v_d_4122_;
v_isShared_4127_ = v_isSharedCheck_4145_;
goto v_resetjp_4125_;
}
else
{
lean_dec(v_d_4122_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4145_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
if (lean_obj_tag(v___x_4124_) == 9)
{
lean_object* v_value_4128_; lean_object* v___x_4130_; 
v_value_4128_ = lean_ctor_get(v___x_4124_, 0);
lean_inc(v_value_4128_);
lean_dec_ref_known(v___x_4124_, 2);
if (v_isShared_4127_ == 0)
{
lean_ctor_set_tag(v___x_4126_, 1);
lean_ctor_set(v___x_4126_, 0, v_value_4128_);
v___x_4130_ = v___x_4126_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_value_4128_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
else
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4143_; 
v___x_4132_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_4133_ = lean_string_append(v___x_4132_, v_key_4123_);
v___x_4134_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_4135_ = lean_string_append(v___x_4133_, v___x_4134_);
v___x_4136_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModule___closed__1));
v___x_4137_ = lean_string_append(v___x_4135_, v___x_4136_);
v___x_4138_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_4139_ = lean_string_append(v___x_4137_, v___x_4138_);
v___x_4140_ = l_Lasm_JS_Data_describe(v___x_4124_);
v___x_4141_ = lean_string_append(v___x_4139_, v___x_4140_);
lean_dec_ref(v___x_4140_);
if (v_isShared_4127_ == 0)
{
lean_ctor_set_tag(v___x_4126_, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4141_);
v___x_4143_ = v___x_4126_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v___x_4141_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
return v___x_4143_;
}
}
}
}
else
{
lean_object* v___x_4147_; 
lean_dec(v_d_4122_);
v___x_4147_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_4147_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_4148_, lean_object* v_key_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(v_d_4148_, v_key_4149_);
lean_dec_ref(v_key_4149_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(lean_object* v_context_4151_, lean_object* v_d_4152_){
_start:
{
lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4161_; lean_object* v_received_4162_; lean_object* v___y_4181_; lean_object* v_a_4184_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4208_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0));
lean_inc(v_d_4152_);
v___x_4209_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(v_d_4152_, v___x_4208_);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v_a_4210_; 
v_a_4210_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_a_4210_);
lean_dec_ref_known(v___x_4209_, 1);
v_a_4184_ = v_a_4210_;
goto v___jp_4183_;
}
else
{
lean_object* v_a_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; 
v_a_4211_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_a_4211_);
lean_dec_ref_known(v___x_4209_, 1);
v___x_4212_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___closed__0));
lean_inc(v_d_4152_);
v___x_4213_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(v_d_4152_, v___x_4212_);
if (lean_obj_tag(v___x_4213_) == 0)
{
lean_object* v_a_4214_; 
lean_dec(v_a_4211_);
v_a_4214_ = lean_ctor_get(v___x_4213_, 0);
lean_inc(v_a_4214_);
lean_dec_ref_known(v___x_4213_, 1);
v_a_4184_ = v_a_4214_;
goto v___jp_4183_;
}
else
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4223_; 
lean_dec(v_d_4152_);
v_a_4215_ = lean_ctor_get(v___x_4213_, 0);
v_isSharedCheck_4223_ = !lean_is_exclusive(v___x_4213_);
if (v_isSharedCheck_4223_ == 0)
{
v___x_4217_ = v___x_4213_;
v_isShared_4218_ = v_isSharedCheck_4223_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___x_4213_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4223_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4219_; lean_object* v___x_4221_; 
v___x_4219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4219_, 0, v_a_4211_);
lean_ctor_set(v___x_4219_, 1, v_a_4215_);
if (v_isShared_4218_ == 0)
{
lean_ctor_set_tag(v___x_4217_, 0);
lean_ctor_set(v___x_4217_, 0, v___x_4219_);
v___x_4221_ = v___x_4217_;
goto v_reusejp_4220_;
}
else
{
lean_object* v_reuseFailAlloc_4222_; 
v_reuseFailAlloc_4222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4222_, 0, v___x_4219_);
v___x_4221_ = v_reuseFailAlloc_4222_;
goto v_reusejp_4220_;
}
v_reusejp_4220_:
{
return v___x_4221_;
}
}
}
}
v___jp_4154_:
{
lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; 
v___x_4157_ = lean_string_append(v___y_4155_, v___y_4156_);
lean_dec_ref(v___y_4156_);
v___x_4158_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4157_);
v___x_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
return v___x_4159_;
}
v___jp_4160_:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; uint8_t v___x_4174_; 
v___x_4163_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4164_ = lean_string_append(v___x_4163_, v_context_4151_);
v___x_4165_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_4166_ = lean_string_append(v___x_4164_, v___x_4165_);
v___x_4167_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__1));
v___x_4168_ = lean_string_append(v___x_4166_, v___x_4167_);
v___x_4169_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_4170_ = lean_string_append(v___x_4168_, v___x_4169_);
v___x_4171_ = lean_string_append(v___x_4170_, v_received_4162_);
lean_dec_ref(v_received_4162_);
v___x_4172_ = lean_string_utf8_byte_size(v___y_4161_);
v___x_4173_ = lean_unsigned_to_nat(0u);
v___x_4174_ = lean_nat_dec_eq(v___x_4172_, v___x_4173_);
if (v___x_4174_ == 0)
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4175_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_4176_ = lean_string_append(v___x_4175_, v___y_4161_);
lean_dec_ref(v___y_4161_);
v___x_4177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_4178_ = lean_string_append(v___x_4176_, v___x_4177_);
v___y_4155_ = v___x_4171_;
v___y_4156_ = v___x_4178_;
goto v___jp_4154_;
}
else
{
lean_object* v___x_4179_; 
lean_dec_ref(v___y_4161_);
v___x_4179_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_4155_ = v___x_4171_;
v___y_4156_ = v___x_4179_;
goto v___jp_4154_;
}
}
v___jp_4180_:
{
lean_object* v___x_4182_; 
v___x_4182_ = l_Lasm_JS_Data_describe(v_d_4152_);
v___y_4161_ = v___y_4181_;
v_received_4162_ = v___x_4182_;
goto v___jp_4160_;
}
v___jp_4183_:
{
if (lean_obj_tag(v_d_4152_) == 9)
{
lean_object* v_value_4185_; lean_object* v_description_4186_; lean_object* v___x_4187_; uint8_t v___x_4188_; 
v_value_4185_ = lean_ctor_get(v_d_4152_, 0);
v_description_4186_ = lean_ctor_get(v_d_4152_, 1);
v___x_4187_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4188_ = lean_string_dec_eq(v_description_4186_, v___x_4187_);
if (v___x_4188_ == 0)
{
v___y_4181_ = v_a_4184_;
goto v___jp_4180_;
}
else
{
lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4205_; 
lean_inc(v_value_4185_);
v_isSharedCheck_4205_ = !lean_is_exclusive(v_d_4152_);
if (v_isSharedCheck_4205_ == 0)
{
lean_object* v_unused_4206_; lean_object* v_unused_4207_; 
v_unused_4206_ = lean_ctor_get(v_d_4152_, 1);
lean_dec(v_unused_4206_);
v_unused_4207_ = lean_ctor_get(v_d_4152_, 0);
lean_dec(v_unused_4207_);
v___x_4190_ = v_d_4152_;
v_isShared_4191_ = v_isSharedCheck_4205_;
goto v_resetjp_4189_;
}
else
{
lean_dec(v_d_4152_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4205_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
uint32_t v___x_4192_; uint64_t v___x_4193_; lean_object* v___x_4195_; 
v___x_4192_ = 206;
v___x_4193_ = 0ULL;
lean_inc(v_value_4185_);
if (v_isShared_4191_ == 0)
{
lean_ctor_set(v___x_4190_, 1, v___x_4187_);
v___x_4195_ = v___x_4190_;
goto v_reusejp_4194_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v_value_4185_);
lean_ctor_set(v_reuseFailAlloc_4204_, 1, v___x_4187_);
v___x_4195_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4194_;
}
v_reusejp_4194_:
{
uint32_t v___x_4196_; lean_object* v___x_4197_; 
v___x_4196_ = lasm_js_value_handle(v_value_4185_);
lean_dec(v_value_4185_);
v___x_4197_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4192_, v___x_4193_, v___x_4195_, v___x_4196_);
if (lean_obj_tag(v___x_4197_) == 0)
{
lean_object* v_a_4198_; uint8_t v___x_4199_; 
v_a_4198_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_a_4198_);
lean_dec_ref_known(v___x_4197_, 1);
v___x_4199_ = lean_string_validate_utf8(v_a_4198_);
if (v___x_4199_ == 0)
{
lean_object* v___x_4200_; lean_object* v___x_4201_; 
lean_dec(v_a_4198_);
v___x_4200_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6);
v___x_4201_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4200_);
v___y_4161_ = v_a_4184_;
v_received_4162_ = v___x_4201_;
goto v___jp_4160_;
}
else
{
lean_object* v___x_4202_; 
v___x_4202_ = lean_string_from_utf8_unchecked(v_a_4198_);
v___y_4161_ = v_a_4184_;
v_received_4162_ = v___x_4202_;
goto v___jp_4160_;
}
}
else
{
lean_object* v___x_4203_; 
lean_dec_ref_known(v___x_4197_, 1);
v___x_4203_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v___y_4161_ = v_a_4184_;
v_received_4162_ = v___x_4203_;
goto v___jp_4160_;
}
}
}
}
}
else
{
v___y_4181_ = v_a_4184_;
goto v___jp_4180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4224_, lean_object* v_d_4225_, lean_object* v_a_4226_){
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(v_context_4224_, v_d_4225_);
lean_dec_ref(v_context_4224_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0(lean_object* v_context_4228_, lean_object* v_x_4229_){
_start:
{
lean_object* v_val_4232_; 
if (lean_obj_tag(v_x_4229_) == 0)
{
lean_object* v_a_4234_; lean_object* v___x_4236_; uint8_t v_isShared_4237_; uint8_t v_isSharedCheck_4242_; 
v_a_4234_ = lean_ctor_get(v_x_4229_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v_x_4229_);
if (v_isSharedCheck_4242_ == 0)
{
v___x_4236_ = v_x_4229_;
v_isShared_4237_ = v_isSharedCheck_4242_;
goto v_resetjp_4235_;
}
else
{
lean_inc(v_a_4234_);
lean_dec(v_x_4229_);
v___x_4236_ = lean_box(0);
v_isShared_4237_ = v_isSharedCheck_4242_;
goto v_resetjp_4235_;
}
v_resetjp_4235_:
{
lean_object* v___x_4239_; 
if (v_isShared_4237_ == 0)
{
v___x_4239_ = v___x_4236_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_a_4234_);
v___x_4239_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
lean_object* v___x_4240_; 
v___x_4240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4239_);
return v___x_4240_;
}
}
}
else
{
lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4256_; 
v_a_4243_ = lean_ctor_get(v_x_4229_, 0);
v_isSharedCheck_4256_ = !lean_is_exclusive(v_x_4229_);
if (v_isSharedCheck_4256_ == 0)
{
v___x_4245_ = v_x_4229_;
v_isShared_4246_ = v_isSharedCheck_4256_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v_x_4229_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4256_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4247_; 
v___x_4247_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(v_context_4228_, v_a_4243_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; lean_object* v___x_4250_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
lean_inc(v_a_4248_);
lean_dec_ref_known(v___x_4247_, 1);
if (v_isShared_4246_ == 0)
{
lean_ctor_set(v___x_4245_, 0, v_a_4248_);
v___x_4250_ = v___x_4245_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4248_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
v_val_4232_ = v___x_4250_;
goto v___jp_4231_;
}
}
else
{
lean_object* v_a_4252_; lean_object* v___x_4254_; 
v_a_4252_ = lean_ctor_get(v___x_4247_, 0);
lean_inc(v_a_4252_);
lean_dec_ref_known(v___x_4247_, 1);
if (v_isShared_4246_ == 0)
{
lean_ctor_set_tag(v___x_4245_, 0);
lean_ctor_set(v___x_4245_, 0, v_a_4252_);
v___x_4254_ = v___x_4245_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4255_; 
v_reuseFailAlloc_4255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4255_, 0, v_a_4252_);
v___x_4254_ = v_reuseFailAlloc_4255_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
v_val_4232_ = v___x_4254_;
goto v___jp_4231_;
}
}
}
}
v___jp_4231_:
{
lean_object* v___x_4233_; 
v___x_4233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4233_, 0, v_val_4232_);
return v___x_4233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0___boxed(lean_object* v_context_4257_, lean_object* v_x_4258_, lean_object* v___y_4259_){
_start:
{
lean_object* v_res_4260_; 
v_res_4260_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0(v_context_4257_, v_x_4258_);
lean_dec_ref(v_context_4257_);
return v_res_4260_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(lean_object* v_context_4261_, uint32_t v_op_4262_, uint64_t v_flags_4263_, lean_object* v_payload_4264_, lean_object* v_failurePrefix_4265_){
_start:
{
lean_object* v___f_4267_; lean_object* v___f_4268_; lean_object* v___f_4269_; lean_object* v___f_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___f_4273_; lean_object* v___f_4274_; lean_object* v___x_4275_; uint8_t v___x_4276_; lean_object* v_val_4278_; lean_object* v___x_4281_; 
v___f_4267_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4267_, 0, v_context_4261_);
v___f_4268_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4268_, 0, v___f_4267_);
v___f_4269_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4269_, 0, v___f_4268_);
lean_inc_ref(v_failurePrefix_4265_);
v___f_4270_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4270_, 0, v_failurePrefix_4265_);
v___x_4271_ = lean_box_uint32(v_op_4262_);
v___x_4272_ = lean_box_uint64(v_flags_4263_);
lean_inc_ref(v___f_4269_);
v___f_4273_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4273_, 0, v_failurePrefix_4265_);
lean_closure_set(v___f_4273_, 1, v___x_4271_);
lean_closure_set(v___f_4273_, 2, v___x_4272_);
lean_closure_set(v___f_4273_, 3, v_payload_4264_);
lean_closure_set(v___f_4273_, 4, v___f_4270_);
lean_closure_set(v___f_4273_, 5, v___f_4269_);
lean_closure_set(v___f_4273_, 6, v___f_4269_);
v___f_4274_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4274_, 0, v___f_4273_);
v___x_4275_ = lean_unsigned_to_nat(0u);
v___x_4276_ = 0;
v___x_4281_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4281_) == 0)
{
lean_object* v_a_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4289_; 
v_a_4282_ = lean_ctor_get(v___x_4281_, 0);
v_isSharedCheck_4289_ = !lean_is_exclusive(v___x_4281_);
if (v_isSharedCheck_4289_ == 0)
{
v___x_4284_ = v___x_4281_;
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_a_4282_);
lean_dec(v___x_4281_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
lean_object* v___x_4287_; 
if (v_isShared_4285_ == 0)
{
lean_ctor_set_tag(v___x_4284_, 1);
v___x_4287_ = v___x_4284_;
goto v_reusejp_4286_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_a_4282_);
v___x_4287_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4286_;
}
v_reusejp_4286_:
{
v_val_4278_ = v___x_4287_;
goto v___jp_4277_;
}
}
}
else
{
lean_object* v_a_4290_; lean_object* v___x_4292_; uint8_t v_isShared_4293_; uint8_t v_isSharedCheck_4297_; 
v_a_4290_ = lean_ctor_get(v___x_4281_, 0);
v_isSharedCheck_4297_ = !lean_is_exclusive(v___x_4281_);
if (v_isSharedCheck_4297_ == 0)
{
v___x_4292_ = v___x_4281_;
v_isShared_4293_ = v_isSharedCheck_4297_;
goto v_resetjp_4291_;
}
else
{
lean_inc(v_a_4290_);
lean_dec(v___x_4281_);
v___x_4292_ = lean_box(0);
v_isShared_4293_ = v_isSharedCheck_4297_;
goto v_resetjp_4291_;
}
v_resetjp_4291_:
{
lean_object* v___x_4295_; 
if (v_isShared_4293_ == 0)
{
lean_ctor_set_tag(v___x_4292_, 0);
v___x_4295_ = v___x_4292_;
goto v_reusejp_4294_;
}
else
{
lean_object* v_reuseFailAlloc_4296_; 
v_reuseFailAlloc_4296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4296_, 0, v_a_4290_);
v___x_4295_ = v_reuseFailAlloc_4296_;
goto v_reusejp_4294_;
}
v_reusejp_4294_:
{
v_val_4278_ = v___x_4295_;
goto v___jp_4277_;
}
}
}
v___jp_4277_:
{
lean_object* v___x_4279_; lean_object* v___x_4280_; 
v___x_4279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4279_, 0, v_val_4278_);
v___x_4280_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4275_, v___x_4276_, v___x_4279_, v___f_4274_);
return v___x_4280_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___boxed(lean_object* v_context_4298_, lean_object* v_op_4299_, lean_object* v_flags_4300_, lean_object* v_payload_4301_, lean_object* v_failurePrefix_4302_, lean_object* v_a_4303_){
_start:
{
uint32_t v_op_boxed_4304_; uint64_t v_flags_boxed_4305_; lean_object* v_res_4306_; 
v_op_boxed_4304_ = lean_unbox_uint32(v_op_4299_);
lean_dec(v_op_4299_);
v_flags_boxed_4305_ = lean_unbox_uint64(v_flags_4300_);
lean_dec_ref(v_flags_4300_);
v_res_4306_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(v_context_4298_, v_op_boxed_4304_, v_flags_boxed_4305_, v_payload_4301_, v_failurePrefix_4302_);
return v_res_4306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(lean_object* v_b_4307_, lean_object* v_args_4308_){
_start:
{
uint8_t v_construct_4310_; lean_object* v___x_4311_; uint32_t v___x_4312_; uint64_t v___x_4313_; uint64_t v___y_4315_; 
v_construct_4310_ = lean_ctor_get_uint8(v_b_4307_, sizeof(void*)*4);
v___x_4311_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4307_);
v___x_4312_ = 214;
v___x_4313_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_construct_4310_ == 0)
{
uint64_t v___x_4323_; 
v___x_4323_ = 0ULL;
v___y_4315_ = v___x_4323_;
goto v___jp_4314_;
}
else
{
uint64_t v___x_4324_; 
v___x_4324_ = 4ULL;
v___y_4315_ = v___x_4324_;
goto v___jp_4314_;
}
v___jp_4314_:
{
uint64_t v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
v___x_4316_ = lean_uint64_lor(v___x_4313_, v___y_4315_);
v___x_4317_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4307_, v_args_4308_);
v___x_4318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4319_ = lean_string_append(v___x_4318_, v___x_4311_);
v___x_4320_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_4321_ = lean_string_append(v___x_4319_, v___x_4320_);
v___x_4322_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(v___x_4311_, v___x_4312_, v___x_4316_, v___x_4317_, v___x_4321_);
return v___x_4322_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0___boxed(lean_object* v_b_4325_, lean_object* v_args_4326_, lean_object* v_a_4327_){
_start:
{
lean_object* v_res_4328_; 
v_res_4328_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v_b_4325_, v_args_4326_);
lean_dec_ref(v_b_4325_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiate(lean_object* v_bytes_4337_, lean_object* v_importObject_4338_, lean_object* v_options_4339_){
_start:
{
lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; 
v___x_4341_ = lean_unsigned_to_nat(3u);
v___x_4342_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiate___closed__2));
v___x_4343_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4343_, 0, v_bytes_4337_);
v___x_4344_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4339_);
v___x_4345_ = lean_mk_empty_array_with_capacity(v___x_4341_);
v___x_4346_ = lean_array_push(v___x_4345_, v___x_4343_);
v___x_4347_ = lean_array_push(v___x_4346_, v_importObject_4338_);
v___x_4348_ = lean_array_push(v___x_4347_, v___x_4344_);
v___x_4349_ = l_Lasm_JS_Web_Support_args(v___x_4348_);
v___x_4350_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v___x_4342_, v___x_4349_);
return v___x_4350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiate___boxed(lean_object* v_bytes_4351_, lean_object* v_importObject_4352_, lean_object* v_options_4353_, lean_object* v_a_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l_Lasm_JS_Web_WebAssembly_instantiate(v_bytes_4351_, v_importObject_4352_, v_options_4353_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject(lean_object* v_moduleObject_4363_, lean_object* v_importObject_4364_){
_start:
{
lean_object* v___f_4366_; uint8_t v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; 
v___f_4366_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_4367_ = 0;
v___x_4368_ = lean_unsigned_to_nat(2u);
v___x_4369_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__1));
v___x_4370_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4371_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4371_, 0, v_moduleObject_4363_);
lean_ctor_set(v___x_4371_, 1, v___x_4370_);
v___x_4372_ = lean_mk_empty_array_with_capacity(v___x_4368_);
v___x_4373_ = lean_array_push(v___x_4372_, v___x_4371_);
v___x_4374_ = lean_array_push(v___x_4373_, v_importObject_4364_);
v___x_4375_ = l_Lasm_JS_Web_Support_args(v___x_4374_);
v___x_4376_ = lean_unsigned_to_nat(0u);
v___x_4377_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_4369_, v___x_4375_);
v___x_4378_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4376_, v___x_4367_, v___x_4377_, v___f_4366_);
return v___x_4378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___boxed(lean_object* v_moduleObject_4379_, lean_object* v_importObject_4380_, lean_object* v_a_4381_){
_start:
{
lean_object* v_res_4382_; 
v_res_4382_ = l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject(v_moduleObject_4379_, v_importObject_4380_);
return v_res_4382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming(lean_object* v_source_4391_, lean_object* v_options_4392_){
_start:
{
lean_object* v___f_4394_; uint8_t v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; 
v___f_4394_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_4395_ = 0;
v___x_4396_ = lean_unsigned_to_nat(2u);
v___x_4397_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__2));
v___x_4398_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4399_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4399_, 0, v_source_4391_);
lean_ctor_set(v___x_4399_, 1, v___x_4398_);
v___x_4400_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4392_);
v___x_4401_ = lean_mk_empty_array_with_capacity(v___x_4396_);
v___x_4402_ = lean_array_push(v___x_4401_, v___x_4399_);
v___x_4403_ = lean_array_push(v___x_4402_, v___x_4400_);
v___x_4404_ = l_Lasm_JS_Web_Support_args(v___x_4403_);
v___x_4405_ = lean_unsigned_to_nat(0u);
v___x_4406_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_4397_, v___x_4404_);
v___x_4407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4405_, v___x_4395_, v___x_4406_, v___f_4394_);
return v___x_4407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming___boxed(lean_object* v_source_4408_, lean_object* v_options_4409_, lean_object* v_a_4410_){
_start:
{
lean_object* v_res_4411_; 
v_res_4411_ = l_Lasm_JS_Web_WebAssembly_compileStreaming(v_source_4408_, v_options_4409_);
return v_res_4411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming(lean_object* v_source_4420_, lean_object* v_importObject_4421_, lean_object* v_options_4422_){
_start:
{
lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
v___x_4424_ = lean_unsigned_to_nat(3u);
v___x_4425_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__2));
v___x_4426_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4427_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4427_, 0, v_source_4420_);
lean_ctor_set(v___x_4427_, 1, v___x_4426_);
v___x_4428_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4422_);
v___x_4429_ = lean_mk_empty_array_with_capacity(v___x_4424_);
v___x_4430_ = lean_array_push(v___x_4429_, v___x_4427_);
v___x_4431_ = lean_array_push(v___x_4430_, v_importObject_4421_);
v___x_4432_ = lean_array_push(v___x_4431_, v___x_4428_);
v___x_4433_ = l_Lasm_JS_Web_Support_args(v___x_4432_);
v___x_4434_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v___x_4425_, v___x_4433_);
return v___x_4434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming___boxed(lean_object* v_source_4435_, lean_object* v_importObject_4436_, lean_object* v_options_4437_, lean_object* v_a_4438_){
_start:
{
lean_object* v_res_4439_; 
v_res_4439_ = l_Lasm_JS_Web_WebAssembly_instantiateStreaming(v_source_4435_, v_importObject_4436_, v_options_4437_);
return v_res_4439_;
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
