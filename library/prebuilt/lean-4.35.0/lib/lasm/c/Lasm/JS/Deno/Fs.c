// Lean compiler output
// Module: Lasm.JS.Deno.Fs
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Streams public import Lasm.JS.Deno.Runtime public import Lasm.JS.Deno.Io
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_consoleSize_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lean_io_promise_new();
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
extern lean_object* l_Lasm_JS_instFromJSData;
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Stdin_setRaw_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSFsFile___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSFsFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSFsFile___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSFsFile___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSFsFile = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsFile___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsFile___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsFile___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsFile___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsFile___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSFsFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSFsFile___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSFsFile___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Deno.FsFile"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsFile___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsFile___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSFsFile = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDirEntryAsyncIterable = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Deno.DirEntryAsyncIterable"};
static const lean_object* l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable = (const lean_object*)&l_Lasm_JS_Deno_instFromJSDirEntryAsyncIterable___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSFsWatcher = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsWatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.FsWatcher"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsWatcher___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsWatcher___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsWatcher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSFsFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSFsWatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsWatcher___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsWatcher___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSFsWatcher = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsWatcher___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_any_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_any_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_any_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_any_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_access_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_access_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_access_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_access_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_create_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_create_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_create_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_create_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_modify_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_modify_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_modify_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_modify_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_rename_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_rename_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_rename_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_rename_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_remove_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_remove_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_remove_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_remove_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqFsEventKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqFsEventKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqFsEventKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqFsEventKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqFsEventKind___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqFsEventKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqFsEventKind = (const lean_object*)&l_Lasm_JS_Deno_instBEqFsEventKind___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.FsEventKind.any"};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.FsEventKind.access"};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.FsEventKind.create"};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.FsEventKind.modify"};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.FsEventKind.rename"};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.FsEventKind.remove"};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Deno.FsEventKind.other"};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__13_value;
static lean_once_cell_t l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14;
static lean_once_cell_t l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprFsEventKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprFsEventKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprFsEventKind___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprFsEventKind = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedFsEventKind_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedFsEventKind;
static const lean_string_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "any"};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "access"};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "create"};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "modify"};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rename"};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "remove"};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "other"};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__13_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSFsEventKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSFsEventKind = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventKind___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSFsEventKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.FsEventKind"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqFsEventFlag_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqFsEventFlag_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqFsEventFlag_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqFsEventFlag_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqFsEventFlag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqFsEventFlag_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqFsEventFlag___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqFsEventFlag___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqFsEventFlag = (const lean_object*)&l_Lasm_JS_Deno_instBEqFsEventFlag___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.FsEventFlag.rescan"};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprFsEventFlag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprFsEventFlag_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprFsEventFlag___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventFlag___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprFsEventFlag = (const lean_object*)&l_Lasm_JS_Deno_instReprFsEventFlag___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedFsEventFlag_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedFsEventFlag;
static const lean_string_object l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rescan"};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSFsEventFlag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSFsEventFlag___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventFlag___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSFsEventFlag = (const lean_object*)&l_Lasm_JS_Deno_instToJSFsEventFlag___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.FsEventFlag"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventFlag___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_file_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_file_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_file_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_file_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqSymlinkOptionsType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqSymlinkOptionsType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqSymlinkOptionsType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqSymlinkOptionsType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqSymlinkOptionsType___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqSymlinkOptionsType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqSymlinkOptionsType = (const lean_object*)&l_Lasm_JS_Deno_instBEqSymlinkOptionsType___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Deno.SymlinkOptionsType.file"};
static const lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Deno.SymlinkOptionsType.dir"};
static const lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Deno.SymlinkOptionsType.junction"};
static const lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprSymlinkOptionsType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType = (const lean_object*)&l_Lasm_JS_Deno_instReprSymlinkOptionsType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedSymlinkOptionsType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedSymlinkOptionsType;
static const lean_string_object l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "file"};
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dir"};
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "junction"};
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSSymlinkOptionsType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptionsType___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.SymlinkOptionsType"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_bigint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_bigint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrBigint___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSDoubleOrBigint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDoubleOrBigint___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrBigint___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrBigint___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrBigint = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrBigint___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeIntDoubleOrBigint___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeIntDoubleOrBigint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeIntDoubleOrBigint___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeIntDoubleOrBigint___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeIntDoubleOrBigint___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeIntDoubleOrBigint = (const lean_object*)&l_Lasm_JS_Deno_instCoeIntDoubleOrBigint___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isFile"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isDirectory"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isSymlink"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mtime"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "atime"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "birthtime"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ctime"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dev"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ino"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mode"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "nlink"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uid"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gid"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rdev"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "blksize"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "blocks"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "isBlockDevice"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "isCharDevice"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isFifo"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isSocket"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__1;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__2;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__3;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.FileInfo"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___closed__4_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo;
static const lean_string_object l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSDirEntry___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSDirEntry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.DirEntry"};
static const lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSDirEntry___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSDirEntry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paths"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "flag"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFsEvent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFsEvent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___closed__1;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFsEvent___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___closed__2;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFsEvent___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.FsEvent"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFsEvent___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFsEvent___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent;
static const lean_string_object l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "read"};
static const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "write"};
static const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "truncate"};
static const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "createNew"};
static const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSOpenOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSOpenOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSOpenOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSOpenOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSOpenOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "recursive"};
static const lean_object* l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSMkdirOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSMkdirOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSMkdirOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSMkdirOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSMkdirOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prefix"};
static const lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSMakeTempOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSMakeTempOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSMakeTempOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSMakeTempOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSMakeTempOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSMakeTempOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSRemoveOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSRemoveOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSRemoveOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSRemoveOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSRemoveOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSRemoveOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSRemoveOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSReadFileOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSReadFileOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSReadFileOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSReadFileOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSReadFileOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSReadFileOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSReadFileOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSReadFileOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSReadFileOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSWriteFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSWriteFileOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSWriteFileOptions___lam__0, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSReadFileOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSWriteFileOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSWriteFileOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSWriteFileOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSWriteFileOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream = (const lean_object*)&l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ignore"};
static const lean_object* l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSWatchFsOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSOpenOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___closed__1_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSWatchFsOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSWatchFsOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSWatchFsOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSWatchFsOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSSymlinkOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSSymlinkOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_FsFile_readable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readable"};
static const lean_object* l_Lasm_JS_Deno_FsFile_readable___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_readable___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_readable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_readable___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_writable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "writable"};
static const lean_object* l_Lasm_JS_Deno_FsFile_writable___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_writable___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_writable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_writable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_truncateSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "truncateSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_truncateSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_truncateSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncateSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncateSync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_seek___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "seek"};
static const lean_object* l_Lasm_JS_Deno_FsFile_seek___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_seek___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seek(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seek___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_seekSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "seekSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_seekSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_seekSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seekSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seekSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Option (Float)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__7_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__8_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__9 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_stat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stat"};
static const lean_object* l_Lasm_JS_Deno_FsFile_stat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_stat___closed__0_value;
static const lean_array_object l_Lasm_JS_Deno_FsFile_stat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_FsFile_stat___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_stat___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_FsFile_stat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_FsFile_stat___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_stat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_stat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_statSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "statSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_statSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_statSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_statSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_statSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_sync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_sync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_sync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_sync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_sync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_syncSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "syncSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_syncSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_syncSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_syncData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "syncData"};
static const lean_object* l_Lasm_JS_Deno_FsFile_syncData___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_syncData___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncData(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncData___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_syncDataSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "syncDataSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_syncDataSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_utime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "utime"};
static const lean_object* l_Lasm_JS_Deno_FsFile_utime___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_utime___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_utimeSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "utimeSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_utimeSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_utimeSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_isTerminal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "isTerminal"};
static const lean_object* l_Lasm_JS_Deno_FsFile_isTerminal___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_isTerminal___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_setRaw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "setRaw"};
static const lean_object* l_Lasm_JS_Deno_FsFile_setRaw___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_setRaw___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_lock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lock"};
static const lean_object* l_Lasm_JS_Deno_FsFile_lock___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_lock___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_lockSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lockSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_lockSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_lockSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_tryLock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tryLock"};
static const lean_object* l_Lasm_JS_Deno_FsFile_tryLock___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_tryLock___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_tryLockSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tryLockSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_tryLockSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_unlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unlock"};
static const lean_object* l_Lasm_JS_Deno_FsFile_unlock___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_unlock___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_unlockSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "unlockSync"};
static const lean_object* l_Lasm_JS_Deno_FsFile_unlockSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_unlockSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_FsFile_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Deno_FsFile_close___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsFile_close___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "call"};
static const lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Symbol"};
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "asyncIterator"};
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "next"};
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_DirEntryAsyncIterable_values___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_DirEntryAsyncIterable_values___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Array (String)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "an element is not String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Option (Lasm.JS.Deno.FsEventFlag)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Deno_FsWatcher_values___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsWatcher_values___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_FsWatcher_values___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_FsWatcher_values___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_FsWatcher_values___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_FsWatcher_values___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_link___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Deno.link"};
static const lean_object* l_Lasm_JS_Deno_link___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_link___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_link___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Deno_link___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_link___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_link___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Deno.link"};
static const lean_object* l_Lasm_JS_Deno_link___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_link___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_link___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_link___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_link___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_link___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_linkSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.linkSync"};
static const lean_object* l_Lasm_JS_Deno_linkSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_linkSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_linkSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.linkSync"};
static const lean_object* l_Lasm_JS_Deno_linkSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_linkSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_linkSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_linkSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_linkSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_linkSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_linkSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_open___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_open___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_open___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_open___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_open___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Deno.open"};
static const lean_object* l_Lasm_JS_Deno_open___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_open___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_open___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Deno.open"};
static const lean_object* l_Lasm_JS_Deno_open___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_open___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_open___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_open___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_open___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_open___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_open___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_openSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.openSync"};
static const lean_object* l_Lasm_JS_Deno_openSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_openSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_openSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.openSync"};
static const lean_object* l_Lasm_JS_Deno_openSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_openSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_openSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_openSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_openSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_openSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_openSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_create___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Deno.create"};
static const lean_object* l_Lasm_JS_Deno_create___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_create___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_create___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Deno.create"};
static const lean_object* l_Lasm_JS_Deno_create___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_create___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_create___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_create___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_create___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_create___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_create___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_createSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Deno.createSync"};
static const lean_object* l_Lasm_JS_Deno_createSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_createSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_createSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Deno.createSync"};
static const lean_object* l_Lasm_JS_Deno_createSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_createSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_createSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_createSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_createSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_createSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_createSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_mkdir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.mkdir"};
static const lean_object* l_Lasm_JS_Deno_mkdir___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_mkdir___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_mkdir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.mkdir"};
static const lean_object* l_Lasm_JS_Deno_mkdir___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_mkdir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_mkdir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_mkdir___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_mkdir___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_mkdir___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_mkdir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_mkdirSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.mkdirSync"};
static const lean_object* l_Lasm_JS_Deno_mkdirSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_mkdirSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_mkdirSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Deno.mkdirSync"};
static const lean_object* l_Lasm_JS_Deno_mkdirSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_mkdirSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_mkdirSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_mkdirSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_mkdirSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_mkdirSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_mkdirSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_makeTempDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.makeTempDir"};
static const lean_object* l_Lasm_JS_Deno_makeTempDir___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_makeTempDir___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_makeTempDir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Deno.makeTempDir"};
static const lean_object* l_Lasm_JS_Deno_makeTempDir___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_makeTempDir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_makeTempDir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_makeTempDir___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_makeTempDir___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_makeTempDir___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_makeTempDir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_makeTempDirSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.makeTempDirSync"};
static const lean_object* l_Lasm_JS_Deno_makeTempDirSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_makeTempDirSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_makeTempDirSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Deno.makeTempDirSync"};
static const lean_object* l_Lasm_JS_Deno_makeTempDirSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_makeTempDirSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_makeTempDirSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_makeTempDirSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_makeTempDirSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_makeTempDirSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_makeTempDirSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_makeTempFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.makeTempFile"};
static const lean_object* l_Lasm_JS_Deno_makeTempFile___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_makeTempFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_makeTempFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Deno.makeTempFile"};
static const lean_object* l_Lasm_JS_Deno_makeTempFile___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_makeTempFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_makeTempFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_makeTempFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_makeTempFile___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_makeTempFile___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_makeTempFile___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_makeTempFileSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.makeTempFileSync"};
static const lean_object* l_Lasm_JS_Deno_makeTempFileSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_makeTempFileSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_makeTempFileSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Deno.makeTempFileSync"};
static const lean_object* l_Lasm_JS_Deno_makeTempFileSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_makeTempFileSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_makeTempFileSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_makeTempFileSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_makeTempFileSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_makeTempFileSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_makeTempFileSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_chmod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.chmod"};
static const lean_object* l_Lasm_JS_Deno_chmod___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_chmod___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_chmod___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.chmod"};
static const lean_object* l_Lasm_JS_Deno_chmod___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_chmod___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_chmod___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_chmod___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_chmod___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_chmod___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_chmod___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_chmodSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.chmodSync"};
static const lean_object* l_Lasm_JS_Deno_chmodSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_chmodSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_chmodSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Deno.chmodSync"};
static const lean_object* l_Lasm_JS_Deno_chmodSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_chmodSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_chmodSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_chmodSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_chmodSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_chmodSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_chmodSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_chown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.chown"};
static const lean_object* l_Lasm_JS_Deno_chown___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_chown___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_chown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.chown"};
static const lean_object* l_Lasm_JS_Deno_chown___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_chown___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_chown___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_chown___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_chown___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_chown___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_chown___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_chownSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.chownSync"};
static const lean_object* l_Lasm_JS_Deno_chownSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_chownSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_chownSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Deno.chownSync"};
static const lean_object* l_Lasm_JS_Deno_chownSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_chownSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_chownSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_chownSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_chownSync___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_chownSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_chownSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_remove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Deno.remove"};
static const lean_object* l_Lasm_JS_Deno_remove___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_remove___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_remove___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Deno.remove"};
static const lean_object* l_Lasm_JS_Deno_remove___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_remove___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_remove___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_remove___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_remove___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_remove___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_remove___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_removeSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Deno.removeSync"};
static const lean_object* l_Lasm_JS_Deno_removeSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_removeSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_removeSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Deno.removeSync"};
static const lean_object* l_Lasm_JS_Deno_removeSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_removeSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_removeSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_removeSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_removeSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_removeSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_removeSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_renameSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Deno.renameSync"};
static const lean_object* l_Lasm_JS_Deno_renameSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_renameSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_renameSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Deno.renameSync"};
static const lean_object* l_Lasm_JS_Deno_renameSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_renameSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_renameSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_renameSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_renameSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_renameSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_renameSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_rename___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Deno.rename"};
static const lean_object* l_Lasm_JS_Deno_rename___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_rename___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_rename___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Deno.rename"};
static const lean_object* l_Lasm_JS_Deno_rename___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_rename___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_rename___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_rename___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_rename___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_rename___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_rename___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_readTextFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.readTextFile"};
static const lean_object* l_Lasm_JS_Deno_readTextFile___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_readTextFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_readTextFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Deno.readTextFile"};
static const lean_object* l_Lasm_JS_Deno_readTextFile___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_readTextFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_readTextFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_readTextFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_readTextFile___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_readTextFile___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_readTextFile___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_readTextFileSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.readTextFileSync"};
static const lean_object* l_Lasm_JS_Deno_readTextFileSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_readTextFileSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_readTextFileSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Deno.readTextFileSync"};
static const lean_object* l_Lasm_JS_Deno_readTextFileSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_readTextFileSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_readTextFileSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_readTextFileSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_readTextFileSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_readTextFileSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_readTextFileSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_readFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.readFile"};
static const lean_object* l_Lasm_JS_Deno_readFile___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_readFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_readFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.readFile"};
static const lean_object* l_Lasm_JS_Deno_readFile___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_readFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_readFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_readFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_readFile___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_readFile___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_readFile___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_readFileSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.readFileSync"};
static const lean_object* l_Lasm_JS_Deno_readFileSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_readFileSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_readFileSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Deno.readFileSync"};
static const lean_object* l_Lasm_JS_Deno_readFileSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_readFileSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_readFileSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_readFileSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_readFileSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_readFileSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_readFileSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_realPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.realPath"};
static const lean_object* l_Lasm_JS_Deno_realPath___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_realPath___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_realPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.realPath"};
static const lean_object* l_Lasm_JS_Deno_realPath___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_realPath___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_realPath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_realPath___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_realPath___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_realPath___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_realPath___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_realPathSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.realPathSync"};
static const lean_object* l_Lasm_JS_Deno_realPathSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_realPathSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_realPathSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Deno.realPathSync"};
static const lean_object* l_Lasm_JS_Deno_realPathSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_realPathSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_realPathSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_realPathSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_realPathSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_realPathSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_realPathSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_readDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.readDir"};
static const lean_object* l_Lasm_JS_Deno_readDir___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_readDir___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_readDir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Deno.readDir"};
static const lean_object* l_Lasm_JS_Deno_readDir___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_readDir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_readDir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_readDir___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_readDir___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_readDir___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_readDir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_copyFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.copyFile"};
static const lean_object* l_Lasm_JS_Deno_copyFile___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_copyFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_copyFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.copyFile"};
static const lean_object* l_Lasm_JS_Deno_copyFile___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_copyFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_copyFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_copyFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_copyFile___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_copyFile___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_copyFile___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_copyFileSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.copyFileSync"};
static const lean_object* l_Lasm_JS_Deno_copyFileSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_copyFileSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_copyFileSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Deno.copyFileSync"};
static const lean_object* l_Lasm_JS_Deno_copyFileSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_copyFileSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_copyFileSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_copyFileSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_copyFileSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_copyFileSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_copyFileSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_readLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.readLink"};
static const lean_object* l_Lasm_JS_Deno_readLink___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_readLink___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_readLink___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.readLink"};
static const lean_object* l_Lasm_JS_Deno_readLink___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_readLink___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_readLink___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_readLink___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_readLink___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_readLink___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_readLink___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_readLinkSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.readLinkSync"};
static const lean_object* l_Lasm_JS_Deno_readLinkSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_readLinkSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_readLinkSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Deno.readLinkSync"};
static const lean_object* l_Lasm_JS_Deno_readLinkSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_readLinkSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_readLinkSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_readLinkSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_readLinkSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_readLinkSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_readLinkSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_lstat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.lstat"};
static const lean_object* l_Lasm_JS_Deno_lstat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_lstat___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_lstat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.lstat"};
static const lean_object* l_Lasm_JS_Deno_lstat___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_lstat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_lstat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_lstat___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_lstat___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_lstat___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_lstat___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_lstatSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.lstatSync"};
static const lean_object* l_Lasm_JS_Deno_lstatSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_lstatSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_lstatSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Deno.lstatSync"};
static const lean_object* l_Lasm_JS_Deno_lstatSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_lstatSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_lstatSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_lstatSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_lstatSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_lstatSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_lstatSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_stat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Deno.stat"};
static const lean_object* l_Lasm_JS_Deno_stat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_stat___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_stat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Deno.stat"};
static const lean_object* l_Lasm_JS_Deno_stat___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_stat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_stat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_stat___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_stat___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_stat___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_stat___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_statSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.statSync"};
static const lean_object* l_Lasm_JS_Deno_statSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_statSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_statSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.statSync"};
static const lean_object* l_Lasm_JS_Deno_statSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_statSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_statSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_statSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_statSync___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_statSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_statSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_writeFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.writeFile"};
static const lean_object* l_Lasm_JS_Deno_writeFile___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_writeFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_writeFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Deno.writeFile"};
static const lean_object* l_Lasm_JS_Deno_writeFile___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_writeFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_writeFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_writeFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_writeFile___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_writeFile___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_writeFile___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_writeFileSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.writeFileSync"};
static const lean_object* l_Lasm_JS_Deno_writeFileSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_writeFileSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_writeFileSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Deno.writeFileSync"};
static const lean_object* l_Lasm_JS_Deno_writeFileSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_writeFileSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_writeFileSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_writeFileSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_writeFileSync___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_writeFileSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_writeFileSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_writeTextFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.writeTextFile"};
static const lean_object* l_Lasm_JS_Deno_writeTextFile___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_writeTextFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_writeTextFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Deno.writeTextFile"};
static const lean_object* l_Lasm_JS_Deno_writeTextFile___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_writeTextFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_writeTextFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_writeTextFile___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_writeTextFile___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_writeTextFile___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_writeTextFile___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_writeTextFileSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Deno.writeTextFileSync"};
static const lean_object* l_Lasm_JS_Deno_writeTextFileSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_writeTextFileSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_writeTextFileSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Deno.writeTextFileSync"};
static const lean_object* l_Lasm_JS_Deno_writeTextFileSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_writeTextFileSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_writeTextFileSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_writeTextFileSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_writeTextFileSync___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_writeTextFileSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_writeTextFileSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_truncate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.truncate"};
static const lean_object* l_Lasm_JS_Deno_truncate___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_truncate___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_truncate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.truncate"};
static const lean_object* l_Lasm_JS_Deno_truncate___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_truncate___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_truncate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_truncate___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_truncate___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_truncate___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_truncate___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_truncateSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.truncateSync"};
static const lean_object* l_Lasm_JS_Deno_truncateSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_truncateSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_truncateSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Deno.truncateSync"};
static const lean_object* l_Lasm_JS_Deno_truncateSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_truncateSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_truncateSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_truncateSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_truncateSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_truncateSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_truncateSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_watchFs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.watchFs"};
static const lean_object* l_Lasm_JS_Deno_watchFs___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_watchFs___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_watchFs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Deno.watchFs"};
static const lean_object* l_Lasm_JS_Deno_watchFs___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_watchFs___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_watchFs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_watchFs___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_watchFs___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_watchFs___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_watchFs___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_symlink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.symlink"};
static const lean_object* l_Lasm_JS_Deno_symlink___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_symlink___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_symlink___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Deno.symlink"};
static const lean_object* l_Lasm_JS_Deno_symlink___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_symlink___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_symlink___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_symlink___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_symlink___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_symlink___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_symlink___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_symlinkSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.symlinkSync"};
static const lean_object* l_Lasm_JS_Deno_symlinkSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_symlinkSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_symlinkSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Deno.symlinkSync"};
static const lean_object* l_Lasm_JS_Deno_symlinkSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_symlinkSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_symlinkSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_symlinkSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_symlinkSync___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_symlinkSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_symlinkSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_utimeSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.utimeSync"};
static const lean_object* l_Lasm_JS_Deno_utimeSync___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_utimeSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_utimeSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Deno.utimeSync"};
static const lean_object* l_Lasm_JS_Deno_utimeSync___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_utimeSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_utimeSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_utimeSync___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_utimeSync___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_utimeSync___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_utimeSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_utime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.utime"};
static const lean_object* l_Lasm_JS_Deno_utime___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_utime___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_utime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.utime"};
static const lean_object* l_Lasm_JS_Deno_utime___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_utime___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_utime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_utime___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_utime___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_utime___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_utime___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_umask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.umask"};
static const lean_object* l_Lasm_JS_Deno_umask___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_umask___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_umask___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.umask"};
static const lean_object* l_Lasm_JS_Deno_umask___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_umask___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_umask___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_umask___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_link___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_umask___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_umask___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_umask___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSFsFile___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsFile___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsFile___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsFile___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Deno_instFromJSFsFile___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorIdx(uint8_t v_x_36_){
_start:
{
switch(v_x_36_)
{
case 0:
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(0u);
return v___x_37_;
}
case 1:
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(1u);
return v___x_38_;
}
case 2:
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(2u);
return v___x_39_;
}
case 3:
{
lean_object* v___x_40_; 
v___x_40_ = lean_unsigned_to_nat(3u);
return v___x_40_;
}
case 4:
{
lean_object* v___x_41_; 
v___x_41_ = lean_unsigned_to_nat(4u);
return v___x_41_;
}
case 5:
{
lean_object* v___x_42_; 
v___x_42_ = lean_unsigned_to_nat(5u);
return v___x_42_;
}
default: 
{
lean_object* v___x_43_; 
v___x_43_ = lean_unsigned_to_nat(6u);
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorIdx___boxed(lean_object* v_x_44_){
_start:
{
uint8_t v_x_boxed_45_; lean_object* v_res_46_; 
v_x_boxed_45_ = lean_unbox(v_x_44_);
v_res_46_ = l_Lasm_JS_Deno_FsEventKind_ctorIdx(v_x_boxed_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorElim___redArg(lean_object* v_k_47_){
_start:
{
lean_inc(v_k_47_);
return v_k_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorElim___redArg___boxed(lean_object* v_k_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lasm_JS_Deno_FsEventKind_ctorElim___redArg(v_k_48_);
lean_dec(v_k_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorElim(lean_object* v_motive_50_, lean_object* v_ctorIdx_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_k_54_){
_start:
{
lean_inc(v_k_54_);
return v_k_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_ctorElim___boxed(lean_object* v_motive_55_, lean_object* v_ctorIdx_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_k_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lasm_JS_Deno_FsEventKind_ctorElim(v_motive_55_, v_ctorIdx_56_, v_t_boxed_60_, v_h_58_, v_k_59_);
lean_dec(v_k_59_);
lean_dec(v_ctorIdx_56_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_any_elim___redArg(lean_object* v_any_62_){
_start:
{
lean_inc(v_any_62_);
return v_any_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_any_elim___redArg___boxed(lean_object* v_any_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lasm_JS_Deno_FsEventKind_any_elim___redArg(v_any_63_);
lean_dec(v_any_63_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_any_elim(lean_object* v_motive_65_, uint8_t v_t_66_, lean_object* v_h_67_, lean_object* v_any_68_){
_start:
{
lean_inc(v_any_68_);
return v_any_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_any_elim___boxed(lean_object* v_motive_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_any_72_){
_start:
{
uint8_t v_t_boxed_73_; lean_object* v_res_74_; 
v_t_boxed_73_ = lean_unbox(v_t_70_);
v_res_74_ = l_Lasm_JS_Deno_FsEventKind_any_elim(v_motive_69_, v_t_boxed_73_, v_h_71_, v_any_72_);
lean_dec(v_any_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_access_elim___redArg(lean_object* v_access_75_){
_start:
{
lean_inc(v_access_75_);
return v_access_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_access_elim___redArg___boxed(lean_object* v_access_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lasm_JS_Deno_FsEventKind_access_elim___redArg(v_access_76_);
lean_dec(v_access_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_access_elim(lean_object* v_motive_78_, uint8_t v_t_79_, lean_object* v_h_80_, lean_object* v_access_81_){
_start:
{
lean_inc(v_access_81_);
return v_access_81_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_access_elim___boxed(lean_object* v_motive_82_, lean_object* v_t_83_, lean_object* v_h_84_, lean_object* v_access_85_){
_start:
{
uint8_t v_t_boxed_86_; lean_object* v_res_87_; 
v_t_boxed_86_ = lean_unbox(v_t_83_);
v_res_87_ = l_Lasm_JS_Deno_FsEventKind_access_elim(v_motive_82_, v_t_boxed_86_, v_h_84_, v_access_85_);
lean_dec(v_access_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_create_elim___redArg(lean_object* v_create_88_){
_start:
{
lean_inc(v_create_88_);
return v_create_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_create_elim___redArg___boxed(lean_object* v_create_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lasm_JS_Deno_FsEventKind_create_elim___redArg(v_create_89_);
lean_dec(v_create_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_create_elim(lean_object* v_motive_91_, uint8_t v_t_92_, lean_object* v_h_93_, lean_object* v_create_94_){
_start:
{
lean_inc(v_create_94_);
return v_create_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_create_elim___boxed(lean_object* v_motive_95_, lean_object* v_t_96_, lean_object* v_h_97_, lean_object* v_create_98_){
_start:
{
uint8_t v_t_boxed_99_; lean_object* v_res_100_; 
v_t_boxed_99_ = lean_unbox(v_t_96_);
v_res_100_ = l_Lasm_JS_Deno_FsEventKind_create_elim(v_motive_95_, v_t_boxed_99_, v_h_97_, v_create_98_);
lean_dec(v_create_98_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_modify_elim___redArg(lean_object* v_modify_101_){
_start:
{
lean_inc(v_modify_101_);
return v_modify_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_modify_elim___redArg___boxed(lean_object* v_modify_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lasm_JS_Deno_FsEventKind_modify_elim___redArg(v_modify_102_);
lean_dec(v_modify_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_modify_elim(lean_object* v_motive_104_, uint8_t v_t_105_, lean_object* v_h_106_, lean_object* v_modify_107_){
_start:
{
lean_inc(v_modify_107_);
return v_modify_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_modify_elim___boxed(lean_object* v_motive_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_modify_111_){
_start:
{
uint8_t v_t_boxed_112_; lean_object* v_res_113_; 
v_t_boxed_112_ = lean_unbox(v_t_109_);
v_res_113_ = l_Lasm_JS_Deno_FsEventKind_modify_elim(v_motive_108_, v_t_boxed_112_, v_h_110_, v_modify_111_);
lean_dec(v_modify_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_rename_elim___redArg(lean_object* v_rename_114_){
_start:
{
lean_inc(v_rename_114_);
return v_rename_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_rename_elim___redArg___boxed(lean_object* v_rename_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lasm_JS_Deno_FsEventKind_rename_elim___redArg(v_rename_115_);
lean_dec(v_rename_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_rename_elim(lean_object* v_motive_117_, uint8_t v_t_118_, lean_object* v_h_119_, lean_object* v_rename_120_){
_start:
{
lean_inc(v_rename_120_);
return v_rename_120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_rename_elim___boxed(lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_rename_124_){
_start:
{
uint8_t v_t_boxed_125_; lean_object* v_res_126_; 
v_t_boxed_125_ = lean_unbox(v_t_122_);
v_res_126_ = l_Lasm_JS_Deno_FsEventKind_rename_elim(v_motive_121_, v_t_boxed_125_, v_h_123_, v_rename_124_);
lean_dec(v_rename_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_remove_elim___redArg(lean_object* v_remove_127_){
_start:
{
lean_inc(v_remove_127_);
return v_remove_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_remove_elim___redArg___boxed(lean_object* v_remove_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lasm_JS_Deno_FsEventKind_remove_elim___redArg(v_remove_128_);
lean_dec(v_remove_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_remove_elim(lean_object* v_motive_130_, uint8_t v_t_131_, lean_object* v_h_132_, lean_object* v_remove_133_){
_start:
{
lean_inc(v_remove_133_);
return v_remove_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_remove_elim___boxed(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_remove_137_){
_start:
{
uint8_t v_t_boxed_138_; lean_object* v_res_139_; 
v_t_boxed_138_ = lean_unbox(v_t_135_);
v_res_139_ = l_Lasm_JS_Deno_FsEventKind_remove_elim(v_motive_134_, v_t_boxed_138_, v_h_136_, v_remove_137_);
lean_dec(v_remove_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_other_elim___redArg(lean_object* v_other_140_){
_start:
{
lean_inc(v_other_140_);
return v_other_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_other_elim___redArg___boxed(lean_object* v_other_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lasm_JS_Deno_FsEventKind_other_elim___redArg(v_other_141_);
lean_dec(v_other_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_other_elim(lean_object* v_motive_143_, uint8_t v_t_144_, lean_object* v_h_145_, lean_object* v_other_146_){
_start:
{
lean_inc(v_other_146_);
return v_other_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsEventKind_other_elim___boxed(lean_object* v_motive_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_other_150_){
_start:
{
uint8_t v_t_boxed_151_; lean_object* v_res_152_; 
v_t_boxed_151_ = lean_unbox(v_t_148_);
v_res_152_ = l_Lasm_JS_Deno_FsEventKind_other_elim(v_motive_147_, v_t_boxed_151_, v_h_149_, v_other_150_);
lean_dec(v_other_150_);
return v_res_152_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqFsEventKind_beq(uint8_t v_x_153_, uint8_t v_y_154_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_155_ = l_Lasm_JS_Deno_FsEventKind_ctorIdx(v_x_153_);
v___x_156_ = l_Lasm_JS_Deno_FsEventKind_ctorIdx(v_y_154_);
v___x_157_ = lean_nat_dec_eq(v___x_155_, v___x_156_);
lean_dec(v___x_156_);
lean_dec(v___x_155_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqFsEventKind_beq___boxed(lean_object* v_x_158_, lean_object* v_y_159_){
_start:
{
uint8_t v_x_21__boxed_160_; uint8_t v_y_22__boxed_161_; uint8_t v_res_162_; lean_object* v_r_163_; 
v_x_21__boxed_160_ = lean_unbox(v_x_158_);
v_y_22__boxed_161_ = lean_unbox(v_y_159_);
v_res_162_ = l_Lasm_JS_Deno_instBEqFsEventKind_beq(v_x_21__boxed_160_, v_y_22__boxed_161_);
v_r_163_ = lean_box(v_res_162_);
return v_r_163_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(2u);
v___x_188_ = lean_nat_to_int(v___x_187_);
return v___x_188_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_unsigned_to_nat(1u);
v___x_190_ = lean_nat_to_int(v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr(uint8_t v_x_191_, lean_object* v_prec_192_){
_start:
{
lean_object* v___y_194_; lean_object* v___y_201_; lean_object* v___y_208_; lean_object* v___y_215_; lean_object* v___y_222_; lean_object* v___y_229_; lean_object* v___y_236_; 
switch(v_x_191_)
{
case 0:
{
lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_242_ = lean_unsigned_to_nat(1024u);
v___x_243_ = lean_nat_dec_le(v___x_242_, v_prec_192_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; 
v___x_244_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_194_ = v___x_244_;
goto v___jp_193_;
}
else
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_194_ = v___x_245_;
goto v___jp_193_;
}
}
case 1:
{
lean_object* v___x_246_; uint8_t v___x_247_; 
v___x_246_ = lean_unsigned_to_nat(1024u);
v___x_247_ = lean_nat_dec_le(v___x_246_, v_prec_192_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; 
v___x_248_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_201_ = v___x_248_;
goto v___jp_200_;
}
else
{
lean_object* v___x_249_; 
v___x_249_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_201_ = v___x_249_;
goto v___jp_200_;
}
}
case 2:
{
lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_250_ = lean_unsigned_to_nat(1024u);
v___x_251_ = lean_nat_dec_le(v___x_250_, v_prec_192_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; 
v___x_252_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_208_ = v___x_252_;
goto v___jp_207_;
}
else
{
lean_object* v___x_253_; 
v___x_253_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_208_ = v___x_253_;
goto v___jp_207_;
}
}
case 3:
{
lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_254_ = lean_unsigned_to_nat(1024u);
v___x_255_ = lean_nat_dec_le(v___x_254_, v_prec_192_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; 
v___x_256_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_215_ = v___x_256_;
goto v___jp_214_;
}
else
{
lean_object* v___x_257_; 
v___x_257_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_215_ = v___x_257_;
goto v___jp_214_;
}
}
case 4:
{
lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_258_ = lean_unsigned_to_nat(1024u);
v___x_259_ = lean_nat_dec_le(v___x_258_, v_prec_192_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; 
v___x_260_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_222_ = v___x_260_;
goto v___jp_221_;
}
else
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_222_ = v___x_261_;
goto v___jp_221_;
}
}
case 5:
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = lean_unsigned_to_nat(1024u);
v___x_263_ = lean_nat_dec_le(v___x_262_, v_prec_192_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
v___x_264_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_229_ = v___x_264_;
goto v___jp_228_;
}
else
{
lean_object* v___x_265_; 
v___x_265_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_229_ = v___x_265_;
goto v___jp_228_;
}
}
default: 
{
lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_266_ = lean_unsigned_to_nat(1024u);
v___x_267_ = lean_nat_dec_le(v___x_266_, v_prec_192_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; 
v___x_268_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_236_ = v___x_268_;
goto v___jp_235_;
}
else
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_236_ = v___x_269_;
goto v___jp_235_;
}
}
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_195_ = ((lean_object*)(l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__1));
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
v___jp_200_:
{
lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_202_ = ((lean_object*)(l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__3));
lean_inc(v___y_201_);
v___x_203_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_203_, 0, v___y_201_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = 0;
v___x_205_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set_uint8(v___x_205_, sizeof(void*)*1, v___x_204_);
v___x_206_ = l_Repr_addAppParen(v___x_205_, v_prec_192_);
return v___x_206_;
}
v___jp_207_:
{
lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_209_ = ((lean_object*)(l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__5));
lean_inc(v___y_208_);
v___x_210_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_210_, 0, v___y_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = 0;
v___x_212_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set_uint8(v___x_212_, sizeof(void*)*1, v___x_211_);
v___x_213_ = l_Repr_addAppParen(v___x_212_, v_prec_192_);
return v___x_213_;
}
v___jp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_216_ = ((lean_object*)(l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__7));
lean_inc(v___y_215_);
v___x_217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_217_, 0, v___y_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = 0;
v___x_219_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*1, v___x_218_);
v___x_220_ = l_Repr_addAppParen(v___x_219_, v_prec_192_);
return v___x_220_;
}
v___jp_221_:
{
lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_223_ = ((lean_object*)(l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__9));
lean_inc(v___y_222_);
v___x_224_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_224_, 0, v___y_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = 0;
v___x_226_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*1, v___x_225_);
v___x_227_ = l_Repr_addAppParen(v___x_226_, v_prec_192_);
return v___x_227_;
}
v___jp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__11));
lean_inc(v___y_229_);
v___x_231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_231_, 0, v___y_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = 0;
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_232_);
v___x_234_ = l_Repr_addAppParen(v___x_233_, v_prec_192_);
return v___x_234_;
}
v___jp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_237_ = ((lean_object*)(l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__13));
lean_inc(v___y_236_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_236_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = 0;
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_239_);
v___x_241_ = l_Repr_addAppParen(v___x_240_, v_prec_192_);
return v___x_241_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventKind_repr___boxed(lean_object* v_x_270_, lean_object* v_prec_271_){
_start:
{
uint8_t v_x_387__boxed_272_; lean_object* v_res_273_; 
v_x_387__boxed_272_ = lean_unbox(v_x_270_);
v_res_273_ = l_Lasm_JS_Deno_instReprFsEventKind_repr(v_x_387__boxed_272_, v_prec_271_);
lean_dec(v_prec_271_);
return v_res_273_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedFsEventKind_default(void){
_start:
{
uint8_t v___x_276_; 
v___x_276_ = 0;
return v___x_276_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedFsEventKind(void){
_start:
{
uint8_t v___x_277_; 
v___x_277_ = 0;
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0(uint8_t v_x_299_){
_start:
{
switch(v_x_299_)
{
case 0:
{
lean_object* v___x_300_; 
v___x_300_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__1));
return v___x_300_;
}
case 1:
{
lean_object* v___x_301_; 
v___x_301_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__3));
return v___x_301_;
}
case 2:
{
lean_object* v___x_302_; 
v___x_302_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__5));
return v___x_302_;
}
case 3:
{
lean_object* v___x_303_; 
v___x_303_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__7));
return v___x_303_;
}
case 4:
{
lean_object* v___x_304_; 
v___x_304_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__9));
return v___x_304_;
}
case 5:
{
lean_object* v___x_305_; 
v___x_305_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__11));
return v___x_305_;
}
default: 
{
lean_object* v___x_306_; 
v___x_306_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__13));
return v___x_306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___boxed(lean_object* v_x_307_){
_start:
{
uint8_t v_x_125__boxed_308_; lean_object* v_res_309_; 
v_x_125__boxed_308_ = lean_unbox(v_x_307_);
v_res_309_ = l_Lasm_JS_Deno_instToJSFsEventKind___lam__0(v_x_125__boxed_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0(lean_object* v_x_336_){
_start:
{
if (lean_obj_tag(v_x_336_) == 4)
{
lean_object* v_s_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v_s_339_ = lean_ctor_get(v_x_336_, 0);
v___x_340_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0));
v___x_341_ = lean_string_dec_eq(v_s_339_, v___x_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2));
v___x_343_ = lean_string_dec_eq(v_s_339_, v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_345_ = lean_string_dec_eq(v_s_339_, v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6));
v___x_347_ = lean_string_dec_eq(v_s_339_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8));
v___x_349_ = lean_string_dec_eq(v_s_339_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10));
v___x_351_ = lean_string_dec_eq(v_s_339_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12));
v___x_353_ = lean_string_dec_eq(v_s_339_, v___x_352_);
if (v___x_353_ == 0)
{
goto v___jp_337_;
}
else
{
lean_object* v___x_354_; 
v___x_354_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2));
return v___x_354_;
}
}
else
{
lean_object* v___x_355_; 
v___x_355_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3));
return v___x_355_;
}
}
else
{
lean_object* v___x_356_; 
v___x_356_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4));
return v___x_356_;
}
}
else
{
lean_object* v___x_357_; 
v___x_357_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5));
return v___x_357_;
}
}
else
{
lean_object* v___x_358_; 
v___x_358_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6));
return v___x_358_;
}
}
else
{
lean_object* v___x_359_; 
v___x_359_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7));
return v___x_359_;
}
}
else
{
lean_object* v___x_360_; 
v___x_360_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8));
return v___x_360_;
}
}
else
{
goto v___jp_337_;
}
v___jp_337_:
{
lean_object* v___x_338_; 
v___x_338_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__1));
return v___x_338_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___boxed(lean_object* v_x_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0(v_x_361_);
lean_dec(v_x_361_);
return v_res_362_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqFsEventFlag_beq___redArg(){
_start:
{
uint8_t v___x_371_; 
v___x_371_ = 1;
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqFsEventFlag_beq___redArg___boxed(lean_object* v___dummy_372_){
_start:
{
uint8_t v_res_373_; lean_object* v_r_374_; 
v_res_373_ = l_Lasm_JS_Deno_instBEqFsEventFlag_beq___redArg();
v_r_374_ = lean_box(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqFsEventFlag_beq(lean_object* v_x_375_, lean_object* v_y_376_){
_start:
{
uint8_t v___x_377_; 
v___x_377_ = 1;
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqFsEventFlag_beq___boxed(lean_object* v_x_378_, lean_object* v_y_379_){
_start:
{
uint8_t v_res_380_; lean_object* v_r_381_; 
v_res_380_ = l_Lasm_JS_Deno_instBEqFsEventFlag_beq(v_x_378_, v_y_379_);
v_r_381_ = lean_box(v_res_380_);
return v_r_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg(lean_object* v_prec_387_){
_start:
{
lean_object* v___y_389_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_395_ = lean_unsigned_to_nat(1024u);
v___x_396_ = lean_nat_dec_le(v___x_395_, v_prec_387_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; 
v___x_397_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_389_ = v___x_397_;
goto v___jp_388_;
}
else
{
lean_object* v___x_398_; 
v___x_398_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_389_ = v___x_398_;
goto v___jp_388_;
}
v___jp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_390_ = ((lean_object*)(l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___closed__1));
lean_inc(v___y_389_);
v___x_391_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_391_, 0, v___y_389_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = 0;
v___x_393_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_393_, 0, v___x_391_);
lean_ctor_set_uint8(v___x_393_, sizeof(void*)*1, v___x_392_);
v___x_394_ = l_Repr_addAppParen(v___x_393_, v_prec_387_);
return v___x_394_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg___boxed(lean_object* v_prec_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg(v_prec_399_);
lean_dec(v_prec_399_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr(lean_object* v_x_401_, lean_object* v_prec_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lasm_JS_Deno_instReprFsEventFlag_repr___redArg(v_prec_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprFsEventFlag_repr___boxed(lean_object* v_x_404_, lean_object* v_prec_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lasm_JS_Deno_instReprFsEventFlag_repr(v_x_404_, v_prec_405_);
lean_dec(v_prec_405_);
return v_res_406_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedFsEventFlag_default(void){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_box(0);
return v___x_409_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedFsEventFlag(void){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = lean_box(0);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0(lean_object* v_x_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__1));
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0(lean_object* v_x_422_){
_start:
{
if (lean_obj_tag(v_x_422_) == 4)
{
lean_object* v_s_425_; lean_object* v___x_426_; uint8_t v___x_427_; 
v_s_425_ = lean_ctor_get(v_x_422_, 0);
v___x_426_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0));
v___x_427_ = lean_string_dec_eq(v_s_425_, v___x_426_);
if (v___x_427_ == 0)
{
goto v___jp_423_;
}
else
{
lean_object* v___x_428_; 
v___x_428_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___closed__1));
return v___x_428_;
}
}
else
{
goto v___jp_423_;
}
v___jp_423_:
{
lean_object* v___x_424_; 
v___x_424_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___closed__0));
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0___boxed(lean_object* v_x_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lasm_JS_Deno_instFromJSFsEventFlag___lam__0(v_x_429_);
lean_dec(v_x_429_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorIdx(uint8_t v_x_438_){
_start:
{
switch(v_x_438_)
{
case 0:
{
lean_object* v___x_439_; 
v___x_439_ = lean_unsigned_to_nat(0u);
return v___x_439_;
}
case 1:
{
lean_object* v___x_440_; 
v___x_440_ = lean_unsigned_to_nat(1u);
return v___x_440_;
}
default: 
{
lean_object* v___x_441_; 
v___x_441_ = lean_unsigned_to_nat(2u);
return v___x_441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorIdx___boxed(lean_object* v_x_442_){
_start:
{
uint8_t v_x_boxed_443_; lean_object* v_res_444_; 
v_x_boxed_443_ = lean_unbox(v_x_442_);
v_res_444_ = l_Lasm_JS_Deno_SymlinkOptionsType_ctorIdx(v_x_boxed_443_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim___redArg(lean_object* v_k_445_){
_start:
{
lean_inc(v_k_445_);
return v_k_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim___redArg___boxed(lean_object* v_k_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim___redArg(v_k_446_);
lean_dec(v_k_446_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim(lean_object* v_motive_448_, lean_object* v_ctorIdx_449_, uint8_t v_t_450_, lean_object* v_h_451_, lean_object* v_k_452_){
_start:
{
lean_inc(v_k_452_);
return v_k_452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim___boxed(lean_object* v_motive_453_, lean_object* v_ctorIdx_454_, lean_object* v_t_455_, lean_object* v_h_456_, lean_object* v_k_457_){
_start:
{
uint8_t v_t_boxed_458_; lean_object* v_res_459_; 
v_t_boxed_458_ = lean_unbox(v_t_455_);
v_res_459_ = l_Lasm_JS_Deno_SymlinkOptionsType_ctorElim(v_motive_453_, v_ctorIdx_454_, v_t_boxed_458_, v_h_456_, v_k_457_);
lean_dec(v_k_457_);
lean_dec(v_ctorIdx_454_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_file_elim___redArg(lean_object* v_file_460_){
_start:
{
lean_inc(v_file_460_);
return v_file_460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_file_elim___redArg___boxed(lean_object* v_file_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lasm_JS_Deno_SymlinkOptionsType_file_elim___redArg(v_file_461_);
lean_dec(v_file_461_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_file_elim(lean_object* v_motive_463_, uint8_t v_t_464_, lean_object* v_h_465_, lean_object* v_file_466_){
_start:
{
lean_inc(v_file_466_);
return v_file_466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_file_elim___boxed(lean_object* v_motive_467_, lean_object* v_t_468_, lean_object* v_h_469_, lean_object* v_file_470_){
_start:
{
uint8_t v_t_boxed_471_; lean_object* v_res_472_; 
v_t_boxed_471_ = lean_unbox(v_t_468_);
v_res_472_ = l_Lasm_JS_Deno_SymlinkOptionsType_file_elim(v_motive_467_, v_t_boxed_471_, v_h_469_, v_file_470_);
lean_dec(v_file_470_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim___redArg(lean_object* v_dir_473_){
_start:
{
lean_inc(v_dir_473_);
return v_dir_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim___redArg___boxed(lean_object* v_dir_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim___redArg(v_dir_474_);
lean_dec(v_dir_474_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim(lean_object* v_motive_476_, uint8_t v_t_477_, lean_object* v_h_478_, lean_object* v_dir_479_){
_start:
{
lean_inc(v_dir_479_);
return v_dir_479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim___boxed(lean_object* v_motive_480_, lean_object* v_t_481_, lean_object* v_h_482_, lean_object* v_dir_483_){
_start:
{
uint8_t v_t_boxed_484_; lean_object* v_res_485_; 
v_t_boxed_484_ = lean_unbox(v_t_481_);
v_res_485_ = l_Lasm_JS_Deno_SymlinkOptionsType_dir_elim(v_motive_480_, v_t_boxed_484_, v_h_482_, v_dir_483_);
lean_dec(v_dir_483_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim___redArg(lean_object* v_junction_486_){
_start:
{
lean_inc(v_junction_486_);
return v_junction_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim___redArg___boxed(lean_object* v_junction_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim___redArg(v_junction_487_);
lean_dec(v_junction_487_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim(lean_object* v_motive_489_, uint8_t v_t_490_, lean_object* v_h_491_, lean_object* v_junction_492_){
_start:
{
lean_inc(v_junction_492_);
return v_junction_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim___boxed(lean_object* v_motive_493_, lean_object* v_t_494_, lean_object* v_h_495_, lean_object* v_junction_496_){
_start:
{
uint8_t v_t_boxed_497_; lean_object* v_res_498_; 
v_t_boxed_497_ = lean_unbox(v_t_494_);
v_res_498_ = l_Lasm_JS_Deno_SymlinkOptionsType_junction_elim(v_motive_493_, v_t_boxed_497_, v_h_495_, v_junction_496_);
lean_dec(v_junction_496_);
return v_res_498_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqSymlinkOptionsType_beq(uint8_t v_x_499_, uint8_t v_y_500_){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_501_ = l_Lasm_JS_Deno_SymlinkOptionsType_ctorIdx(v_x_499_);
v___x_502_ = l_Lasm_JS_Deno_SymlinkOptionsType_ctorIdx(v_y_500_);
v___x_503_ = lean_nat_dec_eq(v___x_501_, v___x_502_);
lean_dec(v___x_502_);
lean_dec(v___x_501_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqSymlinkOptionsType_beq___boxed(lean_object* v_x_504_, lean_object* v_y_505_){
_start:
{
uint8_t v_x_21__boxed_506_; uint8_t v_y_22__boxed_507_; uint8_t v_res_508_; lean_object* v_r_509_; 
v_x_21__boxed_506_ = lean_unbox(v_x_504_);
v_y_22__boxed_507_ = lean_unbox(v_y_505_);
v_res_508_ = l_Lasm_JS_Deno_instBEqSymlinkOptionsType_beq(v_x_21__boxed_506_, v_y_22__boxed_507_);
v_r_509_ = lean_box(v_res_508_);
return v_r_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr(uint8_t v_x_521_, lean_object* v_prec_522_){
_start:
{
lean_object* v___y_524_; lean_object* v___y_531_; lean_object* v___y_538_; 
switch(v_x_521_)
{
case 0:
{
lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_544_ = lean_unsigned_to_nat(1024u);
v___x_545_ = lean_nat_dec_le(v___x_544_, v_prec_522_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
v___x_546_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_524_ = v___x_546_;
goto v___jp_523_;
}
else
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_524_ = v___x_547_;
goto v___jp_523_;
}
}
case 1:
{
lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(1024u);
v___x_549_ = lean_nat_dec_le(v___x_548_, v_prec_522_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; 
v___x_550_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_531_ = v___x_550_;
goto v___jp_530_;
}
else
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_531_ = v___x_551_;
goto v___jp_530_;
}
}
default: 
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_unsigned_to_nat(1024u);
v___x_553_ = lean_nat_dec_le(v___x_552_, v_prec_522_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; 
v___x_554_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__14);
v___y_538_ = v___x_554_;
goto v___jp_537_;
}
else
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15, &l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15_once, _init_l_Lasm_JS_Deno_instReprFsEventKind_repr___closed__15);
v___y_538_ = v___x_555_;
goto v___jp_537_;
}
}
}
v___jp_523_:
{
lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_525_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__1));
lean_inc(v___y_524_);
v___x_526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_526_, 0, v___y_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = 0;
v___x_528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*1, v___x_527_);
v___x_529_ = l_Repr_addAppParen(v___x_528_, v_prec_522_);
return v___x_529_;
}
v___jp_530_:
{
lean_object* v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_532_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__3));
lean_inc(v___y_531_);
v___x_533_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_533_, 0, v___y_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = 0;
v___x_535_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_535_, 0, v___x_533_);
lean_ctor_set_uint8(v___x_535_, sizeof(void*)*1, v___x_534_);
v___x_536_ = l_Repr_addAppParen(v___x_535_, v_prec_522_);
return v___x_536_;
}
v___jp_537_:
{
lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_539_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___closed__5));
lean_inc(v___y_538_);
v___x_540_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_540_, 0, v___y_538_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = 0;
v___x_542_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_542_, 0, v___x_540_);
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*1, v___x_541_);
v___x_543_ = l_Repr_addAppParen(v___x_542_, v_prec_522_);
return v___x_543_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr___boxed(lean_object* v_x_556_, lean_object* v_prec_557_){
_start:
{
uint8_t v_x_167__boxed_558_; lean_object* v_res_559_; 
v_x_167__boxed_558_ = lean_unbox(v_x_556_);
v_res_559_ = l_Lasm_JS_Deno_instReprSymlinkOptionsType_repr(v_x_167__boxed_558_, v_prec_557_);
lean_dec(v_prec_557_);
return v_res_559_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedSymlinkOptionsType_default(void){
_start:
{
uint8_t v___x_562_; 
v___x_562_ = 0;
return v___x_562_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedSymlinkOptionsType(void){
_start:
{
uint8_t v___x_563_; 
v___x_563_ = 0;
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0(uint8_t v_x_573_){
_start:
{
switch(v_x_573_)
{
case 0:
{
lean_object* v___x_574_; 
v___x_574_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
return v___x_574_;
}
case 1:
{
lean_object* v___x_575_; 
v___x_575_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
return v___x_575_;
}
default: 
{
lean_object* v___x_576_; 
v___x_576_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
return v___x_576_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___boxed(lean_object* v_x_577_){
_start:
{
uint8_t v_x_57__boxed_578_; lean_object* v_res_579_; 
v_x_57__boxed_578_ = lean_unbox(v_x_577_);
v_res_579_ = l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0(v_x_57__boxed_578_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0(lean_object* v_x_593_){
_start:
{
if (lean_obj_tag(v_x_593_) == 4)
{
lean_object* v_s_596_; lean_object* v___x_597_; uint8_t v___x_598_; 
v_s_596_ = lean_ctor_get(v_x_593_, 0);
v___x_597_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__0));
v___x_598_ = lean_string_dec_eq(v_s_596_, v___x_597_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; uint8_t v___x_600_; 
v___x_599_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
v___x_600_ = lean_string_dec_eq(v_s_596_, v___x_599_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__4));
v___x_602_ = lean_string_dec_eq(v_s_596_, v___x_601_);
if (v___x_602_ == 0)
{
goto v___jp_594_;
}
else
{
lean_object* v___x_603_; 
v___x_603_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__1));
return v___x_603_;
}
}
else
{
lean_object* v___x_604_; 
v___x_604_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__2));
return v___x_604_;
}
}
else
{
lean_object* v___x_605_; 
v___x_605_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__3));
return v___x_605_;
}
}
else
{
goto v___jp_594_;
}
v___jp_594_:
{
lean_object* v___x_595_; 
v___x_595_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___closed__0));
return v___x_595_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0___boxed(lean_object* v_x_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lasm_JS_Deno_instFromJSSymlinkOptionsType___lam__0(v_x_606_);
lean_dec(v_x_606_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorIdx(lean_object* v_x_615_){
_start:
{
if (lean_obj_tag(v_x_615_) == 0)
{
lean_object* v___x_616_; 
v___x_616_ = lean_unsigned_to_nat(0u);
return v___x_616_;
}
else
{
lean_object* v___x_617_; 
v___x_617_ = lean_unsigned_to_nat(1u);
return v___x_617_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorIdx___boxed(lean_object* v_x_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lasm_JS_Deno_DoubleOrBigint_ctorIdx(v_x_618_);
lean_dec_ref(v_x_618_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___redArg(lean_object* v_t_620_, lean_object* v_k_621_){
_start:
{
if (lean_obj_tag(v_t_620_) == 0)
{
double v_value_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_value_622_ = lean_ctor_get_float(v_t_620_, 0);
lean_dec_ref_known(v_t_620_, 0);
v___x_623_ = lean_box_float(v_value_622_);
v___x_624_ = lean_apply_1(v_k_621_, v___x_623_);
return v___x_624_;
}
else
{
lean_object* v_value_625_; lean_object* v___x_626_; 
v_value_625_ = lean_ctor_get(v_t_620_, 0);
lean_inc(v_value_625_);
lean_dec_ref_known(v_t_620_, 1);
v___x_626_ = lean_apply_1(v_k_621_, v_value_625_);
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorElim(lean_object* v_motive_627_, lean_object* v_ctorIdx_628_, lean_object* v_t_629_, lean_object* v_h_630_, lean_object* v_k_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___redArg(v_t_629_, v_k_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___boxed(lean_object* v_motive_633_, lean_object* v_ctorIdx_634_, lean_object* v_t_635_, lean_object* v_h_636_, lean_object* v_k_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lasm_JS_Deno_DoubleOrBigint_ctorElim(v_motive_633_, v_ctorIdx_634_, v_t_635_, v_h_636_, v_k_637_);
lean_dec(v_ctorIdx_634_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_double_elim___redArg(lean_object* v_t_639_, lean_object* v_double_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___redArg(v_t_639_, v_double_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_double_elim(lean_object* v_motive_642_, lean_object* v_t_643_, lean_object* v_h_644_, lean_object* v_double_645_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___redArg(v_t_643_, v_double_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_bigint_elim___redArg(lean_object* v_t_647_, lean_object* v_bigint_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___redArg(v_t_647_, v_bigint_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBigint_bigint_elim(lean_object* v_motive_650_, lean_object* v_t_651_, lean_object* v_h_652_, lean_object* v_bigint_653_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lasm_JS_Deno_DoubleOrBigint_ctorElim___redArg(v_t_651_, v_bigint_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrBigint___lam__0(lean_object* v_x_655_){
_start:
{
if (lean_obj_tag(v_x_655_) == 0)
{
double v_value_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
v_value_656_ = lean_ctor_get_float(v_x_655_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v_x_655_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v_x_655_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_dec(v_x_655_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
lean_ctor_set_tag(v___x_658_, 3);
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_662_, 0, v_value_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
else
{
lean_object* v_value_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
v_value_664_ = lean_ctor_get(v_x_655_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v_x_655_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v_x_655_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_value_664_);
lean_dec(v_x_655_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
lean_ctor_set_tag(v___x_666_, 5);
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_value_664_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0(double v_value_674_){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_675_, 0, v_value_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0___boxed(lean_object* v_value_676_){
_start:
{
double v_value_boxed_677_; lean_object* v_res_678_; 
v_value_boxed_677_ = lean_unbox_float(v_value_676_);
lean_dec_ref(v_value_676_);
v_res_678_ = l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0(v_value_boxed_677_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeIntDoubleOrBigint___lam__0(lean_object* v_value_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_682_, 0, v_value_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0(lean_object* v___x_706_, lean_object* v___x_707_, lean_object* v___x_708_, lean_object* v___x_709_, lean_object* v___x_710_, lean_object* v_d_711_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_712_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc_ref(v___x_706_);
v___x_713_ = l_Lasm_JS_readField___redArg(v___x_706_, v_d_711_, v___x_712_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
lean_dec_ref(v___x_706_);
v_a_714_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_721_ == 0)
{
v___x_716_ = v___x_713_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_713_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_714_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_a_722_ = lean_ctor_get(v___x_713_, 0);
lean_inc(v_a_722_);
lean_dec_ref_known(v___x_713_, 1);
v___x_723_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc_ref(v___x_706_);
v___x_724_ = l_Lasm_JS_readField___redArg(v___x_706_, v_d_711_, v___x_723_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
lean_dec_ref(v___x_706_);
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_a_733_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_724_, 1);
v___x_734_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
v___x_735_ = l_Lasm_JS_readField___redArg(v___x_706_, v_d_711_, v___x_734_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
v_a_736_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v___x_735_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_a_744_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_735_, 1);
v___x_745_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3));
lean_inc_ref(v___x_707_);
v___x_746_ = l_Lasm_JS_readField___redArg(v___x_707_, v_d_711_, v___x_745_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
v_a_747_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_746_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_746_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_a_755_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_755_);
lean_dec_ref_known(v___x_746_, 1);
v___x_756_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4));
lean_inc_ref(v___x_708_);
v___x_757_ = l_Lasm_JS_readField___redArg(v___x_708_, v_d_711_, v___x_756_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
v_a_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_a_766_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_757_, 1);
v___x_767_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5));
lean_inc_ref(v___x_708_);
v___x_768_ = l_Lasm_JS_readField___redArg(v___x_708_, v_d_711_, v___x_767_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
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
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_a_777_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_768_, 1);
v___x_778_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6));
lean_inc_ref(v___x_708_);
v___x_779_ = l_Lasm_JS_readField___redArg(v___x_708_, v_d_711_, v___x_778_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
v_a_780_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_779_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_779_);
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
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v_a_788_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_788_);
lean_dec_ref_known(v___x_779_, 1);
v___x_789_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7));
v___x_790_ = l_Lasm_JS_readField___redArg(v___x_708_, v_d_711_, v___x_789_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_707_);
v_a_791_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_790_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_790_);
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
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v_a_799_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_790_, 1);
v___x_800_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8));
v___x_801_ = l_Lasm_JS_readField___redArg(v___x_707_, v_d_711_, v___x_800_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_802_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_801_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_801_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v_a_810_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_810_);
lean_dec_ref_known(v___x_801_, 1);
v___x_811_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9));
lean_inc_ref(v___x_709_);
v___x_812_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_711_, v___x_811_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_813_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_812_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_812_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_a_821_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_a_821_);
lean_dec_ref_known(v___x_812_, 1);
v___x_822_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
lean_inc_ref(v___x_709_);
v___x_823_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_711_, v___x_822_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
else
{
lean_object* v_a_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_a_832_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_823_, 1);
v___x_833_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11));
lean_inc_ref(v___x_709_);
v___x_834_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_711_, v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
else
{
lean_object* v_a_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_a_843_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_834_, 1);
v___x_844_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12));
lean_inc_ref(v___x_709_);
v___x_845_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_711_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_846_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_845_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_845_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
else
{
lean_object* v_a_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_a_854_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_854_);
lean_dec_ref_known(v___x_845_, 1);
v___x_855_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13));
lean_inc_ref(v___x_709_);
v___x_856_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_711_, v___x_855_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v_a_865_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_856_, 1);
v___x_866_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14));
lean_inc_ref(v___x_709_);
v___x_867_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_711_, v___x_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
lean_dec(v_a_865_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_868_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_867_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_867_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v_a_876_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_867_, 1);
v___x_877_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15));
lean_inc_ref(v___x_709_);
v___x_878_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_711_, v___x_877_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
lean_dec(v_a_876_);
lean_dec(v_a_865_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_879_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_878_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_878_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_a_887_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_878_, 1);
v___x_888_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16));
v___x_889_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_711_, v___x_888_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec(v_a_865_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
v_a_890_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_889_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_889_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_a_898_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v___x_889_, 1);
v___x_899_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17));
lean_inc_ref(v___x_710_);
v___x_900_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_711_, v___x_899_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec(v_a_865_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_a_909_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_909_);
lean_dec_ref_known(v___x_900_, 1);
v___x_910_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18));
lean_inc_ref(v___x_710_);
v___x_911_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_711_, v___x_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec(v_a_865_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
v_a_912_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_911_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_911_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_920_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_911_, 1);
v___x_921_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19));
lean_inc_ref(v___x_710_);
v___x_922_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_711_, v___x_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec(v_a_865_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
lean_dec_ref(v___x_710_);
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_a_931_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_922_, 1);
v___x_932_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20));
v___x_933_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_711_, v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec(v_a_865_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec(v_a_722_);
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
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_955_; 
v_a_942_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_955_ == 0)
{
v___x_944_ = v___x_933_;
v_isShared_945_ = v_isSharedCheck_955_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_933_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_955_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; uint8_t v___x_947_; uint8_t v___x_948_; uint8_t v___x_949_; double v___x_950_; double v___x_951_; lean_object* v___x_953_; 
v___x_946_ = lean_alloc_ctor(0, 16, 19);
lean_ctor_set(v___x_946_, 0, v_a_766_);
lean_ctor_set(v___x_946_, 1, v_a_777_);
lean_ctor_set(v___x_946_, 2, v_a_788_);
lean_ctor_set(v___x_946_, 3, v_a_799_);
lean_ctor_set(v___x_946_, 4, v_a_821_);
lean_ctor_set(v___x_946_, 5, v_a_832_);
lean_ctor_set(v___x_946_, 6, v_a_843_);
lean_ctor_set(v___x_946_, 7, v_a_854_);
lean_ctor_set(v___x_946_, 8, v_a_865_);
lean_ctor_set(v___x_946_, 9, v_a_876_);
lean_ctor_set(v___x_946_, 10, v_a_887_);
lean_ctor_set(v___x_946_, 11, v_a_898_);
lean_ctor_set(v___x_946_, 12, v_a_909_);
lean_ctor_set(v___x_946_, 13, v_a_920_);
lean_ctor_set(v___x_946_, 14, v_a_931_);
lean_ctor_set(v___x_946_, 15, v_a_942_);
v___x_947_ = lean_unbox(v_a_722_);
lean_dec(v_a_722_);
lean_ctor_set_uint8(v___x_946_, sizeof(void*)*16 + 16, v___x_947_);
v___x_948_ = lean_unbox(v_a_733_);
lean_dec(v_a_733_);
lean_ctor_set_uint8(v___x_946_, sizeof(void*)*16 + 17, v___x_948_);
v___x_949_ = lean_unbox(v_a_744_);
lean_dec(v_a_744_);
lean_ctor_set_uint8(v___x_946_, sizeof(void*)*16 + 18, v___x_949_);
v___x_950_ = lean_unbox_float(v_a_755_);
lean_dec(v_a_755_);
lean_ctor_set_float(v___x_946_, sizeof(void*)*16, v___x_950_);
v___x_951_ = lean_unbox_float(v_a_810_);
lean_dec(v_a_810_);
lean_ctor_set_float(v___x_946_, sizeof(void*)*16 + 8, v___x_951_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 0, v___x_946_);
v___x_953_ = v___x_944_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_946_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___boxed(lean_object* v___x_956_, lean_object* v___x_957_, lean_object* v___x_958_, lean_object* v___x_959_, lean_object* v___x_960_, lean_object* v_d_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lasm_JS_Deno_instFromJSFileInfo___lam__0(v___x_956_, v___x_957_, v___x_958_, v___x_959_, v___x_960_, v_d_961_);
lean_dec(v_d_961_);
return v_res_962_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__0(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = l_Lasm_JS_instFromJSData;
v___x_964_ = l_Lasm_JS_instFromJSOption___redArg(v___x_963_);
return v___x_964_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__1(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = l_Lasm_JS_instFromJSFloat;
v___x_966_ = l_Lasm_JS_instFromJSOption___redArg(v___x_965_);
return v___x_966_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__2(void){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = l_Lasm_JS_instFromJSBool;
v___x_968_ = l_Lasm_JS_instFromJSOption___redArg(v___x_967_);
return v___x_968_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__3(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___f_974_; 
v___x_969_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__2, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__2);
v___x_970_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__1, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__1);
v___x_971_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__0, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__0);
v___x_972_ = l_Lasm_JS_instFromJSFloat;
v___x_973_ = l_Lasm_JS_instFromJSBool;
v___f_974_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___boxed), 6, 5);
lean_closure_set(v___f_974_, 0, v___x_973_);
lean_closure_set(v___f_974_, 1, v___x_972_);
lean_closure_set(v___f_974_, 2, v___x_971_);
lean_closure_set(v___f_974_, 3, v___x_970_);
lean_closure_set(v___f_974_, 4, v___x_969_);
return v___f_974_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__5(void){
_start:
{
uint8_t v___x_976_; lean_object* v___x_977_; lean_object* v___f_978_; lean_object* v___x_979_; 
v___x_976_ = 0;
v___x_977_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___closed__4));
v___f_978_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__3, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__3);
v___x_979_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_979_, 0, v___f_978_);
lean_ctor_set(v___x_979_, 1, v___x_977_);
lean_ctor_set_uint8(v___x_979_, sizeof(void*)*2, v___x_976_);
return v___x_979_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo(void){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__5, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__5_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__5);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0(lean_object* v___x_982_, lean_object* v___x_983_, lean_object* v_d_984_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0));
v___x_986_ = l_Lasm_JS_readField___redArg(v___x_982_, v_d_984_, v___x_985_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec_ref(v___x_983_);
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
lean_object* v_a_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v_a_995_ = lean_ctor_get(v___x_986_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_986_, 1);
v___x_996_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc_ref(v___x_983_);
v___x_997_ = l_Lasm_JS_readField___redArg(v___x_983_, v_d_984_, v___x_996_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
lean_dec(v_a_995_);
lean_dec_ref(v___x_983_);
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_997_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v_a_1006_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_1006_);
lean_dec_ref_known(v___x_997_, 1);
v___x_1007_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc_ref(v___x_983_);
v___x_1008_ = l_Lasm_JS_readField___redArg(v___x_983_, v_d_984_, v___x_1007_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec(v_a_1006_);
lean_dec(v_a_995_);
lean_dec_ref(v___x_983_);
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v_a_1017_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1018_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
v___x_1019_ = l_Lasm_JS_readField___redArg(v___x_983_, v_d_984_, v___x_1018_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec(v_a_1017_);
lean_dec(v_a_1006_);
lean_dec(v_a_995_);
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1039_; 
v_a_1028_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1030_ = v___x_1019_;
v_isShared_1031_ = v_isSharedCheck_1039_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1019_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1039_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; uint8_t v___x_1033_; uint8_t v___x_1034_; uint8_t v___x_1035_; lean_object* v___x_1037_; 
v___x_1032_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1032_, 0, v_a_995_);
v___x_1033_ = lean_unbox(v_a_1006_);
lean_dec(v_a_1006_);
lean_ctor_set_uint8(v___x_1032_, sizeof(void*)*1, v___x_1033_);
v___x_1034_ = lean_unbox(v_a_1017_);
lean_dec(v_a_1017_);
lean_ctor_set_uint8(v___x_1032_, sizeof(void*)*1 + 1, v___x_1034_);
v___x_1035_ = lean_unbox(v_a_1028_);
lean_dec(v_a_1028_);
lean_ctor_set_uint8(v___x_1032_, sizeof(void*)*1 + 2, v___x_1035_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 0, v___x_1032_);
v___x_1037_ = v___x_1030_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___boxed(lean_object* v___x_1040_, lean_object* v___x_1041_, lean_object* v_d_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lasm_JS_Deno_instFromJSDirEntry___lam__0(v___x_1040_, v___x_1041_, v_d_1042_);
lean_dec(v_d_1042_);
return v_res_1043_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__0(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___f_1046_; 
v___x_1044_ = l_Lasm_JS_instFromJSBool;
v___x_1045_ = l_Lasm_JS_instFromJSString;
v___f_1046_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1046_, 0, v___x_1045_);
lean_closure_set(v___f_1046_, 1, v___x_1044_);
return v___f_1046_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__2(void){
_start:
{
uint8_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___f_1050_; lean_object* v___x_1051_; 
v___x_1048_ = 0;
v___x_1049_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___closed__1));
v___f_1050_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSDirEntry___closed__0, &l_Lasm_JS_Deno_instFromJSDirEntry___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__0);
v___x_1051_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1051_, 0, v___f_1050_);
lean_ctor_set(v___x_1051_, 1, v___x_1049_);
lean_ctor_set_uint8(v___x_1051_, sizeof(void*)*2, v___x_1048_);
return v___x_1051_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry(void){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSDirEntry___closed__2, &l_Lasm_JS_Deno_instFromJSDirEntry___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__2);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0(lean_object* v___x_1056_, lean_object* v___x_1057_, lean_object* v___x_1058_, lean_object* v_d_1059_){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0));
v___x_1061_ = l_Lasm_JS_readField___redArg(v___x_1056_, v_d_1059_, v___x_1060_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec_ref(v___x_1058_);
lean_dec_ref(v___x_1057_);
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1061_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1061_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_a_1070_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1061_, 1);
v___x_1071_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1));
v___x_1072_ = l_Lasm_JS_readField___redArg(v___x_1057_, v_d_1059_, v___x_1071_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_dec(v_a_1070_);
lean_dec_ref(v___x_1058_);
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
else
{
lean_object* v_a_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_a_1081_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v___x_1072_, 1);
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2));
v___x_1083_ = l_Lasm_JS_readField___redArg(v___x_1058_, v_d_1059_, v___x_1082_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_dec(v_a_1081_);
lean_dec(v_a_1070_);
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1083_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1083_);
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
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1101_; 
v_a_1092_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1094_ = v___x_1083_;
v_isShared_1095_ = v_isSharedCheck_1101_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1083_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1101_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1096_; uint8_t v___x_1097_; lean_object* v___x_1099_; 
v___x_1096_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1096_, 0, v_a_1081_);
lean_ctor_set(v___x_1096_, 1, v_a_1092_);
v___x_1097_ = lean_unbox(v_a_1070_);
lean_dec(v_a_1070_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*2, v___x_1097_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1096_);
v___x_1099_ = v___x_1094_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1096_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___boxed(lean_object* v___x_1102_, lean_object* v___x_1103_, lean_object* v___x_1104_, lean_object* v_d_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lasm_JS_Deno_instFromJSFsEvent___lam__0(v___x_1102_, v___x_1103_, v___x_1104_, v_d_1105_);
lean_dec(v_d_1105_);
return v_res_1106_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__0(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = l_Lasm_JS_instFromJSString;
v___x_1108_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1107_);
return v___x_1108_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__1(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventFlag));
v___x_1110_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1109_);
return v___x_1110_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__2(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___f_1114_; 
v___x_1111_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__1, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__1);
v___x_1112_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__0, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__0);
v___x_1113_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind));
v___f_1114_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1114_, 0, v___x_1113_);
lean_closure_set(v___f_1114_, 1, v___x_1112_);
lean_closure_set(v___f_1114_, 2, v___x_1111_);
return v___f_1114_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__4(void){
_start:
{
uint8_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___f_1118_; lean_object* v___x_1119_; 
v___x_1116_ = 0;
v___x_1117_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___closed__3));
v___f_1118_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__2, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__2);
v___x_1119_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1119_, 0, v___f_1118_);
lean_ctor_set(v___x_1119_, 1, v___x_1117_);
lean_ctor_set_uint8(v___x_1119_, sizeof(void*)*2, v___x_1116_);
return v___x_1119_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent(void){
_start:
{
lean_object* v___x_1120_; 
v___x_1120_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__4, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__4_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__4);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0(lean_object* v___f_1126_, lean_object* v___f_1127_, lean_object* v_d_1128_){
_start:
{
lean_object* v_read_1129_; lean_object* v_write_1130_; lean_object* v_append_1131_; lean_object* v_truncate_1132_; lean_object* v_create_1133_; lean_object* v_createNew_1134_; lean_object* v_mode_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v_read_1129_ = lean_ctor_get(v_d_1128_, 0);
lean_inc(v_read_1129_);
v_write_1130_ = lean_ctor_get(v_d_1128_, 1);
lean_inc(v_write_1130_);
v_append_1131_ = lean_ctor_get(v_d_1128_, 2);
lean_inc(v_append_1131_);
v_truncate_1132_ = lean_ctor_get(v_d_1128_, 3);
lean_inc(v_truncate_1132_);
v_create_1133_ = lean_ctor_get(v_d_1128_, 4);
lean_inc(v_create_1133_);
v_createNew_1134_ = lean_ctor_get(v_d_1128_, 5);
lean_inc(v_createNew_1134_);
v_mode_1135_ = lean_ctor_get(v_d_1128_, 6);
lean_inc(v_mode_1135_);
lean_dec_ref(v_d_1128_);
v___x_1136_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1126_, 5);
v___x_1137_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1126_, v_read_1129_);
v___x_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1136_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1));
v___x_1140_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1126_, v_write_1130_);
v___x_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1139_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_1143_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1126_, v_append_1131_);
v___x_1144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_1146_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1126_, v_truncate_1132_);
v___x_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_1149_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1126_, v_create_1133_);
v___x_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1148_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_1152_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1126_, v_createNew_1134_);
v___x_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1151_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1155_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1127_, v_mode_1135_);
v___x_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1154_);
lean_ctor_set(v___x_1156_, 1, v___x_1155_);
v___x_1157_ = lean_unsigned_to_nat(7u);
v___x_1158_ = lean_mk_empty_array_with_capacity(v___x_1157_);
v___x_1159_ = lean_array_push(v___x_1158_, v___x_1138_);
v___x_1160_ = lean_array_push(v___x_1159_, v___x_1141_);
v___x_1161_ = lean_array_push(v___x_1160_, v___x_1144_);
v___x_1162_ = lean_array_push(v___x_1161_, v___x_1147_);
v___x_1163_ = lean_array_push(v___x_1162_, v___x_1150_);
v___x_1164_ = lean_array_push(v___x_1163_, v___x_1153_);
v___x_1165_ = lean_array_push(v___x_1164_, v___x_1156_);
v___x_1166_ = l_Lasm_JS_Web_Support_fields(v___x_1165_);
lean_dec_ref(v___x_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0(lean_object* v___f_1174_, lean_object* v___f_1175_, lean_object* v_d_1176_){
_start:
{
lean_object* v_recursive_1177_; lean_object* v_mode_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1195_; 
v_recursive_1177_ = lean_ctor_get(v_d_1176_, 0);
v_mode_1178_ = lean_ctor_get(v_d_1176_, 1);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_d_1176_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1180_ = v_d_1176_;
v_isShared_1181_ = v_isSharedCheck_1195_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_mode_1178_);
lean_inc(v_recursive_1177_);
lean_dec(v_d_1176_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1195_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1185_; 
v___x_1182_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1183_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1174_, v_recursive_1177_);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 1, v___x_1183_);
lean_ctor_set(v___x_1180_, 0, v___x_1182_);
v___x_1185_ = v___x_1180_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1194_, 1, v___x_1183_);
v___x_1185_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1186_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1187_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1175_, v_mode_1178_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1186_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = lean_unsigned_to_nat(2u);
v___x_1190_ = lean_mk_empty_array_with_capacity(v___x_1189_);
v___x_1191_ = lean_array_push(v___x_1190_, v___x_1185_);
v___x_1192_ = lean_array_push(v___x_1191_, v___x_1188_);
v___x_1193_ = l_Lasm_JS_Web_Support_fields(v___x_1192_);
lean_dec_ref(v___x_1192_);
return v___x_1193_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0(lean_object* v___f_1202_, lean_object* v_d_1203_){
_start:
{
lean_object* v_dir_1204_; lean_object* v_prefix_1205_; lean_object* v_suffix_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v_dir_1204_ = lean_ctor_get(v_d_1203_, 0);
lean_inc(v_dir_1204_);
v_prefix_1205_ = lean_ctor_get(v_d_1203_, 1);
lean_inc(v_prefix_1205_);
v_suffix_1206_ = lean_ctor_get(v_d_1203_, 2);
lean_inc(v_suffix_1206_);
lean_dec_ref(v_d_1203_);
v___x_1207_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
lean_inc_ref_n(v___f_1202_, 2);
v___x_1208_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1202_, v_dir_1204_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1207_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0));
v___x_1211_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1202_, v_prefix_1205_);
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1));
v___x_1214_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1202_, v_suffix_1206_);
v___x_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1213_);
lean_ctor_set(v___x_1215_, 1, v___x_1214_);
v___x_1216_ = lean_unsigned_to_nat(3u);
v___x_1217_ = lean_mk_empty_array_with_capacity(v___x_1216_);
v___x_1218_ = lean_array_push(v___x_1217_, v___x_1209_);
v___x_1219_ = lean_array_push(v___x_1218_, v___x_1212_);
v___x_1220_ = lean_array_push(v___x_1219_, v___x_1215_);
v___x_1221_ = l_Lasm_JS_Web_Support_fields(v___x_1220_);
lean_dec_ref(v___x_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSRemoveOptions___lam__0(lean_object* v___f_1226_, lean_object* v_d_1227_){
_start:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1228_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1229_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1226_, v_d_1227_);
v___x_1230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1228_);
lean_ctor_set(v___x_1230_, 1, v___x_1229_);
v___x_1231_ = lean_unsigned_to_nat(1u);
v___x_1232_ = lean_mk_empty_array_with_capacity(v___x_1231_);
v___x_1233_ = lean_array_push(v___x_1232_, v___x_1230_);
v___x_1234_ = l_Lasm_JS_Web_Support_fields(v___x_1233_);
lean_dec_ref(v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0(lean_object* v___f_1239_, lean_object* v_d_1240_){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1241_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_1242_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1239_, v_d_1240_);
v___x_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = lean_unsigned_to_nat(1u);
v___x_1245_ = lean_mk_empty_array_with_capacity(v___x_1244_);
v___x_1246_ = lean_array_push(v___x_1245_, v___x_1243_);
v___x_1247_ = l_Lasm_JS_Web_Support_fields(v___x_1246_);
lean_dec_ref(v___x_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx(lean_object* v_x_1252_){
_start:
{
if (lean_obj_tag(v_x_1252_) == 0)
{
lean_object* v___x_1253_; 
v___x_1253_ = lean_unsigned_to_nat(0u);
return v___x_1253_;
}
else
{
lean_object* v___x_1254_; 
v___x_1254_ = lean_unsigned_to_nat(1u);
return v___x_1254_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx___boxed(lean_object* v_x_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx(v_x_1255_);
lean_dec_ref(v_x_1255_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(lean_object* v_t_1257_, lean_object* v_k_1258_){
_start:
{
if (lean_obj_tag(v_t_1257_) == 0)
{
lean_object* v_value_1259_; lean_object* v___x_1260_; 
v_value_1259_ = lean_ctor_get(v_t_1257_, 0);
lean_inc_ref(v_value_1259_);
lean_dec_ref_known(v_t_1257_, 1);
v___x_1260_ = lean_apply_1(v_k_1258_, v_value_1259_);
return v___x_1260_;
}
else
{
lean_object* v_value_1261_; lean_object* v___x_1262_; 
v_value_1261_ = lean_ctor_get(v_t_1257_, 0);
lean_inc(v_value_1261_);
lean_dec_ref_known(v_t_1257_, 1);
v___x_1262_ = lean_apply_1(v_k_1258_, v_value_1261_);
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim(lean_object* v_motive_1263_, lean_object* v_ctorIdx_1264_, lean_object* v_t_1265_, lean_object* v_h_1266_, lean_object* v_k_1267_){
_start:
{
lean_object* v___x_1268_; 
v___x_1268_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1265_, v_k_1267_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___boxed(lean_object* v_motive_1269_, lean_object* v_ctorIdx_1270_, lean_object* v_t_1271_, lean_object* v_h_1272_, lean_object* v_k_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim(v_motive_1269_, v_ctorIdx_1270_, v_t_1271_, v_h_1272_, v_k_1273_);
lean_dec(v_ctorIdx_1270_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_uint8Array_elim___redArg(lean_object* v_t_1275_, lean_object* v_uint8Array_1276_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1275_, v_uint8Array_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_uint8Array_elim(lean_object* v_motive_1278_, lean_object* v_t_1279_, lean_object* v_h_1280_, lean_object* v_uint8Array_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1279_, v_uint8Array_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1283_, lean_object* v_readableStream_1284_){
_start:
{
lean_object* v___x_1285_; 
v___x_1285_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1283_, v_readableStream_1284_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_readableStream_elim(lean_object* v_motive_1286_, lean_object* v_t_1287_, lean_object* v_h_1288_, lean_object* v_readableStream_1289_){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1287_, v_readableStream_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___lam__0(lean_object* v_x_1291_){
_start:
{
if (lean_obj_tag(v_x_1291_) == 0)
{
lean_object* v_value_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
v_value_1292_ = lean_ctor_get(v_x_1291_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_x_1291_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1294_ = v_x_1291_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_value_1292_);
lean_dec(v_x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
lean_ctor_set_tag(v___x_1294_, 6);
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_value_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
else
{
lean_object* v_value_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v_value_1300_ = lean_ctor_get(v_x_1291_, 0);
lean_inc(v_value_1300_);
lean_dec_ref_known(v_x_1291_, 1);
v___x_1301_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_1302_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1302_, 0, v_value_1300_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
return v___x_1302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___lam__0(lean_object* v_value_1305_){
_start:
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1306_, 0, v_value_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___lam__0(lean_object* v_value_1309_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1310_, 0, v_value_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSWriteFileOptions___lam__0(lean_object* v___f_1313_, lean_object* v___f_1314_, lean_object* v___f_1315_, lean_object* v_d_1316_){
_start:
{
lean_object* v_append_1317_; lean_object* v_create_1318_; lean_object* v_createNew_1319_; lean_object* v_mode_1320_; lean_object* v_signal_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v_append_1317_ = lean_ctor_get(v_d_1316_, 0);
lean_inc(v_append_1317_);
v_create_1318_ = lean_ctor_get(v_d_1316_, 1);
lean_inc(v_create_1318_);
v_createNew_1319_ = lean_ctor_get(v_d_1316_, 2);
lean_inc(v_createNew_1319_);
v_mode_1320_ = lean_ctor_get(v_d_1316_, 3);
lean_inc(v_mode_1320_);
v_signal_1321_ = lean_ctor_get(v_d_1316_, 4);
lean_inc(v_signal_1321_);
lean_dec_ref(v_d_1316_);
v___x_1322_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_1313_, 2);
v___x_1323_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1313_, v_append_1317_);
v___x_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1322_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_1326_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1313_, v_create_1318_);
v___x_1327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1325_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
v___x_1328_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_1329_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1313_, v_createNew_1319_);
v___x_1330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1332_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1314_, v_mode_1320_);
v___x_1333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1331_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_1335_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1315_, v_signal_1321_);
v___x_1336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1334_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = lean_unsigned_to_nat(5u);
v___x_1338_ = lean_mk_empty_array_with_capacity(v___x_1337_);
v___x_1339_ = lean_array_push(v___x_1338_, v___x_1324_);
v___x_1340_ = lean_array_push(v___x_1339_, v___x_1327_);
v___x_1341_ = lean_array_push(v___x_1340_, v___x_1330_);
v___x_1342_ = lean_array_push(v___x_1341_, v___x_1333_);
v___x_1343_ = lean_array_push(v___x_1342_, v___x_1336_);
v___x_1344_ = l_Lasm_JS_Web_Support_fields(v___x_1343_);
lean_dec_ref(v___x_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx(lean_object* v_x_1350_){
_start:
{
if (lean_obj_tag(v_x_1350_) == 0)
{
lean_object* v___x_1351_; 
v___x_1351_ = lean_unsigned_to_nat(0u);
return v___x_1351_;
}
else
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_unsigned_to_nat(1u);
return v___x_1352_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx___boxed(lean_object* v_x_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx(v_x_1353_);
lean_dec_ref(v_x_1353_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(lean_object* v_t_1355_, lean_object* v_k_1356_){
_start:
{
if (lean_obj_tag(v_t_1355_) == 0)
{
lean_object* v_value_1357_; lean_object* v___x_1358_; 
v_value_1357_ = lean_ctor_get(v_t_1355_, 0);
lean_inc_ref(v_value_1357_);
lean_dec_ref_known(v_t_1355_, 1);
v___x_1358_ = lean_apply_1(v_k_1356_, v_value_1357_);
return v___x_1358_;
}
else
{
lean_object* v_value_1359_; lean_object* v___x_1360_; 
v_value_1359_ = lean_ctor_get(v_t_1355_, 0);
lean_inc(v_value_1359_);
lean_dec_ref_known(v_t_1355_, 1);
v___x_1360_ = lean_apply_1(v_k_1356_, v_value_1359_);
return v___x_1360_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim(lean_object* v_motive_1361_, lean_object* v_ctorIdx_1362_, lean_object* v_t_1363_, lean_object* v_h_1364_, lean_object* v_k_1365_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1363_, v_k_1365_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___boxed(lean_object* v_motive_1367_, lean_object* v_ctorIdx_1368_, lean_object* v_t_1369_, lean_object* v_h_1370_, lean_object* v_k_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim(v_motive_1367_, v_ctorIdx_1368_, v_t_1369_, v_h_1370_, v_k_1371_);
lean_dec(v_ctorIdx_1368_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_domString_elim___redArg(lean_object* v_t_1373_, lean_object* v_domString_1374_){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1373_, v_domString_1374_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_domString_elim(lean_object* v_motive_1376_, lean_object* v_t_1377_, lean_object* v_h_1378_, lean_object* v_domString_1379_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1377_, v_domString_1379_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1381_, lean_object* v_readableStream_1382_){
_start:
{
lean_object* v___x_1383_; 
v___x_1383_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1381_, v_readableStream_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_readableStream_elim(lean_object* v_motive_1384_, lean_object* v_t_1385_, lean_object* v_h_1386_, lean_object* v_readableStream_1387_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1385_, v_readableStream_1387_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___lam__0(lean_object* v_x_1389_){
_start:
{
if (lean_obj_tag(v_x_1389_) == 0)
{
lean_object* v_value_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
v_value_1390_ = lean_ctor_get(v_x_1389_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v_x_1389_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v_x_1389_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_value_1390_);
lean_dec(v_x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
lean_ctor_set_tag(v___x_1392_, 4);
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_value_1390_);
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
lean_object* v_value_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v_value_1398_ = lean_ctor_get(v_x_1389_, 0);
lean_inc(v_value_1398_);
lean_dec_ref_known(v_x_1389_, 1);
v___x_1399_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_1400_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1400_, 0, v_value_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___lam__0(lean_object* v_value_1403_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_value_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___lam__0(lean_object* v_value_1407_){
_start:
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1408_, 0, v_value_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object* v_x_1411_){
_start:
{
if (lean_obj_tag(v_x_1411_) == 0)
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_unsigned_to_nat(0u);
return v___x_1412_;
}
else
{
lean_object* v___x_1413_; 
v___x_1413_ = lean_unsigned_to_nat(1u);
return v___x_1413_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object* v_x_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx(v_x_1414_);
lean_dec_ref(v_x_1414_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object* v_t_1416_, lean_object* v_k_1417_){
_start:
{
lean_object* v_value_1418_; lean_object* v___x_1419_; 
v_value_1418_ = lean_ctor_get(v_t_1416_, 0);
lean_inc_ref(v_value_1418_);
lean_dec_ref(v_t_1416_);
v___x_1419_ = lean_apply_1(v_k_1417_, v_value_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim(lean_object* v_motive_1420_, lean_object* v_ctorIdx_1421_, lean_object* v_t_1422_, lean_object* v_h_1423_, lean_object* v_k_1424_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1422_, v_k_1424_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object* v_motive_1426_, lean_object* v_ctorIdx_1427_, lean_object* v_t_1428_, lean_object* v_h_1429_, lean_object* v_k_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim(v_motive_1426_, v_ctorIdx_1427_, v_t_1428_, v_h_1429_, v_k_1430_);
lean_dec(v_ctorIdx_1427_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object* v_t_1432_, lean_object* v_domString_1433_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1432_, v_domString_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_domString_elim(lean_object* v_motive_1435_, lean_object* v_t_1436_, lean_object* v_h_1437_, lean_object* v_domString_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1436_, v_domString_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object* v_t_1440_, lean_object* v_sequence_1441_){
_start:
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1440_, v_sequence_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object* v_motive_1443_, lean_object* v_t_1444_, lean_object* v_h_1445_, lean_object* v_sequence_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1444_, v_sequence_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_x_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1449_, 0, v_x_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object* v___f_1469_, lean_object* v_x_1470_){
_start:
{
if (lean_obj_tag(v_x_1470_) == 0)
{
lean_object* v_value_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec_ref(v___f_1469_);
v_value_1471_ = lean_ctor_get(v_x_1470_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v_x_1470_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v_x_1470_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_value_1471_);
lean_dec(v_x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
lean_ctor_set_tag(v___x_1473_, 4);
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_value_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
else
{
lean_object* v_value_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1490_; 
v_value_1479_ = lean_ctor_get(v_x_1470_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_x_1470_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1481_ = v_x_1470_;
v_isShared_1482_ = v_isSharedCheck_1490_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_value_1479_);
lean_dec(v_x_1470_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1490_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1483_; size_t v_sz_1484_; size_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1483_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9));
v_sz_1484_ = lean_array_size(v_value_1479_);
v___x_1485_ = ((size_t)0ULL);
v___x_1486_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1483_, v___f_1469_, v_sz_1484_, v___x_1485_, v_value_1479_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set_tag(v___x_1481_, 7);
lean_ctor_set(v___x_1481_, 0, v___x_1486_);
v___x_1488_ = v___x_1481_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1495_){
_start:
{
lean_object* v___x_1496_; 
v___x_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1496_, 0, v_value_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1499_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1500_, 0, v_value_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0(lean_object* v___f_1504_, lean_object* v___x_1505_, lean_object* v_d_1506_){
_start:
{
lean_object* v_recursive_1507_; lean_object* v_ignore_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1525_; 
v_recursive_1507_ = lean_ctor_get(v_d_1506_, 0);
v_ignore_1508_ = lean_ctor_get(v_d_1506_, 1);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_d_1506_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1510_ = v_d_1506_;
v_isShared_1511_ = v_isSharedCheck_1525_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_ignore_1508_);
lean_inc(v_recursive_1507_);
lean_dec(v_d_1506_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1525_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1515_; 
v___x_1512_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1513_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1504_, v_recursive_1507_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 1, v___x_1513_);
lean_ctor_set(v___x_1510_, 0, v___x_1512_);
v___x_1515_ = v___x_1510_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1512_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v___x_1513_);
v___x_1515_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1516_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0));
v___x_1517_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1505_, v_ignore_1508_);
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1516_);
lean_ctor_set(v___x_1518_, 1, v___x_1517_);
v___x_1519_ = lean_unsigned_to_nat(2u);
v___x_1520_ = lean_mk_empty_array_with_capacity(v___x_1519_);
v___x_1521_ = lean_array_push(v___x_1520_, v___x_1515_);
v___x_1522_ = lean_array_push(v___x_1521_, v___x_1518_);
v___x_1523_ = l_Lasm_JS_Web_Support_fields(v___x_1522_);
lean_dec_ref(v___x_1522_);
return v___x_1523_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0(uint8_t v_d_1531_){
_start:
{
lean_object* v___x_1532_; lean_object* v___y_1534_; 
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0));
switch(v_d_1531_)
{
case 0:
{
lean_object* v___x_1540_; 
v___x_1540_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
v___y_1534_ = v___x_1540_;
goto v___jp_1533_;
}
case 1:
{
lean_object* v___x_1541_; 
v___x_1541_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
v___y_1534_ = v___x_1541_;
goto v___jp_1533_;
}
default: 
{
lean_object* v___x_1542_; 
v___x_1542_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
v___y_1534_ = v___x_1542_;
goto v___jp_1533_;
}
}
v___jp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
lean_inc(v___y_1534_);
v___x_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1532_);
lean_ctor_set(v___x_1535_, 1, v___y_1534_);
v___x_1536_ = lean_unsigned_to_nat(1u);
v___x_1537_ = lean_mk_empty_array_with_capacity(v___x_1536_);
v___x_1538_ = lean_array_push(v___x_1537_, v___x_1535_);
v___x_1539_ = l_Lasm_JS_Web_Support_fields(v___x_1538_);
lean_dec_ref(v___x_1538_);
return v___x_1539_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___boxed(lean_object* v_d_1543_){
_start:
{
uint8_t v_d_boxed_1544_; lean_object* v_res_1545_; 
v_d_boxed_1544_ = lean_unbox(v_d_1543_);
v_res_1545_ = l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0(v_d_boxed_1544_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_readable(lean_object* v_self_1549_){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_readable___closed__0));
v___x_1552_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1549_, v___x_1551_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1552_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1552_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
v_a_1561_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1552_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1552_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_readable___boxed(lean_object* v_self_1569_, lean_object* v_a_1570_){
_start:
{
lean_object* v_res_1571_; 
v_res_1571_ = l_Lasm_JS_Deno_FsFile_readable(v_self_1569_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_writable(lean_object* v_self_1573_){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_writable___closed__0));
v___x_1576_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1573_, v___x_1575_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v___x_1576_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1576_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1577_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
else
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
v_a_1585_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1576_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v___x_1576_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_writable___boxed(lean_object* v_self_1593_, lean_object* v_a_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lasm_JS_Deno_FsFile_writable(v_self_1593_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncate(lean_object* v_self_1596_, lean_object* v_len_1597_){
_start:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1599_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_1600_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_1597_);
v___x_1601_ = lean_unsigned_to_nat(1u);
v___x_1602_ = lean_mk_empty_array_with_capacity(v___x_1601_);
v___x_1603_ = lean_array_push(v___x_1602_, v___x_1600_);
v___x_1604_ = l_Lasm_JS_Web_Support_args(v___x_1603_);
v___x_1605_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1596_, v___x_1599_, v___x_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncate___boxed(lean_object* v_self_1606_, lean_object* v_len_1607_, lean_object* v_a_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lasm_JS_Deno_FsFile_truncate(v_self_1606_, v_len_1607_);
lean_dec(v_len_1607_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncateSync(lean_object* v_self_1611_, lean_object* v_len_1612_){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1614_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_truncateSync___closed__0));
v___x_1615_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_1612_);
v___x_1616_ = lean_unsigned_to_nat(1u);
v___x_1617_ = lean_mk_empty_array_with_capacity(v___x_1616_);
v___x_1618_ = lean_array_push(v___x_1617_, v___x_1615_);
v___x_1619_ = l_Lasm_JS_Web_Support_args(v___x_1618_);
v___x_1620_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1611_, v___x_1614_, v___x_1619_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncateSync___boxed(lean_object* v_self_1621_, lean_object* v_len_1622_, lean_object* v_a_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l_Lasm_JS_Deno_FsFile_truncateSync(v_self_1621_, v_len_1622_);
lean_dec(v_len_1622_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2(lean_object* v___f_1625_, lean_object* v_x_1626_){
_start:
{
if (lean_obj_tag(v_x_1626_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1636_; 
lean_dec_ref(v___f_1625_);
v_a_1628_ = lean_ctor_get(v_x_1626_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_x_1626_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1630_ = v_x_1626_;
v_isShared_1631_ = v_isSharedCheck_1636_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v_x_1626_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1636_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
lean_object* v___x_1634_; 
v___x_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
return v___x_1634_;
}
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1638_; 
v_a_1637_ = lean_ctor_get(v_x_1626_, 0);
lean_inc(v_a_1637_);
lean_dec_ref_known(v_x_1626_, 1);
v___x_1638_ = lean_apply_2(v___f_1625_, v_a_1637_, lean_box(0));
return v___x_1638_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1639_, lean_object* v_x_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2(v___f_1639_, v_x_1640_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8(lean_object* v___f_1643_, lean_object* v_x_1644_){
_start:
{
if (lean_obj_tag(v_x_1644_) == 0)
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1654_; 
lean_dec_ref(v___f_1643_);
v_a_1646_ = lean_ctor_get(v_x_1644_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_x_1644_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1648_ = v_x_1644_;
v_isShared_1649_ = v_isSharedCheck_1654_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v_x_1644_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1654_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1651_);
return v___x_1652_;
}
}
}
else
{
lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1666_; 
v_isSharedCheck_1666_ = !lean_is_exclusive(v_x_1644_);
if (v_isSharedCheck_1666_ == 0)
{
lean_object* v_unused_1667_; 
v_unused_1667_ = lean_ctor_get(v_x_1644_, 0);
lean_dec(v_unused_1667_);
v___x_1656_ = v_x_1644_;
v_isShared_1657_ = v_isSharedCheck_1666_;
goto v_resetjp_1655_;
}
else
{
lean_dec(v_x_1644_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1666_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; uint8_t v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1662_; 
v___x_1658_ = lean_unsigned_to_nat(0u);
v___x_1659_ = 0;
v___x_1660_ = lean_io_promise_new();
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v___x_1660_);
v___x_1662_ = v___x_1656_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
v___x_1664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1658_, v___x_1659_, v___x_1663_, v___f_1643_);
return v___x_1664_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8___boxed(lean_object* v___f_1668_, lean_object* v_x_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8(v___f_1668_, v_x_1669_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1(lean_object* v___f_1672_, lean_object* v_bytes_1673_){
_start:
{
lean_object* v___x_1675_; uint8_t v___x_1676_; lean_object* v_val_1678_; lean_object* v___x_1681_; 
v___x_1675_ = lean_unsigned_to_nat(0u);
v___x_1676_ = 0;
v___x_1681_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1673_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1689_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1684_ = v___x_1681_;
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1681_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1687_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set_tag(v___x_1684_, 1);
v___x_1687_ = v___x_1684_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_a_1682_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
v_val_1678_ = v___x_1687_;
goto v___jp_1677_;
}
}
}
else
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
v_a_1690_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1681_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1681_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set_tag(v___x_1692_, 0);
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
v_val_1678_ = v___x_1695_;
goto v___jp_1677_;
}
}
}
v___jp_1677_:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_val_1678_);
v___x_1680_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1675_, v___x_1676_, v___x_1679_, v___f_1672_);
return v___x_1680_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1698_, lean_object* v_bytes_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1(v___f_1698_, v_bytes_1699_);
lean_dec_ref(v_bytes_1699_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_1702_, lean_object* v_x_1703_){
_start:
{
if (lean_obj_tag(v_x_1703_) == 0)
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1716_; 
v_a_1705_ = lean_ctor_get(v_x_1703_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_x_1703_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1707_ = v_x_1703_;
v_isShared_1708_ = v_isSharedCheck_1716_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v_x_1703_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1716_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1713_; 
v___x_1709_ = lean_io_error_to_string(v_a_1705_);
v___x_1710_ = lean_string_append(v_failurePrefix_1702_, v___x_1709_);
lean_dec_ref(v___x_1709_);
v___x_1711_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1710_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 0, v___x_1711_);
v___x_1713_ = v___x_1707_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1711_);
v___x_1713_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
return v___x_1714_;
}
}
}
else
{
lean_object* v___x_1717_; 
lean_dec_ref(v_failurePrefix_1702_);
v___x_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1717_, 0, v_x_1703_);
return v___x_1717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1718_, lean_object* v_x_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4(v_failurePrefix_1718_, v_x_1719_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0(lean_object* v_context_1722_, lean_object* v_x_1723_){
_start:
{
lean_object* v_val_1726_; 
if (lean_obj_tag(v_x_1723_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1736_; 
v_a_1728_ = lean_ctor_get(v_x_1723_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_x_1723_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1730_ = v_x_1723_;
v_isShared_1731_ = v_isSharedCheck_1736_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v_x_1723_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1736_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1728_);
v___x_1733_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1734_; 
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
return v___x_1734_;
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1750_; 
v_a_1737_ = lean_ctor_get(v_x_1723_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v_x_1723_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1739_ = v_x_1723_;
v_isShared_1740_ = v_isSharedCheck_1750_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v_x_1723_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1750_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1741_; 
v___x_1741_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_1722_, v_a_1737_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1744_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1741_, 1);
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 0, v_a_1742_);
v___x_1744_ = v___x_1739_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
v_val_1726_ = v___x_1744_;
goto v___jp_1725_;
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; 
v_a_1746_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1741_, 1);
if (v_isShared_1740_ == 0)
{
lean_ctor_set_tag(v___x_1739_, 0);
lean_ctor_set(v___x_1739_, 0, v_a_1746_);
v___x_1748_ = v___x_1739_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
v_val_1726_ = v___x_1748_;
goto v___jp_1725_;
}
}
}
}
v___jp_1725_:
{
lean_object* v___x_1727_; 
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v_val_1726_);
return v___x_1727_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1751_, lean_object* v_x_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0(v_context_1751_, v_x_1752_);
lean_dec_ref(v_context_1751_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5(lean_object* v___x_1755_, uint8_t v___x_1756_, lean_object* v___f_1757_, lean_object* v_a_1758_, uint32_t v_op_1759_, uint64_t v_flags_1760_, lean_object* v_payload_1761_, lean_object* v_x_1762_){
_start:
{
lean_object* v_val_1765_; 
if (lean_obj_tag(v_x_1762_) == 0)
{
lean_object* v___x_1768_; 
lean_dec_ref(v___f_1757_);
lean_dec(v___x_1755_);
v___x_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1768_, 0, v_x_1762_);
return v___x_1768_;
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1783_; 
v_a_1769_ = lean_ctor_get(v_x_1762_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_x_1762_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1771_ = v_x_1762_;
v_isShared_1772_ = v_isSharedCheck_1783_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v_x_1762_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1783_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
uint32_t v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = 0;
v___x_1774_ = lasm_js_call_into(v_a_1758_, v_op_1759_, v___x_1773_, v_flags_1760_, v_a_1769_, v_payload_1761_);
lean_dec(v_a_1769_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1777_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_a_1775_);
lean_dec_ref_known(v___x_1774_, 1);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v_a_1775_);
v___x_1777_ = v___x_1771_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1775_);
v___x_1777_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
v_val_1765_ = v___x_1777_;
goto v___jp_1764_;
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; 
v_a_1779_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_a_1779_);
lean_dec_ref_known(v___x_1774_, 1);
if (v_isShared_1772_ == 0)
{
lean_ctor_set_tag(v___x_1771_, 0);
lean_ctor_set(v___x_1771_, 0, v_a_1779_);
v___x_1781_ = v___x_1771_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1779_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
v_val_1765_ = v___x_1781_;
goto v___jp_1764_;
}
}
}
}
v___jp_1764_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v_val_1765_);
v___x_1767_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1755_, v___x_1756_, v___x_1766_, v___f_1757_);
return v___x_1767_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed(lean_object* v___x_1784_, lean_object* v___x_1785_, lean_object* v___f_1786_, lean_object* v_a_1787_, lean_object* v_op_1788_, lean_object* v_flags_1789_, lean_object* v_payload_1790_, lean_object* v_x_1791_, lean_object* v___y_1792_){
_start:
{
uint8_t v___x_1014__boxed_1793_; uint32_t v_op_boxed_1794_; uint64_t v_flags_boxed_1795_; lean_object* v_res_1796_; 
v___x_1014__boxed_1793_ = lean_unbox(v___x_1785_);
v_op_boxed_1794_ = lean_unbox_uint32(v_op_1788_);
lean_dec(v_op_1788_);
v_flags_boxed_1795_ = lean_unbox_uint64(v_flags_1789_);
lean_dec_ref(v_flags_1789_);
v_res_1796_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5(v___x_1784_, v___x_1014__boxed_1793_, v___f_1786_, v_a_1787_, v_op_boxed_1794_, v_flags_boxed_1795_, v_payload_1790_, v_x_1791_);
lean_dec(v_payload_1790_);
lean_dec(v_a_1787_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7(lean_object* v___f_1797_, lean_object* v_a_1798_, uint32_t v_op_1799_, uint64_t v_flags_1800_, lean_object* v_payload_1801_, lean_object* v_x_1802_){
_start:
{
if (lean_obj_tag(v_x_1802_) == 0)
{
lean_object* v___x_1804_; 
lean_dec_ref(v___f_1797_);
v___x_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1804_, 0, v_x_1802_);
return v___x_1804_;
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1825_; 
v_a_1805_ = lean_ctor_get(v_x_1802_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v_x_1802_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1807_ = v_x_1802_;
v_isShared_1808_ = v_isSharedCheck_1825_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v_x_1802_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1825_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
uint32_t v___x_1809_; lean_object* v___x_1810_; uint8_t v___x_1811_; lean_object* v_val_1813_; lean_object* v___x_1816_; 
v___x_1809_ = 0;
v___x_1810_ = lean_unsigned_to_nat(0u);
v___x_1811_ = 0;
v___x_1816_ = lasm_js_call_into(v_a_1798_, v_op_1799_, v___x_1809_, v_flags_1800_, v_a_1805_, v_payload_1801_);
lean_dec(v_a_1805_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref_known(v___x_1816_, 1);
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 0, v_a_1817_);
v___x_1819_ = v___x_1807_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_a_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
v_val_1813_ = v___x_1819_;
goto v___jp_1812_;
}
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; 
v_a_1821_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v___x_1816_, 1);
if (v_isShared_1808_ == 0)
{
lean_ctor_set_tag(v___x_1807_, 0);
lean_ctor_set(v___x_1807_, 0, v_a_1821_);
v___x_1823_ = v___x_1807_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
v_val_1813_ = v___x_1823_;
goto v___jp_1812_;
}
}
v___jp_1812_:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1814_, 0, v_val_1813_);
v___x_1815_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1810_, v___x_1811_, v___x_1814_, v___f_1797_);
return v___x_1815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed(lean_object* v___f_1826_, lean_object* v_a_1827_, lean_object* v_op_1828_, lean_object* v_flags_1829_, lean_object* v_payload_1830_, lean_object* v_x_1831_, lean_object* v___y_1832_){
_start:
{
uint32_t v_op_boxed_1833_; uint64_t v_flags_boxed_1834_; lean_object* v_res_1835_; 
v_op_boxed_1833_ = lean_unbox_uint32(v_op_1828_);
lean_dec(v_op_1828_);
v_flags_boxed_1834_ = lean_unbox_uint64(v_flags_1829_);
lean_dec_ref(v_flags_1829_);
v_res_1835_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7(v___f_1826_, v_a_1827_, v_op_boxed_1833_, v_flags_boxed_1834_, v_payload_1830_, v_x_1831_);
lean_dec(v_payload_1830_);
lean_dec(v_a_1827_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3(lean_object* v_a_1836_, lean_object* v_x_1837_){
_start:
{
if (lean_obj_tag(v_x_1837_) == 0)
{
lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1847_; 
v_a_1839_ = lean_ctor_get(v_x_1837_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v_x_1837_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1841_ = v_x_1837_;
v_isShared_1842_ = v_isSharedCheck_1847_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v_x_1837_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1847_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1839_);
v___x_1844_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1845_; 
v___x_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
return v___x_1845_;
}
}
}
else
{
lean_object* v___x_1848_; 
lean_dec_ref_known(v_x_1837_, 1);
v___x_1848_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1836_);
return v___x_1848_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed(lean_object* v_a_1849_, lean_object* v_x_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3(v_a_1849_, v_x_1850_);
lean_dec(v_a_1849_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_1853_, uint32_t v_op_1854_, uint64_t v_flags_1855_, lean_object* v_payload_1856_, lean_object* v___f_1857_, lean_object* v___f_1858_, lean_object* v___f_1859_, lean_object* v_x_1860_){
_start:
{
if (lean_obj_tag(v_x_1860_) == 0)
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1870_; 
lean_dec_ref(v___f_1859_);
lean_dec_ref(v___f_1858_);
lean_dec_ref(v___f_1857_);
lean_dec(v_payload_1856_);
v_a_1862_ = lean_ctor_get(v_x_1860_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v_x_1860_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1864_ = v_x_1860_;
v_isShared_1865_ = v_isSharedCheck_1870_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v_x_1860_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1870_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
return v___x_1868_;
}
}
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1917_; 
v_a_1871_ = lean_ctor_get(v_x_1860_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v_x_1860_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1873_ = v_x_1860_;
v_isShared_1874_ = v_isSharedCheck_1917_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v_x_1860_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1917_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; uint8_t v___x_1877_; 
v___x_1875_ = lean_string_utf8_byte_size(v_failurePrefix_1853_);
v___x_1876_ = lean_unsigned_to_nat(0u);
v___x_1877_ = lean_nat_dec_eq(v___x_1875_, v___x_1876_);
if (v___x_1877_ == 0)
{
lean_object* v___f_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___f_1882_; lean_object* v_val_1884_; lean_object* v___x_1889_; 
lean_dec_ref(v___f_1859_);
lean_inc(v_a_1871_);
v___f_1878_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1878_, 0, v_a_1871_);
v___x_1879_ = lean_box(v___x_1877_);
v___x_1880_ = lean_box_uint32(v_op_1854_);
v___x_1881_ = lean_box_uint64(v_flags_1855_);
lean_inc(v_payload_1856_);
v___f_1882_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1882_, 0, v___x_1876_);
lean_closure_set(v___f_1882_, 1, v___x_1879_);
lean_closure_set(v___f_1882_, 2, v___f_1878_);
lean_closure_set(v___f_1882_, 3, v_a_1871_);
lean_closure_set(v___f_1882_, 4, v___x_1880_);
lean_closure_set(v___f_1882_, 5, v___x_1881_);
lean_closure_set(v___f_1882_, 6, v_payload_1856_);
v___x_1889_ = l_Lasm_JS_Wire_encodeIO(v_payload_1856_);
lean_dec(v_payload_1856_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v___x_1892_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_a_1890_);
lean_dec_ref_known(v___x_1889_, 1);
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 0, v_a_1890_);
v___x_1892_ = v___x_1873_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
v_val_1884_ = v___x_1892_;
goto v___jp_1883_;
}
}
else
{
lean_object* v_a_1894_; lean_object* v___x_1896_; 
v_a_1894_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_a_1894_);
lean_dec_ref_known(v___x_1889_, 1);
if (v_isShared_1874_ == 0)
{
lean_ctor_set_tag(v___x_1873_, 0);
lean_ctor_set(v___x_1873_, 0, v_a_1894_);
v___x_1896_ = v___x_1873_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1894_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
v_val_1884_ = v___x_1896_;
goto v___jp_1883_;
}
}
v___jp_1883_:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1885_, 0, v_val_1884_);
v___x_1886_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1876_, v___x_1877_, v___x_1885_, v___f_1882_);
v___x_1887_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1876_, v___x_1877_, v___x_1886_, v___f_1857_);
v___x_1888_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1876_, v___x_1877_, v___x_1887_, v___f_1858_);
return v___x_1888_;
}
}
else
{
lean_object* v___f_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___f_1901_; uint8_t v___x_1902_; lean_object* v_val_1904_; lean_object* v___x_1908_; 
lean_dec_ref(v___f_1858_);
lean_dec_ref(v___f_1857_);
lean_inc(v_a_1871_);
v___f_1898_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1898_, 0, v_a_1871_);
v___x_1899_ = lean_box_uint32(v_op_1854_);
v___x_1900_ = lean_box_uint64(v_flags_1855_);
lean_inc(v_payload_1856_);
v___f_1901_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1901_, 0, v___f_1898_);
lean_closure_set(v___f_1901_, 1, v_a_1871_);
lean_closure_set(v___f_1901_, 2, v___x_1899_);
lean_closure_set(v___f_1901_, 3, v___x_1900_);
lean_closure_set(v___f_1901_, 4, v_payload_1856_);
v___x_1902_ = 0;
v___x_1908_ = l_Lasm_JS_Wire_encodeIO(v_payload_1856_);
lean_dec(v_payload_1856_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1911_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 0, v_a_1909_);
v___x_1911_ = v___x_1873_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
v_val_1904_ = v___x_1911_;
goto v___jp_1903_;
}
}
else
{
lean_object* v_a_1913_; lean_object* v___x_1915_; 
v_a_1913_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1908_, 1);
if (v_isShared_1874_ == 0)
{
lean_ctor_set_tag(v___x_1873_, 0);
lean_ctor_set(v___x_1873_, 0, v_a_1913_);
v___x_1915_ = v___x_1873_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1913_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
v_val_1904_ = v___x_1915_;
goto v___jp_1903_;
}
}
v___jp_1903_:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1905_, 0, v_val_1904_);
v___x_1906_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1876_, v___x_1902_, v___x_1905_, v___f_1901_);
v___x_1907_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1876_, v___x_1902_, v___x_1906_, v___f_1859_);
return v___x_1907_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_1918_, lean_object* v_op_1919_, lean_object* v_flags_1920_, lean_object* v_payload_1921_, lean_object* v___f_1922_, lean_object* v___f_1923_, lean_object* v___f_1924_, lean_object* v_x_1925_, lean_object* v___y_1926_){
_start:
{
uint32_t v_op_boxed_1927_; uint64_t v_flags_boxed_1928_; lean_object* v_res_1929_; 
v_op_boxed_1927_ = lean_unbox_uint32(v_op_1919_);
lean_dec(v_op_1919_);
v_flags_boxed_1928_ = lean_unbox_uint64(v_flags_1920_);
lean_dec_ref(v_flags_1920_);
v_res_1929_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6(v_failurePrefix_1918_, v_op_boxed_1927_, v_flags_boxed_1928_, v_payload_1921_, v___f_1922_, v___f_1923_, v___f_1924_, v_x_1925_);
lean_dec_ref(v_failurePrefix_1918_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(lean_object* v_context_1930_, uint32_t v_op_1931_, uint64_t v_flags_1932_, lean_object* v_payload_1933_, lean_object* v_failurePrefix_1934_){
_start:
{
lean_object* v___f_1936_; lean_object* v___f_1937_; lean_object* v___f_1938_; lean_object* v___f_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___f_1942_; lean_object* v___f_1943_; lean_object* v___x_1944_; uint8_t v___x_1945_; lean_object* v_val_1947_; lean_object* v___x_1950_; 
v___f_1936_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1936_, 0, v_context_1930_);
v___f_1937_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1937_, 0, v___f_1936_);
v___f_1938_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1938_, 0, v___f_1937_);
lean_inc_ref(v_failurePrefix_1934_);
v___f_1939_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1939_, 0, v_failurePrefix_1934_);
v___x_1940_ = lean_box_uint32(v_op_1931_);
v___x_1941_ = lean_box_uint64(v_flags_1932_);
lean_inc_ref(v___f_1938_);
v___f_1942_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1942_, 0, v_failurePrefix_1934_);
lean_closure_set(v___f_1942_, 1, v___x_1940_);
lean_closure_set(v___f_1942_, 2, v___x_1941_);
lean_closure_set(v___f_1942_, 3, v_payload_1933_);
lean_closure_set(v___f_1942_, 4, v___f_1939_);
lean_closure_set(v___f_1942_, 5, v___f_1938_);
lean_closure_set(v___f_1942_, 6, v___f_1938_);
v___f_1943_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1943_, 0, v___f_1942_);
v___x_1944_ = lean_unsigned_to_nat(0u);
v___x_1945_ = 0;
v___x_1950_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
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
lean_ctor_set_tag(v___x_1953_, 1);
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
v_val_1947_ = v___x_1956_;
goto v___jp_1946_;
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
lean_ctor_set_tag(v___x_1961_, 0);
v___x_1964_ = v___x_1961_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v_a_1959_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
v_val_1947_ = v___x_1964_;
goto v___jp_1946_;
}
}
}
v___jp_1946_:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1948_, 0, v_val_1947_);
v___x_1949_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1944_, v___x_1945_, v___x_1948_, v___f_1943_);
return v___x_1949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___boxed(lean_object* v_context_1967_, lean_object* v_op_1968_, lean_object* v_flags_1969_, lean_object* v_payload_1970_, lean_object* v_failurePrefix_1971_, lean_object* v_a_1972_){
_start:
{
uint32_t v_op_boxed_1973_; uint64_t v_flags_boxed_1974_; lean_object* v_res_1975_; 
v_op_boxed_1973_ = lean_unbox_uint32(v_op_1968_);
lean_dec(v_op_1968_);
v_flags_boxed_1974_ = lean_unbox_uint64(v_flags_1969_);
lean_dec_ref(v_flags_1969_);
v_res_1975_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(v_context_1967_, v_op_boxed_1973_, v_flags_boxed_1974_, v_payload_1970_, v_failurePrefix_1971_);
return v_res_1975_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1976_; uint64_t v___x_1977_; 
v___x_1976_ = 0;
v___x_1977_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(uint8_t v_await_1978_, uint64_t v_extra_1979_){
_start:
{
uint64_t v___x_1980_; uint64_t v___y_1982_; 
v___x_1980_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_1978_ == 0)
{
uint64_t v___x_1985_; 
v___x_1985_ = 0ULL;
v___y_1982_ = v___x_1985_;
goto v___jp_1981_;
}
else
{
uint64_t v___x_1986_; 
v___x_1986_ = 2ULL;
v___y_1982_ = v___x_1986_;
goto v___jp_1981_;
}
v___jp_1981_:
{
uint64_t v___x_1983_; uint64_t v___x_1984_; 
v___x_1983_ = lean_uint64_lor(v___x_1980_, v___y_1982_);
v___x_1984_ = lean_uint64_lor(v___x_1983_, v_extra_1979_);
return v___x_1984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___boxed(lean_object* v_await_1987_, lean_object* v_extra_1988_){
_start:
{
uint8_t v_await_boxed_1989_; uint64_t v_extra_boxed_1990_; uint64_t v_res_1991_; lean_object* v_r_1992_; 
v_await_boxed_1989_ = lean_unbox(v_await_1987_);
v_extra_boxed_1990_ = lean_unbox_uint64(v_extra_1988_);
lean_dec_ref(v_extra_1988_);
v_res_1991_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(v_await_boxed_1989_, v_extra_boxed_1990_);
v_r_1992_ = lean_box_uint64(v_res_1991_);
return v_r_1992_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1(void){
_start:
{
uint64_t v___x_1994_; uint8_t v___x_1995_; uint64_t v___x_1996_; 
v___x_1994_ = 8ULL;
v___x_1995_ = 0;
v___x_1996_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(v___x_1995_, v___x_1994_);
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(lean_object* v_o_1997_, lean_object* v_name_1998_, lean_object* v_args_1999_){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; uint32_t v___x_2006_; uint64_t v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2001_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2002_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2002_, 0, v_o_1997_);
lean_ctor_set(v___x_2002_, 1, v___x_2001_);
lean_inc_ref(v_name_1998_);
v___x_2003_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2003_, 0, v_name_1998_);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2005_ = lean_string_append(v___x_2004_, v_name_1998_);
lean_dec_ref(v_name_1998_);
v___x_2006_ = 205;
v___x_2007_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1);
v___x_2008_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2008_, 0, v_args_1999_);
v___x_2009_ = lean_unsigned_to_nat(3u);
v___x_2010_ = lean_mk_empty_array_with_capacity(v___x_2009_);
v___x_2011_ = lean_array_push(v___x_2010_, v___x_2002_);
v___x_2012_ = lean_array_push(v___x_2011_, v___x_2003_);
v___x_2013_ = lean_array_push(v___x_2012_, v___x_2008_);
v___x_2014_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2013_);
v___x_2015_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(v___x_2005_, v___x_2006_, v___x_2007_, v___x_2014_, v___x_2001_);
return v___x_2015_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___boxed(lean_object* v_o_2016_, lean_object* v_name_2017_, lean_object* v_args_2018_, lean_object* v___y_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(v_o_2016_, v_name_2017_, v_args_2018_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seek(lean_object* v_self_2022_, lean_object* v_offset_2023_, lean_object* v_whence_2024_){
_start:
{
lean_object* v___x_2026_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___y_2037_; 
v___x_2026_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_seek___closed__0));
if (lean_obj_tag(v_offset_2023_) == 0)
{
double v_value_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
v_value_2045_ = lean_ctor_get_float(v_offset_2023_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v_offset_2023_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v_offset_2023_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_dec(v_offset_2023_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
lean_ctor_set_tag(v___x_2047_, 3);
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2051_, 0, v_value_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
v___y_2037_ = v___x_2050_;
goto v___jp_2036_;
}
}
}
else
{
lean_object* v_value_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2060_; 
v_value_2053_ = lean_ctor_get(v_offset_2023_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_offset_2023_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2055_ = v_offset_2023_;
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_value_2053_);
lean_dec(v_offset_2023_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
lean_ctor_set_tag(v___x_2055_, 5);
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_value_2053_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
v___y_2037_ = v___x_2058_;
goto v___jp_2036_;
}
}
}
v___jp_2027_:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2030_ = lean_unsigned_to_nat(2u);
v___x_2031_ = lean_mk_empty_array_with_capacity(v___x_2030_);
v___x_2032_ = lean_array_push(v___x_2031_, v___y_2028_);
v___x_2033_ = lean_array_push(v___x_2032_, v___y_2029_);
v___x_2034_ = l_Lasm_JS_Web_Support_args(v___x_2033_);
v___x_2035_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(v_self_2022_, v___x_2026_, v___x_2034_);
return v___x_2035_;
}
v___jp_2036_:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; uint8_t v___x_2041_; 
v___x_2038_ = lean_nat_to_int(v_whence_2024_);
v___x_2039_ = lean_nat_abs(v___x_2038_);
v___x_2040_ = lean_cstr_to_nat("9007199254740991");
v___x_2041_ = lean_nat_dec_le(v___x_2039_, v___x_2040_);
lean_dec(v___x_2039_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; 
v___x_2042_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2038_);
v___y_2028_ = v___y_2037_;
v___y_2029_ = v___x_2042_;
goto v___jp_2027_;
}
else
{
double v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = l_Float_ofInt(v___x_2038_);
lean_dec(v___x_2038_);
v___x_2044_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2044_, 0, v___x_2043_);
v___y_2028_ = v___y_2037_;
v___y_2029_ = v___x_2044_;
goto v___jp_2027_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seek___boxed(lean_object* v_self_2061_, lean_object* v_offset_2062_, lean_object* v_whence_2063_, lean_object* v_a_2064_){
_start:
{
lean_object* v_res_2065_; 
v_res_2065_ = l_Lasm_JS_Deno_FsFile_seek(v_self_2061_, v_offset_2062_, v_whence_2063_);
return v_res_2065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(lean_object* v_o_2066_, lean_object* v_name_2067_, lean_object* v_args_2068_){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; uint64_t v___x_2073_; lean_object* v___x_2074_; 
v___x_2070_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2071_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2071_, 0, v_o_2066_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
lean_inc_ref(v_name_2067_);
v___x_2072_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2072_, 0, v_name_2067_);
v___x_2073_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1);
v___x_2074_ = l_Lasm_JS_Value_invokeRaw(v___x_2071_, v___x_2072_, v_args_2068_, v___x_2073_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2074_, 1);
v___x_2076_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2077_ = lean_string_append(v___x_2076_, v_name_2067_);
lean_dec_ref(v_name_2067_);
v___x_2078_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v___x_2077_, v_a_2075_);
lean_dec(v_a_2075_);
lean_dec_ref(v___x_2077_);
return v___x_2078_;
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2086_; 
lean_dec_ref(v_name_2067_);
v_a_2079_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2081_ = v___x_2074_;
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_2074_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2084_; 
if (v_isShared_2082_ == 0)
{
v___x_2084_ = v___x_2081_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2079_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0___boxed(lean_object* v_o_2087_, lean_object* v_name_2088_, lean_object* v_args_2089_, lean_object* v_a_2090_){
_start:
{
lean_object* v_res_2091_; 
v_res_2091_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(v_o_2087_, v_name_2088_, v_args_2089_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seekSync(lean_object* v_self_2093_, lean_object* v_offset_2094_, lean_object* v_whence_2095_){
_start:
{
lean_object* v___x_2097_; lean_object* v___y_2099_; lean_object* v___y_2100_; lean_object* v___y_2108_; 
v___x_2097_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_seekSync___closed__0));
if (lean_obj_tag(v_offset_2094_) == 0)
{
double v_value_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2123_; 
v_value_2116_ = lean_ctor_get_float(v_offset_2094_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_offset_2094_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2118_ = v_offset_2094_;
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
else
{
lean_dec(v_offset_2094_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
lean_ctor_set_tag(v___x_2118_, 3);
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2122_, 0, v_value_2116_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
v___y_2108_ = v___x_2121_;
goto v___jp_2107_;
}
}
}
else
{
lean_object* v_value_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
v_value_2124_ = lean_ctor_get(v_offset_2094_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v_offset_2094_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v_offset_2094_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_value_2124_);
lean_dec(v_offset_2094_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
lean_ctor_set_tag(v___x_2126_, 5);
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_value_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
v___y_2108_ = v___x_2129_;
goto v___jp_2107_;
}
}
}
v___jp_2098_:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2101_ = lean_unsigned_to_nat(2u);
v___x_2102_ = lean_mk_empty_array_with_capacity(v___x_2101_);
v___x_2103_ = lean_array_push(v___x_2102_, v___y_2099_);
v___x_2104_ = lean_array_push(v___x_2103_, v___y_2100_);
v___x_2105_ = l_Lasm_JS_Web_Support_args(v___x_2104_);
v___x_2106_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(v_self_2093_, v___x_2097_, v___x_2105_);
return v___x_2106_;
}
v___jp_2107_:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; uint8_t v___x_2112_; 
v___x_2109_ = lean_nat_to_int(v_whence_2095_);
v___x_2110_ = lean_nat_abs(v___x_2109_);
v___x_2111_ = lean_cstr_to_nat("9007199254740991");
v___x_2112_ = lean_nat_dec_le(v___x_2110_, v___x_2111_);
lean_dec(v___x_2110_);
if (v___x_2112_ == 0)
{
lean_object* v___x_2113_; 
v___x_2113_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2109_);
v___y_2099_ = v___y_2108_;
v___y_2100_ = v___x_2113_;
goto v___jp_2098_;
}
else
{
double v___x_2114_; lean_object* v___x_2115_; 
v___x_2114_ = l_Float_ofInt(v___x_2109_);
lean_dec(v___x_2109_);
v___x_2115_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2115_, 0, v___x_2114_);
v___y_2099_ = v___y_2108_;
v___y_2100_ = v___x_2115_;
goto v___jp_2098_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seekSync___boxed(lean_object* v_self_2132_, lean_object* v_offset_2133_, lean_object* v_whence_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Lasm_JS_Deno_FsFile_seekSync(v_self_2132_, v_offset_2133_, v_whence_2134_);
return v_res_2136_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(uint8_t v_await_2137_, uint64_t v_extra_2138_){
_start:
{
uint64_t v___x_2139_; uint64_t v___y_2141_; 
v___x_2139_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_2137_ == 0)
{
uint64_t v___x_2144_; 
v___x_2144_ = 0ULL;
v___y_2141_ = v___x_2144_;
goto v___jp_2140_;
}
else
{
uint64_t v___x_2145_; 
v___x_2145_ = 2ULL;
v___y_2141_ = v___x_2145_;
goto v___jp_2140_;
}
v___jp_2140_:
{
uint64_t v___x_2142_; uint64_t v___x_2143_; 
v___x_2142_ = lean_uint64_lor(v___x_2139_, v___y_2141_);
v___x_2143_ = lean_uint64_lor(v___x_2142_, v_extra_2138_);
return v___x_2143_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0___boxed(lean_object* v_await_2146_, lean_object* v_extra_2147_){
_start:
{
uint8_t v_await_boxed_2148_; uint64_t v_extra_boxed_2149_; uint64_t v_res_2150_; lean_object* v_r_2151_; 
v_await_boxed_2148_ = lean_unbox(v_await_2146_);
v_extra_boxed_2149_ = lean_unbox_uint64(v_extra_2147_);
lean_dec_ref(v_extra_2147_);
v_res_2150_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(v_await_boxed_2148_, v_extra_boxed_2149_);
v_r_2151_ = lean_box_uint64(v_res_2150_);
return v_r_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2(lean_object* v___f_2152_, lean_object* v_x_2153_){
_start:
{
if (lean_obj_tag(v_x_2153_) == 0)
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v___f_2152_);
v_a_2155_ = lean_ctor_get(v_x_2153_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v_x_2153_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2157_ = v_x_2153_;
v_isShared_2158_ = v_isSharedCheck_2163_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v_x_2153_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2163_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2155_);
v___x_2160_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2161_; 
v___x_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
return v___x_2161_;
}
}
}
else
{
lean_object* v_a_2164_; lean_object* v___x_2165_; 
v_a_2164_ = lean_ctor_get(v_x_2153_, 0);
lean_inc(v_a_2164_);
lean_dec_ref_known(v_x_2153_, 1);
v___x_2165_ = lean_apply_2(v___f_2152_, v_a_2164_, lean_box(0));
return v___x_2165_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2___boxed(lean_object* v___f_2166_, lean_object* v_x_2167_, lean_object* v___y_2168_){
_start:
{
lean_object* v_res_2169_; 
v_res_2169_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2(v___f_2166_, v_x_2167_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1(lean_object* v___f_2170_, lean_object* v_bytes_2171_){
_start:
{
lean_object* v___x_2173_; uint8_t v___x_2174_; lean_object* v_val_2176_; lean_object* v___x_2179_; 
v___x_2173_ = lean_unsigned_to_nat(0u);
v___x_2174_ = 0;
v___x_2179_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2171_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
v_a_2180_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2179_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2179_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 1);
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
v_val_2176_ = v___x_2185_;
goto v___jp_2175_;
}
}
}
else
{
lean_object* v_a_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2195_; 
v_a_2188_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2190_ = v___x_2179_;
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_a_2188_);
lean_dec(v___x_2179_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2193_; 
if (v_isShared_2191_ == 0)
{
lean_ctor_set_tag(v___x_2190_, 0);
v___x_2193_ = v___x_2190_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_a_2188_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
v_val_2176_ = v___x_2193_;
goto v___jp_2175_;
}
}
}
v___jp_2175_:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2177_, 0, v_val_2176_);
v___x_2178_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2173_, v___x_2174_, v___x_2177_, v___f_2170_);
return v___x_2178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1___boxed(lean_object* v___f_2196_, lean_object* v_bytes_2197_, lean_object* v___y_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1(v___f_2196_, v_bytes_2197_);
lean_dec_ref(v_bytes_2197_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3(lean_object* v___f_2200_, lean_object* v_x_2201_){
_start:
{
if (lean_obj_tag(v_x_2201_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2211_; 
lean_dec_ref(v___f_2200_);
v_a_2203_ = lean_ctor_get(v_x_2201_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v_x_2201_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2205_ = v_x_2201_;
v_isShared_2206_ = v_isSharedCheck_2211_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v_x_2201_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2211_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
lean_object* v___x_2209_; 
v___x_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2208_);
return v___x_2209_;
}
}
}
else
{
lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2223_; 
v_isSharedCheck_2223_ = !lean_is_exclusive(v_x_2201_);
if (v_isSharedCheck_2223_ == 0)
{
lean_object* v_unused_2224_; 
v_unused_2224_ = lean_ctor_get(v_x_2201_, 0);
lean_dec(v_unused_2224_);
v___x_2213_ = v_x_2201_;
v_isShared_2214_ = v_isSharedCheck_2223_;
goto v_resetjp_2212_;
}
else
{
lean_dec(v_x_2201_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2223_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2215_; uint8_t v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2219_; 
v___x_2215_ = lean_unsigned_to_nat(0u);
v___x_2216_ = 0;
v___x_2217_ = lean_io_promise_new();
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v___x_2217_);
v___x_2219_ = v___x_2213_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2217_);
v___x_2219_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2219_);
v___x_2221_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2215_, v___x_2216_, v___x_2220_, v___f_2200_);
return v___x_2221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3___boxed(lean_object* v___f_2225_, lean_object* v_x_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3(v___f_2225_, v_x_2226_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_2229_, uint32_t v_op_2230_, uint64_t v_flags_2231_, lean_object* v_payload_2232_, lean_object* v___f_2233_, lean_object* v___f_2234_, lean_object* v___f_2235_, lean_object* v_x_2236_){
_start:
{
if (lean_obj_tag(v_x_2236_) == 0)
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2246_; 
lean_dec_ref(v___f_2235_);
lean_dec_ref(v___f_2234_);
lean_dec_ref(v___f_2233_);
lean_dec(v_payload_2232_);
v_a_2238_ = lean_ctor_get(v_x_2236_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_x_2236_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2240_ = v_x_2236_;
v_isShared_2241_ = v_isSharedCheck_2246_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v_x_2236_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2246_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2243_; 
if (v_isShared_2241_ == 0)
{
v___x_2243_ = v___x_2240_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2238_);
v___x_2243_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
lean_object* v___x_2244_; 
v___x_2244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
return v___x_2244_;
}
}
}
else
{
lean_object* v_a_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2293_; 
v_a_2247_ = lean_ctor_get(v_x_2236_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_x_2236_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2249_ = v_x_2236_;
v_isShared_2250_ = v_isSharedCheck_2293_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_a_2247_);
lean_dec(v_x_2236_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2293_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; uint8_t v___x_2253_; 
v___x_2251_ = lean_string_utf8_byte_size(v_failurePrefix_2229_);
v___x_2252_ = lean_unsigned_to_nat(0u);
v___x_2253_ = lean_nat_dec_eq(v___x_2251_, v___x_2252_);
if (v___x_2253_ == 0)
{
lean_object* v___f_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___f_2258_; lean_object* v_val_2260_; lean_object* v___x_2265_; 
lean_dec_ref(v___f_2235_);
lean_inc(v_a_2247_);
v___f_2254_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2254_, 0, v_a_2247_);
v___x_2255_ = lean_box(v___x_2253_);
v___x_2256_ = lean_box_uint32(v_op_2230_);
v___x_2257_ = lean_box_uint64(v_flags_2231_);
lean_inc(v_payload_2232_);
v___f_2258_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2258_, 0, v___x_2252_);
lean_closure_set(v___f_2258_, 1, v___x_2255_);
lean_closure_set(v___f_2258_, 2, v___f_2254_);
lean_closure_set(v___f_2258_, 3, v_a_2247_);
lean_closure_set(v___f_2258_, 4, v___x_2256_);
lean_closure_set(v___f_2258_, 5, v___x_2257_);
lean_closure_set(v___f_2258_, 6, v_payload_2232_);
v___x_2265_ = l_Lasm_JS_Wire_encodeIO(v_payload_2232_);
lean_dec(v_payload_2232_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2268_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2266_);
lean_dec_ref_known(v___x_2265_, 1);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 0, v_a_2266_);
v___x_2268_ = v___x_2249_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_a_2266_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
v_val_2260_ = v___x_2268_;
goto v___jp_2259_;
}
}
else
{
lean_object* v_a_2270_; lean_object* v___x_2272_; 
v_a_2270_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2270_);
lean_dec_ref_known(v___x_2265_, 1);
if (v_isShared_2250_ == 0)
{
lean_ctor_set_tag(v___x_2249_, 0);
lean_ctor_set(v___x_2249_, 0, v_a_2270_);
v___x_2272_ = v___x_2249_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2270_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
v_val_2260_ = v___x_2272_;
goto v___jp_2259_;
}
}
v___jp_2259_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v_val_2260_);
v___x_2262_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2252_, v___x_2253_, v___x_2261_, v___f_2258_);
v___x_2263_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2252_, v___x_2253_, v___x_2262_, v___f_2233_);
v___x_2264_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2252_, v___x_2253_, v___x_2263_, v___f_2234_);
return v___x_2264_;
}
}
else
{
lean_object* v___f_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___f_2277_; uint8_t v___x_2278_; lean_object* v_val_2280_; lean_object* v___x_2284_; 
lean_dec_ref(v___f_2234_);
lean_dec_ref(v___f_2233_);
lean_inc(v_a_2247_);
v___f_2274_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2274_, 0, v_a_2247_);
v___x_2275_ = lean_box_uint32(v_op_2230_);
v___x_2276_ = lean_box_uint64(v_flags_2231_);
lean_inc(v_payload_2232_);
v___f_2277_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2277_, 0, v___f_2274_);
lean_closure_set(v___f_2277_, 1, v_a_2247_);
lean_closure_set(v___f_2277_, 2, v___x_2275_);
lean_closure_set(v___f_2277_, 3, v___x_2276_);
lean_closure_set(v___f_2277_, 4, v_payload_2232_);
v___x_2278_ = 0;
v___x_2284_ = l_Lasm_JS_Wire_encodeIO(v_payload_2232_);
lean_dec(v_payload_2232_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2284_, 1);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 0, v_a_2285_);
v___x_2287_ = v___x_2249_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2285_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
v_val_2280_ = v___x_2287_;
goto v___jp_2279_;
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; 
v_a_2289_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2289_);
lean_dec_ref_known(v___x_2284_, 1);
if (v_isShared_2250_ == 0)
{
lean_ctor_set_tag(v___x_2249_, 0);
lean_ctor_set(v___x_2249_, 0, v_a_2289_);
v___x_2291_ = v___x_2249_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
v_val_2280_ = v___x_2291_;
goto v___jp_2279_;
}
}
v___jp_2279_:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2281_, 0, v_val_2280_);
v___x_2282_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2252_, v___x_2278_, v___x_2281_, v___f_2277_);
v___x_2283_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2252_, v___x_2278_, v___x_2282_, v___f_2235_);
return v___x_2283_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_2294_, lean_object* v_op_2295_, lean_object* v_flags_2296_, lean_object* v_payload_2297_, lean_object* v___f_2298_, lean_object* v___f_2299_, lean_object* v___f_2300_, lean_object* v_x_2301_, lean_object* v___y_2302_){
_start:
{
uint32_t v_op_boxed_2303_; uint64_t v_flags_boxed_2304_; lean_object* v_res_2305_; 
v_op_boxed_2303_ = lean_unbox_uint32(v_op_2295_);
lean_dec(v_op_2295_);
v_flags_boxed_2304_ = lean_unbox_uint64(v_flags_2296_);
lean_dec_ref(v_flags_2296_);
v_res_2305_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9(v_failurePrefix_2294_, v_op_boxed_2303_, v_flags_boxed_2304_, v_payload_2297_, v___f_2298_, v___f_2299_, v___f_2300_, v_x_2301_);
lean_dec_ref(v_failurePrefix_2294_);
return v_res_2305_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5(void){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2313_ = lean_string_utf8_byte_size(v___x_2312_);
return v___x_2313_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2314_ = lean_unsigned_to_nat(0u);
v___x_2315_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5);
v___x_2316_ = lean_nat_dec_eq(v___x_2315_, v___x_2314_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_2321_, lean_object* v_key_2322_){
_start:
{
if (lean_obj_tag(v_d_2321_) == 8)
{
lean_object* v___x_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2354_; 
v___x_2325_ = l_Lasm_JS_Data_field(v_d_2321_, v_key_2322_);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_d_2321_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; 
v_unused_2355_ = lean_ctor_get(v_d_2321_, 0);
lean_dec(v_unused_2355_);
v___x_2327_ = v_d_2321_;
v_isShared_2328_ = v_isSharedCheck_2354_;
goto v_resetjp_2326_;
}
else
{
lean_dec(v_d_2321_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2354_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
switch(lean_obj_tag(v___x_2325_))
{
case 1:
{
lean_del_object(v___x_2327_);
goto v___jp_2323_;
}
case 0:
{
lean_del_object(v___x_2327_);
goto v___jp_2323_;
}
default: 
{
if (lean_obj_tag(v___x_2325_) == 3)
{
double v_n_2329_; lean_object* v___x_2330_; lean_object* v___x_2332_; 
v_n_2329_ = lean_ctor_get_float(v___x_2325_, 0);
lean_dec_ref_known(v___x_2325_, 0);
v___x_2330_ = lean_box_float(v_n_2329_);
if (v_isShared_2328_ == 0)
{
lean_ctor_set_tag(v___x_2327_, 1);
lean_ctor_set(v___x_2327_, 0, v___x_2330_);
v___x_2332_ = v___x_2327_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v___x_2330_);
v___x_2332_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
lean_object* v___x_2333_; 
v___x_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
return v___x_2333_;
}
}
else
{
lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; 
v___x_2335_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_2336_ = lean_string_append(v___x_2335_, v_key_2322_);
v___x_2337_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_2338_ = lean_string_append(v___x_2336_, v___x_2337_);
v___x_2339_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__3));
v___x_2340_ = lean_string_append(v___x_2338_, v___x_2339_);
v___x_2341_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_2342_ = lean_string_append(v___x_2340_, v___x_2341_);
v___x_2343_ = l_Lasm_JS_Data_describe(v___x_2325_);
v___x_2344_ = lean_string_append(v___x_2342_, v___x_2343_);
lean_dec_ref(v___x_2343_);
v___x_2345_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2349_; 
v___x_2346_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__7));
v___x_2347_ = lean_string_append(v___x_2344_, v___x_2346_);
if (v_isShared_2328_ == 0)
{
lean_ctor_set_tag(v___x_2327_, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2347_);
v___x_2349_ = v___x_2327_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
else
{
lean_object* v___x_2352_; 
if (v_isShared_2328_ == 0)
{
lean_ctor_set_tag(v___x_2327_, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2344_);
v___x_2352_ = v___x_2327_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2344_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2356_; 
lean_dec(v_d_2321_);
v___x_2356_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__9));
return v___x_2356_;
}
v___jp_2323_:
{
lean_object* v___x_2324_; 
v___x_2324_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_2324_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_2357_, lean_object* v_key_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2357_, v_key_2358_);
lean_dec_ref(v_key_2358_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_2364_, lean_object* v_key_2365_){
_start:
{
if (lean_obj_tag(v_d_2364_) == 8)
{
lean_object* v___x_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2376_; 
v___x_2368_ = l_Lasm_JS_Data_field(v_d_2364_, v_key_2365_);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_d_2364_);
if (v_isSharedCheck_2376_ == 0)
{
lean_object* v_unused_2377_; 
v_unused_2377_ = lean_ctor_get(v_d_2364_, 0);
lean_dec(v_unused_2377_);
v___x_2370_ = v_d_2364_;
v_isShared_2371_ = v_isSharedCheck_2376_;
goto v_resetjp_2369_;
}
else
{
lean_dec(v_d_2364_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2376_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
switch(lean_obj_tag(v___x_2368_))
{
case 1:
{
lean_del_object(v___x_2370_);
goto v___jp_2366_;
}
case 0:
{
lean_del_object(v___x_2370_);
goto v___jp_2366_;
}
default: 
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
lean_ctor_set_tag(v___x_2370_, 1);
lean_ctor_set(v___x_2370_, 0, v___x_2368_);
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2368_);
v___x_2373_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
return v___x_2374_;
}
}
}
}
}
else
{
lean_object* v___x_2378_; 
lean_dec(v_d_2364_);
v___x_2378_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_2378_;
}
v___jp_2366_:
{
lean_object* v___x_2367_; 
v___x_2367_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2367_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_2379_, lean_object* v_key_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2379_, v_key_2380_);
lean_dec_ref(v_key_2380_);
return v_res_2381_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8(void){
_start:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2390_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7));
v___x_2391_ = lean_unsigned_to_nat(46u);
v___x_2392_ = lean_unsigned_to_nat(193u);
v___x_2393_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6));
v___x_2394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5));
v___x_2395_ = l_mkPanicMessageWithDecl(v___x_2394_, v___x_2393_, v___x_2392_, v___x_2391_, v___x_2390_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(lean_object* v_context_2397_, lean_object* v_d_2398_){
_start:
{
lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2407_; lean_object* v_received_2408_; lean_object* v___y_2427_; lean_object* v_a_2430_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc(v_d_2398_);
v___x_2455_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2398_, v___x_2454_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
lean_dec_ref_known(v___x_2455_, 1);
v_a_2430_ = v_a_2456_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
v_a_2457_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___x_2455_, 1);
v___x_2458_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc(v_d_2398_);
v___x_2459_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2398_, v___x_2458_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v_a_2460_; 
lean_dec(v_a_2457_);
v_a_2460_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2460_);
lean_dec_ref_known(v___x_2459_, 1);
v_a_2430_ = v_a_2460_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v_a_2461_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2459_, 1);
v___x_2462_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
lean_inc(v_d_2398_);
v___x_2463_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2398_, v___x_2462_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; 
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_a_2464_);
lean_dec_ref_known(v___x_2463_, 1);
v_a_2430_ = v_a_2464_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v_a_2465_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_a_2465_);
lean_dec_ref_known(v___x_2463_, 1);
v___x_2466_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3));
lean_inc(v_d_2398_);
v___x_2467_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_consoleSize_spec__0_spec__0_spec__1(v_d_2398_, v___x_2466_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v_a_2468_; 
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2468_ = lean_ctor_get(v___x_2467_, 0);
lean_inc(v_a_2468_);
lean_dec_ref_known(v___x_2467_, 1);
v_a_2430_ = v_a_2468_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v_a_2469_ = lean_ctor_get(v___x_2467_, 0);
lean_inc(v_a_2469_);
lean_dec_ref_known(v___x_2467_, 1);
v___x_2470_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4));
lean_inc(v_d_2398_);
v___x_2471_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2398_, v___x_2470_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_object* v_a_2472_; 
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2472_ = lean_ctor_get(v___x_2471_, 0);
lean_inc(v_a_2472_);
lean_dec_ref_known(v___x_2471_, 1);
v_a_2430_ = v_a_2472_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v_a_2473_ = lean_ctor_get(v___x_2471_, 0);
lean_inc(v_a_2473_);
lean_dec_ref_known(v___x_2471_, 1);
v___x_2474_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5));
lean_inc(v_d_2398_);
v___x_2475_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2398_, v___x_2474_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; 
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2476_);
lean_dec_ref_known(v___x_2475_, 1);
v_a_2430_ = v_a_2476_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v_a_2477_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2477_);
lean_dec_ref_known(v___x_2475_, 1);
v___x_2478_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6));
lean_inc(v_d_2398_);
v___x_2479_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2398_, v___x_2478_);
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v_a_2480_; 
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2479_, 1);
v_a_2430_ = v_a_2480_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v_a_2481_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2481_);
lean_dec_ref_known(v___x_2479_, 1);
v___x_2482_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7));
lean_inc(v_d_2398_);
v___x_2483_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2398_, v___x_2482_);
if (lean_obj_tag(v___x_2483_) == 0)
{
lean_object* v_a_2484_; 
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2484_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_a_2484_);
lean_dec_ref_known(v___x_2483_, 1);
v_a_2430_ = v_a_2484_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v_a_2485_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_a_2485_);
lean_dec_ref_known(v___x_2483_, 1);
v___x_2486_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8));
lean_inc(v_d_2398_);
v___x_2487_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_consoleSize_spec__0_spec__0_spec__1(v_d_2398_, v___x_2486_);
if (lean_obj_tag(v___x_2487_) == 0)
{
lean_object* v_a_2488_; 
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2488_ = lean_ctor_get(v___x_2487_, 0);
lean_inc(v_a_2488_);
lean_dec_ref_known(v___x_2487_, 1);
v_a_2430_ = v_a_2488_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v_a_2489_ = lean_ctor_get(v___x_2487_, 0);
lean_inc(v_a_2489_);
lean_dec_ref_known(v___x_2487_, 1);
v___x_2490_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9));
lean_inc(v_d_2398_);
v___x_2491_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2490_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v_a_2492_; 
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2491_, 1);
v_a_2430_ = v_a_2492_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v_a_2493_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2493_);
lean_dec_ref_known(v___x_2491_, 1);
v___x_2494_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
lean_inc(v_d_2398_);
v___x_2495_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2494_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; 
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2495_, 1);
v_a_2430_ = v_a_2496_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v_a_2497_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2497_);
lean_dec_ref_known(v___x_2495_, 1);
v___x_2498_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11));
lean_inc(v_d_2398_);
v___x_2499_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2498_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; 
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v___x_2499_, 1);
v_a_2430_ = v_a_2500_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v_a_2501_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_a_2501_);
lean_dec_ref_known(v___x_2499_, 1);
v___x_2502_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12));
lean_inc(v_d_2398_);
v___x_2503_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2502_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2504_; 
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_a_2504_);
lean_dec_ref_known(v___x_2503_, 1);
v_a_2430_ = v_a_2504_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v_a_2505_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_a_2505_);
lean_dec_ref_known(v___x_2503_, 1);
v___x_2506_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13));
lean_inc(v_d_2398_);
v___x_2507_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2506_);
if (lean_obj_tag(v___x_2507_) == 0)
{
lean_object* v_a_2508_; 
lean_dec(v_a_2505_);
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2508_ = lean_ctor_get(v___x_2507_, 0);
lean_inc(v_a_2508_);
lean_dec_ref_known(v___x_2507_, 1);
v_a_2430_ = v_a_2508_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v_a_2509_ = lean_ctor_get(v___x_2507_, 0);
lean_inc(v_a_2509_);
lean_dec_ref_known(v___x_2507_, 1);
v___x_2510_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14));
lean_inc(v_d_2398_);
v___x_2511_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2510_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; 
lean_dec(v_a_2509_);
lean_dec(v_a_2505_);
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2512_);
lean_dec_ref_known(v___x_2511_, 1);
v_a_2430_ = v_a_2512_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v_a_2513_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2513_);
lean_dec_ref_known(v___x_2511_, 1);
v___x_2514_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15));
lean_inc(v_d_2398_);
v___x_2515_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2514_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; 
lean_dec(v_a_2513_);
lean_dec(v_a_2509_);
lean_dec(v_a_2505_);
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v___x_2515_, 1);
v_a_2430_ = v_a_2516_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v_a_2517_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2517_);
lean_dec_ref_known(v___x_2515_, 1);
v___x_2518_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16));
lean_inc(v_d_2398_);
v___x_2519_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2518_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; 
lean_dec(v_a_2517_);
lean_dec(v_a_2513_);
lean_dec(v_a_2509_);
lean_dec(v_a_2505_);
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2519_, 1);
v_a_2430_ = v_a_2520_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v_a_2521_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2521_);
lean_dec_ref_known(v___x_2519_, 1);
v___x_2522_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17));
lean_inc(v_d_2398_);
v___x_2523_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2522_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; 
lean_dec(v_a_2521_);
lean_dec(v_a_2517_);
lean_dec(v_a_2513_);
lean_dec(v_a_2509_);
lean_dec(v_a_2505_);
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2524_);
lean_dec_ref_known(v___x_2523_, 1);
v_a_2430_ = v_a_2524_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v_a_2525_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2525_);
lean_dec_ref_known(v___x_2523_, 1);
v___x_2526_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18));
lean_inc(v_d_2398_);
v___x_2527_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2526_);
if (lean_obj_tag(v___x_2527_) == 0)
{
lean_object* v_a_2528_; 
lean_dec(v_a_2525_);
lean_dec(v_a_2521_);
lean_dec(v_a_2517_);
lean_dec(v_a_2513_);
lean_dec(v_a_2509_);
lean_dec(v_a_2505_);
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2528_ = lean_ctor_get(v___x_2527_, 0);
lean_inc(v_a_2528_);
lean_dec_ref_known(v___x_2527_, 1);
v_a_2430_ = v_a_2528_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v_a_2529_ = lean_ctor_get(v___x_2527_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2527_, 1);
v___x_2530_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19));
lean_inc(v_d_2398_);
v___x_2531_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2530_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; 
lean_dec(v_a_2529_);
lean_dec(v_a_2525_);
lean_dec(v_a_2521_);
lean_dec(v_a_2517_);
lean_dec(v_a_2513_);
lean_dec(v_a_2509_);
lean_dec(v_a_2505_);
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2532_);
lean_dec_ref_known(v___x_2531_, 1);
v_a_2430_ = v_a_2532_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v_a_2533_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2531_, 1);
v___x_2534_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20));
lean_inc(v_d_2398_);
v___x_2535_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2398_, v___x_2534_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; 
lean_dec(v_a_2533_);
lean_dec(v_a_2529_);
lean_dec(v_a_2525_);
lean_dec(v_a_2521_);
lean_dec(v_a_2517_);
lean_dec(v_a_2513_);
lean_dec(v_a_2509_);
lean_dec(v_a_2505_);
lean_dec(v_a_2501_);
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
lean_dec(v_a_2489_);
lean_dec(v_a_2485_);
lean_dec(v_a_2481_);
lean_dec(v_a_2477_);
lean_dec(v_a_2473_);
lean_dec(v_a_2469_);
lean_dec(v_a_2465_);
lean_dec(v_a_2461_);
lean_dec(v_a_2457_);
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
lean_dec_ref_known(v___x_2535_, 1);
v_a_2430_ = v_a_2536_;
goto v___jp_2429_;
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2550_; 
lean_dec(v_d_2398_);
v_a_2537_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2539_ = v___x_2535_;
v_isShared_2540_ = v_isSharedCheck_2550_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_a_2537_);
lean_dec(v___x_2535_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2550_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2541_; uint8_t v___x_2542_; uint8_t v___x_2543_; uint8_t v___x_2544_; double v___x_2545_; double v___x_2546_; lean_object* v___x_2548_; 
v___x_2541_ = lean_alloc_ctor(0, 16, 19);
lean_ctor_set(v___x_2541_, 0, v_a_2473_);
lean_ctor_set(v___x_2541_, 1, v_a_2477_);
lean_ctor_set(v___x_2541_, 2, v_a_2481_);
lean_ctor_set(v___x_2541_, 3, v_a_2485_);
lean_ctor_set(v___x_2541_, 4, v_a_2493_);
lean_ctor_set(v___x_2541_, 5, v_a_2497_);
lean_ctor_set(v___x_2541_, 6, v_a_2501_);
lean_ctor_set(v___x_2541_, 7, v_a_2505_);
lean_ctor_set(v___x_2541_, 8, v_a_2509_);
lean_ctor_set(v___x_2541_, 9, v_a_2513_);
lean_ctor_set(v___x_2541_, 10, v_a_2517_);
lean_ctor_set(v___x_2541_, 11, v_a_2521_);
lean_ctor_set(v___x_2541_, 12, v_a_2525_);
lean_ctor_set(v___x_2541_, 13, v_a_2529_);
lean_ctor_set(v___x_2541_, 14, v_a_2533_);
lean_ctor_set(v___x_2541_, 15, v_a_2537_);
v___x_2542_ = lean_unbox(v_a_2457_);
lean_dec(v_a_2457_);
lean_ctor_set_uint8(v___x_2541_, sizeof(void*)*16 + 16, v___x_2542_);
v___x_2543_ = lean_unbox(v_a_2461_);
lean_dec(v_a_2461_);
lean_ctor_set_uint8(v___x_2541_, sizeof(void*)*16 + 17, v___x_2543_);
v___x_2544_ = lean_unbox(v_a_2465_);
lean_dec(v_a_2465_);
lean_ctor_set_uint8(v___x_2541_, sizeof(void*)*16 + 18, v___x_2544_);
v___x_2545_ = lean_unbox_float(v_a_2469_);
lean_dec(v_a_2469_);
lean_ctor_set_float(v___x_2541_, sizeof(void*)*16, v___x_2545_);
v___x_2546_ = lean_unbox_float(v_a_2489_);
lean_dec(v_a_2489_);
lean_ctor_set_float(v___x_2541_, sizeof(void*)*16 + 8, v___x_2546_);
if (v_isShared_2540_ == 0)
{
lean_ctor_set_tag(v___x_2539_, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2541_);
v___x_2548_ = v___x_2539_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v___x_2541_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_2400_:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2403_ = lean_string_append(v___y_2401_, v___y_2402_);
lean_dec_ref(v___y_2402_);
v___x_2404_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
v___x_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2404_);
return v___x_2405_;
}
v___jp_2406_:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; uint8_t v___x_2420_; 
v___x_2409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_2410_ = lean_string_append(v___x_2409_, v_context_2397_);
v___x_2411_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_2412_ = lean_string_append(v___x_2410_, v___x_2411_);
v___x_2413_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___closed__4));
v___x_2414_ = lean_string_append(v___x_2412_, v___x_2413_);
v___x_2415_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_2416_ = lean_string_append(v___x_2414_, v___x_2415_);
v___x_2417_ = lean_string_append(v___x_2416_, v_received_2408_);
lean_dec_ref(v_received_2408_);
v___x_2418_ = lean_string_utf8_byte_size(v___y_2407_);
v___x_2419_ = lean_unsigned_to_nat(0u);
v___x_2420_ = lean_nat_dec_eq(v___x_2418_, v___x_2419_);
if (v___x_2420_ == 0)
{
lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2421_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_2422_ = lean_string_append(v___x_2421_, v___y_2407_);
lean_dec_ref(v___y_2407_);
v___x_2423_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_2424_ = lean_string_append(v___x_2422_, v___x_2423_);
v___y_2401_ = v___x_2417_;
v___y_2402_ = v___x_2424_;
goto v___jp_2400_;
}
else
{
lean_object* v___x_2425_; 
lean_dec_ref(v___y_2407_);
v___x_2425_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_2401_ = v___x_2417_;
v___y_2402_ = v___x_2425_;
goto v___jp_2400_;
}
}
v___jp_2426_:
{
lean_object* v___x_2428_; 
v___x_2428_ = l_Lasm_JS_Data_describe(v_d_2398_);
v___y_2407_ = v___y_2427_;
v_received_2408_ = v___x_2428_;
goto v___jp_2406_;
}
v___jp_2429_:
{
if (lean_obj_tag(v_d_2398_) == 9)
{
lean_object* v_value_2431_; lean_object* v_description_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; 
v_value_2431_ = lean_ctor_get(v_d_2398_, 0);
v_description_2432_ = lean_ctor_get(v_d_2398_, 1);
v___x_2433_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2434_ = lean_string_dec_eq(v_description_2432_, v___x_2433_);
if (v___x_2434_ == 0)
{
v___y_2427_ = v_a_2430_;
goto v___jp_2426_;
}
else
{
lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2451_; 
lean_inc(v_value_2431_);
v_isSharedCheck_2451_ = !lean_is_exclusive(v_d_2398_);
if (v_isSharedCheck_2451_ == 0)
{
lean_object* v_unused_2452_; lean_object* v_unused_2453_; 
v_unused_2452_ = lean_ctor_get(v_d_2398_, 1);
lean_dec(v_unused_2452_);
v_unused_2453_ = lean_ctor_get(v_d_2398_, 0);
lean_dec(v_unused_2453_);
v___x_2436_ = v_d_2398_;
v_isShared_2437_ = v_isSharedCheck_2451_;
goto v_resetjp_2435_;
}
else
{
lean_dec(v_d_2398_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2451_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
uint32_t v___x_2438_; uint64_t v___x_2439_; lean_object* v___x_2441_; 
v___x_2438_ = 206;
v___x_2439_ = 0ULL;
lean_inc(v_value_2431_);
if (v_isShared_2437_ == 0)
{
lean_ctor_set(v___x_2436_, 1, v___x_2433_);
v___x_2441_ = v___x_2436_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_value_2431_);
lean_ctor_set(v_reuseFailAlloc_2450_, 1, v___x_2433_);
v___x_2441_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
uint32_t v___x_2442_; lean_object* v___x_2443_; 
v___x_2442_ = lasm_js_value_handle(v_value_2431_);
lean_dec(v_value_2431_);
v___x_2443_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2438_, v___x_2439_, v___x_2441_, v___x_2442_);
lean_dec_ref(v___x_2441_);
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_a_2444_; uint8_t v___x_2445_; 
v_a_2444_ = lean_ctor_get(v___x_2443_, 0);
lean_inc(v_a_2444_);
lean_dec_ref_known(v___x_2443_, 1);
v___x_2445_ = lean_string_validate_utf8(v_a_2444_);
if (v___x_2445_ == 0)
{
lean_object* v___x_2446_; lean_object* v___x_2447_; 
lean_dec(v_a_2444_);
v___x_2446_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_2447_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2446_);
v___y_2407_ = v_a_2430_;
v_received_2408_ = v___x_2447_;
goto v___jp_2406_;
}
else
{
lean_object* v___x_2448_; 
v___x_2448_ = lean_string_from_utf8_unchecked(v_a_2444_);
v___y_2407_ = v_a_2430_;
v_received_2408_ = v___x_2448_;
goto v___jp_2406_;
}
}
else
{
lean_object* v___x_2449_; 
lean_dec_ref_known(v___x_2443_, 1);
v___x_2449_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_2407_ = v_a_2430_;
v_received_2408_ = v___x_2449_;
goto v___jp_2406_;
}
}
}
}
}
else
{
v___y_2427_ = v_a_2430_;
goto v___jp_2426_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2551_, lean_object* v_d_2552_, lean_object* v_a_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2551_, v_d_2552_);
lean_dec_ref(v_context_2551_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0(lean_object* v_context_2555_, lean_object* v_x_2556_){
_start:
{
lean_object* v_val_2559_; 
if (lean_obj_tag(v_x_2556_) == 0)
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2569_; 
v_a_2561_ = lean_ctor_get(v_x_2556_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v_x_2556_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2563_ = v_x_2556_;
v_isShared_2564_ = v_isSharedCheck_2569_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v_x_2556_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2569_;
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
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
return v___x_2567_;
}
}
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2583_; 
v_a_2570_ = lean_ctor_get(v_x_2556_, 0);
v_isSharedCheck_2583_ = !lean_is_exclusive(v_x_2556_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2572_ = v_x_2556_;
v_isShared_2573_ = v_isSharedCheck_2583_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v_x_2556_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2583_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2574_; 
v___x_2574_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2555_, v_a_2570_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; lean_object* v___x_2577_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___x_2574_, 1);
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 0, v_a_2575_);
v___x_2577_ = v___x_2572_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2575_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
v_val_2559_ = v___x_2577_;
goto v___jp_2558_;
}
}
else
{
lean_object* v_a_2579_; lean_object* v___x_2581_; 
v_a_2579_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2579_);
lean_dec_ref_known(v___x_2574_, 1);
if (v_isShared_2573_ == 0)
{
lean_ctor_set_tag(v___x_2572_, 0);
lean_ctor_set(v___x_2572_, 0, v_a_2579_);
v___x_2581_ = v___x_2572_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_a_2579_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
v_val_2559_ = v___x_2581_;
goto v___jp_2558_;
}
}
}
}
v___jp_2558_:
{
lean_object* v___x_2560_; 
v___x_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2560_, 0, v_val_2559_);
return v___x_2560_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0___boxed(lean_object* v_context_2584_, lean_object* v_x_2585_, lean_object* v___y_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0(v_context_2584_, v_x_2585_);
lean_dec_ref(v_context_2584_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(lean_object* v_context_2588_, uint32_t v_op_2589_, uint64_t v_flags_2590_, lean_object* v_payload_2591_, lean_object* v_failurePrefix_2592_){
_start:
{
lean_object* v___f_2594_; lean_object* v___f_2595_; lean_object* v___f_2596_; lean_object* v___f_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___f_2600_; lean_object* v___f_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; lean_object* v_val_2605_; lean_object* v___x_2608_; 
v___f_2594_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2594_, 0, v_context_2588_);
v___f_2595_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2595_, 0, v___f_2594_);
v___f_2596_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2596_, 0, v___f_2595_);
lean_inc_ref(v_failurePrefix_2592_);
v___f_2597_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2597_, 0, v_failurePrefix_2592_);
v___x_2598_ = lean_box_uint32(v_op_2589_);
v___x_2599_ = lean_box_uint64(v_flags_2590_);
lean_inc_ref(v___f_2596_);
v___f_2600_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2600_, 0, v_failurePrefix_2592_);
lean_closure_set(v___f_2600_, 1, v___x_2598_);
lean_closure_set(v___f_2600_, 2, v___x_2599_);
lean_closure_set(v___f_2600_, 3, v_payload_2591_);
lean_closure_set(v___f_2600_, 4, v___f_2597_);
lean_closure_set(v___f_2600_, 5, v___f_2596_);
lean_closure_set(v___f_2600_, 6, v___f_2596_);
v___f_2601_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2601_, 0, v___f_2600_);
v___x_2602_ = lean_unsigned_to_nat(0u);
v___x_2603_ = 0;
v___x_2608_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2616_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2611_ = v___x_2608_;
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2608_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2614_; 
if (v_isShared_2612_ == 0)
{
lean_ctor_set_tag(v___x_2611_, 1);
v___x_2614_ = v___x_2611_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v_a_2609_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
v_val_2605_ = v___x_2614_;
goto v___jp_2604_;
}
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
v_a_2617_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2608_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2608_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
lean_ctor_set_tag(v___x_2619_, 0);
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
v_val_2605_ = v___x_2622_;
goto v___jp_2604_;
}
}
}
v___jp_2604_:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2606_, 0, v_val_2605_);
v___x_2607_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2602_, v___x_2603_, v___x_2606_, v___f_2601_);
return v___x_2607_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___boxed(lean_object* v_context_2625_, lean_object* v_op_2626_, lean_object* v_flags_2627_, lean_object* v_payload_2628_, lean_object* v_failurePrefix_2629_, lean_object* v_a_2630_){
_start:
{
uint32_t v_op_boxed_2631_; uint64_t v_flags_boxed_2632_; lean_object* v_res_2633_; 
v_op_boxed_2631_ = lean_unbox_uint32(v_op_2626_);
lean_dec(v_op_2626_);
v_flags_boxed_2632_ = lean_unbox_uint64(v_flags_2627_);
lean_dec_ref(v_flags_2627_);
v_res_2633_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v_context_2625_, v_op_boxed_2631_, v_flags_boxed_2632_, v_payload_2628_, v_failurePrefix_2629_);
return v_res_2633_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2634_; uint8_t v___x_2635_; uint64_t v___x_2636_; 
v___x_2634_ = 8ULL;
v___x_2635_ = 0;
v___x_2636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(v___x_2635_, v___x_2634_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(lean_object* v_o_2637_, lean_object* v_name_2638_, lean_object* v_args_2639_){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; uint32_t v___x_2646_; uint64_t v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2641_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2642_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2642_, 0, v_o_2637_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
lean_inc_ref(v_name_2638_);
v___x_2643_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2643_, 0, v_name_2638_);
v___x_2644_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2645_ = lean_string_append(v___x_2644_, v_name_2638_);
lean_dec_ref(v_name_2638_);
v___x_2646_ = 205;
v___x_2647_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0);
v___x_2648_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2648_, 0, v_args_2639_);
v___x_2649_ = lean_unsigned_to_nat(3u);
v___x_2650_ = lean_mk_empty_array_with_capacity(v___x_2649_);
v___x_2651_ = lean_array_push(v___x_2650_, v___x_2642_);
v___x_2652_ = lean_array_push(v___x_2651_, v___x_2643_);
v___x_2653_ = lean_array_push(v___x_2652_, v___x_2648_);
v___x_2654_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2653_);
v___x_2655_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v___x_2645_, v___x_2646_, v___x_2647_, v___x_2654_, v___x_2641_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___boxed(lean_object* v_o_2656_, lean_object* v_name_2657_, lean_object* v_args_2658_, lean_object* v___y_2659_){
_start:
{
lean_object* v_res_2660_; 
v_res_2660_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(v_o_2656_, v_name_2657_, v_args_2658_);
return v_res_2660_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_FsFile_stat___closed__2(void){
_start:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2664_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_2665_ = l_Lasm_JS_Web_Support_args(v___x_2664_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_stat(lean_object* v_self_2666_){
_start:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2668_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__0));
v___x_2669_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2670_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(v_self_2666_, v___x_2668_, v___x_2669_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_stat___boxed(lean_object* v_self_2671_, lean_object* v_a_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l_Lasm_JS_Deno_FsFile_stat(v_self_2671_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(lean_object* v_context_2674_, lean_object* v_bytes_2675_){
_start:
{
lean_object* v___x_2677_; 
v___x_2677_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2675_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; lean_object* v___x_2679_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v___x_2679_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2674_, v_a_2678_);
return v___x_2679_;
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
v_a_2680_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2677_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2677_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0___boxed(lean_object* v_context_2688_, lean_object* v_bytes_2689_, lean_object* v_a_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(v_context_2688_, v_bytes_2689_);
lean_dec_ref(v_bytes_2689_);
lean_dec_ref(v_context_2688_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(lean_object* v_o_2692_, lean_object* v_name_2693_, lean_object* v_args_2694_){
_start:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; uint64_t v___x_2699_; lean_object* v___x_2700_; 
v___x_2696_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2697_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2697_, 0, v_o_2692_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
lean_inc_ref(v_name_2693_);
v___x_2698_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2698_, 0, v_name_2693_);
v___x_2699_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0);
v___x_2700_ = l_Lasm_JS_Value_invokeRaw(v___x_2697_, v___x_2698_, v_args_2694_, v___x_2699_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2701_);
lean_dec_ref_known(v___x_2700_, 1);
v___x_2702_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2703_ = lean_string_append(v___x_2702_, v_name_2693_);
lean_dec_ref(v_name_2693_);
v___x_2704_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(v___x_2703_, v_a_2701_);
lean_dec(v_a_2701_);
lean_dec_ref(v___x_2703_);
return v___x_2704_;
}
else
{
lean_object* v_a_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2712_; 
lean_dec_ref(v_name_2693_);
v_a_2705_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2707_ = v___x_2700_;
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_a_2705_);
lean_dec(v___x_2700_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2710_; 
if (v_isShared_2708_ == 0)
{
v___x_2710_ = v___x_2707_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_a_2705_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0___boxed(lean_object* v_o_2713_, lean_object* v_name_2714_, lean_object* v_args_2715_, lean_object* v_a_2716_){
_start:
{
lean_object* v_res_2717_; 
v_res_2717_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(v_o_2713_, v_name_2714_, v_args_2715_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_statSync(lean_object* v_self_2719_){
_start:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2721_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_statSync___closed__0));
v___x_2722_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2723_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(v_self_2719_, v___x_2721_, v___x_2722_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_statSync___boxed(lean_object* v_self_2724_, lean_object* v_a_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Lasm_JS_Deno_FsFile_statSync(v_self_2724_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_sync(lean_object* v_self_2728_){
_start:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; 
v___x_2730_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_sync___closed__0));
v___x_2731_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2732_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2728_, v___x_2730_, v___x_2731_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_sync___boxed(lean_object* v_self_2733_, lean_object* v_a_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l_Lasm_JS_Deno_FsFile_sync(v_self_2733_);
return v_res_2735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncSync(lean_object* v_self_2737_){
_start:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2739_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncSync___closed__0));
v___x_2740_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2741_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2737_, v___x_2739_, v___x_2740_);
return v___x_2741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncSync___boxed(lean_object* v_self_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Lasm_JS_Deno_FsFile_syncSync(v_self_2742_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncData(lean_object* v_self_2746_){
_start:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncData___closed__0));
v___x_2749_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2750_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2746_, v___x_2748_, v___x_2749_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncData___boxed(lean_object* v_self_2751_, lean_object* v_a_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l_Lasm_JS_Deno_FsFile_syncData(v_self_2751_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync(lean_object* v_self_2755_){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2757_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncDataSync___closed__0));
v___x_2758_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2759_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2755_, v___x_2757_, v___x_2758_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync___boxed(lean_object* v_self_2760_, lean_object* v_a_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_Lasm_JS_Deno_FsFile_syncDataSync(v_self_2760_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime(lean_object* v_self_2764_, lean_object* v_atime_2765_, lean_object* v_mtime_2766_){
_start:
{
lean_object* v___x_2768_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2779_; 
v___x_2768_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utime___closed__0));
if (lean_obj_tag(v_atime_2765_) == 0)
{
double v_value_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
v_value_2789_ = lean_ctor_get_float(v_atime_2765_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v_atime_2765_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v_atime_2765_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_dec(v_atime_2765_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
lean_ctor_set_tag(v___x_2791_, 3);
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2795_, 0, v_value_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
v___y_2779_ = v___x_2794_;
goto v___jp_2778_;
}
}
}
else
{
lean_object* v_value_2797_; 
v_value_2797_ = lean_ctor_get(v_atime_2765_, 0);
lean_inc(v_value_2797_);
lean_dec_ref_known(v_atime_2765_, 1);
v___y_2779_ = v_value_2797_;
goto v___jp_2778_;
}
v___jp_2769_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2772_ = lean_unsigned_to_nat(2u);
v___x_2773_ = lean_mk_empty_array_with_capacity(v___x_2772_);
v___x_2774_ = lean_array_push(v___x_2773_, v___y_2770_);
v___x_2775_ = lean_array_push(v___x_2774_, v___y_2771_);
v___x_2776_ = l_Lasm_JS_Web_Support_args(v___x_2775_);
v___x_2777_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2764_, v___x_2768_, v___x_2776_);
return v___x_2777_;
}
v___jp_2778_:
{
if (lean_obj_tag(v_mtime_2766_) == 0)
{
double v_value_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
v_value_2780_ = lean_ctor_get_float(v_mtime_2766_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v_mtime_2766_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v_mtime_2766_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_dec(v_mtime_2766_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
lean_ctor_set_tag(v___x_2782_, 3);
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2786_, 0, v_value_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
v___y_2770_ = v___y_2779_;
v___y_2771_ = v___x_2785_;
goto v___jp_2769_;
}
}
}
else
{
lean_object* v_value_2788_; 
v_value_2788_ = lean_ctor_get(v_mtime_2766_, 0);
lean_inc(v_value_2788_);
lean_dec_ref_known(v_mtime_2766_, 1);
v___y_2770_ = v___y_2779_;
v___y_2771_ = v_value_2788_;
goto v___jp_2769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime___boxed(lean_object* v_self_2798_, lean_object* v_atime_2799_, lean_object* v_mtime_2800_, lean_object* v_a_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l_Lasm_JS_Deno_FsFile_utime(v_self_2798_, v_atime_2799_, v_mtime_2800_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync(lean_object* v_self_2804_, lean_object* v_atime_2805_, lean_object* v_mtime_2806_){
_start:
{
lean_object* v___x_2808_; lean_object* v___y_2810_; lean_object* v___y_2811_; lean_object* v___y_2819_; 
v___x_2808_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utimeSync___closed__0));
if (lean_obj_tag(v_atime_2805_) == 0)
{
double v_value_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2836_; 
v_value_2829_ = lean_ctor_get_float(v_atime_2805_, 0);
v_isSharedCheck_2836_ = !lean_is_exclusive(v_atime_2805_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2831_ = v_atime_2805_;
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
else
{
lean_dec(v_atime_2805_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
lean_ctor_set_tag(v___x_2831_, 3);
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2835_, 0, v_value_2829_);
v___x_2834_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
v___y_2819_ = v___x_2834_;
goto v___jp_2818_;
}
}
}
else
{
lean_object* v_value_2837_; 
v_value_2837_ = lean_ctor_get(v_atime_2805_, 0);
lean_inc(v_value_2837_);
lean_dec_ref_known(v_atime_2805_, 1);
v___y_2819_ = v_value_2837_;
goto v___jp_2818_;
}
v___jp_2809_:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2812_ = lean_unsigned_to_nat(2u);
v___x_2813_ = lean_mk_empty_array_with_capacity(v___x_2812_);
v___x_2814_ = lean_array_push(v___x_2813_, v___y_2810_);
v___x_2815_ = lean_array_push(v___x_2814_, v___y_2811_);
v___x_2816_ = l_Lasm_JS_Web_Support_args(v___x_2815_);
v___x_2817_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2804_, v___x_2808_, v___x_2816_);
return v___x_2817_;
}
v___jp_2818_:
{
if (lean_obj_tag(v_mtime_2806_) == 0)
{
double v_value_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
v_value_2820_ = lean_ctor_get_float(v_mtime_2806_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v_mtime_2806_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v_mtime_2806_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_dec(v_mtime_2806_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
lean_ctor_set_tag(v___x_2822_, 3);
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2826_, 0, v_value_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
v___y_2810_ = v___y_2819_;
v___y_2811_ = v___x_2825_;
goto v___jp_2809_;
}
}
}
else
{
lean_object* v_value_2828_; 
v_value_2828_ = lean_ctor_get(v_mtime_2806_, 0);
lean_inc(v_value_2828_);
lean_dec_ref_known(v_mtime_2806_, 1);
v___y_2810_ = v___y_2819_;
v___y_2811_ = v_value_2828_;
goto v___jp_2809_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync___boxed(lean_object* v_self_2838_, lean_object* v_atime_2839_, lean_object* v_mtime_2840_, lean_object* v_a_2841_){
_start:
{
lean_object* v_res_2842_; 
v_res_2842_ = l_Lasm_JS_Deno_FsFile_utimeSync(v_self_2838_, v_atime_2839_, v_mtime_2840_);
return v_res_2842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal(lean_object* v_self_2844_){
_start:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2846_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_isTerminal___closed__0));
v___x_2847_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2848_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2844_, v___x_2846_, v___x_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal___boxed(lean_object* v_self_2849_, lean_object* v_a_2850_){
_start:
{
lean_object* v_res_2851_; 
v_res_2851_ = l_Lasm_JS_Deno_FsFile_isTerminal(v_self_2849_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw(lean_object* v_self_2853_, uint8_t v_mode_2854_, lean_object* v_options_2855_){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2857_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_setRaw___closed__0));
v___x_2858_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2858_, 0, v_mode_2854_);
v___x_2859_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Stdin_setRaw_spec__0(v_options_2855_);
v___x_2860_ = lean_unsigned_to_nat(2u);
v___x_2861_ = lean_mk_empty_array_with_capacity(v___x_2860_);
v___x_2862_ = lean_array_push(v___x_2861_, v___x_2858_);
v___x_2863_ = lean_array_push(v___x_2862_, v___x_2859_);
v___x_2864_ = l_Lasm_JS_Web_Support_args(v___x_2863_);
v___x_2865_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2853_, v___x_2857_, v___x_2864_);
return v___x_2865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw___boxed(lean_object* v_self_2866_, lean_object* v_mode_2867_, lean_object* v_options_2868_, lean_object* v_a_2869_){
_start:
{
uint8_t v_mode_boxed_2870_; lean_object* v_res_2871_; 
v_mode_boxed_2870_ = lean_unbox(v_mode_2867_);
v_res_2871_ = l_Lasm_JS_Deno_FsFile_setRaw(v_self_2866_, v_mode_boxed_2870_, v_options_2868_);
lean_dec(v_options_2868_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock(lean_object* v_self_2873_, lean_object* v_exclusive_2874_){
_start:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2876_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lock___closed__0));
v___x_2877_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2874_);
v___x_2878_ = lean_unsigned_to_nat(1u);
v___x_2879_ = lean_mk_empty_array_with_capacity(v___x_2878_);
v___x_2880_ = lean_array_push(v___x_2879_, v___x_2877_);
v___x_2881_ = l_Lasm_JS_Web_Support_args(v___x_2880_);
v___x_2882_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2873_, v___x_2876_, v___x_2881_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock___boxed(lean_object* v_self_2883_, lean_object* v_exclusive_2884_, lean_object* v_a_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l_Lasm_JS_Deno_FsFile_lock(v_self_2883_, v_exclusive_2884_);
lean_dec(v_exclusive_2884_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync(lean_object* v_self_2888_, lean_object* v_exclusive_2889_){
_start:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2891_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lockSync___closed__0));
v___x_2892_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2889_);
v___x_2893_ = lean_unsigned_to_nat(1u);
v___x_2894_ = lean_mk_empty_array_with_capacity(v___x_2893_);
v___x_2895_ = lean_array_push(v___x_2894_, v___x_2892_);
v___x_2896_ = l_Lasm_JS_Web_Support_args(v___x_2895_);
v___x_2897_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2888_, v___x_2891_, v___x_2896_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync___boxed(lean_object* v_self_2898_, lean_object* v_exclusive_2899_, lean_object* v_a_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_Lasm_JS_Deno_FsFile_lockSync(v_self_2898_, v_exclusive_2899_);
lean_dec(v_exclusive_2899_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(lean_object* v_context_2902_, lean_object* v_x_2903_){
_start:
{
lean_object* v_val_2906_; 
if (lean_obj_tag(v_x_2903_) == 0)
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2916_; 
v_a_2908_ = lean_ctor_get(v_x_2903_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v_x_2903_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2910_ = v_x_2903_;
v_isShared_2911_ = v_isSharedCheck_2916_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v_x_2903_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2916_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
lean_object* v___x_2914_; 
v___x_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
return v___x_2914_;
}
}
}
else
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2930_; 
v_a_2917_ = lean_ctor_get(v_x_2903_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v_x_2903_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2919_ = v_x_2903_;
v_isShared_2920_ = v_isSharedCheck_2930_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v_x_2903_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2930_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2921_; 
v___x_2921_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_2902_, v_a_2917_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___x_2924_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2921_, 1);
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 0, v_a_2922_);
v___x_2924_ = v___x_2919_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
v_val_2906_ = v___x_2924_;
goto v___jp_2905_;
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; 
v_a_2926_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2926_);
lean_dec_ref_known(v___x_2921_, 1);
if (v_isShared_2920_ == 0)
{
lean_ctor_set_tag(v___x_2919_, 0);
lean_ctor_set(v___x_2919_, 0, v_a_2926_);
v___x_2928_ = v___x_2919_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_a_2926_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
v_val_2906_ = v___x_2928_;
goto v___jp_2905_;
}
}
}
}
v___jp_2905_:
{
lean_object* v___x_2907_; 
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v_val_2906_);
return v___x_2907_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed(lean_object* v_context_2931_, lean_object* v_x_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(v_context_2931_, v_x_2932_);
lean_dec_ref(v_context_2931_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_2935_, uint32_t v_op_2936_, uint64_t v_flags_2937_, lean_object* v_payload_2938_, lean_object* v___f_2939_, lean_object* v___f_2940_, lean_object* v___f_2941_, lean_object* v_x_2942_){
_start:
{
if (lean_obj_tag(v_x_2942_) == 0)
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2952_; 
lean_dec_ref(v___f_2941_);
lean_dec_ref(v___f_2940_);
lean_dec_ref(v___f_2939_);
lean_dec(v_payload_2938_);
v_a_2944_ = lean_ctor_get(v_x_2942_, 0);
v_isSharedCheck_2952_ = !lean_is_exclusive(v_x_2942_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2946_ = v_x_2942_;
v_isShared_2947_ = v_isSharedCheck_2952_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v_x_2942_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2952_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v_a_2944_);
v___x_2949_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
lean_object* v___x_2950_; 
v___x_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
return v___x_2950_;
}
}
}
else
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2999_; 
v_a_2953_ = lean_ctor_get(v_x_2942_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v_x_2942_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2955_ = v_x_2942_;
v_isShared_2956_ = v_isSharedCheck_2999_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v_x_2942_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2999_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; 
v___x_2957_ = lean_string_utf8_byte_size(v_failurePrefix_2935_);
v___x_2958_ = lean_unsigned_to_nat(0u);
v___x_2959_ = lean_nat_dec_eq(v___x_2957_, v___x_2958_);
if (v___x_2959_ == 0)
{
lean_object* v___f_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___f_2964_; lean_object* v_val_2966_; lean_object* v___x_2971_; 
lean_dec_ref(v___f_2941_);
lean_inc(v_a_2953_);
v___f_2960_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2960_, 0, v_a_2953_);
v___x_2961_ = lean_box(v___x_2959_);
v___x_2962_ = lean_box_uint32(v_op_2936_);
v___x_2963_ = lean_box_uint64(v_flags_2937_);
lean_inc(v_payload_2938_);
v___f_2964_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2964_, 0, v___x_2958_);
lean_closure_set(v___f_2964_, 1, v___x_2961_);
lean_closure_set(v___f_2964_, 2, v___f_2960_);
lean_closure_set(v___f_2964_, 3, v_a_2953_);
lean_closure_set(v___f_2964_, 4, v___x_2962_);
lean_closure_set(v___f_2964_, 5, v___x_2963_);
lean_closure_set(v___f_2964_, 6, v_payload_2938_);
v___x_2971_ = l_Lasm_JS_Wire_encodeIO(v_payload_2938_);
lean_dec(v_payload_2938_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v_a_2972_; lean_object* v___x_2974_; 
v_a_2972_ = lean_ctor_get(v___x_2971_, 0);
lean_inc(v_a_2972_);
lean_dec_ref_known(v___x_2971_, 1);
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 0, v_a_2972_);
v___x_2974_ = v___x_2955_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2972_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
v_val_2966_ = v___x_2974_;
goto v___jp_2965_;
}
}
else
{
lean_object* v_a_2976_; lean_object* v___x_2978_; 
v_a_2976_ = lean_ctor_get(v___x_2971_, 0);
lean_inc(v_a_2976_);
lean_dec_ref_known(v___x_2971_, 1);
if (v_isShared_2956_ == 0)
{
lean_ctor_set_tag(v___x_2955_, 0);
lean_ctor_set(v___x_2955_, 0, v_a_2976_);
v___x_2978_ = v___x_2955_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_a_2976_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
v_val_2966_ = v___x_2978_;
goto v___jp_2965_;
}
}
v___jp_2965_:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2967_, 0, v_val_2966_);
v___x_2968_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2958_, v___x_2959_, v___x_2967_, v___f_2964_);
v___x_2969_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2958_, v___x_2959_, v___x_2968_, v___f_2939_);
v___x_2970_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2958_, v___x_2959_, v___x_2969_, v___f_2940_);
return v___x_2970_;
}
}
else
{
lean_object* v___f_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___f_2983_; uint8_t v___x_2984_; lean_object* v_val_2986_; lean_object* v___x_2990_; 
lean_dec_ref(v___f_2940_);
lean_dec_ref(v___f_2939_);
lean_inc(v_a_2953_);
v___f_2980_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2980_, 0, v_a_2953_);
v___x_2981_ = lean_box_uint32(v_op_2936_);
v___x_2982_ = lean_box_uint64(v_flags_2937_);
lean_inc(v_payload_2938_);
v___f_2983_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2983_, 0, v___f_2980_);
lean_closure_set(v___f_2983_, 1, v_a_2953_);
lean_closure_set(v___f_2983_, 2, v___x_2981_);
lean_closure_set(v___f_2983_, 3, v___x_2982_);
lean_closure_set(v___f_2983_, 4, v_payload_2938_);
v___x_2984_ = 0;
v___x_2990_ = l_Lasm_JS_Wire_encodeIO(v_payload_2938_);
lean_dec(v_payload_2938_);
if (lean_obj_tag(v___x_2990_) == 0)
{
lean_object* v_a_2991_; lean_object* v___x_2993_; 
v_a_2991_ = lean_ctor_get(v___x_2990_, 0);
lean_inc(v_a_2991_);
lean_dec_ref_known(v___x_2990_, 1);
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 0, v_a_2991_);
v___x_2993_ = v___x_2955_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2991_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
v_val_2986_ = v___x_2993_;
goto v___jp_2985_;
}
}
else
{
lean_object* v_a_2995_; lean_object* v___x_2997_; 
v_a_2995_ = lean_ctor_get(v___x_2990_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v___x_2990_, 1);
if (v_isShared_2956_ == 0)
{
lean_ctor_set_tag(v___x_2955_, 0);
lean_ctor_set(v___x_2955_, 0, v_a_2995_);
v___x_2997_ = v___x_2955_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_a_2995_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
v_val_2986_ = v___x_2997_;
goto v___jp_2985_;
}
}
v___jp_2985_:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
v___x_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2987_, 0, v_val_2986_);
v___x_2988_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2958_, v___x_2984_, v___x_2987_, v___f_2983_);
v___x_2989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2958_, v___x_2984_, v___x_2988_, v___f_2941_);
return v___x_2989_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_3000_, lean_object* v_op_3001_, lean_object* v_flags_3002_, lean_object* v_payload_3003_, lean_object* v___f_3004_, lean_object* v___f_3005_, lean_object* v___f_3006_, lean_object* v_x_3007_, lean_object* v___y_3008_){
_start:
{
uint32_t v_op_boxed_3009_; uint64_t v_flags_boxed_3010_; lean_object* v_res_3011_; 
v_op_boxed_3009_ = lean_unbox_uint32(v_op_3001_);
lean_dec(v_op_3001_);
v_flags_boxed_3010_ = lean_unbox_uint64(v_flags_3002_);
lean_dec_ref(v_flags_3002_);
v_res_3011_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(v_failurePrefix_3000_, v_op_boxed_3009_, v_flags_boxed_3010_, v_payload_3003_, v___f_3004_, v___f_3005_, v___f_3006_, v_x_3007_);
lean_dec_ref(v_failurePrefix_3000_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(lean_object* v___f_3012_, lean_object* v_x_3013_){
_start:
{
if (lean_obj_tag(v_x_3013_) == 0)
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3023_; 
lean_dec_ref(v___f_3012_);
v_a_3015_ = lean_ctor_get(v_x_3013_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_x_3013_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3017_ = v_x_3013_;
v_isShared_3018_ = v_isSharedCheck_3023_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v_x_3013_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3023_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
lean_object* v___x_3021_; 
v___x_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
return v___x_3021_;
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3025_; 
v_a_3024_ = lean_ctor_get(v_x_3013_, 0);
lean_inc(v_a_3024_);
lean_dec_ref_known(v_x_3013_, 1);
v___x_3025_ = lean_apply_2(v___f_3012_, v_a_3024_, lean_box(0));
return v___x_3025_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed(lean_object* v___f_3026_, lean_object* v_x_3027_, lean_object* v___y_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(v___f_3026_, v_x_3027_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(lean_object* v___f_3030_, lean_object* v_bytes_3031_){
_start:
{
lean_object* v___x_3033_; uint8_t v___x_3034_; lean_object* v_val_3036_; lean_object* v___x_3039_; 
v___x_3033_ = lean_unsigned_to_nat(0u);
v___x_3034_ = 0;
v___x_3039_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3031_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_3039_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3039_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
lean_ctor_set_tag(v___x_3042_, 1);
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
v_val_3036_ = v___x_3045_;
goto v___jp_3035_;
}
}
}
else
{
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3055_; 
v_a_3048_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3050_ = v___x_3039_;
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_3039_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3053_; 
if (v_isShared_3051_ == 0)
{
lean_ctor_set_tag(v___x_3050_, 0);
v___x_3053_ = v___x_3050_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3048_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
v_val_3036_ = v___x_3053_;
goto v___jp_3035_;
}
}
}
v___jp_3035_:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3037_, 0, v_val_3036_);
v___x_3038_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3033_, v___x_3034_, v___x_3037_, v___f_3030_);
return v___x_3038_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed(lean_object* v___f_3056_, lean_object* v_bytes_3057_, lean_object* v___y_3058_){
_start:
{
lean_object* v_res_3059_; 
v_res_3059_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(v___f_3056_, v_bytes_3057_);
lean_dec_ref(v_bytes_3057_);
return v_res_3059_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(lean_object* v___f_3060_, lean_object* v_x_3061_){
_start:
{
if (lean_obj_tag(v_x_3061_) == 0)
{
lean_object* v_a_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3071_; 
lean_dec_ref(v___f_3060_);
v_a_3063_ = lean_ctor_get(v_x_3061_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v_x_3061_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3065_ = v_x_3061_;
v_isShared_3066_ = v_isSharedCheck_3071_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_a_3063_);
lean_dec(v_x_3061_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3071_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
if (v_isShared_3066_ == 0)
{
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3063_);
v___x_3068_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
lean_object* v___x_3069_; 
v___x_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3068_);
return v___x_3069_;
}
}
}
else
{
lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3083_; 
v_isSharedCheck_3083_ = !lean_is_exclusive(v_x_3061_);
if (v_isSharedCheck_3083_ == 0)
{
lean_object* v_unused_3084_; 
v_unused_3084_ = lean_ctor_get(v_x_3061_, 0);
lean_dec(v_unused_3084_);
v___x_3073_ = v_x_3061_;
v_isShared_3074_ = v_isSharedCheck_3083_;
goto v_resetjp_3072_;
}
else
{
lean_dec(v_x_3061_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3083_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3075_; uint8_t v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3079_; 
v___x_3075_ = lean_unsigned_to_nat(0u);
v___x_3076_ = 0;
v___x_3077_ = lean_io_promise_new();
if (v_isShared_3074_ == 0)
{
lean_ctor_set(v___x_3073_, 0, v___x_3077_);
v___x_3079_ = v___x_3073_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3077_);
v___x_3079_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; 
v___x_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3079_);
v___x_3081_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3075_, v___x_3076_, v___x_3080_, v___f_3060_);
return v___x_3081_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed(lean_object* v___f_3085_, lean_object* v_x_3086_, lean_object* v___y_3087_){
_start:
{
lean_object* v_res_3088_; 
v_res_3088_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(v___f_3085_, v_x_3086_);
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(lean_object* v_context_3089_, uint32_t v_op_3090_, uint64_t v_flags_3091_, lean_object* v_payload_3092_, lean_object* v_failurePrefix_3093_){
_start:
{
lean_object* v___f_3095_; lean_object* v___f_3096_; lean_object* v___f_3097_; lean_object* v___f_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___f_3101_; lean_object* v___f_3102_; lean_object* v___x_3103_; uint8_t v___x_3104_; lean_object* v_val_3106_; lean_object* v___x_3109_; 
v___f_3095_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3095_, 0, v_context_3089_);
v___f_3096_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3096_, 0, v___f_3095_);
v___f_3097_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3097_, 0, v___f_3096_);
lean_inc_ref(v_failurePrefix_3093_);
v___f_3098_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3098_, 0, v_failurePrefix_3093_);
v___x_3099_ = lean_box_uint32(v_op_3090_);
v___x_3100_ = lean_box_uint64(v_flags_3091_);
lean_inc_ref(v___f_3097_);
v___f_3101_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3101_, 0, v_failurePrefix_3093_);
lean_closure_set(v___f_3101_, 1, v___x_3099_);
lean_closure_set(v___f_3101_, 2, v___x_3100_);
lean_closure_set(v___f_3101_, 3, v_payload_3092_);
lean_closure_set(v___f_3101_, 4, v___f_3098_);
lean_closure_set(v___f_3101_, 5, v___f_3097_);
lean_closure_set(v___f_3101_, 6, v___f_3097_);
v___f_3102_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3102_, 0, v___f_3101_);
v___x_3103_ = lean_unsigned_to_nat(0u);
v___x_3104_ = 0;
v___x_3109_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3117_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3112_ = v___x_3109_;
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3109_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3115_; 
if (v_isShared_3113_ == 0)
{
lean_ctor_set_tag(v___x_3112_, 1);
v___x_3115_ = v___x_3112_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_a_3110_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
v_val_3106_ = v___x_3115_;
goto v___jp_3105_;
}
}
}
else
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3125_; 
v_a_3118_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3120_ = v___x_3109_;
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_3109_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___x_3123_; 
if (v_isShared_3121_ == 0)
{
lean_ctor_set_tag(v___x_3120_, 0);
v___x_3123_ = v___x_3120_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_a_3118_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
v_val_3106_ = v___x_3123_;
goto v___jp_3105_;
}
}
}
v___jp_3105_:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3107_, 0, v_val_3106_);
v___x_3108_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3103_, v___x_3104_, v___x_3107_, v___f_3102_);
return v___x_3108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___boxed(lean_object* v_context_3126_, lean_object* v_op_3127_, lean_object* v_flags_3128_, lean_object* v_payload_3129_, lean_object* v_failurePrefix_3130_, lean_object* v_a_3131_){
_start:
{
uint32_t v_op_boxed_3132_; uint64_t v_flags_boxed_3133_; lean_object* v_res_3134_; 
v_op_boxed_3132_ = lean_unbox_uint32(v_op_3127_);
lean_dec(v_op_3127_);
v_flags_boxed_3133_ = lean_unbox_uint64(v_flags_3128_);
lean_dec_ref(v_flags_3128_);
v_res_3134_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v_context_3126_, v_op_boxed_3132_, v_flags_boxed_3133_, v_payload_3129_, v_failurePrefix_3130_);
return v_res_3134_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3135_; uint8_t v___x_3136_; uint64_t v___x_3137_; 
v___x_3135_ = 8ULL;
v___x_3136_ = 0;
v___x_3137_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v___x_3136_, v___x_3135_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(lean_object* v_o_3138_, lean_object* v_name_3139_, lean_object* v_args_3140_){
_start:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; uint32_t v___x_3147_; uint64_t v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3142_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3143_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3143_, 0, v_o_3138_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
lean_inc_ref(v_name_3139_);
v___x_3144_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3144_, 0, v_name_3139_);
v___x_3145_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_3146_ = lean_string_append(v___x_3145_, v_name_3139_);
lean_dec_ref(v_name_3139_);
v___x_3147_ = 205;
v___x_3148_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0);
v___x_3149_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3149_, 0, v_args_3140_);
v___x_3150_ = lean_unsigned_to_nat(3u);
v___x_3151_ = lean_mk_empty_array_with_capacity(v___x_3150_);
v___x_3152_ = lean_array_push(v___x_3151_, v___x_3143_);
v___x_3153_ = lean_array_push(v___x_3152_, v___x_3144_);
v___x_3154_ = lean_array_push(v___x_3153_, v___x_3149_);
v___x_3155_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
v___x_3156_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v___x_3146_, v___x_3147_, v___x_3148_, v___x_3155_, v___x_3142_);
return v___x_3156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___boxed(lean_object* v_o_3157_, lean_object* v_name_3158_, lean_object* v_args_3159_, lean_object* v___y_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_o_3157_, v_name_3158_, v_args_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock(lean_object* v_self_3163_, lean_object* v_exclusive_3164_){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3166_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLock___closed__0));
v___x_3167_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3164_);
v___x_3168_ = lean_unsigned_to_nat(1u);
v___x_3169_ = lean_mk_empty_array_with_capacity(v___x_3168_);
v___x_3170_ = lean_array_push(v___x_3169_, v___x_3167_);
v___x_3171_ = l_Lasm_JS_Web_Support_args(v___x_3170_);
v___x_3172_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_self_3163_, v___x_3166_, v___x_3171_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock___boxed(lean_object* v_self_3173_, lean_object* v_exclusive_3174_, lean_object* v_a_3175_){
_start:
{
lean_object* v_res_3176_; 
v_res_3176_ = l_Lasm_JS_Deno_FsFile_tryLock(v_self_3173_, v_exclusive_3174_);
lean_dec(v_exclusive_3174_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync(lean_object* v_self_3178_, lean_object* v_exclusive_3179_){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3181_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLockSync___closed__0));
v___x_3182_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3179_);
v___x_3183_ = lean_unsigned_to_nat(1u);
v___x_3184_ = lean_mk_empty_array_with_capacity(v___x_3183_);
v___x_3185_ = lean_array_push(v___x_3184_, v___x_3182_);
v___x_3186_ = l_Lasm_JS_Web_Support_args(v___x_3185_);
v___x_3187_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_3178_, v___x_3181_, v___x_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync___boxed(lean_object* v_self_3188_, lean_object* v_exclusive_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = l_Lasm_JS_Deno_FsFile_tryLockSync(v_self_3188_, v_exclusive_3189_);
lean_dec(v_exclusive_3189_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock(lean_object* v_self_3193_){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3195_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlock___closed__0));
v___x_3196_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3197_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3193_, v___x_3195_, v___x_3196_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock___boxed(lean_object* v_self_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lasm_JS_Deno_FsFile_unlock(v_self_3198_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync(lean_object* v_self_3202_){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3204_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlockSync___closed__0));
v___x_3205_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3206_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3202_, v___x_3204_, v___x_3205_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync___boxed(lean_object* v_self_3207_, lean_object* v_a_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Lasm_JS_Deno_FsFile_unlockSync(v_self_3207_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close(lean_object* v_self_3211_){
_start:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; 
v___x_3213_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3214_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3215_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3211_, v___x_3213_, v___x_3214_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close___boxed(lean_object* v_self_3216_, lean_object* v_a_3217_){
_start:
{
lean_object* v_res_3218_; 
v_res_3218_ = l_Lasm_JS_Deno_FsFile_close(v_self_3216_);
return v_res_3218_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3219_; uint8_t v___x_3220_; uint64_t v___x_3221_; 
v___x_3219_ = 0ULL;
v___x_3220_ = 0;
v___x_3221_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_3220_, v___x_3219_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(lean_object* v_f_3223_, lean_object* v_args_3224_, lean_object* v_this_3225_){
_start:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; uint64_t v___x_3229_; lean_object* v___x_3230_; 
v___x_3227_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3228_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3228_, 0, v_f_3223_);
lean_ctor_set(v___x_3228_, 1, v___x_3227_);
v___x_3229_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0);
v___x_3230_ = l_Lasm_JS_Value_invokeRaw(v___x_3228_, v_this_3225_, v_args_3224_, v___x_3229_);
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v___x_3230_, 1);
v___x_3232_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__1));
v___x_3233_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3232_, v_a_3231_);
lean_dec(v_a_3231_);
return v___x_3233_;
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
v_a_3234_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3230_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3230_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___boxed(lean_object* v_f_3242_, lean_object* v_args_3243_, lean_object* v_this_3244_, lean_object* v_a_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_f_3242_, v_args_3243_, v_this_3244_);
return v_res_3246_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3247_; uint64_t v___x_3248_; 
v___x_3247_ = 1;
v___x_3248_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3247_);
return v___x_3248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(lean_object* v_o_3250_, lean_object* v_key_3251_){
_start:
{
lean_object* v___x_3253_; lean_object* v_k_3254_; lean_object* v___x_3255_; 
v___x_3253_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_k_3254_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_3254_, 0, v_key_3251_);
lean_ctor_set(v_k_3254_, 1, v___x_3253_);
v___x_3255_ = l_Lasm_JS_Wire_encodeIO(v_k_3254_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v_a_3256_; uint32_t v___x_3257_; uint32_t v___x_3258_; uint64_t v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; 
v_a_3256_ = lean_ctor_get(v___x_3255_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v___x_3255_, 1);
v___x_3257_ = 203;
v___x_3258_ = lasm_js_value_handle(v_o_3250_);
v___x_3259_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
v___x_3260_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3260_, 0, v_o_3250_);
lean_ctor_set(v___x_3260_, 1, v___x_3253_);
v___x_3261_ = lean_unsigned_to_nat(2u);
v___x_3262_ = lean_mk_empty_array_with_capacity(v___x_3261_);
lean_inc_ref(v_k_3254_);
v___x_3263_ = lean_array_push(v___x_3262_, v_k_3254_);
v___x_3264_ = lean_array_push(v___x_3263_, v___x_3260_);
v___x_3265_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3264_);
v___x_3266_ = lasm_js_call(v___x_3257_, v___x_3258_, v___x_3259_, v_a_3256_, v___x_3265_);
lean_dec_ref_known(v___x_3265_, 1);
lean_dec(v_a_3256_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3266_, 1);
v___x_3268_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3269_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3254_);
v___x_3270_ = lean_string_append(v___x_3268_, v___x_3269_);
lean_dec_ref(v___x_3269_);
v___x_3271_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3270_, v_a_3267_);
lean_dec(v_a_3267_);
lean_dec_ref(v___x_3270_);
return v___x_3271_;
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3279_; 
lean_dec_ref_known(v_k_3254_, 2);
v_a_3272_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3274_ = v___x_3266_;
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3266_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3277_; 
if (v_isShared_3275_ == 0)
{
v___x_3277_ = v___x_3274_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_a_3272_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
lean_dec_ref_known(v_k_3254_, 2);
lean_dec(v_o_3250_);
v_a_3280_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3255_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3255_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___boxed(lean_object* v_o_3288_, lean_object* v_key_3289_, lean_object* v_a_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_o_3288_, v_key_3289_);
return v_res_3291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(lean_object* v_self_3294_){
_start:
{
lean_object* v___x_3296_; 
v___x_3296_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v_a_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_a_3297_);
lean_dec_ref_known(v___x_3296_, 1);
v___x_3298_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3299_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3297_, v___x_3298_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
lean_inc(v_a_3300_);
lean_dec_ref_known(v___x_3299_, 1);
v___x_3301_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3302_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3300_, v___x_3301_);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v_a_3303_; lean_object* v___x_3304_; 
v_a_3303_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_a_3303_);
lean_dec_ref_known(v___x_3302_, 1);
lean_inc(v_self_3294_);
v___x_3304_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3294_, v_a_3303_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_object* v_a_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
v_a_3305_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_a_3305_);
lean_dec_ref_known(v___x_3304_, 1);
v___x_3306_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3307_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3308_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3308_, 0, v_self_3294_);
lean_ctor_set(v___x_3308_, 1, v___x_3307_);
v___x_3309_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3305_, v___x_3306_, v___x_3308_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3317_; 
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3312_ = v___x_3309_;
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___x_3309_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
v_a_3318_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3309_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3309_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
else
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
lean_dec(v_self_3294_);
v_a_3326_ = lean_ctor_get(v___x_3304_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3304_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3328_ = v___x_3304_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3304_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3326_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
}
else
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3341_; 
lean_dec(v_self_3294_);
v_a_3334_ = lean_ctor_get(v___x_3302_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3336_ = v___x_3302_;
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v___x_3302_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3349_; 
lean_dec(v_self_3294_);
v_a_3342_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3344_ = v___x_3299_;
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3299_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3342_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
lean_dec(v_self_3294_);
v_a_3350_ = lean_ctor_get(v___x_3296_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3352_ = v___x_3296_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3296_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_a_3350_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___boxed(lean_object* v_self_3358_, lean_object* v_a_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3358_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(lean_object* v_x_3361_){
_start:
{
if (lean_obj_tag(v_x_3361_) == 0)
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3371_; 
v_a_3363_ = lean_ctor_get(v_x_3361_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v_x_3361_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3365_ = v_x_3361_;
v_isShared_3366_ = v_isSharedCheck_3371_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v_x_3361_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3371_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v___x_3368_; 
if (v_isShared_3366_ == 0)
{
v___x_3368_ = v___x_3365_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3363_);
v___x_3368_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
lean_object* v___x_3369_; 
v___x_3369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3368_);
return v___x_3369_;
}
}
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3381_; 
v_a_3372_ = lean_ctor_get(v_x_3361_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v_x_3361_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3374_ = v_x_3361_;
v_isShared_3375_ = v_isSharedCheck_3381_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v_x_3361_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3381_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; lean_object* v___x_3378_; 
v___x_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3376_, 0, v_a_3372_);
if (v_isShared_3375_ == 0)
{
lean_ctor_set(v___x_3374_, 0, v___x_3376_);
v___x_3378_ = v___x_3374_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v___x_3376_);
v___x_3378_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
lean_object* v___x_3379_; 
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
return v___x_3379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0___boxed(lean_object* v_x_3382_, lean_object* v___y_3383_){
_start:
{
lean_object* v_res_3384_; 
v_res_3384_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(v_x_3382_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_3385_, lean_object* v_d_3386_){
_start:
{
lean_object* v___y_3389_; lean_object* v___y_3390_; lean_object* v___y_3395_; lean_object* v_received_3396_; lean_object* v___y_3415_; lean_object* v_a_3418_; lean_object* v___x_3442_; lean_object* v___x_3443_; 
v___x_3442_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0));
lean_inc(v_d_3386_);
v___x_3443_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3386_, v___x_3442_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref_known(v___x_3443_, 1);
v_a_3418_ = v_a_3444_;
goto v___jp_3417_;
}
else
{
lean_object* v_a_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v_a_3445_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3445_);
lean_dec_ref_known(v___x_3443_, 1);
v___x_3446_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc(v_d_3386_);
v___x_3447_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3386_, v___x_3446_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v_a_3448_; 
lean_dec(v_a_3445_);
v_a_3448_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3448_);
lean_dec_ref_known(v___x_3447_, 1);
v_a_3418_ = v_a_3448_;
goto v___jp_3417_;
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v_a_3449_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3449_);
lean_dec_ref_known(v___x_3447_, 1);
v___x_3450_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc(v_d_3386_);
v___x_3451_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3386_, v___x_3450_);
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_object* v_a_3452_; 
lean_dec(v_a_3449_);
lean_dec(v_a_3445_);
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_a_3452_);
lean_dec_ref_known(v___x_3451_, 1);
v_a_3418_ = v_a_3452_;
goto v___jp_3417_;
}
else
{
lean_object* v_a_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v_a_3453_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_a_3453_);
lean_dec_ref_known(v___x_3451_, 1);
v___x_3454_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
lean_inc(v_d_3386_);
v___x_3455_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3386_, v___x_3454_);
if (lean_obj_tag(v___x_3455_) == 0)
{
lean_object* v_a_3456_; 
lean_dec(v_a_3453_);
lean_dec(v_a_3449_);
lean_dec(v_a_3445_);
v_a_3456_ = lean_ctor_get(v___x_3455_, 0);
lean_inc(v_a_3456_);
lean_dec_ref_known(v___x_3455_, 1);
v_a_3418_ = v_a_3456_;
goto v___jp_3417_;
}
else
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3468_; 
lean_dec(v_d_3386_);
v_a_3457_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3459_ = v___x_3455_;
v_isShared_3460_ = v_isSharedCheck_3468_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3455_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3468_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3461_; uint8_t v___x_3462_; uint8_t v___x_3463_; uint8_t v___x_3464_; lean_object* v___x_3466_; 
v___x_3461_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3461_, 0, v_a_3445_);
v___x_3462_ = lean_unbox(v_a_3449_);
lean_dec(v_a_3449_);
lean_ctor_set_uint8(v___x_3461_, sizeof(void*)*1, v___x_3462_);
v___x_3463_ = lean_unbox(v_a_3453_);
lean_dec(v_a_3453_);
lean_ctor_set_uint8(v___x_3461_, sizeof(void*)*1 + 1, v___x_3463_);
v___x_3464_ = lean_unbox(v_a_3457_);
lean_dec(v_a_3457_);
lean_ctor_set_uint8(v___x_3461_, sizeof(void*)*1 + 2, v___x_3464_);
if (v_isShared_3460_ == 0)
{
lean_ctor_set_tag(v___x_3459_, 0);
lean_ctor_set(v___x_3459_, 0, v___x_3461_);
v___x_3466_ = v___x_3459_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v___x_3461_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
}
}
v___jp_3388_:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3391_ = lean_string_append(v___y_3389_, v___y_3390_);
lean_dec_ref(v___y_3390_);
v___x_3392_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3391_);
v___x_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
return v___x_3393_;
}
v___jp_3394_:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; uint8_t v___x_3408_; 
v___x_3397_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_3398_ = lean_string_append(v___x_3397_, v_context_3385_);
v___x_3399_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_3400_ = lean_string_append(v___x_3398_, v___x_3399_);
v___x_3401_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___closed__1));
v___x_3402_ = lean_string_append(v___x_3400_, v___x_3401_);
v___x_3403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_3404_ = lean_string_append(v___x_3402_, v___x_3403_);
v___x_3405_ = lean_string_append(v___x_3404_, v_received_3396_);
lean_dec_ref(v_received_3396_);
v___x_3406_ = lean_string_utf8_byte_size(v___y_3395_);
v___x_3407_ = lean_unsigned_to_nat(0u);
v___x_3408_ = lean_nat_dec_eq(v___x_3406_, v___x_3407_);
if (v___x_3408_ == 0)
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3410_ = lean_string_append(v___x_3409_, v___y_3395_);
lean_dec_ref(v___y_3395_);
v___x_3411_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3412_ = lean_string_append(v___x_3410_, v___x_3411_);
v___y_3389_ = v___x_3405_;
v___y_3390_ = v___x_3412_;
goto v___jp_3388_;
}
else
{
lean_object* v___x_3413_; 
lean_dec_ref(v___y_3395_);
v___x_3413_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_3389_ = v___x_3405_;
v___y_3390_ = v___x_3413_;
goto v___jp_3388_;
}
}
v___jp_3414_:
{
lean_object* v___x_3416_; 
v___x_3416_ = l_Lasm_JS_Data_describe(v_d_3386_);
v___y_3395_ = v___y_3415_;
v_received_3396_ = v___x_3416_;
goto v___jp_3394_;
}
v___jp_3417_:
{
if (lean_obj_tag(v_d_3386_) == 9)
{
lean_object* v_value_3419_; lean_object* v_description_3420_; lean_object* v___x_3421_; uint8_t v___x_3422_; 
v_value_3419_ = lean_ctor_get(v_d_3386_, 0);
v_description_3420_ = lean_ctor_get(v_d_3386_, 1);
v___x_3421_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3422_ = lean_string_dec_eq(v_description_3420_, v___x_3421_);
if (v___x_3422_ == 0)
{
v___y_3415_ = v_a_3418_;
goto v___jp_3414_;
}
else
{
lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3439_; 
lean_inc(v_value_3419_);
v_isSharedCheck_3439_ = !lean_is_exclusive(v_d_3386_);
if (v_isSharedCheck_3439_ == 0)
{
lean_object* v_unused_3440_; lean_object* v_unused_3441_; 
v_unused_3440_ = lean_ctor_get(v_d_3386_, 1);
lean_dec(v_unused_3440_);
v_unused_3441_ = lean_ctor_get(v_d_3386_, 0);
lean_dec(v_unused_3441_);
v___x_3424_ = v_d_3386_;
v_isShared_3425_ = v_isSharedCheck_3439_;
goto v_resetjp_3423_;
}
else
{
lean_dec(v_d_3386_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3439_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
uint32_t v___x_3426_; uint64_t v___x_3427_; lean_object* v___x_3429_; 
v___x_3426_ = 206;
v___x_3427_ = 0ULL;
lean_inc(v_value_3419_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 1, v___x_3421_);
v___x_3429_ = v___x_3424_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_value_3419_);
lean_ctor_set(v_reuseFailAlloc_3438_, 1, v___x_3421_);
v___x_3429_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
uint32_t v___x_3430_; lean_object* v___x_3431_; 
v___x_3430_ = lasm_js_value_handle(v_value_3419_);
lean_dec(v_value_3419_);
v___x_3431_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3426_, v___x_3427_, v___x_3429_, v___x_3430_);
lean_dec_ref(v___x_3429_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; uint8_t v___x_3433_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v___x_3431_, 1);
v___x_3433_ = lean_string_validate_utf8(v_a_3432_);
if (v___x_3433_ == 0)
{
lean_object* v___x_3434_; lean_object* v___x_3435_; 
lean_dec(v_a_3432_);
v___x_3434_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_3435_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3434_);
v___y_3395_ = v_a_3418_;
v_received_3396_ = v___x_3435_;
goto v___jp_3394_;
}
else
{
lean_object* v___x_3436_; 
v___x_3436_ = lean_string_from_utf8_unchecked(v_a_3432_);
v___y_3395_ = v_a_3418_;
v_received_3396_ = v___x_3436_;
goto v___jp_3394_;
}
}
else
{
lean_object* v___x_3437_; 
lean_dec_ref_known(v___x_3431_, 1);
v___x_3437_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_3395_ = v_a_3418_;
v_received_3396_ = v___x_3437_;
goto v___jp_3394_;
}
}
}
}
}
else
{
v___y_3415_ = v_a_3418_;
goto v___jp_3414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3469_, lean_object* v_d_3470_, lean_object* v_a_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3469_, v_d_3470_);
lean_dec_ref(v_context_3469_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(lean_object* v_context_3473_, lean_object* v_bytes_3474_){
_start:
{
lean_object* v___x_3476_; 
v___x_3476_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3474_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3478_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
lean_dec_ref_known(v___x_3476_, 1);
v___x_3478_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3473_, v_a_3477_);
return v___x_3478_;
}
else
{
lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
v_a_3479_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3481_ = v___x_3476_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3476_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_a_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_3487_, lean_object* v_bytes_3488_, lean_object* v_a_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v_context_3487_, v_bytes_3488_);
lean_dec_ref(v_bytes_3488_);
lean_dec_ref(v_context_3487_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(lean_object* v_o_3491_, lean_object* v_key_3492_){
_start:
{
lean_object* v_k_3494_; lean_object* v___x_3495_; 
v_k_3494_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3494_, 0, v_key_3492_);
v___x_3495_ = l_Lasm_JS_Wire_encodeIO(v_k_3494_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; uint32_t v___x_3497_; uint32_t v___x_3498_; uint64_t v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
lean_dec_ref_known(v___x_3495_, 1);
v___x_3497_ = 203;
v___x_3498_ = lasm_js_value_handle(v_o_3491_);
v___x_3499_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_3500_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3501_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3501_, 0, v_o_3491_);
lean_ctor_set(v___x_3501_, 1, v___x_3500_);
v___x_3502_ = lean_unsigned_to_nat(2u);
v___x_3503_ = lean_mk_empty_array_with_capacity(v___x_3502_);
lean_inc_ref(v_k_3494_);
v___x_3504_ = lean_array_push(v___x_3503_, v_k_3494_);
v___x_3505_ = lean_array_push(v___x_3504_, v___x_3501_);
v___x_3506_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3505_);
v___x_3507_ = lasm_js_call(v___x_3497_, v___x_3498_, v___x_3499_, v_a_3496_, v___x_3506_);
lean_dec_ref_known(v___x_3506_, 1);
lean_dec(v_a_3496_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v_a_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
lean_inc(v_a_3508_);
lean_dec_ref_known(v___x_3507_, 1);
v___x_3509_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3510_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3494_);
v___x_3511_ = lean_string_append(v___x_3509_, v___x_3510_);
lean_dec_ref(v___x_3510_);
v___x_3512_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v___x_3511_, v_a_3508_);
lean_dec(v_a_3508_);
lean_dec_ref(v___x_3511_);
return v___x_3512_;
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
lean_dec_ref_known(v_k_3494_, 1);
v_a_3513_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3507_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3507_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
lean_dec_ref_known(v_k_3494_, 1);
lean_dec(v_o_3491_);
v_a_3521_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_3495_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3495_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0___boxed(lean_object* v_o_3529_, lean_object* v_key_3530_, lean_object* v_a_3531_){
_start:
{
lean_object* v_res_3532_; 
v_res_3532_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_o_3529_, v_key_3530_);
return v_res_3532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(lean_object* v___f_3538_, lean_object* v_a_3539_, lean_object* v_x_3540_){
_start:
{
if (lean_obj_tag(v_x_3540_) == 0)
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3550_; 
lean_dec(v_a_3539_);
lean_dec_ref(v___f_3538_);
v_a_3542_ = lean_ctor_get(v_x_3540_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_x_3540_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3544_ = v_x_3540_;
v_isShared_3545_ = v_isSharedCheck_3550_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v_x_3540_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3550_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3547_; 
if (v_isShared_3545_ == 0)
{
v___x_3547_ = v___x_3544_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3542_);
v___x_3547_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
lean_object* v___x_3548_; 
v___x_3548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3547_);
return v___x_3548_;
}
}
}
else
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3573_; 
v_a_3551_ = lean_ctor_get(v_x_3540_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v_x_3540_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3553_ = v_x_3540_;
v_isShared_3554_ = v_isSharedCheck_3573_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v_x_3540_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3573_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
uint8_t v___x_3555_; 
v___x_3555_ = lean_unbox(v_a_3551_);
if (v___x_3555_ == 0)
{
lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v_val_3559_; lean_object* v___x_3563_; 
v___x_3556_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_3557_ = lean_unsigned_to_nat(0u);
v___x_3563_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_a_3539_, v___x_3556_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3566_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3564_);
lean_dec_ref_known(v___x_3563_, 1);
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 0, v_a_3564_);
v___x_3566_ = v___x_3553_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3564_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
v_val_3559_ = v___x_3566_;
goto v___jp_3558_;
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; 
v_a_3568_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3568_);
lean_dec_ref_known(v___x_3563_, 1);
if (v_isShared_3554_ == 0)
{
lean_ctor_set_tag(v___x_3553_, 0);
lean_ctor_set(v___x_3553_, 0, v_a_3568_);
v___x_3570_ = v___x_3553_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3568_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
v_val_3559_ = v___x_3570_;
goto v___jp_3558_;
}
}
v___jp_3558_:
{
lean_object* v___x_3560_; uint8_t v___x_3561_; lean_object* v___x_3562_; 
v___x_3560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3560_, 0, v_val_3559_);
v___x_3561_ = lean_unbox(v_a_3551_);
lean_dec(v_a_3551_);
v___x_3562_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3557_, v___x_3561_, v___x_3560_, v___f_3538_);
return v___x_3562_;
}
}
else
{
lean_object* v___x_3572_; 
lean_del_object(v___x_3553_);
lean_dec(v_a_3551_);
lean_dec(v_a_3539_);
lean_dec_ref(v___f_3538_);
v___x_3572_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__2));
return v___x_3572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed(lean_object* v___f_3574_, lean_object* v_a_3575_, lean_object* v_x_3576_, lean_object* v___y_3577_){
_start:
{
lean_object* v_res_3578_; 
v_res_3578_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(v___f_3574_, v_a_3575_, v_x_3576_);
return v_res_3578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(lean_object* v___f_3580_, lean_object* v_x_3581_){
_start:
{
if (lean_obj_tag(v_x_3581_) == 0)
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3591_; 
lean_dec_ref(v___f_3580_);
v_a_3583_ = lean_ctor_get(v_x_3581_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v_x_3581_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3585_ = v_x_3581_;
v_isShared_3586_ = v_isSharedCheck_3591_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v_x_3581_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3591_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
lean_object* v___x_3589_; 
v___x_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
return v___x_3589_;
}
}
}
else
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3613_; 
v_a_3592_ = lean_ctor_get(v_x_3581_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v_x_3581_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3594_ = v_x_3581_;
v_isShared_3595_ = v_isSharedCheck_3613_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v_x_3581_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3613_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___f_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; uint8_t v___x_3599_; lean_object* v_val_3601_; lean_object* v___x_3604_; 
lean_inc(v_a_3592_);
v___f_3596_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3596_, 0, v___f_3580_);
lean_closure_set(v___f_3596_, 1, v_a_3592_);
v___x_3597_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_3598_ = lean_unsigned_to_nat(0u);
v___x_3599_ = 0;
v___x_3604_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_3592_, v___x_3597_);
if (lean_obj_tag(v___x_3604_) == 0)
{
lean_object* v_a_3605_; lean_object* v___x_3607_; 
v_a_3605_ = lean_ctor_get(v___x_3604_, 0);
lean_inc(v_a_3605_);
lean_dec_ref_known(v___x_3604_, 1);
if (v_isShared_3595_ == 0)
{
lean_ctor_set(v___x_3594_, 0, v_a_3605_);
v___x_3607_ = v___x_3594_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3605_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
v_val_3601_ = v___x_3607_;
goto v___jp_3600_;
}
}
else
{
lean_object* v_a_3609_; lean_object* v___x_3611_; 
v_a_3609_ = lean_ctor_get(v___x_3604_, 0);
lean_inc(v_a_3609_);
lean_dec_ref_known(v___x_3604_, 1);
if (v_isShared_3595_ == 0)
{
lean_ctor_set_tag(v___x_3594_, 0);
lean_ctor_set(v___x_3594_, 0, v_a_3609_);
v___x_3611_ = v___x_3594_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v_a_3609_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
v_val_3601_ = v___x_3611_;
goto v___jp_3600_;
}
}
v___jp_3600_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; 
v___x_3602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3602_, 0, v_val_3601_);
v___x_3603_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3598_, v___x_3599_, v___x_3602_, v___f_3596_);
return v___x_3603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___boxed(lean_object* v___f_3614_, lean_object* v_x_3615_, lean_object* v___y_3616_){
_start:
{
lean_object* v_res_3617_; 
v_res_3617_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(v___f_3614_, v_x_3615_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(lean_object* v_it_3622_){
_start:
{
lean_object* v___f_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; uint8_t v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v___f_3624_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__1));
v___x_3625_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_3626_ = lean_unsigned_to_nat(0u);
v___x_3627_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3628_ = 0;
v___x_3629_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_3622_, v___x_3625_, v___x_3627_);
v___x_3630_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3626_, v___x_3628_, v___x_3629_, v___f_3624_);
return v___x_3630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___boxed(lean_object* v_it_3631_, lean_object* v_a_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3631_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(lean_object* v_acc_3634_, lean_object* v_it_3635_, lean_object* v_x_3636_){
_start:
{
if (lean_obj_tag(v_x_3636_) == 0)
{
lean_object* v_a_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3646_; 
lean_dec(v_it_3635_);
lean_dec_ref(v_acc_3634_);
v_a_3638_ = lean_ctor_get(v_x_3636_, 0);
v_isSharedCheck_3646_ = !lean_is_exclusive(v_x_3636_);
if (v_isSharedCheck_3646_ == 0)
{
v___x_3640_ = v_x_3636_;
v_isShared_3641_ = v_isSharedCheck_3646_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_a_3638_);
lean_dec(v_x_3636_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3646_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
lean_object* v___x_3643_; 
if (v_isShared_3641_ == 0)
{
v___x_3643_ = v___x_3640_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_a_3638_);
v___x_3643_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
lean_object* v___x_3644_; 
v___x_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3643_);
return v___x_3644_;
}
}
}
else
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3658_; 
v_a_3647_ = lean_ctor_get(v_x_3636_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v_x_3636_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3649_ = v_x_3636_;
v_isShared_3650_ = v_isSharedCheck_3658_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v_x_3636_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3658_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
if (lean_obj_tag(v_a_3647_) == 0)
{
lean_object* v___x_3652_; 
lean_dec(v_it_3635_);
if (v_isShared_3650_ == 0)
{
lean_ctor_set(v___x_3649_, 0, v_acc_3634_);
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_acc_3634_);
v___x_3652_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
lean_object* v___x_3653_; 
v___x_3653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3653_, 0, v___x_3652_);
return v___x_3653_;
}
}
else
{
lean_object* v_val_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
lean_del_object(v___x_3649_);
v_val_3655_ = lean_ctor_get(v_a_3647_, 0);
lean_inc(v_val_3655_);
lean_dec_ref_known(v_a_3647_, 1);
v___x_3656_ = lean_array_push(v_acc_3634_, v_val_3655_);
v___x_3657_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3635_, v___x_3656_);
return v___x_3657_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed(lean_object* v_acc_3659_, lean_object* v_it_3660_, lean_object* v_x_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(v_acc_3659_, v_it_3660_, v_x_3661_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(lean_object* v_it_3664_, lean_object* v_acc_3665_){
_start:
{
lean_object* v___f_3667_; lean_object* v___x_3668_; uint8_t v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
lean_inc(v_it_3664_);
v___f_3667_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3667_, 0, v_acc_3665_);
lean_closure_set(v___f_3667_, 1, v_it_3664_);
v___x_3668_ = lean_unsigned_to_nat(0u);
v___x_3669_ = 0;
v___x_3670_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3664_);
v___x_3671_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3668_, v___x_3669_, v___x_3670_, v___f_3667_);
return v___x_3671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___boxed(lean_object* v_it_3672_, lean_object* v_acc_3673_, lean_object* v_a_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3672_, v_acc_3673_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(lean_object* v_x_3678_){
_start:
{
if (lean_obj_tag(v_x_3678_) == 0)
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3688_; 
v_a_3680_ = lean_ctor_get(v_x_3678_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v_x_3678_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3682_ = v_x_3678_;
v_isShared_3683_ = v_isSharedCheck_3688_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v_x_3678_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3688_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_a_3680_);
v___x_3685_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
lean_object* v___x_3686_; 
v___x_3686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3685_);
return v___x_3686_;
}
}
}
else
{
lean_object* v_a_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v_a_3689_ = lean_ctor_get(v_x_3678_, 0);
lean_inc(v_a_3689_);
lean_dec_ref_known(v_x_3678_, 1);
v___x_3690_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___closed__0));
v___x_3691_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_a_3689_, v___x_3690_);
return v___x_3691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___boxed(lean_object* v_x_3692_, lean_object* v___y_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(v_x_3692_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values(lean_object* v_self_3696_){
_start:
{
lean_object* v___f_3698_; lean_object* v___x_3699_; uint8_t v___x_3700_; lean_object* v_val_3702_; lean_object* v___x_3705_; 
v___f_3698_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___closed__0));
v___x_3699_ = lean_unsigned_to_nat(0u);
v___x_3700_ = 0;
v___x_3705_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3696_);
if (lean_obj_tag(v___x_3705_) == 0)
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3713_; 
v_a_3706_ = lean_ctor_get(v___x_3705_, 0);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3705_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3708_ = v___x_3705_;
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v___x_3705_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3711_; 
if (v_isShared_3709_ == 0)
{
lean_ctor_set_tag(v___x_3708_, 1);
v___x_3711_ = v___x_3708_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v_a_3706_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
v_val_3702_ = v___x_3711_;
goto v___jp_3701_;
}
}
}
else
{
lean_object* v_a_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3721_; 
v_a_3714_ = lean_ctor_get(v___x_3705_, 0);
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3705_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3716_ = v___x_3705_;
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_a_3714_);
lean_dec(v___x_3705_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3719_; 
if (v_isShared_3717_ == 0)
{
lean_ctor_set_tag(v___x_3716_, 0);
v___x_3719_ = v___x_3716_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v_a_3714_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
v_val_3702_ = v___x_3719_;
goto v___jp_3701_;
}
}
}
v___jp_3701_:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3703_, 0, v_val_3702_);
v___x_3704_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3699_, v___x_3700_, v___x_3703_, v___f_3698_);
return v___x_3704_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___boxed(lean_object* v_self_3722_, lean_object* v_a_3723_){
_start:
{
lean_object* v_res_3724_; 
v_res_3724_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values(v_self_3722_);
return v_res_3724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close(lean_object* v_self_3725_){
_start:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3727_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3728_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3729_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3725_, v___x_3727_, v___x_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close___boxed(lean_object* v_self_3730_, lean_object* v_a_3731_){
_start:
{
lean_object* v_res_3732_; 
v_res_3732_ = l_Lasm_JS_Deno_FsWatcher_close(v_self_3730_);
return v_res_3732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator(lean_object* v_self_3733_){
_start:
{
lean_object* v___x_3735_; 
v___x_3735_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3735_) == 0)
{
lean_object* v_a_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
v_a_3736_ = lean_ctor_get(v___x_3735_, 0);
lean_inc(v_a_3736_);
lean_dec_ref_known(v___x_3735_, 1);
v___x_3737_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3738_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3736_, v___x_3737_);
if (lean_obj_tag(v___x_3738_) == 0)
{
lean_object* v_a_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
v_a_3739_ = lean_ctor_get(v___x_3738_, 0);
lean_inc(v_a_3739_);
lean_dec_ref_known(v___x_3738_, 1);
v___x_3740_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3741_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3739_, v___x_3740_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_a_3742_; lean_object* v___x_3743_; 
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
lean_inc(v_a_3742_);
lean_dec_ref_known(v___x_3741_, 1);
lean_inc(v_self_3733_);
v___x_3743_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3733_, v_a_3742_);
if (lean_obj_tag(v___x_3743_) == 0)
{
lean_object* v_a_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_a_3744_);
lean_dec_ref_known(v___x_3743_, 1);
v___x_3745_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3746_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3747_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3747_, 0, v_self_3733_);
lean_ctor_set(v___x_3747_, 1, v___x_3746_);
v___x_3748_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3744_, v___x_3745_, v___x_3747_);
if (lean_obj_tag(v___x_3748_) == 0)
{
lean_object* v_a_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3756_; 
v_a_3749_ = lean_ctor_get(v___x_3748_, 0);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3748_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3751_ = v___x_3748_;
v_isShared_3752_ = v_isSharedCheck_3756_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_a_3749_);
lean_dec(v___x_3748_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3756_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3754_; 
if (v_isShared_3752_ == 0)
{
v___x_3754_ = v___x_3751_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v_a_3749_);
v___x_3754_ = v_reuseFailAlloc_3755_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
return v___x_3754_;
}
}
}
else
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3764_; 
v_a_3757_ = lean_ctor_get(v___x_3748_, 0);
v_isSharedCheck_3764_ = !lean_is_exclusive(v___x_3748_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3759_ = v___x_3748_;
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v___x_3748_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3762_; 
if (v_isShared_3760_ == 0)
{
v___x_3762_ = v___x_3759_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v_a_3757_);
v___x_3762_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
return v___x_3762_;
}
}
}
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
lean_dec(v_self_3733_);
v_a_3765_ = lean_ctor_get(v___x_3743_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3743_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3743_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_a_3765_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
}
}
else
{
lean_object* v_a_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3780_; 
lean_dec(v_self_3733_);
v_a_3773_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3780_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3780_ == 0)
{
v___x_3775_ = v___x_3741_;
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_a_3773_);
lean_dec(v___x_3741_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3778_; 
if (v_isShared_3776_ == 0)
{
v___x_3778_ = v___x_3775_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v_a_3773_);
v___x_3778_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
return v___x_3778_;
}
}
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
lean_dec(v_self_3733_);
v_a_3781_ = lean_ctor_get(v___x_3738_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3738_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___x_3738_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3738_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
lean_dec(v_self_3733_);
v_a_3789_ = lean_ctor_get(v___x_3735_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3735_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3735_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator___boxed(lean_object* v_self_3797_, lean_object* v_a_3798_){
_start:
{
lean_object* v_res_3799_; 
v_res_3799_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_3797_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(lean_object* v_x_3800_){
_start:
{
if (lean_obj_tag(v_x_3800_) == 0)
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3810_; 
v_a_3802_ = lean_ctor_get(v_x_3800_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v_x_3800_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3804_ = v_x_3800_;
v_isShared_3805_ = v_isSharedCheck_3810_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v_x_3800_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3810_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
return v___x_3808_;
}
}
}
else
{
lean_object* v_a_3811_; lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3820_; 
v_a_3811_ = lean_ctor_get(v_x_3800_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v_x_3800_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3813_ = v_x_3800_;
v_isShared_3814_ = v_isSharedCheck_3820_;
goto v_resetjp_3812_;
}
else
{
lean_inc(v_a_3811_);
lean_dec(v_x_3800_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3820_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___x_3815_; lean_object* v___x_3817_; 
v___x_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3815_, 0, v_a_3811_);
if (v_isShared_3814_ == 0)
{
lean_ctor_set(v___x_3813_, 0, v___x_3815_);
v___x_3817_ = v___x_3813_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v___x_3815_);
v___x_3817_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
lean_object* v___x_3818_; 
v___x_3818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
return v___x_3818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0___boxed(lean_object* v_x_3821_, lean_object* v___y_3822_){
_start:
{
lean_object* v_res_3823_; 
v_res_3823_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(v_x_3821_);
return v_res_3823_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3824_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0));
v___x_3825_ = lean_string_utf8_byte_size(v___x_3824_);
return v___x_3825_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3826_; lean_object* v___x_3827_; uint8_t v___x_3828_; 
v___x_3826_ = lean_unsigned_to_nat(0u);
v___x_3827_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_3828_ = lean_nat_dec_eq(v___x_3827_, v___x_3826_);
return v___x_3828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3832_, lean_object* v_key_3833_){
_start:
{
if (lean_obj_tag(v_d_3832_) == 8)
{
lean_object* v___x_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3880_; 
v___x_3834_ = l_Lasm_JS_Data_field(v_d_3832_, v_key_3833_);
v_isSharedCheck_3880_ = !lean_is_exclusive(v_d_3832_);
if (v_isSharedCheck_3880_ == 0)
{
lean_object* v_unused_3881_; 
v_unused_3881_ = lean_ctor_get(v_d_3832_, 0);
lean_dec(v_unused_3881_);
v___x_3836_ = v_d_3832_;
v_isShared_3837_ = v_isSharedCheck_3880_;
goto v_resetjp_3835_;
}
else
{
lean_dec(v_d_3832_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3880_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
if (lean_obj_tag(v___x_3834_) == 4)
{
lean_object* v_s_3858_; lean_object* v___x_3859_; uint8_t v___x_3860_; 
v_s_3858_ = lean_ctor_get(v___x_3834_, 0);
lean_inc_ref(v_s_3858_);
v___x_3859_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0));
v___x_3860_ = lean_string_dec_eq(v_s_3858_, v___x_3859_);
if (v___x_3860_ == 0)
{
lean_object* v___x_3861_; uint8_t v___x_3862_; 
v___x_3861_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2));
v___x_3862_ = lean_string_dec_eq(v_s_3858_, v___x_3861_);
if (v___x_3862_ == 0)
{
lean_object* v___x_3863_; uint8_t v___x_3864_; 
v___x_3863_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_3864_ = lean_string_dec_eq(v_s_3858_, v___x_3863_);
if (v___x_3864_ == 0)
{
lean_object* v___x_3865_; uint8_t v___x_3866_; 
v___x_3865_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6));
v___x_3866_ = lean_string_dec_eq(v_s_3858_, v___x_3865_);
if (v___x_3866_ == 0)
{
lean_object* v___x_3867_; uint8_t v___x_3868_; 
v___x_3867_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8));
v___x_3868_ = lean_string_dec_eq(v_s_3858_, v___x_3867_);
if (v___x_3868_ == 0)
{
lean_object* v___x_3869_; uint8_t v___x_3870_; 
v___x_3869_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10));
v___x_3870_ = lean_string_dec_eq(v_s_3858_, v___x_3869_);
if (v___x_3870_ == 0)
{
lean_object* v___x_3871_; uint8_t v___x_3872_; 
v___x_3871_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12));
v___x_3872_ = lean_string_dec_eq(v_s_3858_, v___x_3871_);
lean_dec_ref(v_s_3858_);
if (v___x_3872_ == 0)
{
goto v___jp_3838_;
}
else
{
lean_object* v___x_3873_; 
lean_dec_ref_known(v___x_3834_, 1);
lean_del_object(v___x_3836_);
v___x_3873_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2));
return v___x_3873_;
}
}
else
{
lean_object* v___x_3874_; 
lean_dec_ref(v_s_3858_);
lean_dec_ref_known(v___x_3834_, 1);
lean_del_object(v___x_3836_);
v___x_3874_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3));
return v___x_3874_;
}
}
else
{
lean_object* v___x_3875_; 
lean_dec_ref(v_s_3858_);
lean_dec_ref_known(v___x_3834_, 1);
lean_del_object(v___x_3836_);
v___x_3875_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4));
return v___x_3875_;
}
}
else
{
lean_object* v___x_3876_; 
lean_dec_ref(v_s_3858_);
lean_dec_ref_known(v___x_3834_, 1);
lean_del_object(v___x_3836_);
v___x_3876_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5));
return v___x_3876_;
}
}
else
{
lean_object* v___x_3877_; 
lean_dec_ref(v_s_3858_);
lean_dec_ref_known(v___x_3834_, 1);
lean_del_object(v___x_3836_);
v___x_3877_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6));
return v___x_3877_;
}
}
else
{
lean_object* v___x_3878_; 
lean_dec_ref(v_s_3858_);
lean_dec_ref_known(v___x_3834_, 1);
lean_del_object(v___x_3836_);
v___x_3878_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7));
return v___x_3878_;
}
}
else
{
lean_object* v___x_3879_; 
lean_dec_ref(v_s_3858_);
lean_dec_ref_known(v___x_3834_, 1);
lean_del_object(v___x_3836_);
v___x_3879_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8));
return v___x_3879_;
}
}
else
{
goto v___jp_3838_;
}
v___jp_3838_:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; uint8_t v___x_3849_; 
v___x_3839_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3840_ = lean_string_append(v___x_3839_, v_key_3833_);
v___x_3841_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3842_ = lean_string_append(v___x_3840_, v___x_3841_);
v___x_3843_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1));
v___x_3844_ = lean_string_append(v___x_3842_, v___x_3843_);
v___x_3845_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3846_ = lean_string_append(v___x_3844_, v___x_3845_);
v___x_3847_ = l_Lasm_JS_Data_describe(v___x_3834_);
v___x_3848_ = lean_string_append(v___x_3846_, v___x_3847_);
lean_dec_ref(v___x_3847_);
v___x_3849_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3849_ == 0)
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3853_; 
v___x_3850_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3851_ = lean_string_append(v___x_3848_, v___x_3850_);
if (v_isShared_3837_ == 0)
{
lean_ctor_set_tag(v___x_3836_, 0);
lean_ctor_set(v___x_3836_, 0, v___x_3851_);
v___x_3853_ = v___x_3836_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3851_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
else
{
lean_object* v___x_3856_; 
if (v_isShared_3837_ == 0)
{
lean_ctor_set_tag(v___x_3836_, 0);
lean_ctor_set(v___x_3836_, 0, v___x_3848_);
v___x_3856_ = v___x_3836_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3848_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
return v___x_3856_;
}
}
}
}
}
else
{
lean_object* v___x_3882_; 
lean_dec(v_d_3832_);
v___x_3882_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_3882_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3883_, lean_object* v_key_3884_){
_start:
{
lean_object* v_res_3885_; 
v_res_3885_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_3883_, v_key_3884_);
lean_dec_ref(v_key_3884_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3891_, lean_object* v_key_3892_){
_start:
{
if (lean_obj_tag(v_d_3891_) == 8)
{
lean_object* v___x_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3937_; 
v___x_3893_ = l_Lasm_JS_Data_field(v_d_3891_, v_key_3892_);
v_isSharedCheck_3937_ = !lean_is_exclusive(v_d_3891_);
if (v_isSharedCheck_3937_ == 0)
{
lean_object* v_unused_3938_; 
v_unused_3938_ = lean_ctor_get(v_d_3891_, 0);
lean_dec(v_unused_3938_);
v___x_3895_ = v_d_3891_;
v_isShared_3896_ = v_isSharedCheck_3937_;
goto v_resetjp_3894_;
}
else
{
lean_dec(v_d_3891_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3937_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v_a_3898_; 
if (lean_obj_tag(v___x_3893_) == 7)
{
lean_object* v_items_3923_; size_t v_sz_3924_; size_t v___x_3925_; lean_object* v___x_3926_; 
v_items_3923_ = lean_ctor_get(v___x_3893_, 0);
lean_inc_ref(v_items_3923_);
v_sz_3924_ = lean_array_size(v_items_3923_);
v___x_3925_ = ((size_t)0ULL);
v___x_3926_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_3924_, v___x_3925_, v_items_3923_);
if (lean_obj_tag(v___x_3926_) == 0)
{
lean_object* v_a_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; uint8_t v___x_3931_; 
v_a_3927_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_a_3927_);
lean_dec_ref_known(v___x_3926_, 1);
v___x_3928_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3929_ = lean_string_utf8_byte_size(v_a_3927_);
v___x_3930_ = lean_unsigned_to_nat(0u);
v___x_3931_ = lean_nat_dec_eq(v___x_3929_, v___x_3930_);
if (v___x_3931_ == 0)
{
lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3932_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_3933_ = lean_string_append(v___x_3932_, v_a_3927_);
lean_dec(v_a_3927_);
v___x_3934_ = lean_string_append(v___x_3928_, v___x_3933_);
lean_dec_ref(v___x_3933_);
v_a_3898_ = v___x_3934_;
goto v___jp_3897_;
}
else
{
lean_dec(v_a_3927_);
v_a_3898_ = v___x_3928_;
goto v___jp_3897_;
}
}
else
{
if (lean_obj_tag(v___x_3926_) == 0)
{
lean_object* v_a_3935_; 
v_a_3935_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_a_3935_);
lean_dec_ref_known(v___x_3926_, 1);
v_a_3898_ = v_a_3935_;
goto v___jp_3897_;
}
else
{
lean_dec_ref_known(v___x_3893_, 1);
lean_del_object(v___x_3895_);
return v___x_3926_;
}
}
}
else
{
lean_object* v___x_3936_; 
v___x_3936_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_a_3898_ = v___x_3936_;
goto v___jp_3897_;
}
v___jp_3897_:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; uint8_t v___x_3911_; 
v___x_3899_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3900_ = lean_string_append(v___x_3899_, v_key_3892_);
v___x_3901_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3902_ = lean_string_append(v___x_3900_, v___x_3901_);
v___x_3903_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0));
v___x_3904_ = lean_string_append(v___x_3902_, v___x_3903_);
v___x_3905_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3906_ = lean_string_append(v___x_3904_, v___x_3905_);
v___x_3907_ = l_Lasm_JS_Data_describe(v___x_3893_);
v___x_3908_ = lean_string_append(v___x_3906_, v___x_3907_);
lean_dec_ref(v___x_3907_);
v___x_3909_ = lean_string_utf8_byte_size(v_a_3898_);
v___x_3910_ = lean_unsigned_to_nat(0u);
v___x_3911_ = lean_nat_dec_eq(v___x_3909_, v___x_3910_);
if (v___x_3911_ == 0)
{
lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3918_; 
v___x_3912_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3913_ = lean_string_append(v___x_3912_, v_a_3898_);
lean_dec_ref(v_a_3898_);
v___x_3914_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3915_ = lean_string_append(v___x_3913_, v___x_3914_);
v___x_3916_ = lean_string_append(v___x_3908_, v___x_3915_);
lean_dec_ref(v___x_3915_);
if (v_isShared_3896_ == 0)
{
lean_ctor_set_tag(v___x_3895_, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3916_);
v___x_3918_ = v___x_3895_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v___x_3916_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
return v___x_3918_;
}
}
else
{
lean_object* v___x_3921_; 
lean_dec_ref(v_a_3898_);
if (v_isShared_3896_ == 0)
{
lean_ctor_set_tag(v___x_3895_, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3908_);
v___x_3921_ = v___x_3895_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v___x_3908_);
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
}
else
{
lean_object* v___x_3939_; 
lean_dec(v_d_3891_);
v___x_3939_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3));
return v___x_3939_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3940_, lean_object* v_key_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_3940_, v_key_3941_);
lean_dec_ref(v_key_3941_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_3952_, lean_object* v_key_3953_){
_start:
{
if (lean_obj_tag(v_d_3952_) == 8)
{
lean_object* v___x_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3984_; 
v___x_3956_ = l_Lasm_JS_Data_field(v_d_3952_, v_key_3953_);
v_isSharedCheck_3984_ = !lean_is_exclusive(v_d_3952_);
if (v_isSharedCheck_3984_ == 0)
{
lean_object* v_unused_3985_; 
v_unused_3985_ = lean_ctor_get(v_d_3952_, 0);
lean_dec(v_unused_3985_);
v___x_3958_ = v_d_3952_;
v_isShared_3959_ = v_isSharedCheck_3984_;
goto v_resetjp_3957_;
}
else
{
lean_dec(v_d_3952_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3984_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
switch(lean_obj_tag(v___x_3956_))
{
case 1:
{
lean_del_object(v___x_3958_);
goto v___jp_3954_;
}
case 0:
{
lean_del_object(v___x_3958_);
goto v___jp_3954_;
}
default: 
{
if (lean_obj_tag(v___x_3956_) == 4)
{
lean_object* v_s_3980_; lean_object* v___x_3981_; uint8_t v___x_3982_; 
v_s_3980_ = lean_ctor_get(v___x_3956_, 0);
lean_inc_ref(v_s_3980_);
v___x_3981_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0));
v___x_3982_ = lean_string_dec_eq(v_s_3980_, v___x_3981_);
lean_dec_ref(v_s_3980_);
if (v___x_3982_ == 0)
{
goto v___jp_3960_;
}
else
{
lean_object* v___x_3983_; 
lean_dec_ref_known(v___x_3956_, 1);
lean_del_object(v___x_3958_);
v___x_3983_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
return v___x_3983_;
}
}
else
{
goto v___jp_3960_;
}
}
}
v___jp_3960_:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; uint8_t v___x_3971_; 
v___x_3961_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3962_ = lean_string_append(v___x_3961_, v_key_3953_);
v___x_3963_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3964_ = lean_string_append(v___x_3962_, v___x_3963_);
v___x_3965_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_3966_ = lean_string_append(v___x_3964_, v___x_3965_);
v___x_3967_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3968_ = lean_string_append(v___x_3966_, v___x_3967_);
v___x_3969_ = l_Lasm_JS_Data_describe(v___x_3956_);
v___x_3970_ = lean_string_append(v___x_3968_, v___x_3969_);
lean_dec_ref(v___x_3969_);
v___x_3971_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3971_ == 0)
{
lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3975_; 
v___x_3972_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3973_ = lean_string_append(v___x_3970_, v___x_3972_);
if (v_isShared_3959_ == 0)
{
lean_ctor_set_tag(v___x_3958_, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3973_);
v___x_3975_ = v___x_3958_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v___x_3973_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
else
{
lean_object* v___x_3978_; 
if (v_isShared_3959_ == 0)
{
lean_ctor_set_tag(v___x_3958_, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3970_);
v___x_3978_ = v___x_3958_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v___x_3970_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
}
else
{
lean_object* v___x_3986_; 
lean_dec(v_d_3952_);
v___x_3986_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4));
return v___x_3986_;
}
v___jp_3954_:
{
lean_object* v___x_3955_; 
v___x_3955_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
return v___x_3955_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_3987_, lean_object* v_key_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_3987_, v_key_3988_);
lean_dec_ref(v_key_3988_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_3990_, lean_object* v_d_3991_){
_start:
{
lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_4000_; lean_object* v_received_4001_; lean_object* v___y_4020_; lean_object* v_a_4023_; lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4047_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0));
lean_inc(v_d_3991_);
v___x_4048_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_3991_, v___x_4047_);
if (lean_obj_tag(v___x_4048_) == 0)
{
lean_object* v_a_4049_; 
v_a_4049_ = lean_ctor_get(v___x_4048_, 0);
lean_inc(v_a_4049_);
lean_dec_ref_known(v___x_4048_, 1);
v_a_4023_ = v_a_4049_;
goto v___jp_4022_;
}
else
{
lean_object* v_a_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
v_a_4050_ = lean_ctor_get(v___x_4048_, 0);
lean_inc(v_a_4050_);
lean_dec_ref_known(v___x_4048_, 1);
v___x_4051_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1));
lean_inc(v_d_3991_);
v___x_4052_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_3991_, v___x_4051_);
if (lean_obj_tag(v___x_4052_) == 0)
{
lean_object* v_a_4053_; 
lean_dec(v_a_4050_);
v_a_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc(v_a_4053_);
lean_dec_ref_known(v___x_4052_, 1);
v_a_4023_ = v_a_4053_;
goto v___jp_4022_;
}
else
{
lean_object* v_a_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
v_a_4054_ = lean_ctor_get(v___x_4052_, 0);
lean_inc(v_a_4054_);
lean_dec_ref_known(v___x_4052_, 1);
v___x_4055_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2));
lean_inc(v_d_3991_);
v___x_4056_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_3991_, v___x_4055_);
if (lean_obj_tag(v___x_4056_) == 0)
{
lean_object* v_a_4057_; 
lean_dec(v_a_4054_);
lean_dec(v_a_4050_);
v_a_4057_ = lean_ctor_get(v___x_4056_, 0);
lean_inc(v_a_4057_);
lean_dec_ref_known(v___x_4056_, 1);
v_a_4023_ = v_a_4057_;
goto v___jp_4022_;
}
else
{
lean_object* v_a_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4067_; 
lean_dec(v_d_3991_);
v_a_4058_ = lean_ctor_get(v___x_4056_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_4056_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_4060_ = v___x_4056_;
v_isShared_4061_ = v_isSharedCheck_4067_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_a_4058_);
lean_dec(v___x_4056_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4067_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4062_; uint8_t v___x_4063_; lean_object* v___x_4065_; 
v___x_4062_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4062_, 0, v_a_4054_);
lean_ctor_set(v___x_4062_, 1, v_a_4058_);
v___x_4063_ = lean_unbox(v_a_4050_);
lean_dec(v_a_4050_);
lean_ctor_set_uint8(v___x_4062_, sizeof(void*)*2, v___x_4063_);
if (v_isShared_4061_ == 0)
{
lean_ctor_set_tag(v___x_4060_, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4062_);
v___x_4065_ = v___x_4060_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v___x_4062_);
v___x_4065_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
return v___x_4065_;
}
}
}
}
}
v___jp_3993_:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
v___x_3996_ = lean_string_append(v___y_3994_, v___y_3995_);
lean_dec_ref(v___y_3995_);
v___x_3997_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3996_);
v___x_3998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
return v___x_3998_;
}
v___jp_3999_:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; uint8_t v___x_4013_; 
v___x_4002_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4003_ = lean_string_append(v___x_4002_, v_context_3990_);
v___x_4004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_4005_ = lean_string_append(v___x_4003_, v___x_4004_);
v___x_4006_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___closed__3));
v___x_4007_ = lean_string_append(v___x_4005_, v___x_4006_);
v___x_4008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_4009_ = lean_string_append(v___x_4007_, v___x_4008_);
v___x_4010_ = lean_string_append(v___x_4009_, v_received_4001_);
lean_dec_ref(v_received_4001_);
v___x_4011_ = lean_string_utf8_byte_size(v___y_4000_);
v___x_4012_ = lean_unsigned_to_nat(0u);
v___x_4013_ = lean_nat_dec_eq(v___x_4011_, v___x_4012_);
if (v___x_4013_ == 0)
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4014_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_4015_ = lean_string_append(v___x_4014_, v___y_4000_);
lean_dec_ref(v___y_4000_);
v___x_4016_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_4017_ = lean_string_append(v___x_4015_, v___x_4016_);
v___y_3994_ = v___x_4010_;
v___y_3995_ = v___x_4017_;
goto v___jp_3993_;
}
else
{
lean_object* v___x_4018_; 
lean_dec_ref(v___y_4000_);
v___x_4018_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_3994_ = v___x_4010_;
v___y_3995_ = v___x_4018_;
goto v___jp_3993_;
}
}
v___jp_4019_:
{
lean_object* v___x_4021_; 
v___x_4021_ = l_Lasm_JS_Data_describe(v_d_3991_);
v___y_4000_ = v___y_4020_;
v_received_4001_ = v___x_4021_;
goto v___jp_3999_;
}
v___jp_4022_:
{
if (lean_obj_tag(v_d_3991_) == 9)
{
lean_object* v_value_4024_; lean_object* v_description_4025_; lean_object* v___x_4026_; uint8_t v___x_4027_; 
v_value_4024_ = lean_ctor_get(v_d_3991_, 0);
v_description_4025_ = lean_ctor_get(v_d_3991_, 1);
v___x_4026_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4027_ = lean_string_dec_eq(v_description_4025_, v___x_4026_);
if (v___x_4027_ == 0)
{
v___y_4020_ = v_a_4023_;
goto v___jp_4019_;
}
else
{
lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4044_; 
lean_inc(v_value_4024_);
v_isSharedCheck_4044_ = !lean_is_exclusive(v_d_3991_);
if (v_isSharedCheck_4044_ == 0)
{
lean_object* v_unused_4045_; lean_object* v_unused_4046_; 
v_unused_4045_ = lean_ctor_get(v_d_3991_, 1);
lean_dec(v_unused_4045_);
v_unused_4046_ = lean_ctor_get(v_d_3991_, 0);
lean_dec(v_unused_4046_);
v___x_4029_ = v_d_3991_;
v_isShared_4030_ = v_isSharedCheck_4044_;
goto v_resetjp_4028_;
}
else
{
lean_dec(v_d_3991_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4044_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
uint32_t v___x_4031_; uint64_t v___x_4032_; lean_object* v___x_4034_; 
v___x_4031_ = 206;
v___x_4032_ = 0ULL;
lean_inc(v_value_4024_);
if (v_isShared_4030_ == 0)
{
lean_ctor_set(v___x_4029_, 1, v___x_4026_);
v___x_4034_ = v___x_4029_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_value_4024_);
lean_ctor_set(v_reuseFailAlloc_4043_, 1, v___x_4026_);
v___x_4034_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
uint32_t v___x_4035_; lean_object* v___x_4036_; 
v___x_4035_ = lasm_js_value_handle(v_value_4024_);
lean_dec(v_value_4024_);
v___x_4036_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4031_, v___x_4032_, v___x_4034_, v___x_4035_);
lean_dec_ref(v___x_4034_);
if (lean_obj_tag(v___x_4036_) == 0)
{
lean_object* v_a_4037_; uint8_t v___x_4038_; 
v_a_4037_ = lean_ctor_get(v___x_4036_, 0);
lean_inc(v_a_4037_);
lean_dec_ref_known(v___x_4036_, 1);
v___x_4038_ = lean_string_validate_utf8(v_a_4037_);
if (v___x_4038_ == 0)
{
lean_object* v___x_4039_; lean_object* v___x_4040_; 
lean_dec(v_a_4037_);
v___x_4039_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_4040_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4039_);
v___y_4000_ = v_a_4023_;
v_received_4001_ = v___x_4040_;
goto v___jp_3999_;
}
else
{
lean_object* v___x_4041_; 
v___x_4041_ = lean_string_from_utf8_unchecked(v_a_4037_);
v___y_4000_ = v_a_4023_;
v_received_4001_ = v___x_4041_;
goto v___jp_3999_;
}
}
else
{
lean_object* v___x_4042_; 
lean_dec_ref_known(v___x_4036_, 1);
v___x_4042_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_4000_ = v_a_4023_;
v_received_4001_ = v___x_4042_;
goto v___jp_3999_;
}
}
}
}
}
else
{
v___y_4020_ = v_a_4023_;
goto v___jp_4019_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4068_, lean_object* v_d_4069_, lean_object* v_a_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4068_, v_d_4069_);
lean_dec_ref(v_context_4068_);
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(lean_object* v_context_4072_, lean_object* v_bytes_4073_){
_start:
{
lean_object* v___x_4075_; 
v___x_4075_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4073_);
if (lean_obj_tag(v___x_4075_) == 0)
{
lean_object* v_a_4076_; lean_object* v___x_4077_; 
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
lean_inc(v_a_4076_);
lean_dec_ref_known(v___x_4075_, 1);
v___x_4077_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4072_, v_a_4076_);
return v___x_4077_;
}
else
{
lean_object* v_a_4078_; lean_object* v___x_4080_; uint8_t v_isShared_4081_; uint8_t v_isSharedCheck_4085_; 
v_a_4078_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4080_ = v___x_4075_;
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
else
{
lean_inc(v_a_4078_);
lean_dec(v___x_4075_);
v___x_4080_ = lean_box(0);
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
v_resetjp_4079_:
{
lean_object* v___x_4083_; 
if (v_isShared_4081_ == 0)
{
v___x_4083_ = v___x_4080_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_a_4078_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
return v___x_4083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_4086_, lean_object* v_bytes_4087_, lean_object* v_a_4088_){
_start:
{
lean_object* v_res_4089_; 
v_res_4089_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v_context_4086_, v_bytes_4087_);
lean_dec_ref(v_bytes_4087_);
lean_dec_ref(v_context_4086_);
return v_res_4089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(lean_object* v_o_4090_, lean_object* v_key_4091_){
_start:
{
lean_object* v_k_4093_; lean_object* v___x_4094_; 
v_k_4093_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4093_, 0, v_key_4091_);
v___x_4094_ = l_Lasm_JS_Wire_encodeIO(v_k_4093_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; uint32_t v___x_4096_; uint32_t v___x_4097_; uint64_t v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_a_4095_);
lean_dec_ref_known(v___x_4094_, 1);
v___x_4096_ = 203;
v___x_4097_ = lasm_js_value_handle(v_o_4090_);
v___x_4098_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_4099_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4100_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4100_, 0, v_o_4090_);
lean_ctor_set(v___x_4100_, 1, v___x_4099_);
v___x_4101_ = lean_unsigned_to_nat(2u);
v___x_4102_ = lean_mk_empty_array_with_capacity(v___x_4101_);
lean_inc_ref(v_k_4093_);
v___x_4103_ = lean_array_push(v___x_4102_, v_k_4093_);
v___x_4104_ = lean_array_push(v___x_4103_, v___x_4100_);
v___x_4105_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4104_);
v___x_4106_ = lasm_js_call(v___x_4096_, v___x_4097_, v___x_4098_, v_a_4095_, v___x_4105_);
lean_dec_ref_known(v___x_4105_, 1);
lean_dec(v_a_4095_);
if (lean_obj_tag(v___x_4106_) == 0)
{
lean_object* v_a_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v_a_4107_ = lean_ctor_get(v___x_4106_, 0);
lean_inc(v_a_4107_);
lean_dec_ref_known(v___x_4106_, 1);
v___x_4108_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_4109_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4093_);
v___x_4110_ = lean_string_append(v___x_4108_, v___x_4109_);
lean_dec_ref(v___x_4109_);
v___x_4111_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v___x_4110_, v_a_4107_);
lean_dec(v_a_4107_);
lean_dec_ref(v___x_4110_);
return v___x_4111_;
}
else
{
lean_object* v_a_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4119_; 
lean_dec_ref_known(v_k_4093_, 1);
v_a_4112_ = lean_ctor_get(v___x_4106_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4106_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4114_ = v___x_4106_;
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
else
{
lean_inc(v_a_4112_);
lean_dec(v___x_4106_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
lean_object* v___x_4117_; 
if (v_isShared_4115_ == 0)
{
v___x_4117_ = v___x_4114_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4112_);
v___x_4117_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
return v___x_4117_;
}
}
}
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
lean_dec_ref_known(v_k_4093_, 1);
lean_dec(v_o_4090_);
v_a_4120_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_4094_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_4094_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0___boxed(lean_object* v_o_4128_, lean_object* v_key_4129_, lean_object* v_a_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_o_4128_, v_key_4129_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(lean_object* v___f_4136_, lean_object* v_a_4137_, lean_object* v_x_4138_){
_start:
{
if (lean_obj_tag(v_x_4138_) == 0)
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4148_; 
lean_dec(v_a_4137_);
lean_dec_ref(v___f_4136_);
v_a_4140_ = lean_ctor_get(v_x_4138_, 0);
v_isSharedCheck_4148_ = !lean_is_exclusive(v_x_4138_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4142_ = v_x_4138_;
v_isShared_4143_ = v_isSharedCheck_4148_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v_x_4138_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4148_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4145_; 
if (v_isShared_4143_ == 0)
{
v___x_4145_ = v___x_4142_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v_a_4140_);
v___x_4145_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
lean_object* v___x_4146_; 
v___x_4146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4146_, 0, v___x_4145_);
return v___x_4146_;
}
}
}
else
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4171_; 
v_a_4149_ = lean_ctor_get(v_x_4138_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v_x_4138_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4151_ = v_x_4138_;
v_isShared_4152_ = v_isSharedCheck_4171_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v_x_4138_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4171_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
uint8_t v___x_4153_; 
v___x_4153_ = lean_unbox(v_a_4149_);
if (v___x_4153_ == 0)
{
lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v_val_4157_; lean_object* v___x_4161_; 
v___x_4154_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_4155_ = lean_unsigned_to_nat(0u);
v___x_4161_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_a_4137_, v___x_4154_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_object* v_a_4162_; lean_object* v___x_4164_; 
v_a_4162_ = lean_ctor_get(v___x_4161_, 0);
lean_inc(v_a_4162_);
lean_dec_ref_known(v___x_4161_, 1);
if (v_isShared_4152_ == 0)
{
lean_ctor_set(v___x_4151_, 0, v_a_4162_);
v___x_4164_ = v___x_4151_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_a_4162_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
v_val_4157_ = v___x_4164_;
goto v___jp_4156_;
}
}
else
{
lean_object* v_a_4166_; lean_object* v___x_4168_; 
v_a_4166_ = lean_ctor_get(v___x_4161_, 0);
lean_inc(v_a_4166_);
lean_dec_ref_known(v___x_4161_, 1);
if (v_isShared_4152_ == 0)
{
lean_ctor_set_tag(v___x_4151_, 0);
lean_ctor_set(v___x_4151_, 0, v_a_4166_);
v___x_4168_ = v___x_4151_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_a_4166_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
v_val_4157_ = v___x_4168_;
goto v___jp_4156_;
}
}
v___jp_4156_:
{
lean_object* v___x_4158_; uint8_t v___x_4159_; lean_object* v___x_4160_; 
v___x_4158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4158_, 0, v_val_4157_);
v___x_4159_ = lean_unbox(v_a_4149_);
lean_dec(v_a_4149_);
v___x_4160_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4155_, v___x_4159_, v___x_4158_, v___f_4136_);
return v___x_4160_;
}
}
else
{
lean_object* v___x_4170_; 
lean_del_object(v___x_4151_);
lean_dec(v_a_4149_);
lean_dec(v_a_4137_);
lean_dec_ref(v___f_4136_);
v___x_4170_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__1));
return v___x_4170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed(lean_object* v___f_4172_, lean_object* v_a_4173_, lean_object* v_x_4174_, lean_object* v___y_4175_){
_start:
{
lean_object* v_res_4176_; 
v_res_4176_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(v___f_4172_, v_a_4173_, v_x_4174_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(lean_object* v___f_4177_, lean_object* v_x_4178_){
_start:
{
if (lean_obj_tag(v_x_4178_) == 0)
{
lean_object* v_a_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4188_; 
lean_dec_ref(v___f_4177_);
v_a_4180_ = lean_ctor_get(v_x_4178_, 0);
v_isSharedCheck_4188_ = !lean_is_exclusive(v_x_4178_);
if (v_isSharedCheck_4188_ == 0)
{
v___x_4182_ = v_x_4178_;
v_isShared_4183_ = v_isSharedCheck_4188_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_a_4180_);
lean_dec(v_x_4178_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4188_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4185_; 
if (v_isShared_4183_ == 0)
{
v___x_4185_ = v___x_4182_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4187_; 
v_reuseFailAlloc_4187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4187_, 0, v_a_4180_);
v___x_4185_ = v_reuseFailAlloc_4187_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
lean_object* v___x_4186_; 
v___x_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4186_, 0, v___x_4185_);
return v___x_4186_;
}
}
}
else
{
lean_object* v_a_4189_; lean_object* v___x_4191_; uint8_t v_isShared_4192_; uint8_t v_isSharedCheck_4210_; 
v_a_4189_ = lean_ctor_get(v_x_4178_, 0);
v_isSharedCheck_4210_ = !lean_is_exclusive(v_x_4178_);
if (v_isSharedCheck_4210_ == 0)
{
v___x_4191_ = v_x_4178_;
v_isShared_4192_ = v_isSharedCheck_4210_;
goto v_resetjp_4190_;
}
else
{
lean_inc(v_a_4189_);
lean_dec(v_x_4178_);
v___x_4191_ = lean_box(0);
v_isShared_4192_ = v_isSharedCheck_4210_;
goto v_resetjp_4190_;
}
v_resetjp_4190_:
{
lean_object* v___f_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; uint8_t v___x_4196_; lean_object* v_val_4198_; lean_object* v___x_4201_; 
lean_inc(v_a_4189_);
v___f_4193_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4193_, 0, v___f_4177_);
lean_closure_set(v___f_4193_, 1, v_a_4189_);
v___x_4194_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_4195_ = lean_unsigned_to_nat(0u);
v___x_4196_ = 0;
v___x_4201_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_4189_, v___x_4194_);
if (lean_obj_tag(v___x_4201_) == 0)
{
lean_object* v_a_4202_; lean_object* v___x_4204_; 
v_a_4202_ = lean_ctor_get(v___x_4201_, 0);
lean_inc(v_a_4202_);
lean_dec_ref_known(v___x_4201_, 1);
if (v_isShared_4192_ == 0)
{
lean_ctor_set(v___x_4191_, 0, v_a_4202_);
v___x_4204_ = v___x_4191_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4202_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
v_val_4198_ = v___x_4204_;
goto v___jp_4197_;
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4208_; 
v_a_4206_ = lean_ctor_get(v___x_4201_, 0);
lean_inc(v_a_4206_);
lean_dec_ref_known(v___x_4201_, 1);
if (v_isShared_4192_ == 0)
{
lean_ctor_set_tag(v___x_4191_, 0);
lean_ctor_set(v___x_4191_, 0, v_a_4206_);
v___x_4208_ = v___x_4191_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v_a_4206_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
v_val_4198_ = v___x_4208_;
goto v___jp_4197_;
}
}
v___jp_4197_:
{
lean_object* v___x_4199_; lean_object* v___x_4200_; 
v___x_4199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4199_, 0, v_val_4198_);
v___x_4200_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4195_, v___x_4196_, v___x_4199_, v___f_4193_);
return v___x_4200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2___boxed(lean_object* v___f_4211_, lean_object* v_x_4212_, lean_object* v___y_4213_){
_start:
{
lean_object* v_res_4214_; 
v_res_4214_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(v___f_4211_, v_x_4212_);
return v_res_4214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next(lean_object* v_it_4218_){
_start:
{
lean_object* v___f_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; uint8_t v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; 
v___f_4220_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__1));
v___x_4221_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_4222_ = lean_unsigned_to_nat(0u);
v___x_4223_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_4224_ = 0;
v___x_4225_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_4218_, v___x_4221_, v___x_4223_);
v___x_4226_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4222_, v___x_4224_, v___x_4225_, v___f_4220_);
return v___x_4226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___boxed(lean_object* v_it_4227_, lean_object* v_a_4228_){
_start:
{
lean_object* v_res_4229_; 
v_res_4229_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4227_);
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(lean_object* v_acc_4230_, lean_object* v_it_4231_, lean_object* v_x_4232_){
_start:
{
if (lean_obj_tag(v_x_4232_) == 0)
{
lean_object* v_a_4234_; lean_object* v___x_4236_; uint8_t v_isShared_4237_; uint8_t v_isSharedCheck_4242_; 
lean_dec(v_it_4231_);
lean_dec_ref(v_acc_4230_);
v_a_4234_ = lean_ctor_get(v_x_4232_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v_x_4232_);
if (v_isSharedCheck_4242_ == 0)
{
v___x_4236_ = v_x_4232_;
v_isShared_4237_ = v_isSharedCheck_4242_;
goto v_resetjp_4235_;
}
else
{
lean_inc(v_a_4234_);
lean_dec(v_x_4232_);
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
lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4254_; 
v_a_4243_ = lean_ctor_get(v_x_4232_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v_x_4232_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4245_ = v_x_4232_;
v_isShared_4246_ = v_isSharedCheck_4254_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v_x_4232_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4254_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
if (lean_obj_tag(v_a_4243_) == 0)
{
lean_object* v___x_4248_; 
lean_dec(v_it_4231_);
if (v_isShared_4246_ == 0)
{
lean_ctor_set(v___x_4245_, 0, v_acc_4230_);
v___x_4248_ = v___x_4245_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v_acc_4230_);
v___x_4248_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
lean_object* v___x_4249_; 
v___x_4249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4249_, 0, v___x_4248_);
return v___x_4249_;
}
}
else
{
lean_object* v_val_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; 
lean_del_object(v___x_4245_);
v_val_4251_ = lean_ctor_get(v_a_4243_, 0);
lean_inc(v_val_4251_);
lean_dec_ref_known(v_a_4243_, 1);
v___x_4252_ = lean_array_push(v_acc_4230_, v_val_4251_);
v___x_4253_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4231_, v___x_4252_);
return v___x_4253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed(lean_object* v_acc_4255_, lean_object* v_it_4256_, lean_object* v_x_4257_, lean_object* v___y_4258_){
_start:
{
lean_object* v_res_4259_; 
v_res_4259_ = l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(v_acc_4255_, v_it_4256_, v_x_4257_);
return v_res_4259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop(lean_object* v_it_4260_, lean_object* v_acc_4261_){
_start:
{
lean_object* v___f_4263_; lean_object* v___x_4264_; uint8_t v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; 
lean_inc(v_it_4260_);
v___f_4263_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4263_, 0, v_acc_4261_);
lean_closure_set(v___f_4263_, 1, v_it_4260_);
v___x_4264_ = lean_unsigned_to_nat(0u);
v___x_4265_ = 0;
v___x_4266_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4260_);
v___x_4267_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4264_, v___x_4265_, v___x_4266_, v___f_4263_);
return v___x_4267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___boxed(lean_object* v_it_4268_, lean_object* v_acc_4269_, lean_object* v_a_4270_){
_start:
{
lean_object* v_res_4271_; 
v_res_4271_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4268_, v_acc_4269_);
return v_res_4271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0(lean_object* v_x_4274_){
_start:
{
if (lean_obj_tag(v_x_4274_) == 0)
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4284_; 
v_a_4276_ = lean_ctor_get(v_x_4274_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v_x_4274_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4278_ = v_x_4274_;
v_isShared_4279_ = v_isSharedCheck_4284_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v_x_4274_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4284_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v___x_4281_; 
if (v_isShared_4279_ == 0)
{
v___x_4281_ = v___x_4278_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_a_4276_);
v___x_4281_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
lean_object* v___x_4282_; 
v___x_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4281_);
return v___x_4282_;
}
}
}
else
{
lean_object* v_a_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v_a_4285_ = lean_ctor_get(v_x_4274_, 0);
lean_inc(v_a_4285_);
lean_dec_ref_known(v_x_4274_, 1);
v___x_4286_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___lam__0___closed__0));
v___x_4287_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_a_4285_, v___x_4286_);
return v___x_4287_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0___boxed(lean_object* v_x_4288_, lean_object* v___y_4289_){
_start:
{
lean_object* v_res_4290_; 
v_res_4290_ = l_Lasm_JS_Deno_FsWatcher_values___lam__0(v_x_4288_);
return v_res_4290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values(lean_object* v_self_4292_){
_start:
{
lean_object* v___f_4294_; lean_object* v___x_4295_; uint8_t v___x_4296_; lean_object* v_val_4298_; lean_object* v___x_4301_; 
v___f_4294_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___closed__0));
v___x_4295_ = lean_unsigned_to_nat(0u);
v___x_4296_ = 0;
v___x_4301_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_4292_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4309_; 
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4304_ = v___x_4301_;
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v___x_4301_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4307_; 
if (v_isShared_4305_ == 0)
{
lean_ctor_set_tag(v___x_4304_, 1);
v___x_4307_ = v___x_4304_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v_a_4302_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
v_val_4298_ = v___x_4307_;
goto v___jp_4297_;
}
}
}
else
{
lean_object* v_a_4310_; lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4317_; 
v_a_4310_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4317_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4317_ == 0)
{
v___x_4312_ = v___x_4301_;
v_isShared_4313_ = v_isSharedCheck_4317_;
goto v_resetjp_4311_;
}
else
{
lean_inc(v_a_4310_);
lean_dec(v___x_4301_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4317_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v___x_4315_; 
if (v_isShared_4313_ == 0)
{
lean_ctor_set_tag(v___x_4312_, 0);
v___x_4315_ = v___x_4312_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4316_; 
v_reuseFailAlloc_4316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4316_, 0, v_a_4310_);
v___x_4315_ = v_reuseFailAlloc_4316_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
v_val_4298_ = v___x_4315_;
goto v___jp_4297_;
}
}
}
v___jp_4297_:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4299_, 0, v_val_4298_);
v___x_4300_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4295_, v___x_4296_, v___x_4299_, v___f_4294_);
return v___x_4300_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___boxed(lean_object* v_self_4318_, lean_object* v_a_4319_){
_start:
{
lean_object* v_res_4320_; 
v_res_4320_ = l_Lasm_JS_Deno_FsWatcher_values(v_self_4318_);
return v_res_4320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(lean_object* v_b_4321_, lean_object* v_args_4322_){
_start:
{
uint8_t v_construct_4324_; lean_object* v___x_4325_; uint32_t v___x_4326_; uint64_t v___x_4327_; uint64_t v___y_4329_; 
v_construct_4324_ = lean_ctor_get_uint8(v_b_4321_, sizeof(void*)*4);
v___x_4325_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4321_);
v___x_4326_ = 214;
v___x_4327_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4324_ == 0)
{
uint64_t v___x_4337_; 
v___x_4337_ = 0ULL;
v___y_4329_ = v___x_4337_;
goto v___jp_4328_;
}
else
{
uint64_t v___x_4338_; 
v___x_4338_ = 4ULL;
v___y_4329_ = v___x_4338_;
goto v___jp_4328_;
}
v___jp_4328_:
{
uint64_t v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
v___x_4330_ = lean_uint64_lor(v___x_4327_, v___y_4329_);
v___x_4331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4321_, v_args_4322_);
v___x_4332_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4333_ = lean_string_append(v___x_4332_, v___x_4325_);
lean_dec_ref(v___x_4325_);
v___x_4334_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4335_ = lean_string_append(v___x_4333_, v___x_4334_);
v___x_4336_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_4326_, v___x_4330_, v___x_4331_, v___x_4335_);
return v___x_4336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0___boxed(lean_object* v_b_4339_, lean_object* v_args_4340_, lean_object* v_a_4341_){
_start:
{
lean_object* v_res_4342_; 
v_res_4342_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v_b_4339_, v_args_4340_);
lean_dec_ref(v_b_4339_);
return v_res_4342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link(lean_object* v_oldpath_4352_, lean_object* v_newpath_4353_){
_start:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; 
v___x_4355_ = lean_unsigned_to_nat(2u);
v___x_4356_ = ((lean_object*)(l_Lasm_JS_Deno_link___closed__3));
v___x_4357_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4357_, 0, v_oldpath_4352_);
v___x_4358_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4358_, 0, v_newpath_4353_);
v___x_4359_ = lean_mk_empty_array_with_capacity(v___x_4355_);
v___x_4360_ = lean_array_push(v___x_4359_, v___x_4357_);
v___x_4361_ = lean_array_push(v___x_4360_, v___x_4358_);
v___x_4362_ = l_Lasm_JS_Web_Support_args(v___x_4361_);
v___x_4363_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4356_, v___x_4362_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link___boxed(lean_object* v_oldpath_4364_, lean_object* v_newpath_4365_, lean_object* v_a_4366_){
_start:
{
lean_object* v_res_4367_; 
v_res_4367_ = l_Lasm_JS_Deno_link(v_oldpath_4364_, v_newpath_4365_);
return v_res_4367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync(lean_object* v_oldpath_4376_, lean_object* v_newpath_4377_){
_start:
{
uint8_t v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; 
v___x_4379_ = 0;
v___x_4380_ = lean_unsigned_to_nat(2u);
v___x_4381_ = ((lean_object*)(l_Lasm_JS_Deno_linkSync___closed__2));
v___x_4382_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4382_, 0, v_oldpath_4376_);
v___x_4383_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4383_, 0, v_newpath_4377_);
v___x_4384_ = lean_mk_empty_array_with_capacity(v___x_4380_);
v___x_4385_ = lean_array_push(v___x_4384_, v___x_4382_);
v___x_4386_ = lean_array_push(v___x_4385_, v___x_4383_);
v___x_4387_ = l_Lasm_JS_Web_Support_args(v___x_4386_);
v___x_4388_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4381_, v___x_4387_, v___x_4379_);
return v___x_4388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync___boxed(lean_object* v_oldpath_4389_, lean_object* v_newpath_4390_, lean_object* v_a_4391_){
_start:
{
lean_object* v_res_4392_; 
v_res_4392_ = l_Lasm_JS_Deno_linkSync(v_oldpath_4389_, v_newpath_4390_);
return v_res_4392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0(lean_object* v_x_4393_){
_start:
{
if (lean_obj_tag(v_x_4393_) == 0)
{
lean_object* v_a_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4403_; 
v_a_4395_ = lean_ctor_get(v_x_4393_, 0);
v_isSharedCheck_4403_ = !lean_is_exclusive(v_x_4393_);
if (v_isSharedCheck_4403_ == 0)
{
v___x_4397_ = v_x_4393_;
v_isShared_4398_ = v_isSharedCheck_4403_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_a_4395_);
lean_dec(v_x_4393_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4403_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4400_; 
if (v_isShared_4398_ == 0)
{
v___x_4400_ = v___x_4397_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v_a_4395_);
v___x_4400_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
lean_object* v___x_4401_; 
v___x_4401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4401_, 0, v___x_4400_);
return v___x_4401_;
}
}
}
else
{
lean_object* v_a_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4412_; 
v_a_4404_ = lean_ctor_get(v_x_4393_, 0);
v_isSharedCheck_4412_ = !lean_is_exclusive(v_x_4393_);
if (v_isSharedCheck_4412_ == 0)
{
v___x_4406_ = v_x_4393_;
v_isShared_4407_ = v_isSharedCheck_4412_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_a_4404_);
lean_dec(v_x_4393_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4412_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___x_4409_; 
if (v_isShared_4407_ == 0)
{
v___x_4409_ = v___x_4406_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v_a_4404_);
v___x_4409_ = v_reuseFailAlloc_4411_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
lean_object* v___x_4410_; 
v___x_4410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4410_, 0, v___x_4409_);
return v___x_4410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0___boxed(lean_object* v_x_4413_, lean_object* v___y_4414_){
_start:
{
lean_object* v_res_4415_; 
v_res_4415_ = l_Lasm_JS_Deno_open___lam__0(v_x_4413_);
return v_res_4415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(lean_object* v_x_4416_){
_start:
{
if (lean_obj_tag(v_x_4416_) == 0)
{
lean_object* v___x_4417_; 
v___x_4417_ = lean_box(0);
return v___x_4417_;
}
else
{
lean_object* v_val_4418_; lean_object* v_read_4419_; lean_object* v_write_4420_; lean_object* v_append_4421_; lean_object* v_truncate_4422_; lean_object* v_create_4423_; lean_object* v_createNew_4424_; lean_object* v_mode_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; 
v_val_4418_ = lean_ctor_get(v_x_4416_, 0);
v_read_4419_ = lean_ctor_get(v_val_4418_, 0);
v_write_4420_ = lean_ctor_get(v_val_4418_, 1);
v_append_4421_ = lean_ctor_get(v_val_4418_, 2);
v_truncate_4422_ = lean_ctor_get(v_val_4418_, 3);
v_create_4423_ = lean_ctor_get(v_val_4418_, 4);
v_createNew_4424_ = lean_ctor_get(v_val_4418_, 5);
v_mode_4425_ = lean_ctor_get(v_val_4418_, 6);
v___x_4426_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0));
v___x_4427_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_read_4419_);
v___x_4428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4428_, 0, v___x_4426_);
lean_ctor_set(v___x_4428_, 1, v___x_4427_);
v___x_4429_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1));
v___x_4430_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_write_4420_);
v___x_4431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4429_);
lean_ctor_set(v___x_4431_, 1, v___x_4430_);
v___x_4432_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_4433_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_4421_);
v___x_4434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4432_);
lean_ctor_set(v___x_4434_, 1, v___x_4433_);
v___x_4435_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_4436_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_truncate_4422_);
v___x_4437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4435_);
lean_ctor_set(v___x_4437_, 1, v___x_4436_);
v___x_4438_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_4439_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_4423_);
v___x_4440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4440_, 0, v___x_4438_);
lean_ctor_set(v___x_4440_, 1, v___x_4439_);
v___x_4441_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_4442_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_4424_);
v___x_4443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4441_);
lean_ctor_set(v___x_4443_, 1, v___x_4442_);
v___x_4444_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4445_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4425_);
v___x_4446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4444_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
v___x_4447_ = lean_unsigned_to_nat(7u);
v___x_4448_ = lean_mk_empty_array_with_capacity(v___x_4447_);
v___x_4449_ = lean_array_push(v___x_4448_, v___x_4428_);
v___x_4450_ = lean_array_push(v___x_4449_, v___x_4431_);
v___x_4451_ = lean_array_push(v___x_4450_, v___x_4434_);
v___x_4452_ = lean_array_push(v___x_4451_, v___x_4437_);
v___x_4453_ = lean_array_push(v___x_4452_, v___x_4440_);
v___x_4454_ = lean_array_push(v___x_4453_, v___x_4443_);
v___x_4455_ = lean_array_push(v___x_4454_, v___x_4446_);
v___x_4456_ = l_Lasm_JS_Web_Support_fields(v___x_4455_);
lean_dec_ref(v___x_4455_);
return v___x_4456_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0___boxed(lean_object* v_x_4457_){
_start:
{
lean_object* v_res_4458_; 
v_res_4458_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_x_4457_);
lean_dec(v_x_4457_);
return v_res_4458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(lean_object* v_b_4459_, lean_object* v_args_4460_){
_start:
{
uint8_t v_construct_4462_; lean_object* v___x_4463_; uint32_t v___x_4464_; uint64_t v___x_4465_; uint64_t v___y_4467_; 
v_construct_4462_ = lean_ctor_get_uint8(v_b_4459_, sizeof(void*)*4);
v___x_4463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4459_);
v___x_4464_ = 214;
v___x_4465_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
if (v_construct_4462_ == 0)
{
uint64_t v___x_4475_; 
v___x_4475_ = 0ULL;
v___y_4467_ = v___x_4475_;
goto v___jp_4466_;
}
else
{
uint64_t v___x_4476_; 
v___x_4476_ = 4ULL;
v___y_4467_ = v___x_4476_;
goto v___jp_4466_;
}
v___jp_4466_:
{
uint64_t v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
v___x_4468_ = lean_uint64_lor(v___x_4465_, v___y_4467_);
v___x_4469_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4459_, v_args_4460_);
v___x_4470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4471_ = lean_string_append(v___x_4470_, v___x_4463_);
v___x_4472_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4473_ = lean_string_append(v___x_4471_, v___x_4472_);
v___x_4474_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_4463_, v___x_4464_, v___x_4468_, v___x_4469_, v___x_4473_);
return v___x_4474_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1___boxed(lean_object* v_b_4477_, lean_object* v_args_4478_, lean_object* v_a_4479_){
_start:
{
lean_object* v_res_4480_; 
v_res_4480_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v_b_4477_, v_args_4478_);
lean_dec_ref(v_b_4477_);
return v_res_4480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open(lean_object* v_path_4490_, lean_object* v_options_4491_){
_start:
{
lean_object* v___f_4493_; uint8_t v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___y_4498_; 
v___f_4493_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4494_ = 0;
v___x_4495_ = lean_unsigned_to_nat(2u);
v___x_4496_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__3));
if (lean_obj_tag(v_path_4490_) == 0)
{
lean_object* v_value_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4514_; 
v_value_4507_ = lean_ctor_get(v_path_4490_, 0);
v_isSharedCheck_4514_ = !lean_is_exclusive(v_path_4490_);
if (v_isSharedCheck_4514_ == 0)
{
v___x_4509_ = v_path_4490_;
v_isShared_4510_ = v_isSharedCheck_4514_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_value_4507_);
lean_dec(v_path_4490_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4514_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v___x_4512_; 
if (v_isShared_4510_ == 0)
{
lean_ctor_set_tag(v___x_4509_, 4);
v___x_4512_ = v___x_4509_;
goto v_reusejp_4511_;
}
else
{
lean_object* v_reuseFailAlloc_4513_; 
v_reuseFailAlloc_4513_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4513_, 0, v_value_4507_);
v___x_4512_ = v_reuseFailAlloc_4513_;
goto v_reusejp_4511_;
}
v_reusejp_4511_:
{
v___y_4498_ = v___x_4512_;
goto v___jp_4497_;
}
}
}
else
{
lean_object* v_value_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v_value_4515_ = lean_ctor_get(v_path_4490_, 0);
lean_inc(v_value_4515_);
lean_dec_ref_known(v_path_4490_, 1);
v___x_4516_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4517_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4517_, 0, v_value_4515_);
lean_ctor_set(v___x_4517_, 1, v___x_4516_);
v___y_4498_ = v___x_4517_;
goto v___jp_4497_;
}
v___jp_4497_:
{
lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; 
v___x_4499_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4491_);
v___x_4500_ = lean_mk_empty_array_with_capacity(v___x_4495_);
v___x_4501_ = lean_array_push(v___x_4500_, v___y_4498_);
v___x_4502_ = lean_array_push(v___x_4501_, v___x_4499_);
v___x_4503_ = l_Lasm_JS_Web_Support_args(v___x_4502_);
v___x_4504_ = lean_unsigned_to_nat(0u);
v___x_4505_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4496_, v___x_4503_);
v___x_4506_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4504_, v___x_4494_, v___x_4505_, v___f_4493_);
return v___x_4506_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___boxed(lean_object* v_path_4518_, lean_object* v_options_4519_, lean_object* v_a_4520_){
_start:
{
lean_object* v_res_4521_; 
v_res_4521_ = l_Lasm_JS_Deno_open(v_path_4518_, v_options_4519_);
lean_dec(v_options_4519_);
return v_res_4521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync(lean_object* v_path_4530_, lean_object* v_options_4531_){
_start:
{
uint8_t v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___y_4537_; 
v___x_4533_ = 0;
v___x_4534_ = lean_unsigned_to_nat(2u);
v___x_4535_ = ((lean_object*)(l_Lasm_JS_Deno_openSync___closed__2));
if (lean_obj_tag(v_path_4530_) == 0)
{
lean_object* v_value_4560_; lean_object* v___x_4562_; uint8_t v_isShared_4563_; uint8_t v_isSharedCheck_4567_; 
v_value_4560_ = lean_ctor_get(v_path_4530_, 0);
v_isSharedCheck_4567_ = !lean_is_exclusive(v_path_4530_);
if (v_isSharedCheck_4567_ == 0)
{
v___x_4562_ = v_path_4530_;
v_isShared_4563_ = v_isSharedCheck_4567_;
goto v_resetjp_4561_;
}
else
{
lean_inc(v_value_4560_);
lean_dec(v_path_4530_);
v___x_4562_ = lean_box(0);
v_isShared_4563_ = v_isSharedCheck_4567_;
goto v_resetjp_4561_;
}
v_resetjp_4561_:
{
lean_object* v___x_4565_; 
if (v_isShared_4563_ == 0)
{
lean_ctor_set_tag(v___x_4562_, 4);
v___x_4565_ = v___x_4562_;
goto v_reusejp_4564_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v_value_4560_);
v___x_4565_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4564_;
}
v_reusejp_4564_:
{
v___y_4537_ = v___x_4565_;
goto v___jp_4536_;
}
}
}
else
{
lean_object* v_value_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
v_value_4568_ = lean_ctor_get(v_path_4530_, 0);
lean_inc(v_value_4568_);
lean_dec_ref_known(v_path_4530_, 1);
v___x_4569_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4570_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4570_, 0, v_value_4568_);
lean_ctor_set(v___x_4570_, 1, v___x_4569_);
v___y_4537_ = v___x_4570_;
goto v___jp_4536_;
}
v___jp_4536_:
{
lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; 
v___x_4538_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4531_);
v___x_4539_ = lean_mk_empty_array_with_capacity(v___x_4534_);
v___x_4540_ = lean_array_push(v___x_4539_, v___y_4537_);
v___x_4541_ = lean_array_push(v___x_4540_, v___x_4538_);
v___x_4542_ = l_Lasm_JS_Web_Support_args(v___x_4541_);
v___x_4543_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4535_, v___x_4542_, v___x_4533_);
if (lean_obj_tag(v___x_4543_) == 0)
{
lean_object* v_a_4544_; lean_object* v___x_4546_; uint8_t v_isShared_4547_; uint8_t v_isSharedCheck_4551_; 
v_a_4544_ = lean_ctor_get(v___x_4543_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4543_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4546_ = v___x_4543_;
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
else
{
lean_inc(v_a_4544_);
lean_dec(v___x_4543_);
v___x_4546_ = lean_box(0);
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
v_resetjp_4545_:
{
lean_object* v___x_4549_; 
if (v_isShared_4547_ == 0)
{
v___x_4549_ = v___x_4546_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_a_4544_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
return v___x_4549_;
}
}
}
else
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4559_; 
v_a_4552_ = lean_ctor_get(v___x_4543_, 0);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4543_);
if (v_isSharedCheck_4559_ == 0)
{
v___x_4554_ = v___x_4543_;
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4543_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v___x_4557_; 
if (v_isShared_4555_ == 0)
{
v___x_4557_ = v___x_4554_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v_a_4552_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync___boxed(lean_object* v_path_4571_, lean_object* v_options_4572_, lean_object* v_a_4573_){
_start:
{
lean_object* v_res_4574_; 
v_res_4574_ = l_Lasm_JS_Deno_openSync(v_path_4571_, v_options_4572_);
lean_dec(v_options_4572_);
return v_res_4574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create(lean_object* v_path_4583_){
_start:
{
lean_object* v___f_4585_; uint8_t v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___y_4590_; 
v___f_4585_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4586_ = 0;
v___x_4587_ = lean_unsigned_to_nat(1u);
v___x_4588_ = ((lean_object*)(l_Lasm_JS_Deno_create___closed__2));
if (lean_obj_tag(v_path_4583_) == 0)
{
lean_object* v_value_4597_; lean_object* v___x_4599_; uint8_t v_isShared_4600_; uint8_t v_isSharedCheck_4604_; 
v_value_4597_ = lean_ctor_get(v_path_4583_, 0);
v_isSharedCheck_4604_ = !lean_is_exclusive(v_path_4583_);
if (v_isSharedCheck_4604_ == 0)
{
v___x_4599_ = v_path_4583_;
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
else
{
lean_inc(v_value_4597_);
lean_dec(v_path_4583_);
v___x_4599_ = lean_box(0);
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
v_resetjp_4598_:
{
lean_object* v___x_4602_; 
if (v_isShared_4600_ == 0)
{
lean_ctor_set_tag(v___x_4599_, 4);
v___x_4602_ = v___x_4599_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v_value_4597_);
v___x_4602_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
v___y_4590_ = v___x_4602_;
goto v___jp_4589_;
}
}
}
else
{
lean_object* v_value_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; 
v_value_4605_ = lean_ctor_get(v_path_4583_, 0);
lean_inc(v_value_4605_);
lean_dec_ref_known(v_path_4583_, 1);
v___x_4606_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4607_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4607_, 0, v_value_4605_);
lean_ctor_set(v___x_4607_, 1, v___x_4606_);
v___y_4590_ = v___x_4607_;
goto v___jp_4589_;
}
v___jp_4589_:
{
lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
v___x_4591_ = lean_mk_empty_array_with_capacity(v___x_4587_);
v___x_4592_ = lean_array_push(v___x_4591_, v___y_4590_);
v___x_4593_ = l_Lasm_JS_Web_Support_args(v___x_4592_);
v___x_4594_ = lean_unsigned_to_nat(0u);
v___x_4595_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4588_, v___x_4593_);
v___x_4596_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4594_, v___x_4586_, v___x_4595_, v___f_4585_);
return v___x_4596_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create___boxed(lean_object* v_path_4608_, lean_object* v_a_4609_){
_start:
{
lean_object* v_res_4610_; 
v_res_4610_ = l_Lasm_JS_Deno_create(v_path_4608_);
return v_res_4610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync(lean_object* v_path_4619_){
_start:
{
uint8_t v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___y_4625_; 
v___x_4621_ = 0;
v___x_4622_ = lean_unsigned_to_nat(1u);
v___x_4623_ = ((lean_object*)(l_Lasm_JS_Deno_createSync___closed__2));
if (lean_obj_tag(v_path_4619_) == 0)
{
lean_object* v_value_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4653_; 
v_value_4646_ = lean_ctor_get(v_path_4619_, 0);
v_isSharedCheck_4653_ = !lean_is_exclusive(v_path_4619_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4648_ = v_path_4619_;
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_value_4646_);
lean_dec(v_path_4619_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v___x_4651_; 
if (v_isShared_4649_ == 0)
{
lean_ctor_set_tag(v___x_4648_, 4);
v___x_4651_ = v___x_4648_;
goto v_reusejp_4650_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v_value_4646_);
v___x_4651_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4650_;
}
v_reusejp_4650_:
{
v___y_4625_ = v___x_4651_;
goto v___jp_4624_;
}
}
}
else
{
lean_object* v_value_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v_value_4654_ = lean_ctor_get(v_path_4619_, 0);
lean_inc(v_value_4654_);
lean_dec_ref_known(v_path_4619_, 1);
v___x_4655_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4656_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4656_, 0, v_value_4654_);
lean_ctor_set(v___x_4656_, 1, v___x_4655_);
v___y_4625_ = v___x_4656_;
goto v___jp_4624_;
}
v___jp_4624_:
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4626_ = lean_mk_empty_array_with_capacity(v___x_4622_);
v___x_4627_ = lean_array_push(v___x_4626_, v___y_4625_);
v___x_4628_ = l_Lasm_JS_Web_Support_args(v___x_4627_);
v___x_4629_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4623_, v___x_4628_, v___x_4621_);
if (lean_obj_tag(v___x_4629_) == 0)
{
lean_object* v_a_4630_; lean_object* v___x_4632_; uint8_t v_isShared_4633_; uint8_t v_isSharedCheck_4637_; 
v_a_4630_ = lean_ctor_get(v___x_4629_, 0);
v_isSharedCheck_4637_ = !lean_is_exclusive(v___x_4629_);
if (v_isSharedCheck_4637_ == 0)
{
v___x_4632_ = v___x_4629_;
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
else
{
lean_inc(v_a_4630_);
lean_dec(v___x_4629_);
v___x_4632_ = lean_box(0);
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
v_resetjp_4631_:
{
lean_object* v___x_4635_; 
if (v_isShared_4633_ == 0)
{
v___x_4635_ = v___x_4632_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4636_; 
v_reuseFailAlloc_4636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4636_, 0, v_a_4630_);
v___x_4635_ = v_reuseFailAlloc_4636_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
return v___x_4635_;
}
}
}
else
{
lean_object* v_a_4638_; lean_object* v___x_4640_; uint8_t v_isShared_4641_; uint8_t v_isSharedCheck_4645_; 
v_a_4638_ = lean_ctor_get(v___x_4629_, 0);
v_isSharedCheck_4645_ = !lean_is_exclusive(v___x_4629_);
if (v_isSharedCheck_4645_ == 0)
{
v___x_4640_ = v___x_4629_;
v_isShared_4641_ = v_isSharedCheck_4645_;
goto v_resetjp_4639_;
}
else
{
lean_inc(v_a_4638_);
lean_dec(v___x_4629_);
v___x_4640_ = lean_box(0);
v_isShared_4641_ = v_isSharedCheck_4645_;
goto v_resetjp_4639_;
}
v_resetjp_4639_:
{
lean_object* v___x_4643_; 
if (v_isShared_4641_ == 0)
{
v___x_4643_ = v___x_4640_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4644_; 
v_reuseFailAlloc_4644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4644_, 0, v_a_4638_);
v___x_4643_ = v_reuseFailAlloc_4644_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
return v___x_4643_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync___boxed(lean_object* v_path_4657_, lean_object* v_a_4658_){
_start:
{
lean_object* v_res_4659_; 
v_res_4659_ = l_Lasm_JS_Deno_createSync(v_path_4657_);
return v_res_4659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(lean_object* v_x_4660_){
_start:
{
if (lean_obj_tag(v_x_4660_) == 0)
{
lean_object* v___x_4661_; 
v___x_4661_ = lean_box(0);
return v___x_4661_;
}
else
{
lean_object* v_val_4662_; lean_object* v_recursive_4663_; lean_object* v_mode_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4681_; 
v_val_4662_ = lean_ctor_get(v_x_4660_, 0);
lean_inc(v_val_4662_);
lean_dec_ref_known(v_x_4660_, 1);
v_recursive_4663_ = lean_ctor_get(v_val_4662_, 0);
v_mode_4664_ = lean_ctor_get(v_val_4662_, 1);
v_isSharedCheck_4681_ = !lean_is_exclusive(v_val_4662_);
if (v_isSharedCheck_4681_ == 0)
{
v___x_4666_ = v_val_4662_;
v_isShared_4667_ = v_isSharedCheck_4681_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_mode_4664_);
lean_inc(v_recursive_4663_);
lean_dec(v_val_4662_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4681_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4671_; 
v___x_4668_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_4669_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_4663_);
lean_dec(v_recursive_4663_);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 1, v___x_4669_);
lean_ctor_set(v___x_4666_, 0, v___x_4668_);
v___x_4671_ = v___x_4666_;
goto v_reusejp_4670_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v___x_4668_);
lean_ctor_set(v_reuseFailAlloc_4680_, 1, v___x_4669_);
v___x_4671_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4670_;
}
v_reusejp_4670_:
{
lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; 
v___x_4672_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4673_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4664_);
lean_dec(v_mode_4664_);
v___x_4674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4674_, 0, v___x_4672_);
lean_ctor_set(v___x_4674_, 1, v___x_4673_);
v___x_4675_ = lean_unsigned_to_nat(2u);
v___x_4676_ = lean_mk_empty_array_with_capacity(v___x_4675_);
v___x_4677_ = lean_array_push(v___x_4676_, v___x_4671_);
v___x_4678_ = lean_array_push(v___x_4677_, v___x_4674_);
v___x_4679_ = l_Lasm_JS_Web_Support_fields(v___x_4678_);
lean_dec_ref(v___x_4678_);
return v___x_4679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir(lean_object* v_path_4690_, lean_object* v_options_4691_){
_start:
{
lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___y_4696_; 
v___x_4693_ = lean_unsigned_to_nat(2u);
v___x_4694_ = ((lean_object*)(l_Lasm_JS_Deno_mkdir___closed__2));
if (lean_obj_tag(v_path_4690_) == 0)
{
lean_object* v_value_4703_; lean_object* v___x_4705_; uint8_t v_isShared_4706_; uint8_t v_isSharedCheck_4710_; 
v_value_4703_ = lean_ctor_get(v_path_4690_, 0);
v_isSharedCheck_4710_ = !lean_is_exclusive(v_path_4690_);
if (v_isSharedCheck_4710_ == 0)
{
v___x_4705_ = v_path_4690_;
v_isShared_4706_ = v_isSharedCheck_4710_;
goto v_resetjp_4704_;
}
else
{
lean_inc(v_value_4703_);
lean_dec(v_path_4690_);
v___x_4705_ = lean_box(0);
v_isShared_4706_ = v_isSharedCheck_4710_;
goto v_resetjp_4704_;
}
v_resetjp_4704_:
{
lean_object* v___x_4708_; 
if (v_isShared_4706_ == 0)
{
lean_ctor_set_tag(v___x_4705_, 4);
v___x_4708_ = v___x_4705_;
goto v_reusejp_4707_;
}
else
{
lean_object* v_reuseFailAlloc_4709_; 
v_reuseFailAlloc_4709_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4709_, 0, v_value_4703_);
v___x_4708_ = v_reuseFailAlloc_4709_;
goto v_reusejp_4707_;
}
v_reusejp_4707_:
{
v___y_4696_ = v___x_4708_;
goto v___jp_4695_;
}
}
}
else
{
lean_object* v_value_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; 
v_value_4711_ = lean_ctor_get(v_path_4690_, 0);
lean_inc(v_value_4711_);
lean_dec_ref_known(v_path_4690_, 1);
v___x_4712_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4713_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4713_, 0, v_value_4711_);
lean_ctor_set(v___x_4713_, 1, v___x_4712_);
v___y_4696_ = v___x_4713_;
goto v___jp_4695_;
}
v___jp_4695_:
{
lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4697_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4691_);
v___x_4698_ = lean_mk_empty_array_with_capacity(v___x_4693_);
v___x_4699_ = lean_array_push(v___x_4698_, v___y_4696_);
v___x_4700_ = lean_array_push(v___x_4699_, v___x_4697_);
v___x_4701_ = l_Lasm_JS_Web_Support_args(v___x_4700_);
v___x_4702_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4694_, v___x_4701_);
return v___x_4702_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir___boxed(lean_object* v_path_4714_, lean_object* v_options_4715_, lean_object* v_a_4716_){
_start:
{
lean_object* v_res_4717_; 
v_res_4717_ = l_Lasm_JS_Deno_mkdir(v_path_4714_, v_options_4715_);
return v_res_4717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync(lean_object* v_path_4726_, lean_object* v_options_4727_){
_start:
{
uint8_t v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___y_4733_; 
v___x_4729_ = 0;
v___x_4730_ = lean_unsigned_to_nat(2u);
v___x_4731_ = ((lean_object*)(l_Lasm_JS_Deno_mkdirSync___closed__2));
if (lean_obj_tag(v_path_4726_) == 0)
{
lean_object* v_value_4740_; lean_object* v___x_4742_; uint8_t v_isShared_4743_; uint8_t v_isSharedCheck_4747_; 
v_value_4740_ = lean_ctor_get(v_path_4726_, 0);
v_isSharedCheck_4747_ = !lean_is_exclusive(v_path_4726_);
if (v_isSharedCheck_4747_ == 0)
{
v___x_4742_ = v_path_4726_;
v_isShared_4743_ = v_isSharedCheck_4747_;
goto v_resetjp_4741_;
}
else
{
lean_inc(v_value_4740_);
lean_dec(v_path_4726_);
v___x_4742_ = lean_box(0);
v_isShared_4743_ = v_isSharedCheck_4747_;
goto v_resetjp_4741_;
}
v_resetjp_4741_:
{
lean_object* v___x_4745_; 
if (v_isShared_4743_ == 0)
{
lean_ctor_set_tag(v___x_4742_, 4);
v___x_4745_ = v___x_4742_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v_value_4740_);
v___x_4745_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
v___y_4733_ = v___x_4745_;
goto v___jp_4732_;
}
}
}
else
{
lean_object* v_value_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; 
v_value_4748_ = lean_ctor_get(v_path_4726_, 0);
lean_inc(v_value_4748_);
lean_dec_ref_known(v_path_4726_, 1);
v___x_4749_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4750_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4750_, 0, v_value_4748_);
lean_ctor_set(v___x_4750_, 1, v___x_4749_);
v___y_4733_ = v___x_4750_;
goto v___jp_4732_;
}
v___jp_4732_:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; 
v___x_4734_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4727_);
v___x_4735_ = lean_mk_empty_array_with_capacity(v___x_4730_);
v___x_4736_ = lean_array_push(v___x_4735_, v___y_4733_);
v___x_4737_ = lean_array_push(v___x_4736_, v___x_4734_);
v___x_4738_ = l_Lasm_JS_Web_Support_args(v___x_4737_);
v___x_4739_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4731_, v___x_4738_, v___x_4729_);
return v___x_4739_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync___boxed(lean_object* v_path_4751_, lean_object* v_options_4752_, lean_object* v_a_4753_){
_start:
{
lean_object* v_res_4754_; 
v_res_4754_ = l_Lasm_JS_Deno_mkdirSync(v_path_4751_, v_options_4752_);
return v_res_4754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(lean_object* v_x_4755_){
_start:
{
if (lean_obj_tag(v_x_4755_) == 0)
{
lean_object* v___x_4756_; 
v___x_4756_ = lean_box(0);
return v___x_4756_;
}
else
{
lean_object* v_val_4757_; lean_object* v_dir_4758_; lean_object* v_prefix_4759_; lean_object* v_suffix_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; 
v_val_4757_ = lean_ctor_get(v_x_4755_, 0);
lean_inc(v_val_4757_);
lean_dec_ref_known(v_x_4755_, 1);
v_dir_4758_ = lean_ctor_get(v_val_4757_, 0);
lean_inc(v_dir_4758_);
v_prefix_4759_ = lean_ctor_get(v_val_4757_, 1);
lean_inc(v_prefix_4759_);
v_suffix_4760_ = lean_ctor_get(v_val_4757_, 2);
lean_inc(v_suffix_4760_);
lean_dec(v_val_4757_);
v___x_4761_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
v___x_4762_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dir_4758_);
v___x_4763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4763_, 0, v___x_4761_);
lean_ctor_set(v___x_4763_, 1, v___x_4762_);
v___x_4764_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0));
v___x_4765_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_4759_);
v___x_4766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4766_, 0, v___x_4764_);
lean_ctor_set(v___x_4766_, 1, v___x_4765_);
v___x_4767_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1));
v___x_4768_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_suffix_4760_);
v___x_4769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4769_, 0, v___x_4767_);
lean_ctor_set(v___x_4769_, 1, v___x_4768_);
v___x_4770_ = lean_unsigned_to_nat(3u);
v___x_4771_ = lean_mk_empty_array_with_capacity(v___x_4770_);
v___x_4772_ = lean_array_push(v___x_4771_, v___x_4763_);
v___x_4773_ = lean_array_push(v___x_4772_, v___x_4766_);
v___x_4774_ = lean_array_push(v___x_4773_, v___x_4769_);
v___x_4775_ = l_Lasm_JS_Web_Support_fields(v___x_4774_);
lean_dec_ref(v___x_4774_);
return v___x_4775_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(lean_object* v_b_4776_, lean_object* v_args_4777_){
_start:
{
uint8_t v_construct_4779_; lean_object* v___x_4780_; uint32_t v___x_4781_; uint64_t v___x_4782_; uint64_t v___y_4784_; 
v_construct_4779_ = lean_ctor_get_uint8(v_b_4776_, sizeof(void*)*4);
v___x_4780_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4776_);
v___x_4781_ = 214;
v___x_4782_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4779_ == 0)
{
uint64_t v___x_4792_; 
v___x_4792_ = 0ULL;
v___y_4784_ = v___x_4792_;
goto v___jp_4783_;
}
else
{
uint64_t v___x_4793_; 
v___x_4793_ = 4ULL;
v___y_4784_ = v___x_4793_;
goto v___jp_4783_;
}
v___jp_4783_:
{
uint64_t v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; 
v___x_4785_ = lean_uint64_lor(v___x_4782_, v___y_4784_);
v___x_4786_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4776_, v_args_4777_);
v___x_4787_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4788_ = lean_string_append(v___x_4787_, v___x_4780_);
v___x_4789_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4790_ = lean_string_append(v___x_4788_, v___x_4789_);
v___x_4791_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_4780_, v___x_4781_, v___x_4785_, v___x_4786_, v___x_4790_);
return v___x_4791_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1___boxed(lean_object* v_b_4794_, lean_object* v_args_4795_, lean_object* v_a_4796_){
_start:
{
lean_object* v_res_4797_; 
v_res_4797_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v_b_4794_, v_args_4795_);
lean_dec_ref(v_b_4794_);
return v_res_4797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir(lean_object* v_options_4806_){
_start:
{
lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; 
v___x_4808_ = lean_unsigned_to_nat(1u);
v___x_4809_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDir___closed__2));
v___x_4810_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4806_);
v___x_4811_ = lean_mk_empty_array_with_capacity(v___x_4808_);
v___x_4812_ = lean_array_push(v___x_4811_, v___x_4810_);
v___x_4813_ = l_Lasm_JS_Web_Support_args(v___x_4812_);
v___x_4814_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4809_, v___x_4813_);
return v___x_4814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir___boxed(lean_object* v_options_4815_, lean_object* v_a_4816_){
_start:
{
lean_object* v_res_4817_; 
v_res_4817_ = l_Lasm_JS_Deno_makeTempDir(v_options_4815_);
return v_res_4817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync(lean_object* v_options_4826_){
_start:
{
uint8_t v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; 
v___x_4828_ = 0;
v___x_4829_ = lean_unsigned_to_nat(1u);
v___x_4830_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDirSync___closed__2));
v___x_4831_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4826_);
v___x_4832_ = lean_mk_empty_array_with_capacity(v___x_4829_);
v___x_4833_ = lean_array_push(v___x_4832_, v___x_4831_);
v___x_4834_ = l_Lasm_JS_Web_Support_args(v___x_4833_);
v___x_4835_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4830_, v___x_4834_, v___x_4828_);
return v___x_4835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync___boxed(lean_object* v_options_4836_, lean_object* v_a_4837_){
_start:
{
lean_object* v_res_4838_; 
v_res_4838_ = l_Lasm_JS_Deno_makeTempDirSync(v_options_4836_);
return v_res_4838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile(lean_object* v_options_4847_){
_start:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; 
v___x_4849_ = lean_unsigned_to_nat(1u);
v___x_4850_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFile___closed__2));
v___x_4851_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4847_);
v___x_4852_ = lean_mk_empty_array_with_capacity(v___x_4849_);
v___x_4853_ = lean_array_push(v___x_4852_, v___x_4851_);
v___x_4854_ = l_Lasm_JS_Web_Support_args(v___x_4853_);
v___x_4855_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4850_, v___x_4854_);
return v___x_4855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile___boxed(lean_object* v_options_4856_, lean_object* v_a_4857_){
_start:
{
lean_object* v_res_4858_; 
v_res_4858_ = l_Lasm_JS_Deno_makeTempFile(v_options_4856_);
return v_res_4858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync(lean_object* v_options_4867_){
_start:
{
uint8_t v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; 
v___x_4869_ = 0;
v___x_4870_ = lean_unsigned_to_nat(1u);
v___x_4871_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFileSync___closed__2));
v___x_4872_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4867_);
v___x_4873_ = lean_mk_empty_array_with_capacity(v___x_4870_);
v___x_4874_ = lean_array_push(v___x_4873_, v___x_4872_);
v___x_4875_ = l_Lasm_JS_Web_Support_args(v___x_4874_);
v___x_4876_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4871_, v___x_4875_, v___x_4869_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync___boxed(lean_object* v_options_4877_, lean_object* v_a_4878_){
_start:
{
lean_object* v_res_4879_; 
v_res_4879_ = l_Lasm_JS_Deno_makeTempFileSync(v_options_4877_);
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod(lean_object* v_path_4888_, double v_mode_4889_){
_start:
{
lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___y_4894_; 
v___x_4891_ = lean_unsigned_to_nat(2u);
v___x_4892_ = ((lean_object*)(l_Lasm_JS_Deno_chmod___closed__2));
if (lean_obj_tag(v_path_4888_) == 0)
{
lean_object* v_value_4901_; lean_object* v___x_4903_; uint8_t v_isShared_4904_; uint8_t v_isSharedCheck_4908_; 
v_value_4901_ = lean_ctor_get(v_path_4888_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v_path_4888_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4903_ = v_path_4888_;
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
else
{
lean_inc(v_value_4901_);
lean_dec(v_path_4888_);
v___x_4903_ = lean_box(0);
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
v_resetjp_4902_:
{
lean_object* v___x_4906_; 
if (v_isShared_4904_ == 0)
{
lean_ctor_set_tag(v___x_4903_, 4);
v___x_4906_ = v___x_4903_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v_value_4901_);
v___x_4906_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
v___y_4894_ = v___x_4906_;
goto v___jp_4893_;
}
}
}
else
{
lean_object* v_value_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v_value_4909_ = lean_ctor_get(v_path_4888_, 0);
lean_inc(v_value_4909_);
lean_dec_ref_known(v_path_4888_, 1);
v___x_4910_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4911_, 0, v_value_4909_);
lean_ctor_set(v___x_4911_, 1, v___x_4910_);
v___y_4894_ = v___x_4911_;
goto v___jp_4893_;
}
v___jp_4893_:
{
lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; 
v___x_4895_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4895_, 0, v_mode_4889_);
v___x_4896_ = lean_mk_empty_array_with_capacity(v___x_4891_);
v___x_4897_ = lean_array_push(v___x_4896_, v___y_4894_);
v___x_4898_ = lean_array_push(v___x_4897_, v___x_4895_);
v___x_4899_ = l_Lasm_JS_Web_Support_args(v___x_4898_);
v___x_4900_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4892_, v___x_4899_);
return v___x_4900_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod___boxed(lean_object* v_path_4912_, lean_object* v_mode_4913_, lean_object* v_a_4914_){
_start:
{
double v_mode_boxed_4915_; lean_object* v_res_4916_; 
v_mode_boxed_4915_ = lean_unbox_float(v_mode_4913_);
lean_dec_ref(v_mode_4913_);
v_res_4916_ = l_Lasm_JS_Deno_chmod(v_path_4912_, v_mode_boxed_4915_);
return v_res_4916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync(lean_object* v_path_4925_, double v_mode_4926_){
_start:
{
uint8_t v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___y_4932_; 
v___x_4928_ = 0;
v___x_4929_ = lean_unsigned_to_nat(2u);
v___x_4930_ = ((lean_object*)(l_Lasm_JS_Deno_chmodSync___closed__2));
if (lean_obj_tag(v_path_4925_) == 0)
{
lean_object* v_value_4939_; lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4946_; 
v_value_4939_ = lean_ctor_get(v_path_4925_, 0);
v_isSharedCheck_4946_ = !lean_is_exclusive(v_path_4925_);
if (v_isSharedCheck_4946_ == 0)
{
v___x_4941_ = v_path_4925_;
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
else
{
lean_inc(v_value_4939_);
lean_dec(v_path_4925_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4944_; 
if (v_isShared_4942_ == 0)
{
lean_ctor_set_tag(v___x_4941_, 4);
v___x_4944_ = v___x_4941_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v_value_4939_);
v___x_4944_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
v___y_4932_ = v___x_4944_;
goto v___jp_4931_;
}
}
}
else
{
lean_object* v_value_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; 
v_value_4947_ = lean_ctor_get(v_path_4925_, 0);
lean_inc(v_value_4947_);
lean_dec_ref_known(v_path_4925_, 1);
v___x_4948_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4949_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4949_, 0, v_value_4947_);
lean_ctor_set(v___x_4949_, 1, v___x_4948_);
v___y_4932_ = v___x_4949_;
goto v___jp_4931_;
}
v___jp_4931_:
{
lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; 
v___x_4933_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4933_, 0, v_mode_4926_);
v___x_4934_ = lean_mk_empty_array_with_capacity(v___x_4929_);
v___x_4935_ = lean_array_push(v___x_4934_, v___y_4932_);
v___x_4936_ = lean_array_push(v___x_4935_, v___x_4933_);
v___x_4937_ = l_Lasm_JS_Web_Support_args(v___x_4936_);
v___x_4938_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4930_, v___x_4937_, v___x_4928_);
return v___x_4938_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync___boxed(lean_object* v_path_4950_, lean_object* v_mode_4951_, lean_object* v_a_4952_){
_start:
{
double v_mode_boxed_4953_; lean_object* v_res_4954_; 
v_mode_boxed_4953_ = lean_unbox_float(v_mode_4951_);
lean_dec_ref(v_mode_4951_);
v_res_4954_ = l_Lasm_JS_Deno_chmodSync(v_path_4950_, v_mode_boxed_4953_);
return v_res_4954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown(lean_object* v_path_4963_, lean_object* v_uid_4964_, lean_object* v_gid_4965_){
_start:
{
lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___y_4970_; lean_object* v___y_4971_; lean_object* v___y_4972_; lean_object* v___y_4980_; lean_object* v___y_4981_; lean_object* v___y_4987_; 
v___x_4967_ = lean_unsigned_to_nat(3u);
v___x_4968_ = ((lean_object*)(l_Lasm_JS_Deno_chown___closed__2));
if (lean_obj_tag(v_path_4963_) == 0)
{
lean_object* v_value_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_4999_; 
v_value_4992_ = lean_ctor_get(v_path_4963_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v_path_4963_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4994_ = v_path_4963_;
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_value_4992_);
lean_dec(v_path_4963_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4997_; 
if (v_isShared_4995_ == 0)
{
lean_ctor_set_tag(v___x_4994_, 4);
v___x_4997_ = v___x_4994_;
goto v_reusejp_4996_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_value_4992_);
v___x_4997_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4996_;
}
v_reusejp_4996_:
{
v___y_4987_ = v___x_4997_;
goto v___jp_4986_;
}
}
}
else
{
lean_object* v_value_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; 
v_value_5000_ = lean_ctor_get(v_path_4963_, 0);
lean_inc(v_value_5000_);
lean_dec_ref_known(v_path_4963_, 1);
v___x_5001_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5002_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5002_, 0, v_value_5000_);
lean_ctor_set(v___x_5002_, 1, v___x_5001_);
v___y_4987_ = v___x_5002_;
goto v___jp_4986_;
}
v___jp_4969_:
{
lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___x_4973_ = lean_mk_empty_array_with_capacity(v___x_4967_);
v___x_4974_ = lean_array_push(v___x_4973_, v___y_4970_);
v___x_4975_ = lean_array_push(v___x_4974_, v___y_4971_);
v___x_4976_ = lean_array_push(v___x_4975_, v___y_4972_);
v___x_4977_ = l_Lasm_JS_Web_Support_args(v___x_4976_);
v___x_4978_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4968_, v___x_4977_);
return v___x_4978_;
}
v___jp_4979_:
{
if (lean_obj_tag(v_gid_4965_) == 0)
{
lean_object* v___x_4982_; 
v___x_4982_ = lean_box(1);
v___y_4970_ = v___y_4980_;
v___y_4971_ = v___y_4981_;
v___y_4972_ = v___x_4982_;
goto v___jp_4969_;
}
else
{
lean_object* v_val_4983_; lean_object* v___x_4984_; double v___x_4985_; 
v_val_4983_ = lean_ctor_get(v_gid_4965_, 0);
v___x_4984_ = lean_alloc_ctor(3, 0, 8);
v___x_4985_ = lean_unbox_float(v_val_4983_);
lean_ctor_set_float(v___x_4984_, 0, v___x_4985_);
v___y_4970_ = v___y_4980_;
v___y_4971_ = v___y_4981_;
v___y_4972_ = v___x_4984_;
goto v___jp_4969_;
}
}
v___jp_4986_:
{
if (lean_obj_tag(v_uid_4964_) == 0)
{
lean_object* v___x_4988_; 
v___x_4988_ = lean_box(1);
v___y_4980_ = v___y_4987_;
v___y_4981_ = v___x_4988_;
goto v___jp_4979_;
}
else
{
lean_object* v_val_4989_; lean_object* v___x_4990_; double v___x_4991_; 
v_val_4989_ = lean_ctor_get(v_uid_4964_, 0);
v___x_4990_ = lean_alloc_ctor(3, 0, 8);
v___x_4991_ = lean_unbox_float(v_val_4989_);
lean_ctor_set_float(v___x_4990_, 0, v___x_4991_);
v___y_4980_ = v___y_4987_;
v___y_4981_ = v___x_4990_;
goto v___jp_4979_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown___boxed(lean_object* v_path_5003_, lean_object* v_uid_5004_, lean_object* v_gid_5005_, lean_object* v_a_5006_){
_start:
{
lean_object* v_res_5007_; 
v_res_5007_ = l_Lasm_JS_Deno_chown(v_path_5003_, v_uid_5004_, v_gid_5005_);
lean_dec(v_gid_5005_);
lean_dec(v_uid_5004_);
return v_res_5007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync(lean_object* v_path_5016_, lean_object* v_uid_5017_, lean_object* v_gid_5018_){
_start:
{
uint8_t v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___y_5024_; lean_object* v___y_5025_; lean_object* v___y_5026_; lean_object* v___y_5034_; lean_object* v___y_5035_; lean_object* v___y_5041_; 
v___x_5020_ = 0;
v___x_5021_ = lean_unsigned_to_nat(3u);
v___x_5022_ = ((lean_object*)(l_Lasm_JS_Deno_chownSync___closed__2));
if (lean_obj_tag(v_path_5016_) == 0)
{
lean_object* v_value_5046_; lean_object* v___x_5048_; uint8_t v_isShared_5049_; uint8_t v_isSharedCheck_5053_; 
v_value_5046_ = lean_ctor_get(v_path_5016_, 0);
v_isSharedCheck_5053_ = !lean_is_exclusive(v_path_5016_);
if (v_isSharedCheck_5053_ == 0)
{
v___x_5048_ = v_path_5016_;
v_isShared_5049_ = v_isSharedCheck_5053_;
goto v_resetjp_5047_;
}
else
{
lean_inc(v_value_5046_);
lean_dec(v_path_5016_);
v___x_5048_ = lean_box(0);
v_isShared_5049_ = v_isSharedCheck_5053_;
goto v_resetjp_5047_;
}
v_resetjp_5047_:
{
lean_object* v___x_5051_; 
if (v_isShared_5049_ == 0)
{
lean_ctor_set_tag(v___x_5048_, 4);
v___x_5051_ = v___x_5048_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5052_; 
v_reuseFailAlloc_5052_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5052_, 0, v_value_5046_);
v___x_5051_ = v_reuseFailAlloc_5052_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
v___y_5041_ = v___x_5051_;
goto v___jp_5040_;
}
}
}
else
{
lean_object* v_value_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; 
v_value_5054_ = lean_ctor_get(v_path_5016_, 0);
lean_inc(v_value_5054_);
lean_dec_ref_known(v_path_5016_, 1);
v___x_5055_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5056_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5056_, 0, v_value_5054_);
lean_ctor_set(v___x_5056_, 1, v___x_5055_);
v___y_5041_ = v___x_5056_;
goto v___jp_5040_;
}
v___jp_5023_:
{
lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; 
v___x_5027_ = lean_mk_empty_array_with_capacity(v___x_5021_);
v___x_5028_ = lean_array_push(v___x_5027_, v___y_5025_);
v___x_5029_ = lean_array_push(v___x_5028_, v___y_5024_);
v___x_5030_ = lean_array_push(v___x_5029_, v___y_5026_);
v___x_5031_ = l_Lasm_JS_Web_Support_args(v___x_5030_);
v___x_5032_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5022_, v___x_5031_, v___x_5020_);
return v___x_5032_;
}
v___jp_5033_:
{
if (lean_obj_tag(v_gid_5018_) == 0)
{
lean_object* v___x_5036_; 
v___x_5036_ = lean_box(1);
v___y_5024_ = v___y_5035_;
v___y_5025_ = v___y_5034_;
v___y_5026_ = v___x_5036_;
goto v___jp_5023_;
}
else
{
lean_object* v_val_5037_; lean_object* v___x_5038_; double v___x_5039_; 
v_val_5037_ = lean_ctor_get(v_gid_5018_, 0);
v___x_5038_ = lean_alloc_ctor(3, 0, 8);
v___x_5039_ = lean_unbox_float(v_val_5037_);
lean_ctor_set_float(v___x_5038_, 0, v___x_5039_);
v___y_5024_ = v___y_5035_;
v___y_5025_ = v___y_5034_;
v___y_5026_ = v___x_5038_;
goto v___jp_5023_;
}
}
v___jp_5040_:
{
if (lean_obj_tag(v_uid_5017_) == 0)
{
lean_object* v___x_5042_; 
v___x_5042_ = lean_box(1);
v___y_5034_ = v___y_5041_;
v___y_5035_ = v___x_5042_;
goto v___jp_5033_;
}
else
{
lean_object* v_val_5043_; lean_object* v___x_5044_; double v___x_5045_; 
v_val_5043_ = lean_ctor_get(v_uid_5017_, 0);
v___x_5044_ = lean_alloc_ctor(3, 0, 8);
v___x_5045_ = lean_unbox_float(v_val_5043_);
lean_ctor_set_float(v___x_5044_, 0, v___x_5045_);
v___y_5034_ = v___y_5041_;
v___y_5035_ = v___x_5044_;
goto v___jp_5033_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync___boxed(lean_object* v_path_5057_, lean_object* v_uid_5058_, lean_object* v_gid_5059_, lean_object* v_a_5060_){
_start:
{
lean_object* v_res_5061_; 
v_res_5061_ = l_Lasm_JS_Deno_chownSync(v_path_5057_, v_uid_5058_, v_gid_5059_);
lean_dec(v_gid_5059_);
lean_dec(v_uid_5058_);
return v_res_5061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(lean_object* v_x_5062_){
_start:
{
if (lean_obj_tag(v_x_5062_) == 0)
{
lean_object* v___x_5063_; 
v___x_5063_ = lean_box(0);
return v___x_5063_;
}
else
{
lean_object* v_val_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; 
v_val_5064_ = lean_ctor_get(v_x_5062_, 0);
v___x_5065_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_5066_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_5064_);
v___x_5067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5067_, 0, v___x_5065_);
lean_ctor_set(v___x_5067_, 1, v___x_5066_);
v___x_5068_ = lean_unsigned_to_nat(1u);
v___x_5069_ = lean_mk_empty_array_with_capacity(v___x_5068_);
v___x_5070_ = lean_array_push(v___x_5069_, v___x_5067_);
v___x_5071_ = l_Lasm_JS_Web_Support_fields(v___x_5070_);
lean_dec_ref(v___x_5070_);
return v___x_5071_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0___boxed(lean_object* v_x_5072_){
_start:
{
lean_object* v_res_5073_; 
v_res_5073_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_x_5072_);
lean_dec(v_x_5072_);
return v_res_5073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove(lean_object* v_path_5082_, lean_object* v_options_5083_){
_start:
{
lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___y_5088_; 
v___x_5085_ = lean_unsigned_to_nat(2u);
v___x_5086_ = ((lean_object*)(l_Lasm_JS_Deno_remove___closed__2));
if (lean_obj_tag(v_path_5082_) == 0)
{
lean_object* v_value_5095_; lean_object* v___x_5097_; uint8_t v_isShared_5098_; uint8_t v_isSharedCheck_5102_; 
v_value_5095_ = lean_ctor_get(v_path_5082_, 0);
v_isSharedCheck_5102_ = !lean_is_exclusive(v_path_5082_);
if (v_isSharedCheck_5102_ == 0)
{
v___x_5097_ = v_path_5082_;
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
else
{
lean_inc(v_value_5095_);
lean_dec(v_path_5082_);
v___x_5097_ = lean_box(0);
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
v_resetjp_5096_:
{
lean_object* v___x_5100_; 
if (v_isShared_5098_ == 0)
{
lean_ctor_set_tag(v___x_5097_, 4);
v___x_5100_ = v___x_5097_;
goto v_reusejp_5099_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v_value_5095_);
v___x_5100_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5099_;
}
v_reusejp_5099_:
{
v___y_5088_ = v___x_5100_;
goto v___jp_5087_;
}
}
}
else
{
lean_object* v_value_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v_value_5103_ = lean_ctor_get(v_path_5082_, 0);
lean_inc(v_value_5103_);
lean_dec_ref_known(v_path_5082_, 1);
v___x_5104_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5105_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5105_, 0, v_value_5103_);
lean_ctor_set(v___x_5105_, 1, v___x_5104_);
v___y_5088_ = v___x_5105_;
goto v___jp_5087_;
}
v___jp_5087_:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; 
v___x_5089_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5083_);
v___x_5090_ = lean_mk_empty_array_with_capacity(v___x_5085_);
v___x_5091_ = lean_array_push(v___x_5090_, v___y_5088_);
v___x_5092_ = lean_array_push(v___x_5091_, v___x_5089_);
v___x_5093_ = l_Lasm_JS_Web_Support_args(v___x_5092_);
v___x_5094_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5086_, v___x_5093_);
return v___x_5094_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove___boxed(lean_object* v_path_5106_, lean_object* v_options_5107_, lean_object* v_a_5108_){
_start:
{
lean_object* v_res_5109_; 
v_res_5109_ = l_Lasm_JS_Deno_remove(v_path_5106_, v_options_5107_);
lean_dec(v_options_5107_);
return v_res_5109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync(lean_object* v_path_5118_, lean_object* v_options_5119_){
_start:
{
uint8_t v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___y_5125_; 
v___x_5121_ = 0;
v___x_5122_ = lean_unsigned_to_nat(2u);
v___x_5123_ = ((lean_object*)(l_Lasm_JS_Deno_removeSync___closed__2));
if (lean_obj_tag(v_path_5118_) == 0)
{
lean_object* v_value_5132_; lean_object* v___x_5134_; uint8_t v_isShared_5135_; uint8_t v_isSharedCheck_5139_; 
v_value_5132_ = lean_ctor_get(v_path_5118_, 0);
v_isSharedCheck_5139_ = !lean_is_exclusive(v_path_5118_);
if (v_isSharedCheck_5139_ == 0)
{
v___x_5134_ = v_path_5118_;
v_isShared_5135_ = v_isSharedCheck_5139_;
goto v_resetjp_5133_;
}
else
{
lean_inc(v_value_5132_);
lean_dec(v_path_5118_);
v___x_5134_ = lean_box(0);
v_isShared_5135_ = v_isSharedCheck_5139_;
goto v_resetjp_5133_;
}
v_resetjp_5133_:
{
lean_object* v___x_5137_; 
if (v_isShared_5135_ == 0)
{
lean_ctor_set_tag(v___x_5134_, 4);
v___x_5137_ = v___x_5134_;
goto v_reusejp_5136_;
}
else
{
lean_object* v_reuseFailAlloc_5138_; 
v_reuseFailAlloc_5138_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5138_, 0, v_value_5132_);
v___x_5137_ = v_reuseFailAlloc_5138_;
goto v_reusejp_5136_;
}
v_reusejp_5136_:
{
v___y_5125_ = v___x_5137_;
goto v___jp_5124_;
}
}
}
else
{
lean_object* v_value_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; 
v_value_5140_ = lean_ctor_get(v_path_5118_, 0);
lean_inc(v_value_5140_);
lean_dec_ref_known(v_path_5118_, 1);
v___x_5141_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5142_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5142_, 0, v_value_5140_);
lean_ctor_set(v___x_5142_, 1, v___x_5141_);
v___y_5125_ = v___x_5142_;
goto v___jp_5124_;
}
v___jp_5124_:
{
lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; 
v___x_5126_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5119_);
v___x_5127_ = lean_mk_empty_array_with_capacity(v___x_5122_);
v___x_5128_ = lean_array_push(v___x_5127_, v___y_5125_);
v___x_5129_ = lean_array_push(v___x_5128_, v___x_5126_);
v___x_5130_ = l_Lasm_JS_Web_Support_args(v___x_5129_);
v___x_5131_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5123_, v___x_5130_, v___x_5121_);
return v___x_5131_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync___boxed(lean_object* v_path_5143_, lean_object* v_options_5144_, lean_object* v_a_5145_){
_start:
{
lean_object* v_res_5146_; 
v_res_5146_ = l_Lasm_JS_Deno_removeSync(v_path_5143_, v_options_5144_);
lean_dec(v_options_5144_);
return v_res_5146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync(lean_object* v_oldpath_5155_, lean_object* v_newpath_5156_){
_start:
{
uint8_t v___x_5158_; lean_object* v___x_5159_; lean_object* v___x_5160_; lean_object* v___y_5162_; lean_object* v___y_5163_; lean_object* v___y_5170_; 
v___x_5158_ = 0;
v___x_5159_ = lean_unsigned_to_nat(2u);
v___x_5160_ = ((lean_object*)(l_Lasm_JS_Deno_renameSync___closed__2));
if (lean_obj_tag(v_oldpath_5155_) == 0)
{
lean_object* v_value_5182_; lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5189_; 
v_value_5182_ = lean_ctor_get(v_oldpath_5155_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v_oldpath_5155_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5184_ = v_oldpath_5155_;
v_isShared_5185_ = v_isSharedCheck_5189_;
goto v_resetjp_5183_;
}
else
{
lean_inc(v_value_5182_);
lean_dec(v_oldpath_5155_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5189_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v___x_5187_; 
if (v_isShared_5185_ == 0)
{
lean_ctor_set_tag(v___x_5184_, 4);
v___x_5187_ = v___x_5184_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v_value_5182_);
v___x_5187_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
v___y_5170_ = v___x_5187_;
goto v___jp_5169_;
}
}
}
else
{
lean_object* v_value_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; 
v_value_5190_ = lean_ctor_get(v_oldpath_5155_, 0);
lean_inc(v_value_5190_);
lean_dec_ref_known(v_oldpath_5155_, 1);
v___x_5191_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5192_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5192_, 0, v_value_5190_);
lean_ctor_set(v___x_5192_, 1, v___x_5191_);
v___y_5170_ = v___x_5192_;
goto v___jp_5169_;
}
v___jp_5161_:
{
lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5168_; 
v___x_5164_ = lean_mk_empty_array_with_capacity(v___x_5159_);
v___x_5165_ = lean_array_push(v___x_5164_, v___y_5162_);
v___x_5166_ = lean_array_push(v___x_5165_, v___y_5163_);
v___x_5167_ = l_Lasm_JS_Web_Support_args(v___x_5166_);
v___x_5168_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5160_, v___x_5167_, v___x_5158_);
return v___x_5168_;
}
v___jp_5169_:
{
if (lean_obj_tag(v_newpath_5156_) == 0)
{
lean_object* v_value_5171_; lean_object* v___x_5173_; uint8_t v_isShared_5174_; uint8_t v_isSharedCheck_5178_; 
v_value_5171_ = lean_ctor_get(v_newpath_5156_, 0);
v_isSharedCheck_5178_ = !lean_is_exclusive(v_newpath_5156_);
if (v_isSharedCheck_5178_ == 0)
{
v___x_5173_ = v_newpath_5156_;
v_isShared_5174_ = v_isSharedCheck_5178_;
goto v_resetjp_5172_;
}
else
{
lean_inc(v_value_5171_);
lean_dec(v_newpath_5156_);
v___x_5173_ = lean_box(0);
v_isShared_5174_ = v_isSharedCheck_5178_;
goto v_resetjp_5172_;
}
v_resetjp_5172_:
{
lean_object* v___x_5176_; 
if (v_isShared_5174_ == 0)
{
lean_ctor_set_tag(v___x_5173_, 4);
v___x_5176_ = v___x_5173_;
goto v_reusejp_5175_;
}
else
{
lean_object* v_reuseFailAlloc_5177_; 
v_reuseFailAlloc_5177_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5177_, 0, v_value_5171_);
v___x_5176_ = v_reuseFailAlloc_5177_;
goto v_reusejp_5175_;
}
v_reusejp_5175_:
{
v___y_5162_ = v___y_5170_;
v___y_5163_ = v___x_5176_;
goto v___jp_5161_;
}
}
}
else
{
lean_object* v_value_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; 
v_value_5179_ = lean_ctor_get(v_newpath_5156_, 0);
lean_inc(v_value_5179_);
lean_dec_ref_known(v_newpath_5156_, 1);
v___x_5180_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5181_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5181_, 0, v_value_5179_);
lean_ctor_set(v___x_5181_, 1, v___x_5180_);
v___y_5162_ = v___y_5170_;
v___y_5163_ = v___x_5181_;
goto v___jp_5161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync___boxed(lean_object* v_oldpath_5193_, lean_object* v_newpath_5194_, lean_object* v_a_5195_){
_start:
{
lean_object* v_res_5196_; 
v_res_5196_ = l_Lasm_JS_Deno_renameSync(v_oldpath_5193_, v_newpath_5194_);
return v_res_5196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename(lean_object* v_oldpath_5205_, lean_object* v_newpath_5206_){
_start:
{
lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___y_5211_; lean_object* v___y_5212_; lean_object* v___y_5219_; 
v___x_5208_ = lean_unsigned_to_nat(2u);
v___x_5209_ = ((lean_object*)(l_Lasm_JS_Deno_rename___closed__2));
if (lean_obj_tag(v_oldpath_5205_) == 0)
{
lean_object* v_value_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5238_; 
v_value_5231_ = lean_ctor_get(v_oldpath_5205_, 0);
v_isSharedCheck_5238_ = !lean_is_exclusive(v_oldpath_5205_);
if (v_isSharedCheck_5238_ == 0)
{
v___x_5233_ = v_oldpath_5205_;
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_value_5231_);
lean_dec(v_oldpath_5205_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
lean_ctor_set_tag(v___x_5233_, 4);
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_value_5231_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
v___y_5219_ = v___x_5236_;
goto v___jp_5218_;
}
}
}
else
{
lean_object* v_value_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; 
v_value_5239_ = lean_ctor_get(v_oldpath_5205_, 0);
lean_inc(v_value_5239_);
lean_dec_ref_known(v_oldpath_5205_, 1);
v___x_5240_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5241_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5241_, 0, v_value_5239_);
lean_ctor_set(v___x_5241_, 1, v___x_5240_);
v___y_5219_ = v___x_5241_;
goto v___jp_5218_;
}
v___jp_5210_:
{
lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; 
v___x_5213_ = lean_mk_empty_array_with_capacity(v___x_5208_);
v___x_5214_ = lean_array_push(v___x_5213_, v___y_5211_);
v___x_5215_ = lean_array_push(v___x_5214_, v___y_5212_);
v___x_5216_ = l_Lasm_JS_Web_Support_args(v___x_5215_);
v___x_5217_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5209_, v___x_5216_);
return v___x_5217_;
}
v___jp_5218_:
{
if (lean_obj_tag(v_newpath_5206_) == 0)
{
lean_object* v_value_5220_; lean_object* v___x_5222_; uint8_t v_isShared_5223_; uint8_t v_isSharedCheck_5227_; 
v_value_5220_ = lean_ctor_get(v_newpath_5206_, 0);
v_isSharedCheck_5227_ = !lean_is_exclusive(v_newpath_5206_);
if (v_isSharedCheck_5227_ == 0)
{
v___x_5222_ = v_newpath_5206_;
v_isShared_5223_ = v_isSharedCheck_5227_;
goto v_resetjp_5221_;
}
else
{
lean_inc(v_value_5220_);
lean_dec(v_newpath_5206_);
v___x_5222_ = lean_box(0);
v_isShared_5223_ = v_isSharedCheck_5227_;
goto v_resetjp_5221_;
}
v_resetjp_5221_:
{
lean_object* v___x_5225_; 
if (v_isShared_5223_ == 0)
{
lean_ctor_set_tag(v___x_5222_, 4);
v___x_5225_ = v___x_5222_;
goto v_reusejp_5224_;
}
else
{
lean_object* v_reuseFailAlloc_5226_; 
v_reuseFailAlloc_5226_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5226_, 0, v_value_5220_);
v___x_5225_ = v_reuseFailAlloc_5226_;
goto v_reusejp_5224_;
}
v_reusejp_5224_:
{
v___y_5211_ = v___y_5219_;
v___y_5212_ = v___x_5225_;
goto v___jp_5210_;
}
}
}
else
{
lean_object* v_value_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; 
v_value_5228_ = lean_ctor_get(v_newpath_5206_, 0);
lean_inc(v_value_5228_);
lean_dec_ref_known(v_newpath_5206_, 1);
v___x_5229_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5230_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5230_, 0, v_value_5228_);
lean_ctor_set(v___x_5230_, 1, v___x_5229_);
v___y_5211_ = v___y_5219_;
v___y_5212_ = v___x_5230_;
goto v___jp_5210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename___boxed(lean_object* v_oldpath_5242_, lean_object* v_newpath_5243_, lean_object* v_a_5244_){
_start:
{
lean_object* v_res_5245_; 
v_res_5245_ = l_Lasm_JS_Deno_rename(v_oldpath_5242_, v_newpath_5243_);
return v_res_5245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(lean_object* v_x_5246_){
_start:
{
if (lean_obj_tag(v_x_5246_) == 0)
{
lean_object* v___x_5247_; 
v___x_5247_ = lean_box(0);
return v___x_5247_;
}
else
{
lean_object* v_val_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; 
v_val_5248_ = lean_ctor_get(v_x_5246_, 0);
v___x_5249_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5250_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_5248_);
v___x_5251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5251_, 0, v___x_5249_);
lean_ctor_set(v___x_5251_, 1, v___x_5250_);
v___x_5252_ = lean_unsigned_to_nat(1u);
v___x_5253_ = lean_mk_empty_array_with_capacity(v___x_5252_);
v___x_5254_ = lean_array_push(v___x_5253_, v___x_5251_);
v___x_5255_ = l_Lasm_JS_Web_Support_fields(v___x_5254_);
lean_dec_ref(v___x_5254_);
return v___x_5255_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0___boxed(lean_object* v_x_5256_){
_start:
{
lean_object* v_res_5257_; 
v_res_5257_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_x_5256_);
lean_dec(v_x_5256_);
return v_res_5257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile(lean_object* v_path_5266_, lean_object* v_options_5267_){
_start:
{
lean_object* v___x_5269_; lean_object* v___x_5270_; lean_object* v___y_5272_; 
v___x_5269_ = lean_unsigned_to_nat(2u);
v___x_5270_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFile___closed__2));
if (lean_obj_tag(v_path_5266_) == 0)
{
lean_object* v_value_5279_; lean_object* v___x_5281_; uint8_t v_isShared_5282_; uint8_t v_isSharedCheck_5286_; 
v_value_5279_ = lean_ctor_get(v_path_5266_, 0);
v_isSharedCheck_5286_ = !lean_is_exclusive(v_path_5266_);
if (v_isSharedCheck_5286_ == 0)
{
v___x_5281_ = v_path_5266_;
v_isShared_5282_ = v_isSharedCheck_5286_;
goto v_resetjp_5280_;
}
else
{
lean_inc(v_value_5279_);
lean_dec(v_path_5266_);
v___x_5281_ = lean_box(0);
v_isShared_5282_ = v_isSharedCheck_5286_;
goto v_resetjp_5280_;
}
v_resetjp_5280_:
{
lean_object* v___x_5284_; 
if (v_isShared_5282_ == 0)
{
lean_ctor_set_tag(v___x_5281_, 4);
v___x_5284_ = v___x_5281_;
goto v_reusejp_5283_;
}
else
{
lean_object* v_reuseFailAlloc_5285_; 
v_reuseFailAlloc_5285_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5285_, 0, v_value_5279_);
v___x_5284_ = v_reuseFailAlloc_5285_;
goto v_reusejp_5283_;
}
v_reusejp_5283_:
{
v___y_5272_ = v___x_5284_;
goto v___jp_5271_;
}
}
}
else
{
lean_object* v_value_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; 
v_value_5287_ = lean_ctor_get(v_path_5266_, 0);
lean_inc(v_value_5287_);
lean_dec_ref_known(v_path_5266_, 1);
v___x_5288_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5289_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5289_, 0, v_value_5287_);
lean_ctor_set(v___x_5289_, 1, v___x_5288_);
v___y_5272_ = v___x_5289_;
goto v___jp_5271_;
}
v___jp_5271_:
{
lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; 
v___x_5273_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5267_);
v___x_5274_ = lean_mk_empty_array_with_capacity(v___x_5269_);
v___x_5275_ = lean_array_push(v___x_5274_, v___y_5272_);
v___x_5276_ = lean_array_push(v___x_5275_, v___x_5273_);
v___x_5277_ = l_Lasm_JS_Web_Support_args(v___x_5276_);
v___x_5278_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5270_, v___x_5277_);
return v___x_5278_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile___boxed(lean_object* v_path_5290_, lean_object* v_options_5291_, lean_object* v_a_5292_){
_start:
{
lean_object* v_res_5293_; 
v_res_5293_ = l_Lasm_JS_Deno_readTextFile(v_path_5290_, v_options_5291_);
lean_dec(v_options_5291_);
return v_res_5293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync(lean_object* v_path_5302_){
_start:
{
uint8_t v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___y_5308_; 
v___x_5304_ = 0;
v___x_5305_ = lean_unsigned_to_nat(1u);
v___x_5306_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFileSync___closed__2));
if (lean_obj_tag(v_path_5302_) == 0)
{
lean_object* v_value_5313_; lean_object* v___x_5315_; uint8_t v_isShared_5316_; uint8_t v_isSharedCheck_5320_; 
v_value_5313_ = lean_ctor_get(v_path_5302_, 0);
v_isSharedCheck_5320_ = !lean_is_exclusive(v_path_5302_);
if (v_isSharedCheck_5320_ == 0)
{
v___x_5315_ = v_path_5302_;
v_isShared_5316_ = v_isSharedCheck_5320_;
goto v_resetjp_5314_;
}
else
{
lean_inc(v_value_5313_);
lean_dec(v_path_5302_);
v___x_5315_ = lean_box(0);
v_isShared_5316_ = v_isSharedCheck_5320_;
goto v_resetjp_5314_;
}
v_resetjp_5314_:
{
lean_object* v___x_5318_; 
if (v_isShared_5316_ == 0)
{
lean_ctor_set_tag(v___x_5315_, 4);
v___x_5318_ = v___x_5315_;
goto v_reusejp_5317_;
}
else
{
lean_object* v_reuseFailAlloc_5319_; 
v_reuseFailAlloc_5319_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5319_, 0, v_value_5313_);
v___x_5318_ = v_reuseFailAlloc_5319_;
goto v_reusejp_5317_;
}
v_reusejp_5317_:
{
v___y_5308_ = v___x_5318_;
goto v___jp_5307_;
}
}
}
else
{
lean_object* v_value_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; 
v_value_5321_ = lean_ctor_get(v_path_5302_, 0);
lean_inc(v_value_5321_);
lean_dec_ref_known(v_path_5302_, 1);
v___x_5322_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5323_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5323_, 0, v_value_5321_);
lean_ctor_set(v___x_5323_, 1, v___x_5322_);
v___y_5308_ = v___x_5323_;
goto v___jp_5307_;
}
v___jp_5307_:
{
lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; 
v___x_5309_ = lean_mk_empty_array_with_capacity(v___x_5305_);
v___x_5310_ = lean_array_push(v___x_5309_, v___y_5308_);
v___x_5311_ = l_Lasm_JS_Web_Support_args(v___x_5310_);
v___x_5312_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5306_, v___x_5311_, v___x_5304_);
return v___x_5312_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync___boxed(lean_object* v_path_5324_, lean_object* v_a_5325_){
_start:
{
lean_object* v_res_5326_; 
v_res_5326_ = l_Lasm_JS_Deno_readTextFileSync(v_path_5324_);
return v_res_5326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(lean_object* v_b_5327_, lean_object* v_args_5328_){
_start:
{
uint8_t v_construct_5330_; lean_object* v___x_5331_; uint32_t v___x_5332_; uint64_t v___x_5333_; uint64_t v___y_5335_; 
v_construct_5330_ = lean_ctor_get_uint8(v_b_5327_, sizeof(void*)*4);
v___x_5331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5327_);
v___x_5332_ = 214;
v___x_5333_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5330_ == 0)
{
uint64_t v___x_5343_; 
v___x_5343_ = 0ULL;
v___y_5335_ = v___x_5343_;
goto v___jp_5334_;
}
else
{
uint64_t v___x_5344_; 
v___x_5344_ = 4ULL;
v___y_5335_ = v___x_5344_;
goto v___jp_5334_;
}
v___jp_5334_:
{
uint64_t v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; 
v___x_5336_ = lean_uint64_lor(v___x_5333_, v___y_5335_);
v___x_5337_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5327_, v_args_5328_);
v___x_5338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5339_ = lean_string_append(v___x_5338_, v___x_5331_);
v___x_5340_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5341_ = lean_string_append(v___x_5339_, v___x_5340_);
v___x_5342_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_5331_, v___x_5332_, v___x_5336_, v___x_5337_, v___x_5341_);
return v___x_5342_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0___boxed(lean_object* v_b_5345_, lean_object* v_args_5346_, lean_object* v_a_5347_){
_start:
{
lean_object* v_res_5348_; 
v_res_5348_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v_b_5345_, v_args_5346_);
lean_dec_ref(v_b_5345_);
return v_res_5348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile(lean_object* v_path_5357_, lean_object* v_options_5358_){
_start:
{
lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___y_5363_; 
v___x_5360_ = lean_unsigned_to_nat(2u);
v___x_5361_ = ((lean_object*)(l_Lasm_JS_Deno_readFile___closed__2));
if (lean_obj_tag(v_path_5357_) == 0)
{
lean_object* v_value_5370_; lean_object* v___x_5372_; uint8_t v_isShared_5373_; uint8_t v_isSharedCheck_5377_; 
v_value_5370_ = lean_ctor_get(v_path_5357_, 0);
v_isSharedCheck_5377_ = !lean_is_exclusive(v_path_5357_);
if (v_isSharedCheck_5377_ == 0)
{
v___x_5372_ = v_path_5357_;
v_isShared_5373_ = v_isSharedCheck_5377_;
goto v_resetjp_5371_;
}
else
{
lean_inc(v_value_5370_);
lean_dec(v_path_5357_);
v___x_5372_ = lean_box(0);
v_isShared_5373_ = v_isSharedCheck_5377_;
goto v_resetjp_5371_;
}
v_resetjp_5371_:
{
lean_object* v___x_5375_; 
if (v_isShared_5373_ == 0)
{
lean_ctor_set_tag(v___x_5372_, 4);
v___x_5375_ = v___x_5372_;
goto v_reusejp_5374_;
}
else
{
lean_object* v_reuseFailAlloc_5376_; 
v_reuseFailAlloc_5376_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5376_, 0, v_value_5370_);
v___x_5375_ = v_reuseFailAlloc_5376_;
goto v_reusejp_5374_;
}
v_reusejp_5374_:
{
v___y_5363_ = v___x_5375_;
goto v___jp_5362_;
}
}
}
else
{
lean_object* v_value_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; 
v_value_5378_ = lean_ctor_get(v_path_5357_, 0);
lean_inc(v_value_5378_);
lean_dec_ref_known(v_path_5357_, 1);
v___x_5379_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5380_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5380_, 0, v_value_5378_);
lean_ctor_set(v___x_5380_, 1, v___x_5379_);
v___y_5363_ = v___x_5380_;
goto v___jp_5362_;
}
v___jp_5362_:
{
lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; 
v___x_5364_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5358_);
v___x_5365_ = lean_mk_empty_array_with_capacity(v___x_5360_);
v___x_5366_ = lean_array_push(v___x_5365_, v___y_5363_);
v___x_5367_ = lean_array_push(v___x_5366_, v___x_5364_);
v___x_5368_ = l_Lasm_JS_Web_Support_args(v___x_5367_);
v___x_5369_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v___x_5361_, v___x_5368_);
return v___x_5369_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile___boxed(lean_object* v_path_5381_, lean_object* v_options_5382_, lean_object* v_a_5383_){
_start:
{
lean_object* v_res_5384_; 
v_res_5384_ = l_Lasm_JS_Deno_readFile(v_path_5381_, v_options_5382_);
lean_dec(v_options_5382_);
return v_res_5384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync(lean_object* v_path_5393_){
_start:
{
uint8_t v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___y_5399_; 
v___x_5395_ = 0;
v___x_5396_ = lean_unsigned_to_nat(1u);
v___x_5397_ = ((lean_object*)(l_Lasm_JS_Deno_readFileSync___closed__2));
if (lean_obj_tag(v_path_5393_) == 0)
{
lean_object* v_value_5404_; lean_object* v___x_5406_; uint8_t v_isShared_5407_; uint8_t v_isSharedCheck_5411_; 
v_value_5404_ = lean_ctor_get(v_path_5393_, 0);
v_isSharedCheck_5411_ = !lean_is_exclusive(v_path_5393_);
if (v_isSharedCheck_5411_ == 0)
{
v___x_5406_ = v_path_5393_;
v_isShared_5407_ = v_isSharedCheck_5411_;
goto v_resetjp_5405_;
}
else
{
lean_inc(v_value_5404_);
lean_dec(v_path_5393_);
v___x_5406_ = lean_box(0);
v_isShared_5407_ = v_isSharedCheck_5411_;
goto v_resetjp_5405_;
}
v_resetjp_5405_:
{
lean_object* v___x_5409_; 
if (v_isShared_5407_ == 0)
{
lean_ctor_set_tag(v___x_5406_, 4);
v___x_5409_ = v___x_5406_;
goto v_reusejp_5408_;
}
else
{
lean_object* v_reuseFailAlloc_5410_; 
v_reuseFailAlloc_5410_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5410_, 0, v_value_5404_);
v___x_5409_ = v_reuseFailAlloc_5410_;
goto v_reusejp_5408_;
}
v_reusejp_5408_:
{
v___y_5399_ = v___x_5409_;
goto v___jp_5398_;
}
}
}
else
{
lean_object* v_value_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; 
v_value_5412_ = lean_ctor_get(v_path_5393_, 0);
lean_inc(v_value_5412_);
lean_dec_ref_known(v_path_5393_, 1);
v___x_5413_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5414_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5414_, 0, v_value_5412_);
lean_ctor_set(v___x_5414_, 1, v___x_5413_);
v___y_5399_ = v___x_5414_;
goto v___jp_5398_;
}
v___jp_5398_:
{
lean_object* v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; 
v___x_5400_ = lean_mk_empty_array_with_capacity(v___x_5396_);
v___x_5401_ = lean_array_push(v___x_5400_, v___y_5399_);
v___x_5402_ = l_Lasm_JS_Web_Support_args(v___x_5401_);
v___x_5403_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_5397_, v___x_5402_, v___x_5395_);
return v___x_5403_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync___boxed(lean_object* v_path_5415_, lean_object* v_a_5416_){
_start:
{
lean_object* v_res_5417_; 
v_res_5417_ = l_Lasm_JS_Deno_readFileSync(v_path_5415_);
return v_res_5417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath(lean_object* v_path_5426_){
_start:
{
lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___y_5431_; 
v___x_5428_ = lean_unsigned_to_nat(1u);
v___x_5429_ = ((lean_object*)(l_Lasm_JS_Deno_realPath___closed__2));
if (lean_obj_tag(v_path_5426_) == 0)
{
lean_object* v_value_5436_; lean_object* v___x_5438_; uint8_t v_isShared_5439_; uint8_t v_isSharedCheck_5443_; 
v_value_5436_ = lean_ctor_get(v_path_5426_, 0);
v_isSharedCheck_5443_ = !lean_is_exclusive(v_path_5426_);
if (v_isSharedCheck_5443_ == 0)
{
v___x_5438_ = v_path_5426_;
v_isShared_5439_ = v_isSharedCheck_5443_;
goto v_resetjp_5437_;
}
else
{
lean_inc(v_value_5436_);
lean_dec(v_path_5426_);
v___x_5438_ = lean_box(0);
v_isShared_5439_ = v_isSharedCheck_5443_;
goto v_resetjp_5437_;
}
v_resetjp_5437_:
{
lean_object* v___x_5441_; 
if (v_isShared_5439_ == 0)
{
lean_ctor_set_tag(v___x_5438_, 4);
v___x_5441_ = v___x_5438_;
goto v_reusejp_5440_;
}
else
{
lean_object* v_reuseFailAlloc_5442_; 
v_reuseFailAlloc_5442_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5442_, 0, v_value_5436_);
v___x_5441_ = v_reuseFailAlloc_5442_;
goto v_reusejp_5440_;
}
v_reusejp_5440_:
{
v___y_5431_ = v___x_5441_;
goto v___jp_5430_;
}
}
}
else
{
lean_object* v_value_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; 
v_value_5444_ = lean_ctor_get(v_path_5426_, 0);
lean_inc(v_value_5444_);
lean_dec_ref_known(v_path_5426_, 1);
v___x_5445_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5446_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5446_, 0, v_value_5444_);
lean_ctor_set(v___x_5446_, 1, v___x_5445_);
v___y_5431_ = v___x_5446_;
goto v___jp_5430_;
}
v___jp_5430_:
{
lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; 
v___x_5432_ = lean_mk_empty_array_with_capacity(v___x_5428_);
v___x_5433_ = lean_array_push(v___x_5432_, v___y_5431_);
v___x_5434_ = l_Lasm_JS_Web_Support_args(v___x_5433_);
v___x_5435_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5429_, v___x_5434_);
return v___x_5435_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath___boxed(lean_object* v_path_5447_, lean_object* v_a_5448_){
_start:
{
lean_object* v_res_5449_; 
v_res_5449_ = l_Lasm_JS_Deno_realPath(v_path_5447_);
return v_res_5449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync(lean_object* v_path_5458_){
_start:
{
uint8_t v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___y_5464_; 
v___x_5460_ = 0;
v___x_5461_ = lean_unsigned_to_nat(1u);
v___x_5462_ = ((lean_object*)(l_Lasm_JS_Deno_realPathSync___closed__2));
if (lean_obj_tag(v_path_5458_) == 0)
{
lean_object* v_value_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5476_; 
v_value_5469_ = lean_ctor_get(v_path_5458_, 0);
v_isSharedCheck_5476_ = !lean_is_exclusive(v_path_5458_);
if (v_isSharedCheck_5476_ == 0)
{
v___x_5471_ = v_path_5458_;
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_value_5469_);
lean_dec(v_path_5458_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v___x_5474_; 
if (v_isShared_5472_ == 0)
{
lean_ctor_set_tag(v___x_5471_, 4);
v___x_5474_ = v___x_5471_;
goto v_reusejp_5473_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_value_5469_);
v___x_5474_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5473_;
}
v_reusejp_5473_:
{
v___y_5464_ = v___x_5474_;
goto v___jp_5463_;
}
}
}
else
{
lean_object* v_value_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; 
v_value_5477_ = lean_ctor_get(v_path_5458_, 0);
lean_inc(v_value_5477_);
lean_dec_ref_known(v_path_5458_, 1);
v___x_5478_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5479_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5479_, 0, v_value_5477_);
lean_ctor_set(v___x_5479_, 1, v___x_5478_);
v___y_5464_ = v___x_5479_;
goto v___jp_5463_;
}
v___jp_5463_:
{
lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; 
v___x_5465_ = lean_mk_empty_array_with_capacity(v___x_5461_);
v___x_5466_ = lean_array_push(v___x_5465_, v___y_5464_);
v___x_5467_ = l_Lasm_JS_Web_Support_args(v___x_5466_);
v___x_5468_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5462_, v___x_5467_, v___x_5460_);
return v___x_5468_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync___boxed(lean_object* v_path_5480_, lean_object* v_a_5481_){
_start:
{
lean_object* v_res_5482_; 
v_res_5482_ = l_Lasm_JS_Deno_realPathSync(v_path_5480_);
return v_res_5482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir(lean_object* v_path_5491_){
_start:
{
uint8_t v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___y_5497_; 
v___x_5493_ = 0;
v___x_5494_ = lean_unsigned_to_nat(1u);
v___x_5495_ = ((lean_object*)(l_Lasm_JS_Deno_readDir___closed__2));
if (lean_obj_tag(v_path_5491_) == 0)
{
lean_object* v_value_5518_; lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5525_; 
v_value_5518_ = lean_ctor_get(v_path_5491_, 0);
v_isSharedCheck_5525_ = !lean_is_exclusive(v_path_5491_);
if (v_isSharedCheck_5525_ == 0)
{
v___x_5520_ = v_path_5491_;
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
else
{
lean_inc(v_value_5518_);
lean_dec(v_path_5491_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v___x_5523_; 
if (v_isShared_5521_ == 0)
{
lean_ctor_set_tag(v___x_5520_, 4);
v___x_5523_ = v___x_5520_;
goto v_reusejp_5522_;
}
else
{
lean_object* v_reuseFailAlloc_5524_; 
v_reuseFailAlloc_5524_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5524_, 0, v_value_5518_);
v___x_5523_ = v_reuseFailAlloc_5524_;
goto v_reusejp_5522_;
}
v_reusejp_5522_:
{
v___y_5497_ = v___x_5523_;
goto v___jp_5496_;
}
}
}
else
{
lean_object* v_value_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; 
v_value_5526_ = lean_ctor_get(v_path_5491_, 0);
lean_inc(v_value_5526_);
lean_dec_ref_known(v_path_5491_, 1);
v___x_5527_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5528_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5528_, 0, v_value_5526_);
lean_ctor_set(v___x_5528_, 1, v___x_5527_);
v___y_5497_ = v___x_5528_;
goto v___jp_5496_;
}
v___jp_5496_:
{
lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; 
v___x_5498_ = lean_mk_empty_array_with_capacity(v___x_5494_);
v___x_5499_ = lean_array_push(v___x_5498_, v___y_5497_);
v___x_5500_ = l_Lasm_JS_Web_Support_args(v___x_5499_);
v___x_5501_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_5495_, v___x_5500_, v___x_5493_);
if (lean_obj_tag(v___x_5501_) == 0)
{
lean_object* v_a_5502_; lean_object* v___x_5504_; uint8_t v_isShared_5505_; uint8_t v_isSharedCheck_5509_; 
v_a_5502_ = lean_ctor_get(v___x_5501_, 0);
v_isSharedCheck_5509_ = !lean_is_exclusive(v___x_5501_);
if (v_isSharedCheck_5509_ == 0)
{
v___x_5504_ = v___x_5501_;
v_isShared_5505_ = v_isSharedCheck_5509_;
goto v_resetjp_5503_;
}
else
{
lean_inc(v_a_5502_);
lean_dec(v___x_5501_);
v___x_5504_ = lean_box(0);
v_isShared_5505_ = v_isSharedCheck_5509_;
goto v_resetjp_5503_;
}
v_resetjp_5503_:
{
lean_object* v___x_5507_; 
if (v_isShared_5505_ == 0)
{
v___x_5507_ = v___x_5504_;
goto v_reusejp_5506_;
}
else
{
lean_object* v_reuseFailAlloc_5508_; 
v_reuseFailAlloc_5508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5508_, 0, v_a_5502_);
v___x_5507_ = v_reuseFailAlloc_5508_;
goto v_reusejp_5506_;
}
v_reusejp_5506_:
{
return v___x_5507_;
}
}
}
else
{
lean_object* v_a_5510_; lean_object* v___x_5512_; uint8_t v_isShared_5513_; uint8_t v_isSharedCheck_5517_; 
v_a_5510_ = lean_ctor_get(v___x_5501_, 0);
v_isSharedCheck_5517_ = !lean_is_exclusive(v___x_5501_);
if (v_isSharedCheck_5517_ == 0)
{
v___x_5512_ = v___x_5501_;
v_isShared_5513_ = v_isSharedCheck_5517_;
goto v_resetjp_5511_;
}
else
{
lean_inc(v_a_5510_);
lean_dec(v___x_5501_);
v___x_5512_ = lean_box(0);
v_isShared_5513_ = v_isSharedCheck_5517_;
goto v_resetjp_5511_;
}
v_resetjp_5511_:
{
lean_object* v___x_5515_; 
if (v_isShared_5513_ == 0)
{
v___x_5515_ = v___x_5512_;
goto v_reusejp_5514_;
}
else
{
lean_object* v_reuseFailAlloc_5516_; 
v_reuseFailAlloc_5516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5516_, 0, v_a_5510_);
v___x_5515_ = v_reuseFailAlloc_5516_;
goto v_reusejp_5514_;
}
v_reusejp_5514_:
{
return v___x_5515_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir___boxed(lean_object* v_path_5529_, lean_object* v_a_5530_){
_start:
{
lean_object* v_res_5531_; 
v_res_5531_ = l_Lasm_JS_Deno_readDir(v_path_5529_);
return v_res_5531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile(lean_object* v_fromPath_5540_, lean_object* v_toPath_5541_){
_start:
{
lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___y_5546_; lean_object* v___y_5547_; lean_object* v___y_5554_; 
v___x_5543_ = lean_unsigned_to_nat(2u);
v___x_5544_ = ((lean_object*)(l_Lasm_JS_Deno_copyFile___closed__2));
if (lean_obj_tag(v_fromPath_5540_) == 0)
{
lean_object* v_value_5566_; lean_object* v___x_5568_; uint8_t v_isShared_5569_; uint8_t v_isSharedCheck_5573_; 
v_value_5566_ = lean_ctor_get(v_fromPath_5540_, 0);
v_isSharedCheck_5573_ = !lean_is_exclusive(v_fromPath_5540_);
if (v_isSharedCheck_5573_ == 0)
{
v___x_5568_ = v_fromPath_5540_;
v_isShared_5569_ = v_isSharedCheck_5573_;
goto v_resetjp_5567_;
}
else
{
lean_inc(v_value_5566_);
lean_dec(v_fromPath_5540_);
v___x_5568_ = lean_box(0);
v_isShared_5569_ = v_isSharedCheck_5573_;
goto v_resetjp_5567_;
}
v_resetjp_5567_:
{
lean_object* v___x_5571_; 
if (v_isShared_5569_ == 0)
{
lean_ctor_set_tag(v___x_5568_, 4);
v___x_5571_ = v___x_5568_;
goto v_reusejp_5570_;
}
else
{
lean_object* v_reuseFailAlloc_5572_; 
v_reuseFailAlloc_5572_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5572_, 0, v_value_5566_);
v___x_5571_ = v_reuseFailAlloc_5572_;
goto v_reusejp_5570_;
}
v_reusejp_5570_:
{
v___y_5554_ = v___x_5571_;
goto v___jp_5553_;
}
}
}
else
{
lean_object* v_value_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; 
v_value_5574_ = lean_ctor_get(v_fromPath_5540_, 0);
lean_inc(v_value_5574_);
lean_dec_ref_known(v_fromPath_5540_, 1);
v___x_5575_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5576_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5576_, 0, v_value_5574_);
lean_ctor_set(v___x_5576_, 1, v___x_5575_);
v___y_5554_ = v___x_5576_;
goto v___jp_5553_;
}
v___jp_5545_:
{
lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; 
v___x_5548_ = lean_mk_empty_array_with_capacity(v___x_5543_);
v___x_5549_ = lean_array_push(v___x_5548_, v___y_5546_);
v___x_5550_ = lean_array_push(v___x_5549_, v___y_5547_);
v___x_5551_ = l_Lasm_JS_Web_Support_args(v___x_5550_);
v___x_5552_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5544_, v___x_5551_);
return v___x_5552_;
}
v___jp_5553_:
{
if (lean_obj_tag(v_toPath_5541_) == 0)
{
lean_object* v_value_5555_; lean_object* v___x_5557_; uint8_t v_isShared_5558_; uint8_t v_isSharedCheck_5562_; 
v_value_5555_ = lean_ctor_get(v_toPath_5541_, 0);
v_isSharedCheck_5562_ = !lean_is_exclusive(v_toPath_5541_);
if (v_isSharedCheck_5562_ == 0)
{
v___x_5557_ = v_toPath_5541_;
v_isShared_5558_ = v_isSharedCheck_5562_;
goto v_resetjp_5556_;
}
else
{
lean_inc(v_value_5555_);
lean_dec(v_toPath_5541_);
v___x_5557_ = lean_box(0);
v_isShared_5558_ = v_isSharedCheck_5562_;
goto v_resetjp_5556_;
}
v_resetjp_5556_:
{
lean_object* v___x_5560_; 
if (v_isShared_5558_ == 0)
{
lean_ctor_set_tag(v___x_5557_, 4);
v___x_5560_ = v___x_5557_;
goto v_reusejp_5559_;
}
else
{
lean_object* v_reuseFailAlloc_5561_; 
v_reuseFailAlloc_5561_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5561_, 0, v_value_5555_);
v___x_5560_ = v_reuseFailAlloc_5561_;
goto v_reusejp_5559_;
}
v_reusejp_5559_:
{
v___y_5546_ = v___y_5554_;
v___y_5547_ = v___x_5560_;
goto v___jp_5545_;
}
}
}
else
{
lean_object* v_value_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; 
v_value_5563_ = lean_ctor_get(v_toPath_5541_, 0);
lean_inc(v_value_5563_);
lean_dec_ref_known(v_toPath_5541_, 1);
v___x_5564_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5565_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5565_, 0, v_value_5563_);
lean_ctor_set(v___x_5565_, 1, v___x_5564_);
v___y_5546_ = v___y_5554_;
v___y_5547_ = v___x_5565_;
goto v___jp_5545_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile___boxed(lean_object* v_fromPath_5577_, lean_object* v_toPath_5578_, lean_object* v_a_5579_){
_start:
{
lean_object* v_res_5580_; 
v_res_5580_ = l_Lasm_JS_Deno_copyFile(v_fromPath_5577_, v_toPath_5578_);
return v_res_5580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync(lean_object* v_fromPath_5589_, lean_object* v_toPath_5590_){
_start:
{
uint8_t v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___y_5596_; lean_object* v___y_5597_; lean_object* v___y_5604_; 
v___x_5592_ = 0;
v___x_5593_ = lean_unsigned_to_nat(2u);
v___x_5594_ = ((lean_object*)(l_Lasm_JS_Deno_copyFileSync___closed__2));
if (lean_obj_tag(v_fromPath_5589_) == 0)
{
lean_object* v_value_5616_; lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5623_; 
v_value_5616_ = lean_ctor_get(v_fromPath_5589_, 0);
v_isSharedCheck_5623_ = !lean_is_exclusive(v_fromPath_5589_);
if (v_isSharedCheck_5623_ == 0)
{
v___x_5618_ = v_fromPath_5589_;
v_isShared_5619_ = v_isSharedCheck_5623_;
goto v_resetjp_5617_;
}
else
{
lean_inc(v_value_5616_);
lean_dec(v_fromPath_5589_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5623_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
lean_object* v___x_5621_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set_tag(v___x_5618_, 4);
v___x_5621_ = v___x_5618_;
goto v_reusejp_5620_;
}
else
{
lean_object* v_reuseFailAlloc_5622_; 
v_reuseFailAlloc_5622_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5622_, 0, v_value_5616_);
v___x_5621_ = v_reuseFailAlloc_5622_;
goto v_reusejp_5620_;
}
v_reusejp_5620_:
{
v___y_5604_ = v___x_5621_;
goto v___jp_5603_;
}
}
}
else
{
lean_object* v_value_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; 
v_value_5624_ = lean_ctor_get(v_fromPath_5589_, 0);
lean_inc(v_value_5624_);
lean_dec_ref_known(v_fromPath_5589_, 1);
v___x_5625_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5626_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5626_, 0, v_value_5624_);
lean_ctor_set(v___x_5626_, 1, v___x_5625_);
v___y_5604_ = v___x_5626_;
goto v___jp_5603_;
}
v___jp_5595_:
{
lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; 
v___x_5598_ = lean_mk_empty_array_with_capacity(v___x_5593_);
v___x_5599_ = lean_array_push(v___x_5598_, v___y_5596_);
v___x_5600_ = lean_array_push(v___x_5599_, v___y_5597_);
v___x_5601_ = l_Lasm_JS_Web_Support_args(v___x_5600_);
v___x_5602_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5594_, v___x_5601_, v___x_5592_);
return v___x_5602_;
}
v___jp_5603_:
{
if (lean_obj_tag(v_toPath_5590_) == 0)
{
lean_object* v_value_5605_; lean_object* v___x_5607_; uint8_t v_isShared_5608_; uint8_t v_isSharedCheck_5612_; 
v_value_5605_ = lean_ctor_get(v_toPath_5590_, 0);
v_isSharedCheck_5612_ = !lean_is_exclusive(v_toPath_5590_);
if (v_isSharedCheck_5612_ == 0)
{
v___x_5607_ = v_toPath_5590_;
v_isShared_5608_ = v_isSharedCheck_5612_;
goto v_resetjp_5606_;
}
else
{
lean_inc(v_value_5605_);
lean_dec(v_toPath_5590_);
v___x_5607_ = lean_box(0);
v_isShared_5608_ = v_isSharedCheck_5612_;
goto v_resetjp_5606_;
}
v_resetjp_5606_:
{
lean_object* v___x_5610_; 
if (v_isShared_5608_ == 0)
{
lean_ctor_set_tag(v___x_5607_, 4);
v___x_5610_ = v___x_5607_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5611_; 
v_reuseFailAlloc_5611_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5611_, 0, v_value_5605_);
v___x_5610_ = v_reuseFailAlloc_5611_;
goto v_reusejp_5609_;
}
v_reusejp_5609_:
{
v___y_5596_ = v___y_5604_;
v___y_5597_ = v___x_5610_;
goto v___jp_5595_;
}
}
}
else
{
lean_object* v_value_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; 
v_value_5613_ = lean_ctor_get(v_toPath_5590_, 0);
lean_inc(v_value_5613_);
lean_dec_ref_known(v_toPath_5590_, 1);
v___x_5614_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5615_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5615_, 0, v_value_5613_);
lean_ctor_set(v___x_5615_, 1, v___x_5614_);
v___y_5596_ = v___y_5604_;
v___y_5597_ = v___x_5615_;
goto v___jp_5595_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync___boxed(lean_object* v_fromPath_5627_, lean_object* v_toPath_5628_, lean_object* v_a_5629_){
_start:
{
lean_object* v_res_5630_; 
v_res_5630_ = l_Lasm_JS_Deno_copyFileSync(v_fromPath_5627_, v_toPath_5628_);
return v_res_5630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink(lean_object* v_path_5639_){
_start:
{
lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___y_5644_; 
v___x_5641_ = lean_unsigned_to_nat(1u);
v___x_5642_ = ((lean_object*)(l_Lasm_JS_Deno_readLink___closed__2));
if (lean_obj_tag(v_path_5639_) == 0)
{
lean_object* v_value_5649_; lean_object* v___x_5651_; uint8_t v_isShared_5652_; uint8_t v_isSharedCheck_5656_; 
v_value_5649_ = lean_ctor_get(v_path_5639_, 0);
v_isSharedCheck_5656_ = !lean_is_exclusive(v_path_5639_);
if (v_isSharedCheck_5656_ == 0)
{
v___x_5651_ = v_path_5639_;
v_isShared_5652_ = v_isSharedCheck_5656_;
goto v_resetjp_5650_;
}
else
{
lean_inc(v_value_5649_);
lean_dec(v_path_5639_);
v___x_5651_ = lean_box(0);
v_isShared_5652_ = v_isSharedCheck_5656_;
goto v_resetjp_5650_;
}
v_resetjp_5650_:
{
lean_object* v___x_5654_; 
if (v_isShared_5652_ == 0)
{
lean_ctor_set_tag(v___x_5651_, 4);
v___x_5654_ = v___x_5651_;
goto v_reusejp_5653_;
}
else
{
lean_object* v_reuseFailAlloc_5655_; 
v_reuseFailAlloc_5655_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5655_, 0, v_value_5649_);
v___x_5654_ = v_reuseFailAlloc_5655_;
goto v_reusejp_5653_;
}
v_reusejp_5653_:
{
v___y_5644_ = v___x_5654_;
goto v___jp_5643_;
}
}
}
else
{
lean_object* v_value_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; 
v_value_5657_ = lean_ctor_get(v_path_5639_, 0);
lean_inc(v_value_5657_);
lean_dec_ref_known(v_path_5639_, 1);
v___x_5658_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5659_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5659_, 0, v_value_5657_);
lean_ctor_set(v___x_5659_, 1, v___x_5658_);
v___y_5644_ = v___x_5659_;
goto v___jp_5643_;
}
v___jp_5643_:
{
lean_object* v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; 
v___x_5645_ = lean_mk_empty_array_with_capacity(v___x_5641_);
v___x_5646_ = lean_array_push(v___x_5645_, v___y_5644_);
v___x_5647_ = l_Lasm_JS_Web_Support_args(v___x_5646_);
v___x_5648_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5642_, v___x_5647_);
return v___x_5648_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink___boxed(lean_object* v_path_5660_, lean_object* v_a_5661_){
_start:
{
lean_object* v_res_5662_; 
v_res_5662_ = l_Lasm_JS_Deno_readLink(v_path_5660_);
return v_res_5662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync(lean_object* v_path_5671_){
_start:
{
uint8_t v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___y_5677_; 
v___x_5673_ = 0;
v___x_5674_ = lean_unsigned_to_nat(1u);
v___x_5675_ = ((lean_object*)(l_Lasm_JS_Deno_readLinkSync___closed__2));
if (lean_obj_tag(v_path_5671_) == 0)
{
lean_object* v_value_5682_; lean_object* v___x_5684_; uint8_t v_isShared_5685_; uint8_t v_isSharedCheck_5689_; 
v_value_5682_ = lean_ctor_get(v_path_5671_, 0);
v_isSharedCheck_5689_ = !lean_is_exclusive(v_path_5671_);
if (v_isSharedCheck_5689_ == 0)
{
v___x_5684_ = v_path_5671_;
v_isShared_5685_ = v_isSharedCheck_5689_;
goto v_resetjp_5683_;
}
else
{
lean_inc(v_value_5682_);
lean_dec(v_path_5671_);
v___x_5684_ = lean_box(0);
v_isShared_5685_ = v_isSharedCheck_5689_;
goto v_resetjp_5683_;
}
v_resetjp_5683_:
{
lean_object* v___x_5687_; 
if (v_isShared_5685_ == 0)
{
lean_ctor_set_tag(v___x_5684_, 4);
v___x_5687_ = v___x_5684_;
goto v_reusejp_5686_;
}
else
{
lean_object* v_reuseFailAlloc_5688_; 
v_reuseFailAlloc_5688_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5688_, 0, v_value_5682_);
v___x_5687_ = v_reuseFailAlloc_5688_;
goto v_reusejp_5686_;
}
v_reusejp_5686_:
{
v___y_5677_ = v___x_5687_;
goto v___jp_5676_;
}
}
}
else
{
lean_object* v_value_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; 
v_value_5690_ = lean_ctor_get(v_path_5671_, 0);
lean_inc(v_value_5690_);
lean_dec_ref_known(v_path_5671_, 1);
v___x_5691_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5692_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5692_, 0, v_value_5690_);
lean_ctor_set(v___x_5692_, 1, v___x_5691_);
v___y_5677_ = v___x_5692_;
goto v___jp_5676_;
}
v___jp_5676_:
{
lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; 
v___x_5678_ = lean_mk_empty_array_with_capacity(v___x_5674_);
v___x_5679_ = lean_array_push(v___x_5678_, v___y_5677_);
v___x_5680_ = l_Lasm_JS_Web_Support_args(v___x_5679_);
v___x_5681_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5675_, v___x_5680_, v___x_5673_);
return v___x_5681_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync___boxed(lean_object* v_path_5693_, lean_object* v_a_5694_){
_start:
{
lean_object* v_res_5695_; 
v_res_5695_ = l_Lasm_JS_Deno_readLinkSync(v_path_5693_);
return v_res_5695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(lean_object* v_b_5696_, lean_object* v_args_5697_){
_start:
{
uint8_t v_construct_5699_; lean_object* v___x_5700_; uint32_t v___x_5701_; uint64_t v___x_5702_; uint64_t v___y_5704_; 
v_construct_5699_ = lean_ctor_get_uint8(v_b_5696_, sizeof(void*)*4);
v___x_5700_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5696_);
v___x_5701_ = 214;
v___x_5702_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5699_ == 0)
{
uint64_t v___x_5712_; 
v___x_5712_ = 0ULL;
v___y_5704_ = v___x_5712_;
goto v___jp_5703_;
}
else
{
uint64_t v___x_5713_; 
v___x_5713_ = 4ULL;
v___y_5704_ = v___x_5713_;
goto v___jp_5703_;
}
v___jp_5703_:
{
uint64_t v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; 
v___x_5705_ = lean_uint64_lor(v___x_5702_, v___y_5704_);
v___x_5706_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5696_, v_args_5697_);
v___x_5707_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5708_ = lean_string_append(v___x_5707_, v___x_5700_);
v___x_5709_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5710_ = lean_string_append(v___x_5708_, v___x_5709_);
v___x_5711_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v___x_5700_, v___x_5701_, v___x_5705_, v___x_5706_, v___x_5710_);
return v___x_5711_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0___boxed(lean_object* v_b_5714_, lean_object* v_args_5715_, lean_object* v_a_5716_){
_start:
{
lean_object* v_res_5717_; 
v_res_5717_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v_b_5714_, v_args_5715_);
lean_dec_ref(v_b_5714_);
return v_res_5717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat(lean_object* v_path_5726_){
_start:
{
lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___y_5731_; 
v___x_5728_ = lean_unsigned_to_nat(1u);
v___x_5729_ = ((lean_object*)(l_Lasm_JS_Deno_lstat___closed__2));
if (lean_obj_tag(v_path_5726_) == 0)
{
lean_object* v_value_5736_; lean_object* v___x_5738_; uint8_t v_isShared_5739_; uint8_t v_isSharedCheck_5743_; 
v_value_5736_ = lean_ctor_get(v_path_5726_, 0);
v_isSharedCheck_5743_ = !lean_is_exclusive(v_path_5726_);
if (v_isSharedCheck_5743_ == 0)
{
v___x_5738_ = v_path_5726_;
v_isShared_5739_ = v_isSharedCheck_5743_;
goto v_resetjp_5737_;
}
else
{
lean_inc(v_value_5736_);
lean_dec(v_path_5726_);
v___x_5738_ = lean_box(0);
v_isShared_5739_ = v_isSharedCheck_5743_;
goto v_resetjp_5737_;
}
v_resetjp_5737_:
{
lean_object* v___x_5741_; 
if (v_isShared_5739_ == 0)
{
lean_ctor_set_tag(v___x_5738_, 4);
v___x_5741_ = v___x_5738_;
goto v_reusejp_5740_;
}
else
{
lean_object* v_reuseFailAlloc_5742_; 
v_reuseFailAlloc_5742_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5742_, 0, v_value_5736_);
v___x_5741_ = v_reuseFailAlloc_5742_;
goto v_reusejp_5740_;
}
v_reusejp_5740_:
{
v___y_5731_ = v___x_5741_;
goto v___jp_5730_;
}
}
}
else
{
lean_object* v_value_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; 
v_value_5744_ = lean_ctor_get(v_path_5726_, 0);
lean_inc(v_value_5744_);
lean_dec_ref_known(v_path_5726_, 1);
v___x_5745_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5746_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5746_, 0, v_value_5744_);
lean_ctor_set(v___x_5746_, 1, v___x_5745_);
v___y_5731_ = v___x_5746_;
goto v___jp_5730_;
}
v___jp_5730_:
{
lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; 
v___x_5732_ = lean_mk_empty_array_with_capacity(v___x_5728_);
v___x_5733_ = lean_array_push(v___x_5732_, v___y_5731_);
v___x_5734_ = l_Lasm_JS_Web_Support_args(v___x_5733_);
v___x_5735_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5729_, v___x_5734_);
return v___x_5735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat___boxed(lean_object* v_path_5747_, lean_object* v_a_5748_){
_start:
{
lean_object* v_res_5749_; 
v_res_5749_ = l_Lasm_JS_Deno_lstat(v_path_5747_);
return v_res_5749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(lean_object* v_b_5750_, lean_object* v_args_5751_, uint8_t v_await_5752_){
_start:
{
uint64_t v___y_5755_; uint64_t v___y_5756_; uint64_t v___x_5799_; uint64_t v___y_5801_; 
v___x_5799_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_5752_ == 0)
{
uint64_t v___x_5806_; 
v___x_5806_ = 0ULL;
v___y_5801_ = v___x_5806_;
goto v___jp_5800_;
}
else
{
uint64_t v___x_5807_; 
v___x_5807_ = 2ULL;
v___y_5801_ = v___x_5807_;
goto v___jp_5800_;
}
v___jp_5754_:
{
uint64_t v_flags_5757_; uint32_t v___x_5758_; lean_object* v___x_5759_; uint32_t v___x_5760_; lean_object* v___x_5761_; 
v_flags_5757_ = lean_uint64_lor(v___y_5755_, v___y_5756_);
v___x_5758_ = 214;
v___x_5759_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5750_, v_args_5751_);
v___x_5760_ = 0;
v___x_5761_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5758_, v_flags_5757_, v___x_5759_, v___x_5760_);
lean_dec(v___x_5759_);
if (lean_obj_tag(v___x_5761_) == 0)
{
if (lean_obj_tag(v___x_5761_) == 0)
{
lean_object* v_a_5762_; lean_object* v___x_5763_; 
v_a_5762_ = lean_ctor_get(v___x_5761_, 0);
lean_inc(v_a_5762_);
lean_dec_ref_known(v___x_5761_, 1);
v___x_5763_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5762_);
lean_dec(v_a_5762_);
if (lean_obj_tag(v___x_5763_) == 0)
{
lean_object* v_a_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; 
v_a_5764_ = lean_ctor_get(v___x_5763_, 0);
lean_inc(v_a_5764_);
lean_dec_ref_known(v___x_5763_, 1);
v___x_5765_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5750_);
v___x_5766_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v___x_5765_, v_a_5764_);
lean_dec_ref(v___x_5765_);
return v___x_5766_;
}
else
{
lean_object* v_a_5767_; lean_object* v___x_5769_; uint8_t v_isShared_5770_; uint8_t v_isSharedCheck_5774_; 
v_a_5767_ = lean_ctor_get(v___x_5763_, 0);
v_isSharedCheck_5774_ = !lean_is_exclusive(v___x_5763_);
if (v_isSharedCheck_5774_ == 0)
{
v___x_5769_ = v___x_5763_;
v_isShared_5770_ = v_isSharedCheck_5774_;
goto v_resetjp_5768_;
}
else
{
lean_inc(v_a_5767_);
lean_dec(v___x_5763_);
v___x_5769_ = lean_box(0);
v_isShared_5770_ = v_isSharedCheck_5774_;
goto v_resetjp_5768_;
}
v_resetjp_5768_:
{
lean_object* v___x_5772_; 
if (v_isShared_5770_ == 0)
{
v___x_5772_ = v___x_5769_;
goto v_reusejp_5771_;
}
else
{
lean_object* v_reuseFailAlloc_5773_; 
v_reuseFailAlloc_5773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5773_, 0, v_a_5767_);
v___x_5772_ = v_reuseFailAlloc_5773_;
goto v_reusejp_5771_;
}
v_reusejp_5771_:
{
return v___x_5772_;
}
}
}
}
else
{
lean_object* v_a_5775_; lean_object* v___x_5777_; uint8_t v_isShared_5778_; uint8_t v_isSharedCheck_5782_; 
v_a_5775_ = lean_ctor_get(v___x_5761_, 0);
v_isSharedCheck_5782_ = !lean_is_exclusive(v___x_5761_);
if (v_isSharedCheck_5782_ == 0)
{
v___x_5777_ = v___x_5761_;
v_isShared_5778_ = v_isSharedCheck_5782_;
goto v_resetjp_5776_;
}
else
{
lean_inc(v_a_5775_);
lean_dec(v___x_5761_);
v___x_5777_ = lean_box(0);
v_isShared_5778_ = v_isSharedCheck_5782_;
goto v_resetjp_5776_;
}
v_resetjp_5776_:
{
lean_object* v___x_5780_; 
if (v_isShared_5778_ == 0)
{
lean_ctor_set_tag(v___x_5777_, 1);
v___x_5780_ = v___x_5777_;
goto v_reusejp_5779_;
}
else
{
lean_object* v_reuseFailAlloc_5781_; 
v_reuseFailAlloc_5781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5781_, 0, v_a_5775_);
v___x_5780_ = v_reuseFailAlloc_5781_;
goto v_reusejp_5779_;
}
v_reusejp_5779_:
{
return v___x_5780_;
}
}
}
}
else
{
lean_object* v_a_5783_; lean_object* v___x_5785_; uint8_t v_isShared_5786_; uint8_t v_isSharedCheck_5798_; 
v_a_5783_ = lean_ctor_get(v___x_5761_, 0);
v_isSharedCheck_5798_ = !lean_is_exclusive(v___x_5761_);
if (v_isSharedCheck_5798_ == 0)
{
v___x_5785_ = v___x_5761_;
v_isShared_5786_ = v_isSharedCheck_5798_;
goto v_resetjp_5784_;
}
else
{
lean_inc(v_a_5783_);
lean_dec(v___x_5761_);
v___x_5785_ = lean_box(0);
v_isShared_5786_ = v_isSharedCheck_5798_;
goto v_resetjp_5784_;
}
v_resetjp_5784_:
{
lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5796_; 
v___x_5787_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5788_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5750_);
v___x_5789_ = lean_string_append(v___x_5787_, v___x_5788_);
lean_dec_ref(v___x_5788_);
v___x_5790_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5791_ = lean_string_append(v___x_5789_, v___x_5790_);
v___x_5792_ = lean_io_error_to_string(v_a_5783_);
v___x_5793_ = lean_string_append(v___x_5791_, v___x_5792_);
lean_dec_ref(v___x_5792_);
v___x_5794_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5794_, 0, v___x_5793_);
if (v_isShared_5786_ == 0)
{
lean_ctor_set(v___x_5785_, 0, v___x_5794_);
v___x_5796_ = v___x_5785_;
goto v_reusejp_5795_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v___x_5794_);
v___x_5796_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5795_;
}
v_reusejp_5795_:
{
return v___x_5796_;
}
}
}
}
v___jp_5800_:
{
uint8_t v_construct_5802_; uint64_t v___x_5803_; 
v_construct_5802_ = lean_ctor_get_uint8(v_b_5750_, sizeof(void*)*4);
v___x_5803_ = lean_uint64_lor(v___x_5799_, v___y_5801_);
if (v_construct_5802_ == 0)
{
uint64_t v___x_5804_; 
v___x_5804_ = 0ULL;
v___y_5755_ = v___x_5803_;
v___y_5756_ = v___x_5804_;
goto v___jp_5754_;
}
else
{
uint64_t v___x_5805_; 
v___x_5805_ = 4ULL;
v___y_5755_ = v___x_5803_;
v___y_5756_ = v___x_5805_;
goto v___jp_5754_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0___boxed(lean_object* v_b_5808_, lean_object* v_args_5809_, lean_object* v_await_5810_, lean_object* v_a_5811_){
_start:
{
uint8_t v_await_boxed_5812_; lean_object* v_res_5813_; 
v_await_boxed_5812_ = lean_unbox(v_await_5810_);
v_res_5813_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v_b_5808_, v_args_5809_, v_await_boxed_5812_);
lean_dec_ref(v_b_5808_);
return v_res_5813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync(lean_object* v_path_5822_){
_start:
{
uint8_t v___x_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___y_5828_; 
v___x_5824_ = 0;
v___x_5825_ = lean_unsigned_to_nat(1u);
v___x_5826_ = ((lean_object*)(l_Lasm_JS_Deno_lstatSync___closed__2));
if (lean_obj_tag(v_path_5822_) == 0)
{
lean_object* v_value_5833_; lean_object* v___x_5835_; uint8_t v_isShared_5836_; uint8_t v_isSharedCheck_5840_; 
v_value_5833_ = lean_ctor_get(v_path_5822_, 0);
v_isSharedCheck_5840_ = !lean_is_exclusive(v_path_5822_);
if (v_isSharedCheck_5840_ == 0)
{
v___x_5835_ = v_path_5822_;
v_isShared_5836_ = v_isSharedCheck_5840_;
goto v_resetjp_5834_;
}
else
{
lean_inc(v_value_5833_);
lean_dec(v_path_5822_);
v___x_5835_ = lean_box(0);
v_isShared_5836_ = v_isSharedCheck_5840_;
goto v_resetjp_5834_;
}
v_resetjp_5834_:
{
lean_object* v___x_5838_; 
if (v_isShared_5836_ == 0)
{
lean_ctor_set_tag(v___x_5835_, 4);
v___x_5838_ = v___x_5835_;
goto v_reusejp_5837_;
}
else
{
lean_object* v_reuseFailAlloc_5839_; 
v_reuseFailAlloc_5839_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5839_, 0, v_value_5833_);
v___x_5838_ = v_reuseFailAlloc_5839_;
goto v_reusejp_5837_;
}
v_reusejp_5837_:
{
v___y_5828_ = v___x_5838_;
goto v___jp_5827_;
}
}
}
else
{
lean_object* v_value_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; 
v_value_5841_ = lean_ctor_get(v_path_5822_, 0);
lean_inc(v_value_5841_);
lean_dec_ref_known(v_path_5822_, 1);
v___x_5842_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5843_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5843_, 0, v_value_5841_);
lean_ctor_set(v___x_5843_, 1, v___x_5842_);
v___y_5828_ = v___x_5843_;
goto v___jp_5827_;
}
v___jp_5827_:
{
lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; 
v___x_5829_ = lean_mk_empty_array_with_capacity(v___x_5825_);
v___x_5830_ = lean_array_push(v___x_5829_, v___y_5828_);
v___x_5831_ = l_Lasm_JS_Web_Support_args(v___x_5830_);
v___x_5832_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5826_, v___x_5831_, v___x_5824_);
return v___x_5832_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync___boxed(lean_object* v_path_5844_, lean_object* v_a_5845_){
_start:
{
lean_object* v_res_5846_; 
v_res_5846_ = l_Lasm_JS_Deno_lstatSync(v_path_5844_);
return v_res_5846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat(lean_object* v_path_5855_){
_start:
{
lean_object* v___x_5857_; lean_object* v___x_5858_; lean_object* v___y_5860_; 
v___x_5857_ = lean_unsigned_to_nat(1u);
v___x_5858_ = ((lean_object*)(l_Lasm_JS_Deno_stat___closed__2));
if (lean_obj_tag(v_path_5855_) == 0)
{
lean_object* v_value_5865_; lean_object* v___x_5867_; uint8_t v_isShared_5868_; uint8_t v_isSharedCheck_5872_; 
v_value_5865_ = lean_ctor_get(v_path_5855_, 0);
v_isSharedCheck_5872_ = !lean_is_exclusive(v_path_5855_);
if (v_isSharedCheck_5872_ == 0)
{
v___x_5867_ = v_path_5855_;
v_isShared_5868_ = v_isSharedCheck_5872_;
goto v_resetjp_5866_;
}
else
{
lean_inc(v_value_5865_);
lean_dec(v_path_5855_);
v___x_5867_ = lean_box(0);
v_isShared_5868_ = v_isSharedCheck_5872_;
goto v_resetjp_5866_;
}
v_resetjp_5866_:
{
lean_object* v___x_5870_; 
if (v_isShared_5868_ == 0)
{
lean_ctor_set_tag(v___x_5867_, 4);
v___x_5870_ = v___x_5867_;
goto v_reusejp_5869_;
}
else
{
lean_object* v_reuseFailAlloc_5871_; 
v_reuseFailAlloc_5871_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5871_, 0, v_value_5865_);
v___x_5870_ = v_reuseFailAlloc_5871_;
goto v_reusejp_5869_;
}
v_reusejp_5869_:
{
v___y_5860_ = v___x_5870_;
goto v___jp_5859_;
}
}
}
else
{
lean_object* v_value_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; 
v_value_5873_ = lean_ctor_get(v_path_5855_, 0);
lean_inc(v_value_5873_);
lean_dec_ref_known(v_path_5855_, 1);
v___x_5874_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5875_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5875_, 0, v_value_5873_);
lean_ctor_set(v___x_5875_, 1, v___x_5874_);
v___y_5860_ = v___x_5875_;
goto v___jp_5859_;
}
v___jp_5859_:
{
lean_object* v___x_5861_; lean_object* v___x_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; 
v___x_5861_ = lean_mk_empty_array_with_capacity(v___x_5857_);
v___x_5862_ = lean_array_push(v___x_5861_, v___y_5860_);
v___x_5863_ = l_Lasm_JS_Web_Support_args(v___x_5862_);
v___x_5864_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5858_, v___x_5863_);
return v___x_5864_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat___boxed(lean_object* v_path_5876_, lean_object* v_a_5877_){
_start:
{
lean_object* v_res_5878_; 
v_res_5878_ = l_Lasm_JS_Deno_stat(v_path_5876_);
return v_res_5878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync(lean_object* v_path_5887_){
_start:
{
uint8_t v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___y_5893_; 
v___x_5889_ = 0;
v___x_5890_ = lean_unsigned_to_nat(1u);
v___x_5891_ = ((lean_object*)(l_Lasm_JS_Deno_statSync___closed__2));
if (lean_obj_tag(v_path_5887_) == 0)
{
lean_object* v_value_5898_; lean_object* v___x_5900_; uint8_t v_isShared_5901_; uint8_t v_isSharedCheck_5905_; 
v_value_5898_ = lean_ctor_get(v_path_5887_, 0);
v_isSharedCheck_5905_ = !lean_is_exclusive(v_path_5887_);
if (v_isSharedCheck_5905_ == 0)
{
v___x_5900_ = v_path_5887_;
v_isShared_5901_ = v_isSharedCheck_5905_;
goto v_resetjp_5899_;
}
else
{
lean_inc(v_value_5898_);
lean_dec(v_path_5887_);
v___x_5900_ = lean_box(0);
v_isShared_5901_ = v_isSharedCheck_5905_;
goto v_resetjp_5899_;
}
v_resetjp_5899_:
{
lean_object* v___x_5903_; 
if (v_isShared_5901_ == 0)
{
lean_ctor_set_tag(v___x_5900_, 4);
v___x_5903_ = v___x_5900_;
goto v_reusejp_5902_;
}
else
{
lean_object* v_reuseFailAlloc_5904_; 
v_reuseFailAlloc_5904_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5904_, 0, v_value_5898_);
v___x_5903_ = v_reuseFailAlloc_5904_;
goto v_reusejp_5902_;
}
v_reusejp_5902_:
{
v___y_5893_ = v___x_5903_;
goto v___jp_5892_;
}
}
}
else
{
lean_object* v_value_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; 
v_value_5906_ = lean_ctor_get(v_path_5887_, 0);
lean_inc(v_value_5906_);
lean_dec_ref_known(v_path_5887_, 1);
v___x_5907_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5908_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5908_, 0, v_value_5906_);
lean_ctor_set(v___x_5908_, 1, v___x_5907_);
v___y_5893_ = v___x_5908_;
goto v___jp_5892_;
}
v___jp_5892_:
{
lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; 
v___x_5894_ = lean_mk_empty_array_with_capacity(v___x_5890_);
v___x_5895_ = lean_array_push(v___x_5894_, v___y_5893_);
v___x_5896_ = l_Lasm_JS_Web_Support_args(v___x_5895_);
v___x_5897_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5891_, v___x_5896_, v___x_5889_);
return v___x_5897_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync___boxed(lean_object* v_path_5909_, lean_object* v_a_5910_){
_start:
{
lean_object* v_res_5911_; 
v_res_5911_ = l_Lasm_JS_Deno_statSync(v_path_5909_);
return v_res_5911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(lean_object* v_x_5912_){
_start:
{
if (lean_obj_tag(v_x_5912_) == 0)
{
lean_object* v___x_5913_; 
v___x_5913_ = lean_box(0);
return v___x_5913_;
}
else
{
lean_object* v_val_5914_; lean_object* v_append_5915_; lean_object* v_create_5916_; lean_object* v_createNew_5917_; lean_object* v_mode_5918_; lean_object* v_signal_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; 
v_val_5914_ = lean_ctor_get(v_x_5912_, 0);
v_append_5915_ = lean_ctor_get(v_val_5914_, 0);
v_create_5916_ = lean_ctor_get(v_val_5914_, 1);
v_createNew_5917_ = lean_ctor_get(v_val_5914_, 2);
v_mode_5918_ = lean_ctor_get(v_val_5914_, 3);
v_signal_5919_ = lean_ctor_get(v_val_5914_, 4);
v___x_5920_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_5921_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_5915_);
v___x_5922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5922_, 0, v___x_5920_);
lean_ctor_set(v___x_5922_, 1, v___x_5921_);
v___x_5923_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_5924_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_5916_);
v___x_5925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5925_, 0, v___x_5923_);
lean_ctor_set(v___x_5925_, 1, v___x_5924_);
v___x_5926_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_5927_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_5917_);
v___x_5928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5928_, 0, v___x_5926_);
lean_ctor_set(v___x_5928_, 1, v___x_5927_);
v___x_5929_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_5930_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_5918_);
v___x_5931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5931_, 0, v___x_5929_);
lean_ctor_set(v___x_5931_, 1, v___x_5930_);
v___x_5932_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5933_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_5919_);
v___x_5934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5934_, 0, v___x_5932_);
lean_ctor_set(v___x_5934_, 1, v___x_5933_);
v___x_5935_ = lean_unsigned_to_nat(5u);
v___x_5936_ = lean_mk_empty_array_with_capacity(v___x_5935_);
v___x_5937_ = lean_array_push(v___x_5936_, v___x_5922_);
v___x_5938_ = lean_array_push(v___x_5937_, v___x_5925_);
v___x_5939_ = lean_array_push(v___x_5938_, v___x_5928_);
v___x_5940_ = lean_array_push(v___x_5939_, v___x_5931_);
v___x_5941_ = lean_array_push(v___x_5940_, v___x_5934_);
v___x_5942_ = l_Lasm_JS_Web_Support_fields(v___x_5941_);
lean_dec_ref(v___x_5941_);
return v___x_5942_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0___boxed(lean_object* v_x_5943_){
_start:
{
lean_object* v_res_5944_; 
v_res_5944_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_x_5943_);
lean_dec(v_x_5943_);
return v_res_5944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile(lean_object* v_path_5953_, lean_object* v_data_5954_, lean_object* v_options_5955_){
_start:
{
lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___y_5960_; lean_object* v___y_5961_; lean_object* v___y_5970_; 
v___x_5957_ = lean_unsigned_to_nat(3u);
v___x_5958_ = ((lean_object*)(l_Lasm_JS_Deno_writeFile___closed__2));
if (lean_obj_tag(v_path_5953_) == 0)
{
lean_object* v_value_5982_; lean_object* v___x_5984_; uint8_t v_isShared_5985_; uint8_t v_isSharedCheck_5989_; 
v_value_5982_ = lean_ctor_get(v_path_5953_, 0);
v_isSharedCheck_5989_ = !lean_is_exclusive(v_path_5953_);
if (v_isSharedCheck_5989_ == 0)
{
v___x_5984_ = v_path_5953_;
v_isShared_5985_ = v_isSharedCheck_5989_;
goto v_resetjp_5983_;
}
else
{
lean_inc(v_value_5982_);
lean_dec(v_path_5953_);
v___x_5984_ = lean_box(0);
v_isShared_5985_ = v_isSharedCheck_5989_;
goto v_resetjp_5983_;
}
v_resetjp_5983_:
{
lean_object* v___x_5987_; 
if (v_isShared_5985_ == 0)
{
lean_ctor_set_tag(v___x_5984_, 4);
v___x_5987_ = v___x_5984_;
goto v_reusejp_5986_;
}
else
{
lean_object* v_reuseFailAlloc_5988_; 
v_reuseFailAlloc_5988_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5988_, 0, v_value_5982_);
v___x_5987_ = v_reuseFailAlloc_5988_;
goto v_reusejp_5986_;
}
v_reusejp_5986_:
{
v___y_5970_ = v___x_5987_;
goto v___jp_5969_;
}
}
}
else
{
lean_object* v_value_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; 
v_value_5990_ = lean_ctor_get(v_path_5953_, 0);
lean_inc(v_value_5990_);
lean_dec_ref_known(v_path_5953_, 1);
v___x_5991_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5992_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5992_, 0, v_value_5990_);
lean_ctor_set(v___x_5992_, 1, v___x_5991_);
v___y_5970_ = v___x_5992_;
goto v___jp_5969_;
}
v___jp_5959_:
{
lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; 
v___x_5962_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_5955_);
v___x_5963_ = lean_mk_empty_array_with_capacity(v___x_5957_);
v___x_5964_ = lean_array_push(v___x_5963_, v___y_5960_);
v___x_5965_ = lean_array_push(v___x_5964_, v___y_5961_);
v___x_5966_ = lean_array_push(v___x_5965_, v___x_5962_);
v___x_5967_ = l_Lasm_JS_Web_Support_args(v___x_5966_);
v___x_5968_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5958_, v___x_5967_);
return v___x_5968_;
}
v___jp_5969_:
{
if (lean_obj_tag(v_data_5954_) == 0)
{
lean_object* v_value_5971_; lean_object* v___x_5973_; uint8_t v_isShared_5974_; uint8_t v_isSharedCheck_5978_; 
v_value_5971_ = lean_ctor_get(v_data_5954_, 0);
v_isSharedCheck_5978_ = !lean_is_exclusive(v_data_5954_);
if (v_isSharedCheck_5978_ == 0)
{
v___x_5973_ = v_data_5954_;
v_isShared_5974_ = v_isSharedCheck_5978_;
goto v_resetjp_5972_;
}
else
{
lean_inc(v_value_5971_);
lean_dec(v_data_5954_);
v___x_5973_ = lean_box(0);
v_isShared_5974_ = v_isSharedCheck_5978_;
goto v_resetjp_5972_;
}
v_resetjp_5972_:
{
lean_object* v___x_5976_; 
if (v_isShared_5974_ == 0)
{
lean_ctor_set_tag(v___x_5973_, 6);
v___x_5976_ = v___x_5973_;
goto v_reusejp_5975_;
}
else
{
lean_object* v_reuseFailAlloc_5977_; 
v_reuseFailAlloc_5977_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5977_, 0, v_value_5971_);
v___x_5976_ = v_reuseFailAlloc_5977_;
goto v_reusejp_5975_;
}
v_reusejp_5975_:
{
v___y_5960_ = v___y_5970_;
v___y_5961_ = v___x_5976_;
goto v___jp_5959_;
}
}
}
else
{
lean_object* v_value_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; 
v_value_5979_ = lean_ctor_get(v_data_5954_, 0);
lean_inc(v_value_5979_);
lean_dec_ref_known(v_data_5954_, 1);
v___x_5980_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5981_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5981_, 0, v_value_5979_);
lean_ctor_set(v___x_5981_, 1, v___x_5980_);
v___y_5960_ = v___y_5970_;
v___y_5961_ = v___x_5981_;
goto v___jp_5959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile___boxed(lean_object* v_path_5993_, lean_object* v_data_5994_, lean_object* v_options_5995_, lean_object* v_a_5996_){
_start:
{
lean_object* v_res_5997_; 
v_res_5997_ = l_Lasm_JS_Deno_writeFile(v_path_5993_, v_data_5994_, v_options_5995_);
lean_dec(v_options_5995_);
return v_res_5997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync(lean_object* v_path_6006_, lean_object* v_data_6007_, lean_object* v_options_6008_){
_start:
{
uint8_t v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___y_6014_; 
v___x_6010_ = 0;
v___x_6011_ = lean_unsigned_to_nat(3u);
v___x_6012_ = ((lean_object*)(l_Lasm_JS_Deno_writeFileSync___closed__2));
if (lean_obj_tag(v_path_6006_) == 0)
{
lean_object* v_value_6023_; lean_object* v___x_6025_; uint8_t v_isShared_6026_; uint8_t v_isSharedCheck_6030_; 
v_value_6023_ = lean_ctor_get(v_path_6006_, 0);
v_isSharedCheck_6030_ = !lean_is_exclusive(v_path_6006_);
if (v_isSharedCheck_6030_ == 0)
{
v___x_6025_ = v_path_6006_;
v_isShared_6026_ = v_isSharedCheck_6030_;
goto v_resetjp_6024_;
}
else
{
lean_inc(v_value_6023_);
lean_dec(v_path_6006_);
v___x_6025_ = lean_box(0);
v_isShared_6026_ = v_isSharedCheck_6030_;
goto v_resetjp_6024_;
}
v_resetjp_6024_:
{
lean_object* v___x_6028_; 
if (v_isShared_6026_ == 0)
{
lean_ctor_set_tag(v___x_6025_, 4);
v___x_6028_ = v___x_6025_;
goto v_reusejp_6027_;
}
else
{
lean_object* v_reuseFailAlloc_6029_; 
v_reuseFailAlloc_6029_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6029_, 0, v_value_6023_);
v___x_6028_ = v_reuseFailAlloc_6029_;
goto v_reusejp_6027_;
}
v_reusejp_6027_:
{
v___y_6014_ = v___x_6028_;
goto v___jp_6013_;
}
}
}
else
{
lean_object* v_value_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; 
v_value_6031_ = lean_ctor_get(v_path_6006_, 0);
lean_inc(v_value_6031_);
lean_dec_ref_known(v_path_6006_, 1);
v___x_6032_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6033_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6033_, 0, v_value_6031_);
lean_ctor_set(v___x_6033_, 1, v___x_6032_);
v___y_6014_ = v___x_6033_;
goto v___jp_6013_;
}
v___jp_6013_:
{
lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; 
v___x_6015_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6015_, 0, v_data_6007_);
v___x_6016_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6008_);
v___x_6017_ = lean_mk_empty_array_with_capacity(v___x_6011_);
v___x_6018_ = lean_array_push(v___x_6017_, v___y_6014_);
v___x_6019_ = lean_array_push(v___x_6018_, v___x_6015_);
v___x_6020_ = lean_array_push(v___x_6019_, v___x_6016_);
v___x_6021_ = l_Lasm_JS_Web_Support_args(v___x_6020_);
v___x_6022_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6012_, v___x_6021_, v___x_6010_);
return v___x_6022_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync___boxed(lean_object* v_path_6034_, lean_object* v_data_6035_, lean_object* v_options_6036_, lean_object* v_a_6037_){
_start:
{
lean_object* v_res_6038_; 
v_res_6038_ = l_Lasm_JS_Deno_writeFileSync(v_path_6034_, v_data_6035_, v_options_6036_);
lean_dec(v_options_6036_);
return v_res_6038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile(lean_object* v_path_6047_, lean_object* v_data_6048_, lean_object* v_options_6049_){
_start:
{
lean_object* v___x_6051_; lean_object* v___x_6052_; lean_object* v___y_6054_; lean_object* v___y_6055_; lean_object* v___y_6064_; 
v___x_6051_ = lean_unsigned_to_nat(3u);
v___x_6052_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFile___closed__2));
if (lean_obj_tag(v_path_6047_) == 0)
{
lean_object* v_value_6076_; lean_object* v___x_6078_; uint8_t v_isShared_6079_; uint8_t v_isSharedCheck_6083_; 
v_value_6076_ = lean_ctor_get(v_path_6047_, 0);
v_isSharedCheck_6083_ = !lean_is_exclusive(v_path_6047_);
if (v_isSharedCheck_6083_ == 0)
{
v___x_6078_ = v_path_6047_;
v_isShared_6079_ = v_isSharedCheck_6083_;
goto v_resetjp_6077_;
}
else
{
lean_inc(v_value_6076_);
lean_dec(v_path_6047_);
v___x_6078_ = lean_box(0);
v_isShared_6079_ = v_isSharedCheck_6083_;
goto v_resetjp_6077_;
}
v_resetjp_6077_:
{
lean_object* v___x_6081_; 
if (v_isShared_6079_ == 0)
{
lean_ctor_set_tag(v___x_6078_, 4);
v___x_6081_ = v___x_6078_;
goto v_reusejp_6080_;
}
else
{
lean_object* v_reuseFailAlloc_6082_; 
v_reuseFailAlloc_6082_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6082_, 0, v_value_6076_);
v___x_6081_ = v_reuseFailAlloc_6082_;
goto v_reusejp_6080_;
}
v_reusejp_6080_:
{
v___y_6064_ = v___x_6081_;
goto v___jp_6063_;
}
}
}
else
{
lean_object* v_value_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; 
v_value_6084_ = lean_ctor_get(v_path_6047_, 0);
lean_inc(v_value_6084_);
lean_dec_ref_known(v_path_6047_, 1);
v___x_6085_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6086_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6086_, 0, v_value_6084_);
lean_ctor_set(v___x_6086_, 1, v___x_6085_);
v___y_6064_ = v___x_6086_;
goto v___jp_6063_;
}
v___jp_6053_:
{
lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; 
v___x_6056_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6049_);
v___x_6057_ = lean_mk_empty_array_with_capacity(v___x_6051_);
v___x_6058_ = lean_array_push(v___x_6057_, v___y_6054_);
v___x_6059_ = lean_array_push(v___x_6058_, v___y_6055_);
v___x_6060_ = lean_array_push(v___x_6059_, v___x_6056_);
v___x_6061_ = l_Lasm_JS_Web_Support_args(v___x_6060_);
v___x_6062_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6052_, v___x_6061_);
return v___x_6062_;
}
v___jp_6063_:
{
if (lean_obj_tag(v_data_6048_) == 0)
{
lean_object* v_value_6065_; lean_object* v___x_6067_; uint8_t v_isShared_6068_; uint8_t v_isSharedCheck_6072_; 
v_value_6065_ = lean_ctor_get(v_data_6048_, 0);
v_isSharedCheck_6072_ = !lean_is_exclusive(v_data_6048_);
if (v_isSharedCheck_6072_ == 0)
{
v___x_6067_ = v_data_6048_;
v_isShared_6068_ = v_isSharedCheck_6072_;
goto v_resetjp_6066_;
}
else
{
lean_inc(v_value_6065_);
lean_dec(v_data_6048_);
v___x_6067_ = lean_box(0);
v_isShared_6068_ = v_isSharedCheck_6072_;
goto v_resetjp_6066_;
}
v_resetjp_6066_:
{
lean_object* v___x_6070_; 
if (v_isShared_6068_ == 0)
{
lean_ctor_set_tag(v___x_6067_, 4);
v___x_6070_ = v___x_6067_;
goto v_reusejp_6069_;
}
else
{
lean_object* v_reuseFailAlloc_6071_; 
v_reuseFailAlloc_6071_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6071_, 0, v_value_6065_);
v___x_6070_ = v_reuseFailAlloc_6071_;
goto v_reusejp_6069_;
}
v_reusejp_6069_:
{
v___y_6054_ = v___y_6064_;
v___y_6055_ = v___x_6070_;
goto v___jp_6053_;
}
}
}
else
{
lean_object* v_value_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; 
v_value_6073_ = lean_ctor_get(v_data_6048_, 0);
lean_inc(v_value_6073_);
lean_dec_ref_known(v_data_6048_, 1);
v___x_6074_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6075_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6075_, 0, v_value_6073_);
lean_ctor_set(v___x_6075_, 1, v___x_6074_);
v___y_6054_ = v___y_6064_;
v___y_6055_ = v___x_6075_;
goto v___jp_6053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile___boxed(lean_object* v_path_6087_, lean_object* v_data_6088_, lean_object* v_options_6089_, lean_object* v_a_6090_){
_start:
{
lean_object* v_res_6091_; 
v_res_6091_ = l_Lasm_JS_Deno_writeTextFile(v_path_6087_, v_data_6088_, v_options_6089_);
lean_dec(v_options_6089_);
return v_res_6091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync(lean_object* v_path_6100_, lean_object* v_data_6101_, lean_object* v_options_6102_){
_start:
{
uint8_t v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___y_6108_; 
v___x_6104_ = 0;
v___x_6105_ = lean_unsigned_to_nat(3u);
v___x_6106_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFileSync___closed__2));
if (lean_obj_tag(v_path_6100_) == 0)
{
lean_object* v_value_6117_; lean_object* v___x_6119_; uint8_t v_isShared_6120_; uint8_t v_isSharedCheck_6124_; 
v_value_6117_ = lean_ctor_get(v_path_6100_, 0);
v_isSharedCheck_6124_ = !lean_is_exclusive(v_path_6100_);
if (v_isSharedCheck_6124_ == 0)
{
v___x_6119_ = v_path_6100_;
v_isShared_6120_ = v_isSharedCheck_6124_;
goto v_resetjp_6118_;
}
else
{
lean_inc(v_value_6117_);
lean_dec(v_path_6100_);
v___x_6119_ = lean_box(0);
v_isShared_6120_ = v_isSharedCheck_6124_;
goto v_resetjp_6118_;
}
v_resetjp_6118_:
{
lean_object* v___x_6122_; 
if (v_isShared_6120_ == 0)
{
lean_ctor_set_tag(v___x_6119_, 4);
v___x_6122_ = v___x_6119_;
goto v_reusejp_6121_;
}
else
{
lean_object* v_reuseFailAlloc_6123_; 
v_reuseFailAlloc_6123_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6123_, 0, v_value_6117_);
v___x_6122_ = v_reuseFailAlloc_6123_;
goto v_reusejp_6121_;
}
v_reusejp_6121_:
{
v___y_6108_ = v___x_6122_;
goto v___jp_6107_;
}
}
}
else
{
lean_object* v_value_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; 
v_value_6125_ = lean_ctor_get(v_path_6100_, 0);
lean_inc(v_value_6125_);
lean_dec_ref_known(v_path_6100_, 1);
v___x_6126_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6127_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6127_, 0, v_value_6125_);
lean_ctor_set(v___x_6127_, 1, v___x_6126_);
v___y_6108_ = v___x_6127_;
goto v___jp_6107_;
}
v___jp_6107_:
{
lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; 
v___x_6109_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6109_, 0, v_data_6101_);
v___x_6110_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6102_);
v___x_6111_ = lean_mk_empty_array_with_capacity(v___x_6105_);
v___x_6112_ = lean_array_push(v___x_6111_, v___y_6108_);
v___x_6113_ = lean_array_push(v___x_6112_, v___x_6109_);
v___x_6114_ = lean_array_push(v___x_6113_, v___x_6110_);
v___x_6115_ = l_Lasm_JS_Web_Support_args(v___x_6114_);
v___x_6116_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6106_, v___x_6115_, v___x_6104_);
return v___x_6116_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync___boxed(lean_object* v_path_6128_, lean_object* v_data_6129_, lean_object* v_options_6130_, lean_object* v_a_6131_){
_start:
{
lean_object* v_res_6132_; 
v_res_6132_ = l_Lasm_JS_Deno_writeTextFileSync(v_path_6128_, v_data_6129_, v_options_6130_);
lean_dec(v_options_6130_);
return v_res_6132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate(lean_object* v_name_6141_, lean_object* v_len_6142_){
_start:
{
lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; 
v___x_6144_ = lean_unsigned_to_nat(2u);
v___x_6145_ = ((lean_object*)(l_Lasm_JS_Deno_truncate___closed__2));
v___x_6146_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6146_, 0, v_name_6141_);
v___x_6147_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6142_);
v___x_6148_ = lean_mk_empty_array_with_capacity(v___x_6144_);
v___x_6149_ = lean_array_push(v___x_6148_, v___x_6146_);
v___x_6150_ = lean_array_push(v___x_6149_, v___x_6147_);
v___x_6151_ = l_Lasm_JS_Web_Support_args(v___x_6150_);
v___x_6152_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6145_, v___x_6151_);
return v___x_6152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate___boxed(lean_object* v_name_6153_, lean_object* v_len_6154_, lean_object* v_a_6155_){
_start:
{
lean_object* v_res_6156_; 
v_res_6156_ = l_Lasm_JS_Deno_truncate(v_name_6153_, v_len_6154_);
lean_dec(v_len_6154_);
return v_res_6156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync(lean_object* v_name_6165_, lean_object* v_len_6166_){
_start:
{
uint8_t v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; 
v___x_6168_ = 0;
v___x_6169_ = lean_unsigned_to_nat(2u);
v___x_6170_ = ((lean_object*)(l_Lasm_JS_Deno_truncateSync___closed__2));
v___x_6171_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6171_, 0, v_name_6165_);
v___x_6172_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6166_);
v___x_6173_ = lean_mk_empty_array_with_capacity(v___x_6169_);
v___x_6174_ = lean_array_push(v___x_6173_, v___x_6171_);
v___x_6175_ = lean_array_push(v___x_6174_, v___x_6172_);
v___x_6176_ = l_Lasm_JS_Web_Support_args(v___x_6175_);
v___x_6177_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6170_, v___x_6176_, v___x_6168_);
return v___x_6177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync___boxed(lean_object* v_name_6178_, lean_object* v_len_6179_, lean_object* v_a_6180_){
_start:
{
lean_object* v_res_6181_; 
v_res_6181_ = l_Lasm_JS_Deno_truncateSync(v_name_6178_, v_len_6179_);
lean_dec(v_len_6179_);
return v_res_6181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(lean_object* v_x_6182_){
_start:
{
if (lean_obj_tag(v_x_6182_) == 0)
{
lean_object* v___x_6183_; 
v___x_6183_ = lean_box(0);
return v___x_6183_;
}
else
{
lean_object* v_val_6184_; 
v_val_6184_ = lean_ctor_get(v_x_6182_, 0);
lean_inc(v_val_6184_);
lean_dec_ref_known(v_x_6182_, 1);
if (lean_obj_tag(v_val_6184_) == 0)
{
lean_object* v_value_6185_; lean_object* v___x_6187_; uint8_t v_isShared_6188_; uint8_t v_isSharedCheck_6192_; 
v_value_6185_ = lean_ctor_get(v_val_6184_, 0);
v_isSharedCheck_6192_ = !lean_is_exclusive(v_val_6184_);
if (v_isSharedCheck_6192_ == 0)
{
v___x_6187_ = v_val_6184_;
v_isShared_6188_ = v_isSharedCheck_6192_;
goto v_resetjp_6186_;
}
else
{
lean_inc(v_value_6185_);
lean_dec(v_val_6184_);
v___x_6187_ = lean_box(0);
v_isShared_6188_ = v_isSharedCheck_6192_;
goto v_resetjp_6186_;
}
v_resetjp_6186_:
{
lean_object* v___x_6190_; 
if (v_isShared_6188_ == 0)
{
lean_ctor_set_tag(v___x_6187_, 4);
v___x_6190_ = v___x_6187_;
goto v_reusejp_6189_;
}
else
{
lean_object* v_reuseFailAlloc_6191_; 
v_reuseFailAlloc_6191_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6191_, 0, v_value_6185_);
v___x_6190_ = v_reuseFailAlloc_6191_;
goto v_reusejp_6189_;
}
v_reusejp_6189_:
{
return v___x_6190_;
}
}
}
else
{
lean_object* v_value_6193_; lean_object* v___x_6195_; uint8_t v_isShared_6196_; uint8_t v_isSharedCheck_6203_; 
v_value_6193_ = lean_ctor_get(v_val_6184_, 0);
v_isSharedCheck_6203_ = !lean_is_exclusive(v_val_6184_);
if (v_isSharedCheck_6203_ == 0)
{
v___x_6195_ = v_val_6184_;
v_isShared_6196_ = v_isSharedCheck_6203_;
goto v_resetjp_6194_;
}
else
{
lean_inc(v_value_6193_);
lean_dec(v_val_6184_);
v___x_6195_ = lean_box(0);
v_isShared_6196_ = v_isSharedCheck_6203_;
goto v_resetjp_6194_;
}
v_resetjp_6194_:
{
size_t v_sz_6197_; size_t v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6201_; 
v_sz_6197_ = lean_array_size(v_value_6193_);
v___x_6198_ = ((size_t)0ULL);
v___x_6199_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6197_, v___x_6198_, v_value_6193_);
if (v_isShared_6196_ == 0)
{
lean_ctor_set_tag(v___x_6195_, 7);
lean_ctor_set(v___x_6195_, 0, v___x_6199_);
v___x_6201_ = v___x_6195_;
goto v_reusejp_6200_;
}
else
{
lean_object* v_reuseFailAlloc_6202_; 
v_reuseFailAlloc_6202_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6202_, 0, v___x_6199_);
v___x_6201_ = v_reuseFailAlloc_6202_;
goto v_reusejp_6200_;
}
v_reusejp_6200_:
{
return v___x_6201_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(lean_object* v_x_6204_){
_start:
{
if (lean_obj_tag(v_x_6204_) == 0)
{
lean_object* v___x_6205_; 
v___x_6205_ = lean_box(0);
return v___x_6205_;
}
else
{
lean_object* v_val_6206_; lean_object* v_recursive_6207_; lean_object* v_ignore_6208_; lean_object* v___x_6210_; uint8_t v_isShared_6211_; uint8_t v_isSharedCheck_6225_; 
v_val_6206_ = lean_ctor_get(v_x_6204_, 0);
lean_inc(v_val_6206_);
lean_dec_ref_known(v_x_6204_, 1);
v_recursive_6207_ = lean_ctor_get(v_val_6206_, 0);
v_ignore_6208_ = lean_ctor_get(v_val_6206_, 1);
v_isSharedCheck_6225_ = !lean_is_exclusive(v_val_6206_);
if (v_isSharedCheck_6225_ == 0)
{
v___x_6210_ = v_val_6206_;
v_isShared_6211_ = v_isSharedCheck_6225_;
goto v_resetjp_6209_;
}
else
{
lean_inc(v_ignore_6208_);
lean_inc(v_recursive_6207_);
lean_dec(v_val_6206_);
v___x_6210_ = lean_box(0);
v_isShared_6211_ = v_isSharedCheck_6225_;
goto v_resetjp_6209_;
}
v_resetjp_6209_:
{
lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v___x_6215_; 
v___x_6212_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_6213_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_6207_);
lean_dec(v_recursive_6207_);
if (v_isShared_6211_ == 0)
{
lean_ctor_set(v___x_6210_, 1, v___x_6213_);
lean_ctor_set(v___x_6210_, 0, v___x_6212_);
v___x_6215_ = v___x_6210_;
goto v_reusejp_6214_;
}
else
{
lean_object* v_reuseFailAlloc_6224_; 
v_reuseFailAlloc_6224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6224_, 0, v___x_6212_);
lean_ctor_set(v_reuseFailAlloc_6224_, 1, v___x_6213_);
v___x_6215_ = v_reuseFailAlloc_6224_;
goto v_reusejp_6214_;
}
v_reusejp_6214_:
{
lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; 
v___x_6216_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0));
v___x_6217_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(v_ignore_6208_);
v___x_6218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6218_, 0, v___x_6216_);
lean_ctor_set(v___x_6218_, 1, v___x_6217_);
v___x_6219_ = lean_unsigned_to_nat(2u);
v___x_6220_ = lean_mk_empty_array_with_capacity(v___x_6219_);
v___x_6221_ = lean_array_push(v___x_6220_, v___x_6215_);
v___x_6222_ = lean_array_push(v___x_6221_, v___x_6218_);
v___x_6223_ = l_Lasm_JS_Web_Support_fields(v___x_6222_);
lean_dec_ref(v___x_6222_);
return v___x_6223_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs(lean_object* v_paths_6234_, lean_object* v_options_6235_){
_start:
{
uint8_t v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___y_6241_; 
v___x_6237_ = 0;
v___x_6238_ = lean_unsigned_to_nat(2u);
v___x_6239_ = ((lean_object*)(l_Lasm_JS_Deno_watchFs___closed__2));
if (lean_obj_tag(v_paths_6234_) == 0)
{
lean_object* v_value_6264_; lean_object* v___x_6266_; uint8_t v_isShared_6267_; uint8_t v_isSharedCheck_6271_; 
v_value_6264_ = lean_ctor_get(v_paths_6234_, 0);
v_isSharedCheck_6271_ = !lean_is_exclusive(v_paths_6234_);
if (v_isSharedCheck_6271_ == 0)
{
v___x_6266_ = v_paths_6234_;
v_isShared_6267_ = v_isSharedCheck_6271_;
goto v_resetjp_6265_;
}
else
{
lean_inc(v_value_6264_);
lean_dec(v_paths_6234_);
v___x_6266_ = lean_box(0);
v_isShared_6267_ = v_isSharedCheck_6271_;
goto v_resetjp_6265_;
}
v_resetjp_6265_:
{
lean_object* v___x_6269_; 
if (v_isShared_6267_ == 0)
{
lean_ctor_set_tag(v___x_6266_, 4);
v___x_6269_ = v___x_6266_;
goto v_reusejp_6268_;
}
else
{
lean_object* v_reuseFailAlloc_6270_; 
v_reuseFailAlloc_6270_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6270_, 0, v_value_6264_);
v___x_6269_ = v_reuseFailAlloc_6270_;
goto v_reusejp_6268_;
}
v_reusejp_6268_:
{
v___y_6241_ = v___x_6269_;
goto v___jp_6240_;
}
}
}
else
{
lean_object* v_value_6272_; lean_object* v___x_6274_; uint8_t v_isShared_6275_; uint8_t v_isSharedCheck_6282_; 
v_value_6272_ = lean_ctor_get(v_paths_6234_, 0);
v_isSharedCheck_6282_ = !lean_is_exclusive(v_paths_6234_);
if (v_isSharedCheck_6282_ == 0)
{
v___x_6274_ = v_paths_6234_;
v_isShared_6275_ = v_isSharedCheck_6282_;
goto v_resetjp_6273_;
}
else
{
lean_inc(v_value_6272_);
lean_dec(v_paths_6234_);
v___x_6274_ = lean_box(0);
v_isShared_6275_ = v_isSharedCheck_6282_;
goto v_resetjp_6273_;
}
v_resetjp_6273_:
{
size_t v_sz_6276_; size_t v___x_6277_; lean_object* v___x_6278_; lean_object* v___x_6280_; 
v_sz_6276_ = lean_array_size(v_value_6272_);
v___x_6277_ = ((size_t)0ULL);
v___x_6278_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6276_, v___x_6277_, v_value_6272_);
if (v_isShared_6275_ == 0)
{
lean_ctor_set_tag(v___x_6274_, 7);
lean_ctor_set(v___x_6274_, 0, v___x_6278_);
v___x_6280_ = v___x_6274_;
goto v_reusejp_6279_;
}
else
{
lean_object* v_reuseFailAlloc_6281_; 
v_reuseFailAlloc_6281_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6281_, 0, v___x_6278_);
v___x_6280_ = v_reuseFailAlloc_6281_;
goto v_reusejp_6279_;
}
v_reusejp_6279_:
{
v___y_6241_ = v___x_6280_;
goto v___jp_6240_;
}
}
}
v___jp_6240_:
{
lean_object* v___x_6242_; lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6247_; 
v___x_6242_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(v_options_6235_);
v___x_6243_ = lean_mk_empty_array_with_capacity(v___x_6238_);
v___x_6244_ = lean_array_push(v___x_6243_, v___y_6241_);
v___x_6245_ = lean_array_push(v___x_6244_, v___x_6242_);
v___x_6246_ = l_Lasm_JS_Web_Support_args(v___x_6245_);
v___x_6247_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_6239_, v___x_6246_, v___x_6237_);
if (lean_obj_tag(v___x_6247_) == 0)
{
lean_object* v_a_6248_; lean_object* v___x_6250_; uint8_t v_isShared_6251_; uint8_t v_isSharedCheck_6255_; 
v_a_6248_ = lean_ctor_get(v___x_6247_, 0);
v_isSharedCheck_6255_ = !lean_is_exclusive(v___x_6247_);
if (v_isSharedCheck_6255_ == 0)
{
v___x_6250_ = v___x_6247_;
v_isShared_6251_ = v_isSharedCheck_6255_;
goto v_resetjp_6249_;
}
else
{
lean_inc(v_a_6248_);
lean_dec(v___x_6247_);
v___x_6250_ = lean_box(0);
v_isShared_6251_ = v_isSharedCheck_6255_;
goto v_resetjp_6249_;
}
v_resetjp_6249_:
{
lean_object* v___x_6253_; 
if (v_isShared_6251_ == 0)
{
v___x_6253_ = v___x_6250_;
goto v_reusejp_6252_;
}
else
{
lean_object* v_reuseFailAlloc_6254_; 
v_reuseFailAlloc_6254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6254_, 0, v_a_6248_);
v___x_6253_ = v_reuseFailAlloc_6254_;
goto v_reusejp_6252_;
}
v_reusejp_6252_:
{
return v___x_6253_;
}
}
}
else
{
lean_object* v_a_6256_; lean_object* v___x_6258_; uint8_t v_isShared_6259_; uint8_t v_isSharedCheck_6263_; 
v_a_6256_ = lean_ctor_get(v___x_6247_, 0);
v_isSharedCheck_6263_ = !lean_is_exclusive(v___x_6247_);
if (v_isSharedCheck_6263_ == 0)
{
v___x_6258_ = v___x_6247_;
v_isShared_6259_ = v_isSharedCheck_6263_;
goto v_resetjp_6257_;
}
else
{
lean_inc(v_a_6256_);
lean_dec(v___x_6247_);
v___x_6258_ = lean_box(0);
v_isShared_6259_ = v_isSharedCheck_6263_;
goto v_resetjp_6257_;
}
v_resetjp_6257_:
{
lean_object* v___x_6261_; 
if (v_isShared_6259_ == 0)
{
v___x_6261_ = v___x_6258_;
goto v_reusejp_6260_;
}
else
{
lean_object* v_reuseFailAlloc_6262_; 
v_reuseFailAlloc_6262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6262_, 0, v_a_6256_);
v___x_6261_ = v_reuseFailAlloc_6262_;
goto v_reusejp_6260_;
}
v_reusejp_6260_:
{
return v___x_6261_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs___boxed(lean_object* v_paths_6283_, lean_object* v_options_6284_, lean_object* v_a_6285_){
_start:
{
lean_object* v_res_6286_; 
v_res_6286_ = l_Lasm_JS_Deno_watchFs(v_paths_6283_, v_options_6284_);
return v_res_6286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(lean_object* v_x_6287_){
_start:
{
if (lean_obj_tag(v_x_6287_) == 0)
{
lean_object* v___x_6288_; 
v___x_6288_ = lean_box(0);
return v___x_6288_;
}
else
{
lean_object* v_val_6289_; lean_object* v___x_6290_; lean_object* v___y_6292_; uint8_t v___x_6298_; 
v_val_6289_ = lean_ctor_get(v_x_6287_, 0);
v___x_6290_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0));
v___x_6298_ = lean_unbox(v_val_6289_);
switch(v___x_6298_)
{
case 0:
{
lean_object* v___x_6299_; 
v___x_6299_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
v___y_6292_ = v___x_6299_;
goto v___jp_6291_;
}
case 1:
{
lean_object* v___x_6300_; 
v___x_6300_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
v___y_6292_ = v___x_6300_;
goto v___jp_6291_;
}
default: 
{
lean_object* v___x_6301_; 
v___x_6301_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
v___y_6292_ = v___x_6301_;
goto v___jp_6291_;
}
}
v___jp_6291_:
{
lean_object* v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; lean_object* v___x_6297_; 
lean_inc(v___y_6292_);
v___x_6293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6293_, 0, v___x_6290_);
lean_ctor_set(v___x_6293_, 1, v___y_6292_);
v___x_6294_ = lean_unsigned_to_nat(1u);
v___x_6295_ = lean_mk_empty_array_with_capacity(v___x_6294_);
v___x_6296_ = lean_array_push(v___x_6295_, v___x_6293_);
v___x_6297_ = l_Lasm_JS_Web_Support_fields(v___x_6296_);
lean_dec_ref(v___x_6296_);
return v___x_6297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0___boxed(lean_object* v_x_6302_){
_start:
{
lean_object* v_res_6303_; 
v_res_6303_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_x_6302_);
lean_dec(v_x_6302_);
return v_res_6303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink(lean_object* v_oldpath_6312_, lean_object* v_newpath_6313_, lean_object* v_options_6314_){
_start:
{
lean_object* v___x_6316_; lean_object* v___x_6317_; lean_object* v___y_6319_; lean_object* v___y_6320_; lean_object* v___y_6329_; 
v___x_6316_ = lean_unsigned_to_nat(3u);
v___x_6317_ = ((lean_object*)(l_Lasm_JS_Deno_symlink___closed__2));
if (lean_obj_tag(v_oldpath_6312_) == 0)
{
lean_object* v_value_6341_; lean_object* v___x_6343_; uint8_t v_isShared_6344_; uint8_t v_isSharedCheck_6348_; 
v_value_6341_ = lean_ctor_get(v_oldpath_6312_, 0);
v_isSharedCheck_6348_ = !lean_is_exclusive(v_oldpath_6312_);
if (v_isSharedCheck_6348_ == 0)
{
v___x_6343_ = v_oldpath_6312_;
v_isShared_6344_ = v_isSharedCheck_6348_;
goto v_resetjp_6342_;
}
else
{
lean_inc(v_value_6341_);
lean_dec(v_oldpath_6312_);
v___x_6343_ = lean_box(0);
v_isShared_6344_ = v_isSharedCheck_6348_;
goto v_resetjp_6342_;
}
v_resetjp_6342_:
{
lean_object* v___x_6346_; 
if (v_isShared_6344_ == 0)
{
lean_ctor_set_tag(v___x_6343_, 4);
v___x_6346_ = v___x_6343_;
goto v_reusejp_6345_;
}
else
{
lean_object* v_reuseFailAlloc_6347_; 
v_reuseFailAlloc_6347_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6347_, 0, v_value_6341_);
v___x_6346_ = v_reuseFailAlloc_6347_;
goto v_reusejp_6345_;
}
v_reusejp_6345_:
{
v___y_6329_ = v___x_6346_;
goto v___jp_6328_;
}
}
}
else
{
lean_object* v_value_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; 
v_value_6349_ = lean_ctor_get(v_oldpath_6312_, 0);
lean_inc(v_value_6349_);
lean_dec_ref_known(v_oldpath_6312_, 1);
v___x_6350_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6351_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6351_, 0, v_value_6349_);
lean_ctor_set(v___x_6351_, 1, v___x_6350_);
v___y_6329_ = v___x_6351_;
goto v___jp_6328_;
}
v___jp_6318_:
{
lean_object* v___x_6321_; lean_object* v___x_6322_; lean_object* v___x_6323_; lean_object* v___x_6324_; lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v___x_6327_; 
v___x_6321_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6314_);
v___x_6322_ = lean_mk_empty_array_with_capacity(v___x_6316_);
v___x_6323_ = lean_array_push(v___x_6322_, v___y_6319_);
v___x_6324_ = lean_array_push(v___x_6323_, v___y_6320_);
v___x_6325_ = lean_array_push(v___x_6324_, v___x_6321_);
v___x_6326_ = l_Lasm_JS_Web_Support_args(v___x_6325_);
v___x_6327_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6317_, v___x_6326_);
return v___x_6327_;
}
v___jp_6328_:
{
if (lean_obj_tag(v_newpath_6313_) == 0)
{
lean_object* v_value_6330_; lean_object* v___x_6332_; uint8_t v_isShared_6333_; uint8_t v_isSharedCheck_6337_; 
v_value_6330_ = lean_ctor_get(v_newpath_6313_, 0);
v_isSharedCheck_6337_ = !lean_is_exclusive(v_newpath_6313_);
if (v_isSharedCheck_6337_ == 0)
{
v___x_6332_ = v_newpath_6313_;
v_isShared_6333_ = v_isSharedCheck_6337_;
goto v_resetjp_6331_;
}
else
{
lean_inc(v_value_6330_);
lean_dec(v_newpath_6313_);
v___x_6332_ = lean_box(0);
v_isShared_6333_ = v_isSharedCheck_6337_;
goto v_resetjp_6331_;
}
v_resetjp_6331_:
{
lean_object* v___x_6335_; 
if (v_isShared_6333_ == 0)
{
lean_ctor_set_tag(v___x_6332_, 4);
v___x_6335_ = v___x_6332_;
goto v_reusejp_6334_;
}
else
{
lean_object* v_reuseFailAlloc_6336_; 
v_reuseFailAlloc_6336_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6336_, 0, v_value_6330_);
v___x_6335_ = v_reuseFailAlloc_6336_;
goto v_reusejp_6334_;
}
v_reusejp_6334_:
{
v___y_6319_ = v___y_6329_;
v___y_6320_ = v___x_6335_;
goto v___jp_6318_;
}
}
}
else
{
lean_object* v_value_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; 
v_value_6338_ = lean_ctor_get(v_newpath_6313_, 0);
lean_inc(v_value_6338_);
lean_dec_ref_known(v_newpath_6313_, 1);
v___x_6339_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6340_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6340_, 0, v_value_6338_);
lean_ctor_set(v___x_6340_, 1, v___x_6339_);
v___y_6319_ = v___y_6329_;
v___y_6320_ = v___x_6340_;
goto v___jp_6318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink___boxed(lean_object* v_oldpath_6352_, lean_object* v_newpath_6353_, lean_object* v_options_6354_, lean_object* v_a_6355_){
_start:
{
lean_object* v_res_6356_; 
v_res_6356_ = l_Lasm_JS_Deno_symlink(v_oldpath_6352_, v_newpath_6353_, v_options_6354_);
lean_dec(v_options_6354_);
return v_res_6356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync(lean_object* v_oldpath_6365_, lean_object* v_newpath_6366_, lean_object* v_options_6367_){
_start:
{
uint8_t v___x_6369_; lean_object* v___x_6370_; lean_object* v___x_6371_; lean_object* v___y_6373_; lean_object* v___y_6374_; lean_object* v___y_6383_; 
v___x_6369_ = 0;
v___x_6370_ = lean_unsigned_to_nat(3u);
v___x_6371_ = ((lean_object*)(l_Lasm_JS_Deno_symlinkSync___closed__2));
if (lean_obj_tag(v_oldpath_6365_) == 0)
{
lean_object* v_value_6395_; lean_object* v___x_6397_; uint8_t v_isShared_6398_; uint8_t v_isSharedCheck_6402_; 
v_value_6395_ = lean_ctor_get(v_oldpath_6365_, 0);
v_isSharedCheck_6402_ = !lean_is_exclusive(v_oldpath_6365_);
if (v_isSharedCheck_6402_ == 0)
{
v___x_6397_ = v_oldpath_6365_;
v_isShared_6398_ = v_isSharedCheck_6402_;
goto v_resetjp_6396_;
}
else
{
lean_inc(v_value_6395_);
lean_dec(v_oldpath_6365_);
v___x_6397_ = lean_box(0);
v_isShared_6398_ = v_isSharedCheck_6402_;
goto v_resetjp_6396_;
}
v_resetjp_6396_:
{
lean_object* v___x_6400_; 
if (v_isShared_6398_ == 0)
{
lean_ctor_set_tag(v___x_6397_, 4);
v___x_6400_ = v___x_6397_;
goto v_reusejp_6399_;
}
else
{
lean_object* v_reuseFailAlloc_6401_; 
v_reuseFailAlloc_6401_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6401_, 0, v_value_6395_);
v___x_6400_ = v_reuseFailAlloc_6401_;
goto v_reusejp_6399_;
}
v_reusejp_6399_:
{
v___y_6383_ = v___x_6400_;
goto v___jp_6382_;
}
}
}
else
{
lean_object* v_value_6403_; lean_object* v___x_6404_; lean_object* v___x_6405_; 
v_value_6403_ = lean_ctor_get(v_oldpath_6365_, 0);
lean_inc(v_value_6403_);
lean_dec_ref_known(v_oldpath_6365_, 1);
v___x_6404_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6405_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6405_, 0, v_value_6403_);
lean_ctor_set(v___x_6405_, 1, v___x_6404_);
v___y_6383_ = v___x_6405_;
goto v___jp_6382_;
}
v___jp_6372_:
{
lean_object* v___x_6375_; lean_object* v___x_6376_; lean_object* v___x_6377_; lean_object* v___x_6378_; lean_object* v___x_6379_; lean_object* v___x_6380_; lean_object* v___x_6381_; 
v___x_6375_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6367_);
v___x_6376_ = lean_mk_empty_array_with_capacity(v___x_6370_);
v___x_6377_ = lean_array_push(v___x_6376_, v___y_6373_);
v___x_6378_ = lean_array_push(v___x_6377_, v___y_6374_);
v___x_6379_ = lean_array_push(v___x_6378_, v___x_6375_);
v___x_6380_ = l_Lasm_JS_Web_Support_args(v___x_6379_);
v___x_6381_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6371_, v___x_6380_, v___x_6369_);
return v___x_6381_;
}
v___jp_6382_:
{
if (lean_obj_tag(v_newpath_6366_) == 0)
{
lean_object* v_value_6384_; lean_object* v___x_6386_; uint8_t v_isShared_6387_; uint8_t v_isSharedCheck_6391_; 
v_value_6384_ = lean_ctor_get(v_newpath_6366_, 0);
v_isSharedCheck_6391_ = !lean_is_exclusive(v_newpath_6366_);
if (v_isSharedCheck_6391_ == 0)
{
v___x_6386_ = v_newpath_6366_;
v_isShared_6387_ = v_isSharedCheck_6391_;
goto v_resetjp_6385_;
}
else
{
lean_inc(v_value_6384_);
lean_dec(v_newpath_6366_);
v___x_6386_ = lean_box(0);
v_isShared_6387_ = v_isSharedCheck_6391_;
goto v_resetjp_6385_;
}
v_resetjp_6385_:
{
lean_object* v___x_6389_; 
if (v_isShared_6387_ == 0)
{
lean_ctor_set_tag(v___x_6386_, 4);
v___x_6389_ = v___x_6386_;
goto v_reusejp_6388_;
}
else
{
lean_object* v_reuseFailAlloc_6390_; 
v_reuseFailAlloc_6390_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6390_, 0, v_value_6384_);
v___x_6389_ = v_reuseFailAlloc_6390_;
goto v_reusejp_6388_;
}
v_reusejp_6388_:
{
v___y_6373_ = v___y_6383_;
v___y_6374_ = v___x_6389_;
goto v___jp_6372_;
}
}
}
else
{
lean_object* v_value_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; 
v_value_6392_ = lean_ctor_get(v_newpath_6366_, 0);
lean_inc(v_value_6392_);
lean_dec_ref_known(v_newpath_6366_, 1);
v___x_6393_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6394_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6394_, 0, v_value_6392_);
lean_ctor_set(v___x_6394_, 1, v___x_6393_);
v___y_6373_ = v___y_6383_;
v___y_6374_ = v___x_6394_;
goto v___jp_6372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync___boxed(lean_object* v_oldpath_6406_, lean_object* v_newpath_6407_, lean_object* v_options_6408_, lean_object* v_a_6409_){
_start:
{
lean_object* v_res_6410_; 
v_res_6410_ = l_Lasm_JS_Deno_symlinkSync(v_oldpath_6406_, v_newpath_6407_, v_options_6408_);
lean_dec(v_options_6408_);
return v_res_6410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync(lean_object* v_path_6419_, lean_object* v_atime_6420_, lean_object* v_mtime_6421_){
_start:
{
uint8_t v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; lean_object* v___y_6427_; lean_object* v___y_6428_; lean_object* v___y_6429_; lean_object* v___y_6437_; lean_object* v___y_6438_; lean_object* v___y_6449_; 
v___x_6423_ = 0;
v___x_6424_ = lean_unsigned_to_nat(3u);
v___x_6425_ = ((lean_object*)(l_Lasm_JS_Deno_utimeSync___closed__2));
if (lean_obj_tag(v_path_6419_) == 0)
{
lean_object* v_value_6459_; lean_object* v___x_6461_; uint8_t v_isShared_6462_; uint8_t v_isSharedCheck_6466_; 
v_value_6459_ = lean_ctor_get(v_path_6419_, 0);
v_isSharedCheck_6466_ = !lean_is_exclusive(v_path_6419_);
if (v_isSharedCheck_6466_ == 0)
{
v___x_6461_ = v_path_6419_;
v_isShared_6462_ = v_isSharedCheck_6466_;
goto v_resetjp_6460_;
}
else
{
lean_inc(v_value_6459_);
lean_dec(v_path_6419_);
v___x_6461_ = lean_box(0);
v_isShared_6462_ = v_isSharedCheck_6466_;
goto v_resetjp_6460_;
}
v_resetjp_6460_:
{
lean_object* v___x_6464_; 
if (v_isShared_6462_ == 0)
{
lean_ctor_set_tag(v___x_6461_, 4);
v___x_6464_ = v___x_6461_;
goto v_reusejp_6463_;
}
else
{
lean_object* v_reuseFailAlloc_6465_; 
v_reuseFailAlloc_6465_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6465_, 0, v_value_6459_);
v___x_6464_ = v_reuseFailAlloc_6465_;
goto v_reusejp_6463_;
}
v_reusejp_6463_:
{
v___y_6449_ = v___x_6464_;
goto v___jp_6448_;
}
}
}
else
{
lean_object* v_value_6467_; lean_object* v___x_6468_; lean_object* v___x_6469_; 
v_value_6467_ = lean_ctor_get(v_path_6419_, 0);
lean_inc(v_value_6467_);
lean_dec_ref_known(v_path_6419_, 1);
v___x_6468_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6469_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6469_, 0, v_value_6467_);
lean_ctor_set(v___x_6469_, 1, v___x_6468_);
v___y_6449_ = v___x_6469_;
goto v___jp_6448_;
}
v___jp_6426_:
{
lean_object* v___x_6430_; lean_object* v___x_6431_; lean_object* v___x_6432_; lean_object* v___x_6433_; lean_object* v___x_6434_; lean_object* v___x_6435_; 
v___x_6430_ = lean_mk_empty_array_with_capacity(v___x_6424_);
v___x_6431_ = lean_array_push(v___x_6430_, v___y_6427_);
v___x_6432_ = lean_array_push(v___x_6431_, v___y_6428_);
v___x_6433_ = lean_array_push(v___x_6432_, v___y_6429_);
v___x_6434_ = l_Lasm_JS_Web_Support_args(v___x_6433_);
v___x_6435_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6425_, v___x_6434_, v___x_6423_);
return v___x_6435_;
}
v___jp_6436_:
{
if (lean_obj_tag(v_mtime_6421_) == 0)
{
double v_value_6439_; lean_object* v___x_6441_; uint8_t v_isShared_6442_; uint8_t v_isSharedCheck_6446_; 
v_value_6439_ = lean_ctor_get_float(v_mtime_6421_, 0);
v_isSharedCheck_6446_ = !lean_is_exclusive(v_mtime_6421_);
if (v_isSharedCheck_6446_ == 0)
{
v___x_6441_ = v_mtime_6421_;
v_isShared_6442_ = v_isSharedCheck_6446_;
goto v_resetjp_6440_;
}
else
{
lean_dec(v_mtime_6421_);
v___x_6441_ = lean_box(0);
v_isShared_6442_ = v_isSharedCheck_6446_;
goto v_resetjp_6440_;
}
v_resetjp_6440_:
{
lean_object* v___x_6444_; 
if (v_isShared_6442_ == 0)
{
lean_ctor_set_tag(v___x_6441_, 3);
v___x_6444_ = v___x_6441_;
goto v_reusejp_6443_;
}
else
{
lean_object* v_reuseFailAlloc_6445_; 
v_reuseFailAlloc_6445_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6445_, 0, v_value_6439_);
v___x_6444_ = v_reuseFailAlloc_6445_;
goto v_reusejp_6443_;
}
v_reusejp_6443_:
{
v___y_6427_ = v___y_6437_;
v___y_6428_ = v___y_6438_;
v___y_6429_ = v___x_6444_;
goto v___jp_6426_;
}
}
}
else
{
lean_object* v_value_6447_; 
v_value_6447_ = lean_ctor_get(v_mtime_6421_, 0);
lean_inc(v_value_6447_);
lean_dec_ref_known(v_mtime_6421_, 1);
v___y_6427_ = v___y_6437_;
v___y_6428_ = v___y_6438_;
v___y_6429_ = v_value_6447_;
goto v___jp_6426_;
}
}
v___jp_6448_:
{
if (lean_obj_tag(v_atime_6420_) == 0)
{
double v_value_6450_; lean_object* v___x_6452_; uint8_t v_isShared_6453_; uint8_t v_isSharedCheck_6457_; 
v_value_6450_ = lean_ctor_get_float(v_atime_6420_, 0);
v_isSharedCheck_6457_ = !lean_is_exclusive(v_atime_6420_);
if (v_isSharedCheck_6457_ == 0)
{
v___x_6452_ = v_atime_6420_;
v_isShared_6453_ = v_isSharedCheck_6457_;
goto v_resetjp_6451_;
}
else
{
lean_dec(v_atime_6420_);
v___x_6452_ = lean_box(0);
v_isShared_6453_ = v_isSharedCheck_6457_;
goto v_resetjp_6451_;
}
v_resetjp_6451_:
{
lean_object* v___x_6455_; 
if (v_isShared_6453_ == 0)
{
lean_ctor_set_tag(v___x_6452_, 3);
v___x_6455_ = v___x_6452_;
goto v_reusejp_6454_;
}
else
{
lean_object* v_reuseFailAlloc_6456_; 
v_reuseFailAlloc_6456_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6456_, 0, v_value_6450_);
v___x_6455_ = v_reuseFailAlloc_6456_;
goto v_reusejp_6454_;
}
v_reusejp_6454_:
{
v___y_6437_ = v___y_6449_;
v___y_6438_ = v___x_6455_;
goto v___jp_6436_;
}
}
}
else
{
lean_object* v_value_6458_; 
v_value_6458_ = lean_ctor_get(v_atime_6420_, 0);
lean_inc(v_value_6458_);
lean_dec_ref_known(v_atime_6420_, 1);
v___y_6437_ = v___y_6449_;
v___y_6438_ = v_value_6458_;
goto v___jp_6436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync___boxed(lean_object* v_path_6470_, lean_object* v_atime_6471_, lean_object* v_mtime_6472_, lean_object* v_a_6473_){
_start:
{
lean_object* v_res_6474_; 
v_res_6474_ = l_Lasm_JS_Deno_utimeSync(v_path_6470_, v_atime_6471_, v_mtime_6472_);
return v_res_6474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime(lean_object* v_path_6483_, lean_object* v_atime_6484_, lean_object* v_mtime_6485_){
_start:
{
lean_object* v___x_6487_; lean_object* v___x_6488_; lean_object* v___y_6490_; lean_object* v___y_6491_; lean_object* v___y_6492_; lean_object* v___y_6500_; lean_object* v___y_6501_; lean_object* v___y_6512_; 
v___x_6487_ = lean_unsigned_to_nat(3u);
v___x_6488_ = ((lean_object*)(l_Lasm_JS_Deno_utime___closed__2));
if (lean_obj_tag(v_path_6483_) == 0)
{
lean_object* v_value_6522_; lean_object* v___x_6524_; uint8_t v_isShared_6525_; uint8_t v_isSharedCheck_6529_; 
v_value_6522_ = lean_ctor_get(v_path_6483_, 0);
v_isSharedCheck_6529_ = !lean_is_exclusive(v_path_6483_);
if (v_isSharedCheck_6529_ == 0)
{
v___x_6524_ = v_path_6483_;
v_isShared_6525_ = v_isSharedCheck_6529_;
goto v_resetjp_6523_;
}
else
{
lean_inc(v_value_6522_);
lean_dec(v_path_6483_);
v___x_6524_ = lean_box(0);
v_isShared_6525_ = v_isSharedCheck_6529_;
goto v_resetjp_6523_;
}
v_resetjp_6523_:
{
lean_object* v___x_6527_; 
if (v_isShared_6525_ == 0)
{
lean_ctor_set_tag(v___x_6524_, 4);
v___x_6527_ = v___x_6524_;
goto v_reusejp_6526_;
}
else
{
lean_object* v_reuseFailAlloc_6528_; 
v_reuseFailAlloc_6528_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6528_, 0, v_value_6522_);
v___x_6527_ = v_reuseFailAlloc_6528_;
goto v_reusejp_6526_;
}
v_reusejp_6526_:
{
v___y_6512_ = v___x_6527_;
goto v___jp_6511_;
}
}
}
else
{
lean_object* v_value_6530_; lean_object* v___x_6531_; lean_object* v___x_6532_; 
v_value_6530_ = lean_ctor_get(v_path_6483_, 0);
lean_inc(v_value_6530_);
lean_dec_ref_known(v_path_6483_, 1);
v___x_6531_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6532_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6532_, 0, v_value_6530_);
lean_ctor_set(v___x_6532_, 1, v___x_6531_);
v___y_6512_ = v___x_6532_;
goto v___jp_6511_;
}
v___jp_6489_:
{
lean_object* v___x_6493_; lean_object* v___x_6494_; lean_object* v___x_6495_; lean_object* v___x_6496_; lean_object* v___x_6497_; lean_object* v___x_6498_; 
v___x_6493_ = lean_mk_empty_array_with_capacity(v___x_6487_);
v___x_6494_ = lean_array_push(v___x_6493_, v___y_6490_);
v___x_6495_ = lean_array_push(v___x_6494_, v___y_6491_);
v___x_6496_ = lean_array_push(v___x_6495_, v___y_6492_);
v___x_6497_ = l_Lasm_JS_Web_Support_args(v___x_6496_);
v___x_6498_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6488_, v___x_6497_);
return v___x_6498_;
}
v___jp_6499_:
{
if (lean_obj_tag(v_mtime_6485_) == 0)
{
double v_value_6502_; lean_object* v___x_6504_; uint8_t v_isShared_6505_; uint8_t v_isSharedCheck_6509_; 
v_value_6502_ = lean_ctor_get_float(v_mtime_6485_, 0);
v_isSharedCheck_6509_ = !lean_is_exclusive(v_mtime_6485_);
if (v_isSharedCheck_6509_ == 0)
{
v___x_6504_ = v_mtime_6485_;
v_isShared_6505_ = v_isSharedCheck_6509_;
goto v_resetjp_6503_;
}
else
{
lean_dec(v_mtime_6485_);
v___x_6504_ = lean_box(0);
v_isShared_6505_ = v_isSharedCheck_6509_;
goto v_resetjp_6503_;
}
v_resetjp_6503_:
{
lean_object* v___x_6507_; 
if (v_isShared_6505_ == 0)
{
lean_ctor_set_tag(v___x_6504_, 3);
v___x_6507_ = v___x_6504_;
goto v_reusejp_6506_;
}
else
{
lean_object* v_reuseFailAlloc_6508_; 
v_reuseFailAlloc_6508_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6508_, 0, v_value_6502_);
v___x_6507_ = v_reuseFailAlloc_6508_;
goto v_reusejp_6506_;
}
v_reusejp_6506_:
{
v___y_6490_ = v___y_6500_;
v___y_6491_ = v___y_6501_;
v___y_6492_ = v___x_6507_;
goto v___jp_6489_;
}
}
}
else
{
lean_object* v_value_6510_; 
v_value_6510_ = lean_ctor_get(v_mtime_6485_, 0);
lean_inc(v_value_6510_);
lean_dec_ref_known(v_mtime_6485_, 1);
v___y_6490_ = v___y_6500_;
v___y_6491_ = v___y_6501_;
v___y_6492_ = v_value_6510_;
goto v___jp_6489_;
}
}
v___jp_6511_:
{
if (lean_obj_tag(v_atime_6484_) == 0)
{
double v_value_6513_; lean_object* v___x_6515_; uint8_t v_isShared_6516_; uint8_t v_isSharedCheck_6520_; 
v_value_6513_ = lean_ctor_get_float(v_atime_6484_, 0);
v_isSharedCheck_6520_ = !lean_is_exclusive(v_atime_6484_);
if (v_isSharedCheck_6520_ == 0)
{
v___x_6515_ = v_atime_6484_;
v_isShared_6516_ = v_isSharedCheck_6520_;
goto v_resetjp_6514_;
}
else
{
lean_dec(v_atime_6484_);
v___x_6515_ = lean_box(0);
v_isShared_6516_ = v_isSharedCheck_6520_;
goto v_resetjp_6514_;
}
v_resetjp_6514_:
{
lean_object* v___x_6518_; 
if (v_isShared_6516_ == 0)
{
lean_ctor_set_tag(v___x_6515_, 3);
v___x_6518_ = v___x_6515_;
goto v_reusejp_6517_;
}
else
{
lean_object* v_reuseFailAlloc_6519_; 
v_reuseFailAlloc_6519_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6519_, 0, v_value_6513_);
v___x_6518_ = v_reuseFailAlloc_6519_;
goto v_reusejp_6517_;
}
v_reusejp_6517_:
{
v___y_6500_ = v___y_6512_;
v___y_6501_ = v___x_6518_;
goto v___jp_6499_;
}
}
}
else
{
lean_object* v_value_6521_; 
v_value_6521_ = lean_ctor_get(v_atime_6484_, 0);
lean_inc(v_value_6521_);
lean_dec_ref_known(v_atime_6484_, 1);
v___y_6500_ = v___y_6512_;
v___y_6501_ = v_value_6521_;
goto v___jp_6499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime___boxed(lean_object* v_path_6533_, lean_object* v_atime_6534_, lean_object* v_mtime_6535_, lean_object* v_a_6536_){
_start:
{
lean_object* v_res_6537_; 
v_res_6537_ = l_Lasm_JS_Deno_utime(v_path_6533_, v_atime_6534_, v_mtime_6535_);
return v_res_6537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask(lean_object* v_mask_6546_){
_start:
{
uint8_t v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; lean_object* v___x_6552_; lean_object* v___x_6553_; lean_object* v___x_6554_; lean_object* v___x_6555_; 
v___x_6548_ = 0;
v___x_6549_ = lean_unsigned_to_nat(1u);
v___x_6550_ = ((lean_object*)(l_Lasm_JS_Deno_umask___closed__2));
v___x_6551_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mask_6546_);
v___x_6552_ = lean_mk_empty_array_with_capacity(v___x_6549_);
v___x_6553_ = lean_array_push(v___x_6552_, v___x_6551_);
v___x_6554_ = l_Lasm_JS_Web_Support_args(v___x_6553_);
v___x_6555_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v___x_6550_, v___x_6554_, v___x_6548_);
return v___x_6555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask___boxed(lean_object* v_mask_6556_, lean_object* v_a_6557_){
_start:
{
lean_object* v_res_6558_; 
v_res_6558_ = l_Lasm_JS_Deno_umask(v_mask_6556_);
lean_dec(v_mask_6556_);
return v_res_6558_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Runtime(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Io(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Deno_Fs(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Io(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Deno_instInhabitedFsEventKind_default = _init_l_Lasm_JS_Deno_instInhabitedFsEventKind_default();
l_Lasm_JS_Deno_instInhabitedFsEventKind = _init_l_Lasm_JS_Deno_instInhabitedFsEventKind();
l_Lasm_JS_Deno_instInhabitedFsEventFlag_default = _init_l_Lasm_JS_Deno_instInhabitedFsEventFlag_default();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedFsEventFlag_default);
l_Lasm_JS_Deno_instInhabitedFsEventFlag = _init_l_Lasm_JS_Deno_instInhabitedFsEventFlag();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedFsEventFlag);
l_Lasm_JS_Deno_instInhabitedSymlinkOptionsType_default = _init_l_Lasm_JS_Deno_instInhabitedSymlinkOptionsType_default();
l_Lasm_JS_Deno_instInhabitedSymlinkOptionsType = _init_l_Lasm_JS_Deno_instInhabitedSymlinkOptionsType();
l_Lasm_JS_Deno_instFromJSFileInfo = _init_l_Lasm_JS_Deno_instFromJSFileInfo();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSFileInfo);
l_Lasm_JS_Deno_instFromJSDirEntry = _init_l_Lasm_JS_Deno_instFromJSDirEntry();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSDirEntry);
l_Lasm_JS_Deno_instFromJSFsEvent = _init_l_Lasm_JS_Deno_instFromJSFsEvent();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSFsEvent);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
