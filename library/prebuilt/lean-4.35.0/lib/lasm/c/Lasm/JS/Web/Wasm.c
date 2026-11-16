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
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
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
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "WebAssembly"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__3_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__3_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__4 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Instance"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Memory"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Table"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Global"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Tag"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Exception"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "CompileError"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LinkError"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "RuntimeError"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WebAssembly_JSTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "JSTag"};
static const lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_JSTag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WebAssembly_JSTag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebAssembly_JSTag___closed__2_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0(lean_object* v___x_1256_){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_1256_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0___boxed(lean_object* v___x_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___lam__0(v___x_1259_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f(lean_object* v_v_1272_){
_start:
{
lean_object* v___f_1274_; lean_object* v___x_1275_; 
v___f_1274_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___closed__4));
lean_inc(v_v_1272_);
v___x_1275_ = l_Lasm_JS_Web_Support_isInstance(v___f_1274_, v_v_1272_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1289_; 
v_a_1276_ = lean_ctor_get(v___x_1275_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1278_ = v___x_1275_;
v_isShared_1279_ = v_isSharedCheck_1289_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1275_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1289_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
uint8_t v___x_1280_; 
v___x_1280_ = lean_unbox(v_a_1276_);
lean_dec(v_a_1276_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; lean_object* v___x_1283_; 
lean_dec(v_v_1272_);
v___x_1281_ = lean_box(0);
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v___x_1281_);
v___x_1283_ = v___x_1278_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1281_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
else
{
lean_object* v___x_1285_; lean_object* v___x_1287_; 
v___x_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1285_, 0, v_v_1272_);
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v___x_1285_);
v___x_1287_ = v___x_1278_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1285_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
lean_dec(v_v_1272_);
v_a_1290_ = lean_ctor_get(v___x_1275_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1275_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1275_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_cast_x3f___boxed(lean_object* v_v_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Lasm_JS_Web_WebAssembly_Module_cast_x3f(v_v_1298_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0_spec__0(lean_object* v_x_1301_){
_start:
{
if (lean_obj_tag(v_x_1301_) == 0)
{
lean_object* v___x_1302_; 
v___x_1302_ = lean_box(0);
return v___x_1302_;
}
else
{
lean_object* v_val_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1313_; 
v_val_1303_ = lean_ctor_get(v_x_1301_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v_x_1301_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1305_ = v_x_1301_;
v_isShared_1306_ = v_isSharedCheck_1313_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_val_1303_);
lean_dec(v_x_1301_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1313_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
size_t v_sz_1307_; size_t v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1311_; 
v_sz_1307_ = lean_array_size(v_val_1303_);
v___x_1308_ = ((size_t)0ULL);
v___x_1309_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1307_, v___x_1308_, v_val_1303_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set_tag(v___x_1305_, 7);
lean_ctor_set(v___x_1305_, 0, v___x_1309_);
v___x_1311_ = v___x_1305_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(lean_object* v_x_1314_){
_start:
{
if (lean_obj_tag(v_x_1314_) == 0)
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_box(0);
return v___x_1315_;
}
else
{
lean_object* v_val_1316_; lean_object* v_importedStringConstants_1317_; lean_object* v_builtins_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1335_; 
v_val_1316_ = lean_ctor_get(v_x_1314_, 0);
lean_inc(v_val_1316_);
lean_dec_ref_known(v_x_1314_, 1);
v_importedStringConstants_1317_ = lean_ctor_get(v_val_1316_, 0);
v_builtins_1318_ = lean_ctor_get(v_val_1316_, 1);
v_isSharedCheck_1335_ = !lean_is_exclusive(v_val_1316_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1320_ = v_val_1316_;
v_isShared_1321_ = v_isSharedCheck_1335_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_builtins_1318_);
lean_inc(v_importedStringConstants_1317_);
lean_dec(v_val_1316_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1335_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1325_; 
v___x_1322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__0));
v___x_1323_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_importedStringConstants_1317_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 1, v___x_1323_);
lean_ctor_set(v___x_1320_, 0, v___x_1322_);
v___x_1325_ = v___x_1320_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1322_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1326_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebAssemblyCompileOptions___lam__0___closed__1));
v___x_1327_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0_spec__0(v_builtins_1318_);
v___x_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lean_unsigned_to_nat(2u);
v___x_1330_ = lean_mk_empty_array_with_capacity(v___x_1329_);
v___x_1331_ = lean_array_push(v___x_1330_, v___x_1325_);
v___x_1332_ = lean_array_push(v___x_1331_, v___x_1328_);
v___x_1333_ = l_Lasm_JS_Web_Support_fields(v___x_1332_);
lean_dec_ref(v___x_1332_);
return v___x_1333_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1340_ = lean_string_utf8_byte_size(v___x_1339_);
return v___x_1340_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__3);
v___x_1343_ = lean_nat_dec_eq(v___x_1342_, v___x_1341_);
return v___x_1343_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1348_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__8));
v___x_1349_ = lean_unsigned_to_nat(46u);
v___x_1350_ = lean_unsigned_to_nat(193u);
v___x_1351_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__7));
v___x_1352_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__6));
v___x_1353_ = l_mkPanicMessageWithDecl(v___x_1352_, v___x_1351_, v___x_1350_, v___x_1349_, v___x_1348_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(lean_object* v_context_1355_, lean_object* v_d_1356_){
_start:
{
lean_object* v___y_1359_; lean_object* v___y_1360_; 
if (lean_obj_tag(v_d_1356_) == 9)
{
lean_object* v_value_1364_; lean_object* v___x_1365_; 
v_value_1364_ = lean_ctor_get(v_d_1356_, 0);
lean_inc(v_value_1364_);
lean_dec_ref_known(v_d_1356_, 2);
v___x_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1365_, 0, v_value_1364_);
return v___x_1365_;
}
else
{
lean_object* v___x_1366_; lean_object* v_received_1368_; 
v___x_1366_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_1356_) == 9)
{
lean_object* v_value_1382_; lean_object* v_description_1383_; uint8_t v___x_1384_; 
v_value_1382_ = lean_ctor_get(v_d_1356_, 0);
v_description_1383_ = lean_ctor_get(v_d_1356_, 1);
v___x_1384_ = lean_string_dec_eq(v_description_1383_, v___x_1366_);
if (v___x_1384_ == 0)
{
goto v___jp_1380_;
}
else
{
uint32_t v___x_1385_; uint64_t v___x_1386_; lean_object* v___x_1387_; uint32_t v___x_1388_; lean_object* v___x_1389_; 
lean_inc_n(v_value_1382_, 2);
lean_dec_ref_known(v_d_1356_, 2);
v___x_1385_ = 206;
v___x_1386_ = 0ULL;
v___x_1387_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1387_, 0, v_value_1382_);
lean_ctor_set(v___x_1387_, 1, v___x_1366_);
v___x_1388_ = lasm_js_value_handle(v_value_1382_);
lean_dec(v_value_1382_);
v___x_1389_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1385_, v___x_1386_, v___x_1387_, v___x_1388_);
lean_dec_ref_known(v___x_1387_, 2);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v_a_1390_; uint8_t v___x_1391_; 
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_a_1390_);
lean_dec_ref_known(v___x_1389_, 1);
v___x_1391_ = lean_string_validate_utf8(v_a_1390_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
lean_dec(v_a_1390_);
v___x_1392_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_1393_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1392_);
v_received_1368_ = v___x_1393_;
goto v___jp_1367_;
}
else
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_string_from_utf8_unchecked(v_a_1390_);
v_received_1368_ = v___x_1394_;
goto v___jp_1367_;
}
}
else
{
lean_object* v___x_1395_; 
lean_dec_ref_known(v___x_1389_, 1);
v___x_1395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_1368_ = v___x_1395_;
goto v___jp_1367_;
}
}
}
else
{
goto v___jp_1380_;
}
v___jp_1367_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1369_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1370_ = lean_string_append(v___x_1369_, v_context_1355_);
v___x_1371_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1372_ = lean_string_append(v___x_1370_, v___x_1371_);
v___x_1373_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModule___closed__1));
v___x_1374_ = lean_string_append(v___x_1372_, v___x_1373_);
v___x_1375_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1376_ = lean_string_append(v___x_1374_, v___x_1375_);
v___x_1377_ = lean_string_append(v___x_1376_, v_received_1368_);
lean_dec_ref(v_received_1368_);
v___x_1378_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_1378_ == 0)
{
lean_object* v___x_1379_; 
v___x_1379_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_1359_ = v___x_1377_;
v___y_1360_ = v___x_1379_;
goto v___jp_1358_;
}
else
{
v___y_1359_ = v___x_1377_;
v___y_1360_ = v___x_1366_;
goto v___jp_1358_;
}
}
v___jp_1380_:
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lasm_JS_Data_describe(v_d_1356_);
v_received_1368_ = v___x_1381_;
goto v___jp_1367_;
}
}
v___jp_1358_:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1361_ = lean_string_append(v___y_1359_, v___y_1360_);
v___x_1362_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
v___x_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
return v___x_1363_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___boxed(lean_object* v_context_1396_, lean_object* v_d_1397_, lean_object* v_a_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(v_context_1396_, v_d_1397_);
lean_dec_ref(v_context_1396_);
return v_res_1399_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_1401_; uint64_t v___x_1402_; 
v___x_1401_ = 0;
v___x_1402_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1401_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(lean_object* v_b_1403_, lean_object* v_args_1404_, uint8_t v_await_1405_){
_start:
{
uint64_t v___y_1408_; uint64_t v___y_1409_; uint64_t v___x_1452_; uint64_t v___y_1454_; 
v___x_1452_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1405_ == 0)
{
uint64_t v___x_1459_; 
v___x_1459_ = 0ULL;
v___y_1454_ = v___x_1459_;
goto v___jp_1453_;
}
else
{
uint64_t v___x_1460_; 
v___x_1460_ = 2ULL;
v___y_1454_ = v___x_1460_;
goto v___jp_1453_;
}
v___jp_1407_:
{
uint64_t v_flags_1410_; uint32_t v___x_1411_; lean_object* v___x_1412_; uint32_t v___x_1413_; lean_object* v___x_1414_; 
v_flags_1410_ = lean_uint64_lor(v___y_1408_, v___y_1409_);
v___x_1411_ = 214;
v___x_1412_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1403_, v_args_1404_);
v___x_1413_ = 0;
v___x_1414_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1411_, v_flags_1410_, v___x_1412_, v___x_1413_);
lean_dec(v___x_1412_);
if (lean_obj_tag(v___x_1414_) == 0)
{
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1416_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1415_);
lean_dec_ref_known(v___x_1414_, 1);
v___x_1416_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1415_);
lean_dec(v_a_1415_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
v___x_1418_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1403_);
v___x_1419_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2(v___x_1418_, v_a_1417_);
lean_dec_ref(v___x_1418_);
return v___x_1419_;
}
else
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1427_; 
v_a_1420_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1422_ = v___x_1416_;
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1416_);
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
else
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
v_a_1428_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v___x_1414_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v___x_1414_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
lean_ctor_set_tag(v___x_1430_, 1);
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1428_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1451_; 
v_a_1436_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1438_ = v___x_1414_;
v_isShared_1439_ = v_isSharedCheck_1451_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1414_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1451_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1441_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1403_);
v___x_1442_ = lean_string_append(v___x_1440_, v___x_1441_);
lean_dec_ref(v___x_1441_);
v___x_1443_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1444_ = lean_string_append(v___x_1442_, v___x_1443_);
v___x_1445_ = lean_io_error_to_string(v_a_1436_);
v___x_1446_ = lean_string_append(v___x_1444_, v___x_1445_);
lean_dec_ref(v___x_1445_);
v___x_1447_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v___x_1447_);
v___x_1449_ = v___x_1438_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1447_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
v___jp_1453_:
{
uint8_t v_construct_1455_; uint64_t v___x_1456_; 
v_construct_1455_ = lean_ctor_get_uint8(v_b_1403_, sizeof(void*)*4);
v___x_1456_ = lean_uint64_lor(v___x_1452_, v___y_1454_);
if (v_construct_1455_ == 0)
{
uint64_t v___x_1457_; 
v___x_1457_ = 0ULL;
v___y_1408_ = v___x_1456_;
v___y_1409_ = v___x_1457_;
goto v___jp_1407_;
}
else
{
uint64_t v___x_1458_; 
v___x_1458_ = 4ULL;
v___y_1408_ = v___x_1456_;
v___y_1409_ = v___x_1458_;
goto v___jp_1407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___boxed(lean_object* v_b_1461_, lean_object* v_args_1462_, lean_object* v_await_1463_, lean_object* v_a_1464_){
_start:
{
uint8_t v_await_boxed_1465_; lean_object* v_res_1466_; 
v_await_boxed_1465_ = lean_unbox(v_await_1463_);
v_res_1466_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(v_b_1461_, v_args_1462_, v_await_boxed_1465_);
lean_dec_ref(v_b_1461_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_new(lean_object* v_bytes_1476_, lean_object* v_options_1477_){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; lean_object* v___x_1488_; 
v___x_1479_ = lean_unsigned_to_nat(2u);
v___x_1480_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_new___closed__3));
v___x_1481_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1481_, 0, v_bytes_1476_);
v___x_1482_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_1477_);
v___x_1483_ = lean_mk_empty_array_with_capacity(v___x_1479_);
v___x_1484_ = lean_array_push(v___x_1483_, v___x_1481_);
v___x_1485_ = lean_array_push(v___x_1484_, v___x_1482_);
v___x_1486_ = l_Lasm_JS_Web_Support_args(v___x_1485_);
v___x_1487_ = 0;
v___x_1488_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1(v___x_1480_, v___x_1486_, v___x_1487_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_new___boxed(lean_object* v_bytes_1489_, lean_object* v_options_1490_, lean_object* v_a_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lasm_JS_Web_WebAssembly_Module_new(v_bytes_1489_, v_options_1490_);
return v_res_1492_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__0));
v___x_1497_ = lean_string_utf8_byte_size(v___x_1496_);
return v___x_1497_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; uint8_t v___x_1500_; 
v___x_1498_ = lean_unsigned_to_nat(0u);
v___x_1499_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__3);
v___x_1500_ = lean_nat_dec_eq(v___x_1499_, v___x_1498_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(lean_object* v_d_1505_, lean_object* v_key_1506_){
_start:
{
if (lean_obj_tag(v_d_1505_) == 8)
{
lean_object* v___x_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1547_; 
v___x_1507_ = l_Lasm_JS_Data_field(v_d_1505_, v_key_1506_);
v_isSharedCheck_1547_ = !lean_is_exclusive(v_d_1505_);
if (v_isSharedCheck_1547_ == 0)
{
lean_object* v_unused_1548_; 
v_unused_1548_ = lean_ctor_get(v_d_1505_, 0);
lean_dec(v_unused_1548_);
v___x_1509_ = v_d_1505_;
v_isShared_1510_ = v_isSharedCheck_1547_;
goto v_resetjp_1508_;
}
else
{
lean_dec(v_d_1505_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1547_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
if (lean_obj_tag(v___x_1507_) == 4)
{
lean_object* v_s_1531_; lean_object* v___x_1532_; uint8_t v___x_1533_; 
v_s_1531_ = lean_ctor_get(v___x_1507_, 0);
lean_inc_ref(v_s_1531_);
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__0));
v___x_1533_ = lean_string_dec_eq(v_s_1531_, v___x_1532_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1534_; uint8_t v___x_1535_; 
v___x_1534_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__2));
v___x_1535_ = lean_string_dec_eq(v_s_1531_, v___x_1534_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; uint8_t v___x_1537_; 
v___x_1536_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__4));
v___x_1537_ = lean_string_dec_eq(v_s_1531_, v___x_1536_);
if (v___x_1537_ == 0)
{
lean_object* v___x_1538_; uint8_t v___x_1539_; 
v___x_1538_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__6));
v___x_1539_ = lean_string_dec_eq(v_s_1531_, v___x_1538_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; uint8_t v___x_1541_; 
v___x_1540_ = ((lean_object*)(l_Lasm_JS_Web_instToJSImportExportKind___lam__0___closed__8));
v___x_1541_ = lean_string_dec_eq(v_s_1531_, v___x_1540_);
lean_dec_ref(v_s_1531_);
if (v___x_1541_ == 0)
{
goto v___jp_1511_;
}
else
{
lean_object* v___x_1542_; 
lean_dec_ref_known(v___x_1507_, 1);
lean_del_object(v___x_1509_);
v___x_1542_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__2));
return v___x_1542_;
}
}
else
{
lean_object* v___x_1543_; 
lean_dec_ref_known(v___x_1507_, 1);
lean_dec_ref(v_s_1531_);
lean_del_object(v___x_1509_);
v___x_1543_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__3));
return v___x_1543_;
}
}
else
{
lean_object* v___x_1544_; 
lean_dec_ref_known(v___x_1507_, 1);
lean_dec_ref(v_s_1531_);
lean_del_object(v___x_1509_);
v___x_1544_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__4));
return v___x_1544_;
}
}
else
{
lean_object* v___x_1545_; 
lean_dec_ref_known(v___x_1507_, 1);
lean_dec_ref(v_s_1531_);
lean_del_object(v___x_1509_);
v___x_1545_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__5));
return v___x_1545_;
}
}
else
{
lean_object* v___x_1546_; 
lean_dec_ref_known(v___x_1507_, 1);
lean_dec_ref(v_s_1531_);
lean_del_object(v___x_1509_);
v___x_1546_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___lam__0___closed__6));
return v___x_1546_;
}
}
else
{
goto v___jp_1511_;
}
v___jp_1511_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; 
v___x_1512_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_1513_ = lean_string_append(v___x_1512_, v_key_1506_);
v___x_1514_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_1515_ = lean_string_append(v___x_1513_, v___x_1514_);
v___x_1516_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSImportExportKind___closed__1));
v___x_1517_ = lean_string_append(v___x_1515_, v___x_1516_);
v___x_1518_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_1519_ = lean_string_append(v___x_1517_, v___x_1518_);
v___x_1520_ = l_Lasm_JS_Data_describe(v___x_1507_);
v___x_1521_ = lean_string_append(v___x_1519_, v___x_1520_);
lean_dec_ref(v___x_1520_);
v___x_1522_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__4);
if (v___x_1522_ == 0)
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1526_; 
v___x_1523_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__5));
v___x_1524_ = lean_string_append(v___x_1521_, v___x_1523_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set_tag(v___x_1509_, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1524_);
v___x_1526_ = v___x_1509_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1524_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
else
{
lean_object* v___x_1529_; 
if (v_isShared_1510_ == 0)
{
lean_ctor_set_tag(v___x_1509_, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1521_);
v___x_1529_ = v___x_1509_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1521_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
}
else
{
lean_object* v___x_1549_; 
lean_dec(v_d_1505_);
v___x_1549_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__7));
return v___x_1549_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1550_, lean_object* v_key_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_d_1550_, v_key_1551_);
lean_dec_ref(v_key_1551_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(lean_object* v_d_1556_, lean_object* v_key_1557_){
_start:
{
if (lean_obj_tag(v_d_1556_) == 8)
{
lean_object* v___x_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1589_; 
v___x_1558_ = l_Lasm_JS_Data_field(v_d_1556_, v_key_1557_);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_d_1556_);
if (v_isSharedCheck_1589_ == 0)
{
lean_object* v_unused_1590_; 
v_unused_1590_ = lean_ctor_get(v_d_1556_, 0);
lean_dec(v_unused_1590_);
v___x_1560_ = v_d_1556_;
v_isShared_1561_ = v_isSharedCheck_1589_;
goto v_resetjp_1559_;
}
else
{
lean_dec(v_d_1556_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1589_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
if (lean_obj_tag(v___x_1558_) == 4)
{
lean_object* v_s_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
lean_del_object(v___x_1560_);
v_s_1562_ = lean_ctor_get(v___x_1558_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1558_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_s_1562_);
lean_dec(v___x_1558_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 1);
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_s_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; uint8_t v___x_1580_; 
v___x_1570_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_1571_ = lean_string_append(v___x_1570_, v_key_1557_);
v___x_1572_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_1573_ = lean_string_append(v___x_1571_, v___x_1572_);
v___x_1574_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__0));
v___x_1575_ = lean_string_append(v___x_1573_, v___x_1574_);
v___x_1576_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_1577_ = lean_string_append(v___x_1575_, v___x_1576_);
v___x_1578_ = l_Lasm_JS_Data_describe(v___x_1558_);
v___x_1579_ = lean_string_append(v___x_1577_, v___x_1578_);
lean_dec_ref(v___x_1578_);
v___x_1580_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1584_; 
v___x_1581_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___x_1582_ = lean_string_append(v___x_1579_, v___x_1581_);
if (v_isShared_1561_ == 0)
{
lean_ctor_set_tag(v___x_1560_, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1582_);
v___x_1584_ = v___x_1560_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v___x_1582_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
else
{
lean_object* v___x_1587_; 
if (v_isShared_1561_ == 0)
{
lean_ctor_set_tag(v___x_1560_, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1579_);
v___x_1587_ = v___x_1560_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1579_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
else
{
lean_object* v___x_1591_; 
lean_dec(v_d_1556_);
v___x_1591_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___closed__1));
return v___x_1591_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1592_, lean_object* v_key_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_d_1592_, v_key_1593_);
lean_dec_ref(v_key_1593_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(size_t v_sz_1595_, size_t v_i_1596_, lean_object* v_bs_1597_){
_start:
{
uint8_t v___x_1598_; 
v___x_1598_ = lean_usize_dec_lt(v_i_1596_, v_sz_1595_);
if (v___x_1598_ == 0)
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1599_, 0, v_bs_1597_);
return v___x_1599_;
}
else
{
lean_object* v_v_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v_v_1600_ = lean_array_uget_borrowed(v_bs_1597_, v_i_1596_);
v___x_1601_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
lean_inc(v_v_1600_);
v___x_1602_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1600_, v___x_1601_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
lean_dec_ref(v_bs_1597_);
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1602_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1602_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1603_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v_a_1611_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1611_);
lean_dec_ref_known(v___x_1602_, 1);
v___x_1612_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1));
lean_inc(v_v_1600_);
v___x_1613_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_v_1600_, v___x_1612_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
lean_dec(v_a_1611_);
lean_dec_ref(v_bs_1597_);
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1623_; lean_object* v_bs_x27_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; size_t v___x_1627_; size_t v___x_1628_; lean_object* v___x_1629_; 
v_a_1622_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1613_, 1);
v___x_1623_ = lean_unsigned_to_nat(0u);
v_bs_x27_1624_ = lean_array_uset(v_bs_1597_, v_i_1596_, v___x_1623_);
v___x_1625_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1625_, 0, v_a_1611_);
v___x_1626_ = lean_unbox(v_a_1622_);
lean_dec(v_a_1622_);
lean_ctor_set_uint8(v___x_1625_, sizeof(void*)*1, v___x_1626_);
v___x_1627_ = ((size_t)1ULL);
v___x_1628_ = lean_usize_add(v_i_1596_, v___x_1627_);
v___x_1629_ = lean_array_uset(v_bs_x27_1624_, v_i_1596_, v___x_1625_);
v_i_1596_ = v___x_1628_;
v_bs_1597_ = v___x_1629_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3___boxed(lean_object* v_sz_1631_, lean_object* v_i_1632_, lean_object* v_bs_1633_){
_start:
{
size_t v_sz_boxed_1634_; size_t v_i_boxed_1635_; lean_object* v_res_1636_; 
v_sz_boxed_1634_ = lean_unbox_usize(v_sz_1631_);
lean_dec(v_sz_1631_);
v_i_boxed_1635_ = lean_unbox_usize(v_i_1632_);
lean_dec(v_i_1632_);
v_res_1636_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(v_sz_boxed_1634_, v_i_boxed_1635_, v_bs_1633_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(lean_object* v_context_1641_, lean_object* v_d_1642_){
_start:
{
lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1651_; lean_object* v_received_1652_; lean_object* v___y_1671_; lean_object* v_a_1674_; 
if (lean_obj_tag(v_d_1642_) == 7)
{
lean_object* v_items_1698_; size_t v_sz_1699_; size_t v___x_1700_; lean_object* v___x_1701_; 
v_items_1698_ = lean_ctor_get(v_d_1642_, 0);
v_sz_1699_ = lean_array_size(v_items_1698_);
v___x_1700_ = ((size_t)0ULL);
lean_inc_ref(v_items_1698_);
v___x_1701_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__3(v_sz_1699_, v___x_1700_, v_items_1698_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; uint8_t v___x_1706_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1702_);
lean_dec_ref_known(v___x_1701_, 1);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__3));
v___x_1704_ = lean_string_utf8_byte_size(v_a_1702_);
v___x_1705_ = lean_unsigned_to_nat(0u);
v___x_1706_ = lean_nat_dec_eq(v___x_1704_, v___x_1705_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1708_ = lean_string_append(v___x_1707_, v_a_1702_);
lean_dec(v_a_1702_);
v___x_1709_ = lean_string_append(v___x_1703_, v___x_1708_);
lean_dec_ref(v___x_1708_);
v_a_1674_ = v___x_1709_;
goto v___jp_1673_;
}
else
{
lean_dec(v_a_1702_);
v_a_1674_ = v___x_1703_;
goto v___jp_1673_;
}
}
else
{
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1710_; 
v_a_1710_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1710_);
lean_dec_ref_known(v___x_1701_, 1);
v_a_1674_ = v_a_1710_;
goto v___jp_1673_;
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
lean_dec_ref_known(v_d_1642_, 1);
v_a_1711_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1701_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1701_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set_tag(v___x_1713_, 0);
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
else
{
lean_object* v___x_1719_; 
v___x_1719_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_1674_ = v___x_1719_;
goto v___jp_1673_;
}
v___jp_1644_:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1647_ = lean_string_append(v___y_1645_, v___y_1646_);
lean_dec_ref(v___y_1646_);
v___x_1648_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
v___x_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1648_);
return v___x_1649_;
}
v___jp_1650_:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; 
v___x_1653_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1654_ = lean_string_append(v___x_1653_, v_context_1641_);
v___x_1655_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1656_ = lean_string_append(v___x_1654_, v___x_1655_);
v___x_1657_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__0));
v___x_1658_ = lean_string_append(v___x_1656_, v___x_1657_);
v___x_1659_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1660_ = lean_string_append(v___x_1658_, v___x_1659_);
v___x_1661_ = lean_string_append(v___x_1660_, v_received_1652_);
lean_dec_ref(v_received_1652_);
v___x_1662_ = lean_string_utf8_byte_size(v___y_1651_);
v___x_1663_ = lean_unsigned_to_nat(0u);
v___x_1664_ = lean_nat_dec_eq(v___x_1662_, v___x_1663_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1665_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_1666_ = lean_string_append(v___x_1665_, v___y_1651_);
lean_dec_ref(v___y_1651_);
v___x_1667_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_1668_ = lean_string_append(v___x_1666_, v___x_1667_);
v___y_1645_ = v___x_1661_;
v___y_1646_ = v___x_1668_;
goto v___jp_1644_;
}
else
{
lean_object* v___x_1669_; 
lean_dec_ref(v___y_1651_);
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_1645_ = v___x_1661_;
v___y_1646_ = v___x_1669_;
goto v___jp_1644_;
}
}
v___jp_1670_:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Lasm_JS_Data_describe(v_d_1642_);
v___y_1651_ = v___y_1671_;
v_received_1652_ = v___x_1672_;
goto v___jp_1650_;
}
v___jp_1673_:
{
if (lean_obj_tag(v_d_1642_) == 9)
{
lean_object* v_value_1675_; lean_object* v_description_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; 
v_value_1675_ = lean_ctor_get(v_d_1642_, 0);
v_description_1676_ = lean_ctor_get(v_d_1642_, 1);
v___x_1677_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1678_ = lean_string_dec_eq(v_description_1676_, v___x_1677_);
if (v___x_1678_ == 0)
{
v___y_1671_ = v_a_1674_;
goto v___jp_1670_;
}
else
{
lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1695_; 
lean_inc(v_value_1675_);
v_isSharedCheck_1695_ = !lean_is_exclusive(v_d_1642_);
if (v_isSharedCheck_1695_ == 0)
{
lean_object* v_unused_1696_; lean_object* v_unused_1697_; 
v_unused_1696_ = lean_ctor_get(v_d_1642_, 1);
lean_dec(v_unused_1696_);
v_unused_1697_ = lean_ctor_get(v_d_1642_, 0);
lean_dec(v_unused_1697_);
v___x_1680_ = v_d_1642_;
v_isShared_1681_ = v_isSharedCheck_1695_;
goto v_resetjp_1679_;
}
else
{
lean_dec(v_d_1642_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1695_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
uint32_t v___x_1682_; uint64_t v___x_1683_; lean_object* v___x_1685_; 
v___x_1682_ = 206;
v___x_1683_ = 0ULL;
lean_inc(v_value_1675_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1677_);
v___x_1685_ = v___x_1680_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_value_1675_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v___x_1677_);
v___x_1685_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
uint32_t v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = lasm_js_value_handle(v_value_1675_);
lean_dec(v_value_1675_);
v___x_1687_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1682_, v___x_1683_, v___x_1685_, v___x_1686_);
lean_dec_ref(v___x_1685_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; uint8_t v___x_1689_; 
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1687_, 1);
v___x_1689_ = lean_string_validate_utf8(v_a_1688_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
lean_dec(v_a_1688_);
v___x_1690_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_1691_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1690_);
v___y_1651_ = v_a_1674_;
v_received_1652_ = v___x_1691_;
goto v___jp_1650_;
}
else
{
lean_object* v___x_1692_; 
v___x_1692_ = lean_string_from_utf8_unchecked(v_a_1688_);
v___y_1651_ = v_a_1674_;
v_received_1652_ = v___x_1692_;
goto v___jp_1650_;
}
}
else
{
lean_object* v___x_1693_; 
lean_dec_ref_known(v___x_1687_, 1);
v___x_1693_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v___y_1651_ = v_a_1674_;
v_received_1652_ = v___x_1693_;
goto v___jp_1650_;
}
}
}
}
}
else
{
v___y_1671_ = v_a_1674_;
goto v___jp_1670_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___boxed(lean_object* v_context_1720_, lean_object* v_d_1721_, lean_object* v_a_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(v_context_1720_, v_d_1721_);
lean_dec_ref(v_context_1720_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(lean_object* v_b_1724_, lean_object* v_args_1725_, uint8_t v_await_1726_){
_start:
{
uint64_t v___y_1729_; uint64_t v___y_1730_; uint64_t v___x_1773_; uint64_t v___y_1775_; 
v___x_1773_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1726_ == 0)
{
uint64_t v___x_1780_; 
v___x_1780_ = 0ULL;
v___y_1775_ = v___x_1780_;
goto v___jp_1774_;
}
else
{
uint64_t v___x_1781_; 
v___x_1781_ = 2ULL;
v___y_1775_ = v___x_1781_;
goto v___jp_1774_;
}
v___jp_1728_:
{
uint64_t v_flags_1731_; uint32_t v___x_1732_; lean_object* v___x_1733_; uint32_t v___x_1734_; lean_object* v___x_1735_; 
v_flags_1731_ = lean_uint64_lor(v___y_1729_, v___y_1730_);
v___x_1732_ = 214;
v___x_1733_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1724_, v_args_1725_);
v___x_1734_ = 0;
v___x_1735_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1732_, v_flags_1731_, v___x_1733_, v___x_1734_);
lean_dec(v___x_1733_);
if (lean_obj_tag(v___x_1735_) == 0)
{
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1737_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v___x_1737_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1736_);
lean_dec(v_a_1736_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
v___x_1739_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1724_);
v___x_1740_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0(v___x_1739_, v_a_1738_);
lean_dec_ref(v___x_1739_);
return v___x_1740_;
}
else
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1748_; 
v_a_1741_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1743_ = v___x_1737_;
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1737_);
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
v_a_1749_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1735_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1735_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
lean_ctor_set_tag(v___x_1751_, 1);
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
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1772_; 
v_a_1757_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1759_ = v___x_1735_;
v_isShared_1760_ = v_isSharedCheck_1772_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1735_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1772_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1770_; 
v___x_1761_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1762_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1724_);
v___x_1763_ = lean_string_append(v___x_1761_, v___x_1762_);
lean_dec_ref(v___x_1762_);
v___x_1764_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1765_ = lean_string_append(v___x_1763_, v___x_1764_);
v___x_1766_ = lean_io_error_to_string(v_a_1757_);
v___x_1767_ = lean_string_append(v___x_1765_, v___x_1766_);
lean_dec_ref(v___x_1766_);
v___x_1768_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1767_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v___x_1768_);
v___x_1770_ = v___x_1759_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v___x_1768_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
v___jp_1774_:
{
uint8_t v_construct_1776_; uint64_t v___x_1777_; 
v_construct_1776_ = lean_ctor_get_uint8(v_b_1724_, sizeof(void*)*4);
v___x_1777_ = lean_uint64_lor(v___x_1773_, v___y_1775_);
if (v_construct_1776_ == 0)
{
uint64_t v___x_1778_; 
v___x_1778_ = 0ULL;
v___y_1729_ = v___x_1777_;
v___y_1730_ = v___x_1778_;
goto v___jp_1728_;
}
else
{
uint64_t v___x_1779_; 
v___x_1779_ = 4ULL;
v___y_1729_ = v___x_1777_;
v___y_1730_ = v___x_1779_;
goto v___jp_1728_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0___boxed(lean_object* v_b_1782_, lean_object* v_args_1783_, lean_object* v_await_1784_, lean_object* v_a_1785_){
_start:
{
uint8_t v_await_boxed_1786_; lean_object* v_res_1787_; 
v_await_boxed_1786_ = lean_unbox(v_await_1784_);
v_res_1787_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(v_b_1782_, v_args_1783_, v_await_boxed_1786_);
lean_dec_ref(v_b_1782_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports(lean_object* v_moduleObject_1796_){
_start:
{
uint8_t v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1798_ = 0;
v___x_1799_ = lean_unsigned_to_nat(1u);
v___x_1800_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_exports___closed__2));
v___x_1801_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1802_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1802_, 0, v_moduleObject_1796_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
v___x_1803_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1804_ = lean_array_push(v___x_1803_, v___x_1802_);
v___x_1805_ = l_Lasm_JS_Web_Support_args(v___x_1804_);
v___x_1806_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0(v___x_1800_, v___x_1805_, v___x_1798_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_exports___boxed(lean_object* v_moduleObject_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lasm_JS_Web_WebAssembly_Module_exports(v_moduleObject_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(size_t v_sz_1810_, size_t v_i_1811_, lean_object* v_bs_1812_){
_start:
{
uint8_t v___x_1813_; 
v___x_1813_ = lean_usize_dec_lt(v_i_1811_, v_sz_1810_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; 
v___x_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1814_, 0, v_bs_1812_);
return v___x_1814_;
}
else
{
lean_object* v_v_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v_v_1815_ = lean_array_uget_borrowed(v_bs_1812_, v_i_1811_);
v___x_1816_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0));
lean_inc(v_v_1815_);
v___x_1817_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1815_, v___x_1816_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec_ref(v_bs_1812_);
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
lean_object* v_a_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_a_1826_ = lean_ctor_get(v___x_1817_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v___x_1817_, 1);
v___x_1827_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
lean_inc(v_v_1815_);
v___x_1828_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__1(v_v_1815_, v___x_1827_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_dec(v_a_1826_);
lean_dec_ref(v_bs_1812_);
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
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v_a_1837_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1828_, 1);
v___x_1838_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__1));
lean_inc(v_v_1815_);
v___x_1839_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2(v_v_1815_, v___x_1838_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
lean_dec(v_a_1837_);
lean_dec(v_a_1826_);
lean_dec_ref(v_bs_1812_);
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1839_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1839_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1849_; lean_object* v_bs_x27_1850_; lean_object* v___x_1851_; uint8_t v___x_1852_; size_t v___x_1853_; size_t v___x_1854_; lean_object* v___x_1855_; 
v_a_1848_ = lean_ctor_get(v___x_1839_, 0);
lean_inc(v_a_1848_);
lean_dec_ref_known(v___x_1839_, 1);
v___x_1849_ = lean_unsigned_to_nat(0u);
v_bs_x27_1850_ = lean_array_uset(v_bs_1812_, v_i_1811_, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1851_, 0, v_a_1826_);
lean_ctor_set(v___x_1851_, 1, v_a_1837_);
v___x_1852_ = lean_unbox(v_a_1848_);
lean_dec(v_a_1848_);
lean_ctor_set_uint8(v___x_1851_, sizeof(void*)*2, v___x_1852_);
v___x_1853_ = ((size_t)1ULL);
v___x_1854_ = lean_usize_add(v_i_1811_, v___x_1853_);
v___x_1855_ = lean_array_uset(v_bs_x27_1850_, v_i_1811_, v___x_1851_);
v_i_1811_ = v___x_1854_;
v_bs_1812_ = v___x_1855_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_1857_, lean_object* v_i_1858_, lean_object* v_bs_1859_){
_start:
{
size_t v_sz_boxed_1860_; size_t v_i_boxed_1861_; lean_object* v_res_1862_; 
v_sz_boxed_1860_ = lean_unbox_usize(v_sz_1857_);
lean_dec(v_sz_1857_);
v_i_boxed_1861_ = lean_unbox_usize(v_i_1858_);
lean_dec(v_i_1858_);
v_res_1862_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(v_sz_boxed_1860_, v_i_boxed_1861_, v_bs_1859_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(lean_object* v_context_1865_, lean_object* v_d_1866_){
_start:
{
lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___y_1875_; lean_object* v_received_1876_; lean_object* v___y_1895_; lean_object* v_a_1898_; 
if (lean_obj_tag(v_d_1866_) == 7)
{
lean_object* v_items_1922_; size_t v_sz_1923_; size_t v___x_1924_; lean_object* v___x_1925_; 
v_items_1922_ = lean_ctor_get(v_d_1866_, 0);
v_sz_1923_ = lean_array_size(v_items_1922_);
v___x_1924_ = ((size_t)0ULL);
lean_inc_ref(v_items_1922_);
v___x_1925_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0_spec__1(v_sz_1923_, v___x_1924_, v_items_1922_);
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v_a_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; uint8_t v___x_1930_; 
v_a_1926_ = lean_ctor_get(v___x_1925_, 0);
lean_inc(v_a_1926_);
lean_dec_ref_known(v___x_1925_, 1);
v___x_1927_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__1));
v___x_1928_ = lean_string_utf8_byte_size(v_a_1926_);
v___x_1929_ = lean_unsigned_to_nat(0u);
v___x_1930_ = lean_nat_dec_eq(v___x_1928_, v___x_1929_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1931_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1932_ = lean_string_append(v___x_1931_, v_a_1926_);
lean_dec(v_a_1926_);
v___x_1933_ = lean_string_append(v___x_1927_, v___x_1932_);
lean_dec_ref(v___x_1932_);
v_a_1898_ = v___x_1933_;
goto v___jp_1897_;
}
else
{
lean_dec(v_a_1926_);
v_a_1898_ = v___x_1927_;
goto v___jp_1897_;
}
}
else
{
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v_a_1934_; 
v_a_1934_ = lean_ctor_get(v___x_1925_, 0);
lean_inc(v_a_1934_);
lean_dec_ref_known(v___x_1925_, 1);
v_a_1898_ = v_a_1934_;
goto v___jp_1897_;
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
lean_dec_ref_known(v_d_1866_, 1);
v_a_1935_ = lean_ctor_get(v___x_1925_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1925_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1925_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
lean_ctor_set_tag(v___x_1937_, 0);
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
}
else
{
lean_object* v___x_1943_; 
v___x_1943_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_1898_ = v___x_1943_;
goto v___jp_1897_;
}
v___jp_1868_:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1871_ = lean_string_append(v___y_1869_, v___y_1870_);
lean_dec_ref(v___y_1870_);
v___x_1872_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
v___x_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
return v___x_1873_;
}
v___jp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; uint8_t v___x_1888_; 
v___x_1877_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1878_ = lean_string_append(v___x_1877_, v_context_1865_);
v___x_1879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_1880_ = lean_string_append(v___x_1878_, v___x_1879_);
v___x_1881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___closed__0));
v___x_1882_ = lean_string_append(v___x_1880_, v___x_1881_);
v___x_1883_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_1884_ = lean_string_append(v___x_1882_, v___x_1883_);
v___x_1885_ = lean_string_append(v___x_1884_, v_received_1876_);
lean_dec_ref(v_received_1876_);
v___x_1886_ = lean_string_utf8_byte_size(v___y_1875_);
v___x_1887_ = lean_unsigned_to_nat(0u);
v___x_1888_ = lean_nat_dec_eq(v___x_1886_, v___x_1887_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1889_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_1890_ = lean_string_append(v___x_1889_, v___y_1875_);
lean_dec_ref(v___y_1875_);
v___x_1891_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_1892_ = lean_string_append(v___x_1890_, v___x_1891_);
v___y_1869_ = v___x_1885_;
v___y_1870_ = v___x_1892_;
goto v___jp_1868_;
}
else
{
lean_object* v___x_1893_; 
lean_dec_ref(v___y_1875_);
v___x_1893_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_1869_ = v___x_1885_;
v___y_1870_ = v___x_1893_;
goto v___jp_1868_;
}
}
v___jp_1894_:
{
lean_object* v___x_1896_; 
v___x_1896_ = l_Lasm_JS_Data_describe(v_d_1866_);
v___y_1875_ = v___y_1895_;
v_received_1876_ = v___x_1896_;
goto v___jp_1874_;
}
v___jp_1897_:
{
if (lean_obj_tag(v_d_1866_) == 9)
{
lean_object* v_value_1899_; lean_object* v_description_1900_; lean_object* v___x_1901_; uint8_t v___x_1902_; 
v_value_1899_ = lean_ctor_get(v_d_1866_, 0);
v_description_1900_ = lean_ctor_get(v_d_1866_, 1);
v___x_1901_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_1902_ = lean_string_dec_eq(v_description_1900_, v___x_1901_);
if (v___x_1902_ == 0)
{
v___y_1895_ = v_a_1898_;
goto v___jp_1894_;
}
else
{
lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1919_; 
lean_inc(v_value_1899_);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_d_1866_);
if (v_isSharedCheck_1919_ == 0)
{
lean_object* v_unused_1920_; lean_object* v_unused_1921_; 
v_unused_1920_ = lean_ctor_get(v_d_1866_, 1);
lean_dec(v_unused_1920_);
v_unused_1921_ = lean_ctor_get(v_d_1866_, 0);
lean_dec(v_unused_1921_);
v___x_1904_ = v_d_1866_;
v_isShared_1905_ = v_isSharedCheck_1919_;
goto v_resetjp_1903_;
}
else
{
lean_dec(v_d_1866_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1919_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
uint32_t v___x_1906_; uint64_t v___x_1907_; lean_object* v___x_1909_; 
v___x_1906_ = 206;
v___x_1907_ = 0ULL;
lean_inc(v_value_1899_);
if (v_isShared_1905_ == 0)
{
lean_ctor_set(v___x_1904_, 1, v___x_1901_);
v___x_1909_ = v___x_1904_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_value_1899_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v___x_1901_);
v___x_1909_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
uint32_t v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lasm_js_value_handle(v_value_1899_);
lean_dec(v_value_1899_);
v___x_1911_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1906_, v___x_1907_, v___x_1909_, v___x_1910_);
lean_dec_ref(v___x_1909_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; uint8_t v___x_1913_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
v___x_1913_ = lean_string_validate_utf8(v_a_1912_);
if (v___x_1913_ == 0)
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
lean_dec(v_a_1912_);
v___x_1914_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_1915_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1914_);
v___y_1875_ = v_a_1898_;
v_received_1876_ = v___x_1915_;
goto v___jp_1874_;
}
else
{
lean_object* v___x_1916_; 
v___x_1916_ = lean_string_from_utf8_unchecked(v_a_1912_);
v___y_1875_ = v_a_1898_;
v_received_1876_ = v___x_1916_;
goto v___jp_1874_;
}
}
else
{
lean_object* v___x_1917_; 
lean_dec_ref_known(v___x_1911_, 1);
v___x_1917_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v___y_1875_ = v_a_1898_;
v_received_1876_ = v___x_1917_;
goto v___jp_1874_;
}
}
}
}
}
else
{
v___y_1895_ = v_a_1898_;
goto v___jp_1894_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0___boxed(lean_object* v_context_1944_, lean_object* v_d_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(v_context_1944_, v_d_1945_);
lean_dec_ref(v_context_1944_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(lean_object* v_b_1948_, lean_object* v_args_1949_, uint8_t v_await_1950_){
_start:
{
uint64_t v___y_1953_; uint64_t v___y_1954_; uint64_t v___x_1997_; uint64_t v___y_1999_; 
v___x_1997_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_1950_ == 0)
{
uint64_t v___x_2004_; 
v___x_2004_ = 0ULL;
v___y_1999_ = v___x_2004_;
goto v___jp_1998_;
}
else
{
uint64_t v___x_2005_; 
v___x_2005_ = 2ULL;
v___y_1999_ = v___x_2005_;
goto v___jp_1998_;
}
v___jp_1952_:
{
uint64_t v_flags_1955_; uint32_t v___x_1956_; lean_object* v___x_1957_; uint32_t v___x_1958_; lean_object* v___x_1959_; 
v_flags_1955_ = lean_uint64_lor(v___y_1953_, v___y_1954_);
v___x_1956_ = 214;
v___x_1957_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1948_, v_args_1949_);
v___x_1958_ = 0;
v___x_1959_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1956_, v_flags_1955_, v___x_1957_, v___x_1958_);
lean_dec(v___x_1957_);
if (lean_obj_tag(v___x_1959_) == 0)
{
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; lean_object* v___x_1961_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref_known(v___x_1959_, 1);
v___x_1961_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1960_);
lean_dec(v_a_1960_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref_known(v___x_1961_, 1);
v___x_1963_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1948_);
v___x_1964_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0_spec__0(v___x_1963_, v_a_1962_);
lean_dec_ref(v___x_1963_);
return v___x_1964_;
}
else
{
lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1972_; 
v_a_1965_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1967_ = v___x_1961_;
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v___x_1961_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1970_; 
if (v_isShared_1968_ == 0)
{
v___x_1970_ = v___x_1967_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_a_1965_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
v_a_1973_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1959_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1959_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
lean_ctor_set_tag(v___x_1975_, 1);
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
else
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1996_; 
v_a_1981_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1983_ = v___x_1959_;
v_isShared_1984_ = v_isSharedCheck_1996_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1959_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1996_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1985_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_1986_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1948_);
v___x_1987_ = lean_string_append(v___x_1985_, v___x_1986_);
lean_dec_ref(v___x_1986_);
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_1989_ = lean_string_append(v___x_1987_, v___x_1988_);
v___x_1990_ = lean_io_error_to_string(v_a_1981_);
v___x_1991_ = lean_string_append(v___x_1989_, v___x_1990_);
lean_dec_ref(v___x_1990_);
v___x_1992_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1991_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_1992_);
v___x_1994_ = v___x_1983_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
v___jp_1998_:
{
uint8_t v_construct_2000_; uint64_t v___x_2001_; 
v_construct_2000_ = lean_ctor_get_uint8(v_b_1948_, sizeof(void*)*4);
v___x_2001_ = lean_uint64_lor(v___x_1997_, v___y_1999_);
if (v_construct_2000_ == 0)
{
uint64_t v___x_2002_; 
v___x_2002_ = 0ULL;
v___y_1953_ = v___x_2001_;
v___y_1954_ = v___x_2002_;
goto v___jp_1952_;
}
else
{
uint64_t v___x_2003_; 
v___x_2003_ = 4ULL;
v___y_1953_ = v___x_2001_;
v___y_1954_ = v___x_2003_;
goto v___jp_1952_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0___boxed(lean_object* v_b_2006_, lean_object* v_args_2007_, lean_object* v_await_2008_, lean_object* v_a_2009_){
_start:
{
uint8_t v_await_boxed_2010_; lean_object* v_res_2011_; 
v_await_boxed_2010_ = lean_unbox(v_await_2008_);
v_res_2011_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(v_b_2006_, v_args_2007_, v_await_boxed_2010_);
lean_dec_ref(v_b_2006_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports(lean_object* v_moduleObject_2020_){
_start:
{
uint8_t v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2022_ = 0;
v___x_2023_ = lean_unsigned_to_nat(1u);
v___x_2024_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_imports___closed__2));
v___x_2025_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2026_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2026_, 0, v_moduleObject_2020_);
lean_ctor_set(v___x_2026_, 1, v___x_2025_);
v___x_2027_ = lean_mk_empty_array_with_capacity(v___x_2023_);
v___x_2028_ = lean_array_push(v___x_2027_, v___x_2026_);
v___x_2029_ = l_Lasm_JS_Web_Support_args(v___x_2028_);
v___x_2030_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_imports_spec__0(v___x_2024_, v___x_2029_, v___x_2022_);
return v___x_2030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_imports___boxed(lean_object* v_moduleObject_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_Lasm_JS_Web_WebAssembly_Module_imports(v_moduleObject_2031_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(size_t v_sz_2036_, size_t v_i_2037_, lean_object* v_bs_2038_){
_start:
{
uint8_t v___x_2039_; 
v___x_2039_ = lean_usize_dec_lt(v_i_2037_, v_sz_2036_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; 
v___x_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2040_, 0, v_bs_2038_);
return v___x_2040_;
}
else
{
lean_object* v_v_2041_; 
v_v_2041_ = lean_array_uget_borrowed(v_bs_2038_, v_i_2037_);
if (lean_obj_tag(v_v_2041_) == 9)
{
lean_object* v_value_2042_; lean_object* v___x_2043_; lean_object* v_bs_x27_2044_; size_t v___x_2045_; size_t v___x_2046_; lean_object* v___x_2047_; 
v_value_2042_ = lean_ctor_get(v_v_2041_, 0);
lean_inc(v_value_2042_);
v___x_2043_ = lean_unsigned_to_nat(0u);
v_bs_x27_2044_ = lean_array_uset(v_bs_2038_, v_i_2037_, v___x_2043_);
v___x_2045_ = ((size_t)1ULL);
v___x_2046_ = lean_usize_add(v_i_2037_, v___x_2045_);
v___x_2047_ = lean_array_uset(v_bs_x27_2044_, v_i_2037_, v_value_2042_);
v_i_2037_ = v___x_2046_;
v_bs_2038_ = v___x_2047_;
goto _start;
}
else
{
lean_object* v___x_2049_; 
lean_dec_ref(v_bs_2038_);
v___x_2049_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___closed__0));
return v___x_2049_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_2050_, lean_object* v_i_2051_, lean_object* v_bs_2052_){
_start:
{
size_t v_sz_boxed_2053_; size_t v_i_boxed_2054_; lean_object* v_res_2055_; 
v_sz_boxed_2053_ = lean_unbox_usize(v_sz_2050_);
lean_dec(v_sz_2050_);
v_i_boxed_2054_ = lean_unbox_usize(v_i_2051_);
lean_dec(v_i_2051_);
v_res_2055_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(v_sz_boxed_2053_, v_i_boxed_2054_, v_bs_2052_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(lean_object* v_context_2058_, lean_object* v_d_2059_){
_start:
{
lean_object* v___y_2062_; lean_object* v___y_2063_; lean_object* v___y_2068_; lean_object* v_received_2069_; lean_object* v___y_2088_; lean_object* v_a_2091_; 
if (lean_obj_tag(v_d_2059_) == 7)
{
lean_object* v_items_2115_; size_t v_sz_2116_; size_t v___x_2117_; lean_object* v___x_2118_; 
v_items_2115_ = lean_ctor_get(v_d_2059_, 0);
v_sz_2116_ = lean_array_size(v_items_2115_);
v___x_2117_ = ((size_t)0ULL);
lean_inc_ref(v_items_2115_);
v___x_2118_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0_spec__1(v_sz_2116_, v___x_2117_, v_items_2115_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; uint8_t v___x_2123_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v___x_2118_, 1);
v___x_2120_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__1));
v___x_2121_ = lean_string_utf8_byte_size(v_a_2119_);
v___x_2122_ = lean_unsigned_to_nat(0u);
v___x_2123_ = lean_nat_dec_eq(v___x_2121_, v___x_2122_);
if (v___x_2123_ == 0)
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2124_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2125_ = lean_string_append(v___x_2124_, v_a_2119_);
lean_dec(v_a_2119_);
v___x_2126_ = lean_string_append(v___x_2120_, v___x_2125_);
lean_dec_ref(v___x_2125_);
v_a_2091_ = v___x_2126_;
goto v___jp_2090_;
}
else
{
lean_dec(v_a_2119_);
v_a_2091_ = v___x_2120_;
goto v___jp_2090_;
}
}
else
{
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2127_; 
v_a_2127_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2118_, 1);
v_a_2091_ = v_a_2127_;
goto v___jp_2090_;
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
lean_dec_ref_known(v_d_2059_, 1);
v_a_2128_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2118_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2118_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
lean_ctor_set_tag(v___x_2130_, 0);
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
else
{
lean_object* v___x_2136_; 
v___x_2136_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v_a_2091_ = v___x_2136_;
goto v___jp_2090_;
}
v___jp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2064_ = lean_string_append(v___y_2062_, v___y_2063_);
lean_dec_ref(v___y_2063_);
v___x_2065_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2064_);
v___x_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
return v___x_2066_;
}
v___jp_2067_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; uint8_t v___x_2081_; 
v___x_2070_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2071_ = lean_string_append(v___x_2070_, v_context_2058_);
v___x_2072_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2073_ = lean_string_append(v___x_2071_, v___x_2072_);
v___x_2074_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___closed__0));
v___x_2075_ = lean_string_append(v___x_2073_, v___x_2074_);
v___x_2076_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2077_ = lean_string_append(v___x_2075_, v___x_2076_);
v___x_2078_ = lean_string_append(v___x_2077_, v_received_2069_);
lean_dec_ref(v_received_2069_);
v___x_2079_ = lean_string_utf8_byte_size(v___y_2068_);
v___x_2080_ = lean_unsigned_to_nat(0u);
v___x_2081_ = lean_nat_dec_eq(v___x_2079_, v___x_2080_);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2082_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_2083_ = lean_string_append(v___x_2082_, v___y_2068_);
lean_dec_ref(v___y_2068_);
v___x_2084_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_2085_ = lean_string_append(v___x_2083_, v___x_2084_);
v___y_2062_ = v___x_2078_;
v___y_2063_ = v___x_2085_;
goto v___jp_2061_;
}
else
{
lean_object* v___x_2086_; 
lean_dec_ref(v___y_2068_);
v___x_2086_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_2062_ = v___x_2078_;
v___y_2063_ = v___x_2086_;
goto v___jp_2061_;
}
}
v___jp_2087_:
{
lean_object* v___x_2089_; 
v___x_2089_ = l_Lasm_JS_Data_describe(v_d_2059_);
v___y_2068_ = v___y_2088_;
v_received_2069_ = v___x_2089_;
goto v___jp_2067_;
}
v___jp_2090_:
{
if (lean_obj_tag(v_d_2059_) == 9)
{
lean_object* v_value_2092_; lean_object* v_description_2093_; lean_object* v___x_2094_; uint8_t v___x_2095_; 
v_value_2092_ = lean_ctor_get(v_d_2059_, 0);
v_description_2093_ = lean_ctor_get(v_d_2059_, 1);
v___x_2094_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2095_ = lean_string_dec_eq(v_description_2093_, v___x_2094_);
if (v___x_2095_ == 0)
{
v___y_2088_ = v_a_2091_;
goto v___jp_2087_;
}
else
{
lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2112_; 
lean_inc(v_value_2092_);
v_isSharedCheck_2112_ = !lean_is_exclusive(v_d_2059_);
if (v_isSharedCheck_2112_ == 0)
{
lean_object* v_unused_2113_; lean_object* v_unused_2114_; 
v_unused_2113_ = lean_ctor_get(v_d_2059_, 1);
lean_dec(v_unused_2113_);
v_unused_2114_ = lean_ctor_get(v_d_2059_, 0);
lean_dec(v_unused_2114_);
v___x_2097_ = v_d_2059_;
v_isShared_2098_ = v_isSharedCheck_2112_;
goto v_resetjp_2096_;
}
else
{
lean_dec(v_d_2059_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2112_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
uint32_t v___x_2099_; uint64_t v___x_2100_; lean_object* v___x_2102_; 
v___x_2099_ = 206;
v___x_2100_ = 0ULL;
lean_inc(v_value_2092_);
if (v_isShared_2098_ == 0)
{
lean_ctor_set(v___x_2097_, 1, v___x_2094_);
v___x_2102_ = v___x_2097_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_value_2092_);
lean_ctor_set(v_reuseFailAlloc_2111_, 1, v___x_2094_);
v___x_2102_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
uint32_t v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lasm_js_value_handle(v_value_2092_);
lean_dec(v_value_2092_);
v___x_2104_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2099_, v___x_2100_, v___x_2102_, v___x_2103_);
lean_dec_ref(v___x_2102_);
if (lean_obj_tag(v___x_2104_) == 0)
{
lean_object* v_a_2105_; uint8_t v___x_2106_; 
v_a_2105_ = lean_ctor_get(v___x_2104_, 0);
lean_inc(v_a_2105_);
lean_dec_ref_known(v___x_2104_, 1);
v___x_2106_ = lean_string_validate_utf8(v_a_2105_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
lean_dec(v_a_2105_);
v___x_2107_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2108_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2107_);
v___y_2068_ = v_a_2091_;
v_received_2069_ = v___x_2108_;
goto v___jp_2067_;
}
else
{
lean_object* v___x_2109_; 
v___x_2109_ = lean_string_from_utf8_unchecked(v_a_2105_);
v___y_2068_ = v_a_2091_;
v_received_2069_ = v___x_2109_;
goto v___jp_2067_;
}
}
else
{
lean_object* v___x_2110_; 
lean_dec_ref_known(v___x_2104_, 1);
v___x_2110_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v___y_2068_ = v_a_2091_;
v_received_2069_ = v___x_2110_;
goto v___jp_2067_;
}
}
}
}
}
else
{
v___y_2088_ = v_a_2091_;
goto v___jp_2087_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0___boxed(lean_object* v_context_2137_, lean_object* v_d_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(v_context_2137_, v_d_2138_);
lean_dec_ref(v_context_2137_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(lean_object* v_b_2141_, lean_object* v_args_2142_, uint8_t v_await_2143_){
_start:
{
uint64_t v___y_2146_; uint64_t v___y_2147_; uint64_t v___x_2190_; uint64_t v___y_2192_; 
v___x_2190_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2143_ == 0)
{
uint64_t v___x_2197_; 
v___x_2197_ = 0ULL;
v___y_2192_ = v___x_2197_;
goto v___jp_2191_;
}
else
{
uint64_t v___x_2198_; 
v___x_2198_ = 2ULL;
v___y_2192_ = v___x_2198_;
goto v___jp_2191_;
}
v___jp_2145_:
{
uint64_t v_flags_2148_; uint32_t v___x_2149_; lean_object* v___x_2150_; uint32_t v___x_2151_; lean_object* v___x_2152_; 
v_flags_2148_ = lean_uint64_lor(v___y_2146_, v___y_2147_);
v___x_2149_ = 214;
v___x_2150_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2141_, v_args_2142_);
v___x_2151_ = 0;
v___x_2152_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2149_, v_flags_2148_, v___x_2150_, v___x_2151_);
lean_dec(v___x_2150_);
if (lean_obj_tag(v___x_2152_) == 0)
{
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_object* v_a_2153_; lean_object* v___x_2154_; 
v_a_2153_ = lean_ctor_get(v___x_2152_, 0);
lean_inc(v_a_2153_);
lean_dec_ref_known(v___x_2152_, 1);
v___x_2154_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2153_);
lean_dec(v_a_2153_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v_a_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
lean_inc(v_a_2155_);
lean_dec_ref_known(v___x_2154_, 1);
v___x_2156_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2141_);
v___x_2157_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0_spec__0(v___x_2156_, v_a_2155_);
lean_dec_ref(v___x_2156_);
return v___x_2157_;
}
else
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2165_; 
v_a_2158_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2165_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2160_ = v___x_2154_;
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2154_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2163_; 
if (v_isShared_2161_ == 0)
{
v___x_2163_ = v___x_2160_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_a_2158_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
else
{
lean_object* v_a_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2173_; 
v_a_2166_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2168_ = v___x_2152_;
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_a_2166_);
lean_dec(v___x_2152_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2171_; 
if (v_isShared_2169_ == 0)
{
lean_ctor_set_tag(v___x_2168_, 1);
v___x_2171_ = v___x_2168_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_a_2166_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2189_; 
v_a_2174_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2176_ = v___x_2152_;
v_isShared_2177_ = v_isSharedCheck_2189_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2152_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2189_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2187_; 
v___x_2178_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2179_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2141_);
v___x_2180_ = lean_string_append(v___x_2178_, v___x_2179_);
lean_dec_ref(v___x_2179_);
v___x_2181_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2182_ = lean_string_append(v___x_2180_, v___x_2181_);
v___x_2183_ = lean_io_error_to_string(v_a_2174_);
v___x_2184_ = lean_string_append(v___x_2182_, v___x_2183_);
lean_dec_ref(v___x_2183_);
v___x_2185_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2185_);
v___x_2187_ = v___x_2176_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2185_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
v___jp_2191_:
{
uint8_t v_construct_2193_; uint64_t v___x_2194_; 
v_construct_2193_ = lean_ctor_get_uint8(v_b_2141_, sizeof(void*)*4);
v___x_2194_ = lean_uint64_lor(v___x_2190_, v___y_2192_);
if (v_construct_2193_ == 0)
{
uint64_t v___x_2195_; 
v___x_2195_ = 0ULL;
v___y_2146_ = v___x_2194_;
v___y_2147_ = v___x_2195_;
goto v___jp_2145_;
}
else
{
uint64_t v___x_2196_; 
v___x_2196_ = 4ULL;
v___y_2146_ = v___x_2194_;
v___y_2147_ = v___x_2196_;
goto v___jp_2145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0___boxed(lean_object* v_b_2199_, lean_object* v_args_2200_, lean_object* v_await_2201_, lean_object* v_a_2202_){
_start:
{
uint8_t v_await_boxed_2203_; lean_object* v_res_2204_; 
v_await_boxed_2203_ = lean_unbox(v_await_2201_);
v_res_2204_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(v_b_2199_, v_args_2200_, v_await_boxed_2203_);
lean_dec_ref(v_b_2199_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(size_t v_sz_2205_, size_t v_i_2206_, lean_object* v_bs_2207_){
_start:
{
uint8_t v___x_2209_; 
v___x_2209_ = lean_usize_dec_lt(v_i_2206_, v_sz_2205_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; 
v___x_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2210_, 0, v_bs_2207_);
return v___x_2210_;
}
else
{
lean_object* v_v_2211_; lean_object* v___x_2212_; lean_object* v_bs_x27_2213_; lean_object* v___x_2214_; 
v_v_2211_ = lean_array_uget(v_bs_2207_, v_i_2206_);
v___x_2212_ = lean_unsigned_to_nat(0u);
v_bs_x27_2213_ = lean_array_uset(v_bs_2207_, v_i_2206_, v___x_2212_);
v___x_2214_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_v_2211_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; size_t v___x_2216_; size_t v___x_2217_; lean_object* v___x_2218_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
lean_inc(v_a_2215_);
lean_dec_ref_known(v___x_2214_, 1);
v___x_2216_ = ((size_t)1ULL);
v___x_2217_ = lean_usize_add(v_i_2206_, v___x_2216_);
v___x_2218_ = lean_array_uset(v_bs_x27_2213_, v_i_2206_, v_a_2215_);
v_i_2206_ = v___x_2217_;
v_bs_2207_ = v___x_2218_;
goto _start;
}
else
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2227_; 
lean_dec_ref(v_bs_x27_2213_);
v_a_2220_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2222_ = v___x_2214_;
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2214_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_a_2220_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1___boxed(lean_object* v_sz_2228_, lean_object* v_i_2229_, lean_object* v_bs_2230_, lean_object* v___y_2231_){
_start:
{
size_t v_sz_boxed_2232_; size_t v_i_boxed_2233_; lean_object* v_res_2234_; 
v_sz_boxed_2232_ = lean_unbox_usize(v_sz_2228_);
lean_dec(v_sz_2228_);
v_i_boxed_2233_ = lean_unbox_usize(v_i_2229_);
lean_dec(v_i_2229_);
v_res_2234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(v_sz_boxed_2232_, v_i_boxed_2233_, v_bs_2230_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections(lean_object* v_moduleObject_2243_, lean_object* v_sectionName_2244_){
_start:
{
uint8_t v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2246_ = 0;
v___x_2247_ = lean_unsigned_to_nat(2u);
v___x_2248_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Module_customSections___closed__2));
v___x_2249_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2250_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2250_, 0, v_moduleObject_2243_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
v___x_2251_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2251_, 0, v_sectionName_2244_);
v___x_2252_ = lean_mk_empty_array_with_capacity(v___x_2247_);
v___x_2253_ = lean_array_push(v___x_2252_, v___x_2250_);
v___x_2254_ = lean_array_push(v___x_2253_, v___x_2251_);
v___x_2255_ = l_Lasm_JS_Web_Support_args(v___x_2254_);
v___x_2256_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__0(v___x_2248_, v___x_2255_, v___x_2246_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v_a_2257_; size_t v_sz_2258_; size_t v___x_2259_; lean_object* v___x_2260_; 
v_a_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_a_2257_);
lean_dec_ref_known(v___x_2256_, 1);
v_sz_2258_ = lean_array_size(v_a_2257_);
v___x_2259_ = ((size_t)0ULL);
v___x_2260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Module_customSections_spec__1(v_sz_2258_, v___x_2259_, v_a_2257_);
return v___x_2260_;
}
else
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2268_; 
v_a_2261_ = lean_ctor_get(v___x_2256_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2263_ = v___x_2256_;
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v___x_2256_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2266_; 
if (v_isShared_2264_ == 0)
{
v___x_2266_ = v___x_2263_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_a_2261_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Module_customSections___boxed(lean_object* v_moduleObject_2269_, lean_object* v_sectionName_2270_, lean_object* v_a_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l_Lasm_JS_Web_WebAssembly_Module_customSections(v_moduleObject_2269_, v_sectionName_2270_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f(lean_object* v_v_2282_){
_start:
{
lean_object* v___f_2284_; lean_object* v___x_2285_; 
v___f_2284_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___closed__3));
lean_inc(v_v_2282_);
v___x_2285_ = l_Lasm_JS_Web_Support_isInstance(v___f_2284_, v_v_2282_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2299_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2288_ = v___x_2285_;
v_isShared_2289_ = v_isSharedCheck_2299_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2285_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2299_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
uint8_t v___x_2290_; 
v___x_2290_ = lean_unbox(v_a_2286_);
lean_dec(v_a_2286_);
if (v___x_2290_ == 0)
{
lean_object* v___x_2291_; lean_object* v___x_2293_; 
lean_dec(v_v_2282_);
v___x_2291_ = lean_box(0);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v___x_2291_);
v___x_2293_ = v___x_2288_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2291_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
else
{
lean_object* v___x_2295_; lean_object* v___x_2297_; 
v___x_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2295_, 0, v_v_2282_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v___x_2295_);
v___x_2297_ = v___x_2288_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v___x_2295_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
}
else
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2307_; 
lean_dec(v_v_2282_);
v_a_2300_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2302_ = v___x_2285_;
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2285_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2305_; 
if (v_isShared_2303_ == 0)
{
v___x_2305_ = v___x_2302_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2300_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f___boxed(lean_object* v_v_2308_, lean_object* v_a_2309_){
_start:
{
lean_object* v_res_2310_; 
v_res_2310_ = l_Lasm_JS_Web_WebAssembly_Instance_cast_x3f(v_v_2308_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(lean_object* v_context_2311_, lean_object* v_d_2312_){
_start:
{
lean_object* v___y_2315_; lean_object* v___y_2316_; 
if (lean_obj_tag(v_d_2312_) == 9)
{
lean_object* v_value_2320_; lean_object* v___x_2321_; 
v_value_2320_ = lean_ctor_get(v_d_2312_, 0);
lean_inc(v_value_2320_);
lean_dec_ref_known(v_d_2312_, 2);
v___x_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2321_, 0, v_value_2320_);
return v___x_2321_;
}
else
{
lean_object* v___x_2322_; lean_object* v_received_2324_; 
v___x_2322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_2312_) == 9)
{
lean_object* v_value_2338_; lean_object* v_description_2339_; uint8_t v___x_2340_; 
v_value_2338_ = lean_ctor_get(v_d_2312_, 0);
v_description_2339_ = lean_ctor_get(v_d_2312_, 1);
v___x_2340_ = lean_string_dec_eq(v_description_2339_, v___x_2322_);
if (v___x_2340_ == 0)
{
goto v___jp_2336_;
}
else
{
uint32_t v___x_2341_; uint64_t v___x_2342_; lean_object* v___x_2343_; uint32_t v___x_2344_; lean_object* v___x_2345_; 
lean_inc_n(v_value_2338_, 2);
lean_dec_ref_known(v_d_2312_, 2);
v___x_2341_ = 206;
v___x_2342_ = 0ULL;
v___x_2343_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2343_, 0, v_value_2338_);
lean_ctor_set(v___x_2343_, 1, v___x_2322_);
v___x_2344_ = lasm_js_value_handle(v_value_2338_);
lean_dec(v_value_2338_);
v___x_2345_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2341_, v___x_2342_, v___x_2343_, v___x_2344_);
lean_dec_ref_known(v___x_2343_, 2);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; uint8_t v___x_2347_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v___x_2345_, 1);
v___x_2347_ = lean_string_validate_utf8(v_a_2346_);
if (v___x_2347_ == 0)
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
lean_dec(v_a_2346_);
v___x_2348_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2349_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2348_);
v_received_2324_ = v___x_2349_;
goto v___jp_2323_;
}
else
{
lean_object* v___x_2350_; 
v___x_2350_ = lean_string_from_utf8_unchecked(v_a_2346_);
v_received_2324_ = v___x_2350_;
goto v___jp_2323_;
}
}
else
{
lean_object* v___x_2351_; 
lean_dec_ref_known(v___x_2345_, 1);
v___x_2351_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_2324_ = v___x_2351_;
goto v___jp_2323_;
}
}
}
else
{
goto v___jp_2336_;
}
v___jp_2323_:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; 
v___x_2325_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2326_ = lean_string_append(v___x_2325_, v_context_2311_);
v___x_2327_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2328_ = lean_string_append(v___x_2326_, v___x_2327_);
v___x_2329_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInstance___closed__0));
v___x_2330_ = lean_string_append(v___x_2328_, v___x_2329_);
v___x_2331_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2332_ = lean_string_append(v___x_2330_, v___x_2331_);
v___x_2333_ = lean_string_append(v___x_2332_, v_received_2324_);
lean_dec_ref(v_received_2324_);
v___x_2334_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_2334_ == 0)
{
lean_object* v___x_2335_; 
v___x_2335_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_2315_ = v___x_2333_;
v___y_2316_ = v___x_2335_;
goto v___jp_2314_;
}
else
{
v___y_2315_ = v___x_2333_;
v___y_2316_ = v___x_2322_;
goto v___jp_2314_;
}
}
v___jp_2336_:
{
lean_object* v___x_2337_; 
v___x_2337_ = l_Lasm_JS_Data_describe(v_d_2312_);
v_received_2324_ = v___x_2337_;
goto v___jp_2323_;
}
}
v___jp_2314_:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2317_ = lean_string_append(v___y_2315_, v___y_2316_);
v___x_2318_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
v___x_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
return v___x_2319_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0___boxed(lean_object* v_context_2352_, lean_object* v_d_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(v_context_2352_, v_d_2353_);
lean_dec_ref(v_context_2352_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(lean_object* v_b_2356_, lean_object* v_args_2357_, uint8_t v_await_2358_){
_start:
{
uint64_t v___y_2361_; uint64_t v___y_2362_; uint64_t v___x_2405_; uint64_t v___y_2407_; 
v___x_2405_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2358_ == 0)
{
uint64_t v___x_2412_; 
v___x_2412_ = 0ULL;
v___y_2407_ = v___x_2412_;
goto v___jp_2406_;
}
else
{
uint64_t v___x_2413_; 
v___x_2413_ = 2ULL;
v___y_2407_ = v___x_2413_;
goto v___jp_2406_;
}
v___jp_2360_:
{
uint64_t v_flags_2363_; uint32_t v___x_2364_; lean_object* v___x_2365_; uint32_t v___x_2366_; lean_object* v___x_2367_; 
v_flags_2363_ = lean_uint64_lor(v___y_2361_, v___y_2362_);
v___x_2364_ = 214;
v___x_2365_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2356_, v_args_2357_);
v___x_2366_ = 0;
v___x_2367_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2364_, v_flags_2363_, v___x_2365_, v___x_2366_);
lean_dec(v___x_2365_);
if (lean_obj_tag(v___x_2367_) == 0)
{
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; lean_object* v___x_2369_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2367_, 1);
v___x_2369_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2368_);
lean_dec(v_a_2368_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v_a_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
lean_inc(v_a_2370_);
lean_dec_ref_known(v___x_2369_, 1);
v___x_2371_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2356_);
v___x_2372_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0_spec__0(v___x_2371_, v_a_2370_);
lean_dec_ref(v___x_2371_);
return v___x_2372_;
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
v_a_2373_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2369_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2369_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2378_; 
if (v_isShared_2376_ == 0)
{
v___x_2378_ = v___x_2375_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2373_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
else
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
v_a_2381_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2367_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2367_);
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
return v___x_2386_;
}
}
}
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2404_; 
v_a_2389_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2391_ = v___x_2367_;
v_isShared_2392_ = v_isSharedCheck_2404_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2367_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2404_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2402_; 
v___x_2393_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2394_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2356_);
v___x_2395_ = lean_string_append(v___x_2393_, v___x_2394_);
lean_dec_ref(v___x_2394_);
v___x_2396_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2397_ = lean_string_append(v___x_2395_, v___x_2396_);
v___x_2398_ = lean_io_error_to_string(v_a_2389_);
v___x_2399_ = lean_string_append(v___x_2397_, v___x_2398_);
lean_dec_ref(v___x_2398_);
v___x_2400_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2400_, 0, v___x_2399_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 0, v___x_2400_);
v___x_2402_ = v___x_2391_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v___x_2400_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
}
}
}
}
v___jp_2406_:
{
uint8_t v_construct_2408_; uint64_t v___x_2409_; 
v_construct_2408_ = lean_ctor_get_uint8(v_b_2356_, sizeof(void*)*4);
v___x_2409_ = lean_uint64_lor(v___x_2405_, v___y_2407_);
if (v_construct_2408_ == 0)
{
uint64_t v___x_2410_; 
v___x_2410_ = 0ULL;
v___y_2361_ = v___x_2409_;
v___y_2362_ = v___x_2410_;
goto v___jp_2360_;
}
else
{
uint64_t v___x_2411_; 
v___x_2411_ = 4ULL;
v___y_2361_ = v___x_2409_;
v___y_2362_ = v___x_2411_;
goto v___jp_2360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0___boxed(lean_object* v_b_2414_, lean_object* v_args_2415_, lean_object* v_await_2416_, lean_object* v_a_2417_){
_start:
{
uint8_t v_await_boxed_2418_; lean_object* v_res_2419_; 
v_await_boxed_2418_ = lean_unbox(v_await_2416_);
v_res_2419_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(v_b_2414_, v_args_2415_, v_await_boxed_2418_);
lean_dec_ref(v_b_2414_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new(lean_object* v_module_2428_, lean_object* v_importObject_2429_){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; lean_object* v___x_2440_; 
v___x_2431_ = lean_unsigned_to_nat(2u);
v___x_2432_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Instance_new___closed__2));
v___x_2433_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2434_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2434_, 0, v_module_2428_);
lean_ctor_set(v___x_2434_, 1, v___x_2433_);
v___x_2435_ = lean_mk_empty_array_with_capacity(v___x_2431_);
v___x_2436_ = lean_array_push(v___x_2435_, v___x_2434_);
v___x_2437_ = lean_array_push(v___x_2436_, v_importObject_2429_);
v___x_2438_ = l_Lasm_JS_Web_Support_args(v___x_2437_);
v___x_2439_ = 0;
v___x_2440_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Instance_new_spec__0(v___x_2432_, v___x_2438_, v___x_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_new___boxed(lean_object* v_module_2441_, lean_object* v_importObject_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lasm_JS_Web_WebAssembly_Instance_new(v_module_2441_, v_importObject_2442_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports(lean_object* v_self_2446_){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Instance_exports___closed__0));
v___x_2449_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2446_, v___x_2448_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Instance_exports___boxed(lean_object* v_self_2450_, lean_object* v_a_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Lasm_JS_Web_WebAssembly_Instance_exports(v_self_2450_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f(lean_object* v_v_2462_){
_start:
{
lean_object* v___f_2464_; lean_object* v___x_2465_; 
v___f_2464_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___closed__3));
lean_inc(v_v_2462_);
v___x_2465_ = l_Lasm_JS_Web_Support_isInstance(v___f_2464_, v_v_2462_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2479_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2468_ = v___x_2465_;
v_isShared_2469_ = v_isSharedCheck_2479_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2465_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2479_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
uint8_t v___x_2470_; 
v___x_2470_ = lean_unbox(v_a_2466_);
lean_dec(v_a_2466_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; lean_object* v___x_2473_; 
lean_dec(v_v_2462_);
v___x_2471_ = lean_box(0);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v___x_2471_);
v___x_2473_ = v___x_2468_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v___x_2471_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
else
{
lean_object* v___x_2475_; lean_object* v___x_2477_; 
v___x_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2475_, 0, v_v_2462_);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v___x_2475_);
v___x_2477_ = v___x_2468_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v___x_2475_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec(v_v_2462_);
v_a_2480_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2465_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2465_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f___boxed(lean_object* v_v_2488_, lean_object* v_a_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lasm_JS_Web_WebAssembly_Memory_cast_x3f(v_v_2488_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(lean_object* v_x_2491_){
_start:
{
if (lean_obj_tag(v_x_2491_) == 0)
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_box(0);
return v___x_2492_;
}
else
{
lean_object* v_val_2493_; uint8_t v___x_2494_; 
v_val_2493_ = lean_ctor_get(v_x_2491_, 0);
v___x_2494_ = lean_unbox(v_val_2493_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; 
v___x_2495_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
return v___x_2495_;
}
else
{
lean_object* v___x_2496_; 
v___x_2496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
return v___x_2496_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0___boxed(lean_object* v_x_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_x_2497_);
lean_dec(v_x_2497_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(lean_object* v_context_2499_, lean_object* v_d_2500_){
_start:
{
lean_object* v___y_2503_; lean_object* v___y_2504_; 
if (lean_obj_tag(v_d_2500_) == 9)
{
lean_object* v_value_2508_; lean_object* v___x_2509_; 
v_value_2508_ = lean_ctor_get(v_d_2500_, 0);
lean_inc(v_value_2508_);
lean_dec_ref_known(v_d_2500_, 2);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_value_2508_);
return v___x_2509_;
}
else
{
lean_object* v___x_2510_; lean_object* v_received_2512_; 
v___x_2510_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_2500_) == 9)
{
lean_object* v_value_2526_; lean_object* v_description_2527_; uint8_t v___x_2528_; 
v_value_2526_ = lean_ctor_get(v_d_2500_, 0);
v_description_2527_ = lean_ctor_get(v_d_2500_, 1);
v___x_2528_ = lean_string_dec_eq(v_description_2527_, v___x_2510_);
if (v___x_2528_ == 0)
{
goto v___jp_2524_;
}
else
{
uint32_t v___x_2529_; uint64_t v___x_2530_; lean_object* v___x_2531_; uint32_t v___x_2532_; lean_object* v___x_2533_; 
lean_inc_n(v_value_2526_, 2);
lean_dec_ref_known(v_d_2500_, 2);
v___x_2529_ = 206;
v___x_2530_ = 0ULL;
v___x_2531_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2531_, 0, v_value_2526_);
lean_ctor_set(v___x_2531_, 1, v___x_2510_);
v___x_2532_ = lasm_js_value_handle(v_value_2526_);
lean_dec(v_value_2526_);
v___x_2533_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2529_, v___x_2530_, v___x_2531_, v___x_2532_);
lean_dec_ref_known(v___x_2531_, 2);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; uint8_t v___x_2535_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
v___x_2535_ = lean_string_validate_utf8(v_a_2534_);
if (v___x_2535_ == 0)
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
lean_dec(v_a_2534_);
v___x_2536_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2537_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2536_);
v_received_2512_ = v___x_2537_;
goto v___jp_2511_;
}
else
{
lean_object* v___x_2538_; 
v___x_2538_ = lean_string_from_utf8_unchecked(v_a_2534_);
v_received_2512_ = v___x_2538_;
goto v___jp_2511_;
}
}
else
{
lean_object* v___x_2539_; 
lean_dec_ref_known(v___x_2533_, 1);
v___x_2539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_2512_ = v___x_2539_;
goto v___jp_2511_;
}
}
}
else
{
goto v___jp_2524_;
}
v___jp_2511_:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; 
v___x_2513_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2514_ = lean_string_append(v___x_2513_, v_context_2499_);
v___x_2515_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2516_ = lean_string_append(v___x_2514_, v___x_2515_);
v___x_2517_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSMemory___closed__0));
v___x_2518_ = lean_string_append(v___x_2516_, v___x_2517_);
v___x_2519_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2520_ = lean_string_append(v___x_2518_, v___x_2519_);
v___x_2521_ = lean_string_append(v___x_2520_, v_received_2512_);
lean_dec_ref(v_received_2512_);
v___x_2522_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_2522_ == 0)
{
lean_object* v___x_2523_; 
v___x_2523_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_2503_ = v___x_2521_;
v___y_2504_ = v___x_2523_;
goto v___jp_2502_;
}
else
{
v___y_2503_ = v___x_2521_;
v___y_2504_ = v___x_2510_;
goto v___jp_2502_;
}
}
v___jp_2524_:
{
lean_object* v___x_2525_; 
v___x_2525_ = l_Lasm_JS_Data_describe(v_d_2500_);
v_received_2512_ = v___x_2525_;
goto v___jp_2511_;
}
}
v___jp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2505_ = lean_string_append(v___y_2503_, v___y_2504_);
v___x_2506_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2505_);
v___x_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
return v___x_2507_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1___boxed(lean_object* v_context_2540_, lean_object* v_d_2541_, lean_object* v_a_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(v_context_2540_, v_d_2541_);
lean_dec_ref(v_context_2540_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(lean_object* v_b_2544_, lean_object* v_args_2545_, uint8_t v_await_2546_){
_start:
{
uint64_t v___y_2549_; uint64_t v___y_2550_; uint64_t v___x_2593_; uint64_t v___y_2595_; 
v___x_2593_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2546_ == 0)
{
uint64_t v___x_2600_; 
v___x_2600_ = 0ULL;
v___y_2595_ = v___x_2600_;
goto v___jp_2594_;
}
else
{
uint64_t v___x_2601_; 
v___x_2601_ = 2ULL;
v___y_2595_ = v___x_2601_;
goto v___jp_2594_;
}
v___jp_2548_:
{
uint64_t v_flags_2551_; uint32_t v___x_2552_; lean_object* v___x_2553_; uint32_t v___x_2554_; lean_object* v___x_2555_; 
v_flags_2551_ = lean_uint64_lor(v___y_2549_, v___y_2550_);
v___x_2552_ = 214;
v___x_2553_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2544_, v_args_2545_);
v___x_2554_ = 0;
v___x_2555_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2552_, v_flags_2551_, v___x_2553_, v___x_2554_);
lean_dec(v___x_2553_);
if (lean_obj_tag(v___x_2555_) == 0)
{
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2557_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2555_, 1);
v___x_2557_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2556_);
lean_dec(v_a_2556_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___x_2557_, 1);
v___x_2559_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2544_);
v___x_2560_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1_spec__1(v___x_2559_, v_a_2558_);
lean_dec_ref(v___x_2559_);
return v___x_2560_;
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
v_a_2561_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2557_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2557_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
v_a_2569_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2555_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2555_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
lean_ctor_set_tag(v___x_2571_, 1);
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2592_; 
v_a_2577_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2579_ = v___x_2555_;
v_isShared_2580_ = v_isSharedCheck_2592_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2555_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2592_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2590_; 
v___x_2581_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2582_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2544_);
v___x_2583_ = lean_string_append(v___x_2581_, v___x_2582_);
lean_dec_ref(v___x_2582_);
v___x_2584_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2585_ = lean_string_append(v___x_2583_, v___x_2584_);
v___x_2586_ = lean_io_error_to_string(v_a_2577_);
v___x_2587_ = lean_string_append(v___x_2585_, v___x_2586_);
lean_dec_ref(v___x_2586_);
v___x_2588_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2588_);
v___x_2590_ = v___x_2579_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v___x_2588_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
v___jp_2594_:
{
uint8_t v_construct_2596_; uint64_t v___x_2597_; 
v_construct_2596_ = lean_ctor_get_uint8(v_b_2544_, sizeof(void*)*4);
v___x_2597_ = lean_uint64_lor(v___x_2593_, v___y_2595_);
if (v_construct_2596_ == 0)
{
uint64_t v___x_2598_; 
v___x_2598_ = 0ULL;
v___y_2549_ = v___x_2597_;
v___y_2550_ = v___x_2598_;
goto v___jp_2548_;
}
else
{
uint64_t v___x_2599_; 
v___x_2599_ = 4ULL;
v___y_2549_ = v___x_2597_;
v___y_2550_ = v___x_2599_;
goto v___jp_2548_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1___boxed(lean_object* v_b_2602_, lean_object* v_args_2603_, lean_object* v_await_2604_, lean_object* v_a_2605_){
_start:
{
uint8_t v_await_boxed_2606_; lean_object* v_res_2607_; 
v_await_boxed_2606_ = lean_unbox(v_await_2604_);
v_res_2607_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(v_b_2602_, v_args_2603_, v_await_boxed_2606_);
lean_dec_ref(v_b_2602_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new(lean_object* v_descriptor_2616_){
_start:
{
lean_object* v_initial_2618_; lean_object* v_maximum_2619_; lean_object* v_address_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; uint8_t v___x_2639_; lean_object* v___x_2640_; 
v_initial_2618_ = lean_ctor_get(v_descriptor_2616_, 0);
v_maximum_2619_ = lean_ctor_get(v_descriptor_2616_, 1);
v_address_2620_ = lean_ctor_get(v_descriptor_2616_, 2);
v___x_2621_ = lean_unsigned_to_nat(1u);
v___x_2622_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_new___closed__2));
v___x_2623_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0));
lean_inc(v_initial_2618_);
v___x_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2623_);
lean_ctor_set(v___x_2624_, 1, v_initial_2618_);
v___x_2625_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1));
lean_inc(v_maximum_2619_);
v___x_2626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2625_);
lean_ctor_set(v___x_2626_, 1, v_maximum_2619_);
v___x_2627_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2));
v___x_2628_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_address_2620_);
v___x_2629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2627_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
v___x_2630_ = lean_unsigned_to_nat(3u);
v___x_2631_ = lean_mk_empty_array_with_capacity(v___x_2630_);
v___x_2632_ = lean_array_push(v___x_2631_, v___x_2624_);
v___x_2633_ = lean_array_push(v___x_2632_, v___x_2626_);
v___x_2634_ = lean_array_push(v___x_2633_, v___x_2629_);
v___x_2635_ = l_Lasm_JS_Web_Support_fields(v___x_2634_);
lean_dec_ref(v___x_2634_);
v___x_2636_ = lean_mk_empty_array_with_capacity(v___x_2621_);
v___x_2637_ = lean_array_push(v___x_2636_, v___x_2635_);
v___x_2638_ = l_Lasm_JS_Web_Support_args(v___x_2637_);
v___x_2639_ = 0;
v___x_2640_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__1(v___x_2622_, v___x_2638_, v___x_2639_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_new___boxed(lean_object* v_descriptor_2641_, lean_object* v_a_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lasm_JS_Web_WebAssembly_Memory_new(v_descriptor_2641_);
lean_dec_ref(v_descriptor_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer(lean_object* v_self_2645_){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2647_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_buffer___closed__0));
v___x_2648_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2645_, v___x_2647_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; lean_object* v___x_2650_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2649_);
lean_dec_ref_known(v___x_2648_, 1);
v___x_2650_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2649_);
return v___x_2650_;
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
v_a_2651_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2648_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2648_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_buffer___boxed(lean_object* v_self_2659_, lean_object* v_a_2660_){
_start:
{
lean_object* v_res_2661_; 
v_res_2661_ = l_Lasm_JS_Web_WebAssembly_Memory_buffer(v_self_2659_);
return v_res_2661_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2662_; uint8_t v___x_2663_; uint64_t v___x_2664_; 
v___x_2662_ = 8ULL;
v___x_2663_ = 0;
v___x_2664_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0_spec__0(v___x_2663_, v___x_2662_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(lean_object* v_o_2665_, lean_object* v_name_2666_, lean_object* v_args_2667_){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; uint64_t v___x_2672_; lean_object* v___x_2673_; 
v___x_2669_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_2670_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2670_, 0, v_o_2665_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2671_, 0, v_name_2666_);
v___x_2672_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___closed__0);
v___x_2673_ = l_Lasm_JS_Value_invokeRaw(v___x_2670_, v___x_2671_, v_args_2667_, v___x_2672_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2675_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2674_);
lean_dec_ref_known(v___x_2673_, 1);
v___x_2675_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_2674_);
lean_dec(v_a_2674_);
return v___x_2675_;
}
else
{
lean_object* v_a_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2683_; 
v_a_2676_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2678_ = v___x_2673_;
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_a_2676_);
lean_dec(v___x_2673_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2681_; 
if (v_isShared_2679_ == 0)
{
v___x_2681_ = v___x_2678_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v_a_2676_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0___boxed(lean_object* v_o_2684_, lean_object* v_name_2685_, lean_object* v_args_2686_, lean_object* v_a_2687_){
_start:
{
lean_object* v_res_2688_; 
v_res_2688_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_o_2684_, v_name_2685_, v_args_2686_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow(lean_object* v_self_2690_, lean_object* v_delta_2691_){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2693_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0));
v___x_2694_ = lean_unsigned_to_nat(1u);
v___x_2695_ = lean_mk_empty_array_with_capacity(v___x_2694_);
v___x_2696_ = lean_array_push(v___x_2695_, v_delta_2691_);
v___x_2697_ = l_Lasm_JS_Web_Support_args(v___x_2696_);
v___x_2698_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2690_, v___x_2693_, v___x_2697_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_grow___boxed(lean_object* v_self_2699_, lean_object* v_delta_2700_, lean_object* v_a_2701_){
_start:
{
lean_object* v_res_2702_; 
v_res_2702_ = l_Lasm_JS_Web_WebAssembly_Memory_grow(v_self_2699_, v_delta_2700_);
return v_res_2702_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2(void){
_start:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2706_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__1));
v___x_2707_ = l_Lasm_JS_Web_Support_args(v___x_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer(lean_object* v_self_2708_){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2710_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__0));
v___x_2711_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_2712_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2708_, v___x_2710_, v___x_2711_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v_a_2713_; lean_object* v___x_2714_; 
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
lean_inc(v_a_2713_);
lean_dec_ref_known(v___x_2712_, 1);
v___x_2714_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2713_);
return v___x_2714_;
}
else
{
lean_object* v_a_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2722_; 
v_a_2715_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2717_ = v___x_2712_;
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_a_2715_);
lean_dec(v___x_2712_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___x_2720_; 
if (v_isShared_2718_ == 0)
{
v___x_2720_ = v___x_2717_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_a_2715_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___boxed(lean_object* v_self_2723_, lean_object* v_a_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer(v_self_2723_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer(lean_object* v_self_2727_){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2729_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___closed__0));
v___x_2730_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_2731_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2727_, v___x_2729_, v___x_2730_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2733_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc(v_a_2732_);
lean_dec_ref_known(v___x_2731_, 1);
v___x_2733_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2732_);
return v___x_2733_;
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
v_a_2734_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2731_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2731_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer___boxed(lean_object* v_self_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Lasm_JS_Web_WebAssembly_Memory_toResizableBuffer(v_self_2742_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_cast_x3f(lean_object* v_v_2754_){
_start:
{
lean_object* v___f_2756_; lean_object* v___x_2757_; 
v___f_2756_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___closed__3));
lean_inc(v_v_2754_);
v___x_2757_ = l_Lasm_JS_Web_Support_isInstance(v___f_2756_, v_v_2754_);
if (lean_obj_tag(v___x_2757_) == 0)
{
lean_object* v_a_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2771_; 
v_a_2758_ = lean_ctor_get(v___x_2757_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2760_ = v___x_2757_;
v_isShared_2761_ = v_isSharedCheck_2771_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_a_2758_);
lean_dec(v___x_2757_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2771_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
uint8_t v___x_2762_; 
v___x_2762_ = lean_unbox(v_a_2758_);
lean_dec(v_a_2758_);
if (v___x_2762_ == 0)
{
lean_object* v___x_2763_; lean_object* v___x_2765_; 
lean_dec(v_v_2754_);
v___x_2763_ = lean_box(0);
if (v_isShared_2761_ == 0)
{
lean_ctor_set(v___x_2760_, 0, v___x_2763_);
v___x_2765_ = v___x_2760_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2763_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
else
{
lean_object* v___x_2767_; lean_object* v___x_2769_; 
v___x_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2767_, 0, v_v_2754_);
if (v_isShared_2761_ == 0)
{
lean_ctor_set(v___x_2760_, 0, v___x_2767_);
v___x_2769_ = v___x_2760_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v___x_2767_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec(v_v_2754_);
v_a_2772_ = lean_ctor_get(v___x_2757_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2757_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2757_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_cast_x3f___boxed(lean_object* v_v_2780_, lean_object* v_a_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lasm_JS_Web_WebAssembly_Table_cast_x3f(v_v_2780_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(lean_object* v_context_2783_, lean_object* v_d_2784_){
_start:
{
lean_object* v___y_2787_; lean_object* v___y_2788_; 
if (lean_obj_tag(v_d_2784_) == 9)
{
lean_object* v_value_2792_; lean_object* v___x_2793_; 
v_value_2792_ = lean_ctor_get(v_d_2784_, 0);
lean_inc(v_value_2792_);
lean_dec_ref_known(v_d_2784_, 2);
v___x_2793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2793_, 0, v_value_2792_);
return v___x_2793_;
}
else
{
lean_object* v___x_2794_; lean_object* v_received_2796_; 
v___x_2794_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_2784_) == 9)
{
lean_object* v_value_2810_; lean_object* v_description_2811_; uint8_t v___x_2812_; 
v_value_2810_ = lean_ctor_get(v_d_2784_, 0);
v_description_2811_ = lean_ctor_get(v_d_2784_, 1);
v___x_2812_ = lean_string_dec_eq(v_description_2811_, v___x_2794_);
if (v___x_2812_ == 0)
{
goto v___jp_2808_;
}
else
{
uint32_t v___x_2813_; uint64_t v___x_2814_; lean_object* v___x_2815_; uint32_t v___x_2816_; lean_object* v___x_2817_; 
lean_inc_n(v_value_2810_, 2);
lean_dec_ref_known(v_d_2784_, 2);
v___x_2813_ = 206;
v___x_2814_ = 0ULL;
v___x_2815_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2815_, 0, v_value_2810_);
lean_ctor_set(v___x_2815_, 1, v___x_2794_);
v___x_2816_ = lasm_js_value_handle(v_value_2810_);
lean_dec(v_value_2810_);
v___x_2817_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2813_, v___x_2814_, v___x_2815_, v___x_2816_);
lean_dec_ref_known(v___x_2815_, 2);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; uint8_t v___x_2819_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
lean_dec_ref_known(v___x_2817_, 1);
v___x_2819_ = lean_string_validate_utf8(v_a_2818_);
if (v___x_2819_ == 0)
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
lean_dec(v_a_2818_);
v___x_2820_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_2821_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2820_);
v_received_2796_ = v___x_2821_;
goto v___jp_2795_;
}
else
{
lean_object* v___x_2822_; 
v___x_2822_ = lean_string_from_utf8_unchecked(v_a_2818_);
v_received_2796_ = v___x_2822_;
goto v___jp_2795_;
}
}
else
{
lean_object* v___x_2823_; 
lean_dec_ref_known(v___x_2817_, 1);
v___x_2823_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_2796_ = v___x_2823_;
goto v___jp_2795_;
}
}
}
else
{
goto v___jp_2808_;
}
v___jp_2795_:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v___x_2797_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2798_ = lean_string_append(v___x_2797_, v_context_2783_);
v___x_2799_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_2800_ = lean_string_append(v___x_2798_, v___x_2799_);
v___x_2801_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTable___closed__0));
v___x_2802_ = lean_string_append(v___x_2800_, v___x_2801_);
v___x_2803_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_2804_ = lean_string_append(v___x_2802_, v___x_2803_);
v___x_2805_ = lean_string_append(v___x_2804_, v_received_2796_);
lean_dec_ref(v_received_2796_);
v___x_2806_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; 
v___x_2807_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_2787_ = v___x_2805_;
v___y_2788_ = v___x_2807_;
goto v___jp_2786_;
}
else
{
v___y_2787_ = v___x_2805_;
v___y_2788_ = v___x_2794_;
goto v___jp_2786_;
}
}
v___jp_2808_:
{
lean_object* v___x_2809_; 
v___x_2809_ = l_Lasm_JS_Data_describe(v_d_2784_);
v_received_2796_ = v___x_2809_;
goto v___jp_2795_;
}
}
v___jp_2786_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2789_ = lean_string_append(v___y_2787_, v___y_2788_);
v___x_2790_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2789_);
v___x_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
return v___x_2791_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0___boxed(lean_object* v_context_2824_, lean_object* v_d_2825_, lean_object* v_a_2826_){
_start:
{
lean_object* v_res_2827_; 
v_res_2827_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(v_context_2824_, v_d_2825_);
lean_dec_ref(v_context_2824_);
return v_res_2827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(lean_object* v_b_2828_, lean_object* v_args_2829_, uint8_t v_await_2830_){
_start:
{
uint64_t v___y_2833_; uint64_t v___y_2834_; uint64_t v___x_2877_; uint64_t v___y_2879_; 
v___x_2877_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_2830_ == 0)
{
uint64_t v___x_2884_; 
v___x_2884_ = 0ULL;
v___y_2879_ = v___x_2884_;
goto v___jp_2878_;
}
else
{
uint64_t v___x_2885_; 
v___x_2885_ = 2ULL;
v___y_2879_ = v___x_2885_;
goto v___jp_2878_;
}
v___jp_2832_:
{
uint64_t v_flags_2835_; uint32_t v___x_2836_; lean_object* v___x_2837_; uint32_t v___x_2838_; lean_object* v___x_2839_; 
v_flags_2835_ = lean_uint64_lor(v___y_2833_, v___y_2834_);
v___x_2836_ = 214;
v___x_2837_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2828_, v_args_2829_);
v___x_2838_ = 0;
v___x_2839_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2836_, v_flags_2835_, v___x_2837_, v___x_2838_);
lean_dec(v___x_2837_);
if (lean_obj_tag(v___x_2839_) == 0)
{
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_object* v_a_2840_; lean_object* v___x_2841_; 
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
lean_inc(v_a_2840_);
lean_dec_ref_known(v___x_2839_, 1);
v___x_2841_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2840_);
lean_dec(v_a_2840_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
lean_dec_ref_known(v___x_2841_, 1);
v___x_2843_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2828_);
v___x_2844_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0_spec__0(v___x_2843_, v_a_2842_);
lean_dec_ref(v___x_2843_);
return v___x_2844_;
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
v_a_2845_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2847_ = v___x_2841_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2841_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
else
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2860_; 
v_a_2853_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2860_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2860_ == 0)
{
v___x_2855_ = v___x_2839_;
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v___x_2839_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2858_; 
if (v_isShared_2856_ == 0)
{
lean_ctor_set_tag(v___x_2855_, 1);
v___x_2858_ = v___x_2855_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_a_2853_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
}
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2876_; 
v_a_2861_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2863_ = v___x_2839_;
v_isShared_2864_ = v_isSharedCheck_2876_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2839_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2876_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2874_; 
v___x_2865_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_2866_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2828_);
v___x_2867_ = lean_string_append(v___x_2865_, v___x_2866_);
lean_dec_ref(v___x_2866_);
v___x_2868_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_2869_ = lean_string_append(v___x_2867_, v___x_2868_);
v___x_2870_ = lean_io_error_to_string(v_a_2861_);
v___x_2871_ = lean_string_append(v___x_2869_, v___x_2870_);
lean_dec_ref(v___x_2870_);
v___x_2872_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 0, v___x_2872_);
v___x_2874_ = v___x_2863_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v___x_2872_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
v___jp_2878_:
{
uint8_t v_construct_2880_; uint64_t v___x_2881_; 
v_construct_2880_ = lean_ctor_get_uint8(v_b_2828_, sizeof(void*)*4);
v___x_2881_ = lean_uint64_lor(v___x_2877_, v___y_2879_);
if (v_construct_2880_ == 0)
{
uint64_t v___x_2882_; 
v___x_2882_ = 0ULL;
v___y_2833_ = v___x_2881_;
v___y_2834_ = v___x_2882_;
goto v___jp_2832_;
}
else
{
uint64_t v___x_2883_; 
v___x_2883_ = 4ULL;
v___y_2833_ = v___x_2881_;
v___y_2834_ = v___x_2883_;
goto v___jp_2832_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0___boxed(lean_object* v_b_2886_, lean_object* v_args_2887_, lean_object* v_await_2888_, lean_object* v_a_2889_){
_start:
{
uint8_t v_await_boxed_2890_; lean_object* v_res_2891_; 
v_await_boxed_2890_ = lean_unbox(v_await_2888_);
v_res_2891_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(v_b_2886_, v_args_2887_, v_await_boxed_2890_);
lean_dec_ref(v_b_2886_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_new(lean_object* v_descriptor_2900_, lean_object* v_value_2901_){
_start:
{
uint8_t v_element_2903_; lean_object* v_initial_2904_; lean_object* v_maximum_2905_; lean_object* v_address_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___y_2911_; 
v_element_2903_ = lean_ctor_get_uint8(v_descriptor_2900_, sizeof(void*)*3);
v_initial_2904_ = lean_ctor_get(v_descriptor_2900_, 0);
v_maximum_2905_ = lean_ctor_get(v_descriptor_2900_, 1);
v_address_2906_ = lean_ctor_get(v_descriptor_2900_, 2);
v___x_2907_ = lean_unsigned_to_nat(2u);
v___x_2908_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_new___closed__2));
v___x_2909_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableDescriptor___lam__0___closed__0));
if (v_element_2903_ == 0)
{
lean_object* v___x_2933_; 
v___x_2933_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_2911_ = v___x_2933_;
goto v___jp_2910_;
}
else
{
lean_object* v___x_2934_; 
v___x_2934_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_2911_ = v___x_2934_;
goto v___jp_2910_;
}
v___jp_2910_:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; uint8_t v___x_2931_; lean_object* v___x_2932_; 
lean_inc(v___y_2911_);
v___x_2912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2909_);
lean_ctor_set(v___x_2912_, 1, v___y_2911_);
v___x_2913_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__0));
lean_inc(v_initial_2904_);
v___x_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
lean_ctor_set(v___x_2914_, 1, v_initial_2904_);
v___x_2915_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__1));
lean_inc(v_maximum_2905_);
v___x_2916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
lean_ctor_set(v___x_2916_, 1, v_maximum_2905_);
v___x_2917_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMemoryDescriptor___lam__0___closed__2));
v___x_2918_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Memory_new_spec__0(v_address_2906_);
v___x_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2917_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
v___x_2920_ = lean_unsigned_to_nat(4u);
v___x_2921_ = lean_mk_empty_array_with_capacity(v___x_2920_);
v___x_2922_ = lean_array_push(v___x_2921_, v___x_2912_);
v___x_2923_ = lean_array_push(v___x_2922_, v___x_2914_);
v___x_2924_ = lean_array_push(v___x_2923_, v___x_2916_);
v___x_2925_ = lean_array_push(v___x_2924_, v___x_2919_);
v___x_2926_ = l_Lasm_JS_Web_Support_fields(v___x_2925_);
lean_dec_ref(v___x_2925_);
v___x_2927_ = lean_mk_empty_array_with_capacity(v___x_2907_);
v___x_2928_ = lean_array_push(v___x_2927_, v___x_2926_);
v___x_2929_ = lean_array_push(v___x_2928_, v_value_2901_);
v___x_2930_ = l_Lasm_JS_Web_Support_args(v___x_2929_);
v___x_2931_ = 0;
v___x_2932_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Table_new_spec__0(v___x_2908_, v___x_2930_, v___x_2931_);
return v___x_2932_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_new___boxed(lean_object* v_descriptor_2935_, lean_object* v_value_2936_, lean_object* v_a_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l_Lasm_JS_Web_WebAssembly_Table_new(v_descriptor_2935_, v_value_2936_);
lean_dec_ref(v_descriptor_2935_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_length(lean_object* v_self_2940_){
_start:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2942_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_length___closed__0));
v___x_2943_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2940_, v___x_2942_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_length___boxed(lean_object* v_self_2944_, lean_object* v_a_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Lasm_JS_Web_WebAssembly_Table_length(v_self_2944_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_grow(lean_object* v_self_2947_, lean_object* v_delta_2948_, lean_object* v_value_2949_){
_start:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2951_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Memory_grow___closed__0));
v___x_2952_ = lean_unsigned_to_nat(2u);
v___x_2953_ = lean_mk_empty_array_with_capacity(v___x_2952_);
v___x_2954_ = lean_array_push(v___x_2953_, v_delta_2948_);
v___x_2955_ = lean_array_push(v___x_2954_, v_value_2949_);
v___x_2956_ = l_Lasm_JS_Web_Support_args(v___x_2955_);
v___x_2957_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2947_, v___x_2951_, v___x_2956_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_grow___boxed(lean_object* v_self_2958_, lean_object* v_delta_2959_, lean_object* v_value_2960_, lean_object* v_a_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l_Lasm_JS_Web_WebAssembly_Table_grow(v_self_2958_, v_delta_2959_, v_value_2960_);
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_get(lean_object* v_self_2964_, lean_object* v_index_2965_){
_start:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2967_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_get___closed__0));
v___x_2968_ = lean_unsigned_to_nat(1u);
v___x_2969_ = lean_mk_empty_array_with_capacity(v___x_2968_);
v___x_2970_ = lean_array_push(v___x_2969_, v_index_2965_);
v___x_2971_ = l_Lasm_JS_Web_Support_args(v___x_2970_);
v___x_2972_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_2964_, v___x_2967_, v___x_2971_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_get___boxed(lean_object* v_self_2973_, lean_object* v_index_2974_, lean_object* v_a_2975_){
_start:
{
lean_object* v_res_2976_; 
v_res_2976_ = l_Lasm_JS_Web_WebAssembly_Table_get(v_self_2973_, v_index_2974_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_set(lean_object* v_self_2978_, lean_object* v_index_2979_, lean_object* v_value_2980_){
_start:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2982_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Table_set___closed__0));
v___x_2983_ = lean_unsigned_to_nat(2u);
v___x_2984_ = lean_mk_empty_array_with_capacity(v___x_2983_);
v___x_2985_ = lean_array_push(v___x_2984_, v_index_2979_);
v___x_2986_ = lean_array_push(v___x_2985_, v_value_2980_);
v___x_2987_ = l_Lasm_JS_Web_Support_args(v___x_2986_);
v___x_2988_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2978_, v___x_2982_, v___x_2987_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Table_set___boxed(lean_object* v_self_2989_, lean_object* v_index_2990_, lean_object* v_value_2991_, lean_object* v_a_2992_){
_start:
{
lean_object* v_res_2993_; 
v_res_2993_ = l_Lasm_JS_Web_WebAssembly_Table_set(v_self_2989_, v_index_2990_, v_value_2991_);
return v_res_2993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_cast_x3f(lean_object* v_v_3003_){
_start:
{
lean_object* v___f_3005_; lean_object* v___x_3006_; 
v___f_3005_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___closed__3));
lean_inc(v_v_3003_);
v___x_3006_ = l_Lasm_JS_Web_Support_isInstance(v___f_3005_, v_v_3003_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v_a_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3020_; 
v_a_3007_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3009_ = v___x_3006_;
v_isShared_3010_ = v_isSharedCheck_3020_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_a_3007_);
lean_dec(v___x_3006_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3020_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
uint8_t v___x_3011_; 
v___x_3011_ = lean_unbox(v_a_3007_);
lean_dec(v_a_3007_);
if (v___x_3011_ == 0)
{
lean_object* v___x_3012_; lean_object* v___x_3014_; 
lean_dec(v_v_3003_);
v___x_3012_ = lean_box(0);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 0, v___x_3012_);
v___x_3014_ = v___x_3009_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
else
{
lean_object* v___x_3016_; lean_object* v___x_3018_; 
v___x_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3016_, 0, v_v_3003_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 0, v___x_3016_);
v___x_3018_ = v___x_3009_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v___x_3016_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
}
else
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
lean_dec(v_v_3003_);
v_a_3021_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v___x_3006_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_3006_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3021_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_cast_x3f___boxed(lean_object* v_v_3029_, lean_object* v_a_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_Lasm_JS_Web_WebAssembly_Global_cast_x3f(v_v_3029_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(lean_object* v_context_3032_, lean_object* v_d_3033_){
_start:
{
lean_object* v___y_3036_; lean_object* v___y_3037_; 
if (lean_obj_tag(v_d_3033_) == 9)
{
lean_object* v_value_3041_; lean_object* v___x_3042_; 
v_value_3041_ = lean_ctor_get(v_d_3033_, 0);
lean_inc(v_value_3041_);
lean_dec_ref_known(v_d_3033_, 2);
v___x_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3042_, 0, v_value_3041_);
return v___x_3042_;
}
else
{
lean_object* v___x_3043_; lean_object* v_received_3045_; 
v___x_3043_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3033_) == 9)
{
lean_object* v_value_3059_; lean_object* v_description_3060_; uint8_t v___x_3061_; 
v_value_3059_ = lean_ctor_get(v_d_3033_, 0);
v_description_3060_ = lean_ctor_get(v_d_3033_, 1);
v___x_3061_ = lean_string_dec_eq(v_description_3060_, v___x_3043_);
if (v___x_3061_ == 0)
{
goto v___jp_3057_;
}
else
{
uint32_t v___x_3062_; uint64_t v___x_3063_; lean_object* v___x_3064_; uint32_t v___x_3065_; lean_object* v___x_3066_; 
lean_inc_n(v_value_3059_, 2);
lean_dec_ref_known(v_d_3033_, 2);
v___x_3062_ = 206;
v___x_3063_ = 0ULL;
v___x_3064_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3064_, 0, v_value_3059_);
lean_ctor_set(v___x_3064_, 1, v___x_3043_);
v___x_3065_ = lasm_js_value_handle(v_value_3059_);
lean_dec(v_value_3059_);
v___x_3066_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3062_, v___x_3063_, v___x_3064_, v___x_3065_);
lean_dec_ref_known(v___x_3064_, 2);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; uint8_t v___x_3068_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
v___x_3068_ = lean_string_validate_utf8(v_a_3067_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
lean_dec(v_a_3067_);
v___x_3069_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3070_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3069_);
v_received_3045_ = v___x_3070_;
goto v___jp_3044_;
}
else
{
lean_object* v___x_3071_; 
v___x_3071_ = lean_string_from_utf8_unchecked(v_a_3067_);
v_received_3045_ = v___x_3071_;
goto v___jp_3044_;
}
}
else
{
lean_object* v___x_3072_; 
lean_dec_ref_known(v___x_3066_, 1);
v___x_3072_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3045_ = v___x_3072_;
goto v___jp_3044_;
}
}
}
else
{
goto v___jp_3057_;
}
v___jp_3044_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; uint8_t v___x_3055_; 
v___x_3046_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3047_ = lean_string_append(v___x_3046_, v_context_3032_);
v___x_3048_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3049_ = lean_string_append(v___x_3047_, v___x_3048_);
v___x_3050_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSGlobal___closed__0));
v___x_3051_ = lean_string_append(v___x_3049_, v___x_3050_);
v___x_3052_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3053_ = lean_string_append(v___x_3051_, v___x_3052_);
v___x_3054_ = lean_string_append(v___x_3053_, v_received_3045_);
lean_dec_ref(v_received_3045_);
v___x_3055_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3055_ == 0)
{
lean_object* v___x_3056_; 
v___x_3056_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3036_ = v___x_3054_;
v___y_3037_ = v___x_3056_;
goto v___jp_3035_;
}
else
{
v___y_3036_ = v___x_3054_;
v___y_3037_ = v___x_3043_;
goto v___jp_3035_;
}
}
v___jp_3057_:
{
lean_object* v___x_3058_; 
v___x_3058_ = l_Lasm_JS_Data_describe(v_d_3033_);
v_received_3045_ = v___x_3058_;
goto v___jp_3044_;
}
}
v___jp_3035_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3038_ = lean_string_append(v___y_3036_, v___y_3037_);
v___x_3039_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3038_);
v___x_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3040_, 0, v___x_3039_);
return v___x_3040_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0___boxed(lean_object* v_context_3073_, lean_object* v_d_3074_, lean_object* v_a_3075_){
_start:
{
lean_object* v_res_3076_; 
v_res_3076_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(v_context_3073_, v_d_3074_);
lean_dec_ref(v_context_3073_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(lean_object* v_b_3077_, lean_object* v_args_3078_, uint8_t v_await_3079_){
_start:
{
uint64_t v___y_3082_; uint64_t v___y_3083_; uint64_t v___x_3126_; uint64_t v___y_3128_; 
v___x_3126_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3079_ == 0)
{
uint64_t v___x_3133_; 
v___x_3133_ = 0ULL;
v___y_3128_ = v___x_3133_;
goto v___jp_3127_;
}
else
{
uint64_t v___x_3134_; 
v___x_3134_ = 2ULL;
v___y_3128_ = v___x_3134_;
goto v___jp_3127_;
}
v___jp_3081_:
{
uint64_t v_flags_3084_; uint32_t v___x_3085_; lean_object* v___x_3086_; uint32_t v___x_3087_; lean_object* v___x_3088_; 
v_flags_3084_ = lean_uint64_lor(v___y_3082_, v___y_3083_);
v___x_3085_ = 214;
v___x_3086_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3077_, v_args_3078_);
v___x_3087_ = 0;
v___x_3088_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3085_, v_flags_3084_, v___x_3086_, v___x_3087_);
lean_dec(v___x_3086_);
if (lean_obj_tag(v___x_3088_) == 0)
{
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3089_; lean_object* v___x_3090_; 
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc(v_a_3089_);
lean_dec_ref_known(v___x_3088_, 1);
v___x_3090_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3089_);
lean_dec(v_a_3089_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v_a_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
lean_inc(v_a_3091_);
lean_dec_ref_known(v___x_3090_, 1);
v___x_3092_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3077_);
v___x_3093_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0_spec__0(v___x_3092_, v_a_3091_);
lean_dec_ref(v___x_3092_);
return v___x_3093_;
}
else
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
v_a_3094_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3090_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3090_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
v_a_3102_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3088_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3088_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
lean_ctor_set_tag(v___x_3104_, 1);
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
else
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3125_; 
v_a_3110_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3112_ = v___x_3088_;
v_isShared_3113_ = v_isSharedCheck_3125_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3088_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3125_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3123_; 
v___x_3114_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3115_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3077_);
v___x_3116_ = lean_string_append(v___x_3114_, v___x_3115_);
lean_dec_ref(v___x_3115_);
v___x_3117_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3118_ = lean_string_append(v___x_3116_, v___x_3117_);
v___x_3119_ = lean_io_error_to_string(v_a_3110_);
v___x_3120_ = lean_string_append(v___x_3118_, v___x_3119_);
lean_dec_ref(v___x_3119_);
v___x_3121_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v___x_3121_);
v___x_3123_ = v___x_3112_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v___x_3121_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
v___jp_3127_:
{
uint8_t v_construct_3129_; uint64_t v___x_3130_; 
v_construct_3129_ = lean_ctor_get_uint8(v_b_3077_, sizeof(void*)*4);
v___x_3130_ = lean_uint64_lor(v___x_3126_, v___y_3128_);
if (v_construct_3129_ == 0)
{
uint64_t v___x_3131_; 
v___x_3131_ = 0ULL;
v___y_3082_ = v___x_3130_;
v___y_3083_ = v___x_3131_;
goto v___jp_3081_;
}
else
{
uint64_t v___x_3132_; 
v___x_3132_ = 4ULL;
v___y_3082_ = v___x_3130_;
v___y_3083_ = v___x_3132_;
goto v___jp_3081_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0___boxed(lean_object* v_b_3135_, lean_object* v_args_3136_, lean_object* v_await_3137_, lean_object* v_a_3138_){
_start:
{
uint8_t v_await_boxed_3139_; lean_object* v_res_3140_; 
v_await_boxed_3139_ = lean_unbox(v_await_3137_);
v_res_3140_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(v_b_3135_, v_args_3136_, v_await_boxed_3139_);
lean_dec_ref(v_b_3135_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_new(lean_object* v_descriptor_3149_, lean_object* v_v_3150_){
_start:
{
uint8_t v_value_3152_; lean_object* v_mutable_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___y_3158_; 
v_value_3152_ = lean_ctor_get_uint8(v_descriptor_3149_, sizeof(void*)*1);
v_mutable_3153_ = lean_ctor_get(v_descriptor_3149_, 0);
v___x_3154_ = lean_unsigned_to_nat(2u);
v___x_3155_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Global_new___closed__2));
v___x_3156_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
switch(v_value_3152_)
{
case 0:
{
lean_object* v___x_3172_; 
v___x_3172_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
v___y_3158_ = v___x_3172_;
goto v___jp_3157_;
}
case 1:
{
lean_object* v___x_3173_; 
v___x_3173_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
v___y_3158_ = v___x_3173_;
goto v___jp_3157_;
}
case 2:
{
lean_object* v___x_3174_; 
v___x_3174_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1));
v___y_3158_ = v___x_3174_;
goto v___jp_3157_;
}
case 3:
{
lean_object* v___x_3175_; 
v___x_3175_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3));
v___y_3158_ = v___x_3175_;
goto v___jp_3157_;
}
case 4:
{
lean_object* v___x_3176_; 
v___x_3176_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5));
v___y_3158_ = v___x_3176_;
goto v___jp_3157_;
}
case 5:
{
lean_object* v___x_3177_; 
v___x_3177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_3158_ = v___x_3177_;
goto v___jp_3157_;
}
default: 
{
lean_object* v___x_3178_; 
v___x_3178_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_3158_ = v___x_3178_;
goto v___jp_3157_;
}
}
v___jp_3157_:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; uint8_t v___x_3170_; lean_object* v___x_3171_; 
lean_inc(v___y_3158_);
v___x_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3156_);
lean_ctor_set(v___x_3159_, 1, v___y_3158_);
v___x_3160_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__1));
v___x_3161_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_mutable_3153_);
v___x_3162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3160_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
v___x_3163_ = lean_mk_empty_array_with_capacity(v___x_3154_);
lean_inc_ref(v___x_3163_);
v___x_3164_ = lean_array_push(v___x_3163_, v___x_3159_);
v___x_3165_ = lean_array_push(v___x_3164_, v___x_3162_);
v___x_3166_ = l_Lasm_JS_Web_Support_fields(v___x_3165_);
lean_dec_ref(v___x_3165_);
v___x_3167_ = lean_array_push(v___x_3163_, v___x_3166_);
v___x_3168_ = lean_array_push(v___x_3167_, v_v_3150_);
v___x_3169_ = l_Lasm_JS_Web_Support_args(v___x_3168_);
v___x_3170_ = 0;
v___x_3171_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Global_new_spec__0(v___x_3155_, v___x_3169_, v___x_3170_);
return v___x_3171_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_new___boxed(lean_object* v_descriptor_3179_, lean_object* v_v_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l_Lasm_JS_Web_WebAssembly_Global_new(v_descriptor_3179_, v_v_3180_);
lean_dec_ref(v_descriptor_3179_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_value(lean_object* v_self_3183_){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
v___x_3186_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3183_, v___x_3185_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_value___boxed(lean_object* v_self_3187_, lean_object* v_a_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l_Lasm_JS_Web_WebAssembly_Global_value(v_self_3187_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_setValue(lean_object* v_self_3190_, lean_object* v_value_3191_){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = ((lean_object*)(l_Lasm_JS_Web_instToJSGlobalDescriptor___lam__0___closed__0));
v___x_3194_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_3190_, v___x_3193_, v_value_3191_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_setValue___boxed(lean_object* v_self_3195_, lean_object* v_value_3196_, lean_object* v_a_3197_){
_start:
{
lean_object* v_res_3198_; 
v_res_3198_ = l_Lasm_JS_Web_WebAssembly_Global_setValue(v_self_3195_, v_value_3196_);
return v_res_3198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf(lean_object* v_self_3200_){
_start:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3202_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Global_valueOf___closed__0));
v___x_3203_ = lean_obj_once(&l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2, &l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2_once, _init_l_Lasm_JS_Web_WebAssembly_Memory_toFixedLengthBuffer___closed__2);
v___x_3204_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_3200_, v___x_3202_, v___x_3203_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Global_valueOf___boxed(lean_object* v_self_3205_, lean_object* v_a_3206_){
_start:
{
lean_object* v_res_3207_; 
v_res_3207_ = l_Lasm_JS_Web_WebAssembly_Global_valueOf(v_self_3205_);
return v_res_3207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f(lean_object* v_v_3217_){
_start:
{
lean_object* v___f_3219_; lean_object* v___x_3220_; 
v___f_3219_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___closed__3));
lean_inc(v_v_3217_);
v___x_3220_ = l_Lasm_JS_Web_Support_isInstance(v___f_3219_, v_v_3217_);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3234_; 
v_a_3221_ = lean_ctor_get(v___x_3220_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3220_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3223_ = v___x_3220_;
v_isShared_3224_ = v_isSharedCheck_3234_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3220_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3234_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
uint8_t v___x_3225_; 
v___x_3225_ = lean_unbox(v_a_3221_);
lean_dec(v_a_3221_);
if (v___x_3225_ == 0)
{
lean_object* v___x_3226_; lean_object* v___x_3228_; 
lean_dec(v_v_3217_);
v___x_3226_ = lean_box(0);
if (v_isShared_3224_ == 0)
{
lean_ctor_set(v___x_3223_, 0, v___x_3226_);
v___x_3228_ = v___x_3223_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v___x_3226_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
else
{
lean_object* v___x_3230_; lean_object* v___x_3232_; 
v___x_3230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3230_, 0, v_v_3217_);
if (v_isShared_3224_ == 0)
{
lean_ctor_set(v___x_3223_, 0, v___x_3230_);
v___x_3232_ = v___x_3223_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v___x_3230_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_dec(v_v_3217_);
v_a_3235_ = lean_ctor_get(v___x_3220_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3220_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3220_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3220_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f___boxed(lean_object* v_v_3243_, lean_object* v_a_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l_Lasm_JS_Web_WebAssembly_Tag_cast_x3f(v_v_3243_);
return v_res_3245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(lean_object* v_context_3246_, lean_object* v_d_3247_){
_start:
{
lean_object* v___y_3250_; lean_object* v___y_3251_; 
if (lean_obj_tag(v_d_3247_) == 9)
{
lean_object* v_value_3255_; lean_object* v___x_3256_; 
v_value_3255_ = lean_ctor_get(v_d_3247_, 0);
lean_inc(v_value_3255_);
lean_dec_ref_known(v_d_3247_, 2);
v___x_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3256_, 0, v_value_3255_);
return v___x_3256_;
}
else
{
lean_object* v___x_3257_; lean_object* v_received_3259_; 
v___x_3257_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3247_) == 9)
{
lean_object* v_value_3273_; lean_object* v_description_3274_; uint8_t v___x_3275_; 
v_value_3273_ = lean_ctor_get(v_d_3247_, 0);
v_description_3274_ = lean_ctor_get(v_d_3247_, 1);
v___x_3275_ = lean_string_dec_eq(v_description_3274_, v___x_3257_);
if (v___x_3275_ == 0)
{
goto v___jp_3271_;
}
else
{
uint32_t v___x_3276_; uint64_t v___x_3277_; lean_object* v___x_3278_; uint32_t v___x_3279_; lean_object* v___x_3280_; 
lean_inc_n(v_value_3273_, 2);
lean_dec_ref_known(v_d_3247_, 2);
v___x_3276_ = 206;
v___x_3277_ = 0ULL;
v___x_3278_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3278_, 0, v_value_3273_);
lean_ctor_set(v___x_3278_, 1, v___x_3257_);
v___x_3279_ = lasm_js_value_handle(v_value_3273_);
lean_dec(v_value_3273_);
v___x_3280_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3276_, v___x_3277_, v___x_3278_, v___x_3279_);
lean_dec_ref_known(v___x_3278_, 2);
if (lean_obj_tag(v___x_3280_) == 0)
{
lean_object* v_a_3281_; uint8_t v___x_3282_; 
v_a_3281_ = lean_ctor_get(v___x_3280_, 0);
lean_inc(v_a_3281_);
lean_dec_ref_known(v___x_3280_, 1);
v___x_3282_ = lean_string_validate_utf8(v_a_3281_);
if (v___x_3282_ == 0)
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
lean_dec(v_a_3281_);
v___x_3283_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3284_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3283_);
v_received_3259_ = v___x_3284_;
goto v___jp_3258_;
}
else
{
lean_object* v___x_3285_; 
v___x_3285_ = lean_string_from_utf8_unchecked(v_a_3281_);
v_received_3259_ = v___x_3285_;
goto v___jp_3258_;
}
}
else
{
lean_object* v___x_3286_; 
lean_dec_ref_known(v___x_3280_, 1);
v___x_3286_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3259_ = v___x_3286_;
goto v___jp_3258_;
}
}
}
else
{
goto v___jp_3271_;
}
v___jp_3258_:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; uint8_t v___x_3269_; 
v___x_3260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3261_ = lean_string_append(v___x_3260_, v_context_3246_);
v___x_3262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3263_ = lean_string_append(v___x_3261_, v___x_3262_);
v___x_3264_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTag___closed__0));
v___x_3265_ = lean_string_append(v___x_3263_, v___x_3264_);
v___x_3266_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3267_ = lean_string_append(v___x_3265_, v___x_3266_);
v___x_3268_ = lean_string_append(v___x_3267_, v_received_3259_);
lean_dec_ref(v_received_3259_);
v___x_3269_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3269_ == 0)
{
lean_object* v___x_3270_; 
v___x_3270_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3250_ = v___x_3268_;
v___y_3251_ = v___x_3270_;
goto v___jp_3249_;
}
else
{
v___y_3250_ = v___x_3268_;
v___y_3251_ = v___x_3257_;
goto v___jp_3249_;
}
}
v___jp_3271_:
{
lean_object* v___x_3272_; 
v___x_3272_ = l_Lasm_JS_Data_describe(v_d_3247_);
v_received_3259_ = v___x_3272_;
goto v___jp_3258_;
}
}
v___jp_3249_:
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3252_ = lean_string_append(v___y_3250_, v___y_3251_);
v___x_3253_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
v___x_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
return v___x_3254_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1___boxed(lean_object* v_context_3287_, lean_object* v_d_3288_, lean_object* v_a_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(v_context_3287_, v_d_3288_);
lean_dec_ref(v_context_3287_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(lean_object* v_b_3291_, lean_object* v_args_3292_, uint8_t v_await_3293_){
_start:
{
uint64_t v___y_3296_; uint64_t v___y_3297_; uint64_t v___x_3340_; uint64_t v___y_3342_; 
v___x_3340_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3293_ == 0)
{
uint64_t v___x_3347_; 
v___x_3347_ = 0ULL;
v___y_3342_ = v___x_3347_;
goto v___jp_3341_;
}
else
{
uint64_t v___x_3348_; 
v___x_3348_ = 2ULL;
v___y_3342_ = v___x_3348_;
goto v___jp_3341_;
}
v___jp_3295_:
{
uint64_t v_flags_3298_; uint32_t v___x_3299_; lean_object* v___x_3300_; uint32_t v___x_3301_; lean_object* v___x_3302_; 
v_flags_3298_ = lean_uint64_lor(v___y_3296_, v___y_3297_);
v___x_3299_ = 214;
v___x_3300_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3291_, v_args_3292_);
v___x_3301_ = 0;
v___x_3302_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3299_, v_flags_3298_, v___x_3300_, v___x_3301_);
lean_dec(v___x_3300_);
if (lean_obj_tag(v___x_3302_) == 0)
{
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v_a_3303_; lean_object* v___x_3304_; 
v_a_3303_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_a_3303_);
lean_dec_ref_known(v___x_3302_, 1);
v___x_3304_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3303_);
lean_dec(v_a_3303_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_object* v_a_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v_a_3305_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_a_3305_);
lean_dec_ref_known(v___x_3304_, 1);
v___x_3306_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3291_);
v___x_3307_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1_spec__1(v___x_3306_, v_a_3305_);
lean_dec_ref(v___x_3306_);
return v___x_3307_;
}
else
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3315_; 
v_a_3308_ = lean_ctor_get(v___x_3304_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3304_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3310_ = v___x_3304_;
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v___x_3304_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3313_; 
if (v_isShared_3311_ == 0)
{
v___x_3313_ = v___x_3310_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_a_3308_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
}
}
else
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3323_; 
v_a_3316_ = lean_ctor_get(v___x_3302_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3318_ = v___x_3302_;
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v___x_3302_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3321_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set_tag(v___x_3318_, 1);
v___x_3321_ = v___x_3318_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_a_3316_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
return v___x_3321_;
}
}
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3339_; 
v_a_3324_ = lean_ctor_get(v___x_3302_, 0);
v_isSharedCheck_3339_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3326_ = v___x_3302_;
v_isShared_3327_ = v_isSharedCheck_3339_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3302_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3339_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3337_; 
v___x_3328_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3329_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3291_);
v___x_3330_ = lean_string_append(v___x_3328_, v___x_3329_);
lean_dec_ref(v___x_3329_);
v___x_3331_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3332_ = lean_string_append(v___x_3330_, v___x_3331_);
v___x_3333_ = lean_io_error_to_string(v_a_3324_);
v___x_3334_ = lean_string_append(v___x_3332_, v___x_3333_);
lean_dec_ref(v___x_3333_);
v___x_3335_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3334_);
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 0, v___x_3335_);
v___x_3337_ = v___x_3326_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v___x_3335_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
}
}
v___jp_3341_:
{
uint8_t v_construct_3343_; uint64_t v___x_3344_; 
v_construct_3343_ = lean_ctor_get_uint8(v_b_3291_, sizeof(void*)*4);
v___x_3344_ = lean_uint64_lor(v___x_3340_, v___y_3342_);
if (v_construct_3343_ == 0)
{
uint64_t v___x_3345_; 
v___x_3345_ = 0ULL;
v___y_3296_ = v___x_3344_;
v___y_3297_ = v___x_3345_;
goto v___jp_3295_;
}
else
{
uint64_t v___x_3346_; 
v___x_3346_ = 4ULL;
v___y_3296_ = v___x_3344_;
v___y_3297_ = v___x_3346_;
goto v___jp_3295_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1___boxed(lean_object* v_b_3349_, lean_object* v_args_3350_, lean_object* v_await_3351_, lean_object* v_a_3352_){
_start:
{
uint8_t v_await_boxed_3353_; lean_object* v_res_3354_; 
v_await_boxed_3353_ = lean_unbox(v_await_3351_);
v_res_3354_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(v_b_3349_, v_args_3350_, v_await_boxed_3353_);
lean_dec_ref(v_b_3349_);
return v_res_3354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(size_t v_sz_3355_, size_t v_i_3356_, lean_object* v_bs_3357_){
_start:
{
uint8_t v___x_3358_; 
v___x_3358_ = lean_usize_dec_lt(v_i_3356_, v_sz_3355_);
if (v___x_3358_ == 0)
{
return v_bs_3357_;
}
else
{
lean_object* v_v_3359_; lean_object* v___x_3360_; lean_object* v_bs_x27_3361_; lean_object* v___y_3363_; uint8_t v___x_3368_; 
v_v_3359_ = lean_array_uget(v_bs_3357_, v_i_3356_);
v___x_3360_ = lean_unsigned_to_nat(0u);
v_bs_x27_3361_ = lean_array_uset(v_bs_3357_, v_i_3356_, v___x_3360_);
v___x_3368_ = lean_unbox(v_v_3359_);
lean_dec(v_v_3359_);
switch(v___x_3368_)
{
case 0:
{
lean_object* v___x_3369_; 
v___x_3369_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__1));
v___y_3363_ = v___x_3369_;
goto v___jp_3362_;
}
case 1:
{
lean_object* v___x_3370_; 
v___x_3370_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddressType___lam__0___closed__3));
v___y_3363_ = v___x_3370_;
goto v___jp_3362_;
}
case 2:
{
lean_object* v___x_3371_; 
v___x_3371_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__1));
v___y_3363_ = v___x_3371_;
goto v___jp_3362_;
}
case 3:
{
lean_object* v___x_3372_; 
v___x_3372_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__3));
v___y_3363_ = v___x_3372_;
goto v___jp_3362_;
}
case 4:
{
lean_object* v___x_3373_; 
v___x_3373_ = ((lean_object*)(l_Lasm_JS_Web_instToJSValueType___lam__0___closed__5));
v___y_3363_ = v___x_3373_;
goto v___jp_3362_;
}
case 5:
{
lean_object* v___x_3374_; 
v___x_3374_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__1));
v___y_3363_ = v___x_3374_;
goto v___jp_3362_;
}
default: 
{
lean_object* v___x_3375_; 
v___x_3375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTableKind___lam__0___closed__3));
v___y_3363_ = v___x_3375_;
goto v___jp_3362_;
}
}
v___jp_3362_:
{
size_t v___x_3364_; size_t v___x_3365_; lean_object* v___x_3366_; 
v___x_3364_ = ((size_t)1ULL);
v___x_3365_ = lean_usize_add(v_i_3356_, v___x_3364_);
lean_inc(v___y_3363_);
v___x_3366_ = lean_array_uset(v_bs_x27_3361_, v_i_3356_, v___y_3363_);
v_i_3356_ = v___x_3365_;
v_bs_3357_ = v___x_3366_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0___boxed(lean_object* v_sz_3376_, lean_object* v_i_3377_, lean_object* v_bs_3378_){
_start:
{
size_t v_sz_boxed_3379_; size_t v_i_boxed_3380_; lean_object* v_res_3381_; 
v_sz_boxed_3379_ = lean_unbox_usize(v_sz_3376_);
lean_dec(v_sz_3376_);
v_i_boxed_3380_ = lean_unbox_usize(v_i_3377_);
lean_dec(v_i_3377_);
v_res_3381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(v_sz_boxed_3379_, v_i_boxed_3380_, v_bs_3378_);
return v_res_3381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new(lean_object* v_type_3390_){
_start:
{
lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; size_t v_sz_3395_; size_t v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; uint8_t v___x_3405_; lean_object* v___x_3406_; 
v___x_3392_ = lean_unsigned_to_nat(1u);
v___x_3393_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Tag_new___closed__2));
v___x_3394_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTagType___lam__1___closed__0));
v_sz_3395_ = lean_array_size(v_type_3390_);
v___x_3396_ = ((size_t)0ULL);
v___x_3397_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__0(v_sz_3395_, v___x_3396_, v_type_3390_);
v___x_3398_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3397_);
v___x_3399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3394_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
v___x_3400_ = lean_mk_empty_array_with_capacity(v___x_3392_);
lean_inc_ref(v___x_3400_);
v___x_3401_ = lean_array_push(v___x_3400_, v___x_3399_);
v___x_3402_ = l_Lasm_JS_Web_Support_fields(v___x_3401_);
lean_dec_ref(v___x_3401_);
v___x_3403_ = lean_array_push(v___x_3400_, v___x_3402_);
v___x_3404_ = l_Lasm_JS_Web_Support_args(v___x_3403_);
v___x_3405_ = 0;
v___x_3406_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Tag_new_spec__1(v___x_3393_, v___x_3404_, v___x_3405_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Tag_new___boxed(lean_object* v_type_3407_, lean_object* v_a_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l_Lasm_JS_Web_WebAssembly_Tag_new(v_type_3407_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f(lean_object* v_v_3419_){
_start:
{
lean_object* v___f_3421_; lean_object* v___x_3422_; 
v___f_3421_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___closed__3));
lean_inc(v_v_3419_);
v___x_3422_ = l_Lasm_JS_Web_Support_isInstance(v___f_3421_, v_v_3419_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3436_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3425_ = v___x_3422_;
v_isShared_3426_ = v_isSharedCheck_3436_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3422_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3436_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
uint8_t v___x_3427_; 
v___x_3427_ = lean_unbox(v_a_3423_);
lean_dec(v_a_3423_);
if (v___x_3427_ == 0)
{
lean_object* v___x_3428_; lean_object* v___x_3430_; 
lean_dec(v_v_3419_);
v___x_3428_ = lean_box(0);
if (v_isShared_3426_ == 0)
{
lean_ctor_set(v___x_3425_, 0, v___x_3428_);
v___x_3430_ = v___x_3425_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3428_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
else
{
lean_object* v___x_3432_; lean_object* v___x_3434_; 
v___x_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3432_, 0, v_v_3419_);
if (v_isShared_3426_ == 0)
{
lean_ctor_set(v___x_3425_, 0, v___x_3432_);
v___x_3434_ = v___x_3425_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v___x_3432_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
}
else
{
lean_object* v_a_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3444_; 
lean_dec(v_v_3419_);
v_a_3437_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3439_ = v___x_3422_;
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_a_3437_);
lean_dec(v___x_3422_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3442_; 
if (v_isShared_3440_ == 0)
{
v___x_3442_ = v___x_3439_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_a_3437_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f___boxed(lean_object* v_v_3445_, lean_object* v_a_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lasm_JS_Web_WebAssembly_Exception_cast_x3f(v_v_3445_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(lean_object* v_x_3448_){
_start:
{
if (lean_obj_tag(v_x_3448_) == 0)
{
lean_object* v___x_3449_; 
v___x_3449_ = lean_box(0);
return v___x_3449_;
}
else
{
lean_object* v_val_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v_val_3450_ = lean_ctor_get(v_x_3448_, 0);
v___x_3451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSExceptionOptions___lam__0___closed__0));
v___x_3452_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_3450_);
v___x_3453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3451_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v___x_3454_ = lean_unsigned_to_nat(1u);
v___x_3455_ = lean_mk_empty_array_with_capacity(v___x_3454_);
v___x_3456_ = lean_array_push(v___x_3455_, v___x_3453_);
v___x_3457_ = l_Lasm_JS_Web_Support_fields(v___x_3456_);
lean_dec_ref(v___x_3456_);
return v___x_3457_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1___boxed(lean_object* v_x_3458_){
_start:
{
lean_object* v_res_3459_; 
v_res_3459_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(v_x_3458_);
lean_dec(v_x_3458_);
return v_res_3459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(size_t v_sz_3460_, size_t v_i_3461_, lean_object* v_bs_3462_){
_start:
{
uint8_t v___x_3463_; 
v___x_3463_ = lean_usize_dec_lt(v_i_3461_, v_sz_3460_);
if (v___x_3463_ == 0)
{
return v_bs_3462_;
}
else
{
lean_object* v_v_3464_; lean_object* v___x_3465_; lean_object* v_bs_x27_3466_; size_t v___x_3467_; size_t v___x_3468_; lean_object* v___x_3469_; 
v_v_3464_ = lean_array_uget(v_bs_3462_, v_i_3461_);
v___x_3465_ = lean_unsigned_to_nat(0u);
v_bs_x27_3466_ = lean_array_uset(v_bs_3462_, v_i_3461_, v___x_3465_);
v___x_3467_ = ((size_t)1ULL);
v___x_3468_ = lean_usize_add(v_i_3461_, v___x_3467_);
v___x_3469_ = lean_array_uset(v_bs_x27_3466_, v_i_3461_, v_v_3464_);
v_i_3461_ = v___x_3468_;
v_bs_3462_ = v___x_3469_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0___boxed(lean_object* v_sz_3471_, lean_object* v_i_3472_, lean_object* v_bs_3473_){
_start:
{
size_t v_sz_boxed_3474_; size_t v_i_boxed_3475_; lean_object* v_res_3476_; 
v_sz_boxed_3474_ = lean_unbox_usize(v_sz_3471_);
lean_dec(v_sz_3471_);
v_i_boxed_3475_ = lean_unbox_usize(v_i_3472_);
lean_dec(v_i_3472_);
v_res_3476_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(v_sz_boxed_3474_, v_i_boxed_3475_, v_bs_3473_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(lean_object* v_context_3477_, lean_object* v_d_3478_){
_start:
{
lean_object* v___y_3481_; lean_object* v___y_3482_; 
if (lean_obj_tag(v_d_3478_) == 9)
{
lean_object* v_value_3486_; lean_object* v___x_3487_; 
v_value_3486_ = lean_ctor_get(v_d_3478_, 0);
lean_inc(v_value_3486_);
lean_dec_ref_known(v_d_3478_, 2);
v___x_3487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3487_, 0, v_value_3486_);
return v___x_3487_;
}
else
{
lean_object* v___x_3488_; lean_object* v_received_3490_; 
v___x_3488_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3478_) == 9)
{
lean_object* v_value_3504_; lean_object* v_description_3505_; uint8_t v___x_3506_; 
v_value_3504_ = lean_ctor_get(v_d_3478_, 0);
v_description_3505_ = lean_ctor_get(v_d_3478_, 1);
v___x_3506_ = lean_string_dec_eq(v_description_3505_, v___x_3488_);
if (v___x_3506_ == 0)
{
goto v___jp_3502_;
}
else
{
uint32_t v___x_3507_; uint64_t v___x_3508_; lean_object* v___x_3509_; uint32_t v___x_3510_; lean_object* v___x_3511_; 
lean_inc_n(v_value_3504_, 2);
lean_dec_ref_known(v_d_3478_, 2);
v___x_3507_ = 206;
v___x_3508_ = 0ULL;
v___x_3509_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3509_, 0, v_value_3504_);
lean_ctor_set(v___x_3509_, 1, v___x_3488_);
v___x_3510_ = lasm_js_value_handle(v_value_3504_);
lean_dec(v_value_3504_);
v___x_3511_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3507_, v___x_3508_, v___x_3509_, v___x_3510_);
lean_dec_ref_known(v___x_3509_, 2);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_object* v_a_3512_; uint8_t v___x_3513_; 
v_a_3512_ = lean_ctor_get(v___x_3511_, 0);
lean_inc(v_a_3512_);
lean_dec_ref_known(v___x_3511_, 1);
v___x_3513_ = lean_string_validate_utf8(v_a_3512_);
if (v___x_3513_ == 0)
{
lean_object* v___x_3514_; lean_object* v___x_3515_; 
lean_dec(v_a_3512_);
v___x_3514_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3515_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3514_);
v_received_3490_ = v___x_3515_;
goto v___jp_3489_;
}
else
{
lean_object* v___x_3516_; 
v___x_3516_ = lean_string_from_utf8_unchecked(v_a_3512_);
v_received_3490_ = v___x_3516_;
goto v___jp_3489_;
}
}
else
{
lean_object* v___x_3517_; 
lean_dec_ref_known(v___x_3511_, 1);
v___x_3517_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3490_ = v___x_3517_;
goto v___jp_3489_;
}
}
}
else
{
goto v___jp_3502_;
}
v___jp_3489_:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; uint8_t v___x_3500_; 
v___x_3491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3492_ = lean_string_append(v___x_3491_, v_context_3477_);
v___x_3493_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3494_ = lean_string_append(v___x_3492_, v___x_3493_);
v___x_3495_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSException___closed__0));
v___x_3496_ = lean_string_append(v___x_3494_, v___x_3495_);
v___x_3497_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3498_ = lean_string_append(v___x_3496_, v___x_3497_);
v___x_3499_ = lean_string_append(v___x_3498_, v_received_3490_);
lean_dec_ref(v_received_3490_);
v___x_3500_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3500_ == 0)
{
lean_object* v___x_3501_; 
v___x_3501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3481_ = v___x_3499_;
v___y_3482_ = v___x_3501_;
goto v___jp_3480_;
}
else
{
v___y_3481_ = v___x_3499_;
v___y_3482_ = v___x_3488_;
goto v___jp_3480_;
}
}
v___jp_3502_:
{
lean_object* v___x_3503_; 
v___x_3503_ = l_Lasm_JS_Data_describe(v_d_3478_);
v_received_3490_ = v___x_3503_;
goto v___jp_3489_;
}
}
v___jp_3480_:
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
v___x_3483_ = lean_string_append(v___y_3481_, v___y_3482_);
v___x_3484_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3483_);
v___x_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3485_, 0, v___x_3484_);
return v___x_3485_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2___boxed(lean_object* v_context_3518_, lean_object* v_d_3519_, lean_object* v_a_3520_){
_start:
{
lean_object* v_res_3521_; 
v_res_3521_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(v_context_3518_, v_d_3519_);
lean_dec_ref(v_context_3518_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(lean_object* v_b_3522_, lean_object* v_args_3523_, uint8_t v_await_3524_){
_start:
{
uint64_t v___y_3527_; uint64_t v___y_3528_; uint64_t v___x_3571_; uint64_t v___y_3573_; 
v___x_3571_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3524_ == 0)
{
uint64_t v___x_3578_; 
v___x_3578_ = 0ULL;
v___y_3573_ = v___x_3578_;
goto v___jp_3572_;
}
else
{
uint64_t v___x_3579_; 
v___x_3579_ = 2ULL;
v___y_3573_ = v___x_3579_;
goto v___jp_3572_;
}
v___jp_3526_:
{
uint64_t v_flags_3529_; uint32_t v___x_3530_; lean_object* v___x_3531_; uint32_t v___x_3532_; lean_object* v___x_3533_; 
v_flags_3529_ = lean_uint64_lor(v___y_3527_, v___y_3528_);
v___x_3530_ = 214;
v___x_3531_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3522_, v_args_3523_);
v___x_3532_ = 0;
v___x_3533_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3530_, v_flags_3529_, v___x_3531_, v___x_3532_);
lean_dec(v___x_3531_);
if (lean_obj_tag(v___x_3533_) == 0)
{
if (lean_obj_tag(v___x_3533_) == 0)
{
lean_object* v_a_3534_; lean_object* v___x_3535_; 
v_a_3534_ = lean_ctor_get(v___x_3533_, 0);
lean_inc(v_a_3534_);
lean_dec_ref_known(v___x_3533_, 1);
v___x_3535_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3534_);
lean_dec(v_a_3534_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_object* v_a_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; 
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
lean_inc(v_a_3536_);
lean_dec_ref_known(v___x_3535_, 1);
v___x_3537_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3522_);
v___x_3538_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2_spec__2(v___x_3537_, v_a_3536_);
lean_dec_ref(v___x_3537_);
return v___x_3538_;
}
else
{
lean_object* v_a_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3546_; 
v_a_3539_ = lean_ctor_get(v___x_3535_, 0);
v_isSharedCheck_3546_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3541_ = v___x_3535_;
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_a_3539_);
lean_dec(v___x_3535_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v___x_3544_; 
if (v_isShared_3542_ == 0)
{
v___x_3544_ = v___x_3541_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_a_3539_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
return v___x_3544_;
}
}
}
}
else
{
lean_object* v_a_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3554_; 
v_a_3547_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3554_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3549_ = v___x_3533_;
v_isShared_3550_ = v_isSharedCheck_3554_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_a_3547_);
lean_dec(v___x_3533_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3554_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___x_3552_; 
if (v_isShared_3550_ == 0)
{
lean_ctor_set_tag(v___x_3549_, 1);
v___x_3552_ = v___x_3549_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_a_3547_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
return v___x_3552_;
}
}
}
}
else
{
lean_object* v_a_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3570_; 
v_a_3555_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3557_ = v___x_3533_;
v_isShared_3558_ = v_isSharedCheck_3570_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_a_3555_);
lean_dec(v___x_3533_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3570_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3568_; 
v___x_3559_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3560_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3522_);
v___x_3561_ = lean_string_append(v___x_3559_, v___x_3560_);
lean_dec_ref(v___x_3560_);
v___x_3562_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3563_ = lean_string_append(v___x_3561_, v___x_3562_);
v___x_3564_ = lean_io_error_to_string(v_a_3555_);
v___x_3565_ = lean_string_append(v___x_3563_, v___x_3564_);
lean_dec_ref(v___x_3564_);
v___x_3566_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3565_);
if (v_isShared_3558_ == 0)
{
lean_ctor_set(v___x_3557_, 0, v___x_3566_);
v___x_3568_ = v___x_3557_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v___x_3566_);
v___x_3568_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
return v___x_3568_;
}
}
}
}
v___jp_3572_:
{
uint8_t v_construct_3574_; uint64_t v___x_3575_; 
v_construct_3574_ = lean_ctor_get_uint8(v_b_3522_, sizeof(void*)*4);
v___x_3575_ = lean_uint64_lor(v___x_3571_, v___y_3573_);
if (v_construct_3574_ == 0)
{
uint64_t v___x_3576_; 
v___x_3576_ = 0ULL;
v___y_3527_ = v___x_3575_;
v___y_3528_ = v___x_3576_;
goto v___jp_3526_;
}
else
{
uint64_t v___x_3577_; 
v___x_3577_ = 4ULL;
v___y_3527_ = v___x_3575_;
v___y_3528_ = v___x_3577_;
goto v___jp_3526_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2___boxed(lean_object* v_b_3580_, lean_object* v_args_3581_, lean_object* v_await_3582_, lean_object* v_a_3583_){
_start:
{
uint8_t v_await_boxed_3584_; lean_object* v_res_3585_; 
v_await_boxed_3584_ = lean_unbox(v_await_3582_);
v_res_3585_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(v_b_3580_, v_args_3581_, v_await_boxed_3584_);
lean_dec_ref(v_b_3580_);
return v_res_3585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new(lean_object* v_exceptionTag_3594_, lean_object* v_payload_3595_, lean_object* v_options_3596_){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; size_t v_sz_3602_; size_t v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; uint8_t v___x_3612_; lean_object* v___x_3613_; 
v___x_3598_ = lean_unsigned_to_nat(3u);
v___x_3599_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_new___closed__2));
v___x_3600_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3601_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3601_, 0, v_exceptionTag_3594_);
lean_ctor_set(v___x_3601_, 1, v___x_3600_);
v_sz_3602_ = lean_array_size(v_payload_3595_);
v___x_3603_ = ((size_t)0ULL);
v___x_3604_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__0(v_sz_3602_, v___x_3603_, v_payload_3595_);
v___x_3605_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3604_);
v___x_3606_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__1(v_options_3596_);
v___x_3607_ = lean_mk_empty_array_with_capacity(v___x_3598_);
v___x_3608_ = lean_array_push(v___x_3607_, v___x_3601_);
v___x_3609_ = lean_array_push(v___x_3608_, v___x_3605_);
v___x_3610_ = lean_array_push(v___x_3609_, v___x_3606_);
v___x_3611_ = l_Lasm_JS_Web_Support_args(v___x_3610_);
v___x_3612_ = 0;
v___x_3613_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Exception_new_spec__2(v___x_3599_, v___x_3611_, v___x_3612_);
return v___x_3613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_new___boxed(lean_object* v_exceptionTag_3614_, lean_object* v_payload_3615_, lean_object* v_options_3616_, lean_object* v_a_3617_){
_start:
{
lean_object* v_res_3618_; 
v_res_3618_ = l_Lasm_JS_Web_WebAssembly_Exception_new(v_exceptionTag_3614_, v_payload_3615_, v_options_3616_);
lean_dec(v_options_3616_);
return v_res_3618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(lean_object* v_o_3620_, lean_object* v_key_3621_){
_start:
{
lean_object* v_k_3623_; lean_object* v___x_3624_; 
v_k_3623_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3623_, 0, v_key_3621_);
v___x_3624_ = l_Lasm_JS_Wire_encodeIO(v_k_3623_);
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v_a_3625_; uint32_t v___x_3626_; uint32_t v___x_3627_; uint64_t v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v_a_3625_ = lean_ctor_get(v___x_3624_, 0);
lean_inc(v_a_3625_);
lean_dec_ref_known(v___x_3624_, 1);
v___x_3626_ = 203;
v___x_3627_ = lasm_js_value_handle(v_o_3620_);
v___x_3628_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
v___x_3629_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3630_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3630_, 0, v_o_3620_);
lean_ctor_set(v___x_3630_, 1, v___x_3629_);
v___x_3631_ = lean_unsigned_to_nat(2u);
v___x_3632_ = lean_mk_empty_array_with_capacity(v___x_3631_);
lean_inc_ref(v_k_3623_);
v___x_3633_ = lean_array_push(v___x_3632_, v_k_3623_);
v___x_3634_ = lean_array_push(v___x_3633_, v___x_3630_);
v___x_3635_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3634_);
v___x_3636_ = lasm_js_call(v___x_3626_, v___x_3627_, v___x_3628_, v_a_3625_, v___x_3635_);
lean_dec_ref_known(v___x_3635_, 1);
lean_dec(v_a_3625_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3638_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___closed__0));
v___x_3639_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3623_);
v___x_3640_ = lean_string_append(v___x_3638_, v___x_3639_);
lean_dec_ref(v___x_3639_);
v___x_3641_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_3640_, v_a_3637_);
lean_dec(v_a_3637_);
lean_dec_ref(v___x_3640_);
return v___x_3641_;
}
else
{
lean_object* v_a_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3649_; 
lean_dec_ref_known(v_k_3623_, 1);
v_a_3642_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3644_ = v___x_3636_;
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_a_3642_);
lean_dec(v___x_3636_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3647_; 
if (v_isShared_3645_ == 0)
{
v___x_3647_ = v___x_3644_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3642_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
else
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3657_; 
lean_dec_ref_known(v_k_3623_, 1);
lean_dec(v_o_3620_);
v_a_3650_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3657_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3652_ = v___x_3624_;
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3624_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
return v___x_3655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0___boxed(lean_object* v_o_3658_, lean_object* v_key_3659_, lean_object* v_a_3660_){
_start:
{
lean_object* v_res_3661_; 
v_res_3661_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(v_o_3658_, v_key_3659_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack(lean_object* v_self_3663_){
_start:
{
lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3665_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_stack___closed__0));
v___x_3666_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebAssembly_Exception_stack_spec__0(v_self_3663_, v___x_3665_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_stack___boxed(lean_object* v_self_3667_, lean_object* v_a_3668_){
_start:
{
lean_object* v_res_3669_; 
v_res_3669_ = l_Lasm_JS_Web_WebAssembly_Exception_stack(v_self_3667_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg(lean_object* v_self_3671_, lean_object* v_exceptionTag_3672_, lean_object* v_index_3673_){
_start:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___y_3679_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; uint8_t v___x_3689_; 
v___x_3675_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_getArg___closed__0));
v___x_3676_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3677_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3677_, 0, v_exceptionTag_3672_);
lean_ctor_set(v___x_3677_, 1, v___x_3676_);
v___x_3686_ = lean_nat_to_int(v_index_3673_);
v___x_3687_ = lean_nat_abs(v___x_3686_);
v___x_3688_ = lean_cstr_to_nat("9007199254740991");
v___x_3689_ = lean_nat_dec_le(v___x_3687_, v___x_3688_);
lean_dec(v___x_3687_);
if (v___x_3689_ == 0)
{
lean_object* v___x_3690_; 
v___x_3690_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3686_);
v___y_3679_ = v___x_3690_;
goto v___jp_3678_;
}
else
{
double v___x_3691_; lean_object* v___x_3692_; 
v___x_3691_ = l_Float_ofInt(v___x_3686_);
lean_dec(v___x_3686_);
v___x_3692_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3692_, 0, v___x_3691_);
v___y_3679_ = v___x_3692_;
goto v___jp_3678_;
}
v___jp_3678_:
{
lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3680_ = lean_unsigned_to_nat(2u);
v___x_3681_ = lean_mk_empty_array_with_capacity(v___x_3680_);
v___x_3682_ = lean_array_push(v___x_3681_, v___x_3677_);
v___x_3683_ = lean_array_push(v___x_3682_, v___y_3679_);
v___x_3684_ = l_Lasm_JS_Web_Support_args(v___x_3683_);
v___x_3685_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WebAssembly_Memory_grow_spec__0(v_self_3671_, v___x_3675_, v___x_3684_);
return v___x_3685_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_getArg___boxed(lean_object* v_self_3693_, lean_object* v_exceptionTag_3694_, lean_object* v_index_3695_, lean_object* v_a_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lasm_JS_Web_WebAssembly_Exception_getArg(v_self_3693_, v_exceptionTag_3694_, v_index_3695_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is(lean_object* v_self_3699_, lean_object* v_exceptionTag_3700_){
_start:
{
lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3702_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_Exception_is___closed__0));
v___x_3703_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_3704_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3704_, 0, v_exceptionTag_3700_);
lean_ctor_set(v___x_3704_, 1, v___x_3703_);
v___x_3705_ = lean_unsigned_to_nat(1u);
v___x_3706_ = lean_mk_empty_array_with_capacity(v___x_3705_);
v___x_3707_ = lean_array_push(v___x_3706_, v___x_3704_);
v___x_3708_ = l_Lasm_JS_Web_Support_args(v___x_3707_);
v___x_3709_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_3699_, v___x_3702_, v___x_3708_);
return v___x_3709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_Exception_is___boxed(lean_object* v_self_3710_, lean_object* v_exceptionTag_3711_, lean_object* v_a_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lasm_JS_Web_WebAssembly_Exception_is(v_self_3710_, v_exceptionTag_3711_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f(lean_object* v_v_3723_){
_start:
{
lean_object* v___f_3725_; lean_object* v___x_3726_; 
v___f_3725_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___closed__3));
lean_inc(v_v_3723_);
v___x_3726_ = l_Lasm_JS_Web_Support_isInstance(v___f_3725_, v_v_3723_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3740_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3740_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3740_ == 0)
{
v___x_3729_ = v___x_3726_;
v_isShared_3730_ = v_isSharedCheck_3740_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3726_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3740_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
uint8_t v___x_3731_; 
v___x_3731_ = lean_unbox(v_a_3727_);
lean_dec(v_a_3727_);
if (v___x_3731_ == 0)
{
lean_object* v___x_3732_; lean_object* v___x_3734_; 
lean_dec(v_v_3723_);
v___x_3732_ = lean_box(0);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v___x_3732_);
v___x_3734_ = v___x_3729_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v___x_3732_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
else
{
lean_object* v___x_3736_; lean_object* v___x_3738_; 
v___x_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3736_, 0, v_v_3723_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v___x_3736_);
v___x_3738_ = v___x_3729_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v___x_3736_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
return v___x_3738_;
}
}
}
}
else
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3748_; 
lean_dec(v_v_3723_);
v_a_3741_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3743_ = v___x_3726_;
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_a_3741_);
lean_dec(v___x_3726_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3746_; 
if (v_isShared_3744_ == 0)
{
v___x_3746_ = v___x_3743_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v_a_3741_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
return v___x_3746_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f___boxed(lean_object* v_v_3749_, lean_object* v_a_3750_){
_start:
{
lean_object* v_res_3751_; 
v_res_3751_ = l_Lasm_JS_Web_WebAssembly_CompileError_cast_x3f(v_v_3749_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(lean_object* v_context_3752_, lean_object* v_d_3753_){
_start:
{
lean_object* v___y_3756_; lean_object* v___y_3757_; 
if (lean_obj_tag(v_d_3753_) == 9)
{
lean_object* v_value_3761_; lean_object* v___x_3762_; 
v_value_3761_ = lean_ctor_get(v_d_3753_, 0);
lean_inc(v_value_3761_);
lean_dec_ref_known(v_d_3753_, 2);
v___x_3762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3762_, 0, v_value_3761_);
return v___x_3762_;
}
else
{
lean_object* v___x_3763_; lean_object* v_received_3765_; 
v___x_3763_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3753_) == 9)
{
lean_object* v_value_3779_; lean_object* v_description_3780_; uint8_t v___x_3781_; 
v_value_3779_ = lean_ctor_get(v_d_3753_, 0);
v_description_3780_ = lean_ctor_get(v_d_3753_, 1);
v___x_3781_ = lean_string_dec_eq(v_description_3780_, v___x_3763_);
if (v___x_3781_ == 0)
{
goto v___jp_3777_;
}
else
{
uint32_t v___x_3782_; uint64_t v___x_3783_; lean_object* v___x_3784_; uint32_t v___x_3785_; lean_object* v___x_3786_; 
lean_inc_n(v_value_3779_, 2);
lean_dec_ref_known(v_d_3753_, 2);
v___x_3782_ = 206;
v___x_3783_ = 0ULL;
v___x_3784_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3784_, 0, v_value_3779_);
lean_ctor_set(v___x_3784_, 1, v___x_3763_);
v___x_3785_ = lasm_js_value_handle(v_value_3779_);
lean_dec(v_value_3779_);
v___x_3786_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3782_, v___x_3783_, v___x_3784_, v___x_3785_);
lean_dec_ref_known(v___x_3784_, 2);
if (lean_obj_tag(v___x_3786_) == 0)
{
lean_object* v_a_3787_; uint8_t v___x_3788_; 
v_a_3787_ = lean_ctor_get(v___x_3786_, 0);
lean_inc(v_a_3787_);
lean_dec_ref_known(v___x_3786_, 1);
v___x_3788_ = lean_string_validate_utf8(v_a_3787_);
if (v___x_3788_ == 0)
{
lean_object* v___x_3789_; lean_object* v___x_3790_; 
lean_dec(v_a_3787_);
v___x_3789_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3790_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3789_);
v_received_3765_ = v___x_3790_;
goto v___jp_3764_;
}
else
{
lean_object* v___x_3791_; 
v___x_3791_ = lean_string_from_utf8_unchecked(v_a_3787_);
v_received_3765_ = v___x_3791_;
goto v___jp_3764_;
}
}
else
{
lean_object* v___x_3792_; 
lean_dec_ref_known(v___x_3786_, 1);
v___x_3792_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3765_ = v___x_3792_;
goto v___jp_3764_;
}
}
}
else
{
goto v___jp_3777_;
}
v___jp_3764_:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; uint8_t v___x_3775_; 
v___x_3766_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3767_ = lean_string_append(v___x_3766_, v_context_3752_);
v___x_3768_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3769_ = lean_string_append(v___x_3767_, v___x_3768_);
v___x_3770_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompileError___closed__0));
v___x_3771_ = lean_string_append(v___x_3769_, v___x_3770_);
v___x_3772_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3773_ = lean_string_append(v___x_3771_, v___x_3772_);
v___x_3774_ = lean_string_append(v___x_3773_, v_received_3765_);
lean_dec_ref(v_received_3765_);
v___x_3775_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3775_ == 0)
{
lean_object* v___x_3776_; 
v___x_3776_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3756_ = v___x_3774_;
v___y_3757_ = v___x_3776_;
goto v___jp_3755_;
}
else
{
v___y_3756_ = v___x_3774_;
v___y_3757_ = v___x_3763_;
goto v___jp_3755_;
}
}
v___jp_3777_:
{
lean_object* v___x_3778_; 
v___x_3778_ = l_Lasm_JS_Data_describe(v_d_3753_);
v_received_3765_ = v___x_3778_;
goto v___jp_3764_;
}
}
v___jp_3755_:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3758_ = lean_string_append(v___y_3756_, v___y_3757_);
v___x_3759_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3758_);
v___x_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
return v___x_3760_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0___boxed(lean_object* v_context_3793_, lean_object* v_d_3794_, lean_object* v_a_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(v_context_3793_, v_d_3794_);
lean_dec_ref(v_context_3793_);
return v_res_3796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(lean_object* v_b_3797_, lean_object* v_args_3798_, uint8_t v_await_3799_){
_start:
{
uint64_t v___y_3802_; uint64_t v___y_3803_; uint64_t v___x_3846_; uint64_t v___y_3848_; 
v___x_3846_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3799_ == 0)
{
uint64_t v___x_3853_; 
v___x_3853_ = 0ULL;
v___y_3848_ = v___x_3853_;
goto v___jp_3847_;
}
else
{
uint64_t v___x_3854_; 
v___x_3854_ = 2ULL;
v___y_3848_ = v___x_3854_;
goto v___jp_3847_;
}
v___jp_3801_:
{
uint64_t v_flags_3804_; uint32_t v___x_3805_; lean_object* v___x_3806_; uint32_t v___x_3807_; lean_object* v___x_3808_; 
v_flags_3804_ = lean_uint64_lor(v___y_3802_, v___y_3803_);
v___x_3805_ = 214;
v___x_3806_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3797_, v_args_3798_);
v___x_3807_ = 0;
v___x_3808_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3805_, v_flags_3804_, v___x_3806_, v___x_3807_);
lean_dec(v___x_3806_);
if (lean_obj_tag(v___x_3808_) == 0)
{
if (lean_obj_tag(v___x_3808_) == 0)
{
lean_object* v_a_3809_; lean_object* v___x_3810_; 
v_a_3809_ = lean_ctor_get(v___x_3808_, 0);
lean_inc(v_a_3809_);
lean_dec_ref_known(v___x_3808_, 1);
v___x_3810_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3809_);
lean_dec(v_a_3809_);
if (lean_obj_tag(v___x_3810_) == 0)
{
lean_object* v_a_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; 
v_a_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_a_3811_);
lean_dec_ref_known(v___x_3810_, 1);
v___x_3812_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3797_);
v___x_3813_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0_spec__0(v___x_3812_, v_a_3811_);
lean_dec_ref(v___x_3812_);
return v___x_3813_;
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
v_a_3814_ = lean_ctor_get(v___x_3810_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3810_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3810_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3810_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3819_; 
if (v_isShared_3817_ == 0)
{
v___x_3819_ = v___x_3816_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3814_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
v_a_3822_ = lean_ctor_get(v___x_3808_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3808_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___x_3808_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3808_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
lean_ctor_set_tag(v___x_3824_, 1);
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
else
{
lean_object* v_a_3830_; lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3845_; 
v_a_3830_ = lean_ctor_get(v___x_3808_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3808_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3832_ = v___x_3808_;
v_isShared_3833_ = v_isSharedCheck_3845_;
goto v_resetjp_3831_;
}
else
{
lean_inc(v_a_3830_);
lean_dec(v___x_3808_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3845_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3843_; 
v___x_3834_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3835_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3797_);
v___x_3836_ = lean_string_append(v___x_3834_, v___x_3835_);
lean_dec_ref(v___x_3835_);
v___x_3837_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_3838_ = lean_string_append(v___x_3836_, v___x_3837_);
v___x_3839_ = lean_io_error_to_string(v_a_3830_);
v___x_3840_ = lean_string_append(v___x_3838_, v___x_3839_);
lean_dec_ref(v___x_3839_);
v___x_3841_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3840_);
if (v_isShared_3833_ == 0)
{
lean_ctor_set(v___x_3832_, 0, v___x_3841_);
v___x_3843_ = v___x_3832_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v___x_3841_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
v___jp_3847_:
{
uint8_t v_construct_3849_; uint64_t v___x_3850_; 
v_construct_3849_ = lean_ctor_get_uint8(v_b_3797_, sizeof(void*)*4);
v___x_3850_ = lean_uint64_lor(v___x_3846_, v___y_3848_);
if (v_construct_3849_ == 0)
{
uint64_t v___x_3851_; 
v___x_3851_ = 0ULL;
v___y_3802_ = v___x_3850_;
v___y_3803_ = v___x_3851_;
goto v___jp_3801_;
}
else
{
uint64_t v___x_3852_; 
v___x_3852_ = 4ULL;
v___y_3802_ = v___x_3850_;
v___y_3803_ = v___x_3852_;
goto v___jp_3801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0___boxed(lean_object* v_b_3855_, lean_object* v_args_3856_, lean_object* v_await_3857_, lean_object* v_a_3858_){
_start:
{
uint8_t v_await_boxed_3859_; lean_object* v_res_3860_; 
v_await_boxed_3859_ = lean_unbox(v_await_3857_);
v_res_3860_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(v_b_3855_, v_args_3856_, v_await_boxed_3859_);
lean_dec_ref(v_b_3855_);
return v_res_3860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new(lean_object* v_message_3869_){
_start:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; uint8_t v___x_3877_; lean_object* v___x_3878_; 
v___x_3871_ = lean_unsigned_to_nat(1u);
v___x_3872_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_new___closed__2));
v___x_3873_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_3869_);
v___x_3874_ = lean_mk_empty_array_with_capacity(v___x_3871_);
v___x_3875_ = lean_array_push(v___x_3874_, v___x_3873_);
v___x_3876_ = l_Lasm_JS_Web_Support_args(v___x_3875_);
v___x_3877_ = 0;
v___x_3878_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_CompileError_new_spec__0(v___x_3872_, v___x_3876_, v___x_3877_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_new___boxed(lean_object* v_message_3879_, lean_object* v_a_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Lasm_JS_Web_WebAssembly_CompileError_new(v_message_3879_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_name(lean_object* v_self_3882_){
_start:
{
lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3884_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_3885_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3882_, v___x_3884_);
return v___x_3885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_name___boxed(lean_object* v_self_3886_, lean_object* v_a_3887_){
_start:
{
lean_object* v_res_3888_; 
v_res_3888_ = l_Lasm_JS_Web_WebAssembly_CompileError_name(v_self_3886_);
return v_res_3888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message(lean_object* v_self_3890_){
_start:
{
lean_object* v___x_3892_; lean_object* v___x_3893_; 
v___x_3892_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_3893_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3890_, v___x_3892_);
return v___x_3893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_CompileError_message___boxed(lean_object* v_self_3894_, lean_object* v_a_3895_){
_start:
{
lean_object* v_res_3896_; 
v_res_3896_ = l_Lasm_JS_Web_WebAssembly_CompileError_message(v_self_3894_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f(lean_object* v_v_3906_){
_start:
{
lean_object* v___f_3908_; lean_object* v___x_3909_; 
v___f_3908_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___closed__3));
lean_inc(v_v_3906_);
v___x_3909_ = l_Lasm_JS_Web_Support_isInstance(v___f_3908_, v_v_3906_);
if (lean_obj_tag(v___x_3909_) == 0)
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3923_; 
v_a_3910_ = lean_ctor_get(v___x_3909_, 0);
v_isSharedCheck_3923_ = !lean_is_exclusive(v___x_3909_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3912_ = v___x_3909_;
v_isShared_3913_ = v_isSharedCheck_3923_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3909_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3923_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
uint8_t v___x_3914_; 
v___x_3914_ = lean_unbox(v_a_3910_);
lean_dec(v_a_3910_);
if (v___x_3914_ == 0)
{
lean_object* v___x_3915_; lean_object* v___x_3917_; 
lean_dec(v_v_3906_);
v___x_3915_ = lean_box(0);
if (v_isShared_3913_ == 0)
{
lean_ctor_set(v___x_3912_, 0, v___x_3915_);
v___x_3917_ = v___x_3912_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v___x_3915_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
else
{
lean_object* v___x_3919_; lean_object* v___x_3921_; 
v___x_3919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3919_, 0, v_v_3906_);
if (v_isShared_3913_ == 0)
{
lean_ctor_set(v___x_3912_, 0, v___x_3919_);
v___x_3921_ = v___x_3912_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v___x_3919_);
v___x_3921_ = v_reuseFailAlloc_3922_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
return v___x_3921_;
}
}
}
}
else
{
lean_object* v_a_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3931_; 
lean_dec(v_v_3906_);
v_a_3924_ = lean_ctor_get(v___x_3909_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3909_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3926_ = v___x_3909_;
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_a_3924_);
lean_dec(v___x_3909_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
lean_object* v___x_3929_; 
if (v_isShared_3927_ == 0)
{
v___x_3929_ = v___x_3926_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_a_3924_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f___boxed(lean_object* v_v_3932_, lean_object* v_a_3933_){
_start:
{
lean_object* v_res_3934_; 
v_res_3934_ = l_Lasm_JS_Web_WebAssembly_LinkError_cast_x3f(v_v_3932_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(lean_object* v_context_3935_, lean_object* v_d_3936_){
_start:
{
lean_object* v___y_3939_; lean_object* v___y_3940_; 
if (lean_obj_tag(v_d_3936_) == 9)
{
lean_object* v_value_3944_; lean_object* v___x_3945_; 
v_value_3944_ = lean_ctor_get(v_d_3936_, 0);
lean_inc(v_value_3944_);
lean_dec_ref_known(v_d_3936_, 2);
v___x_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3945_, 0, v_value_3944_);
return v___x_3945_;
}
else
{
lean_object* v___x_3946_; lean_object* v_received_3948_; 
v___x_3946_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_3936_) == 9)
{
lean_object* v_value_3962_; lean_object* v_description_3963_; uint8_t v___x_3964_; 
v_value_3962_ = lean_ctor_get(v_d_3936_, 0);
v_description_3963_ = lean_ctor_get(v_d_3936_, 1);
v___x_3964_ = lean_string_dec_eq(v_description_3963_, v___x_3946_);
if (v___x_3964_ == 0)
{
goto v___jp_3960_;
}
else
{
uint32_t v___x_3965_; uint64_t v___x_3966_; lean_object* v___x_3967_; uint32_t v___x_3968_; lean_object* v___x_3969_; 
lean_inc_n(v_value_3962_, 2);
lean_dec_ref_known(v_d_3936_, 2);
v___x_3965_ = 206;
v___x_3966_ = 0ULL;
v___x_3967_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3967_, 0, v_value_3962_);
lean_ctor_set(v___x_3967_, 1, v___x_3946_);
v___x_3968_ = lasm_js_value_handle(v_value_3962_);
lean_dec(v_value_3962_);
v___x_3969_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3965_, v___x_3966_, v___x_3967_, v___x_3968_);
lean_dec_ref_known(v___x_3967_, 2);
if (lean_obj_tag(v___x_3969_) == 0)
{
lean_object* v_a_3970_; uint8_t v___x_3971_; 
v_a_3970_ = lean_ctor_get(v___x_3969_, 0);
lean_inc(v_a_3970_);
lean_dec_ref_known(v___x_3969_, 1);
v___x_3971_ = lean_string_validate_utf8(v_a_3970_);
if (v___x_3971_ == 0)
{
lean_object* v___x_3972_; lean_object* v___x_3973_; 
lean_dec(v_a_3970_);
v___x_3972_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_3973_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3972_);
v_received_3948_ = v___x_3973_;
goto v___jp_3947_;
}
else
{
lean_object* v___x_3974_; 
v___x_3974_ = lean_string_from_utf8_unchecked(v_a_3970_);
v_received_3948_ = v___x_3974_;
goto v___jp_3947_;
}
}
else
{
lean_object* v___x_3975_; 
lean_dec_ref_known(v___x_3969_, 1);
v___x_3975_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_3948_ = v___x_3975_;
goto v___jp_3947_;
}
}
}
else
{
goto v___jp_3960_;
}
v___jp_3947_:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; uint8_t v___x_3958_; 
v___x_3949_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_3950_ = lean_string_append(v___x_3949_, v_context_3935_);
v___x_3951_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_3952_ = lean_string_append(v___x_3950_, v___x_3951_);
v___x_3953_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSLinkError___closed__0));
v___x_3954_ = lean_string_append(v___x_3952_, v___x_3953_);
v___x_3955_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_3956_ = lean_string_append(v___x_3954_, v___x_3955_);
v___x_3957_ = lean_string_append(v___x_3956_, v_received_3948_);
lean_dec_ref(v_received_3948_);
v___x_3958_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_3958_ == 0)
{
lean_object* v___x_3959_; 
v___x_3959_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_3939_ = v___x_3957_;
v___y_3940_ = v___x_3959_;
goto v___jp_3938_;
}
else
{
v___y_3939_ = v___x_3957_;
v___y_3940_ = v___x_3946_;
goto v___jp_3938_;
}
}
v___jp_3960_:
{
lean_object* v___x_3961_; 
v___x_3961_ = l_Lasm_JS_Data_describe(v_d_3936_);
v_received_3948_ = v___x_3961_;
goto v___jp_3947_;
}
}
v___jp_3938_:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; 
v___x_3941_ = lean_string_append(v___y_3939_, v___y_3940_);
v___x_3942_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3942_, 0, v___x_3941_);
v___x_3943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3943_, 0, v___x_3942_);
return v___x_3943_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0___boxed(lean_object* v_context_3976_, lean_object* v_d_3977_, lean_object* v_a_3978_){
_start:
{
lean_object* v_res_3979_; 
v_res_3979_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(v_context_3976_, v_d_3977_);
lean_dec_ref(v_context_3976_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(lean_object* v_b_3980_, lean_object* v_args_3981_, uint8_t v_await_3982_){
_start:
{
uint64_t v___y_3985_; uint64_t v___y_3986_; uint64_t v___x_4029_; uint64_t v___y_4031_; 
v___x_4029_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_3982_ == 0)
{
uint64_t v___x_4036_; 
v___x_4036_ = 0ULL;
v___y_4031_ = v___x_4036_;
goto v___jp_4030_;
}
else
{
uint64_t v___x_4037_; 
v___x_4037_ = 2ULL;
v___y_4031_ = v___x_4037_;
goto v___jp_4030_;
}
v___jp_3984_:
{
uint64_t v_flags_3987_; uint32_t v___x_3988_; lean_object* v___x_3989_; uint32_t v___x_3990_; lean_object* v___x_3991_; 
v_flags_3987_ = lean_uint64_lor(v___y_3985_, v___y_3986_);
v___x_3988_ = 214;
v___x_3989_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3980_, v_args_3981_);
v___x_3990_ = 0;
v___x_3991_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3988_, v_flags_3987_, v___x_3989_, v___x_3990_);
lean_dec(v___x_3989_);
if (lean_obj_tag(v___x_3991_) == 0)
{
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3993_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
lean_inc(v_a_3992_);
lean_dec_ref_known(v___x_3991_, 1);
v___x_3993_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3992_);
lean_dec(v_a_3992_);
if (lean_obj_tag(v___x_3993_) == 0)
{
lean_object* v_a_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; 
v_a_3994_ = lean_ctor_get(v___x_3993_, 0);
lean_inc(v_a_3994_);
lean_dec_ref_known(v___x_3993_, 1);
v___x_3995_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3980_);
v___x_3996_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0_spec__0(v___x_3995_, v_a_3994_);
lean_dec_ref(v___x_3995_);
return v___x_3996_;
}
else
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4004_; 
v_a_3997_ = lean_ctor_get(v___x_3993_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v___x_3993_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3999_ = v___x_3993_;
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v___x_3993_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4002_; 
if (v_isShared_4000_ == 0)
{
v___x_4002_ = v___x_3999_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v_a_3997_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
return v___x_4002_;
}
}
}
}
else
{
lean_object* v_a_4005_; lean_object* v___x_4007_; uint8_t v_isShared_4008_; uint8_t v_isSharedCheck_4012_; 
v_a_4005_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4012_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4012_ == 0)
{
v___x_4007_ = v___x_3991_;
v_isShared_4008_ = v_isSharedCheck_4012_;
goto v_resetjp_4006_;
}
else
{
lean_inc(v_a_4005_);
lean_dec(v___x_3991_);
v___x_4007_ = lean_box(0);
v_isShared_4008_ = v_isSharedCheck_4012_;
goto v_resetjp_4006_;
}
v_resetjp_4006_:
{
lean_object* v___x_4010_; 
if (v_isShared_4008_ == 0)
{
lean_ctor_set_tag(v___x_4007_, 1);
v___x_4010_ = v___x_4007_;
goto v_reusejp_4009_;
}
else
{
lean_object* v_reuseFailAlloc_4011_; 
v_reuseFailAlloc_4011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4011_, 0, v_a_4005_);
v___x_4010_ = v_reuseFailAlloc_4011_;
goto v_reusejp_4009_;
}
v_reusejp_4009_:
{
return v___x_4010_;
}
}
}
}
else
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4028_; 
v_a_4013_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4028_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4015_ = v___x_3991_;
v_isShared_4016_ = v_isSharedCheck_4028_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_3991_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4028_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4026_; 
v___x_4017_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4018_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3980_);
v___x_4019_ = lean_string_append(v___x_4017_, v___x_4018_);
lean_dec_ref(v___x_4018_);
v___x_4020_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_4021_ = lean_string_append(v___x_4019_, v___x_4020_);
v___x_4022_ = lean_io_error_to_string(v_a_4013_);
v___x_4023_ = lean_string_append(v___x_4021_, v___x_4022_);
lean_dec_ref(v___x_4022_);
v___x_4024_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4023_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4024_);
v___x_4026_ = v___x_4015_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v___x_4024_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
}
}
}
}
v___jp_4030_:
{
uint8_t v_construct_4032_; uint64_t v___x_4033_; 
v_construct_4032_ = lean_ctor_get_uint8(v_b_3980_, sizeof(void*)*4);
v___x_4033_ = lean_uint64_lor(v___x_4029_, v___y_4031_);
if (v_construct_4032_ == 0)
{
uint64_t v___x_4034_; 
v___x_4034_ = 0ULL;
v___y_3985_ = v___x_4033_;
v___y_3986_ = v___x_4034_;
goto v___jp_3984_;
}
else
{
uint64_t v___x_4035_; 
v___x_4035_ = 4ULL;
v___y_3985_ = v___x_4033_;
v___y_3986_ = v___x_4035_;
goto v___jp_3984_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0___boxed(lean_object* v_b_4038_, lean_object* v_args_4039_, lean_object* v_await_4040_, lean_object* v_a_4041_){
_start:
{
uint8_t v_await_boxed_4042_; lean_object* v_res_4043_; 
v_await_boxed_4042_ = lean_unbox(v_await_4040_);
v_res_4043_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(v_b_4038_, v_args_4039_, v_await_boxed_4042_);
lean_dec_ref(v_b_4038_);
return v_res_4043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new(lean_object* v_message_4052_){
_start:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; uint8_t v___x_4060_; lean_object* v___x_4061_; 
v___x_4054_ = lean_unsigned_to_nat(1u);
v___x_4055_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_LinkError_new___closed__2));
v___x_4056_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_4052_);
v___x_4057_ = lean_mk_empty_array_with_capacity(v___x_4054_);
v___x_4058_ = lean_array_push(v___x_4057_, v___x_4056_);
v___x_4059_ = l_Lasm_JS_Web_Support_args(v___x_4058_);
v___x_4060_ = 0;
v___x_4061_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_LinkError_new_spec__0(v___x_4055_, v___x_4059_, v___x_4060_);
return v___x_4061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_new___boxed(lean_object* v_message_4062_, lean_object* v_a_4063_){
_start:
{
lean_object* v_res_4064_; 
v_res_4064_ = l_Lasm_JS_Web_WebAssembly_LinkError_new(v_message_4062_);
return v_res_4064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_name(lean_object* v_self_4065_){
_start:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; 
v___x_4067_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_4068_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4065_, v___x_4067_);
return v___x_4068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_name___boxed(lean_object* v_self_4069_, lean_object* v_a_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_Lasm_JS_Web_WebAssembly_LinkError_name(v_self_4069_);
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_message(lean_object* v_self_4072_){
_start:
{
lean_object* v___x_4074_; lean_object* v___x_4075_; 
v___x_4074_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_4075_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4072_, v___x_4074_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_LinkError_message___boxed(lean_object* v_self_4076_, lean_object* v_a_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_Lasm_JS_Web_WebAssembly_LinkError_message(v_self_4076_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f(lean_object* v_v_4088_){
_start:
{
lean_object* v___f_4090_; lean_object* v___x_4091_; 
v___f_4090_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___closed__3));
lean_inc(v_v_4088_);
v___x_4091_ = l_Lasm_JS_Web_Support_isInstance(v___f_4090_, v_v_4088_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4105_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_4094_ = v___x_4091_;
v_isShared_4095_ = v_isSharedCheck_4105_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4091_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4105_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
uint8_t v___x_4096_; 
v___x_4096_ = lean_unbox(v_a_4092_);
lean_dec(v_a_4092_);
if (v___x_4096_ == 0)
{
lean_object* v___x_4097_; lean_object* v___x_4099_; 
lean_dec(v_v_4088_);
v___x_4097_ = lean_box(0);
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 0, v___x_4097_);
v___x_4099_ = v___x_4094_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v___x_4097_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
else
{
lean_object* v___x_4101_; lean_object* v___x_4103_; 
v___x_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4101_, 0, v_v_4088_);
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 0, v___x_4101_);
v___x_4103_ = v___x_4094_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v___x_4101_);
v___x_4103_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
return v___x_4103_;
}
}
}
}
else
{
lean_object* v_a_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4113_; 
lean_dec(v_v_4088_);
v_a_4106_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4108_ = v___x_4091_;
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_a_4106_);
lean_dec(v___x_4091_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4111_; 
if (v_isShared_4109_ == 0)
{
v___x_4111_ = v___x_4108_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v_a_4106_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f___boxed(lean_object* v_v_4114_, lean_object* v_a_4115_){
_start:
{
lean_object* v_res_4116_; 
v_res_4116_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_cast_x3f(v_v_4114_);
return v_res_4116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(lean_object* v_context_4117_, lean_object* v_d_4118_){
_start:
{
lean_object* v___y_4121_; lean_object* v___y_4122_; 
if (lean_obj_tag(v_d_4118_) == 9)
{
lean_object* v_value_4126_; lean_object* v___x_4127_; 
v_value_4126_ = lean_ctor_get(v_d_4118_, 0);
lean_inc(v_value_4126_);
lean_dec_ref_known(v_d_4118_, 2);
v___x_4127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4127_, 0, v_value_4126_);
return v___x_4127_;
}
else
{
lean_object* v___x_4128_; lean_object* v_received_4130_; 
v___x_4128_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
if (lean_obj_tag(v_d_4118_) == 9)
{
lean_object* v_value_4144_; lean_object* v_description_4145_; uint8_t v___x_4146_; 
v_value_4144_ = lean_ctor_get(v_d_4118_, 0);
v_description_4145_ = lean_ctor_get(v_d_4118_, 1);
v___x_4146_ = lean_string_dec_eq(v_description_4145_, v___x_4128_);
if (v___x_4146_ == 0)
{
goto v___jp_4142_;
}
else
{
uint32_t v___x_4147_; uint64_t v___x_4148_; lean_object* v___x_4149_; uint32_t v___x_4150_; lean_object* v___x_4151_; 
lean_inc_n(v_value_4144_, 2);
lean_dec_ref_known(v_d_4118_, 2);
v___x_4147_ = 206;
v___x_4148_ = 0ULL;
v___x_4149_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4149_, 0, v_value_4144_);
lean_ctor_set(v___x_4149_, 1, v___x_4128_);
v___x_4150_ = lasm_js_value_handle(v_value_4144_);
lean_dec(v_value_4144_);
v___x_4151_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4147_, v___x_4148_, v___x_4149_, v___x_4150_);
lean_dec_ref_known(v___x_4149_, 2);
if (lean_obj_tag(v___x_4151_) == 0)
{
lean_object* v_a_4152_; uint8_t v___x_4153_; 
v_a_4152_ = lean_ctor_get(v___x_4151_, 0);
lean_inc(v_a_4152_);
lean_dec_ref_known(v___x_4151_, 1);
v___x_4153_ = lean_string_validate_utf8(v_a_4152_);
if (v___x_4153_ == 0)
{
lean_object* v___x_4154_; lean_object* v___x_4155_; 
lean_dec(v_a_4152_);
v___x_4154_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_4155_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4154_);
v_received_4130_ = v___x_4155_;
goto v___jp_4129_;
}
else
{
lean_object* v___x_4156_; 
v___x_4156_ = lean_string_from_utf8_unchecked(v_a_4152_);
v_received_4130_ = v___x_4156_;
goto v___jp_4129_;
}
}
else
{
lean_object* v___x_4157_; 
lean_dec_ref_known(v___x_4151_, 1);
v___x_4157_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v_received_4130_ = v___x_4157_;
goto v___jp_4129_;
}
}
}
else
{
goto v___jp_4142_;
}
v___jp_4129_:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; uint8_t v___x_4140_; 
v___x_4131_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4132_ = lean_string_append(v___x_4131_, v_context_4117_);
v___x_4133_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_4134_ = lean_string_append(v___x_4132_, v___x_4133_);
v___x_4135_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRuntimeError___closed__0));
v___x_4136_ = lean_string_append(v___x_4134_, v___x_4135_);
v___x_4137_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_4138_ = lean_string_append(v___x_4136_, v___x_4137_);
v___x_4139_ = lean_string_append(v___x_4138_, v_received_4130_);
lean_dec_ref(v_received_4130_);
v___x_4140_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_4140_ == 0)
{
lean_object* v___x_4141_; 
v___x_4141_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___y_4121_ = v___x_4139_;
v___y_4122_ = v___x_4141_;
goto v___jp_4120_;
}
else
{
v___y_4121_ = v___x_4139_;
v___y_4122_ = v___x_4128_;
goto v___jp_4120_;
}
}
v___jp_4142_:
{
lean_object* v___x_4143_; 
v___x_4143_ = l_Lasm_JS_Data_describe(v_d_4118_);
v_received_4130_ = v___x_4143_;
goto v___jp_4129_;
}
}
v___jp_4120_:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4123_ = lean_string_append(v___y_4121_, v___y_4122_);
v___x_4124_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4124_, 0, v___x_4123_);
v___x_4125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4124_);
return v___x_4125_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0___boxed(lean_object* v_context_4158_, lean_object* v_d_4159_, lean_object* v_a_4160_){
_start:
{
lean_object* v_res_4161_; 
v_res_4161_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(v_context_4158_, v_d_4159_);
lean_dec_ref(v_context_4158_);
return v_res_4161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(lean_object* v_b_4162_, lean_object* v_args_4163_, uint8_t v_await_4164_){
_start:
{
uint64_t v___y_4167_; uint64_t v___y_4168_; uint64_t v___x_4211_; uint64_t v___y_4213_; 
v___x_4211_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_await_4164_ == 0)
{
uint64_t v___x_4218_; 
v___x_4218_ = 0ULL;
v___y_4213_ = v___x_4218_;
goto v___jp_4212_;
}
else
{
uint64_t v___x_4219_; 
v___x_4219_ = 2ULL;
v___y_4213_ = v___x_4219_;
goto v___jp_4212_;
}
v___jp_4166_:
{
uint64_t v_flags_4169_; uint32_t v___x_4170_; lean_object* v___x_4171_; uint32_t v___x_4172_; lean_object* v___x_4173_; 
v_flags_4169_ = lean_uint64_lor(v___y_4167_, v___y_4168_);
v___x_4170_ = 214;
v___x_4171_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4162_, v_args_4163_);
v___x_4172_ = 0;
v___x_4173_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4170_, v_flags_4169_, v___x_4171_, v___x_4172_);
lean_dec(v___x_4171_);
if (lean_obj_tag(v___x_4173_) == 0)
{
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_object* v_a_4174_; lean_object* v___x_4175_; 
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
lean_inc(v_a_4174_);
lean_dec_ref_known(v___x_4173_, 1);
v___x_4175_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4174_);
lean_dec(v_a_4174_);
if (lean_obj_tag(v___x_4175_) == 0)
{
lean_object* v_a_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; 
v_a_4176_ = lean_ctor_get(v___x_4175_, 0);
lean_inc(v_a_4176_);
lean_dec_ref_known(v___x_4175_, 1);
v___x_4177_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4162_);
v___x_4178_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0_spec__0(v___x_4177_, v_a_4176_);
lean_dec_ref(v___x_4177_);
return v___x_4178_;
}
else
{
lean_object* v_a_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4186_; 
v_a_4179_ = lean_ctor_get(v___x_4175_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v___x_4175_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4181_ = v___x_4175_;
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_a_4179_);
lean_dec(v___x_4175_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4184_; 
if (v_isShared_4182_ == 0)
{
v___x_4184_ = v___x_4181_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v_a_4179_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
return v___x_4184_;
}
}
}
}
else
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4194_; 
v_a_4187_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4189_ = v___x_4173_;
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___x_4173_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4192_; 
if (v_isShared_4190_ == 0)
{
lean_ctor_set_tag(v___x_4189_, 1);
v___x_4192_ = v___x_4189_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v_a_4187_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
return v___x_4192_;
}
}
}
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4210_; 
v_a_4195_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4210_ == 0)
{
v___x_4197_ = v___x_4173_;
v_isShared_4198_ = v_isSharedCheck_4210_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4173_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4210_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4208_; 
v___x_4199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4200_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4162_);
v___x_4201_ = lean_string_append(v___x_4199_, v___x_4200_);
lean_dec_ref(v___x_4200_);
v___x_4202_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_4203_ = lean_string_append(v___x_4201_, v___x_4202_);
v___x_4204_ = lean_io_error_to_string(v_a_4195_);
v___x_4205_ = lean_string_append(v___x_4203_, v___x_4204_);
lean_dec_ref(v___x_4204_);
v___x_4206_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4206_, 0, v___x_4205_);
if (v_isShared_4198_ == 0)
{
lean_ctor_set(v___x_4197_, 0, v___x_4206_);
v___x_4208_ = v___x_4197_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v___x_4206_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
return v___x_4208_;
}
}
}
}
v___jp_4212_:
{
uint8_t v_construct_4214_; uint64_t v___x_4215_; 
v_construct_4214_ = lean_ctor_get_uint8(v_b_4162_, sizeof(void*)*4);
v___x_4215_ = lean_uint64_lor(v___x_4211_, v___y_4213_);
if (v_construct_4214_ == 0)
{
uint64_t v___x_4216_; 
v___x_4216_ = 0ULL;
v___y_4167_ = v___x_4215_;
v___y_4168_ = v___x_4216_;
goto v___jp_4166_;
}
else
{
uint64_t v___x_4217_; 
v___x_4217_ = 4ULL;
v___y_4167_ = v___x_4215_;
v___y_4168_ = v___x_4217_;
goto v___jp_4166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0___boxed(lean_object* v_b_4220_, lean_object* v_args_4221_, lean_object* v_await_4222_, lean_object* v_a_4223_){
_start:
{
uint8_t v_await_boxed_4224_; lean_object* v_res_4225_; 
v_await_boxed_4224_ = lean_unbox(v_await_4222_);
v_res_4225_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(v_b_4220_, v_args_4221_, v_await_boxed_4224_);
lean_dec_ref(v_b_4220_);
return v_res_4225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new(lean_object* v_message_4234_){
_start:
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; uint8_t v___x_4242_; lean_object* v___x_4243_; 
v___x_4236_ = lean_unsigned_to_nat(1u);
v___x_4237_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_RuntimeError_new___closed__2));
v___x_4238_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_4234_);
v___x_4239_ = lean_mk_empty_array_with_capacity(v___x_4236_);
v___x_4240_ = lean_array_push(v___x_4239_, v___x_4238_);
v___x_4241_ = l_Lasm_JS_Web_Support_args(v___x_4240_);
v___x_4242_ = 0;
v___x_4243_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_RuntimeError_new_spec__0(v___x_4237_, v___x_4241_, v___x_4242_);
return v___x_4243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_new___boxed(lean_object* v_message_4244_, lean_object* v_a_4245_){
_start:
{
lean_object* v_res_4246_; 
v_res_4246_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_new(v_message_4244_);
return v_res_4246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_name(lean_object* v_self_4247_){
_start:
{
lean_object* v___x_4249_; lean_object* v___x_4250_; 
v___x_4249_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleExportDescriptor___lam__0___closed__0));
v___x_4250_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4247_, v___x_4249_);
return v___x_4250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_name___boxed(lean_object* v_self_4251_, lean_object* v_a_4252_){
_start:
{
lean_object* v_res_4253_; 
v_res_4253_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_name(v_self_4251_);
return v_res_4253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_message(lean_object* v_self_4254_){
_start:
{
lean_object* v___x_4256_; lean_object* v___x_4257_; 
v___x_4256_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_CompileError_message___closed__0));
v___x_4257_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4254_, v___x_4256_);
return v___x_4257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_RuntimeError_message___boxed(lean_object* v_self_4258_, lean_object* v_a_4259_){
_start:
{
lean_object* v_res_4260_; 
v_res_4260_ = l_Lasm_JS_Web_WebAssembly_RuntimeError_message(v_self_4258_);
return v_res_4260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_JSTag(){
_start:
{
lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4269_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_JSTag___closed__2));
v___x_4270_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_4269_);
if (lean_obj_tag(v___x_4270_) == 0)
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4278_; 
v_a_4271_ = lean_ctor_get(v___x_4270_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4273_ = v___x_4270_;
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4270_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4276_; 
if (v_isShared_4274_ == 0)
{
v___x_4276_ = v___x_4273_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4271_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
return v___x_4276_;
}
}
}
else
{
lean_object* v_a_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4286_; 
v_a_4279_ = lean_ctor_get(v___x_4270_, 0);
v_isSharedCheck_4286_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4286_ == 0)
{
v___x_4281_ = v___x_4270_;
v_isShared_4282_ = v_isSharedCheck_4286_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_a_4279_);
lean_dec(v___x_4270_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4286_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
lean_object* v___x_4284_; 
if (v_isShared_4282_ == 0)
{
v___x_4284_ = v___x_4281_;
goto v_reusejp_4283_;
}
else
{
lean_object* v_reuseFailAlloc_4285_; 
v_reuseFailAlloc_4285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4285_, 0, v_a_4279_);
v___x_4284_ = v_reuseFailAlloc_4285_;
goto v_reusejp_4283_;
}
v_reusejp_4283_:
{
return v___x_4284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_JSTag___boxed(lean_object* v_a_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_Lasm_JS_Web_WebAssembly_JSTag();
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_validate(lean_object* v_bytes_4297_, lean_object* v_options_4298_){
_start:
{
uint8_t v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; 
v___x_4300_ = 0;
v___x_4301_ = lean_unsigned_to_nat(2u);
v___x_4302_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_validate___closed__2));
v___x_4303_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4303_, 0, v_bytes_4297_);
v___x_4304_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4298_);
v___x_4305_ = lean_mk_empty_array_with_capacity(v___x_4301_);
v___x_4306_ = lean_array_push(v___x_4305_, v___x_4303_);
v___x_4307_ = lean_array_push(v___x_4306_, v___x_4304_);
v___x_4308_ = l_Lasm_JS_Web_Support_args(v___x_4307_);
v___x_4309_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_canParse_spec__0(v___x_4302_, v___x_4308_, v___x_4300_);
return v___x_4309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_validate___boxed(lean_object* v_bytes_4310_, lean_object* v_options_4311_, lean_object* v_a_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l_Lasm_JS_Web_WebAssembly_validate(v_bytes_4310_, v_options_4311_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___lam__0(lean_object* v_x_4314_){
_start:
{
if (lean_obj_tag(v_x_4314_) == 0)
{
lean_object* v_a_4316_; lean_object* v___x_4318_; uint8_t v_isShared_4319_; uint8_t v_isSharedCheck_4324_; 
v_a_4316_ = lean_ctor_get(v_x_4314_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v_x_4314_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4318_ = v_x_4314_;
v_isShared_4319_ = v_isSharedCheck_4324_;
goto v_resetjp_4317_;
}
else
{
lean_inc(v_a_4316_);
lean_dec(v_x_4314_);
v___x_4318_ = lean_box(0);
v_isShared_4319_ = v_isSharedCheck_4324_;
goto v_resetjp_4317_;
}
v_resetjp_4317_:
{
lean_object* v___x_4321_; 
if (v_isShared_4319_ == 0)
{
v___x_4321_ = v___x_4318_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v_a_4316_);
v___x_4321_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
lean_object* v___x_4322_; 
v___x_4322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4322_, 0, v___x_4321_);
return v___x_4322_;
}
}
}
else
{
lean_object* v_a_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4333_; 
v_a_4325_ = lean_ctor_get(v_x_4314_, 0);
v_isSharedCheck_4333_ = !lean_is_exclusive(v_x_4314_);
if (v_isSharedCheck_4333_ == 0)
{
v___x_4327_ = v_x_4314_;
v_isShared_4328_ = v_isSharedCheck_4333_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_a_4325_);
lean_dec(v_x_4314_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4333_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4332_; 
v_reuseFailAlloc_4332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4332_, 0, v_a_4325_);
v___x_4330_ = v_reuseFailAlloc_4332_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
lean_object* v___x_4331_; 
v___x_4331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4331_, 0, v___x_4330_);
return v___x_4331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___lam__0___boxed(lean_object* v_x_4334_, lean_object* v___y_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l_Lasm_JS_Web_WebAssembly_compile___lam__0(v_x_4334_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile(lean_object* v_bytes_4346_, lean_object* v_options_4347_){
_start:
{
lean_object* v___f_4349_; uint8_t v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___f_4349_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_4350_ = 0;
v___x_4351_ = lean_unsigned_to_nat(2u);
v___x_4352_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__3));
v___x_4353_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4353_, 0, v_bytes_4346_);
v___x_4354_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4347_);
v___x_4355_ = lean_mk_empty_array_with_capacity(v___x_4351_);
v___x_4356_ = lean_array_push(v___x_4355_, v___x_4353_);
v___x_4357_ = lean_array_push(v___x_4356_, v___x_4354_);
v___x_4358_ = l_Lasm_JS_Web_Support_args(v___x_4357_);
v___x_4359_ = lean_unsigned_to_nat(0u);
v___x_4360_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_4352_, v___x_4358_);
v___x_4361_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4359_, v___x_4350_, v___x_4360_, v___f_4349_);
return v___x_4361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compile___boxed(lean_object* v_bytes_4362_, lean_object* v_options_4363_, lean_object* v_a_4364_){
_start:
{
lean_object* v_res_4365_; 
v_res_4365_ = l_Lasm_JS_Web_WebAssembly_compile(v_bytes_4362_, v_options_4363_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8(lean_object* v___f_4366_, lean_object* v_x_4367_){
_start:
{
if (lean_obj_tag(v_x_4367_) == 0)
{
lean_object* v_a_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4377_; 
lean_dec_ref(v___f_4366_);
v_a_4369_ = lean_ctor_get(v_x_4367_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v_x_4367_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4371_ = v_x_4367_;
v_isShared_4372_ = v_isSharedCheck_4377_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_a_4369_);
lean_dec(v_x_4367_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4377_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4374_; 
if (v_isShared_4372_ == 0)
{
v___x_4374_ = v___x_4371_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v_a_4369_);
v___x_4374_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
lean_object* v___x_4375_; 
v___x_4375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4375_, 0, v___x_4374_);
return v___x_4375_;
}
}
}
else
{
lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_4389_; 
v_isSharedCheck_4389_ = !lean_is_exclusive(v_x_4367_);
if (v_isSharedCheck_4389_ == 0)
{
lean_object* v_unused_4390_; 
v_unused_4390_ = lean_ctor_get(v_x_4367_, 0);
lean_dec(v_unused_4390_);
v___x_4379_ = v_x_4367_;
v_isShared_4380_ = v_isSharedCheck_4389_;
goto v_resetjp_4378_;
}
else
{
lean_dec(v_x_4367_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_4389_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
lean_object* v___x_4381_; uint8_t v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4385_; 
v___x_4381_ = lean_unsigned_to_nat(0u);
v___x_4382_ = 0;
v___x_4383_ = lean_io_promise_new();
if (v_isShared_4380_ == 0)
{
lean_ctor_set(v___x_4379_, 0, v___x_4383_);
v___x_4385_ = v___x_4379_;
goto v_reusejp_4384_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v___x_4383_);
v___x_4385_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4384_;
}
v_reusejp_4384_:
{
lean_object* v___x_4386_; lean_object* v___x_4387_; 
v___x_4386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4386_, 0, v___x_4385_);
v___x_4387_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4381_, v___x_4382_, v___x_4386_, v___f_4366_);
return v___x_4387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8___boxed(lean_object* v___f_4391_, lean_object* v_x_4392_, lean_object* v___y_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8(v___f_4391_, v_x_4392_);
return v_res_4394_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1(lean_object* v___f_4395_, lean_object* v_bytes_4396_){
_start:
{
lean_object* v___x_4398_; uint8_t v___x_4399_; lean_object* v_val_4401_; lean_object* v___x_4404_; 
v___x_4398_ = lean_unsigned_to_nat(0u);
v___x_4399_ = 0;
v___x_4404_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4396_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_object* v_a_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4412_; 
v_a_4405_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4412_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4412_ == 0)
{
v___x_4407_ = v___x_4404_;
v_isShared_4408_ = v_isSharedCheck_4412_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_a_4405_);
lean_dec(v___x_4404_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4412_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
lean_object* v___x_4410_; 
if (v_isShared_4408_ == 0)
{
lean_ctor_set_tag(v___x_4407_, 1);
v___x_4410_ = v___x_4407_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v_a_4405_);
v___x_4410_ = v_reuseFailAlloc_4411_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
v_val_4401_ = v___x_4410_;
goto v___jp_4400_;
}
}
}
else
{
lean_object* v_a_4413_; lean_object* v___x_4415_; uint8_t v_isShared_4416_; uint8_t v_isSharedCheck_4420_; 
v_a_4413_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4420_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4420_ == 0)
{
v___x_4415_ = v___x_4404_;
v_isShared_4416_ = v_isSharedCheck_4420_;
goto v_resetjp_4414_;
}
else
{
lean_inc(v_a_4413_);
lean_dec(v___x_4404_);
v___x_4415_ = lean_box(0);
v_isShared_4416_ = v_isSharedCheck_4420_;
goto v_resetjp_4414_;
}
v_resetjp_4414_:
{
lean_object* v___x_4418_; 
if (v_isShared_4416_ == 0)
{
lean_ctor_set_tag(v___x_4415_, 0);
v___x_4418_ = v___x_4415_;
goto v_reusejp_4417_;
}
else
{
lean_object* v_reuseFailAlloc_4419_; 
v_reuseFailAlloc_4419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4419_, 0, v_a_4413_);
v___x_4418_ = v_reuseFailAlloc_4419_;
goto v_reusejp_4417_;
}
v_reusejp_4417_:
{
v_val_4401_ = v___x_4418_;
goto v___jp_4400_;
}
}
}
v___jp_4400_:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4402_, 0, v_val_4401_);
v___x_4403_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4398_, v___x_4399_, v___x_4402_, v___f_4395_);
return v___x_4403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1___boxed(lean_object* v___f_4421_, lean_object* v_bytes_4422_, lean_object* v___y_4423_){
_start:
{
lean_object* v_res_4424_; 
v_res_4424_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1(v___f_4421_, v_bytes_4422_);
lean_dec_ref(v_bytes_4422_);
return v_res_4424_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4(lean_object* v_failurePrefix_4425_, lean_object* v_x_4426_){
_start:
{
if (lean_obj_tag(v_x_4426_) == 0)
{
lean_object* v_a_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4439_; 
v_a_4428_ = lean_ctor_get(v_x_4426_, 0);
v_isSharedCheck_4439_ = !lean_is_exclusive(v_x_4426_);
if (v_isSharedCheck_4439_ == 0)
{
v___x_4430_ = v_x_4426_;
v_isShared_4431_ = v_isSharedCheck_4439_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_a_4428_);
lean_dec(v_x_4426_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4439_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4436_; 
v___x_4432_ = lean_io_error_to_string(v_a_4428_);
v___x_4433_ = lean_string_append(v_failurePrefix_4425_, v___x_4432_);
lean_dec_ref(v___x_4432_);
v___x_4434_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4433_);
if (v_isShared_4431_ == 0)
{
lean_ctor_set(v___x_4430_, 0, v___x_4434_);
v___x_4436_ = v___x_4430_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v___x_4434_);
v___x_4436_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
lean_object* v___x_4437_; 
v___x_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4436_);
return v___x_4437_;
}
}
}
else
{
lean_object* v___x_4440_; 
lean_dec_ref(v_failurePrefix_4425_);
v___x_4440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4440_, 0, v_x_4426_);
return v___x_4440_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4___boxed(lean_object* v_failurePrefix_4441_, lean_object* v_x_4442_, lean_object* v___y_4443_){
_start:
{
lean_object* v_res_4444_; 
v_res_4444_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4(v_failurePrefix_4441_, v_x_4442_);
return v_res_4444_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2(lean_object* v___f_4445_, lean_object* v_x_4446_){
_start:
{
if (lean_obj_tag(v_x_4446_) == 0)
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4456_; 
lean_dec_ref(v___f_4445_);
v_a_4448_ = lean_ctor_get(v_x_4446_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v_x_4446_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4450_ = v_x_4446_;
v_isShared_4451_ = v_isSharedCheck_4456_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v_x_4446_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4456_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
lean_object* v___x_4454_; 
v___x_4454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4454_, 0, v___x_4453_);
return v___x_4454_;
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4458_; 
v_a_4457_ = lean_ctor_get(v_x_4446_, 0);
lean_inc(v_a_4457_);
lean_dec_ref_known(v_x_4446_, 1);
v___x_4458_ = lean_apply_2(v___f_4445_, v_a_4457_, lean_box(0));
return v___x_4458_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2___boxed(lean_object* v___f_4459_, lean_object* v_x_4460_, lean_object* v___y_4461_){
_start:
{
lean_object* v_res_4462_; 
v_res_4462_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2(v___f_4459_, v_x_4460_);
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7(lean_object* v___f_4463_, lean_object* v_a_4464_, uint32_t v_op_4465_, uint64_t v_flags_4466_, lean_object* v_payload_4467_, lean_object* v_x_4468_){
_start:
{
if (lean_obj_tag(v_x_4468_) == 0)
{
lean_object* v___x_4470_; 
lean_dec_ref(v___f_4463_);
v___x_4470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4470_, 0, v_x_4468_);
return v___x_4470_;
}
else
{
lean_object* v_a_4471_; lean_object* v___x_4473_; uint8_t v_isShared_4474_; uint8_t v_isSharedCheck_4491_; 
v_a_4471_ = lean_ctor_get(v_x_4468_, 0);
v_isSharedCheck_4491_ = !lean_is_exclusive(v_x_4468_);
if (v_isSharedCheck_4491_ == 0)
{
v___x_4473_ = v_x_4468_;
v_isShared_4474_ = v_isSharedCheck_4491_;
goto v_resetjp_4472_;
}
else
{
lean_inc(v_a_4471_);
lean_dec(v_x_4468_);
v___x_4473_ = lean_box(0);
v_isShared_4474_ = v_isSharedCheck_4491_;
goto v_resetjp_4472_;
}
v_resetjp_4472_:
{
uint32_t v___x_4475_; lean_object* v___x_4476_; uint8_t v___x_4477_; lean_object* v_val_4479_; lean_object* v___x_4482_; 
v___x_4475_ = 0;
v___x_4476_ = lean_unsigned_to_nat(0u);
v___x_4477_ = 0;
v___x_4482_ = lasm_js_call_into(v_a_4464_, v_op_4465_, v___x_4475_, v_flags_4466_, v_a_4471_, v_payload_4467_);
lean_dec(v_a_4471_);
if (lean_obj_tag(v___x_4482_) == 0)
{
lean_object* v_a_4483_; lean_object* v___x_4485_; 
v_a_4483_ = lean_ctor_get(v___x_4482_, 0);
lean_inc(v_a_4483_);
lean_dec_ref_known(v___x_4482_, 1);
if (v_isShared_4474_ == 0)
{
lean_ctor_set(v___x_4473_, 0, v_a_4483_);
v___x_4485_ = v___x_4473_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v_a_4483_);
v___x_4485_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
v_val_4479_ = v___x_4485_;
goto v___jp_4478_;
}
}
else
{
lean_object* v_a_4487_; lean_object* v___x_4489_; 
v_a_4487_ = lean_ctor_get(v___x_4482_, 0);
lean_inc(v_a_4487_);
lean_dec_ref_known(v___x_4482_, 1);
if (v_isShared_4474_ == 0)
{
lean_ctor_set_tag(v___x_4473_, 0);
lean_ctor_set(v___x_4473_, 0, v_a_4487_);
v___x_4489_ = v___x_4473_;
goto v_reusejp_4488_;
}
else
{
lean_object* v_reuseFailAlloc_4490_; 
v_reuseFailAlloc_4490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4490_, 0, v_a_4487_);
v___x_4489_ = v_reuseFailAlloc_4490_;
goto v_reusejp_4488_;
}
v_reusejp_4488_:
{
v_val_4479_ = v___x_4489_;
goto v___jp_4478_;
}
}
v___jp_4478_:
{
lean_object* v___x_4480_; lean_object* v___x_4481_; 
v___x_4480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4480_, 0, v_val_4479_);
v___x_4481_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4476_, v___x_4477_, v___x_4480_, v___f_4463_);
return v___x_4481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7___boxed(lean_object* v___f_4492_, lean_object* v_a_4493_, lean_object* v_op_4494_, lean_object* v_flags_4495_, lean_object* v_payload_4496_, lean_object* v_x_4497_, lean_object* v___y_4498_){
_start:
{
uint32_t v_op_boxed_4499_; uint64_t v_flags_boxed_4500_; lean_object* v_res_4501_; 
v_op_boxed_4499_ = lean_unbox_uint32(v_op_4494_);
lean_dec(v_op_4494_);
v_flags_boxed_4500_ = lean_unbox_uint64(v_flags_4495_);
lean_dec_ref(v_flags_4495_);
v_res_4501_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7(v___f_4492_, v_a_4493_, v_op_boxed_4499_, v_flags_boxed_4500_, v_payload_4496_, v_x_4497_);
lean_dec(v_payload_4496_);
lean_dec(v_a_4493_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3(lean_object* v_a_4502_, lean_object* v_x_4503_){
_start:
{
if (lean_obj_tag(v_x_4503_) == 0)
{
lean_object* v_a_4505_; lean_object* v___x_4507_; uint8_t v_isShared_4508_; uint8_t v_isSharedCheck_4513_; 
v_a_4505_ = lean_ctor_get(v_x_4503_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v_x_4503_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4507_ = v_x_4503_;
v_isShared_4508_ = v_isSharedCheck_4513_;
goto v_resetjp_4506_;
}
else
{
lean_inc(v_a_4505_);
lean_dec(v_x_4503_);
v___x_4507_ = lean_box(0);
v_isShared_4508_ = v_isSharedCheck_4513_;
goto v_resetjp_4506_;
}
v_resetjp_4506_:
{
lean_object* v___x_4510_; 
if (v_isShared_4508_ == 0)
{
v___x_4510_ = v___x_4507_;
goto v_reusejp_4509_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4505_);
v___x_4510_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4509_;
}
v_reusejp_4509_:
{
lean_object* v___x_4511_; 
v___x_4511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4511_, 0, v___x_4510_);
return v___x_4511_;
}
}
}
else
{
lean_object* v___x_4514_; 
lean_dec_ref_known(v_x_4503_, 1);
v___x_4514_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_4502_);
return v___x_4514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed(lean_object* v_a_4515_, lean_object* v_x_4516_, lean_object* v___y_4517_){
_start:
{
lean_object* v_res_4518_; 
v_res_4518_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3(v_a_4515_, v_x_4516_);
lean_dec(v_a_4515_);
return v_res_4518_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5(lean_object* v___x_4519_, uint8_t v___x_4520_, lean_object* v___f_4521_, lean_object* v_a_4522_, uint32_t v_op_4523_, uint64_t v_flags_4524_, lean_object* v_payload_4525_, lean_object* v_x_4526_){
_start:
{
lean_object* v_val_4529_; 
if (lean_obj_tag(v_x_4526_) == 0)
{
lean_object* v___x_4532_; 
lean_dec_ref(v___f_4521_);
lean_dec(v___x_4519_);
v___x_4532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4532_, 0, v_x_4526_);
return v___x_4532_;
}
else
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4547_; 
v_a_4533_ = lean_ctor_get(v_x_4526_, 0);
v_isSharedCheck_4547_ = !lean_is_exclusive(v_x_4526_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4535_ = v_x_4526_;
v_isShared_4536_ = v_isSharedCheck_4547_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v_x_4526_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4547_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
uint32_t v___x_4537_; lean_object* v___x_4538_; 
v___x_4537_ = 0;
v___x_4538_ = lasm_js_call_into(v_a_4522_, v_op_4523_, v___x_4537_, v_flags_4524_, v_a_4533_, v_payload_4525_);
lean_dec(v_a_4533_);
if (lean_obj_tag(v___x_4538_) == 0)
{
lean_object* v_a_4539_; lean_object* v___x_4541_; 
v_a_4539_ = lean_ctor_get(v___x_4538_, 0);
lean_inc(v_a_4539_);
lean_dec_ref_known(v___x_4538_, 1);
if (v_isShared_4536_ == 0)
{
lean_ctor_set(v___x_4535_, 0, v_a_4539_);
v___x_4541_ = v___x_4535_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v_a_4539_);
v___x_4541_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
v_val_4529_ = v___x_4541_;
goto v___jp_4528_;
}
}
else
{
lean_object* v_a_4543_; lean_object* v___x_4545_; 
v_a_4543_ = lean_ctor_get(v___x_4538_, 0);
lean_inc(v_a_4543_);
lean_dec_ref_known(v___x_4538_, 1);
if (v_isShared_4536_ == 0)
{
lean_ctor_set_tag(v___x_4535_, 0);
lean_ctor_set(v___x_4535_, 0, v_a_4543_);
v___x_4545_ = v___x_4535_;
goto v_reusejp_4544_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v_a_4543_);
v___x_4545_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4544_;
}
v_reusejp_4544_:
{
v_val_4529_ = v___x_4545_;
goto v___jp_4528_;
}
}
}
}
v___jp_4528_:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4530_, 0, v_val_4529_);
v___x_4531_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4519_, v___x_4520_, v___x_4530_, v___f_4521_);
return v___x_4531_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5___boxed(lean_object* v___x_4548_, lean_object* v___x_4549_, lean_object* v___f_4550_, lean_object* v_a_4551_, lean_object* v_op_4552_, lean_object* v_flags_4553_, lean_object* v_payload_4554_, lean_object* v_x_4555_, lean_object* v___y_4556_){
_start:
{
uint8_t v___x_1506__boxed_4557_; uint32_t v_op_boxed_4558_; uint64_t v_flags_boxed_4559_; lean_object* v_res_4560_; 
v___x_1506__boxed_4557_ = lean_unbox(v___x_4549_);
v_op_boxed_4558_ = lean_unbox_uint32(v_op_4552_);
lean_dec(v_op_4552_);
v_flags_boxed_4559_ = lean_unbox_uint64(v_flags_4553_);
lean_dec_ref(v_flags_4553_);
v_res_4560_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5(v___x_4548_, v___x_1506__boxed_4557_, v___f_4550_, v_a_4551_, v_op_boxed_4558_, v_flags_boxed_4559_, v_payload_4554_, v_x_4555_);
lean_dec(v_payload_4554_);
lean_dec(v_a_4551_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6(lean_object* v_failurePrefix_4561_, uint32_t v_op_4562_, uint64_t v_flags_4563_, lean_object* v_payload_4564_, lean_object* v___f_4565_, lean_object* v___f_4566_, lean_object* v___f_4567_, lean_object* v_x_4568_){
_start:
{
if (lean_obj_tag(v_x_4568_) == 0)
{
lean_object* v_a_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4578_; 
lean_dec_ref(v___f_4567_);
lean_dec_ref(v___f_4566_);
lean_dec_ref(v___f_4565_);
lean_dec(v_payload_4564_);
v_a_4570_ = lean_ctor_get(v_x_4568_, 0);
v_isSharedCheck_4578_ = !lean_is_exclusive(v_x_4568_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4572_ = v_x_4568_;
v_isShared_4573_ = v_isSharedCheck_4578_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_a_4570_);
lean_dec(v_x_4568_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4578_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4575_; 
if (v_isShared_4573_ == 0)
{
v___x_4575_ = v___x_4572_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v_a_4570_);
v___x_4575_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
lean_object* v___x_4576_; 
v___x_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4576_, 0, v___x_4575_);
return v___x_4576_;
}
}
}
else
{
lean_object* v_a_4579_; lean_object* v___x_4581_; uint8_t v_isShared_4582_; uint8_t v_isSharedCheck_4625_; 
v_a_4579_ = lean_ctor_get(v_x_4568_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v_x_4568_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4581_ = v_x_4568_;
v_isShared_4582_ = v_isSharedCheck_4625_;
goto v_resetjp_4580_;
}
else
{
lean_inc(v_a_4579_);
lean_dec(v_x_4568_);
v___x_4581_ = lean_box(0);
v_isShared_4582_ = v_isSharedCheck_4625_;
goto v_resetjp_4580_;
}
v_resetjp_4580_:
{
lean_object* v___x_4583_; lean_object* v___x_4584_; uint8_t v___x_4585_; 
v___x_4583_ = lean_string_utf8_byte_size(v_failurePrefix_4561_);
v___x_4584_ = lean_unsigned_to_nat(0u);
v___x_4585_ = lean_nat_dec_eq(v___x_4583_, v___x_4584_);
if (v___x_4585_ == 0)
{
lean_object* v___f_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___f_4590_; lean_object* v_val_4592_; lean_object* v___x_4597_; 
lean_dec_ref(v___f_4567_);
lean_inc(v_a_4579_);
v___f_4586_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4586_, 0, v_a_4579_);
v___x_4587_ = lean_box(v___x_4585_);
v___x_4588_ = lean_box_uint32(v_op_4562_);
v___x_4589_ = lean_box_uint64(v_flags_4563_);
lean_inc(v_payload_4564_);
v___f_4590_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4590_, 0, v___x_4584_);
lean_closure_set(v___f_4590_, 1, v___x_4587_);
lean_closure_set(v___f_4590_, 2, v___f_4586_);
lean_closure_set(v___f_4590_, 3, v_a_4579_);
lean_closure_set(v___f_4590_, 4, v___x_4588_);
lean_closure_set(v___f_4590_, 5, v___x_4589_);
lean_closure_set(v___f_4590_, 6, v_payload_4564_);
v___x_4597_ = l_Lasm_JS_Wire_encodeIO(v_payload_4564_);
lean_dec(v_payload_4564_);
if (lean_obj_tag(v___x_4597_) == 0)
{
lean_object* v_a_4598_; lean_object* v___x_4600_; 
v_a_4598_ = lean_ctor_get(v___x_4597_, 0);
lean_inc(v_a_4598_);
lean_dec_ref_known(v___x_4597_, 1);
if (v_isShared_4582_ == 0)
{
lean_ctor_set(v___x_4581_, 0, v_a_4598_);
v___x_4600_ = v___x_4581_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v_a_4598_);
v___x_4600_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
v_val_4592_ = v___x_4600_;
goto v___jp_4591_;
}
}
else
{
lean_object* v_a_4602_; lean_object* v___x_4604_; 
v_a_4602_ = lean_ctor_get(v___x_4597_, 0);
lean_inc(v_a_4602_);
lean_dec_ref_known(v___x_4597_, 1);
if (v_isShared_4582_ == 0)
{
lean_ctor_set_tag(v___x_4581_, 0);
lean_ctor_set(v___x_4581_, 0, v_a_4602_);
v___x_4604_ = v___x_4581_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v_a_4602_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
v_val_4592_ = v___x_4604_;
goto v___jp_4591_;
}
}
v___jp_4591_:
{
lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
v___x_4593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4593_, 0, v_val_4592_);
v___x_4594_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4584_, v___x_4585_, v___x_4593_, v___f_4590_);
v___x_4595_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4584_, v___x_4585_, v___x_4594_, v___f_4565_);
v___x_4596_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4584_, v___x_4585_, v___x_4595_, v___f_4566_);
return v___x_4596_;
}
}
else
{
lean_object* v___f_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___f_4609_; uint8_t v___x_4610_; lean_object* v_val_4612_; lean_object* v___x_4616_; 
lean_dec_ref(v___f_4566_);
lean_dec_ref(v___f_4565_);
lean_inc(v_a_4579_);
v___f_4606_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4606_, 0, v_a_4579_);
v___x_4607_ = lean_box_uint32(v_op_4562_);
v___x_4608_ = lean_box_uint64(v_flags_4563_);
lean_inc(v_payload_4564_);
v___f_4609_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4609_, 0, v___f_4606_);
lean_closure_set(v___f_4609_, 1, v_a_4579_);
lean_closure_set(v___f_4609_, 2, v___x_4607_);
lean_closure_set(v___f_4609_, 3, v___x_4608_);
lean_closure_set(v___f_4609_, 4, v_payload_4564_);
v___x_4610_ = 0;
v___x_4616_ = l_Lasm_JS_Wire_encodeIO(v_payload_4564_);
lean_dec(v_payload_4564_);
if (lean_obj_tag(v___x_4616_) == 0)
{
lean_object* v_a_4617_; lean_object* v___x_4619_; 
v_a_4617_ = lean_ctor_get(v___x_4616_, 0);
lean_inc(v_a_4617_);
lean_dec_ref_known(v___x_4616_, 1);
if (v_isShared_4582_ == 0)
{
lean_ctor_set(v___x_4581_, 0, v_a_4617_);
v___x_4619_ = v___x_4581_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v_a_4617_);
v___x_4619_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
v_val_4612_ = v___x_4619_;
goto v___jp_4611_;
}
}
else
{
lean_object* v_a_4621_; lean_object* v___x_4623_; 
v_a_4621_ = lean_ctor_get(v___x_4616_, 0);
lean_inc(v_a_4621_);
lean_dec_ref_known(v___x_4616_, 1);
if (v_isShared_4582_ == 0)
{
lean_ctor_set_tag(v___x_4581_, 0);
lean_ctor_set(v___x_4581_, 0, v_a_4621_);
v___x_4623_ = v___x_4581_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4621_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
v_val_4612_ = v___x_4623_;
goto v___jp_4611_;
}
}
v___jp_4611_:
{
lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; 
v___x_4613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4613_, 0, v_val_4612_);
v___x_4614_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4584_, v___x_4610_, v___x_4613_, v___f_4609_);
v___x_4615_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4584_, v___x_4610_, v___x_4614_, v___f_4567_);
return v___x_4615_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6___boxed(lean_object* v_failurePrefix_4626_, lean_object* v_op_4627_, lean_object* v_flags_4628_, lean_object* v_payload_4629_, lean_object* v___f_4630_, lean_object* v___f_4631_, lean_object* v___f_4632_, lean_object* v_x_4633_, lean_object* v___y_4634_){
_start:
{
uint32_t v_op_boxed_4635_; uint64_t v_flags_boxed_4636_; lean_object* v_res_4637_; 
v_op_boxed_4635_ = lean_unbox_uint32(v_op_4627_);
lean_dec(v_op_4627_);
v_flags_boxed_4636_ = lean_unbox_uint64(v_flags_4628_);
lean_dec_ref(v_flags_4628_);
v_res_4637_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6(v_failurePrefix_4626_, v_op_boxed_4635_, v_flags_boxed_4636_, v_payload_4629_, v___f_4630_, v___f_4631_, v___f_4632_, v_x_4633_);
lean_dec_ref(v_failurePrefix_4626_);
return v_res_4637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_4640_, lean_object* v_key_4641_){
_start:
{
if (lean_obj_tag(v_d_4640_) == 8)
{
lean_object* v___x_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4669_; 
v___x_4642_ = l_Lasm_JS_Data_field(v_d_4640_, v_key_4641_);
v_isSharedCheck_4669_ = !lean_is_exclusive(v_d_4640_);
if (v_isSharedCheck_4669_ == 0)
{
lean_object* v_unused_4670_; 
v_unused_4670_ = lean_ctor_get(v_d_4640_, 0);
lean_dec(v_unused_4670_);
v___x_4644_ = v_d_4640_;
v_isShared_4645_ = v_isSharedCheck_4669_;
goto v_resetjp_4643_;
}
else
{
lean_dec(v_d_4640_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4669_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
if (lean_obj_tag(v___x_4642_) == 9)
{
lean_object* v_value_4646_; lean_object* v___x_4648_; 
v_value_4646_ = lean_ctor_get(v___x_4642_, 0);
lean_inc(v_value_4646_);
lean_dec_ref_known(v___x_4642_, 2);
if (v_isShared_4645_ == 0)
{
lean_ctor_set_tag(v___x_4644_, 1);
lean_ctor_set(v___x_4644_, 0, v_value_4646_);
v___x_4648_ = v___x_4644_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4649_; 
v_reuseFailAlloc_4649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4649_, 0, v_value_4646_);
v___x_4648_ = v_reuseFailAlloc_4649_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
return v___x_4648_;
}
}
else
{
lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; uint8_t v___x_4660_; 
v___x_4650_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_4651_ = lean_string_append(v___x_4650_, v_key_4641_);
v___x_4652_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_4653_ = lean_string_append(v___x_4651_, v___x_4652_);
v___x_4654_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInstance___closed__0));
v___x_4655_ = lean_string_append(v___x_4653_, v___x_4654_);
v___x_4656_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_4657_ = lean_string_append(v___x_4655_, v___x_4656_);
v___x_4658_ = l_Lasm_JS_Data_describe(v___x_4642_);
v___x_4659_ = lean_string_append(v___x_4657_, v___x_4658_);
lean_dec_ref(v___x_4658_);
v___x_4660_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_4660_ == 0)
{
lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4664_; 
v___x_4661_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___x_4662_ = lean_string_append(v___x_4659_, v___x_4661_);
if (v_isShared_4645_ == 0)
{
lean_ctor_set_tag(v___x_4644_, 0);
lean_ctor_set(v___x_4644_, 0, v___x_4662_);
v___x_4664_ = v___x_4644_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v___x_4662_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
else
{
lean_object* v___x_4667_; 
if (v_isShared_4645_ == 0)
{
lean_ctor_set_tag(v___x_4644_, 0);
lean_ctor_set(v___x_4644_, 0, v___x_4659_);
v___x_4667_ = v___x_4644_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4668_; 
v_reuseFailAlloc_4668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4668_, 0, v___x_4659_);
v___x_4667_ = v_reuseFailAlloc_4668_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
return v___x_4667_;
}
}
}
}
}
else
{
lean_object* v___x_4671_; 
lean_dec(v_d_4640_);
v___x_4671_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_4671_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_4672_, lean_object* v_key_4673_){
_start:
{
lean_object* v_res_4674_; 
v_res_4674_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(v_d_4672_, v_key_4673_);
lean_dec_ref(v_key_4673_);
return v_res_4674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_4675_, lean_object* v_key_4676_){
_start:
{
if (lean_obj_tag(v_d_4675_) == 8)
{
lean_object* v___x_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4704_; 
v___x_4677_ = l_Lasm_JS_Data_field(v_d_4675_, v_key_4676_);
v_isSharedCheck_4704_ = !lean_is_exclusive(v_d_4675_);
if (v_isSharedCheck_4704_ == 0)
{
lean_object* v_unused_4705_; 
v_unused_4705_ = lean_ctor_get(v_d_4675_, 0);
lean_dec(v_unused_4705_);
v___x_4679_ = v_d_4675_;
v_isShared_4680_ = v_isSharedCheck_4704_;
goto v_resetjp_4678_;
}
else
{
lean_dec(v_d_4675_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4704_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
if (lean_obj_tag(v___x_4677_) == 9)
{
lean_object* v_value_4681_; lean_object* v___x_4683_; 
v_value_4681_ = lean_ctor_get(v___x_4677_, 0);
lean_inc(v_value_4681_);
lean_dec_ref_known(v___x_4677_, 2);
if (v_isShared_4680_ == 0)
{
lean_ctor_set_tag(v___x_4679_, 1);
lean_ctor_set(v___x_4679_, 0, v_value_4681_);
v___x_4683_ = v___x_4679_;
goto v_reusejp_4682_;
}
else
{
lean_object* v_reuseFailAlloc_4684_; 
v_reuseFailAlloc_4684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4684_, 0, v_value_4681_);
v___x_4683_ = v_reuseFailAlloc_4684_;
goto v_reusejp_4682_;
}
v_reusejp_4682_:
{
return v___x_4683_;
}
}
else
{
lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; uint8_t v___x_4695_; 
v___x_4685_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__0));
v___x_4686_ = lean_string_append(v___x_4685_, v_key_4676_);
v___x_4687_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__1));
v___x_4688_ = lean_string_append(v___x_4686_, v___x_4687_);
v___x_4689_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModule___closed__1));
v___x_4690_ = lean_string_append(v___x_4688_, v___x_4689_);
v___x_4691_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0_spec__2___closed__2));
v___x_4692_ = lean_string_append(v___x_4690_, v___x_4691_);
v___x_4693_ = l_Lasm_JS_Data_describe(v___x_4677_);
v___x_4694_ = lean_string_append(v___x_4692_, v___x_4693_);
lean_dec_ref(v___x_4693_);
v___x_4695_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__4);
if (v___x_4695_ == 0)
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4699_; 
v___x_4696_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__5));
v___x_4697_ = lean_string_append(v___x_4694_, v___x_4696_);
if (v_isShared_4680_ == 0)
{
lean_ctor_set_tag(v___x_4679_, 0);
lean_ctor_set(v___x_4679_, 0, v___x_4697_);
v___x_4699_ = v___x_4679_;
goto v_reusejp_4698_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v___x_4697_);
v___x_4699_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4698_;
}
v_reusejp_4698_:
{
return v___x_4699_;
}
}
else
{
lean_object* v___x_4702_; 
if (v_isShared_4680_ == 0)
{
lean_ctor_set_tag(v___x_4679_, 0);
lean_ctor_set(v___x_4679_, 0, v___x_4694_);
v___x_4702_ = v___x_4679_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v___x_4694_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
}
else
{
lean_object* v___x_4706_; 
lean_dec(v_d_4675_);
v___x_4706_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_4706_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_4707_, lean_object* v_key_4708_){
_start:
{
lean_object* v_res_4709_; 
v_res_4709_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(v_d_4707_, v_key_4708_);
lean_dec_ref(v_key_4708_);
return v_res_4709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(lean_object* v_context_4710_, lean_object* v_d_4711_){
_start:
{
lean_object* v___y_4714_; lean_object* v___y_4715_; lean_object* v___y_4720_; lean_object* v_received_4721_; lean_object* v___y_4740_; lean_object* v_a_4743_; lean_object* v___x_4767_; lean_object* v___x_4768_; 
v___x_4767_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSModuleImportDescriptor___lam__0___closed__0));
lean_inc(v_d_4711_);
v___x_4768_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__2(v_d_4711_, v___x_4767_);
if (lean_obj_tag(v___x_4768_) == 0)
{
lean_object* v_a_4769_; 
v_a_4769_ = lean_ctor_get(v___x_4768_, 0);
lean_inc(v_a_4769_);
lean_dec_ref_known(v___x_4768_, 1);
v_a_4743_ = v_a_4769_;
goto v___jp_4742_;
}
else
{
lean_object* v_a_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; 
v_a_4770_ = lean_ctor_get(v___x_4768_, 0);
lean_inc(v_a_4770_);
lean_dec_ref_known(v___x_4768_, 1);
v___x_4771_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___lam__0___closed__0));
lean_inc(v_d_4711_);
v___x_4772_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1_spec__3(v_d_4711_, v___x_4771_);
if (lean_obj_tag(v___x_4772_) == 0)
{
lean_object* v_a_4773_; 
lean_dec(v_a_4770_);
v_a_4773_ = lean_ctor_get(v___x_4772_, 0);
lean_inc(v_a_4773_);
lean_dec_ref_known(v___x_4772_, 1);
v_a_4743_ = v_a_4773_;
goto v___jp_4742_;
}
else
{
lean_object* v_a_4774_; lean_object* v___x_4776_; uint8_t v_isShared_4777_; uint8_t v_isSharedCheck_4782_; 
lean_dec(v_d_4711_);
v_a_4774_ = lean_ctor_get(v___x_4772_, 0);
v_isSharedCheck_4782_ = !lean_is_exclusive(v___x_4772_);
if (v_isSharedCheck_4782_ == 0)
{
v___x_4776_ = v___x_4772_;
v_isShared_4777_ = v_isSharedCheck_4782_;
goto v_resetjp_4775_;
}
else
{
lean_inc(v_a_4774_);
lean_dec(v___x_4772_);
v___x_4776_ = lean_box(0);
v_isShared_4777_ = v_isSharedCheck_4782_;
goto v_resetjp_4775_;
}
v_resetjp_4775_:
{
lean_object* v___x_4778_; lean_object* v___x_4780_; 
v___x_4778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4778_, 0, v_a_4770_);
lean_ctor_set(v___x_4778_, 1, v_a_4774_);
if (v_isShared_4777_ == 0)
{
lean_ctor_set_tag(v___x_4776_, 0);
lean_ctor_set(v___x_4776_, 0, v___x_4778_);
v___x_4780_ = v___x_4776_;
goto v_reusejp_4779_;
}
else
{
lean_object* v_reuseFailAlloc_4781_; 
v_reuseFailAlloc_4781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4781_, 0, v___x_4778_);
v___x_4780_ = v_reuseFailAlloc_4781_;
goto v_reusejp_4779_;
}
v_reusejp_4779_:
{
return v___x_4780_;
}
}
}
}
v___jp_4713_:
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; 
v___x_4716_ = lean_string_append(v___y_4714_, v___y_4715_);
lean_dec_ref(v___y_4715_);
v___x_4717_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4717_, 0, v___x_4716_);
v___x_4718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4718_, 0, v___x_4717_);
return v___x_4718_;
}
v___jp_4719_:
{
lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; uint8_t v___x_4733_; 
v___x_4722_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4723_ = lean_string_append(v___x_4722_, v_context_4710_);
v___x_4724_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__1));
v___x_4725_ = lean_string_append(v___x_4723_, v___x_4724_);
v___x_4726_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebAssemblyInstantiatedSource___closed__1));
v___x_4727_ = lean_string_append(v___x_4725_, v___x_4726_);
v___x_4728_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__2));
v___x_4729_ = lean_string_append(v___x_4727_, v___x_4728_);
v___x_4730_ = lean_string_append(v___x_4729_, v_received_4721_);
lean_dec_ref(v_received_4721_);
v___x_4731_ = lean_string_utf8_byte_size(v___y_4720_);
v___x_4732_ = lean_unsigned_to_nat(0u);
v___x_4733_ = lean_nat_dec_eq(v___x_4731_, v___x_4732_);
if (v___x_4733_ == 0)
{
lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; 
v___x_4734_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__1));
v___x_4735_ = lean_string_append(v___x_4734_, v___y_4720_);
lean_dec_ref(v___y_4720_);
v___x_4736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_exports_spec__0_spec__0___closed__2));
v___x_4737_ = lean_string_append(v___x_4735_, v___x_4736_);
v___y_4714_ = v___x_4730_;
v___y_4715_ = v___x_4737_;
goto v___jp_4713_;
}
else
{
lean_object* v___x_4738_; 
lean_dec_ref(v___y_4720_);
v___x_4738_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___y_4714_ = v___x_4730_;
v___y_4715_ = v___x_4738_;
goto v___jp_4713_;
}
}
v___jp_4739_:
{
lean_object* v___x_4741_; 
v___x_4741_ = l_Lasm_JS_Data_describe(v_d_4711_);
v___y_4720_ = v___y_4740_;
v_received_4721_ = v___x_4741_;
goto v___jp_4719_;
}
v___jp_4742_:
{
if (lean_obj_tag(v_d_4711_) == 9)
{
lean_object* v_value_4744_; lean_object* v_description_4745_; lean_object* v___x_4746_; uint8_t v___x_4747_; 
v_value_4744_ = lean_ctor_get(v_d_4711_, 0);
v_description_4745_ = lean_ctor_get(v_d_4711_, 1);
v___x_4746_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4747_ = lean_string_dec_eq(v_description_4745_, v___x_4746_);
if (v___x_4747_ == 0)
{
v___y_4740_ = v_a_4743_;
goto v___jp_4739_;
}
else
{
lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4764_; 
lean_inc(v_value_4744_);
v_isSharedCheck_4764_ = !lean_is_exclusive(v_d_4711_);
if (v_isSharedCheck_4764_ == 0)
{
lean_object* v_unused_4765_; lean_object* v_unused_4766_; 
v_unused_4765_ = lean_ctor_get(v_d_4711_, 1);
lean_dec(v_unused_4765_);
v_unused_4766_ = lean_ctor_get(v_d_4711_, 0);
lean_dec(v_unused_4766_);
v___x_4749_ = v_d_4711_;
v_isShared_4750_ = v_isSharedCheck_4764_;
goto v_resetjp_4748_;
}
else
{
lean_dec(v_d_4711_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4764_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
uint32_t v___x_4751_; uint64_t v___x_4752_; lean_object* v___x_4754_; 
v___x_4751_ = 206;
v___x_4752_ = 0ULL;
lean_inc(v_value_4744_);
if (v_isShared_4750_ == 0)
{
lean_ctor_set(v___x_4749_, 1, v___x_4746_);
v___x_4754_ = v___x_4749_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4763_; 
v_reuseFailAlloc_4763_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4763_, 0, v_value_4744_);
lean_ctor_set(v_reuseFailAlloc_4763_, 1, v___x_4746_);
v___x_4754_ = v_reuseFailAlloc_4763_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
uint32_t v___x_4755_; lean_object* v___x_4756_; 
v___x_4755_ = lasm_js_value_handle(v_value_4744_);
lean_dec(v_value_4744_);
v___x_4756_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4751_, v___x_4752_, v___x_4754_, v___x_4755_);
lean_dec_ref(v___x_4754_);
if (lean_obj_tag(v___x_4756_) == 0)
{
lean_object* v_a_4757_; uint8_t v___x_4758_; 
v_a_4757_ = lean_ctor_get(v___x_4756_, 0);
lean_inc(v_a_4757_);
lean_dec_ref_known(v___x_4756_, 1);
v___x_4758_ = lean_string_validate_utf8(v_a_4757_);
if (v___x_4758_ == 0)
{
lean_object* v___x_4759_; lean_object* v___x_4760_; 
lean_dec(v_a_4757_);
v___x_4759_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__9);
v___x_4760_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4759_);
v___y_4720_ = v_a_4743_;
v_received_4721_ = v___x_4760_;
goto v___jp_4719_;
}
else
{
lean_object* v___x_4761_; 
v___x_4761_ = lean_string_from_utf8_unchecked(v_a_4757_);
v___y_4720_ = v_a_4743_;
v_received_4721_ = v___x_4761_;
goto v___jp_4719_;
}
}
else
{
lean_object* v___x_4762_; 
lean_dec_ref_known(v___x_4756_, 1);
v___x_4762_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__10));
v___y_4720_ = v_a_4743_;
v_received_4721_ = v___x_4762_;
goto v___jp_4719_;
}
}
}
}
}
else
{
v___y_4740_ = v_a_4743_;
goto v___jp_4739_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4783_, lean_object* v_d_4784_, lean_object* v_a_4785_){
_start:
{
lean_object* v_res_4786_; 
v_res_4786_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(v_context_4783_, v_d_4784_);
lean_dec_ref(v_context_4783_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0(lean_object* v_context_4787_, lean_object* v_x_4788_){
_start:
{
lean_object* v_val_4791_; 
if (lean_obj_tag(v_x_4788_) == 0)
{
lean_object* v_a_4793_; lean_object* v___x_4795_; uint8_t v_isShared_4796_; uint8_t v_isSharedCheck_4801_; 
v_a_4793_ = lean_ctor_get(v_x_4788_, 0);
v_isSharedCheck_4801_ = !lean_is_exclusive(v_x_4788_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4795_ = v_x_4788_;
v_isShared_4796_ = v_isSharedCheck_4801_;
goto v_resetjp_4794_;
}
else
{
lean_inc(v_a_4793_);
lean_dec(v_x_4788_);
v___x_4795_ = lean_box(0);
v_isShared_4796_ = v_isSharedCheck_4801_;
goto v_resetjp_4794_;
}
v_resetjp_4794_:
{
lean_object* v___x_4798_; 
if (v_isShared_4796_ == 0)
{
v___x_4798_ = v___x_4795_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v_a_4793_);
v___x_4798_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
lean_object* v___x_4799_; 
v___x_4799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4799_, 0, v___x_4798_);
return v___x_4799_;
}
}
}
else
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4815_; 
v_a_4802_ = lean_ctor_get(v_x_4788_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v_x_4788_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4804_ = v_x_4788_;
v_isShared_4805_ = v_isSharedCheck_4815_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v_x_4788_);
v___x_4804_ = lean_box(0);
v_isShared_4805_ = v_isSharedCheck_4815_;
goto v_resetjp_4803_;
}
v_resetjp_4803_:
{
lean_object* v___x_4806_; 
v___x_4806_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0_spec__1(v_context_4787_, v_a_4802_);
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4809_; 
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
lean_inc(v_a_4807_);
lean_dec_ref_known(v___x_4806_, 1);
if (v_isShared_4805_ == 0)
{
lean_ctor_set(v___x_4804_, 0, v_a_4807_);
v___x_4809_ = v___x_4804_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v_a_4807_);
v___x_4809_ = v_reuseFailAlloc_4810_;
goto v_reusejp_4808_;
}
v_reusejp_4808_:
{
v_val_4791_ = v___x_4809_;
goto v___jp_4790_;
}
}
else
{
lean_object* v_a_4811_; lean_object* v___x_4813_; 
v_a_4811_ = lean_ctor_get(v___x_4806_, 0);
lean_inc(v_a_4811_);
lean_dec_ref_known(v___x_4806_, 1);
if (v_isShared_4805_ == 0)
{
lean_ctor_set_tag(v___x_4804_, 0);
lean_ctor_set(v___x_4804_, 0, v_a_4811_);
v___x_4813_ = v___x_4804_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_a_4811_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
v_val_4791_ = v___x_4813_;
goto v___jp_4790_;
}
}
}
}
v___jp_4790_:
{
lean_object* v___x_4792_; 
v___x_4792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4792_, 0, v_val_4791_);
return v___x_4792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0___boxed(lean_object* v_context_4816_, lean_object* v_x_4817_, lean_object* v___y_4818_){
_start:
{
lean_object* v_res_4819_; 
v_res_4819_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0(v_context_4816_, v_x_4817_);
lean_dec_ref(v_context_4816_);
return v_res_4819_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(lean_object* v_context_4820_, uint32_t v_op_4821_, uint64_t v_flags_4822_, lean_object* v_payload_4823_, lean_object* v_failurePrefix_4824_){
_start:
{
lean_object* v___f_4826_; lean_object* v___f_4827_; lean_object* v___f_4828_; lean_object* v___f_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___f_4832_; lean_object* v___f_4833_; lean_object* v___x_4834_; uint8_t v___x_4835_; lean_object* v_val_4837_; lean_object* v___x_4840_; 
v___f_4826_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4826_, 0, v_context_4820_);
v___f_4827_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4827_, 0, v___f_4826_);
v___f_4828_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4828_, 0, v___f_4827_);
lean_inc_ref(v_failurePrefix_4824_);
v___f_4829_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4829_, 0, v_failurePrefix_4824_);
v___x_4830_ = lean_box_uint32(v_op_4821_);
v___x_4831_ = lean_box_uint64(v_flags_4822_);
lean_inc_ref(v___f_4828_);
v___f_4832_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4832_, 0, v_failurePrefix_4824_);
lean_closure_set(v___f_4832_, 1, v___x_4830_);
lean_closure_set(v___f_4832_, 2, v___x_4831_);
lean_closure_set(v___f_4832_, 3, v_payload_4823_);
lean_closure_set(v___f_4832_, 4, v___f_4829_);
lean_closure_set(v___f_4832_, 5, v___f_4828_);
lean_closure_set(v___f_4832_, 6, v___f_4828_);
v___f_4833_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4833_, 0, v___f_4832_);
v___x_4834_ = lean_unsigned_to_nat(0u);
v___x_4835_ = 0;
v___x_4840_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4840_) == 0)
{
lean_object* v_a_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4848_; 
v_a_4841_ = lean_ctor_get(v___x_4840_, 0);
v_isSharedCheck_4848_ = !lean_is_exclusive(v___x_4840_);
if (v_isSharedCheck_4848_ == 0)
{
v___x_4843_ = v___x_4840_;
v_isShared_4844_ = v_isSharedCheck_4848_;
goto v_resetjp_4842_;
}
else
{
lean_inc(v_a_4841_);
lean_dec(v___x_4840_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4848_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4846_; 
if (v_isShared_4844_ == 0)
{
lean_ctor_set_tag(v___x_4843_, 1);
v___x_4846_ = v___x_4843_;
goto v_reusejp_4845_;
}
else
{
lean_object* v_reuseFailAlloc_4847_; 
v_reuseFailAlloc_4847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4847_, 0, v_a_4841_);
v___x_4846_ = v_reuseFailAlloc_4847_;
goto v_reusejp_4845_;
}
v_reusejp_4845_:
{
v_val_4837_ = v___x_4846_;
goto v___jp_4836_;
}
}
}
else
{
lean_object* v_a_4849_; lean_object* v___x_4851_; uint8_t v_isShared_4852_; uint8_t v_isSharedCheck_4856_; 
v_a_4849_ = lean_ctor_get(v___x_4840_, 0);
v_isSharedCheck_4856_ = !lean_is_exclusive(v___x_4840_);
if (v_isSharedCheck_4856_ == 0)
{
v___x_4851_ = v___x_4840_;
v_isShared_4852_ = v_isSharedCheck_4856_;
goto v_resetjp_4850_;
}
else
{
lean_inc(v_a_4849_);
lean_dec(v___x_4840_);
v___x_4851_ = lean_box(0);
v_isShared_4852_ = v_isSharedCheck_4856_;
goto v_resetjp_4850_;
}
v_resetjp_4850_:
{
lean_object* v___x_4854_; 
if (v_isShared_4852_ == 0)
{
lean_ctor_set_tag(v___x_4851_, 0);
v___x_4854_ = v___x_4851_;
goto v_reusejp_4853_;
}
else
{
lean_object* v_reuseFailAlloc_4855_; 
v_reuseFailAlloc_4855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4855_, 0, v_a_4849_);
v___x_4854_ = v_reuseFailAlloc_4855_;
goto v_reusejp_4853_;
}
v_reusejp_4853_:
{
v_val_4837_ = v___x_4854_;
goto v___jp_4836_;
}
}
}
v___jp_4836_:
{
lean_object* v___x_4838_; lean_object* v___x_4839_; 
v___x_4838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4838_, 0, v_val_4837_);
v___x_4839_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4834_, v___x_4835_, v___x_4838_, v___f_4833_);
return v___x_4839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0___boxed(lean_object* v_context_4857_, lean_object* v_op_4858_, lean_object* v_flags_4859_, lean_object* v_payload_4860_, lean_object* v_failurePrefix_4861_, lean_object* v_a_4862_){
_start:
{
uint32_t v_op_boxed_4863_; uint64_t v_flags_boxed_4864_; lean_object* v_res_4865_; 
v_op_boxed_4863_ = lean_unbox_uint32(v_op_4858_);
lean_dec(v_op_4858_);
v_flags_boxed_4864_ = lean_unbox_uint64(v_flags_4859_);
lean_dec_ref(v_flags_4859_);
v_res_4865_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(v_context_4857_, v_op_boxed_4863_, v_flags_boxed_4864_, v_payload_4860_, v_failurePrefix_4861_);
return v_res_4865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(lean_object* v_b_4866_, lean_object* v_args_4867_){
_start:
{
uint8_t v_construct_4869_; lean_object* v___x_4870_; uint32_t v___x_4871_; uint64_t v___x_4872_; uint64_t v___y_4874_; 
v_construct_4869_ = lean_ctor_get_uint8(v_b_4866_, sizeof(void*)*4);
v___x_4870_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4866_);
v___x_4871_ = 214;
v___x_4872_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__1);
if (v_construct_4869_ == 0)
{
uint64_t v___x_4882_; 
v___x_4882_ = 0ULL;
v___y_4874_ = v___x_4882_;
goto v___jp_4873_;
}
else
{
uint64_t v___x_4883_; 
v___x_4883_ = 4ULL;
v___y_4874_ = v___x_4883_;
goto v___jp_4873_;
}
v___jp_4873_:
{
uint64_t v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; 
v___x_4875_ = lean_uint64_lor(v___x_4872_, v___y_4874_);
v___x_4876_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4866_, v_args_4867_);
v___x_4877_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1_spec__2___closed__0));
v___x_4878_ = lean_string_append(v___x_4877_, v___x_4870_);
v___x_4879_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__1___closed__0));
v___x_4880_ = lean_string_append(v___x_4878_, v___x_4879_);
v___x_4881_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0_spec__0(v___x_4870_, v___x_4871_, v___x_4875_, v___x_4876_, v___x_4880_);
return v___x_4881_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0___boxed(lean_object* v_b_4884_, lean_object* v_args_4885_, lean_object* v_a_4886_){
_start:
{
lean_object* v_res_4887_; 
v_res_4887_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v_b_4884_, v_args_4885_);
lean_dec_ref(v_b_4884_);
return v_res_4887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiate(lean_object* v_bytes_4896_, lean_object* v_importObject_4897_, lean_object* v_options_4898_){
_start:
{
lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; 
v___x_4900_ = lean_unsigned_to_nat(3u);
v___x_4901_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiate___closed__2));
v___x_4902_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4902_, 0, v_bytes_4896_);
v___x_4903_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4898_);
v___x_4904_ = lean_mk_empty_array_with_capacity(v___x_4900_);
v___x_4905_ = lean_array_push(v___x_4904_, v___x_4902_);
v___x_4906_ = lean_array_push(v___x_4905_, v_importObject_4897_);
v___x_4907_ = lean_array_push(v___x_4906_, v___x_4903_);
v___x_4908_ = l_Lasm_JS_Web_Support_args(v___x_4907_);
v___x_4909_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v___x_4901_, v___x_4908_);
return v___x_4909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiate___boxed(lean_object* v_bytes_4910_, lean_object* v_importObject_4911_, lean_object* v_options_4912_, lean_object* v_a_4913_){
_start:
{
lean_object* v_res_4914_; 
v_res_4914_ = l_Lasm_JS_Web_WebAssembly_instantiate(v_bytes_4910_, v_importObject_4911_, v_options_4912_);
return v_res_4914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject(lean_object* v_moduleObject_4922_, lean_object* v_importObject_4923_){
_start:
{
lean_object* v___f_4925_; uint8_t v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; 
v___f_4925_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_4926_ = 0;
v___x_4927_ = lean_unsigned_to_nat(2u);
v___x_4928_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___closed__1));
v___x_4929_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4930_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4930_, 0, v_moduleObject_4922_);
lean_ctor_set(v___x_4930_, 1, v___x_4929_);
v___x_4931_ = lean_mk_empty_array_with_capacity(v___x_4927_);
v___x_4932_ = lean_array_push(v___x_4931_, v___x_4930_);
v___x_4933_ = lean_array_push(v___x_4932_, v_importObject_4923_);
v___x_4934_ = l_Lasm_JS_Web_Support_args(v___x_4933_);
v___x_4935_ = lean_unsigned_to_nat(0u);
v___x_4936_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_4928_, v___x_4934_);
v___x_4937_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4935_, v___x_4926_, v___x_4936_, v___f_4925_);
return v___x_4937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject___boxed(lean_object* v_moduleObject_4938_, lean_object* v_importObject_4939_, lean_object* v_a_4940_){
_start:
{
lean_object* v_res_4941_; 
v_res_4941_ = l_Lasm_JS_Web_WebAssembly_instantiateWithModuleObject(v_moduleObject_4938_, v_importObject_4939_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming(lean_object* v_source_4950_, lean_object* v_options_4951_){
_start:
{
lean_object* v___f_4953_; uint8_t v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; 
v___f_4953_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compile___closed__0));
v___x_4954_ = 0;
v___x_4955_ = lean_unsigned_to_nat(2u);
v___x_4956_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_compileStreaming___closed__2));
v___x_4957_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4958_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4958_, 0, v_source_4950_);
lean_ctor_set(v___x_4958_, 1, v___x_4957_);
v___x_4959_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4951_);
v___x_4960_ = lean_mk_empty_array_with_capacity(v___x_4955_);
v___x_4961_ = lean_array_push(v___x_4960_, v___x_4958_);
v___x_4962_ = lean_array_push(v___x_4961_, v___x_4959_);
v___x_4963_ = l_Lasm_JS_Web_Support_args(v___x_4962_);
v___x_4964_ = lean_unsigned_to_nat(0u);
v___x_4965_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_fetch_spec__0(v___x_4956_, v___x_4963_);
v___x_4966_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4964_, v___x_4954_, v___x_4965_, v___f_4953_);
return v___x_4966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_compileStreaming___boxed(lean_object* v_source_4967_, lean_object* v_options_4968_, lean_object* v_a_4969_){
_start:
{
lean_object* v_res_4970_; 
v_res_4970_ = l_Lasm_JS_Web_WebAssembly_compileStreaming(v_source_4967_, v_options_4968_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming(lean_object* v_source_4979_, lean_object* v_importObject_4980_, lean_object* v_options_4981_){
_start:
{
lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4983_ = lean_unsigned_to_nat(3u);
v___x_4984_ = ((lean_object*)(l_Lasm_JS_Web_WebAssembly_instantiateStreaming___closed__2));
v___x_4985_ = ((lean_object*)(l_Lasm_JS_Web_instToJSModule___lam__0___closed__0));
v___x_4986_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4986_, 0, v_source_4979_);
lean_ctor_set(v___x_4986_, 1, v___x_4985_);
v___x_4987_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebAssembly_Module_new_spec__0(v_options_4981_);
v___x_4988_ = lean_mk_empty_array_with_capacity(v___x_4983_);
v___x_4989_ = lean_array_push(v___x_4988_, v___x_4986_);
v___x_4990_ = lean_array_push(v___x_4989_, v_importObject_4980_);
v___x_4991_ = lean_array_push(v___x_4990_, v___x_4987_);
v___x_4992_ = l_Lasm_JS_Web_Support_args(v___x_4991_);
v___x_4993_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Web_WebAssembly_instantiate_spec__0(v___x_4984_, v___x_4992_);
return v___x_4993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebAssembly_instantiateStreaming___boxed(lean_object* v_source_4994_, lean_object* v_importObject_4995_, lean_object* v_options_4996_, lean_object* v_a_4997_){
_start:
{
lean_object* v_res_4998_; 
v_res_4998_ = l_Lasm_JS_Web_WebAssembly_instantiateStreaming(v_source_4994_, v_importObject_4995_, v_options_4996_);
return v_res_4998_;
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
