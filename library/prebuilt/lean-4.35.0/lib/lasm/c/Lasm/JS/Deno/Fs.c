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
lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2768_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utime___closed__0));
v___x_2769_ = lean_unsigned_to_nat(2u);
v___x_2770_ = lean_mk_empty_array_with_capacity(v___x_2769_);
v___x_2771_ = lean_array_push(v___x_2770_, v_atime_2765_);
v___x_2772_ = lean_array_push(v___x_2771_, v_mtime_2766_);
v___x_2773_ = l_Lasm_JS_Web_Support_args(v___x_2772_);
v___x_2774_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2764_, v___x_2768_, v___x_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime___boxed(lean_object* v_self_2775_, lean_object* v_atime_2776_, lean_object* v_mtime_2777_, lean_object* v_a_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lasm_JS_Deno_FsFile_utime(v_self_2775_, v_atime_2776_, v_mtime_2777_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync(lean_object* v_self_2781_, lean_object* v_atime_2782_, lean_object* v_mtime_2783_){
_start:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2785_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utimeSync___closed__0));
v___x_2786_ = lean_unsigned_to_nat(2u);
v___x_2787_ = lean_mk_empty_array_with_capacity(v___x_2786_);
v___x_2788_ = lean_array_push(v___x_2787_, v_atime_2782_);
v___x_2789_ = lean_array_push(v___x_2788_, v_mtime_2783_);
v___x_2790_ = l_Lasm_JS_Web_Support_args(v___x_2789_);
v___x_2791_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2781_, v___x_2785_, v___x_2790_);
return v___x_2791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync___boxed(lean_object* v_self_2792_, lean_object* v_atime_2793_, lean_object* v_mtime_2794_, lean_object* v_a_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Lasm_JS_Deno_FsFile_utimeSync(v_self_2792_, v_atime_2793_, v_mtime_2794_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal(lean_object* v_self_2798_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2800_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_isTerminal___closed__0));
v___x_2801_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2802_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2798_, v___x_2800_, v___x_2801_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal___boxed(lean_object* v_self_2803_, lean_object* v_a_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l_Lasm_JS_Deno_FsFile_isTerminal(v_self_2803_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw(lean_object* v_self_2807_, uint8_t v_mode_2808_, lean_object* v_options_2809_){
_start:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___x_2811_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_setRaw___closed__0));
v___x_2812_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2812_, 0, v_mode_2808_);
v___x_2813_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Stdin_setRaw_spec__0(v_options_2809_);
v___x_2814_ = lean_unsigned_to_nat(2u);
v___x_2815_ = lean_mk_empty_array_with_capacity(v___x_2814_);
v___x_2816_ = lean_array_push(v___x_2815_, v___x_2812_);
v___x_2817_ = lean_array_push(v___x_2816_, v___x_2813_);
v___x_2818_ = l_Lasm_JS_Web_Support_args(v___x_2817_);
v___x_2819_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2807_, v___x_2811_, v___x_2818_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw___boxed(lean_object* v_self_2820_, lean_object* v_mode_2821_, lean_object* v_options_2822_, lean_object* v_a_2823_){
_start:
{
uint8_t v_mode_boxed_2824_; lean_object* v_res_2825_; 
v_mode_boxed_2824_ = lean_unbox(v_mode_2821_);
v_res_2825_ = l_Lasm_JS_Deno_FsFile_setRaw(v_self_2820_, v_mode_boxed_2824_, v_options_2822_);
lean_dec(v_options_2822_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock(lean_object* v_self_2827_, lean_object* v_exclusive_2828_){
_start:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2830_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lock___closed__0));
v___x_2831_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2828_);
v___x_2832_ = lean_unsigned_to_nat(1u);
v___x_2833_ = lean_mk_empty_array_with_capacity(v___x_2832_);
v___x_2834_ = lean_array_push(v___x_2833_, v___x_2831_);
v___x_2835_ = l_Lasm_JS_Web_Support_args(v___x_2834_);
v___x_2836_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2827_, v___x_2830_, v___x_2835_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock___boxed(lean_object* v_self_2837_, lean_object* v_exclusive_2838_, lean_object* v_a_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l_Lasm_JS_Deno_FsFile_lock(v_self_2837_, v_exclusive_2838_);
lean_dec(v_exclusive_2838_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync(lean_object* v_self_2842_, lean_object* v_exclusive_2843_){
_start:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2845_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lockSync___closed__0));
v___x_2846_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2843_);
v___x_2847_ = lean_unsigned_to_nat(1u);
v___x_2848_ = lean_mk_empty_array_with_capacity(v___x_2847_);
v___x_2849_ = lean_array_push(v___x_2848_, v___x_2846_);
v___x_2850_ = l_Lasm_JS_Web_Support_args(v___x_2849_);
v___x_2851_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2842_, v___x_2845_, v___x_2850_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync___boxed(lean_object* v_self_2852_, lean_object* v_exclusive_2853_, lean_object* v_a_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lasm_JS_Deno_FsFile_lockSync(v_self_2852_, v_exclusive_2853_);
lean_dec(v_exclusive_2853_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(lean_object* v_context_2856_, lean_object* v_x_2857_){
_start:
{
lean_object* v_val_2860_; 
if (lean_obj_tag(v_x_2857_) == 0)
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2870_; 
v_a_2862_ = lean_ctor_get(v_x_2857_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v_x_2857_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2864_ = v_x_2857_;
v_isShared_2865_ = v_isSharedCheck_2870_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v_x_2857_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2870_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2867_; 
if (v_isShared_2865_ == 0)
{
v___x_2867_ = v___x_2864_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_a_2862_);
v___x_2867_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
lean_object* v___x_2868_; 
v___x_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
return v___x_2868_;
}
}
}
else
{
lean_object* v_a_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2884_; 
v_a_2871_ = lean_ctor_get(v_x_2857_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v_x_2857_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2873_ = v_x_2857_;
v_isShared_2874_ = v_isSharedCheck_2884_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_a_2871_);
lean_dec(v_x_2857_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2884_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_2856_, v_a_2871_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v_a_2876_; lean_object* v___x_2878_; 
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2876_);
lean_dec_ref_known(v___x_2875_, 1);
if (v_isShared_2874_ == 0)
{
lean_ctor_set(v___x_2873_, 0, v_a_2876_);
v___x_2878_ = v___x_2873_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2876_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
v_val_2860_ = v___x_2878_;
goto v___jp_2859_;
}
}
else
{
lean_object* v_a_2880_; lean_object* v___x_2882_; 
v_a_2880_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___x_2875_, 1);
if (v_isShared_2874_ == 0)
{
lean_ctor_set_tag(v___x_2873_, 0);
lean_ctor_set(v___x_2873_, 0, v_a_2880_);
v___x_2882_ = v___x_2873_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2880_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
v_val_2860_ = v___x_2882_;
goto v___jp_2859_;
}
}
}
}
v___jp_2859_:
{
lean_object* v___x_2861_; 
v___x_2861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2861_, 0, v_val_2860_);
return v___x_2861_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed(lean_object* v_context_2885_, lean_object* v_x_2886_, lean_object* v___y_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(v_context_2885_, v_x_2886_);
lean_dec_ref(v_context_2885_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_2889_, uint32_t v_op_2890_, uint64_t v_flags_2891_, lean_object* v_payload_2892_, lean_object* v___f_2893_, lean_object* v___f_2894_, lean_object* v___f_2895_, lean_object* v_x_2896_){
_start:
{
if (lean_obj_tag(v_x_2896_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2906_; 
lean_dec_ref(v___f_2895_);
lean_dec_ref(v___f_2894_);
lean_dec_ref(v___f_2893_);
lean_dec(v_payload_2892_);
v_a_2898_ = lean_ctor_get(v_x_2896_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v_x_2896_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2900_ = v_x_2896_;
v_isShared_2901_ = v_isSharedCheck_2906_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v_x_2896_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2906_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2903_; 
if (v_isShared_2901_ == 0)
{
v___x_2903_ = v___x_2900_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_a_2898_);
v___x_2903_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
lean_object* v___x_2904_; 
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
return v___x_2904_;
}
}
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2953_; 
v_a_2907_ = lean_ctor_get(v_x_2896_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v_x_2896_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2909_ = v_x_2896_;
v_isShared_2910_ = v_isSharedCheck_2953_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v_x_2896_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2953_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2911_; lean_object* v___x_2912_; uint8_t v___x_2913_; 
v___x_2911_ = lean_string_utf8_byte_size(v_failurePrefix_2889_);
v___x_2912_ = lean_unsigned_to_nat(0u);
v___x_2913_ = lean_nat_dec_eq(v___x_2911_, v___x_2912_);
if (v___x_2913_ == 0)
{
lean_object* v___f_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___f_2918_; lean_object* v_val_2920_; lean_object* v___x_2925_; 
lean_dec_ref(v___f_2895_);
lean_inc(v_a_2907_);
v___f_2914_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2914_, 0, v_a_2907_);
v___x_2915_ = lean_box(v___x_2913_);
v___x_2916_ = lean_box_uint32(v_op_2890_);
v___x_2917_ = lean_box_uint64(v_flags_2891_);
lean_inc(v_payload_2892_);
v___f_2918_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2918_, 0, v___x_2912_);
lean_closure_set(v___f_2918_, 1, v___x_2915_);
lean_closure_set(v___f_2918_, 2, v___f_2914_);
lean_closure_set(v___f_2918_, 3, v_a_2907_);
lean_closure_set(v___f_2918_, 4, v___x_2916_);
lean_closure_set(v___f_2918_, 5, v___x_2917_);
lean_closure_set(v___f_2918_, 6, v_payload_2892_);
v___x_2925_ = l_Lasm_JS_Wire_encodeIO(v_payload_2892_);
lean_dec(v_payload_2892_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v_a_2926_; lean_object* v___x_2928_; 
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2926_);
lean_dec_ref_known(v___x_2925_, 1);
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 0, v_a_2926_);
v___x_2928_ = v___x_2909_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_a_2926_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
v_val_2920_ = v___x_2928_;
goto v___jp_2919_;
}
}
else
{
lean_object* v_a_2930_; lean_object* v___x_2932_; 
v_a_2930_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2930_);
lean_dec_ref_known(v___x_2925_, 1);
if (v_isShared_2910_ == 0)
{
lean_ctor_set_tag(v___x_2909_, 0);
lean_ctor_set(v___x_2909_, 0, v_a_2930_);
v___x_2932_ = v___x_2909_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2930_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
v_val_2920_ = v___x_2932_;
goto v___jp_2919_;
}
}
v___jp_2919_:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2921_, 0, v_val_2920_);
v___x_2922_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2912_, v___x_2913_, v___x_2921_, v___f_2918_);
v___x_2923_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2912_, v___x_2913_, v___x_2922_, v___f_2893_);
v___x_2924_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2912_, v___x_2913_, v___x_2923_, v___f_2894_);
return v___x_2924_;
}
}
else
{
lean_object* v___f_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___f_2937_; uint8_t v___x_2938_; lean_object* v_val_2940_; lean_object* v___x_2944_; 
lean_dec_ref(v___f_2894_);
lean_dec_ref(v___f_2893_);
lean_inc(v_a_2907_);
v___f_2934_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2934_, 0, v_a_2907_);
v___x_2935_ = lean_box_uint32(v_op_2890_);
v___x_2936_ = lean_box_uint64(v_flags_2891_);
lean_inc(v_payload_2892_);
v___f_2937_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2937_, 0, v___f_2934_);
lean_closure_set(v___f_2937_, 1, v_a_2907_);
lean_closure_set(v___f_2937_, 2, v___x_2935_);
lean_closure_set(v___f_2937_, 3, v___x_2936_);
lean_closure_set(v___f_2937_, 4, v_payload_2892_);
v___x_2938_ = 0;
v___x_2944_ = l_Lasm_JS_Wire_encodeIO(v_payload_2892_);
lean_dec(v_payload_2892_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_object* v_a_2945_; lean_object* v___x_2947_; 
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
lean_inc(v_a_2945_);
lean_dec_ref_known(v___x_2944_, 1);
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 0, v_a_2945_);
v___x_2947_ = v___x_2909_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_a_2945_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
v_val_2940_ = v___x_2947_;
goto v___jp_2939_;
}
}
else
{
lean_object* v_a_2949_; lean_object* v___x_2951_; 
v_a_2949_ = lean_ctor_get(v___x_2944_, 0);
lean_inc(v_a_2949_);
lean_dec_ref_known(v___x_2944_, 1);
if (v_isShared_2910_ == 0)
{
lean_ctor_set_tag(v___x_2909_, 0);
lean_ctor_set(v___x_2909_, 0, v_a_2949_);
v___x_2951_ = v___x_2909_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2949_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
v_val_2940_ = v___x_2951_;
goto v___jp_2939_;
}
}
v___jp_2939_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_val_2940_);
v___x_2942_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2912_, v___x_2938_, v___x_2941_, v___f_2937_);
v___x_2943_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2912_, v___x_2938_, v___x_2942_, v___f_2895_);
return v___x_2943_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_2954_, lean_object* v_op_2955_, lean_object* v_flags_2956_, lean_object* v_payload_2957_, lean_object* v___f_2958_, lean_object* v___f_2959_, lean_object* v___f_2960_, lean_object* v_x_2961_, lean_object* v___y_2962_){
_start:
{
uint32_t v_op_boxed_2963_; uint64_t v_flags_boxed_2964_; lean_object* v_res_2965_; 
v_op_boxed_2963_ = lean_unbox_uint32(v_op_2955_);
lean_dec(v_op_2955_);
v_flags_boxed_2964_ = lean_unbox_uint64(v_flags_2956_);
lean_dec_ref(v_flags_2956_);
v_res_2965_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(v_failurePrefix_2954_, v_op_boxed_2963_, v_flags_boxed_2964_, v_payload_2957_, v___f_2958_, v___f_2959_, v___f_2960_, v_x_2961_);
lean_dec_ref(v_failurePrefix_2954_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(lean_object* v___f_2966_, lean_object* v_x_2967_){
_start:
{
if (lean_obj_tag(v_x_2967_) == 0)
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2977_; 
lean_dec_ref(v___f_2966_);
v_a_2969_ = lean_ctor_get(v_x_2967_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v_x_2967_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2971_ = v_x_2967_;
v_isShared_2972_ = v_isSharedCheck_2977_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v_x_2967_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2977_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
lean_object* v___x_2975_; 
v___x_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
return v___x_2975_;
}
}
}
else
{
lean_object* v_a_2978_; lean_object* v___x_2979_; 
v_a_2978_ = lean_ctor_get(v_x_2967_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v_x_2967_, 1);
v___x_2979_ = lean_apply_2(v___f_2966_, v_a_2978_, lean_box(0));
return v___x_2979_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed(lean_object* v___f_2980_, lean_object* v_x_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(v___f_2980_, v_x_2981_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(lean_object* v___f_2984_, lean_object* v_bytes_2985_){
_start:
{
lean_object* v___x_2987_; uint8_t v___x_2988_; lean_object* v_val_2990_; lean_object* v___x_2993_; 
v___x_2987_ = lean_unsigned_to_nat(0u);
v___x_2988_ = 0;
v___x_2993_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2985_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3001_; 
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2996_ = v___x_2993_;
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2993_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2999_; 
if (v_isShared_2997_ == 0)
{
lean_ctor_set_tag(v___x_2996_, 1);
v___x_2999_ = v___x_2996_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v_a_2994_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
v_val_2990_ = v___x_2999_;
goto v___jp_2989_;
}
}
}
else
{
lean_object* v_a_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3009_; 
v_a_3002_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3004_ = v___x_2993_;
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_a_3002_);
lean_dec(v___x_2993_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3007_; 
if (v_isShared_3005_ == 0)
{
lean_ctor_set_tag(v___x_3004_, 0);
v___x_3007_ = v___x_3004_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_a_3002_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
v_val_2990_ = v___x_3007_;
goto v___jp_2989_;
}
}
}
v___jp_2989_:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2991_, 0, v_val_2990_);
v___x_2992_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2987_, v___x_2988_, v___x_2991_, v___f_2984_);
return v___x_2992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed(lean_object* v___f_3010_, lean_object* v_bytes_3011_, lean_object* v___y_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(v___f_3010_, v_bytes_3011_);
lean_dec_ref(v_bytes_3011_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(lean_object* v___f_3014_, lean_object* v_x_3015_){
_start:
{
if (lean_obj_tag(v_x_3015_) == 0)
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3025_; 
lean_dec_ref(v___f_3014_);
v_a_3017_ = lean_ctor_get(v_x_3015_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v_x_3015_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_3019_ = v_x_3015_;
v_isShared_3020_ = v_isSharedCheck_3025_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v_x_3015_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3025_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_a_3017_);
v___x_3022_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
lean_object* v___x_3023_; 
v___x_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
return v___x_3023_;
}
}
}
else
{
lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3037_; 
v_isSharedCheck_3037_ = !lean_is_exclusive(v_x_3015_);
if (v_isSharedCheck_3037_ == 0)
{
lean_object* v_unused_3038_; 
v_unused_3038_ = lean_ctor_get(v_x_3015_, 0);
lean_dec(v_unused_3038_);
v___x_3027_ = v_x_3015_;
v_isShared_3028_ = v_isSharedCheck_3037_;
goto v_resetjp_3026_;
}
else
{
lean_dec(v_x_3015_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3037_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3029_; uint8_t v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3033_; 
v___x_3029_ = lean_unsigned_to_nat(0u);
v___x_3030_ = 0;
v___x_3031_ = lean_io_promise_new();
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 0, v___x_3031_);
v___x_3033_ = v___x_3027_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v___x_3031_);
v___x_3033_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3033_);
v___x_3035_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3029_, v___x_3030_, v___x_3034_, v___f_3014_);
return v___x_3035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed(lean_object* v___f_3039_, lean_object* v_x_3040_, lean_object* v___y_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(v___f_3039_, v_x_3040_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(lean_object* v_context_3043_, uint32_t v_op_3044_, uint64_t v_flags_3045_, lean_object* v_payload_3046_, lean_object* v_failurePrefix_3047_){
_start:
{
lean_object* v___f_3049_; lean_object* v___f_3050_; lean_object* v___f_3051_; lean_object* v___f_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___f_3055_; lean_object* v___f_3056_; lean_object* v___x_3057_; uint8_t v___x_3058_; lean_object* v_val_3060_; lean_object* v___x_3063_; 
v___f_3049_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3049_, 0, v_context_3043_);
v___f_3050_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3050_, 0, v___f_3049_);
v___f_3051_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3051_, 0, v___f_3050_);
lean_inc_ref(v_failurePrefix_3047_);
v___f_3052_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3052_, 0, v_failurePrefix_3047_);
v___x_3053_ = lean_box_uint32(v_op_3044_);
v___x_3054_ = lean_box_uint64(v_flags_3045_);
lean_inc_ref(v___f_3051_);
v___f_3055_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3055_, 0, v_failurePrefix_3047_);
lean_closure_set(v___f_3055_, 1, v___x_3053_);
lean_closure_set(v___f_3055_, 2, v___x_3054_);
lean_closure_set(v___f_3055_, 3, v_payload_3046_);
lean_closure_set(v___f_3055_, 4, v___f_3052_);
lean_closure_set(v___f_3055_, 5, v___f_3051_);
lean_closure_set(v___f_3055_, 6, v___f_3051_);
v___f_3056_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3056_, 0, v___f_3055_);
v___x_3057_ = lean_unsigned_to_nat(0u);
v___x_3058_ = 0;
v___x_3063_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3071_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3066_ = v___x_3063_;
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_a_3064_);
lean_dec(v___x_3063_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3069_; 
if (v_isShared_3067_ == 0)
{
lean_ctor_set_tag(v___x_3066_, 1);
v___x_3069_ = v___x_3066_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3064_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
v_val_3060_ = v___x_3069_;
goto v___jp_3059_;
}
}
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
v_a_3072_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_3063_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_3063_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
lean_ctor_set_tag(v___x_3074_, 0);
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
v_val_3060_ = v___x_3077_;
goto v___jp_3059_;
}
}
}
v___jp_3059_:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3061_, 0, v_val_3060_);
v___x_3062_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3057_, v___x_3058_, v___x_3061_, v___f_3056_);
return v___x_3062_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___boxed(lean_object* v_context_3080_, lean_object* v_op_3081_, lean_object* v_flags_3082_, lean_object* v_payload_3083_, lean_object* v_failurePrefix_3084_, lean_object* v_a_3085_){
_start:
{
uint32_t v_op_boxed_3086_; uint64_t v_flags_boxed_3087_; lean_object* v_res_3088_; 
v_op_boxed_3086_ = lean_unbox_uint32(v_op_3081_);
lean_dec(v_op_3081_);
v_flags_boxed_3087_ = lean_unbox_uint64(v_flags_3082_);
lean_dec_ref(v_flags_3082_);
v_res_3088_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v_context_3080_, v_op_boxed_3086_, v_flags_boxed_3087_, v_payload_3083_, v_failurePrefix_3084_);
return v_res_3088_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3089_; uint8_t v___x_3090_; uint64_t v___x_3091_; 
v___x_3089_ = 8ULL;
v___x_3090_ = 0;
v___x_3091_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v___x_3090_, v___x_3089_);
return v___x_3091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(lean_object* v_o_3092_, lean_object* v_name_3093_, lean_object* v_args_3094_){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; uint32_t v___x_3101_; uint64_t v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3096_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3097_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3097_, 0, v_o_3092_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
lean_inc_ref(v_name_3093_);
v___x_3098_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3098_, 0, v_name_3093_);
v___x_3099_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_3100_ = lean_string_append(v___x_3099_, v_name_3093_);
lean_dec_ref(v_name_3093_);
v___x_3101_ = 205;
v___x_3102_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0);
v___x_3103_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3103_, 0, v_args_3094_);
v___x_3104_ = lean_unsigned_to_nat(3u);
v___x_3105_ = lean_mk_empty_array_with_capacity(v___x_3104_);
v___x_3106_ = lean_array_push(v___x_3105_, v___x_3097_);
v___x_3107_ = lean_array_push(v___x_3106_, v___x_3098_);
v___x_3108_ = lean_array_push(v___x_3107_, v___x_3103_);
v___x_3109_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
v___x_3110_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v___x_3100_, v___x_3101_, v___x_3102_, v___x_3109_, v___x_3096_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___boxed(lean_object* v_o_3111_, lean_object* v_name_3112_, lean_object* v_args_3113_, lean_object* v___y_3114_){
_start:
{
lean_object* v_res_3115_; 
v_res_3115_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_o_3111_, v_name_3112_, v_args_3113_);
return v_res_3115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock(lean_object* v_self_3117_, lean_object* v_exclusive_3118_){
_start:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3120_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLock___closed__0));
v___x_3121_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3118_);
v___x_3122_ = lean_unsigned_to_nat(1u);
v___x_3123_ = lean_mk_empty_array_with_capacity(v___x_3122_);
v___x_3124_ = lean_array_push(v___x_3123_, v___x_3121_);
v___x_3125_ = l_Lasm_JS_Web_Support_args(v___x_3124_);
v___x_3126_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_self_3117_, v___x_3120_, v___x_3125_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock___boxed(lean_object* v_self_3127_, lean_object* v_exclusive_3128_, lean_object* v_a_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l_Lasm_JS_Deno_FsFile_tryLock(v_self_3127_, v_exclusive_3128_);
lean_dec(v_exclusive_3128_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync(lean_object* v_self_3132_, lean_object* v_exclusive_3133_){
_start:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3135_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLockSync___closed__0));
v___x_3136_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3133_);
v___x_3137_ = lean_unsigned_to_nat(1u);
v___x_3138_ = lean_mk_empty_array_with_capacity(v___x_3137_);
v___x_3139_ = lean_array_push(v___x_3138_, v___x_3136_);
v___x_3140_ = l_Lasm_JS_Web_Support_args(v___x_3139_);
v___x_3141_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_3132_, v___x_3135_, v___x_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync___boxed(lean_object* v_self_3142_, lean_object* v_exclusive_3143_, lean_object* v_a_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Lasm_JS_Deno_FsFile_tryLockSync(v_self_3142_, v_exclusive_3143_);
lean_dec(v_exclusive_3143_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock(lean_object* v_self_3147_){
_start:
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3149_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlock___closed__0));
v___x_3150_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3151_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3147_, v___x_3149_, v___x_3150_);
return v___x_3151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock___boxed(lean_object* v_self_3152_, lean_object* v_a_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l_Lasm_JS_Deno_FsFile_unlock(v_self_3152_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync(lean_object* v_self_3156_){
_start:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlockSync___closed__0));
v___x_3159_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3160_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3156_, v___x_3158_, v___x_3159_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync___boxed(lean_object* v_self_3161_, lean_object* v_a_3162_){
_start:
{
lean_object* v_res_3163_; 
v_res_3163_ = l_Lasm_JS_Deno_FsFile_unlockSync(v_self_3161_);
return v_res_3163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close(lean_object* v_self_3165_){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3167_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3168_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3169_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3165_, v___x_3167_, v___x_3168_);
return v___x_3169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close___boxed(lean_object* v_self_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l_Lasm_JS_Deno_FsFile_close(v_self_3170_);
return v_res_3172_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3173_; uint8_t v___x_3174_; uint64_t v___x_3175_; 
v___x_3173_ = 0ULL;
v___x_3174_ = 0;
v___x_3175_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_3174_, v___x_3173_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(lean_object* v_f_3177_, lean_object* v_args_3178_, lean_object* v_this_3179_){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; uint64_t v___x_3183_; lean_object* v___x_3184_; 
v___x_3181_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3182_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3182_, 0, v_f_3177_);
lean_ctor_set(v___x_3182_, 1, v___x_3181_);
v___x_3183_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0);
v___x_3184_ = l_Lasm_JS_Value_invokeRaw(v___x_3182_, v_this_3179_, v_args_3178_, v___x_3183_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v___x_3184_, 1);
v___x_3186_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__1));
v___x_3187_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3186_, v_a_3185_);
lean_dec(v_a_3185_);
return v___x_3187_;
}
else
{
lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3195_; 
v_a_3188_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3190_ = v___x_3184_;
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___x_3184_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3193_; 
if (v_isShared_3191_ == 0)
{
v___x_3193_ = v___x_3190_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_a_3188_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___boxed(lean_object* v_f_3196_, lean_object* v_args_3197_, lean_object* v_this_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_f_3196_, v_args_3197_, v_this_3198_);
return v_res_3200_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3201_; uint64_t v___x_3202_; 
v___x_3201_ = 1;
v___x_3202_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3201_);
return v___x_3202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(lean_object* v_o_3204_, lean_object* v_key_3205_){
_start:
{
lean_object* v___x_3207_; lean_object* v_k_3208_; lean_object* v___x_3209_; 
v___x_3207_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_k_3208_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_3208_, 0, v_key_3205_);
lean_ctor_set(v_k_3208_, 1, v___x_3207_);
v___x_3209_ = l_Lasm_JS_Wire_encodeIO(v_k_3208_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; uint32_t v___x_3211_; uint32_t v___x_3212_; uint64_t v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v_a_3210_ = lean_ctor_get(v___x_3209_, 0);
lean_inc(v_a_3210_);
lean_dec_ref_known(v___x_3209_, 1);
v___x_3211_ = 203;
v___x_3212_ = lasm_js_value_handle(v_o_3204_);
v___x_3213_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
v___x_3214_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3214_, 0, v_o_3204_);
lean_ctor_set(v___x_3214_, 1, v___x_3207_);
v___x_3215_ = lean_unsigned_to_nat(2u);
v___x_3216_ = lean_mk_empty_array_with_capacity(v___x_3215_);
lean_inc_ref(v_k_3208_);
v___x_3217_ = lean_array_push(v___x_3216_, v_k_3208_);
v___x_3218_ = lean_array_push(v___x_3217_, v___x_3214_);
v___x_3219_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3218_);
v___x_3220_ = lasm_js_call(v___x_3211_, v___x_3212_, v___x_3213_, v_a_3210_, v___x_3219_);
lean_dec_ref_known(v___x_3219_, 1);
lean_dec(v_a_3210_);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v_a_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v_a_3221_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_a_3221_);
lean_dec_ref_known(v___x_3220_, 1);
v___x_3222_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3223_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3208_);
v___x_3224_ = lean_string_append(v___x_3222_, v___x_3223_);
lean_dec_ref(v___x_3223_);
v___x_3225_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3224_, v_a_3221_);
lean_dec(v_a_3221_);
lean_dec_ref(v___x_3224_);
return v___x_3225_;
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3233_; 
lean_dec_ref_known(v_k_3208_, 2);
v_a_3226_ = lean_ctor_get(v___x_3220_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3220_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3228_ = v___x_3220_;
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___x_3220_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3231_; 
if (v_isShared_3229_ == 0)
{
v___x_3231_ = v___x_3228_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3226_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
lean_dec_ref_known(v_k_3208_, 2);
lean_dec(v_o_3204_);
v_a_3234_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3209_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3209_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___boxed(lean_object* v_o_3242_, lean_object* v_key_3243_, lean_object* v_a_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_o_3242_, v_key_3243_);
return v_res_3245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(lean_object* v_self_3248_){
_start:
{
lean_object* v___x_3250_; 
v___x_3250_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_object* v_a_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc(v_a_3251_);
lean_dec_ref_known(v___x_3250_, 1);
v___x_3252_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3253_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3251_, v___x_3252_);
if (lean_obj_tag(v___x_3253_) == 0)
{
lean_object* v_a_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v_a_3254_ = lean_ctor_get(v___x_3253_, 0);
lean_inc(v_a_3254_);
lean_dec_ref_known(v___x_3253_, 1);
v___x_3255_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3256_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3254_, v___x_3255_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3258_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
lean_inc(v_a_3257_);
lean_dec_ref_known(v___x_3256_, 1);
lean_inc(v_self_3248_);
v___x_3258_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3248_, v_a_3257_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3259_);
lean_dec_ref_known(v___x_3258_, 1);
v___x_3260_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3261_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3262_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3262_, 0, v_self_3248_);
lean_ctor_set(v___x_3262_, 1, v___x_3261_);
v___x_3263_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3259_, v___x_3260_, v___x_3262_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3271_; 
v_a_3264_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3266_ = v___x_3263_;
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3263_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
if (v_isShared_3267_ == 0)
{
v___x_3269_ = v___x_3266_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3264_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
}
}
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3279_; 
v_a_3272_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3274_ = v___x_3263_;
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3263_);
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
lean_dec(v_self_3248_);
v_a_3280_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3258_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3258_);
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
else
{
lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3295_; 
lean_dec(v_self_3248_);
v_a_3288_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3290_ = v___x_3256_;
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3256_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3293_; 
if (v_isShared_3291_ == 0)
{
v___x_3293_ = v___x_3290_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_a_3288_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
}
else
{
lean_object* v_a_3296_; lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3303_; 
lean_dec(v_self_3248_);
v_a_3296_ = lean_ctor_get(v___x_3253_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3253_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3298_ = v___x_3253_;
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
else
{
lean_inc(v_a_3296_);
lean_dec(v___x_3253_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3301_; 
if (v_isShared_3299_ == 0)
{
v___x_3301_ = v___x_3298_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v_a_3296_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
}
else
{
lean_object* v_a_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3311_; 
lean_dec(v_self_3248_);
v_a_3304_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3306_ = v___x_3250_;
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_a_3304_);
lean_dec(v___x_3250_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v___x_3309_; 
if (v_isShared_3307_ == 0)
{
v___x_3309_ = v___x_3306_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_a_3304_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___boxed(lean_object* v_self_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3312_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(lean_object* v_x_3315_){
_start:
{
if (lean_obj_tag(v_x_3315_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3325_; 
v_a_3317_ = lean_ctor_get(v_x_3315_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v_x_3315_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3319_ = v_x_3315_;
v_isShared_3320_ = v_isSharedCheck_3325_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v_x_3315_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3325_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3322_; 
if (v_isShared_3320_ == 0)
{
v___x_3322_ = v___x_3319_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3317_);
v___x_3322_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
lean_object* v___x_3323_; 
v___x_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
return v___x_3323_;
}
}
}
else
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3335_; 
v_a_3326_ = lean_ctor_get(v_x_3315_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v_x_3315_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3328_ = v_x_3315_;
v_isShared_3329_ = v_isSharedCheck_3335_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v_x_3315_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3335_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3330_; lean_object* v___x_3332_; 
v___x_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3330_, 0, v_a_3326_);
if (v_isShared_3329_ == 0)
{
lean_ctor_set(v___x_3328_, 0, v___x_3330_);
v___x_3332_ = v___x_3328_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v___x_3330_);
v___x_3332_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
lean_object* v___x_3333_; 
v___x_3333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3332_);
return v___x_3333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0___boxed(lean_object* v_x_3336_, lean_object* v___y_3337_){
_start:
{
lean_object* v_res_3338_; 
v_res_3338_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(v_x_3336_);
return v_res_3338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_3339_, lean_object* v_d_3340_){
_start:
{
lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3349_; lean_object* v_received_3350_; lean_object* v___y_3369_; lean_object* v_a_3372_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3396_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0));
lean_inc(v_d_3340_);
v___x_3397_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3340_, v___x_3396_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v_a_3372_ = v_a_3398_;
goto v___jp_3371_;
}
else
{
lean_object* v_a_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v_a_3399_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3399_);
lean_dec_ref_known(v___x_3397_, 1);
v___x_3400_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc(v_d_3340_);
v___x_3401_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3340_, v___x_3400_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; 
lean_dec(v_a_3399_);
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_a_3402_);
lean_dec_ref_known(v___x_3401_, 1);
v_a_3372_ = v_a_3402_;
goto v___jp_3371_;
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v_a_3403_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_a_3403_);
lean_dec_ref_known(v___x_3401_, 1);
v___x_3404_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc(v_d_3340_);
v___x_3405_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3340_, v___x_3404_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_a_3406_; 
lean_dec(v_a_3403_);
lean_dec(v_a_3399_);
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
lean_inc(v_a_3406_);
lean_dec_ref_known(v___x_3405_, 1);
v_a_3372_ = v_a_3406_;
goto v___jp_3371_;
}
else
{
lean_object* v_a_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v_a_3407_ = lean_ctor_get(v___x_3405_, 0);
lean_inc(v_a_3407_);
lean_dec_ref_known(v___x_3405_, 1);
v___x_3408_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
lean_inc(v_d_3340_);
v___x_3409_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3340_, v___x_3408_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v_a_3410_; 
lean_dec(v_a_3407_);
lean_dec(v_a_3403_);
lean_dec(v_a_3399_);
v_a_3410_ = lean_ctor_get(v___x_3409_, 0);
lean_inc(v_a_3410_);
lean_dec_ref_known(v___x_3409_, 1);
v_a_3372_ = v_a_3410_;
goto v___jp_3371_;
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3422_; 
lean_dec(v_d_3340_);
v_a_3411_ = lean_ctor_get(v___x_3409_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3413_ = v___x_3409_;
v_isShared_3414_ = v_isSharedCheck_3422_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3409_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3422_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3415_; uint8_t v___x_3416_; uint8_t v___x_3417_; uint8_t v___x_3418_; lean_object* v___x_3420_; 
v___x_3415_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3415_, 0, v_a_3399_);
v___x_3416_ = lean_unbox(v_a_3403_);
lean_dec(v_a_3403_);
lean_ctor_set_uint8(v___x_3415_, sizeof(void*)*1, v___x_3416_);
v___x_3417_ = lean_unbox(v_a_3407_);
lean_dec(v_a_3407_);
lean_ctor_set_uint8(v___x_3415_, sizeof(void*)*1 + 1, v___x_3417_);
v___x_3418_ = lean_unbox(v_a_3411_);
lean_dec(v_a_3411_);
lean_ctor_set_uint8(v___x_3415_, sizeof(void*)*1 + 2, v___x_3418_);
if (v_isShared_3414_ == 0)
{
lean_ctor_set_tag(v___x_3413_, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3415_);
v___x_3420_ = v___x_3413_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v___x_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
}
}
v___jp_3342_:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3345_ = lean_string_append(v___y_3343_, v___y_3344_);
lean_dec_ref(v___y_3344_);
v___x_3346_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3345_);
v___x_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
return v___x_3347_;
}
v___jp_3348_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; 
v___x_3351_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_3352_ = lean_string_append(v___x_3351_, v_context_3339_);
v___x_3353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_3354_ = lean_string_append(v___x_3352_, v___x_3353_);
v___x_3355_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___closed__1));
v___x_3356_ = lean_string_append(v___x_3354_, v___x_3355_);
v___x_3357_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_3358_ = lean_string_append(v___x_3356_, v___x_3357_);
v___x_3359_ = lean_string_append(v___x_3358_, v_received_3350_);
lean_dec_ref(v_received_3350_);
v___x_3360_ = lean_string_utf8_byte_size(v___y_3349_);
v___x_3361_ = lean_unsigned_to_nat(0u);
v___x_3362_ = lean_nat_dec_eq(v___x_3360_, v___x_3361_);
if (v___x_3362_ == 0)
{
lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3363_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3364_ = lean_string_append(v___x_3363_, v___y_3349_);
lean_dec_ref(v___y_3349_);
v___x_3365_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3366_ = lean_string_append(v___x_3364_, v___x_3365_);
v___y_3343_ = v___x_3359_;
v___y_3344_ = v___x_3366_;
goto v___jp_3342_;
}
else
{
lean_object* v___x_3367_; 
lean_dec_ref(v___y_3349_);
v___x_3367_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_3343_ = v___x_3359_;
v___y_3344_ = v___x_3367_;
goto v___jp_3342_;
}
}
v___jp_3368_:
{
lean_object* v___x_3370_; 
v___x_3370_ = l_Lasm_JS_Data_describe(v_d_3340_);
v___y_3349_ = v___y_3369_;
v_received_3350_ = v___x_3370_;
goto v___jp_3348_;
}
v___jp_3371_:
{
if (lean_obj_tag(v_d_3340_) == 9)
{
lean_object* v_value_3373_; lean_object* v_description_3374_; lean_object* v___x_3375_; uint8_t v___x_3376_; 
v_value_3373_ = lean_ctor_get(v_d_3340_, 0);
v_description_3374_ = lean_ctor_get(v_d_3340_, 1);
v___x_3375_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3376_ = lean_string_dec_eq(v_description_3374_, v___x_3375_);
if (v___x_3376_ == 0)
{
v___y_3369_ = v_a_3372_;
goto v___jp_3368_;
}
else
{
lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3393_; 
lean_inc(v_value_3373_);
v_isSharedCheck_3393_ = !lean_is_exclusive(v_d_3340_);
if (v_isSharedCheck_3393_ == 0)
{
lean_object* v_unused_3394_; lean_object* v_unused_3395_; 
v_unused_3394_ = lean_ctor_get(v_d_3340_, 1);
lean_dec(v_unused_3394_);
v_unused_3395_ = lean_ctor_get(v_d_3340_, 0);
lean_dec(v_unused_3395_);
v___x_3378_ = v_d_3340_;
v_isShared_3379_ = v_isSharedCheck_3393_;
goto v_resetjp_3377_;
}
else
{
lean_dec(v_d_3340_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3393_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
uint32_t v___x_3380_; uint64_t v___x_3381_; lean_object* v___x_3383_; 
v___x_3380_ = 206;
v___x_3381_ = 0ULL;
lean_inc(v_value_3373_);
if (v_isShared_3379_ == 0)
{
lean_ctor_set(v___x_3378_, 1, v___x_3375_);
v___x_3383_ = v___x_3378_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_value_3373_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v___x_3375_);
v___x_3383_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
uint32_t v___x_3384_; lean_object* v___x_3385_; 
v___x_3384_ = lasm_js_value_handle(v_value_3373_);
lean_dec(v_value_3373_);
v___x_3385_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3380_, v___x_3381_, v___x_3383_, v___x_3384_);
lean_dec_ref(v___x_3383_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; uint8_t v___x_3387_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_a_3386_);
lean_dec_ref_known(v___x_3385_, 1);
v___x_3387_ = lean_string_validate_utf8(v_a_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; lean_object* v___x_3389_; 
lean_dec(v_a_3386_);
v___x_3388_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_3389_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3388_);
v___y_3349_ = v_a_3372_;
v_received_3350_ = v___x_3389_;
goto v___jp_3348_;
}
else
{
lean_object* v___x_3390_; 
v___x_3390_ = lean_string_from_utf8_unchecked(v_a_3386_);
v___y_3349_ = v_a_3372_;
v_received_3350_ = v___x_3390_;
goto v___jp_3348_;
}
}
else
{
lean_object* v___x_3391_; 
lean_dec_ref_known(v___x_3385_, 1);
v___x_3391_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_3349_ = v_a_3372_;
v_received_3350_ = v___x_3391_;
goto v___jp_3348_;
}
}
}
}
}
else
{
v___y_3369_ = v_a_3372_;
goto v___jp_3368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3423_, lean_object* v_d_3424_, lean_object* v_a_3425_){
_start:
{
lean_object* v_res_3426_; 
v_res_3426_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3423_, v_d_3424_);
lean_dec_ref(v_context_3423_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(lean_object* v_context_3427_, lean_object* v_bytes_3428_){
_start:
{
lean_object* v___x_3430_; 
v___x_3430_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3428_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3432_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
lean_inc(v_a_3431_);
lean_dec_ref_known(v___x_3430_, 1);
v___x_3432_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3427_, v_a_3431_);
return v___x_3432_;
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
v_a_3433_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3430_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3430_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_3441_, lean_object* v_bytes_3442_, lean_object* v_a_3443_){
_start:
{
lean_object* v_res_3444_; 
v_res_3444_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v_context_3441_, v_bytes_3442_);
lean_dec_ref(v_bytes_3442_);
lean_dec_ref(v_context_3441_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(lean_object* v_o_3445_, lean_object* v_key_3446_){
_start:
{
lean_object* v_k_3448_; lean_object* v___x_3449_; 
v_k_3448_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3448_, 0, v_key_3446_);
v___x_3449_ = l_Lasm_JS_Wire_encodeIO(v_k_3448_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_a_3450_; uint32_t v___x_3451_; uint32_t v___x_3452_; uint64_t v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
lean_inc(v_a_3450_);
lean_dec_ref_known(v___x_3449_, 1);
v___x_3451_ = 203;
v___x_3452_ = lasm_js_value_handle(v_o_3445_);
v___x_3453_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_3454_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3455_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3455_, 0, v_o_3445_);
lean_ctor_set(v___x_3455_, 1, v___x_3454_);
v___x_3456_ = lean_unsigned_to_nat(2u);
v___x_3457_ = lean_mk_empty_array_with_capacity(v___x_3456_);
lean_inc_ref(v_k_3448_);
v___x_3458_ = lean_array_push(v___x_3457_, v_k_3448_);
v___x_3459_ = lean_array_push(v___x_3458_, v___x_3455_);
v___x_3460_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
v___x_3461_ = lasm_js_call(v___x_3451_, v___x_3452_, v___x_3453_, v_a_3450_, v___x_3460_);
lean_dec_ref_known(v___x_3460_, 1);
lean_dec(v_a_3450_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3462_);
lean_dec_ref_known(v___x_3461_, 1);
v___x_3463_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3464_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3448_);
v___x_3465_ = lean_string_append(v___x_3463_, v___x_3464_);
lean_dec_ref(v___x_3464_);
v___x_3466_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v___x_3465_, v_a_3462_);
lean_dec(v_a_3462_);
lean_dec_ref(v___x_3465_);
return v___x_3466_;
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3474_; 
lean_dec_ref_known(v_k_3448_, 1);
v_a_3467_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3469_ = v___x_3461_;
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3461_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
else
{
lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3482_; 
lean_dec_ref_known(v_k_3448_, 1);
lean_dec(v_o_3445_);
v_a_3475_ = lean_ctor_get(v___x_3449_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3477_ = v___x_3449_;
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_dec(v___x_3449_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3480_; 
if (v_isShared_3478_ == 0)
{
v___x_3480_ = v___x_3477_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3475_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0___boxed(lean_object* v_o_3483_, lean_object* v_key_3484_, lean_object* v_a_3485_){
_start:
{
lean_object* v_res_3486_; 
v_res_3486_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_o_3483_, v_key_3484_);
return v_res_3486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(lean_object* v___f_3492_, lean_object* v_a_3493_, lean_object* v_x_3494_){
_start:
{
if (lean_obj_tag(v_x_3494_) == 0)
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3504_; 
lean_dec(v_a_3493_);
lean_dec_ref(v___f_3492_);
v_a_3496_ = lean_ctor_get(v_x_3494_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v_x_3494_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3498_ = v_x_3494_;
v_isShared_3499_ = v_isSharedCheck_3504_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v_x_3494_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3504_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3501_; 
if (v_isShared_3499_ == 0)
{
v___x_3501_ = v___x_3498_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3496_);
v___x_3501_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3502_; 
v___x_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
return v___x_3502_;
}
}
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3527_; 
v_a_3505_ = lean_ctor_get(v_x_3494_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v_x_3494_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3507_ = v_x_3494_;
v_isShared_3508_ = v_isSharedCheck_3527_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v_x_3494_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3527_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
uint8_t v___x_3509_; 
v___x_3509_ = lean_unbox(v_a_3505_);
if (v___x_3509_ == 0)
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v_val_3513_; lean_object* v___x_3517_; 
v___x_3510_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_3511_ = lean_unsigned_to_nat(0u);
v___x_3517_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_a_3493_, v___x_3510_);
if (lean_obj_tag(v___x_3517_) == 0)
{
lean_object* v_a_3518_; lean_object* v___x_3520_; 
v_a_3518_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_a_3518_);
lean_dec_ref_known(v___x_3517_, 1);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 0, v_a_3518_);
v___x_3520_ = v___x_3507_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3518_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
v_val_3513_ = v___x_3520_;
goto v___jp_3512_;
}
}
else
{
lean_object* v_a_3522_; lean_object* v___x_3524_; 
v_a_3522_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3517_, 1);
if (v_isShared_3508_ == 0)
{
lean_ctor_set_tag(v___x_3507_, 0);
lean_ctor_set(v___x_3507_, 0, v_a_3522_);
v___x_3524_ = v___x_3507_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_a_3522_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
v_val_3513_ = v___x_3524_;
goto v___jp_3512_;
}
}
v___jp_3512_:
{
lean_object* v___x_3514_; uint8_t v___x_3515_; lean_object* v___x_3516_; 
v___x_3514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3514_, 0, v_val_3513_);
v___x_3515_ = lean_unbox(v_a_3505_);
lean_dec(v_a_3505_);
v___x_3516_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3511_, v___x_3515_, v___x_3514_, v___f_3492_);
return v___x_3516_;
}
}
else
{
lean_object* v___x_3526_; 
lean_del_object(v___x_3507_);
lean_dec(v_a_3505_);
lean_dec(v_a_3493_);
lean_dec_ref(v___f_3492_);
v___x_3526_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__2));
return v___x_3526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed(lean_object* v___f_3528_, lean_object* v_a_3529_, lean_object* v_x_3530_, lean_object* v___y_3531_){
_start:
{
lean_object* v_res_3532_; 
v_res_3532_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(v___f_3528_, v_a_3529_, v_x_3530_);
return v_res_3532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(lean_object* v___f_3534_, lean_object* v_x_3535_){
_start:
{
if (lean_obj_tag(v_x_3535_) == 0)
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3545_; 
lean_dec_ref(v___f_3534_);
v_a_3537_ = lean_ctor_get(v_x_3535_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v_x_3535_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3539_ = v_x_3535_;
v_isShared_3540_ = v_isSharedCheck_3545_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v_x_3535_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3545_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3542_; 
if (v_isShared_3540_ == 0)
{
v___x_3542_ = v___x_3539_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_a_3537_);
v___x_3542_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
lean_object* v___x_3543_; 
v___x_3543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3542_);
return v___x_3543_;
}
}
}
else
{
lean_object* v_a_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3567_; 
v_a_3546_ = lean_ctor_get(v_x_3535_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v_x_3535_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3548_ = v_x_3535_;
v_isShared_3549_ = v_isSharedCheck_3567_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_a_3546_);
lean_dec(v_x_3535_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3567_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
lean_object* v___f_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; lean_object* v_val_3555_; lean_object* v___x_3558_; 
lean_inc(v_a_3546_);
v___f_3550_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3550_, 0, v___f_3534_);
lean_closure_set(v___f_3550_, 1, v_a_3546_);
v___x_3551_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_3552_ = lean_unsigned_to_nat(0u);
v___x_3553_ = 0;
v___x_3558_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_3546_, v___x_3551_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v_a_3559_; lean_object* v___x_3561_; 
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_a_3559_);
lean_dec_ref_known(v___x_3558_, 1);
if (v_isShared_3549_ == 0)
{
lean_ctor_set(v___x_3548_, 0, v_a_3559_);
v___x_3561_ = v___x_3548_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v_a_3559_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
v_val_3555_ = v___x_3561_;
goto v___jp_3554_;
}
}
else
{
lean_object* v_a_3563_; lean_object* v___x_3565_; 
v_a_3563_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_a_3563_);
lean_dec_ref_known(v___x_3558_, 1);
if (v_isShared_3549_ == 0)
{
lean_ctor_set_tag(v___x_3548_, 0);
lean_ctor_set(v___x_3548_, 0, v_a_3563_);
v___x_3565_ = v___x_3548_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3563_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
v_val_3555_ = v___x_3565_;
goto v___jp_3554_;
}
}
v___jp_3554_:
{
lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3556_, 0, v_val_3555_);
v___x_3557_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3552_, v___x_3553_, v___x_3556_, v___f_3550_);
return v___x_3557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___boxed(lean_object* v___f_3568_, lean_object* v_x_3569_, lean_object* v___y_3570_){
_start:
{
lean_object* v_res_3571_; 
v_res_3571_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(v___f_3568_, v_x_3569_);
return v_res_3571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(lean_object* v_it_3576_){
_start:
{
lean_object* v___f_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; uint8_t v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___f_3578_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__1));
v___x_3579_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_3580_ = lean_unsigned_to_nat(0u);
v___x_3581_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3582_ = 0;
v___x_3583_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_3576_, v___x_3579_, v___x_3581_);
v___x_3584_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3580_, v___x_3582_, v___x_3583_, v___f_3578_);
return v___x_3584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___boxed(lean_object* v_it_3585_, lean_object* v_a_3586_){
_start:
{
lean_object* v_res_3587_; 
v_res_3587_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3585_);
return v_res_3587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(lean_object* v_acc_3588_, lean_object* v_it_3589_, lean_object* v_x_3590_){
_start:
{
if (lean_obj_tag(v_x_3590_) == 0)
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3600_; 
lean_dec(v_it_3589_);
lean_dec_ref(v_acc_3588_);
v_a_3592_ = lean_ctor_get(v_x_3590_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v_x_3590_);
if (v_isSharedCheck_3600_ == 0)
{
v___x_3594_ = v_x_3590_;
v_isShared_3595_ = v_isSharedCheck_3600_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v_x_3590_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3600_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3597_; 
if (v_isShared_3595_ == 0)
{
v___x_3597_ = v___x_3594_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3592_);
v___x_3597_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
lean_object* v___x_3598_; 
v___x_3598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3597_);
return v___x_3598_;
}
}
}
else
{
lean_object* v_a_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3612_; 
v_a_3601_ = lean_ctor_get(v_x_3590_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v_x_3590_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3603_ = v_x_3590_;
v_isShared_3604_ = v_isSharedCheck_3612_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_a_3601_);
lean_dec(v_x_3590_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3612_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
if (lean_obj_tag(v_a_3601_) == 0)
{
lean_object* v___x_3606_; 
lean_dec(v_it_3589_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 0, v_acc_3588_);
v___x_3606_ = v___x_3603_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_acc_3588_);
v___x_3606_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
lean_object* v___x_3607_; 
v___x_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
return v___x_3607_;
}
}
else
{
lean_object* v_val_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
lean_del_object(v___x_3603_);
v_val_3609_ = lean_ctor_get(v_a_3601_, 0);
lean_inc(v_val_3609_);
lean_dec_ref_known(v_a_3601_, 1);
v___x_3610_ = lean_array_push(v_acc_3588_, v_val_3609_);
v___x_3611_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3589_, v___x_3610_);
return v___x_3611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed(lean_object* v_acc_3613_, lean_object* v_it_3614_, lean_object* v_x_3615_, lean_object* v___y_3616_){
_start:
{
lean_object* v_res_3617_; 
v_res_3617_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(v_acc_3613_, v_it_3614_, v_x_3615_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(lean_object* v_it_3618_, lean_object* v_acc_3619_){
_start:
{
lean_object* v___f_3621_; lean_object* v___x_3622_; uint8_t v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
lean_inc(v_it_3618_);
v___f_3621_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3621_, 0, v_acc_3619_);
lean_closure_set(v___f_3621_, 1, v_it_3618_);
v___x_3622_ = lean_unsigned_to_nat(0u);
v___x_3623_ = 0;
v___x_3624_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3618_);
v___x_3625_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3622_, v___x_3623_, v___x_3624_, v___f_3621_);
return v___x_3625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___boxed(lean_object* v_it_3626_, lean_object* v_acc_3627_, lean_object* v_a_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3626_, v_acc_3627_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(lean_object* v_x_3632_){
_start:
{
if (lean_obj_tag(v_x_3632_) == 0)
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3642_; 
v_a_3634_ = lean_ctor_get(v_x_3632_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v_x_3632_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3636_ = v_x_3632_;
v_isShared_3637_ = v_isSharedCheck_3642_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v_x_3632_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3642_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3634_);
v___x_3639_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
lean_object* v___x_3640_; 
v___x_3640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3639_);
return v___x_3640_;
}
}
}
else
{
lean_object* v_a_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v_a_3643_ = lean_ctor_get(v_x_3632_, 0);
lean_inc(v_a_3643_);
lean_dec_ref_known(v_x_3632_, 1);
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___closed__0));
v___x_3645_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_a_3643_, v___x_3644_);
return v___x_3645_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___boxed(lean_object* v_x_3646_, lean_object* v___y_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(v_x_3646_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values(lean_object* v_self_3650_){
_start:
{
lean_object* v___f_3652_; lean_object* v___x_3653_; uint8_t v___x_3654_; lean_object* v_val_3656_; lean_object* v___x_3659_; 
v___f_3652_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___closed__0));
v___x_3653_ = lean_unsigned_to_nat(0u);
v___x_3654_ = 0;
v___x_3659_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3650_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3667_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3662_ = v___x_3659_;
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_a_3660_);
lean_dec(v___x_3659_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3665_; 
if (v_isShared_3663_ == 0)
{
lean_ctor_set_tag(v___x_3662_, 1);
v___x_3665_ = v___x_3662_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_a_3660_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
v_val_3656_ = v___x_3665_;
goto v___jp_3655_;
}
}
}
else
{
lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3675_; 
v_a_3668_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3675_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3670_ = v___x_3659_;
v_isShared_3671_ = v_isSharedCheck_3675_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_dec(v___x_3659_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3675_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
lean_object* v___x_3673_; 
if (v_isShared_3671_ == 0)
{
lean_ctor_set_tag(v___x_3670_, 0);
v___x_3673_ = v___x_3670_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_a_3668_);
v___x_3673_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
v_val_3656_ = v___x_3673_;
goto v___jp_3655_;
}
}
}
v___jp_3655_:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3657_, 0, v_val_3656_);
v___x_3658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3653_, v___x_3654_, v___x_3657_, v___f_3652_);
return v___x_3658_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___boxed(lean_object* v_self_3676_, lean_object* v_a_3677_){
_start:
{
lean_object* v_res_3678_; 
v_res_3678_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values(v_self_3676_);
return v_res_3678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close(lean_object* v_self_3679_){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3681_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3682_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3683_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3679_, v___x_3681_, v___x_3682_);
return v___x_3683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close___boxed(lean_object* v_self_3684_, lean_object* v_a_3685_){
_start:
{
lean_object* v_res_3686_; 
v_res_3686_ = l_Lasm_JS_Deno_FsWatcher_close(v_self_3684_);
return v_res_3686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator(lean_object* v_self_3687_){
_start:
{
lean_object* v___x_3689_; 
v___x_3689_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v_a_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
lean_inc(v_a_3690_);
lean_dec_ref_known(v___x_3689_, 1);
v___x_3691_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3692_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3690_, v___x_3691_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3693_);
lean_dec_ref_known(v___x_3692_, 1);
v___x_3694_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3695_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3693_, v___x_3694_);
if (lean_obj_tag(v___x_3695_) == 0)
{
lean_object* v_a_3696_; lean_object* v___x_3697_; 
v_a_3696_ = lean_ctor_get(v___x_3695_, 0);
lean_inc(v_a_3696_);
lean_dec_ref_known(v___x_3695_, 1);
lean_inc(v_self_3687_);
v___x_3697_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3687_, v_a_3696_);
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_object* v_a_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; 
v_a_3698_ = lean_ctor_get(v___x_3697_, 0);
lean_inc(v_a_3698_);
lean_dec_ref_known(v___x_3697_, 1);
v___x_3699_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3700_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3701_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3701_, 0, v_self_3687_);
lean_ctor_set(v___x_3701_, 1, v___x_3700_);
v___x_3702_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3698_, v___x_3699_, v___x_3701_);
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
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
lean_dec(v_self_3687_);
v_a_3719_ = lean_ctor_get(v___x_3697_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3697_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3697_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
else
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3734_; 
lean_dec(v_self_3687_);
v_a_3727_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3729_ = v___x_3695_;
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3695_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3732_; 
if (v_isShared_3730_ == 0)
{
v___x_3732_ = v___x_3729_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3727_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
}
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec(v_self_3687_);
v_a_3735_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3692_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3692_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
else
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
lean_dec(v_self_3687_);
v_a_3743_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3689_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3689_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator___boxed(lean_object* v_self_3751_, lean_object* v_a_3752_){
_start:
{
lean_object* v_res_3753_; 
v_res_3753_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_3751_);
return v_res_3753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(lean_object* v_x_3754_){
_start:
{
if (lean_obj_tag(v_x_3754_) == 0)
{
lean_object* v_a_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3764_; 
v_a_3756_ = lean_ctor_get(v_x_3754_, 0);
v_isSharedCheck_3764_ = !lean_is_exclusive(v_x_3754_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3758_ = v_x_3754_;
v_isShared_3759_ = v_isSharedCheck_3764_;
goto v_resetjp_3757_;
}
else
{
lean_inc(v_a_3756_);
lean_dec(v_x_3754_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3764_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v___x_3761_; 
if (v_isShared_3759_ == 0)
{
v___x_3761_ = v___x_3758_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v_a_3756_);
v___x_3761_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
lean_object* v___x_3762_; 
v___x_3762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
return v___x_3762_;
}
}
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3774_; 
v_a_3765_ = lean_ctor_get(v_x_3754_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v_x_3754_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3767_ = v_x_3754_;
v_isShared_3768_ = v_isSharedCheck_3774_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v_x_3754_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3774_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3769_; lean_object* v___x_3771_; 
v___x_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3769_, 0, v_a_3765_);
if (v_isShared_3768_ == 0)
{
lean_ctor_set(v___x_3767_, 0, v___x_3769_);
v___x_3771_ = v___x_3767_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v___x_3769_);
v___x_3771_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
lean_object* v___x_3772_; 
v___x_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3771_);
return v___x_3772_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0___boxed(lean_object* v_x_3775_, lean_object* v___y_3776_){
_start:
{
lean_object* v_res_3777_; 
v_res_3777_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(v_x_3775_);
return v_res_3777_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3778_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0));
v___x_3779_ = lean_string_utf8_byte_size(v___x_3778_);
return v___x_3779_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; uint8_t v___x_3782_; 
v___x_3780_ = lean_unsigned_to_nat(0u);
v___x_3781_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_3782_ = lean_nat_dec_eq(v___x_3781_, v___x_3780_);
return v___x_3782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3786_, lean_object* v_key_3787_){
_start:
{
if (lean_obj_tag(v_d_3786_) == 8)
{
lean_object* v___x_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3834_; 
v___x_3788_ = l_Lasm_JS_Data_field(v_d_3786_, v_key_3787_);
v_isSharedCheck_3834_ = !lean_is_exclusive(v_d_3786_);
if (v_isSharedCheck_3834_ == 0)
{
lean_object* v_unused_3835_; 
v_unused_3835_ = lean_ctor_get(v_d_3786_, 0);
lean_dec(v_unused_3835_);
v___x_3790_ = v_d_3786_;
v_isShared_3791_ = v_isSharedCheck_3834_;
goto v_resetjp_3789_;
}
else
{
lean_dec(v_d_3786_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3834_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
if (lean_obj_tag(v___x_3788_) == 4)
{
lean_object* v_s_3812_; lean_object* v___x_3813_; uint8_t v___x_3814_; 
v_s_3812_ = lean_ctor_get(v___x_3788_, 0);
lean_inc_ref(v_s_3812_);
v___x_3813_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0));
v___x_3814_ = lean_string_dec_eq(v_s_3812_, v___x_3813_);
if (v___x_3814_ == 0)
{
lean_object* v___x_3815_; uint8_t v___x_3816_; 
v___x_3815_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2));
v___x_3816_ = lean_string_dec_eq(v_s_3812_, v___x_3815_);
if (v___x_3816_ == 0)
{
lean_object* v___x_3817_; uint8_t v___x_3818_; 
v___x_3817_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_3818_ = lean_string_dec_eq(v_s_3812_, v___x_3817_);
if (v___x_3818_ == 0)
{
lean_object* v___x_3819_; uint8_t v___x_3820_; 
v___x_3819_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6));
v___x_3820_ = lean_string_dec_eq(v_s_3812_, v___x_3819_);
if (v___x_3820_ == 0)
{
lean_object* v___x_3821_; uint8_t v___x_3822_; 
v___x_3821_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8));
v___x_3822_ = lean_string_dec_eq(v_s_3812_, v___x_3821_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; uint8_t v___x_3824_; 
v___x_3823_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10));
v___x_3824_ = lean_string_dec_eq(v_s_3812_, v___x_3823_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3825_; uint8_t v___x_3826_; 
v___x_3825_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12));
v___x_3826_ = lean_string_dec_eq(v_s_3812_, v___x_3825_);
lean_dec_ref(v_s_3812_);
if (v___x_3826_ == 0)
{
goto v___jp_3792_;
}
else
{
lean_object* v___x_3827_; 
lean_dec_ref_known(v___x_3788_, 1);
lean_del_object(v___x_3790_);
v___x_3827_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2));
return v___x_3827_;
}
}
else
{
lean_object* v___x_3828_; 
lean_dec_ref(v_s_3812_);
lean_dec_ref_known(v___x_3788_, 1);
lean_del_object(v___x_3790_);
v___x_3828_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3));
return v___x_3828_;
}
}
else
{
lean_object* v___x_3829_; 
lean_dec_ref(v_s_3812_);
lean_dec_ref_known(v___x_3788_, 1);
lean_del_object(v___x_3790_);
v___x_3829_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4));
return v___x_3829_;
}
}
else
{
lean_object* v___x_3830_; 
lean_dec_ref(v_s_3812_);
lean_dec_ref_known(v___x_3788_, 1);
lean_del_object(v___x_3790_);
v___x_3830_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5));
return v___x_3830_;
}
}
else
{
lean_object* v___x_3831_; 
lean_dec_ref(v_s_3812_);
lean_dec_ref_known(v___x_3788_, 1);
lean_del_object(v___x_3790_);
v___x_3831_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6));
return v___x_3831_;
}
}
else
{
lean_object* v___x_3832_; 
lean_dec_ref(v_s_3812_);
lean_dec_ref_known(v___x_3788_, 1);
lean_del_object(v___x_3790_);
v___x_3832_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7));
return v___x_3832_;
}
}
else
{
lean_object* v___x_3833_; 
lean_dec_ref(v_s_3812_);
lean_dec_ref_known(v___x_3788_, 1);
lean_del_object(v___x_3790_);
v___x_3833_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8));
return v___x_3833_;
}
}
else
{
goto v___jp_3792_;
}
v___jp_3792_:
{
lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; uint8_t v___x_3803_; 
v___x_3793_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3794_ = lean_string_append(v___x_3793_, v_key_3787_);
v___x_3795_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3796_ = lean_string_append(v___x_3794_, v___x_3795_);
v___x_3797_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1));
v___x_3798_ = lean_string_append(v___x_3796_, v___x_3797_);
v___x_3799_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3800_ = lean_string_append(v___x_3798_, v___x_3799_);
v___x_3801_ = l_Lasm_JS_Data_describe(v___x_3788_);
v___x_3802_ = lean_string_append(v___x_3800_, v___x_3801_);
lean_dec_ref(v___x_3801_);
v___x_3803_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3803_ == 0)
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3807_; 
v___x_3804_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3805_ = lean_string_append(v___x_3802_, v___x_3804_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set_tag(v___x_3790_, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3805_);
v___x_3807_ = v___x_3790_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
else
{
lean_object* v___x_3810_; 
if (v_isShared_3791_ == 0)
{
lean_ctor_set_tag(v___x_3790_, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3802_);
v___x_3810_ = v___x_3790_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v___x_3802_);
v___x_3810_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
return v___x_3810_;
}
}
}
}
}
else
{
lean_object* v___x_3836_; 
lean_dec(v_d_3786_);
v___x_3836_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_3836_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3837_, lean_object* v_key_3838_){
_start:
{
lean_object* v_res_3839_; 
v_res_3839_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_3837_, v_key_3838_);
lean_dec_ref(v_key_3838_);
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3845_, lean_object* v_key_3846_){
_start:
{
if (lean_obj_tag(v_d_3845_) == 8)
{
lean_object* v___x_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3891_; 
v___x_3847_ = l_Lasm_JS_Data_field(v_d_3845_, v_key_3846_);
v_isSharedCheck_3891_ = !lean_is_exclusive(v_d_3845_);
if (v_isSharedCheck_3891_ == 0)
{
lean_object* v_unused_3892_; 
v_unused_3892_ = lean_ctor_get(v_d_3845_, 0);
lean_dec(v_unused_3892_);
v___x_3849_ = v_d_3845_;
v_isShared_3850_ = v_isSharedCheck_3891_;
goto v_resetjp_3848_;
}
else
{
lean_dec(v_d_3845_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3891_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v_a_3852_; 
if (lean_obj_tag(v___x_3847_) == 7)
{
lean_object* v_items_3877_; size_t v_sz_3878_; size_t v___x_3879_; lean_object* v___x_3880_; 
v_items_3877_ = lean_ctor_get(v___x_3847_, 0);
lean_inc_ref(v_items_3877_);
v_sz_3878_ = lean_array_size(v_items_3877_);
v___x_3879_ = ((size_t)0ULL);
v___x_3880_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_3878_, v___x_3879_, v_items_3877_);
if (lean_obj_tag(v___x_3880_) == 0)
{
lean_object* v_a_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; uint8_t v___x_3885_; 
v_a_3881_ = lean_ctor_get(v___x_3880_, 0);
lean_inc(v_a_3881_);
lean_dec_ref_known(v___x_3880_, 1);
v___x_3882_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3883_ = lean_string_utf8_byte_size(v_a_3881_);
v___x_3884_ = lean_unsigned_to_nat(0u);
v___x_3885_ = lean_nat_dec_eq(v___x_3883_, v___x_3884_);
if (v___x_3885_ == 0)
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3886_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_3887_ = lean_string_append(v___x_3886_, v_a_3881_);
lean_dec(v_a_3881_);
v___x_3888_ = lean_string_append(v___x_3882_, v___x_3887_);
lean_dec_ref(v___x_3887_);
v_a_3852_ = v___x_3888_;
goto v___jp_3851_;
}
else
{
lean_dec(v_a_3881_);
v_a_3852_ = v___x_3882_;
goto v___jp_3851_;
}
}
else
{
if (lean_obj_tag(v___x_3880_) == 0)
{
lean_object* v_a_3889_; 
v_a_3889_ = lean_ctor_get(v___x_3880_, 0);
lean_inc(v_a_3889_);
lean_dec_ref_known(v___x_3880_, 1);
v_a_3852_ = v_a_3889_;
goto v___jp_3851_;
}
else
{
lean_dec_ref_known(v___x_3847_, 1);
lean_del_object(v___x_3849_);
return v___x_3880_;
}
}
}
else
{
lean_object* v___x_3890_; 
v___x_3890_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_a_3852_ = v___x_3890_;
goto v___jp_3851_;
}
v___jp_3851_:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; uint8_t v___x_3865_; 
v___x_3853_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3854_ = lean_string_append(v___x_3853_, v_key_3846_);
v___x_3855_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3856_ = lean_string_append(v___x_3854_, v___x_3855_);
v___x_3857_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0));
v___x_3858_ = lean_string_append(v___x_3856_, v___x_3857_);
v___x_3859_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3860_ = lean_string_append(v___x_3858_, v___x_3859_);
v___x_3861_ = l_Lasm_JS_Data_describe(v___x_3847_);
v___x_3862_ = lean_string_append(v___x_3860_, v___x_3861_);
lean_dec_ref(v___x_3861_);
v___x_3863_ = lean_string_utf8_byte_size(v_a_3852_);
v___x_3864_ = lean_unsigned_to_nat(0u);
v___x_3865_ = lean_nat_dec_eq(v___x_3863_, v___x_3864_);
if (v___x_3865_ == 0)
{
lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3872_; 
v___x_3866_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3867_ = lean_string_append(v___x_3866_, v_a_3852_);
lean_dec_ref(v_a_3852_);
v___x_3868_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3869_ = lean_string_append(v___x_3867_, v___x_3868_);
v___x_3870_ = lean_string_append(v___x_3862_, v___x_3869_);
lean_dec_ref(v___x_3869_);
if (v_isShared_3850_ == 0)
{
lean_ctor_set_tag(v___x_3849_, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3870_);
v___x_3872_ = v___x_3849_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v___x_3870_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
else
{
lean_object* v___x_3875_; 
lean_dec_ref(v_a_3852_);
if (v_isShared_3850_ == 0)
{
lean_ctor_set_tag(v___x_3849_, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3862_);
v___x_3875_ = v___x_3849_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v___x_3862_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
return v___x_3875_;
}
}
}
}
}
else
{
lean_object* v___x_3893_; 
lean_dec(v_d_3845_);
v___x_3893_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3));
return v___x_3893_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3894_, lean_object* v_key_3895_){
_start:
{
lean_object* v_res_3896_; 
v_res_3896_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_3894_, v_key_3895_);
lean_dec_ref(v_key_3895_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_3906_, lean_object* v_key_3907_){
_start:
{
if (lean_obj_tag(v_d_3906_) == 8)
{
lean_object* v___x_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3938_; 
v___x_3910_ = l_Lasm_JS_Data_field(v_d_3906_, v_key_3907_);
v_isSharedCheck_3938_ = !lean_is_exclusive(v_d_3906_);
if (v_isSharedCheck_3938_ == 0)
{
lean_object* v_unused_3939_; 
v_unused_3939_ = lean_ctor_get(v_d_3906_, 0);
lean_dec(v_unused_3939_);
v___x_3912_ = v_d_3906_;
v_isShared_3913_ = v_isSharedCheck_3938_;
goto v_resetjp_3911_;
}
else
{
lean_dec(v_d_3906_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3938_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
switch(lean_obj_tag(v___x_3910_))
{
case 1:
{
lean_del_object(v___x_3912_);
goto v___jp_3908_;
}
case 0:
{
lean_del_object(v___x_3912_);
goto v___jp_3908_;
}
default: 
{
if (lean_obj_tag(v___x_3910_) == 4)
{
lean_object* v_s_3934_; lean_object* v___x_3935_; uint8_t v___x_3936_; 
v_s_3934_ = lean_ctor_get(v___x_3910_, 0);
lean_inc_ref(v_s_3934_);
v___x_3935_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0));
v___x_3936_ = lean_string_dec_eq(v_s_3934_, v___x_3935_);
lean_dec_ref(v_s_3934_);
if (v___x_3936_ == 0)
{
goto v___jp_3914_;
}
else
{
lean_object* v___x_3937_; 
lean_dec_ref_known(v___x_3910_, 1);
lean_del_object(v___x_3912_);
v___x_3937_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
return v___x_3937_;
}
}
else
{
goto v___jp_3914_;
}
}
}
v___jp_3914_:
{
lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; uint8_t v___x_3925_; 
v___x_3915_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3916_ = lean_string_append(v___x_3915_, v_key_3907_);
v___x_3917_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3918_ = lean_string_append(v___x_3916_, v___x_3917_);
v___x_3919_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_3920_ = lean_string_append(v___x_3918_, v___x_3919_);
v___x_3921_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3922_ = lean_string_append(v___x_3920_, v___x_3921_);
v___x_3923_ = l_Lasm_JS_Data_describe(v___x_3910_);
v___x_3924_ = lean_string_append(v___x_3922_, v___x_3923_);
lean_dec_ref(v___x_3923_);
v___x_3925_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3925_ == 0)
{
lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3929_; 
v___x_3926_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3927_ = lean_string_append(v___x_3924_, v___x_3926_);
if (v_isShared_3913_ == 0)
{
lean_ctor_set_tag(v___x_3912_, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3927_);
v___x_3929_ = v___x_3912_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3927_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
else
{
lean_object* v___x_3932_; 
if (v_isShared_3913_ == 0)
{
lean_ctor_set_tag(v___x_3912_, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3924_);
v___x_3932_ = v___x_3912_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v___x_3924_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
}
}
else
{
lean_object* v___x_3940_; 
lean_dec(v_d_3906_);
v___x_3940_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4));
return v___x_3940_;
}
v___jp_3908_:
{
lean_object* v___x_3909_; 
v___x_3909_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
return v___x_3909_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_3941_, lean_object* v_key_3942_){
_start:
{
lean_object* v_res_3943_; 
v_res_3943_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_3941_, v_key_3942_);
lean_dec_ref(v_key_3942_);
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_3944_, lean_object* v_d_3945_){
_start:
{
lean_object* v___y_3948_; lean_object* v___y_3949_; lean_object* v___y_3954_; lean_object* v_received_3955_; lean_object* v___y_3974_; lean_object* v_a_3977_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_4001_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0));
lean_inc(v_d_3945_);
v___x_4002_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_3945_, v___x_4001_);
if (lean_obj_tag(v___x_4002_) == 0)
{
lean_object* v_a_4003_; 
v_a_4003_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_a_4003_);
lean_dec_ref_known(v___x_4002_, 1);
v_a_3977_ = v_a_4003_;
goto v___jp_3976_;
}
else
{
lean_object* v_a_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; 
v_a_4004_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_a_4004_);
lean_dec_ref_known(v___x_4002_, 1);
v___x_4005_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1));
lean_inc(v_d_3945_);
v___x_4006_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_3945_, v___x_4005_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; 
lean_dec(v_a_4004_);
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
lean_inc(v_a_4007_);
lean_dec_ref_known(v___x_4006_, 1);
v_a_3977_ = v_a_4007_;
goto v___jp_3976_;
}
else
{
lean_object* v_a_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v_a_4008_ = lean_ctor_get(v___x_4006_, 0);
lean_inc(v_a_4008_);
lean_dec_ref_known(v___x_4006_, 1);
v___x_4009_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2));
lean_inc(v_d_3945_);
v___x_4010_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_3945_, v___x_4009_);
if (lean_obj_tag(v___x_4010_) == 0)
{
lean_object* v_a_4011_; 
lean_dec(v_a_4008_);
lean_dec(v_a_4004_);
v_a_4011_ = lean_ctor_get(v___x_4010_, 0);
lean_inc(v_a_4011_);
lean_dec_ref_known(v___x_4010_, 1);
v_a_3977_ = v_a_4011_;
goto v___jp_3976_;
}
else
{
lean_object* v_a_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4021_; 
lean_dec(v_d_3945_);
v_a_4012_ = lean_ctor_get(v___x_4010_, 0);
v_isSharedCheck_4021_ = !lean_is_exclusive(v___x_4010_);
if (v_isSharedCheck_4021_ == 0)
{
v___x_4014_ = v___x_4010_;
v_isShared_4015_ = v_isSharedCheck_4021_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_a_4012_);
lean_dec(v___x_4010_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4021_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v___x_4016_; uint8_t v___x_4017_; lean_object* v___x_4019_; 
v___x_4016_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4016_, 0, v_a_4008_);
lean_ctor_set(v___x_4016_, 1, v_a_4012_);
v___x_4017_ = lean_unbox(v_a_4004_);
lean_dec(v_a_4004_);
lean_ctor_set_uint8(v___x_4016_, sizeof(void*)*2, v___x_4017_);
if (v_isShared_4015_ == 0)
{
lean_ctor_set_tag(v___x_4014_, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4016_);
v___x_4019_ = v___x_4014_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v___x_4016_);
v___x_4019_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
return v___x_4019_;
}
}
}
}
}
v___jp_3947_:
{
lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
v___x_3950_ = lean_string_append(v___y_3948_, v___y_3949_);
lean_dec_ref(v___y_3949_);
v___x_3951_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3950_);
v___x_3952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
return v___x_3952_;
}
v___jp_3953_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; uint8_t v___x_3967_; 
v___x_3956_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_3957_ = lean_string_append(v___x_3956_, v_context_3944_);
v___x_3958_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_3959_ = lean_string_append(v___x_3957_, v___x_3958_);
v___x_3960_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___closed__3));
v___x_3961_ = lean_string_append(v___x_3959_, v___x_3960_);
v___x_3962_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_3963_ = lean_string_append(v___x_3961_, v___x_3962_);
v___x_3964_ = lean_string_append(v___x_3963_, v_received_3955_);
lean_dec_ref(v_received_3955_);
v___x_3965_ = lean_string_utf8_byte_size(v___y_3954_);
v___x_3966_ = lean_unsigned_to_nat(0u);
v___x_3967_ = lean_nat_dec_eq(v___x_3965_, v___x_3966_);
if (v___x_3967_ == 0)
{
lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3968_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3969_ = lean_string_append(v___x_3968_, v___y_3954_);
lean_dec_ref(v___y_3954_);
v___x_3970_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3971_ = lean_string_append(v___x_3969_, v___x_3970_);
v___y_3948_ = v___x_3964_;
v___y_3949_ = v___x_3971_;
goto v___jp_3947_;
}
else
{
lean_object* v___x_3972_; 
lean_dec_ref(v___y_3954_);
v___x_3972_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_3948_ = v___x_3964_;
v___y_3949_ = v___x_3972_;
goto v___jp_3947_;
}
}
v___jp_3973_:
{
lean_object* v___x_3975_; 
v___x_3975_ = l_Lasm_JS_Data_describe(v_d_3945_);
v___y_3954_ = v___y_3974_;
v_received_3955_ = v___x_3975_;
goto v___jp_3953_;
}
v___jp_3976_:
{
if (lean_obj_tag(v_d_3945_) == 9)
{
lean_object* v_value_3978_; lean_object* v_description_3979_; lean_object* v___x_3980_; uint8_t v___x_3981_; 
v_value_3978_ = lean_ctor_get(v_d_3945_, 0);
v_description_3979_ = lean_ctor_get(v_d_3945_, 1);
v___x_3980_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3981_ = lean_string_dec_eq(v_description_3979_, v___x_3980_);
if (v___x_3981_ == 0)
{
v___y_3974_ = v_a_3977_;
goto v___jp_3973_;
}
else
{
lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3998_; 
lean_inc(v_value_3978_);
v_isSharedCheck_3998_ = !lean_is_exclusive(v_d_3945_);
if (v_isSharedCheck_3998_ == 0)
{
lean_object* v_unused_3999_; lean_object* v_unused_4000_; 
v_unused_3999_ = lean_ctor_get(v_d_3945_, 1);
lean_dec(v_unused_3999_);
v_unused_4000_ = lean_ctor_get(v_d_3945_, 0);
lean_dec(v_unused_4000_);
v___x_3983_ = v_d_3945_;
v_isShared_3984_ = v_isSharedCheck_3998_;
goto v_resetjp_3982_;
}
else
{
lean_dec(v_d_3945_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3998_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
uint32_t v___x_3985_; uint64_t v___x_3986_; lean_object* v___x_3988_; 
v___x_3985_ = 206;
v___x_3986_ = 0ULL;
lean_inc(v_value_3978_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 1, v___x_3980_);
v___x_3988_ = v___x_3983_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v_value_3978_);
lean_ctor_set(v_reuseFailAlloc_3997_, 1, v___x_3980_);
v___x_3988_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
uint32_t v___x_3989_; lean_object* v___x_3990_; 
v___x_3989_ = lasm_js_value_handle(v_value_3978_);
lean_dec(v_value_3978_);
v___x_3990_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3985_, v___x_3986_, v___x_3988_, v___x_3989_);
lean_dec_ref(v___x_3988_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v_a_3991_; uint8_t v___x_3992_; 
v_a_3991_ = lean_ctor_get(v___x_3990_, 0);
lean_inc(v_a_3991_);
lean_dec_ref_known(v___x_3990_, 1);
v___x_3992_ = lean_string_validate_utf8(v_a_3991_);
if (v___x_3992_ == 0)
{
lean_object* v___x_3993_; lean_object* v___x_3994_; 
lean_dec(v_a_3991_);
v___x_3993_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_3994_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3993_);
v___y_3954_ = v_a_3977_;
v_received_3955_ = v___x_3994_;
goto v___jp_3953_;
}
else
{
lean_object* v___x_3995_; 
v___x_3995_ = lean_string_from_utf8_unchecked(v_a_3991_);
v___y_3954_ = v_a_3977_;
v_received_3955_ = v___x_3995_;
goto v___jp_3953_;
}
}
else
{
lean_object* v___x_3996_; 
lean_dec_ref_known(v___x_3990_, 1);
v___x_3996_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_3954_ = v_a_3977_;
v_received_3955_ = v___x_3996_;
goto v___jp_3953_;
}
}
}
}
}
else
{
v___y_3974_ = v_a_3977_;
goto v___jp_3973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4022_, lean_object* v_d_4023_, lean_object* v_a_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4022_, v_d_4023_);
lean_dec_ref(v_context_4022_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(lean_object* v_context_4026_, lean_object* v_bytes_4027_){
_start:
{
lean_object* v___x_4029_; 
v___x_4029_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4027_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; lean_object* v___x_4031_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
lean_inc(v_a_4030_);
lean_dec_ref_known(v___x_4029_, 1);
v___x_4031_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4026_, v_a_4030_);
return v___x_4031_;
}
else
{
lean_object* v_a_4032_; lean_object* v___x_4034_; uint8_t v_isShared_4035_; uint8_t v_isSharedCheck_4039_; 
v_a_4032_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4034_ = v___x_4029_;
v_isShared_4035_ = v_isSharedCheck_4039_;
goto v_resetjp_4033_;
}
else
{
lean_inc(v_a_4032_);
lean_dec(v___x_4029_);
v___x_4034_ = lean_box(0);
v_isShared_4035_ = v_isSharedCheck_4039_;
goto v_resetjp_4033_;
}
v_resetjp_4033_:
{
lean_object* v___x_4037_; 
if (v_isShared_4035_ == 0)
{
v___x_4037_ = v___x_4034_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v_a_4032_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
return v___x_4037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_4040_, lean_object* v_bytes_4041_, lean_object* v_a_4042_){
_start:
{
lean_object* v_res_4043_; 
v_res_4043_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v_context_4040_, v_bytes_4041_);
lean_dec_ref(v_bytes_4041_);
lean_dec_ref(v_context_4040_);
return v_res_4043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(lean_object* v_o_4044_, lean_object* v_key_4045_){
_start:
{
lean_object* v_k_4047_; lean_object* v___x_4048_; 
v_k_4047_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4047_, 0, v_key_4045_);
v___x_4048_ = l_Lasm_JS_Wire_encodeIO(v_k_4047_);
if (lean_obj_tag(v___x_4048_) == 0)
{
lean_object* v_a_4049_; uint32_t v___x_4050_; uint32_t v___x_4051_; uint64_t v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; 
v_a_4049_ = lean_ctor_get(v___x_4048_, 0);
lean_inc(v_a_4049_);
lean_dec_ref_known(v___x_4048_, 1);
v___x_4050_ = 203;
v___x_4051_ = lasm_js_value_handle(v_o_4044_);
v___x_4052_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_4053_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4054_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4054_, 0, v_o_4044_);
lean_ctor_set(v___x_4054_, 1, v___x_4053_);
v___x_4055_ = lean_unsigned_to_nat(2u);
v___x_4056_ = lean_mk_empty_array_with_capacity(v___x_4055_);
lean_inc_ref(v_k_4047_);
v___x_4057_ = lean_array_push(v___x_4056_, v_k_4047_);
v___x_4058_ = lean_array_push(v___x_4057_, v___x_4054_);
v___x_4059_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4058_);
v___x_4060_ = lasm_js_call(v___x_4050_, v___x_4051_, v___x_4052_, v_a_4049_, v___x_4059_);
lean_dec_ref_known(v___x_4059_, 1);
lean_dec(v_a_4049_);
if (lean_obj_tag(v___x_4060_) == 0)
{
lean_object* v_a_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v_a_4061_ = lean_ctor_get(v___x_4060_, 0);
lean_inc(v_a_4061_);
lean_dec_ref_known(v___x_4060_, 1);
v___x_4062_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_4063_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4047_);
v___x_4064_ = lean_string_append(v___x_4062_, v___x_4063_);
lean_dec_ref(v___x_4063_);
v___x_4065_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v___x_4064_, v_a_4061_);
lean_dec(v_a_4061_);
lean_dec_ref(v___x_4064_);
return v___x_4065_;
}
else
{
lean_object* v_a_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4073_; 
lean_dec_ref_known(v_k_4047_, 1);
v_a_4066_ = lean_ctor_get(v___x_4060_, 0);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4060_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_4068_ = v___x_4060_;
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_a_4066_);
lean_dec(v___x_4060_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4071_; 
if (v_isShared_4069_ == 0)
{
v___x_4071_ = v___x_4068_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v_a_4066_);
v___x_4071_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
return v___x_4071_;
}
}
}
}
else
{
lean_object* v_a_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4081_; 
lean_dec_ref_known(v_k_4047_, 1);
lean_dec(v_o_4044_);
v_a_4074_ = lean_ctor_get(v___x_4048_, 0);
v_isSharedCheck_4081_ = !lean_is_exclusive(v___x_4048_);
if (v_isSharedCheck_4081_ == 0)
{
v___x_4076_ = v___x_4048_;
v_isShared_4077_ = v_isSharedCheck_4081_;
goto v_resetjp_4075_;
}
else
{
lean_inc(v_a_4074_);
lean_dec(v___x_4048_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4081_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v___x_4079_; 
if (v_isShared_4077_ == 0)
{
v___x_4079_ = v___x_4076_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v_a_4074_);
v___x_4079_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
return v___x_4079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0___boxed(lean_object* v_o_4082_, lean_object* v_key_4083_, lean_object* v_a_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_o_4082_, v_key_4083_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(lean_object* v___f_4090_, lean_object* v_a_4091_, lean_object* v_x_4092_){
_start:
{
if (lean_obj_tag(v_x_4092_) == 0)
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4102_; 
lean_dec(v_a_4091_);
lean_dec_ref(v___f_4090_);
v_a_4094_ = lean_ctor_get(v_x_4092_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v_x_4092_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4096_ = v_x_4092_;
v_isShared_4097_ = v_isSharedCheck_4102_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v_x_4092_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4102_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
lean_object* v___x_4100_; 
v___x_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4099_);
return v___x_4100_;
}
}
}
else
{
lean_object* v_a_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4125_; 
v_a_4103_ = lean_ctor_get(v_x_4092_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v_x_4092_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4105_ = v_x_4092_;
v_isShared_4106_ = v_isSharedCheck_4125_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_a_4103_);
lean_dec(v_x_4092_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4125_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
uint8_t v___x_4107_; 
v___x_4107_ = lean_unbox(v_a_4103_);
if (v___x_4107_ == 0)
{
lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v_val_4111_; lean_object* v___x_4115_; 
v___x_4108_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_4109_ = lean_unsigned_to_nat(0u);
v___x_4115_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_a_4091_, v___x_4108_);
if (lean_obj_tag(v___x_4115_) == 0)
{
lean_object* v_a_4116_; lean_object* v___x_4118_; 
v_a_4116_ = lean_ctor_get(v___x_4115_, 0);
lean_inc(v_a_4116_);
lean_dec_ref_known(v___x_4115_, 1);
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 0, v_a_4116_);
v___x_4118_ = v___x_4105_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v_a_4116_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
v_val_4111_ = v___x_4118_;
goto v___jp_4110_;
}
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; 
v_a_4120_ = lean_ctor_get(v___x_4115_, 0);
lean_inc(v_a_4120_);
lean_dec_ref_known(v___x_4115_, 1);
if (v_isShared_4106_ == 0)
{
lean_ctor_set_tag(v___x_4105_, 0);
lean_ctor_set(v___x_4105_, 0, v_a_4120_);
v___x_4122_ = v___x_4105_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4120_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
v_val_4111_ = v___x_4122_;
goto v___jp_4110_;
}
}
v___jp_4110_:
{
lean_object* v___x_4112_; uint8_t v___x_4113_; lean_object* v___x_4114_; 
v___x_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4112_, 0, v_val_4111_);
v___x_4113_ = lean_unbox(v_a_4103_);
lean_dec(v_a_4103_);
v___x_4114_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4109_, v___x_4113_, v___x_4112_, v___f_4090_);
return v___x_4114_;
}
}
else
{
lean_object* v___x_4124_; 
lean_del_object(v___x_4105_);
lean_dec(v_a_4103_);
lean_dec(v_a_4091_);
lean_dec_ref(v___f_4090_);
v___x_4124_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__1));
return v___x_4124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed(lean_object* v___f_4126_, lean_object* v_a_4127_, lean_object* v_x_4128_, lean_object* v___y_4129_){
_start:
{
lean_object* v_res_4130_; 
v_res_4130_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(v___f_4126_, v_a_4127_, v_x_4128_);
return v_res_4130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(lean_object* v___f_4131_, lean_object* v_x_4132_){
_start:
{
if (lean_obj_tag(v_x_4132_) == 0)
{
lean_object* v_a_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4142_; 
lean_dec_ref(v___f_4131_);
v_a_4134_ = lean_ctor_get(v_x_4132_, 0);
v_isSharedCheck_4142_ = !lean_is_exclusive(v_x_4132_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4136_ = v_x_4132_;
v_isShared_4137_ = v_isSharedCheck_4142_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_a_4134_);
lean_dec(v_x_4132_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4142_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4139_; 
if (v_isShared_4137_ == 0)
{
v___x_4139_ = v___x_4136_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v_a_4134_);
v___x_4139_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
lean_object* v___x_4140_; 
v___x_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4139_);
return v___x_4140_;
}
}
}
else
{
lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4164_; 
v_a_4143_ = lean_ctor_get(v_x_4132_, 0);
v_isSharedCheck_4164_ = !lean_is_exclusive(v_x_4132_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4145_ = v_x_4132_;
v_isShared_4146_ = v_isSharedCheck_4164_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v_x_4132_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4164_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___f_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; uint8_t v___x_4150_; lean_object* v_val_4152_; lean_object* v___x_4155_; 
lean_inc(v_a_4143_);
v___f_4147_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4147_, 0, v___f_4131_);
lean_closure_set(v___f_4147_, 1, v_a_4143_);
v___x_4148_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_4149_ = lean_unsigned_to_nat(0u);
v___x_4150_ = 0;
v___x_4155_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_4143_, v___x_4148_);
if (lean_obj_tag(v___x_4155_) == 0)
{
lean_object* v_a_4156_; lean_object* v___x_4158_; 
v_a_4156_ = lean_ctor_get(v___x_4155_, 0);
lean_inc(v_a_4156_);
lean_dec_ref_known(v___x_4155_, 1);
if (v_isShared_4146_ == 0)
{
lean_ctor_set(v___x_4145_, 0, v_a_4156_);
v___x_4158_ = v___x_4145_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_a_4156_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
v_val_4152_ = v___x_4158_;
goto v___jp_4151_;
}
}
else
{
lean_object* v_a_4160_; lean_object* v___x_4162_; 
v_a_4160_ = lean_ctor_get(v___x_4155_, 0);
lean_inc(v_a_4160_);
lean_dec_ref_known(v___x_4155_, 1);
if (v_isShared_4146_ == 0)
{
lean_ctor_set_tag(v___x_4145_, 0);
lean_ctor_set(v___x_4145_, 0, v_a_4160_);
v___x_4162_ = v___x_4145_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v_a_4160_);
v___x_4162_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
v_val_4152_ = v___x_4162_;
goto v___jp_4151_;
}
}
v___jp_4151_:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4153_, 0, v_val_4152_);
v___x_4154_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4149_, v___x_4150_, v___x_4153_, v___f_4147_);
return v___x_4154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2___boxed(lean_object* v___f_4165_, lean_object* v_x_4166_, lean_object* v___y_4167_){
_start:
{
lean_object* v_res_4168_; 
v_res_4168_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(v___f_4165_, v_x_4166_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next(lean_object* v_it_4172_){
_start:
{
lean_object* v___f_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; uint8_t v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___f_4174_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__1));
v___x_4175_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_4176_ = lean_unsigned_to_nat(0u);
v___x_4177_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_4178_ = 0;
v___x_4179_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_4172_, v___x_4175_, v___x_4177_);
v___x_4180_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4176_, v___x_4178_, v___x_4179_, v___f_4174_);
return v___x_4180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___boxed(lean_object* v_it_4181_, lean_object* v_a_4182_){
_start:
{
lean_object* v_res_4183_; 
v_res_4183_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4181_);
return v_res_4183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(lean_object* v_acc_4184_, lean_object* v_it_4185_, lean_object* v_x_4186_){
_start:
{
if (lean_obj_tag(v_x_4186_) == 0)
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4196_; 
lean_dec(v_it_4185_);
lean_dec_ref(v_acc_4184_);
v_a_4188_ = lean_ctor_get(v_x_4186_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v_x_4186_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4190_ = v_x_4186_;
v_isShared_4191_ = v_isSharedCheck_4196_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v_x_4186_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4196_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4193_; 
if (v_isShared_4191_ == 0)
{
v___x_4193_ = v___x_4190_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v_a_4188_);
v___x_4193_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
lean_object* v___x_4194_; 
v___x_4194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4193_);
return v___x_4194_;
}
}
}
else
{
lean_object* v_a_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4208_; 
v_a_4197_ = lean_ctor_get(v_x_4186_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v_x_4186_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4199_ = v_x_4186_;
v_isShared_4200_ = v_isSharedCheck_4208_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_a_4197_);
lean_dec(v_x_4186_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4208_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
if (lean_obj_tag(v_a_4197_) == 0)
{
lean_object* v___x_4202_; 
lean_dec(v_it_4185_);
if (v_isShared_4200_ == 0)
{
lean_ctor_set(v___x_4199_, 0, v_acc_4184_);
v___x_4202_ = v___x_4199_;
goto v_reusejp_4201_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v_acc_4184_);
v___x_4202_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4201_;
}
v_reusejp_4201_:
{
lean_object* v___x_4203_; 
v___x_4203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4203_, 0, v___x_4202_);
return v___x_4203_;
}
}
else
{
lean_object* v_val_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; 
lean_del_object(v___x_4199_);
v_val_4205_ = lean_ctor_get(v_a_4197_, 0);
lean_inc(v_val_4205_);
lean_dec_ref_known(v_a_4197_, 1);
v___x_4206_ = lean_array_push(v_acc_4184_, v_val_4205_);
v___x_4207_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4185_, v___x_4206_);
return v___x_4207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed(lean_object* v_acc_4209_, lean_object* v_it_4210_, lean_object* v_x_4211_, lean_object* v___y_4212_){
_start:
{
lean_object* v_res_4213_; 
v_res_4213_ = l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(v_acc_4209_, v_it_4210_, v_x_4211_);
return v_res_4213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop(lean_object* v_it_4214_, lean_object* v_acc_4215_){
_start:
{
lean_object* v___f_4217_; lean_object* v___x_4218_; uint8_t v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; 
lean_inc(v_it_4214_);
v___f_4217_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4217_, 0, v_acc_4215_);
lean_closure_set(v___f_4217_, 1, v_it_4214_);
v___x_4218_ = lean_unsigned_to_nat(0u);
v___x_4219_ = 0;
v___x_4220_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4214_);
v___x_4221_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4218_, v___x_4219_, v___x_4220_, v___f_4217_);
return v___x_4221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___boxed(lean_object* v_it_4222_, lean_object* v_acc_4223_, lean_object* v_a_4224_){
_start:
{
lean_object* v_res_4225_; 
v_res_4225_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4222_, v_acc_4223_);
return v_res_4225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0(lean_object* v_x_4228_){
_start:
{
if (lean_obj_tag(v_x_4228_) == 0)
{
lean_object* v_a_4230_; lean_object* v___x_4232_; uint8_t v_isShared_4233_; uint8_t v_isSharedCheck_4238_; 
v_a_4230_ = lean_ctor_get(v_x_4228_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v_x_4228_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4232_ = v_x_4228_;
v_isShared_4233_ = v_isSharedCheck_4238_;
goto v_resetjp_4231_;
}
else
{
lean_inc(v_a_4230_);
lean_dec(v_x_4228_);
v___x_4232_ = lean_box(0);
v_isShared_4233_ = v_isSharedCheck_4238_;
goto v_resetjp_4231_;
}
v_resetjp_4231_:
{
lean_object* v___x_4235_; 
if (v_isShared_4233_ == 0)
{
v___x_4235_ = v___x_4232_;
goto v_reusejp_4234_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v_a_4230_);
v___x_4235_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4234_;
}
v_reusejp_4234_:
{
lean_object* v___x_4236_; 
v___x_4236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
return v___x_4236_;
}
}
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; 
v_a_4239_ = lean_ctor_get(v_x_4228_, 0);
lean_inc(v_a_4239_);
lean_dec_ref_known(v_x_4228_, 1);
v___x_4240_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___lam__0___closed__0));
v___x_4241_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_a_4239_, v___x_4240_);
return v___x_4241_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0___boxed(lean_object* v_x_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l_Lasm_JS_Deno_FsWatcher_values___lam__0(v_x_4242_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values(lean_object* v_self_4246_){
_start:
{
lean_object* v___f_4248_; lean_object* v___x_4249_; uint8_t v___x_4250_; lean_object* v_val_4252_; lean_object* v___x_4255_; 
v___f_4248_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___closed__0));
v___x_4249_ = lean_unsigned_to_nat(0u);
v___x_4250_ = 0;
v___x_4255_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_4246_);
if (lean_obj_tag(v___x_4255_) == 0)
{
lean_object* v_a_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4263_; 
v_a_4256_ = lean_ctor_get(v___x_4255_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4255_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4258_ = v___x_4255_;
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
else
{
lean_inc(v_a_4256_);
lean_dec(v___x_4255_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
lean_object* v___x_4261_; 
if (v_isShared_4259_ == 0)
{
lean_ctor_set_tag(v___x_4258_, 1);
v___x_4261_ = v___x_4258_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_a_4256_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
v_val_4252_ = v___x_4261_;
goto v___jp_4251_;
}
}
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4271_; 
v_a_4264_ = lean_ctor_get(v___x_4255_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4255_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4266_ = v___x_4255_;
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4255_);
v___x_4266_ = lean_box(0);
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
v_resetjp_4265_:
{
lean_object* v___x_4269_; 
if (v_isShared_4267_ == 0)
{
lean_ctor_set_tag(v___x_4266_, 0);
v___x_4269_ = v___x_4266_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v_a_4264_);
v___x_4269_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
v_val_4252_ = v___x_4269_;
goto v___jp_4251_;
}
}
}
v___jp_4251_:
{
lean_object* v___x_4253_; lean_object* v___x_4254_; 
v___x_4253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4253_, 0, v_val_4252_);
v___x_4254_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4249_, v___x_4250_, v___x_4253_, v___f_4248_);
return v___x_4254_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___boxed(lean_object* v_self_4272_, lean_object* v_a_4273_){
_start:
{
lean_object* v_res_4274_; 
v_res_4274_ = l_Lasm_JS_Deno_FsWatcher_values(v_self_4272_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(lean_object* v_b_4275_, lean_object* v_args_4276_){
_start:
{
uint8_t v_construct_4278_; lean_object* v___x_4279_; uint32_t v___x_4280_; uint64_t v___x_4281_; uint64_t v___y_4283_; 
v_construct_4278_ = lean_ctor_get_uint8(v_b_4275_, sizeof(void*)*4);
v___x_4279_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4275_);
v___x_4280_ = 214;
v___x_4281_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4278_ == 0)
{
uint64_t v___x_4291_; 
v___x_4291_ = 0ULL;
v___y_4283_ = v___x_4291_;
goto v___jp_4282_;
}
else
{
uint64_t v___x_4292_; 
v___x_4292_ = 4ULL;
v___y_4283_ = v___x_4292_;
goto v___jp_4282_;
}
v___jp_4282_:
{
uint64_t v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
v___x_4284_ = lean_uint64_lor(v___x_4281_, v___y_4283_);
v___x_4285_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4275_, v_args_4276_);
v___x_4286_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4287_ = lean_string_append(v___x_4286_, v___x_4279_);
lean_dec_ref(v___x_4279_);
v___x_4288_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4289_ = lean_string_append(v___x_4287_, v___x_4288_);
v___x_4290_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_4280_, v___x_4284_, v___x_4285_, v___x_4289_);
return v___x_4290_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0___boxed(lean_object* v_b_4293_, lean_object* v_args_4294_, lean_object* v_a_4295_){
_start:
{
lean_object* v_res_4296_; 
v_res_4296_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v_b_4293_, v_args_4294_);
lean_dec_ref(v_b_4293_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link(lean_object* v_oldpath_4306_, lean_object* v_newpath_4307_){
_start:
{
lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
v___x_4309_ = lean_unsigned_to_nat(2u);
v___x_4310_ = ((lean_object*)(l_Lasm_JS_Deno_link___closed__3));
v___x_4311_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4311_, 0, v_oldpath_4306_);
v___x_4312_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4312_, 0, v_newpath_4307_);
v___x_4313_ = lean_mk_empty_array_with_capacity(v___x_4309_);
v___x_4314_ = lean_array_push(v___x_4313_, v___x_4311_);
v___x_4315_ = lean_array_push(v___x_4314_, v___x_4312_);
v___x_4316_ = l_Lasm_JS_Web_Support_args(v___x_4315_);
v___x_4317_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4310_, v___x_4316_);
return v___x_4317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link___boxed(lean_object* v_oldpath_4318_, lean_object* v_newpath_4319_, lean_object* v_a_4320_){
_start:
{
lean_object* v_res_4321_; 
v_res_4321_ = l_Lasm_JS_Deno_link(v_oldpath_4318_, v_newpath_4319_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync(lean_object* v_oldpath_4330_, lean_object* v_newpath_4331_){
_start:
{
uint8_t v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v___x_4333_ = 0;
v___x_4334_ = lean_unsigned_to_nat(2u);
v___x_4335_ = ((lean_object*)(l_Lasm_JS_Deno_linkSync___closed__2));
v___x_4336_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4336_, 0, v_oldpath_4330_);
v___x_4337_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4337_, 0, v_newpath_4331_);
v___x_4338_ = lean_mk_empty_array_with_capacity(v___x_4334_);
v___x_4339_ = lean_array_push(v___x_4338_, v___x_4336_);
v___x_4340_ = lean_array_push(v___x_4339_, v___x_4337_);
v___x_4341_ = l_Lasm_JS_Web_Support_args(v___x_4340_);
v___x_4342_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4335_, v___x_4341_, v___x_4333_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync___boxed(lean_object* v_oldpath_4343_, lean_object* v_newpath_4344_, lean_object* v_a_4345_){
_start:
{
lean_object* v_res_4346_; 
v_res_4346_ = l_Lasm_JS_Deno_linkSync(v_oldpath_4343_, v_newpath_4344_);
return v_res_4346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0(lean_object* v_x_4347_){
_start:
{
if (lean_obj_tag(v_x_4347_) == 0)
{
lean_object* v_a_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4357_; 
v_a_4349_ = lean_ctor_get(v_x_4347_, 0);
v_isSharedCheck_4357_ = !lean_is_exclusive(v_x_4347_);
if (v_isSharedCheck_4357_ == 0)
{
v___x_4351_ = v_x_4347_;
v_isShared_4352_ = v_isSharedCheck_4357_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_a_4349_);
lean_dec(v_x_4347_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4357_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4354_; 
if (v_isShared_4352_ == 0)
{
v___x_4354_ = v___x_4351_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v_a_4349_);
v___x_4354_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
lean_object* v___x_4355_; 
v___x_4355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4355_, 0, v___x_4354_);
return v___x_4355_;
}
}
}
else
{
lean_object* v_a_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4366_; 
v_a_4358_ = lean_ctor_get(v_x_4347_, 0);
v_isSharedCheck_4366_ = !lean_is_exclusive(v_x_4347_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4360_ = v_x_4347_;
v_isShared_4361_ = v_isSharedCheck_4366_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_a_4358_);
lean_dec(v_x_4347_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4366_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4363_; 
if (v_isShared_4361_ == 0)
{
v___x_4363_ = v___x_4360_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4358_);
v___x_4363_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
lean_object* v___x_4364_; 
v___x_4364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4364_, 0, v___x_4363_);
return v___x_4364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0___boxed(lean_object* v_x_4367_, lean_object* v___y_4368_){
_start:
{
lean_object* v_res_4369_; 
v_res_4369_ = l_Lasm_JS_Deno_open___lam__0(v_x_4367_);
return v_res_4369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(lean_object* v_x_4370_){
_start:
{
if (lean_obj_tag(v_x_4370_) == 0)
{
lean_object* v___x_4371_; 
v___x_4371_ = lean_box(0);
return v___x_4371_;
}
else
{
lean_object* v_val_4372_; lean_object* v_read_4373_; lean_object* v_write_4374_; lean_object* v_append_4375_; lean_object* v_truncate_4376_; lean_object* v_create_4377_; lean_object* v_createNew_4378_; lean_object* v_mode_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; 
v_val_4372_ = lean_ctor_get(v_x_4370_, 0);
v_read_4373_ = lean_ctor_get(v_val_4372_, 0);
v_write_4374_ = lean_ctor_get(v_val_4372_, 1);
v_append_4375_ = lean_ctor_get(v_val_4372_, 2);
v_truncate_4376_ = lean_ctor_get(v_val_4372_, 3);
v_create_4377_ = lean_ctor_get(v_val_4372_, 4);
v_createNew_4378_ = lean_ctor_get(v_val_4372_, 5);
v_mode_4379_ = lean_ctor_get(v_val_4372_, 6);
v___x_4380_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0));
v___x_4381_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_read_4373_);
v___x_4382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4382_, 0, v___x_4380_);
lean_ctor_set(v___x_4382_, 1, v___x_4381_);
v___x_4383_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1));
v___x_4384_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_write_4374_);
v___x_4385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4385_, 0, v___x_4383_);
lean_ctor_set(v___x_4385_, 1, v___x_4384_);
v___x_4386_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_4387_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_4375_);
v___x_4388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4388_, 0, v___x_4386_);
lean_ctor_set(v___x_4388_, 1, v___x_4387_);
v___x_4389_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_4390_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_truncate_4376_);
v___x_4391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4391_, 0, v___x_4389_);
lean_ctor_set(v___x_4391_, 1, v___x_4390_);
v___x_4392_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_4393_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_4377_);
v___x_4394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4394_, 0, v___x_4392_);
lean_ctor_set(v___x_4394_, 1, v___x_4393_);
v___x_4395_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_4396_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_4378_);
v___x_4397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4397_, 0, v___x_4395_);
lean_ctor_set(v___x_4397_, 1, v___x_4396_);
v___x_4398_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4399_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4379_);
v___x_4400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4400_, 0, v___x_4398_);
lean_ctor_set(v___x_4400_, 1, v___x_4399_);
v___x_4401_ = lean_unsigned_to_nat(7u);
v___x_4402_ = lean_mk_empty_array_with_capacity(v___x_4401_);
v___x_4403_ = lean_array_push(v___x_4402_, v___x_4382_);
v___x_4404_ = lean_array_push(v___x_4403_, v___x_4385_);
v___x_4405_ = lean_array_push(v___x_4404_, v___x_4388_);
v___x_4406_ = lean_array_push(v___x_4405_, v___x_4391_);
v___x_4407_ = lean_array_push(v___x_4406_, v___x_4394_);
v___x_4408_ = lean_array_push(v___x_4407_, v___x_4397_);
v___x_4409_ = lean_array_push(v___x_4408_, v___x_4400_);
v___x_4410_ = l_Lasm_JS_Web_Support_fields(v___x_4409_);
lean_dec_ref(v___x_4409_);
return v___x_4410_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0___boxed(lean_object* v_x_4411_){
_start:
{
lean_object* v_res_4412_; 
v_res_4412_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_x_4411_);
lean_dec(v_x_4411_);
return v_res_4412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(lean_object* v_b_4413_, lean_object* v_args_4414_){
_start:
{
uint8_t v_construct_4416_; lean_object* v___x_4417_; uint32_t v___x_4418_; uint64_t v___x_4419_; uint64_t v___y_4421_; 
v_construct_4416_ = lean_ctor_get_uint8(v_b_4413_, sizeof(void*)*4);
v___x_4417_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4413_);
v___x_4418_ = 214;
v___x_4419_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
if (v_construct_4416_ == 0)
{
uint64_t v___x_4429_; 
v___x_4429_ = 0ULL;
v___y_4421_ = v___x_4429_;
goto v___jp_4420_;
}
else
{
uint64_t v___x_4430_; 
v___x_4430_ = 4ULL;
v___y_4421_ = v___x_4430_;
goto v___jp_4420_;
}
v___jp_4420_:
{
uint64_t v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4422_ = lean_uint64_lor(v___x_4419_, v___y_4421_);
v___x_4423_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4413_, v_args_4414_);
v___x_4424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4425_ = lean_string_append(v___x_4424_, v___x_4417_);
v___x_4426_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4427_ = lean_string_append(v___x_4425_, v___x_4426_);
v___x_4428_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_4417_, v___x_4418_, v___x_4422_, v___x_4423_, v___x_4427_);
return v___x_4428_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1___boxed(lean_object* v_b_4431_, lean_object* v_args_4432_, lean_object* v_a_4433_){
_start:
{
lean_object* v_res_4434_; 
v_res_4434_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v_b_4431_, v_args_4432_);
lean_dec_ref(v_b_4431_);
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open(lean_object* v_path_4444_, lean_object* v_options_4445_){
_start:
{
lean_object* v___f_4447_; uint8_t v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___y_4452_; 
v___f_4447_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4448_ = 0;
v___x_4449_ = lean_unsigned_to_nat(2u);
v___x_4450_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__3));
if (lean_obj_tag(v_path_4444_) == 0)
{
lean_object* v_value_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4468_; 
v_value_4461_ = lean_ctor_get(v_path_4444_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v_path_4444_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4463_ = v_path_4444_;
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_value_4461_);
lean_dec(v_path_4444_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4466_; 
if (v_isShared_4464_ == 0)
{
lean_ctor_set_tag(v___x_4463_, 4);
v___x_4466_ = v___x_4463_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_value_4461_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
v___y_4452_ = v___x_4466_;
goto v___jp_4451_;
}
}
}
else
{
lean_object* v_value_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; 
v_value_4469_ = lean_ctor_get(v_path_4444_, 0);
lean_inc(v_value_4469_);
lean_dec_ref_known(v_path_4444_, 1);
v___x_4470_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4471_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4471_, 0, v_value_4469_);
lean_ctor_set(v___x_4471_, 1, v___x_4470_);
v___y_4452_ = v___x_4471_;
goto v___jp_4451_;
}
v___jp_4451_:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; 
v___x_4453_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4445_);
v___x_4454_ = lean_mk_empty_array_with_capacity(v___x_4449_);
v___x_4455_ = lean_array_push(v___x_4454_, v___y_4452_);
v___x_4456_ = lean_array_push(v___x_4455_, v___x_4453_);
v___x_4457_ = l_Lasm_JS_Web_Support_args(v___x_4456_);
v___x_4458_ = lean_unsigned_to_nat(0u);
v___x_4459_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4450_, v___x_4457_);
v___x_4460_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4458_, v___x_4448_, v___x_4459_, v___f_4447_);
return v___x_4460_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___boxed(lean_object* v_path_4472_, lean_object* v_options_4473_, lean_object* v_a_4474_){
_start:
{
lean_object* v_res_4475_; 
v_res_4475_ = l_Lasm_JS_Deno_open(v_path_4472_, v_options_4473_);
lean_dec(v_options_4473_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync(lean_object* v_path_4484_, lean_object* v_options_4485_){
_start:
{
uint8_t v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___y_4491_; 
v___x_4487_ = 0;
v___x_4488_ = lean_unsigned_to_nat(2u);
v___x_4489_ = ((lean_object*)(l_Lasm_JS_Deno_openSync___closed__2));
if (lean_obj_tag(v_path_4484_) == 0)
{
lean_object* v_value_4514_; lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4521_; 
v_value_4514_ = lean_ctor_get(v_path_4484_, 0);
v_isSharedCheck_4521_ = !lean_is_exclusive(v_path_4484_);
if (v_isSharedCheck_4521_ == 0)
{
v___x_4516_ = v_path_4484_;
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
else
{
lean_inc(v_value_4514_);
lean_dec(v_path_4484_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
lean_object* v___x_4519_; 
if (v_isShared_4517_ == 0)
{
lean_ctor_set_tag(v___x_4516_, 4);
v___x_4519_ = v___x_4516_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v_value_4514_);
v___x_4519_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
v___y_4491_ = v___x_4519_;
goto v___jp_4490_;
}
}
}
else
{
lean_object* v_value_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; 
v_value_4522_ = lean_ctor_get(v_path_4484_, 0);
lean_inc(v_value_4522_);
lean_dec_ref_known(v_path_4484_, 1);
v___x_4523_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4524_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4524_, 0, v_value_4522_);
lean_ctor_set(v___x_4524_, 1, v___x_4523_);
v___y_4491_ = v___x_4524_;
goto v___jp_4490_;
}
v___jp_4490_:
{
lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; 
v___x_4492_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4485_);
v___x_4493_ = lean_mk_empty_array_with_capacity(v___x_4488_);
v___x_4494_ = lean_array_push(v___x_4493_, v___y_4491_);
v___x_4495_ = lean_array_push(v___x_4494_, v___x_4492_);
v___x_4496_ = l_Lasm_JS_Web_Support_args(v___x_4495_);
v___x_4497_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4489_, v___x_4496_, v___x_4487_);
if (lean_obj_tag(v___x_4497_) == 0)
{
lean_object* v_a_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4505_; 
v_a_4498_ = lean_ctor_get(v___x_4497_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___x_4497_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4500_ = v___x_4497_;
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_a_4498_);
lean_dec(v___x_4497_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4503_; 
if (v_isShared_4501_ == 0)
{
v___x_4503_ = v___x_4500_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v_a_4498_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
else
{
lean_object* v_a_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4513_; 
v_a_4506_ = lean_ctor_get(v___x_4497_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v___x_4497_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4508_ = v___x_4497_;
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_a_4506_);
lean_dec(v___x_4497_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4506_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
return v___x_4511_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync___boxed(lean_object* v_path_4525_, lean_object* v_options_4526_, lean_object* v_a_4527_){
_start:
{
lean_object* v_res_4528_; 
v_res_4528_ = l_Lasm_JS_Deno_openSync(v_path_4525_, v_options_4526_);
lean_dec(v_options_4526_);
return v_res_4528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create(lean_object* v_path_4537_){
_start:
{
lean_object* v___f_4539_; uint8_t v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___y_4544_; 
v___f_4539_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4540_ = 0;
v___x_4541_ = lean_unsigned_to_nat(1u);
v___x_4542_ = ((lean_object*)(l_Lasm_JS_Deno_create___closed__2));
if (lean_obj_tag(v_path_4537_) == 0)
{
lean_object* v_value_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4558_; 
v_value_4551_ = lean_ctor_get(v_path_4537_, 0);
v_isSharedCheck_4558_ = !lean_is_exclusive(v_path_4537_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4553_ = v_path_4537_;
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_value_4551_);
lean_dec(v_path_4537_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4556_; 
if (v_isShared_4554_ == 0)
{
lean_ctor_set_tag(v___x_4553_, 4);
v___x_4556_ = v___x_4553_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_value_4551_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
v___y_4544_ = v___x_4556_;
goto v___jp_4543_;
}
}
}
else
{
lean_object* v_value_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; 
v_value_4559_ = lean_ctor_get(v_path_4537_, 0);
lean_inc(v_value_4559_);
lean_dec_ref_known(v_path_4537_, 1);
v___x_4560_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4561_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4561_, 0, v_value_4559_);
lean_ctor_set(v___x_4561_, 1, v___x_4560_);
v___y_4544_ = v___x_4561_;
goto v___jp_4543_;
}
v___jp_4543_:
{
lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4545_ = lean_mk_empty_array_with_capacity(v___x_4541_);
v___x_4546_ = lean_array_push(v___x_4545_, v___y_4544_);
v___x_4547_ = l_Lasm_JS_Web_Support_args(v___x_4546_);
v___x_4548_ = lean_unsigned_to_nat(0u);
v___x_4549_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4542_, v___x_4547_);
v___x_4550_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4548_, v___x_4540_, v___x_4549_, v___f_4539_);
return v___x_4550_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create___boxed(lean_object* v_path_4562_, lean_object* v_a_4563_){
_start:
{
lean_object* v_res_4564_; 
v_res_4564_ = l_Lasm_JS_Deno_create(v_path_4562_);
return v_res_4564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync(lean_object* v_path_4573_){
_start:
{
uint8_t v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___y_4579_; 
v___x_4575_ = 0;
v___x_4576_ = lean_unsigned_to_nat(1u);
v___x_4577_ = ((lean_object*)(l_Lasm_JS_Deno_createSync___closed__2));
if (lean_obj_tag(v_path_4573_) == 0)
{
lean_object* v_value_4600_; lean_object* v___x_4602_; uint8_t v_isShared_4603_; uint8_t v_isSharedCheck_4607_; 
v_value_4600_ = lean_ctor_get(v_path_4573_, 0);
v_isSharedCheck_4607_ = !lean_is_exclusive(v_path_4573_);
if (v_isSharedCheck_4607_ == 0)
{
v___x_4602_ = v_path_4573_;
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
else
{
lean_inc(v_value_4600_);
lean_dec(v_path_4573_);
v___x_4602_ = lean_box(0);
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
v_resetjp_4601_:
{
lean_object* v___x_4605_; 
if (v_isShared_4603_ == 0)
{
lean_ctor_set_tag(v___x_4602_, 4);
v___x_4605_ = v___x_4602_;
goto v_reusejp_4604_;
}
else
{
lean_object* v_reuseFailAlloc_4606_; 
v_reuseFailAlloc_4606_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4606_, 0, v_value_4600_);
v___x_4605_ = v_reuseFailAlloc_4606_;
goto v_reusejp_4604_;
}
v_reusejp_4604_:
{
v___y_4579_ = v___x_4605_;
goto v___jp_4578_;
}
}
}
else
{
lean_object* v_value_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; 
v_value_4608_ = lean_ctor_get(v_path_4573_, 0);
lean_inc(v_value_4608_);
lean_dec_ref_known(v_path_4573_, 1);
v___x_4609_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4610_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4610_, 0, v_value_4608_);
lean_ctor_set(v___x_4610_, 1, v___x_4609_);
v___y_4579_ = v___x_4610_;
goto v___jp_4578_;
}
v___jp_4578_:
{
lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; 
v___x_4580_ = lean_mk_empty_array_with_capacity(v___x_4576_);
v___x_4581_ = lean_array_push(v___x_4580_, v___y_4579_);
v___x_4582_ = l_Lasm_JS_Web_Support_args(v___x_4581_);
v___x_4583_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4577_, v___x_4582_, v___x_4575_);
if (lean_obj_tag(v___x_4583_) == 0)
{
lean_object* v_a_4584_; lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4591_; 
v_a_4584_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4591_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4591_ == 0)
{
v___x_4586_ = v___x_4583_;
v_isShared_4587_ = v_isSharedCheck_4591_;
goto v_resetjp_4585_;
}
else
{
lean_inc(v_a_4584_);
lean_dec(v___x_4583_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4591_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
lean_object* v___x_4589_; 
if (v_isShared_4587_ == 0)
{
v___x_4589_ = v___x_4586_;
goto v_reusejp_4588_;
}
else
{
lean_object* v_reuseFailAlloc_4590_; 
v_reuseFailAlloc_4590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4590_, 0, v_a_4584_);
v___x_4589_ = v_reuseFailAlloc_4590_;
goto v_reusejp_4588_;
}
v_reusejp_4588_:
{
return v___x_4589_;
}
}
}
else
{
lean_object* v_a_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4599_; 
v_a_4592_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4599_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4599_ == 0)
{
v___x_4594_ = v___x_4583_;
v_isShared_4595_ = v_isSharedCheck_4599_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_a_4592_);
lean_dec(v___x_4583_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4599_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v___x_4597_; 
if (v_isShared_4595_ == 0)
{
v___x_4597_ = v___x_4594_;
goto v_reusejp_4596_;
}
else
{
lean_object* v_reuseFailAlloc_4598_; 
v_reuseFailAlloc_4598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4598_, 0, v_a_4592_);
v___x_4597_ = v_reuseFailAlloc_4598_;
goto v_reusejp_4596_;
}
v_reusejp_4596_:
{
return v___x_4597_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync___boxed(lean_object* v_path_4611_, lean_object* v_a_4612_){
_start:
{
lean_object* v_res_4613_; 
v_res_4613_ = l_Lasm_JS_Deno_createSync(v_path_4611_);
return v_res_4613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(lean_object* v_x_4614_){
_start:
{
if (lean_obj_tag(v_x_4614_) == 0)
{
lean_object* v___x_4615_; 
v___x_4615_ = lean_box(0);
return v___x_4615_;
}
else
{
lean_object* v_val_4616_; lean_object* v_recursive_4617_; lean_object* v_mode_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4635_; 
v_val_4616_ = lean_ctor_get(v_x_4614_, 0);
lean_inc(v_val_4616_);
lean_dec_ref_known(v_x_4614_, 1);
v_recursive_4617_ = lean_ctor_get(v_val_4616_, 0);
v_mode_4618_ = lean_ctor_get(v_val_4616_, 1);
v_isSharedCheck_4635_ = !lean_is_exclusive(v_val_4616_);
if (v_isSharedCheck_4635_ == 0)
{
v___x_4620_ = v_val_4616_;
v_isShared_4621_ = v_isSharedCheck_4635_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_mode_4618_);
lean_inc(v_recursive_4617_);
lean_dec(v_val_4616_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4635_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4625_; 
v___x_4622_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_4623_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_4617_);
lean_dec(v_recursive_4617_);
if (v_isShared_4621_ == 0)
{
lean_ctor_set(v___x_4620_, 1, v___x_4623_);
lean_ctor_set(v___x_4620_, 0, v___x_4622_);
v___x_4625_ = v___x_4620_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4634_; 
v_reuseFailAlloc_4634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4634_, 0, v___x_4622_);
lean_ctor_set(v_reuseFailAlloc_4634_, 1, v___x_4623_);
v___x_4625_ = v_reuseFailAlloc_4634_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4626_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4627_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4618_);
lean_dec(v_mode_4618_);
v___x_4628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4626_);
lean_ctor_set(v___x_4628_, 1, v___x_4627_);
v___x_4629_ = lean_unsigned_to_nat(2u);
v___x_4630_ = lean_mk_empty_array_with_capacity(v___x_4629_);
v___x_4631_ = lean_array_push(v___x_4630_, v___x_4625_);
v___x_4632_ = lean_array_push(v___x_4631_, v___x_4628_);
v___x_4633_ = l_Lasm_JS_Web_Support_fields(v___x_4632_);
lean_dec_ref(v___x_4632_);
return v___x_4633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir(lean_object* v_path_4644_, lean_object* v_options_4645_){
_start:
{
lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___y_4650_; 
v___x_4647_ = lean_unsigned_to_nat(2u);
v___x_4648_ = ((lean_object*)(l_Lasm_JS_Deno_mkdir___closed__2));
if (lean_obj_tag(v_path_4644_) == 0)
{
lean_object* v_value_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
v_value_4657_ = lean_ctor_get(v_path_4644_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v_path_4644_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v_path_4644_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_value_4657_);
lean_dec(v_path_4644_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
lean_ctor_set_tag(v___x_4659_, 4);
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_value_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
v___y_4650_ = v___x_4662_;
goto v___jp_4649_;
}
}
}
else
{
lean_object* v_value_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; 
v_value_4665_ = lean_ctor_get(v_path_4644_, 0);
lean_inc(v_value_4665_);
lean_dec_ref_known(v_path_4644_, 1);
v___x_4666_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4667_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4667_, 0, v_value_4665_);
lean_ctor_set(v___x_4667_, 1, v___x_4666_);
v___y_4650_ = v___x_4667_;
goto v___jp_4649_;
}
v___jp_4649_:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4651_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4645_);
v___x_4652_ = lean_mk_empty_array_with_capacity(v___x_4647_);
v___x_4653_ = lean_array_push(v___x_4652_, v___y_4650_);
v___x_4654_ = lean_array_push(v___x_4653_, v___x_4651_);
v___x_4655_ = l_Lasm_JS_Web_Support_args(v___x_4654_);
v___x_4656_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4648_, v___x_4655_);
return v___x_4656_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir___boxed(lean_object* v_path_4668_, lean_object* v_options_4669_, lean_object* v_a_4670_){
_start:
{
lean_object* v_res_4671_; 
v_res_4671_ = l_Lasm_JS_Deno_mkdir(v_path_4668_, v_options_4669_);
return v_res_4671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync(lean_object* v_path_4680_, lean_object* v_options_4681_){
_start:
{
uint8_t v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___y_4687_; 
v___x_4683_ = 0;
v___x_4684_ = lean_unsigned_to_nat(2u);
v___x_4685_ = ((lean_object*)(l_Lasm_JS_Deno_mkdirSync___closed__2));
if (lean_obj_tag(v_path_4680_) == 0)
{
lean_object* v_value_4694_; lean_object* v___x_4696_; uint8_t v_isShared_4697_; uint8_t v_isSharedCheck_4701_; 
v_value_4694_ = lean_ctor_get(v_path_4680_, 0);
v_isSharedCheck_4701_ = !lean_is_exclusive(v_path_4680_);
if (v_isSharedCheck_4701_ == 0)
{
v___x_4696_ = v_path_4680_;
v_isShared_4697_ = v_isSharedCheck_4701_;
goto v_resetjp_4695_;
}
else
{
lean_inc(v_value_4694_);
lean_dec(v_path_4680_);
v___x_4696_ = lean_box(0);
v_isShared_4697_ = v_isSharedCheck_4701_;
goto v_resetjp_4695_;
}
v_resetjp_4695_:
{
lean_object* v___x_4699_; 
if (v_isShared_4697_ == 0)
{
lean_ctor_set_tag(v___x_4696_, 4);
v___x_4699_ = v___x_4696_;
goto v_reusejp_4698_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v_value_4694_);
v___x_4699_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4698_;
}
v_reusejp_4698_:
{
v___y_4687_ = v___x_4699_;
goto v___jp_4686_;
}
}
}
else
{
lean_object* v_value_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; 
v_value_4702_ = lean_ctor_get(v_path_4680_, 0);
lean_inc(v_value_4702_);
lean_dec_ref_known(v_path_4680_, 1);
v___x_4703_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4704_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4704_, 0, v_value_4702_);
lean_ctor_set(v___x_4704_, 1, v___x_4703_);
v___y_4687_ = v___x_4704_;
goto v___jp_4686_;
}
v___jp_4686_:
{
lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; 
v___x_4688_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4681_);
v___x_4689_ = lean_mk_empty_array_with_capacity(v___x_4684_);
v___x_4690_ = lean_array_push(v___x_4689_, v___y_4687_);
v___x_4691_ = lean_array_push(v___x_4690_, v___x_4688_);
v___x_4692_ = l_Lasm_JS_Web_Support_args(v___x_4691_);
v___x_4693_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4685_, v___x_4692_, v___x_4683_);
return v___x_4693_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync___boxed(lean_object* v_path_4705_, lean_object* v_options_4706_, lean_object* v_a_4707_){
_start:
{
lean_object* v_res_4708_; 
v_res_4708_ = l_Lasm_JS_Deno_mkdirSync(v_path_4705_, v_options_4706_);
return v_res_4708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(lean_object* v_x_4709_){
_start:
{
if (lean_obj_tag(v_x_4709_) == 0)
{
lean_object* v___x_4710_; 
v___x_4710_ = lean_box(0);
return v___x_4710_;
}
else
{
lean_object* v_val_4711_; lean_object* v_dir_4712_; lean_object* v_prefix_4713_; lean_object* v_suffix_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; 
v_val_4711_ = lean_ctor_get(v_x_4709_, 0);
lean_inc(v_val_4711_);
lean_dec_ref_known(v_x_4709_, 1);
v_dir_4712_ = lean_ctor_get(v_val_4711_, 0);
lean_inc(v_dir_4712_);
v_prefix_4713_ = lean_ctor_get(v_val_4711_, 1);
lean_inc(v_prefix_4713_);
v_suffix_4714_ = lean_ctor_get(v_val_4711_, 2);
lean_inc(v_suffix_4714_);
lean_dec(v_val_4711_);
v___x_4715_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
v___x_4716_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dir_4712_);
v___x_4717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4717_, 0, v___x_4715_);
lean_ctor_set(v___x_4717_, 1, v___x_4716_);
v___x_4718_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0));
v___x_4719_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_4713_);
v___x_4720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4718_);
lean_ctor_set(v___x_4720_, 1, v___x_4719_);
v___x_4721_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1));
v___x_4722_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_suffix_4714_);
v___x_4723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4721_);
lean_ctor_set(v___x_4723_, 1, v___x_4722_);
v___x_4724_ = lean_unsigned_to_nat(3u);
v___x_4725_ = lean_mk_empty_array_with_capacity(v___x_4724_);
v___x_4726_ = lean_array_push(v___x_4725_, v___x_4717_);
v___x_4727_ = lean_array_push(v___x_4726_, v___x_4720_);
v___x_4728_ = lean_array_push(v___x_4727_, v___x_4723_);
v___x_4729_ = l_Lasm_JS_Web_Support_fields(v___x_4728_);
lean_dec_ref(v___x_4728_);
return v___x_4729_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(lean_object* v_b_4730_, lean_object* v_args_4731_){
_start:
{
uint8_t v_construct_4733_; lean_object* v___x_4734_; uint32_t v___x_4735_; uint64_t v___x_4736_; uint64_t v___y_4738_; 
v_construct_4733_ = lean_ctor_get_uint8(v_b_4730_, sizeof(void*)*4);
v___x_4734_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4730_);
v___x_4735_ = 214;
v___x_4736_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4733_ == 0)
{
uint64_t v___x_4746_; 
v___x_4746_ = 0ULL;
v___y_4738_ = v___x_4746_;
goto v___jp_4737_;
}
else
{
uint64_t v___x_4747_; 
v___x_4747_ = 4ULL;
v___y_4738_ = v___x_4747_;
goto v___jp_4737_;
}
v___jp_4737_:
{
uint64_t v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
v___x_4739_ = lean_uint64_lor(v___x_4736_, v___y_4738_);
v___x_4740_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4730_, v_args_4731_);
v___x_4741_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4742_ = lean_string_append(v___x_4741_, v___x_4734_);
v___x_4743_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4744_ = lean_string_append(v___x_4742_, v___x_4743_);
v___x_4745_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_4734_, v___x_4735_, v___x_4739_, v___x_4740_, v___x_4744_);
return v___x_4745_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1___boxed(lean_object* v_b_4748_, lean_object* v_args_4749_, lean_object* v_a_4750_){
_start:
{
lean_object* v_res_4751_; 
v_res_4751_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v_b_4748_, v_args_4749_);
lean_dec_ref(v_b_4748_);
return v_res_4751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir(lean_object* v_options_4760_){
_start:
{
lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; 
v___x_4762_ = lean_unsigned_to_nat(1u);
v___x_4763_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDir___closed__2));
v___x_4764_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4760_);
v___x_4765_ = lean_mk_empty_array_with_capacity(v___x_4762_);
v___x_4766_ = lean_array_push(v___x_4765_, v___x_4764_);
v___x_4767_ = l_Lasm_JS_Web_Support_args(v___x_4766_);
v___x_4768_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4763_, v___x_4767_);
return v___x_4768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir___boxed(lean_object* v_options_4769_, lean_object* v_a_4770_){
_start:
{
lean_object* v_res_4771_; 
v_res_4771_ = l_Lasm_JS_Deno_makeTempDir(v_options_4769_);
return v_res_4771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync(lean_object* v_options_4780_){
_start:
{
uint8_t v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4782_ = 0;
v___x_4783_ = lean_unsigned_to_nat(1u);
v___x_4784_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDirSync___closed__2));
v___x_4785_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4780_);
v___x_4786_ = lean_mk_empty_array_with_capacity(v___x_4783_);
v___x_4787_ = lean_array_push(v___x_4786_, v___x_4785_);
v___x_4788_ = l_Lasm_JS_Web_Support_args(v___x_4787_);
v___x_4789_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4784_, v___x_4788_, v___x_4782_);
return v___x_4789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync___boxed(lean_object* v_options_4790_, lean_object* v_a_4791_){
_start:
{
lean_object* v_res_4792_; 
v_res_4792_ = l_Lasm_JS_Deno_makeTempDirSync(v_options_4790_);
return v_res_4792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile(lean_object* v_options_4801_){
_start:
{
lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; 
v___x_4803_ = lean_unsigned_to_nat(1u);
v___x_4804_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFile___closed__2));
v___x_4805_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4801_);
v___x_4806_ = lean_mk_empty_array_with_capacity(v___x_4803_);
v___x_4807_ = lean_array_push(v___x_4806_, v___x_4805_);
v___x_4808_ = l_Lasm_JS_Web_Support_args(v___x_4807_);
v___x_4809_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4804_, v___x_4808_);
return v___x_4809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile___boxed(lean_object* v_options_4810_, lean_object* v_a_4811_){
_start:
{
lean_object* v_res_4812_; 
v_res_4812_ = l_Lasm_JS_Deno_makeTempFile(v_options_4810_);
return v_res_4812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync(lean_object* v_options_4821_){
_start:
{
uint8_t v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4823_ = 0;
v___x_4824_ = lean_unsigned_to_nat(1u);
v___x_4825_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFileSync___closed__2));
v___x_4826_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4821_);
v___x_4827_ = lean_mk_empty_array_with_capacity(v___x_4824_);
v___x_4828_ = lean_array_push(v___x_4827_, v___x_4826_);
v___x_4829_ = l_Lasm_JS_Web_Support_args(v___x_4828_);
v___x_4830_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4825_, v___x_4829_, v___x_4823_);
return v___x_4830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync___boxed(lean_object* v_options_4831_, lean_object* v_a_4832_){
_start:
{
lean_object* v_res_4833_; 
v_res_4833_ = l_Lasm_JS_Deno_makeTempFileSync(v_options_4831_);
return v_res_4833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod(lean_object* v_path_4842_, double v_mode_4843_){
_start:
{
lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___y_4848_; 
v___x_4845_ = lean_unsigned_to_nat(2u);
v___x_4846_ = ((lean_object*)(l_Lasm_JS_Deno_chmod___closed__2));
if (lean_obj_tag(v_path_4842_) == 0)
{
lean_object* v_value_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4862_; 
v_value_4855_ = lean_ctor_get(v_path_4842_, 0);
v_isSharedCheck_4862_ = !lean_is_exclusive(v_path_4842_);
if (v_isSharedCheck_4862_ == 0)
{
v___x_4857_ = v_path_4842_;
v_isShared_4858_ = v_isSharedCheck_4862_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_value_4855_);
lean_dec(v_path_4842_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4862_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
lean_object* v___x_4860_; 
if (v_isShared_4858_ == 0)
{
lean_ctor_set_tag(v___x_4857_, 4);
v___x_4860_ = v___x_4857_;
goto v_reusejp_4859_;
}
else
{
lean_object* v_reuseFailAlloc_4861_; 
v_reuseFailAlloc_4861_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4861_, 0, v_value_4855_);
v___x_4860_ = v_reuseFailAlloc_4861_;
goto v_reusejp_4859_;
}
v_reusejp_4859_:
{
v___y_4848_ = v___x_4860_;
goto v___jp_4847_;
}
}
}
else
{
lean_object* v_value_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; 
v_value_4863_ = lean_ctor_get(v_path_4842_, 0);
lean_inc(v_value_4863_);
lean_dec_ref_known(v_path_4842_, 1);
v___x_4864_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4865_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4865_, 0, v_value_4863_);
lean_ctor_set(v___x_4865_, 1, v___x_4864_);
v___y_4848_ = v___x_4865_;
goto v___jp_4847_;
}
v___jp_4847_:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; 
v___x_4849_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4849_, 0, v_mode_4843_);
v___x_4850_ = lean_mk_empty_array_with_capacity(v___x_4845_);
v___x_4851_ = lean_array_push(v___x_4850_, v___y_4848_);
v___x_4852_ = lean_array_push(v___x_4851_, v___x_4849_);
v___x_4853_ = l_Lasm_JS_Web_Support_args(v___x_4852_);
v___x_4854_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4846_, v___x_4853_);
return v___x_4854_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod___boxed(lean_object* v_path_4866_, lean_object* v_mode_4867_, lean_object* v_a_4868_){
_start:
{
double v_mode_boxed_4869_; lean_object* v_res_4870_; 
v_mode_boxed_4869_ = lean_unbox_float(v_mode_4867_);
lean_dec_ref(v_mode_4867_);
v_res_4870_ = l_Lasm_JS_Deno_chmod(v_path_4866_, v_mode_boxed_4869_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync(lean_object* v_path_4879_, double v_mode_4880_){
_start:
{
uint8_t v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___y_4886_; 
v___x_4882_ = 0;
v___x_4883_ = lean_unsigned_to_nat(2u);
v___x_4884_ = ((lean_object*)(l_Lasm_JS_Deno_chmodSync___closed__2));
if (lean_obj_tag(v_path_4879_) == 0)
{
lean_object* v_value_4893_; lean_object* v___x_4895_; uint8_t v_isShared_4896_; uint8_t v_isSharedCheck_4900_; 
v_value_4893_ = lean_ctor_get(v_path_4879_, 0);
v_isSharedCheck_4900_ = !lean_is_exclusive(v_path_4879_);
if (v_isSharedCheck_4900_ == 0)
{
v___x_4895_ = v_path_4879_;
v_isShared_4896_ = v_isSharedCheck_4900_;
goto v_resetjp_4894_;
}
else
{
lean_inc(v_value_4893_);
lean_dec(v_path_4879_);
v___x_4895_ = lean_box(0);
v_isShared_4896_ = v_isSharedCheck_4900_;
goto v_resetjp_4894_;
}
v_resetjp_4894_:
{
lean_object* v___x_4898_; 
if (v_isShared_4896_ == 0)
{
lean_ctor_set_tag(v___x_4895_, 4);
v___x_4898_ = v___x_4895_;
goto v_reusejp_4897_;
}
else
{
lean_object* v_reuseFailAlloc_4899_; 
v_reuseFailAlloc_4899_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4899_, 0, v_value_4893_);
v___x_4898_ = v_reuseFailAlloc_4899_;
goto v_reusejp_4897_;
}
v_reusejp_4897_:
{
v___y_4886_ = v___x_4898_;
goto v___jp_4885_;
}
}
}
else
{
lean_object* v_value_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; 
v_value_4901_ = lean_ctor_get(v_path_4879_, 0);
lean_inc(v_value_4901_);
lean_dec_ref_known(v_path_4879_, 1);
v___x_4902_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4903_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4903_, 0, v_value_4901_);
lean_ctor_set(v___x_4903_, 1, v___x_4902_);
v___y_4886_ = v___x_4903_;
goto v___jp_4885_;
}
v___jp_4885_:
{
lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; 
v___x_4887_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4887_, 0, v_mode_4880_);
v___x_4888_ = lean_mk_empty_array_with_capacity(v___x_4883_);
v___x_4889_ = lean_array_push(v___x_4888_, v___y_4886_);
v___x_4890_ = lean_array_push(v___x_4889_, v___x_4887_);
v___x_4891_ = l_Lasm_JS_Web_Support_args(v___x_4890_);
v___x_4892_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4884_, v___x_4891_, v___x_4882_);
return v___x_4892_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync___boxed(lean_object* v_path_4904_, lean_object* v_mode_4905_, lean_object* v_a_4906_){
_start:
{
double v_mode_boxed_4907_; lean_object* v_res_4908_; 
v_mode_boxed_4907_ = lean_unbox_float(v_mode_4905_);
lean_dec_ref(v_mode_4905_);
v_res_4908_ = l_Lasm_JS_Deno_chmodSync(v_path_4904_, v_mode_boxed_4907_);
return v_res_4908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown(lean_object* v_path_4917_, lean_object* v_uid_4918_, lean_object* v_gid_4919_){
_start:
{
lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___y_4924_; lean_object* v___y_4925_; lean_object* v___y_4926_; lean_object* v___y_4934_; lean_object* v___y_4935_; lean_object* v___y_4941_; 
v___x_4921_ = lean_unsigned_to_nat(3u);
v___x_4922_ = ((lean_object*)(l_Lasm_JS_Deno_chown___closed__2));
if (lean_obj_tag(v_path_4917_) == 0)
{
lean_object* v_value_4946_; lean_object* v___x_4948_; uint8_t v_isShared_4949_; uint8_t v_isSharedCheck_4953_; 
v_value_4946_ = lean_ctor_get(v_path_4917_, 0);
v_isSharedCheck_4953_ = !lean_is_exclusive(v_path_4917_);
if (v_isSharedCheck_4953_ == 0)
{
v___x_4948_ = v_path_4917_;
v_isShared_4949_ = v_isSharedCheck_4953_;
goto v_resetjp_4947_;
}
else
{
lean_inc(v_value_4946_);
lean_dec(v_path_4917_);
v___x_4948_ = lean_box(0);
v_isShared_4949_ = v_isSharedCheck_4953_;
goto v_resetjp_4947_;
}
v_resetjp_4947_:
{
lean_object* v___x_4951_; 
if (v_isShared_4949_ == 0)
{
lean_ctor_set_tag(v___x_4948_, 4);
v___x_4951_ = v___x_4948_;
goto v_reusejp_4950_;
}
else
{
lean_object* v_reuseFailAlloc_4952_; 
v_reuseFailAlloc_4952_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4952_, 0, v_value_4946_);
v___x_4951_ = v_reuseFailAlloc_4952_;
goto v_reusejp_4950_;
}
v_reusejp_4950_:
{
v___y_4941_ = v___x_4951_;
goto v___jp_4940_;
}
}
}
else
{
lean_object* v_value_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; 
v_value_4954_ = lean_ctor_get(v_path_4917_, 0);
lean_inc(v_value_4954_);
lean_dec_ref_known(v_path_4917_, 1);
v___x_4955_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4956_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4956_, 0, v_value_4954_);
lean_ctor_set(v___x_4956_, 1, v___x_4955_);
v___y_4941_ = v___x_4956_;
goto v___jp_4940_;
}
v___jp_4923_:
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; 
v___x_4927_ = lean_mk_empty_array_with_capacity(v___x_4921_);
v___x_4928_ = lean_array_push(v___x_4927_, v___y_4924_);
v___x_4929_ = lean_array_push(v___x_4928_, v___y_4925_);
v___x_4930_ = lean_array_push(v___x_4929_, v___y_4926_);
v___x_4931_ = l_Lasm_JS_Web_Support_args(v___x_4930_);
v___x_4932_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4922_, v___x_4931_);
return v___x_4932_;
}
v___jp_4933_:
{
if (lean_obj_tag(v_gid_4919_) == 0)
{
lean_object* v___x_4936_; 
v___x_4936_ = lean_box(1);
v___y_4924_ = v___y_4934_;
v___y_4925_ = v___y_4935_;
v___y_4926_ = v___x_4936_;
goto v___jp_4923_;
}
else
{
lean_object* v_val_4937_; lean_object* v___x_4938_; double v___x_4939_; 
v_val_4937_ = lean_ctor_get(v_gid_4919_, 0);
v___x_4938_ = lean_alloc_ctor(3, 0, 8);
v___x_4939_ = lean_unbox_float(v_val_4937_);
lean_ctor_set_float(v___x_4938_, 0, v___x_4939_);
v___y_4924_ = v___y_4934_;
v___y_4925_ = v___y_4935_;
v___y_4926_ = v___x_4938_;
goto v___jp_4923_;
}
}
v___jp_4940_:
{
if (lean_obj_tag(v_uid_4918_) == 0)
{
lean_object* v___x_4942_; 
v___x_4942_ = lean_box(1);
v___y_4934_ = v___y_4941_;
v___y_4935_ = v___x_4942_;
goto v___jp_4933_;
}
else
{
lean_object* v_val_4943_; lean_object* v___x_4944_; double v___x_4945_; 
v_val_4943_ = lean_ctor_get(v_uid_4918_, 0);
v___x_4944_ = lean_alloc_ctor(3, 0, 8);
v___x_4945_ = lean_unbox_float(v_val_4943_);
lean_ctor_set_float(v___x_4944_, 0, v___x_4945_);
v___y_4934_ = v___y_4941_;
v___y_4935_ = v___x_4944_;
goto v___jp_4933_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown___boxed(lean_object* v_path_4957_, lean_object* v_uid_4958_, lean_object* v_gid_4959_, lean_object* v_a_4960_){
_start:
{
lean_object* v_res_4961_; 
v_res_4961_ = l_Lasm_JS_Deno_chown(v_path_4957_, v_uid_4958_, v_gid_4959_);
lean_dec(v_gid_4959_);
lean_dec(v_uid_4958_);
return v_res_4961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync(lean_object* v_path_4970_, lean_object* v_uid_4971_, lean_object* v_gid_4972_){
_start:
{
uint8_t v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___y_4978_; lean_object* v___y_4979_; lean_object* v___y_4980_; lean_object* v___y_4988_; lean_object* v___y_4989_; lean_object* v___y_4995_; 
v___x_4974_ = 0;
v___x_4975_ = lean_unsigned_to_nat(3u);
v___x_4976_ = ((lean_object*)(l_Lasm_JS_Deno_chownSync___closed__2));
if (lean_obj_tag(v_path_4970_) == 0)
{
lean_object* v_value_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5007_; 
v_value_5000_ = lean_ctor_get(v_path_4970_, 0);
v_isSharedCheck_5007_ = !lean_is_exclusive(v_path_4970_);
if (v_isSharedCheck_5007_ == 0)
{
v___x_5002_ = v_path_4970_;
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_value_5000_);
lean_dec(v_path_4970_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5005_; 
if (v_isShared_5003_ == 0)
{
lean_ctor_set_tag(v___x_5002_, 4);
v___x_5005_ = v___x_5002_;
goto v_reusejp_5004_;
}
else
{
lean_object* v_reuseFailAlloc_5006_; 
v_reuseFailAlloc_5006_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5006_, 0, v_value_5000_);
v___x_5005_ = v_reuseFailAlloc_5006_;
goto v_reusejp_5004_;
}
v_reusejp_5004_:
{
v___y_4995_ = v___x_5005_;
goto v___jp_4994_;
}
}
}
else
{
lean_object* v_value_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; 
v_value_5008_ = lean_ctor_get(v_path_4970_, 0);
lean_inc(v_value_5008_);
lean_dec_ref_known(v_path_4970_, 1);
v___x_5009_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5010_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5010_, 0, v_value_5008_);
lean_ctor_set(v___x_5010_, 1, v___x_5009_);
v___y_4995_ = v___x_5010_;
goto v___jp_4994_;
}
v___jp_4977_:
{
lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; 
v___x_4981_ = lean_mk_empty_array_with_capacity(v___x_4975_);
v___x_4982_ = lean_array_push(v___x_4981_, v___y_4979_);
v___x_4983_ = lean_array_push(v___x_4982_, v___y_4978_);
v___x_4984_ = lean_array_push(v___x_4983_, v___y_4980_);
v___x_4985_ = l_Lasm_JS_Web_Support_args(v___x_4984_);
v___x_4986_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4976_, v___x_4985_, v___x_4974_);
return v___x_4986_;
}
v___jp_4987_:
{
if (lean_obj_tag(v_gid_4972_) == 0)
{
lean_object* v___x_4990_; 
v___x_4990_ = lean_box(1);
v___y_4978_ = v___y_4989_;
v___y_4979_ = v___y_4988_;
v___y_4980_ = v___x_4990_;
goto v___jp_4977_;
}
else
{
lean_object* v_val_4991_; lean_object* v___x_4992_; double v___x_4993_; 
v_val_4991_ = lean_ctor_get(v_gid_4972_, 0);
v___x_4992_ = lean_alloc_ctor(3, 0, 8);
v___x_4993_ = lean_unbox_float(v_val_4991_);
lean_ctor_set_float(v___x_4992_, 0, v___x_4993_);
v___y_4978_ = v___y_4989_;
v___y_4979_ = v___y_4988_;
v___y_4980_ = v___x_4992_;
goto v___jp_4977_;
}
}
v___jp_4994_:
{
if (lean_obj_tag(v_uid_4971_) == 0)
{
lean_object* v___x_4996_; 
v___x_4996_ = lean_box(1);
v___y_4988_ = v___y_4995_;
v___y_4989_ = v___x_4996_;
goto v___jp_4987_;
}
else
{
lean_object* v_val_4997_; lean_object* v___x_4998_; double v___x_4999_; 
v_val_4997_ = lean_ctor_get(v_uid_4971_, 0);
v___x_4998_ = lean_alloc_ctor(3, 0, 8);
v___x_4999_ = lean_unbox_float(v_val_4997_);
lean_ctor_set_float(v___x_4998_, 0, v___x_4999_);
v___y_4988_ = v___y_4995_;
v___y_4989_ = v___x_4998_;
goto v___jp_4987_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync___boxed(lean_object* v_path_5011_, lean_object* v_uid_5012_, lean_object* v_gid_5013_, lean_object* v_a_5014_){
_start:
{
lean_object* v_res_5015_; 
v_res_5015_ = l_Lasm_JS_Deno_chownSync(v_path_5011_, v_uid_5012_, v_gid_5013_);
lean_dec(v_gid_5013_);
lean_dec(v_uid_5012_);
return v_res_5015_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(lean_object* v_x_5016_){
_start:
{
if (lean_obj_tag(v_x_5016_) == 0)
{
lean_object* v___x_5017_; 
v___x_5017_ = lean_box(0);
return v___x_5017_;
}
else
{
lean_object* v_val_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; 
v_val_5018_ = lean_ctor_get(v_x_5016_, 0);
v___x_5019_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_5020_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_5018_);
v___x_5021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5021_, 0, v___x_5019_);
lean_ctor_set(v___x_5021_, 1, v___x_5020_);
v___x_5022_ = lean_unsigned_to_nat(1u);
v___x_5023_ = lean_mk_empty_array_with_capacity(v___x_5022_);
v___x_5024_ = lean_array_push(v___x_5023_, v___x_5021_);
v___x_5025_ = l_Lasm_JS_Web_Support_fields(v___x_5024_);
lean_dec_ref(v___x_5024_);
return v___x_5025_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0___boxed(lean_object* v_x_5026_){
_start:
{
lean_object* v_res_5027_; 
v_res_5027_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_x_5026_);
lean_dec(v_x_5026_);
return v_res_5027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove(lean_object* v_path_5036_, lean_object* v_options_5037_){
_start:
{
lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___y_5042_; 
v___x_5039_ = lean_unsigned_to_nat(2u);
v___x_5040_ = ((lean_object*)(l_Lasm_JS_Deno_remove___closed__2));
if (lean_obj_tag(v_path_5036_) == 0)
{
lean_object* v_value_5049_; lean_object* v___x_5051_; uint8_t v_isShared_5052_; uint8_t v_isSharedCheck_5056_; 
v_value_5049_ = lean_ctor_get(v_path_5036_, 0);
v_isSharedCheck_5056_ = !lean_is_exclusive(v_path_5036_);
if (v_isSharedCheck_5056_ == 0)
{
v___x_5051_ = v_path_5036_;
v_isShared_5052_ = v_isSharedCheck_5056_;
goto v_resetjp_5050_;
}
else
{
lean_inc(v_value_5049_);
lean_dec(v_path_5036_);
v___x_5051_ = lean_box(0);
v_isShared_5052_ = v_isSharedCheck_5056_;
goto v_resetjp_5050_;
}
v_resetjp_5050_:
{
lean_object* v___x_5054_; 
if (v_isShared_5052_ == 0)
{
lean_ctor_set_tag(v___x_5051_, 4);
v___x_5054_ = v___x_5051_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v_value_5049_);
v___x_5054_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
v___y_5042_ = v___x_5054_;
goto v___jp_5041_;
}
}
}
else
{
lean_object* v_value_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; 
v_value_5057_ = lean_ctor_get(v_path_5036_, 0);
lean_inc(v_value_5057_);
lean_dec_ref_known(v_path_5036_, 1);
v___x_5058_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5059_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5059_, 0, v_value_5057_);
lean_ctor_set(v___x_5059_, 1, v___x_5058_);
v___y_5042_ = v___x_5059_;
goto v___jp_5041_;
}
v___jp_5041_:
{
lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; 
v___x_5043_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5037_);
v___x_5044_ = lean_mk_empty_array_with_capacity(v___x_5039_);
v___x_5045_ = lean_array_push(v___x_5044_, v___y_5042_);
v___x_5046_ = lean_array_push(v___x_5045_, v___x_5043_);
v___x_5047_ = l_Lasm_JS_Web_Support_args(v___x_5046_);
v___x_5048_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5040_, v___x_5047_);
return v___x_5048_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove___boxed(lean_object* v_path_5060_, lean_object* v_options_5061_, lean_object* v_a_5062_){
_start:
{
lean_object* v_res_5063_; 
v_res_5063_ = l_Lasm_JS_Deno_remove(v_path_5060_, v_options_5061_);
lean_dec(v_options_5061_);
return v_res_5063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync(lean_object* v_path_5072_, lean_object* v_options_5073_){
_start:
{
uint8_t v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___y_5079_; 
v___x_5075_ = 0;
v___x_5076_ = lean_unsigned_to_nat(2u);
v___x_5077_ = ((lean_object*)(l_Lasm_JS_Deno_removeSync___closed__2));
if (lean_obj_tag(v_path_5072_) == 0)
{
lean_object* v_value_5086_; lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5093_; 
v_value_5086_ = lean_ctor_get(v_path_5072_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v_path_5072_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5088_ = v_path_5072_;
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
else
{
lean_inc(v_value_5086_);
lean_dec(v_path_5072_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
v_resetjp_5087_:
{
lean_object* v___x_5091_; 
if (v_isShared_5089_ == 0)
{
lean_ctor_set_tag(v___x_5088_, 4);
v___x_5091_ = v___x_5088_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v_value_5086_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
v___y_5079_ = v___x_5091_;
goto v___jp_5078_;
}
}
}
else
{
lean_object* v_value_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; 
v_value_5094_ = lean_ctor_get(v_path_5072_, 0);
lean_inc(v_value_5094_);
lean_dec_ref_known(v_path_5072_, 1);
v___x_5095_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5096_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5096_, 0, v_value_5094_);
lean_ctor_set(v___x_5096_, 1, v___x_5095_);
v___y_5079_ = v___x_5096_;
goto v___jp_5078_;
}
v___jp_5078_:
{
lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; 
v___x_5080_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5073_);
v___x_5081_ = lean_mk_empty_array_with_capacity(v___x_5076_);
v___x_5082_ = lean_array_push(v___x_5081_, v___y_5079_);
v___x_5083_ = lean_array_push(v___x_5082_, v___x_5080_);
v___x_5084_ = l_Lasm_JS_Web_Support_args(v___x_5083_);
v___x_5085_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5077_, v___x_5084_, v___x_5075_);
return v___x_5085_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync___boxed(lean_object* v_path_5097_, lean_object* v_options_5098_, lean_object* v_a_5099_){
_start:
{
lean_object* v_res_5100_; 
v_res_5100_ = l_Lasm_JS_Deno_removeSync(v_path_5097_, v_options_5098_);
lean_dec(v_options_5098_);
return v_res_5100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync(lean_object* v_oldpath_5109_, lean_object* v_newpath_5110_){
_start:
{
uint8_t v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___y_5116_; lean_object* v___y_5117_; lean_object* v___y_5124_; 
v___x_5112_ = 0;
v___x_5113_ = lean_unsigned_to_nat(2u);
v___x_5114_ = ((lean_object*)(l_Lasm_JS_Deno_renameSync___closed__2));
if (lean_obj_tag(v_oldpath_5109_) == 0)
{
lean_object* v_value_5136_; lean_object* v___x_5138_; uint8_t v_isShared_5139_; uint8_t v_isSharedCheck_5143_; 
v_value_5136_ = lean_ctor_get(v_oldpath_5109_, 0);
v_isSharedCheck_5143_ = !lean_is_exclusive(v_oldpath_5109_);
if (v_isSharedCheck_5143_ == 0)
{
v___x_5138_ = v_oldpath_5109_;
v_isShared_5139_ = v_isSharedCheck_5143_;
goto v_resetjp_5137_;
}
else
{
lean_inc(v_value_5136_);
lean_dec(v_oldpath_5109_);
v___x_5138_ = lean_box(0);
v_isShared_5139_ = v_isSharedCheck_5143_;
goto v_resetjp_5137_;
}
v_resetjp_5137_:
{
lean_object* v___x_5141_; 
if (v_isShared_5139_ == 0)
{
lean_ctor_set_tag(v___x_5138_, 4);
v___x_5141_ = v___x_5138_;
goto v_reusejp_5140_;
}
else
{
lean_object* v_reuseFailAlloc_5142_; 
v_reuseFailAlloc_5142_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5142_, 0, v_value_5136_);
v___x_5141_ = v_reuseFailAlloc_5142_;
goto v_reusejp_5140_;
}
v_reusejp_5140_:
{
v___y_5124_ = v___x_5141_;
goto v___jp_5123_;
}
}
}
else
{
lean_object* v_value_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; 
v_value_5144_ = lean_ctor_get(v_oldpath_5109_, 0);
lean_inc(v_value_5144_);
lean_dec_ref_known(v_oldpath_5109_, 1);
v___x_5145_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5146_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5146_, 0, v_value_5144_);
lean_ctor_set(v___x_5146_, 1, v___x_5145_);
v___y_5124_ = v___x_5146_;
goto v___jp_5123_;
}
v___jp_5115_:
{
lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; 
v___x_5118_ = lean_mk_empty_array_with_capacity(v___x_5113_);
v___x_5119_ = lean_array_push(v___x_5118_, v___y_5116_);
v___x_5120_ = lean_array_push(v___x_5119_, v___y_5117_);
v___x_5121_ = l_Lasm_JS_Web_Support_args(v___x_5120_);
v___x_5122_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5114_, v___x_5121_, v___x_5112_);
return v___x_5122_;
}
v___jp_5123_:
{
if (lean_obj_tag(v_newpath_5110_) == 0)
{
lean_object* v_value_5125_; lean_object* v___x_5127_; uint8_t v_isShared_5128_; uint8_t v_isSharedCheck_5132_; 
v_value_5125_ = lean_ctor_get(v_newpath_5110_, 0);
v_isSharedCheck_5132_ = !lean_is_exclusive(v_newpath_5110_);
if (v_isSharedCheck_5132_ == 0)
{
v___x_5127_ = v_newpath_5110_;
v_isShared_5128_ = v_isSharedCheck_5132_;
goto v_resetjp_5126_;
}
else
{
lean_inc(v_value_5125_);
lean_dec(v_newpath_5110_);
v___x_5127_ = lean_box(0);
v_isShared_5128_ = v_isSharedCheck_5132_;
goto v_resetjp_5126_;
}
v_resetjp_5126_:
{
lean_object* v___x_5130_; 
if (v_isShared_5128_ == 0)
{
lean_ctor_set_tag(v___x_5127_, 4);
v___x_5130_ = v___x_5127_;
goto v_reusejp_5129_;
}
else
{
lean_object* v_reuseFailAlloc_5131_; 
v_reuseFailAlloc_5131_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5131_, 0, v_value_5125_);
v___x_5130_ = v_reuseFailAlloc_5131_;
goto v_reusejp_5129_;
}
v_reusejp_5129_:
{
v___y_5116_ = v___y_5124_;
v___y_5117_ = v___x_5130_;
goto v___jp_5115_;
}
}
}
else
{
lean_object* v_value_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; 
v_value_5133_ = lean_ctor_get(v_newpath_5110_, 0);
lean_inc(v_value_5133_);
lean_dec_ref_known(v_newpath_5110_, 1);
v___x_5134_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5135_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5135_, 0, v_value_5133_);
lean_ctor_set(v___x_5135_, 1, v___x_5134_);
v___y_5116_ = v___y_5124_;
v___y_5117_ = v___x_5135_;
goto v___jp_5115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync___boxed(lean_object* v_oldpath_5147_, lean_object* v_newpath_5148_, lean_object* v_a_5149_){
_start:
{
lean_object* v_res_5150_; 
v_res_5150_ = l_Lasm_JS_Deno_renameSync(v_oldpath_5147_, v_newpath_5148_);
return v_res_5150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename(lean_object* v_oldpath_5159_, lean_object* v_newpath_5160_){
_start:
{
lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___y_5165_; lean_object* v___y_5166_; lean_object* v___y_5173_; 
v___x_5162_ = lean_unsigned_to_nat(2u);
v___x_5163_ = ((lean_object*)(l_Lasm_JS_Deno_rename___closed__2));
if (lean_obj_tag(v_oldpath_5159_) == 0)
{
lean_object* v_value_5185_; lean_object* v___x_5187_; uint8_t v_isShared_5188_; uint8_t v_isSharedCheck_5192_; 
v_value_5185_ = lean_ctor_get(v_oldpath_5159_, 0);
v_isSharedCheck_5192_ = !lean_is_exclusive(v_oldpath_5159_);
if (v_isSharedCheck_5192_ == 0)
{
v___x_5187_ = v_oldpath_5159_;
v_isShared_5188_ = v_isSharedCheck_5192_;
goto v_resetjp_5186_;
}
else
{
lean_inc(v_value_5185_);
lean_dec(v_oldpath_5159_);
v___x_5187_ = lean_box(0);
v_isShared_5188_ = v_isSharedCheck_5192_;
goto v_resetjp_5186_;
}
v_resetjp_5186_:
{
lean_object* v___x_5190_; 
if (v_isShared_5188_ == 0)
{
lean_ctor_set_tag(v___x_5187_, 4);
v___x_5190_ = v___x_5187_;
goto v_reusejp_5189_;
}
else
{
lean_object* v_reuseFailAlloc_5191_; 
v_reuseFailAlloc_5191_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5191_, 0, v_value_5185_);
v___x_5190_ = v_reuseFailAlloc_5191_;
goto v_reusejp_5189_;
}
v_reusejp_5189_:
{
v___y_5173_ = v___x_5190_;
goto v___jp_5172_;
}
}
}
else
{
lean_object* v_value_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; 
v_value_5193_ = lean_ctor_get(v_oldpath_5159_, 0);
lean_inc(v_value_5193_);
lean_dec_ref_known(v_oldpath_5159_, 1);
v___x_5194_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5195_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5195_, 0, v_value_5193_);
lean_ctor_set(v___x_5195_, 1, v___x_5194_);
v___y_5173_ = v___x_5195_;
goto v___jp_5172_;
}
v___jp_5164_:
{
lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; 
v___x_5167_ = lean_mk_empty_array_with_capacity(v___x_5162_);
v___x_5168_ = lean_array_push(v___x_5167_, v___y_5165_);
v___x_5169_ = lean_array_push(v___x_5168_, v___y_5166_);
v___x_5170_ = l_Lasm_JS_Web_Support_args(v___x_5169_);
v___x_5171_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5163_, v___x_5170_);
return v___x_5171_;
}
v___jp_5172_:
{
if (lean_obj_tag(v_newpath_5160_) == 0)
{
lean_object* v_value_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5181_; 
v_value_5174_ = lean_ctor_get(v_newpath_5160_, 0);
v_isSharedCheck_5181_ = !lean_is_exclusive(v_newpath_5160_);
if (v_isSharedCheck_5181_ == 0)
{
v___x_5176_ = v_newpath_5160_;
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_value_5174_);
lean_dec(v_newpath_5160_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5179_; 
if (v_isShared_5177_ == 0)
{
lean_ctor_set_tag(v___x_5176_, 4);
v___x_5179_ = v___x_5176_;
goto v_reusejp_5178_;
}
else
{
lean_object* v_reuseFailAlloc_5180_; 
v_reuseFailAlloc_5180_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5180_, 0, v_value_5174_);
v___x_5179_ = v_reuseFailAlloc_5180_;
goto v_reusejp_5178_;
}
v_reusejp_5178_:
{
v___y_5165_ = v___y_5173_;
v___y_5166_ = v___x_5179_;
goto v___jp_5164_;
}
}
}
else
{
lean_object* v_value_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; 
v_value_5182_ = lean_ctor_get(v_newpath_5160_, 0);
lean_inc(v_value_5182_);
lean_dec_ref_known(v_newpath_5160_, 1);
v___x_5183_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5184_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5184_, 0, v_value_5182_);
lean_ctor_set(v___x_5184_, 1, v___x_5183_);
v___y_5165_ = v___y_5173_;
v___y_5166_ = v___x_5184_;
goto v___jp_5164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename___boxed(lean_object* v_oldpath_5196_, lean_object* v_newpath_5197_, lean_object* v_a_5198_){
_start:
{
lean_object* v_res_5199_; 
v_res_5199_ = l_Lasm_JS_Deno_rename(v_oldpath_5196_, v_newpath_5197_);
return v_res_5199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(lean_object* v_x_5200_){
_start:
{
if (lean_obj_tag(v_x_5200_) == 0)
{
lean_object* v___x_5201_; 
v___x_5201_ = lean_box(0);
return v___x_5201_;
}
else
{
lean_object* v_val_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; 
v_val_5202_ = lean_ctor_get(v_x_5200_, 0);
v___x_5203_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5204_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_5202_);
v___x_5205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5205_, 0, v___x_5203_);
lean_ctor_set(v___x_5205_, 1, v___x_5204_);
v___x_5206_ = lean_unsigned_to_nat(1u);
v___x_5207_ = lean_mk_empty_array_with_capacity(v___x_5206_);
v___x_5208_ = lean_array_push(v___x_5207_, v___x_5205_);
v___x_5209_ = l_Lasm_JS_Web_Support_fields(v___x_5208_);
lean_dec_ref(v___x_5208_);
return v___x_5209_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0___boxed(lean_object* v_x_5210_){
_start:
{
lean_object* v_res_5211_; 
v_res_5211_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_x_5210_);
lean_dec(v_x_5210_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile(lean_object* v_path_5220_, lean_object* v_options_5221_){
_start:
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___y_5226_; 
v___x_5223_ = lean_unsigned_to_nat(2u);
v___x_5224_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFile___closed__2));
if (lean_obj_tag(v_path_5220_) == 0)
{
lean_object* v_value_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5240_; 
v_value_5233_ = lean_ctor_get(v_path_5220_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v_path_5220_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5235_ = v_path_5220_;
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_value_5233_);
lean_dec(v_path_5220_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v___x_5238_; 
if (v_isShared_5236_ == 0)
{
lean_ctor_set_tag(v___x_5235_, 4);
v___x_5238_ = v___x_5235_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_value_5233_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
v___y_5226_ = v___x_5238_;
goto v___jp_5225_;
}
}
}
else
{
lean_object* v_value_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; 
v_value_5241_ = lean_ctor_get(v_path_5220_, 0);
lean_inc(v_value_5241_);
lean_dec_ref_known(v_path_5220_, 1);
v___x_5242_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5243_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5243_, 0, v_value_5241_);
lean_ctor_set(v___x_5243_, 1, v___x_5242_);
v___y_5226_ = v___x_5243_;
goto v___jp_5225_;
}
v___jp_5225_:
{
lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; 
v___x_5227_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5221_);
v___x_5228_ = lean_mk_empty_array_with_capacity(v___x_5223_);
v___x_5229_ = lean_array_push(v___x_5228_, v___y_5226_);
v___x_5230_ = lean_array_push(v___x_5229_, v___x_5227_);
v___x_5231_ = l_Lasm_JS_Web_Support_args(v___x_5230_);
v___x_5232_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5224_, v___x_5231_);
return v___x_5232_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile___boxed(lean_object* v_path_5244_, lean_object* v_options_5245_, lean_object* v_a_5246_){
_start:
{
lean_object* v_res_5247_; 
v_res_5247_ = l_Lasm_JS_Deno_readTextFile(v_path_5244_, v_options_5245_);
lean_dec(v_options_5245_);
return v_res_5247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync(lean_object* v_path_5256_){
_start:
{
uint8_t v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___y_5262_; 
v___x_5258_ = 0;
v___x_5259_ = lean_unsigned_to_nat(1u);
v___x_5260_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFileSync___closed__2));
if (lean_obj_tag(v_path_5256_) == 0)
{
lean_object* v_value_5267_; lean_object* v___x_5269_; uint8_t v_isShared_5270_; uint8_t v_isSharedCheck_5274_; 
v_value_5267_ = lean_ctor_get(v_path_5256_, 0);
v_isSharedCheck_5274_ = !lean_is_exclusive(v_path_5256_);
if (v_isSharedCheck_5274_ == 0)
{
v___x_5269_ = v_path_5256_;
v_isShared_5270_ = v_isSharedCheck_5274_;
goto v_resetjp_5268_;
}
else
{
lean_inc(v_value_5267_);
lean_dec(v_path_5256_);
v___x_5269_ = lean_box(0);
v_isShared_5270_ = v_isSharedCheck_5274_;
goto v_resetjp_5268_;
}
v_resetjp_5268_:
{
lean_object* v___x_5272_; 
if (v_isShared_5270_ == 0)
{
lean_ctor_set_tag(v___x_5269_, 4);
v___x_5272_ = v___x_5269_;
goto v_reusejp_5271_;
}
else
{
lean_object* v_reuseFailAlloc_5273_; 
v_reuseFailAlloc_5273_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5273_, 0, v_value_5267_);
v___x_5272_ = v_reuseFailAlloc_5273_;
goto v_reusejp_5271_;
}
v_reusejp_5271_:
{
v___y_5262_ = v___x_5272_;
goto v___jp_5261_;
}
}
}
else
{
lean_object* v_value_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; 
v_value_5275_ = lean_ctor_get(v_path_5256_, 0);
lean_inc(v_value_5275_);
lean_dec_ref_known(v_path_5256_, 1);
v___x_5276_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5277_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5277_, 0, v_value_5275_);
lean_ctor_set(v___x_5277_, 1, v___x_5276_);
v___y_5262_ = v___x_5277_;
goto v___jp_5261_;
}
v___jp_5261_:
{
lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5263_ = lean_mk_empty_array_with_capacity(v___x_5259_);
v___x_5264_ = lean_array_push(v___x_5263_, v___y_5262_);
v___x_5265_ = l_Lasm_JS_Web_Support_args(v___x_5264_);
v___x_5266_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5260_, v___x_5265_, v___x_5258_);
return v___x_5266_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync___boxed(lean_object* v_path_5278_, lean_object* v_a_5279_){
_start:
{
lean_object* v_res_5280_; 
v_res_5280_ = l_Lasm_JS_Deno_readTextFileSync(v_path_5278_);
return v_res_5280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(lean_object* v_b_5281_, lean_object* v_args_5282_){
_start:
{
uint8_t v_construct_5284_; lean_object* v___x_5285_; uint32_t v___x_5286_; uint64_t v___x_5287_; uint64_t v___y_5289_; 
v_construct_5284_ = lean_ctor_get_uint8(v_b_5281_, sizeof(void*)*4);
v___x_5285_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5281_);
v___x_5286_ = 214;
v___x_5287_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5284_ == 0)
{
uint64_t v___x_5297_; 
v___x_5297_ = 0ULL;
v___y_5289_ = v___x_5297_;
goto v___jp_5288_;
}
else
{
uint64_t v___x_5298_; 
v___x_5298_ = 4ULL;
v___y_5289_ = v___x_5298_;
goto v___jp_5288_;
}
v___jp_5288_:
{
uint64_t v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; 
v___x_5290_ = lean_uint64_lor(v___x_5287_, v___y_5289_);
v___x_5291_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5281_, v_args_5282_);
v___x_5292_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5293_ = lean_string_append(v___x_5292_, v___x_5285_);
v___x_5294_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5295_ = lean_string_append(v___x_5293_, v___x_5294_);
v___x_5296_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_5285_, v___x_5286_, v___x_5290_, v___x_5291_, v___x_5295_);
return v___x_5296_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0___boxed(lean_object* v_b_5299_, lean_object* v_args_5300_, lean_object* v_a_5301_){
_start:
{
lean_object* v_res_5302_; 
v_res_5302_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v_b_5299_, v_args_5300_);
lean_dec_ref(v_b_5299_);
return v_res_5302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile(lean_object* v_path_5311_, lean_object* v_options_5312_){
_start:
{
lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___y_5317_; 
v___x_5314_ = lean_unsigned_to_nat(2u);
v___x_5315_ = ((lean_object*)(l_Lasm_JS_Deno_readFile___closed__2));
if (lean_obj_tag(v_path_5311_) == 0)
{
lean_object* v_value_5324_; lean_object* v___x_5326_; uint8_t v_isShared_5327_; uint8_t v_isSharedCheck_5331_; 
v_value_5324_ = lean_ctor_get(v_path_5311_, 0);
v_isSharedCheck_5331_ = !lean_is_exclusive(v_path_5311_);
if (v_isSharedCheck_5331_ == 0)
{
v___x_5326_ = v_path_5311_;
v_isShared_5327_ = v_isSharedCheck_5331_;
goto v_resetjp_5325_;
}
else
{
lean_inc(v_value_5324_);
lean_dec(v_path_5311_);
v___x_5326_ = lean_box(0);
v_isShared_5327_ = v_isSharedCheck_5331_;
goto v_resetjp_5325_;
}
v_resetjp_5325_:
{
lean_object* v___x_5329_; 
if (v_isShared_5327_ == 0)
{
lean_ctor_set_tag(v___x_5326_, 4);
v___x_5329_ = v___x_5326_;
goto v_reusejp_5328_;
}
else
{
lean_object* v_reuseFailAlloc_5330_; 
v_reuseFailAlloc_5330_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5330_, 0, v_value_5324_);
v___x_5329_ = v_reuseFailAlloc_5330_;
goto v_reusejp_5328_;
}
v_reusejp_5328_:
{
v___y_5317_ = v___x_5329_;
goto v___jp_5316_;
}
}
}
else
{
lean_object* v_value_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; 
v_value_5332_ = lean_ctor_get(v_path_5311_, 0);
lean_inc(v_value_5332_);
lean_dec_ref_known(v_path_5311_, 1);
v___x_5333_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5334_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5334_, 0, v_value_5332_);
lean_ctor_set(v___x_5334_, 1, v___x_5333_);
v___y_5317_ = v___x_5334_;
goto v___jp_5316_;
}
v___jp_5316_:
{
lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; 
v___x_5318_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5312_);
v___x_5319_ = lean_mk_empty_array_with_capacity(v___x_5314_);
v___x_5320_ = lean_array_push(v___x_5319_, v___y_5317_);
v___x_5321_ = lean_array_push(v___x_5320_, v___x_5318_);
v___x_5322_ = l_Lasm_JS_Web_Support_args(v___x_5321_);
v___x_5323_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v___x_5315_, v___x_5322_);
return v___x_5323_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile___boxed(lean_object* v_path_5335_, lean_object* v_options_5336_, lean_object* v_a_5337_){
_start:
{
lean_object* v_res_5338_; 
v_res_5338_ = l_Lasm_JS_Deno_readFile(v_path_5335_, v_options_5336_);
lean_dec(v_options_5336_);
return v_res_5338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync(lean_object* v_path_5347_){
_start:
{
uint8_t v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___y_5353_; 
v___x_5349_ = 0;
v___x_5350_ = lean_unsigned_to_nat(1u);
v___x_5351_ = ((lean_object*)(l_Lasm_JS_Deno_readFileSync___closed__2));
if (lean_obj_tag(v_path_5347_) == 0)
{
lean_object* v_value_5358_; lean_object* v___x_5360_; uint8_t v_isShared_5361_; uint8_t v_isSharedCheck_5365_; 
v_value_5358_ = lean_ctor_get(v_path_5347_, 0);
v_isSharedCheck_5365_ = !lean_is_exclusive(v_path_5347_);
if (v_isSharedCheck_5365_ == 0)
{
v___x_5360_ = v_path_5347_;
v_isShared_5361_ = v_isSharedCheck_5365_;
goto v_resetjp_5359_;
}
else
{
lean_inc(v_value_5358_);
lean_dec(v_path_5347_);
v___x_5360_ = lean_box(0);
v_isShared_5361_ = v_isSharedCheck_5365_;
goto v_resetjp_5359_;
}
v_resetjp_5359_:
{
lean_object* v___x_5363_; 
if (v_isShared_5361_ == 0)
{
lean_ctor_set_tag(v___x_5360_, 4);
v___x_5363_ = v___x_5360_;
goto v_reusejp_5362_;
}
else
{
lean_object* v_reuseFailAlloc_5364_; 
v_reuseFailAlloc_5364_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5364_, 0, v_value_5358_);
v___x_5363_ = v_reuseFailAlloc_5364_;
goto v_reusejp_5362_;
}
v_reusejp_5362_:
{
v___y_5353_ = v___x_5363_;
goto v___jp_5352_;
}
}
}
else
{
lean_object* v_value_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; 
v_value_5366_ = lean_ctor_get(v_path_5347_, 0);
lean_inc(v_value_5366_);
lean_dec_ref_known(v_path_5347_, 1);
v___x_5367_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5368_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5368_, 0, v_value_5366_);
lean_ctor_set(v___x_5368_, 1, v___x_5367_);
v___y_5353_ = v___x_5368_;
goto v___jp_5352_;
}
v___jp_5352_:
{
lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; 
v___x_5354_ = lean_mk_empty_array_with_capacity(v___x_5350_);
v___x_5355_ = lean_array_push(v___x_5354_, v___y_5353_);
v___x_5356_ = l_Lasm_JS_Web_Support_args(v___x_5355_);
v___x_5357_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_5351_, v___x_5356_, v___x_5349_);
return v___x_5357_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync___boxed(lean_object* v_path_5369_, lean_object* v_a_5370_){
_start:
{
lean_object* v_res_5371_; 
v_res_5371_ = l_Lasm_JS_Deno_readFileSync(v_path_5369_);
return v_res_5371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath(lean_object* v_path_5380_){
_start:
{
lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___y_5385_; 
v___x_5382_ = lean_unsigned_to_nat(1u);
v___x_5383_ = ((lean_object*)(l_Lasm_JS_Deno_realPath___closed__2));
if (lean_obj_tag(v_path_5380_) == 0)
{
lean_object* v_value_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5397_; 
v_value_5390_ = lean_ctor_get(v_path_5380_, 0);
v_isSharedCheck_5397_ = !lean_is_exclusive(v_path_5380_);
if (v_isSharedCheck_5397_ == 0)
{
v___x_5392_ = v_path_5380_;
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_value_5390_);
lean_dec(v_path_5380_);
v___x_5392_ = lean_box(0);
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
v_resetjp_5391_:
{
lean_object* v___x_5395_; 
if (v_isShared_5393_ == 0)
{
lean_ctor_set_tag(v___x_5392_, 4);
v___x_5395_ = v___x_5392_;
goto v_reusejp_5394_;
}
else
{
lean_object* v_reuseFailAlloc_5396_; 
v_reuseFailAlloc_5396_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5396_, 0, v_value_5390_);
v___x_5395_ = v_reuseFailAlloc_5396_;
goto v_reusejp_5394_;
}
v_reusejp_5394_:
{
v___y_5385_ = v___x_5395_;
goto v___jp_5384_;
}
}
}
else
{
lean_object* v_value_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; 
v_value_5398_ = lean_ctor_get(v_path_5380_, 0);
lean_inc(v_value_5398_);
lean_dec_ref_known(v_path_5380_, 1);
v___x_5399_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5400_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5400_, 0, v_value_5398_);
lean_ctor_set(v___x_5400_, 1, v___x_5399_);
v___y_5385_ = v___x_5400_;
goto v___jp_5384_;
}
v___jp_5384_:
{
lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; 
v___x_5386_ = lean_mk_empty_array_with_capacity(v___x_5382_);
v___x_5387_ = lean_array_push(v___x_5386_, v___y_5385_);
v___x_5388_ = l_Lasm_JS_Web_Support_args(v___x_5387_);
v___x_5389_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5383_, v___x_5388_);
return v___x_5389_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath___boxed(lean_object* v_path_5401_, lean_object* v_a_5402_){
_start:
{
lean_object* v_res_5403_; 
v_res_5403_ = l_Lasm_JS_Deno_realPath(v_path_5401_);
return v_res_5403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync(lean_object* v_path_5412_){
_start:
{
uint8_t v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___y_5418_; 
v___x_5414_ = 0;
v___x_5415_ = lean_unsigned_to_nat(1u);
v___x_5416_ = ((lean_object*)(l_Lasm_JS_Deno_realPathSync___closed__2));
if (lean_obj_tag(v_path_5412_) == 0)
{
lean_object* v_value_5423_; lean_object* v___x_5425_; uint8_t v_isShared_5426_; uint8_t v_isSharedCheck_5430_; 
v_value_5423_ = lean_ctor_get(v_path_5412_, 0);
v_isSharedCheck_5430_ = !lean_is_exclusive(v_path_5412_);
if (v_isSharedCheck_5430_ == 0)
{
v___x_5425_ = v_path_5412_;
v_isShared_5426_ = v_isSharedCheck_5430_;
goto v_resetjp_5424_;
}
else
{
lean_inc(v_value_5423_);
lean_dec(v_path_5412_);
v___x_5425_ = lean_box(0);
v_isShared_5426_ = v_isSharedCheck_5430_;
goto v_resetjp_5424_;
}
v_resetjp_5424_:
{
lean_object* v___x_5428_; 
if (v_isShared_5426_ == 0)
{
lean_ctor_set_tag(v___x_5425_, 4);
v___x_5428_ = v___x_5425_;
goto v_reusejp_5427_;
}
else
{
lean_object* v_reuseFailAlloc_5429_; 
v_reuseFailAlloc_5429_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5429_, 0, v_value_5423_);
v___x_5428_ = v_reuseFailAlloc_5429_;
goto v_reusejp_5427_;
}
v_reusejp_5427_:
{
v___y_5418_ = v___x_5428_;
goto v___jp_5417_;
}
}
}
else
{
lean_object* v_value_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; 
v_value_5431_ = lean_ctor_get(v_path_5412_, 0);
lean_inc(v_value_5431_);
lean_dec_ref_known(v_path_5412_, 1);
v___x_5432_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5433_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5433_, 0, v_value_5431_);
lean_ctor_set(v___x_5433_, 1, v___x_5432_);
v___y_5418_ = v___x_5433_;
goto v___jp_5417_;
}
v___jp_5417_:
{
lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; 
v___x_5419_ = lean_mk_empty_array_with_capacity(v___x_5415_);
v___x_5420_ = lean_array_push(v___x_5419_, v___y_5418_);
v___x_5421_ = l_Lasm_JS_Web_Support_args(v___x_5420_);
v___x_5422_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5416_, v___x_5421_, v___x_5414_);
return v___x_5422_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync___boxed(lean_object* v_path_5434_, lean_object* v_a_5435_){
_start:
{
lean_object* v_res_5436_; 
v_res_5436_ = l_Lasm_JS_Deno_realPathSync(v_path_5434_);
return v_res_5436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir(lean_object* v_path_5445_){
_start:
{
uint8_t v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___y_5451_; 
v___x_5447_ = 0;
v___x_5448_ = lean_unsigned_to_nat(1u);
v___x_5449_ = ((lean_object*)(l_Lasm_JS_Deno_readDir___closed__2));
if (lean_obj_tag(v_path_5445_) == 0)
{
lean_object* v_value_5472_; lean_object* v___x_5474_; uint8_t v_isShared_5475_; uint8_t v_isSharedCheck_5479_; 
v_value_5472_ = lean_ctor_get(v_path_5445_, 0);
v_isSharedCheck_5479_ = !lean_is_exclusive(v_path_5445_);
if (v_isSharedCheck_5479_ == 0)
{
v___x_5474_ = v_path_5445_;
v_isShared_5475_ = v_isSharedCheck_5479_;
goto v_resetjp_5473_;
}
else
{
lean_inc(v_value_5472_);
lean_dec(v_path_5445_);
v___x_5474_ = lean_box(0);
v_isShared_5475_ = v_isSharedCheck_5479_;
goto v_resetjp_5473_;
}
v_resetjp_5473_:
{
lean_object* v___x_5477_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set_tag(v___x_5474_, 4);
v___x_5477_ = v___x_5474_;
goto v_reusejp_5476_;
}
else
{
lean_object* v_reuseFailAlloc_5478_; 
v_reuseFailAlloc_5478_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5478_, 0, v_value_5472_);
v___x_5477_ = v_reuseFailAlloc_5478_;
goto v_reusejp_5476_;
}
v_reusejp_5476_:
{
v___y_5451_ = v___x_5477_;
goto v___jp_5450_;
}
}
}
else
{
lean_object* v_value_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; 
v_value_5480_ = lean_ctor_get(v_path_5445_, 0);
lean_inc(v_value_5480_);
lean_dec_ref_known(v_path_5445_, 1);
v___x_5481_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5482_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5482_, 0, v_value_5480_);
lean_ctor_set(v___x_5482_, 1, v___x_5481_);
v___y_5451_ = v___x_5482_;
goto v___jp_5450_;
}
v___jp_5450_:
{
lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; 
v___x_5452_ = lean_mk_empty_array_with_capacity(v___x_5448_);
v___x_5453_ = lean_array_push(v___x_5452_, v___y_5451_);
v___x_5454_ = l_Lasm_JS_Web_Support_args(v___x_5453_);
v___x_5455_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_5449_, v___x_5454_, v___x_5447_);
if (lean_obj_tag(v___x_5455_) == 0)
{
lean_object* v_a_5456_; lean_object* v___x_5458_; uint8_t v_isShared_5459_; uint8_t v_isSharedCheck_5463_; 
v_a_5456_ = lean_ctor_get(v___x_5455_, 0);
v_isSharedCheck_5463_ = !lean_is_exclusive(v___x_5455_);
if (v_isSharedCheck_5463_ == 0)
{
v___x_5458_ = v___x_5455_;
v_isShared_5459_ = v_isSharedCheck_5463_;
goto v_resetjp_5457_;
}
else
{
lean_inc(v_a_5456_);
lean_dec(v___x_5455_);
v___x_5458_ = lean_box(0);
v_isShared_5459_ = v_isSharedCheck_5463_;
goto v_resetjp_5457_;
}
v_resetjp_5457_:
{
lean_object* v___x_5461_; 
if (v_isShared_5459_ == 0)
{
v___x_5461_ = v___x_5458_;
goto v_reusejp_5460_;
}
else
{
lean_object* v_reuseFailAlloc_5462_; 
v_reuseFailAlloc_5462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5462_, 0, v_a_5456_);
v___x_5461_ = v_reuseFailAlloc_5462_;
goto v_reusejp_5460_;
}
v_reusejp_5460_:
{
return v___x_5461_;
}
}
}
else
{
lean_object* v_a_5464_; lean_object* v___x_5466_; uint8_t v_isShared_5467_; uint8_t v_isSharedCheck_5471_; 
v_a_5464_ = lean_ctor_get(v___x_5455_, 0);
v_isSharedCheck_5471_ = !lean_is_exclusive(v___x_5455_);
if (v_isSharedCheck_5471_ == 0)
{
v___x_5466_ = v___x_5455_;
v_isShared_5467_ = v_isSharedCheck_5471_;
goto v_resetjp_5465_;
}
else
{
lean_inc(v_a_5464_);
lean_dec(v___x_5455_);
v___x_5466_ = lean_box(0);
v_isShared_5467_ = v_isSharedCheck_5471_;
goto v_resetjp_5465_;
}
v_resetjp_5465_:
{
lean_object* v___x_5469_; 
if (v_isShared_5467_ == 0)
{
v___x_5469_ = v___x_5466_;
goto v_reusejp_5468_;
}
else
{
lean_object* v_reuseFailAlloc_5470_; 
v_reuseFailAlloc_5470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5470_, 0, v_a_5464_);
v___x_5469_ = v_reuseFailAlloc_5470_;
goto v_reusejp_5468_;
}
v_reusejp_5468_:
{
return v___x_5469_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir___boxed(lean_object* v_path_5483_, lean_object* v_a_5484_){
_start:
{
lean_object* v_res_5485_; 
v_res_5485_ = l_Lasm_JS_Deno_readDir(v_path_5483_);
return v_res_5485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile(lean_object* v_fromPath_5494_, lean_object* v_toPath_5495_){
_start:
{
lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___y_5500_; lean_object* v___y_5501_; lean_object* v___y_5508_; 
v___x_5497_ = lean_unsigned_to_nat(2u);
v___x_5498_ = ((lean_object*)(l_Lasm_JS_Deno_copyFile___closed__2));
if (lean_obj_tag(v_fromPath_5494_) == 0)
{
lean_object* v_value_5520_; lean_object* v___x_5522_; uint8_t v_isShared_5523_; uint8_t v_isSharedCheck_5527_; 
v_value_5520_ = lean_ctor_get(v_fromPath_5494_, 0);
v_isSharedCheck_5527_ = !lean_is_exclusive(v_fromPath_5494_);
if (v_isSharedCheck_5527_ == 0)
{
v___x_5522_ = v_fromPath_5494_;
v_isShared_5523_ = v_isSharedCheck_5527_;
goto v_resetjp_5521_;
}
else
{
lean_inc(v_value_5520_);
lean_dec(v_fromPath_5494_);
v___x_5522_ = lean_box(0);
v_isShared_5523_ = v_isSharedCheck_5527_;
goto v_resetjp_5521_;
}
v_resetjp_5521_:
{
lean_object* v___x_5525_; 
if (v_isShared_5523_ == 0)
{
lean_ctor_set_tag(v___x_5522_, 4);
v___x_5525_ = v___x_5522_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5526_; 
v_reuseFailAlloc_5526_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5526_, 0, v_value_5520_);
v___x_5525_ = v_reuseFailAlloc_5526_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
v___y_5508_ = v___x_5525_;
goto v___jp_5507_;
}
}
}
else
{
lean_object* v_value_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; 
v_value_5528_ = lean_ctor_get(v_fromPath_5494_, 0);
lean_inc(v_value_5528_);
lean_dec_ref_known(v_fromPath_5494_, 1);
v___x_5529_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5530_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5530_, 0, v_value_5528_);
lean_ctor_set(v___x_5530_, 1, v___x_5529_);
v___y_5508_ = v___x_5530_;
goto v___jp_5507_;
}
v___jp_5499_:
{
lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; 
v___x_5502_ = lean_mk_empty_array_with_capacity(v___x_5497_);
v___x_5503_ = lean_array_push(v___x_5502_, v___y_5500_);
v___x_5504_ = lean_array_push(v___x_5503_, v___y_5501_);
v___x_5505_ = l_Lasm_JS_Web_Support_args(v___x_5504_);
v___x_5506_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5498_, v___x_5505_);
return v___x_5506_;
}
v___jp_5507_:
{
if (lean_obj_tag(v_toPath_5495_) == 0)
{
lean_object* v_value_5509_; lean_object* v___x_5511_; uint8_t v_isShared_5512_; uint8_t v_isSharedCheck_5516_; 
v_value_5509_ = lean_ctor_get(v_toPath_5495_, 0);
v_isSharedCheck_5516_ = !lean_is_exclusive(v_toPath_5495_);
if (v_isSharedCheck_5516_ == 0)
{
v___x_5511_ = v_toPath_5495_;
v_isShared_5512_ = v_isSharedCheck_5516_;
goto v_resetjp_5510_;
}
else
{
lean_inc(v_value_5509_);
lean_dec(v_toPath_5495_);
v___x_5511_ = lean_box(0);
v_isShared_5512_ = v_isSharedCheck_5516_;
goto v_resetjp_5510_;
}
v_resetjp_5510_:
{
lean_object* v___x_5514_; 
if (v_isShared_5512_ == 0)
{
lean_ctor_set_tag(v___x_5511_, 4);
v___x_5514_ = v___x_5511_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5515_; 
v_reuseFailAlloc_5515_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5515_, 0, v_value_5509_);
v___x_5514_ = v_reuseFailAlloc_5515_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
v___y_5500_ = v___y_5508_;
v___y_5501_ = v___x_5514_;
goto v___jp_5499_;
}
}
}
else
{
lean_object* v_value_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; 
v_value_5517_ = lean_ctor_get(v_toPath_5495_, 0);
lean_inc(v_value_5517_);
lean_dec_ref_known(v_toPath_5495_, 1);
v___x_5518_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5519_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5519_, 0, v_value_5517_);
lean_ctor_set(v___x_5519_, 1, v___x_5518_);
v___y_5500_ = v___y_5508_;
v___y_5501_ = v___x_5519_;
goto v___jp_5499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile___boxed(lean_object* v_fromPath_5531_, lean_object* v_toPath_5532_, lean_object* v_a_5533_){
_start:
{
lean_object* v_res_5534_; 
v_res_5534_ = l_Lasm_JS_Deno_copyFile(v_fromPath_5531_, v_toPath_5532_);
return v_res_5534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync(lean_object* v_fromPath_5543_, lean_object* v_toPath_5544_){
_start:
{
uint8_t v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___y_5550_; lean_object* v___y_5551_; lean_object* v___y_5558_; 
v___x_5546_ = 0;
v___x_5547_ = lean_unsigned_to_nat(2u);
v___x_5548_ = ((lean_object*)(l_Lasm_JS_Deno_copyFileSync___closed__2));
if (lean_obj_tag(v_fromPath_5543_) == 0)
{
lean_object* v_value_5570_; lean_object* v___x_5572_; uint8_t v_isShared_5573_; uint8_t v_isSharedCheck_5577_; 
v_value_5570_ = lean_ctor_get(v_fromPath_5543_, 0);
v_isSharedCheck_5577_ = !lean_is_exclusive(v_fromPath_5543_);
if (v_isSharedCheck_5577_ == 0)
{
v___x_5572_ = v_fromPath_5543_;
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
else
{
lean_inc(v_value_5570_);
lean_dec(v_fromPath_5543_);
v___x_5572_ = lean_box(0);
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
v_resetjp_5571_:
{
lean_object* v___x_5575_; 
if (v_isShared_5573_ == 0)
{
lean_ctor_set_tag(v___x_5572_, 4);
v___x_5575_ = v___x_5572_;
goto v_reusejp_5574_;
}
else
{
lean_object* v_reuseFailAlloc_5576_; 
v_reuseFailAlloc_5576_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5576_, 0, v_value_5570_);
v___x_5575_ = v_reuseFailAlloc_5576_;
goto v_reusejp_5574_;
}
v_reusejp_5574_:
{
v___y_5558_ = v___x_5575_;
goto v___jp_5557_;
}
}
}
else
{
lean_object* v_value_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; 
v_value_5578_ = lean_ctor_get(v_fromPath_5543_, 0);
lean_inc(v_value_5578_);
lean_dec_ref_known(v_fromPath_5543_, 1);
v___x_5579_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5580_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5580_, 0, v_value_5578_);
lean_ctor_set(v___x_5580_, 1, v___x_5579_);
v___y_5558_ = v___x_5580_;
goto v___jp_5557_;
}
v___jp_5549_:
{
lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; 
v___x_5552_ = lean_mk_empty_array_with_capacity(v___x_5547_);
v___x_5553_ = lean_array_push(v___x_5552_, v___y_5550_);
v___x_5554_ = lean_array_push(v___x_5553_, v___y_5551_);
v___x_5555_ = l_Lasm_JS_Web_Support_args(v___x_5554_);
v___x_5556_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5548_, v___x_5555_, v___x_5546_);
return v___x_5556_;
}
v___jp_5557_:
{
if (lean_obj_tag(v_toPath_5544_) == 0)
{
lean_object* v_value_5559_; lean_object* v___x_5561_; uint8_t v_isShared_5562_; uint8_t v_isSharedCheck_5566_; 
v_value_5559_ = lean_ctor_get(v_toPath_5544_, 0);
v_isSharedCheck_5566_ = !lean_is_exclusive(v_toPath_5544_);
if (v_isSharedCheck_5566_ == 0)
{
v___x_5561_ = v_toPath_5544_;
v_isShared_5562_ = v_isSharedCheck_5566_;
goto v_resetjp_5560_;
}
else
{
lean_inc(v_value_5559_);
lean_dec(v_toPath_5544_);
v___x_5561_ = lean_box(0);
v_isShared_5562_ = v_isSharedCheck_5566_;
goto v_resetjp_5560_;
}
v_resetjp_5560_:
{
lean_object* v___x_5564_; 
if (v_isShared_5562_ == 0)
{
lean_ctor_set_tag(v___x_5561_, 4);
v___x_5564_ = v___x_5561_;
goto v_reusejp_5563_;
}
else
{
lean_object* v_reuseFailAlloc_5565_; 
v_reuseFailAlloc_5565_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5565_, 0, v_value_5559_);
v___x_5564_ = v_reuseFailAlloc_5565_;
goto v_reusejp_5563_;
}
v_reusejp_5563_:
{
v___y_5550_ = v___y_5558_;
v___y_5551_ = v___x_5564_;
goto v___jp_5549_;
}
}
}
else
{
lean_object* v_value_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; 
v_value_5567_ = lean_ctor_get(v_toPath_5544_, 0);
lean_inc(v_value_5567_);
lean_dec_ref_known(v_toPath_5544_, 1);
v___x_5568_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5569_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5569_, 0, v_value_5567_);
lean_ctor_set(v___x_5569_, 1, v___x_5568_);
v___y_5550_ = v___y_5558_;
v___y_5551_ = v___x_5569_;
goto v___jp_5549_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync___boxed(lean_object* v_fromPath_5581_, lean_object* v_toPath_5582_, lean_object* v_a_5583_){
_start:
{
lean_object* v_res_5584_; 
v_res_5584_ = l_Lasm_JS_Deno_copyFileSync(v_fromPath_5581_, v_toPath_5582_);
return v_res_5584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink(lean_object* v_path_5593_){
_start:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___y_5598_; 
v___x_5595_ = lean_unsigned_to_nat(1u);
v___x_5596_ = ((lean_object*)(l_Lasm_JS_Deno_readLink___closed__2));
if (lean_obj_tag(v_path_5593_) == 0)
{
lean_object* v_value_5603_; lean_object* v___x_5605_; uint8_t v_isShared_5606_; uint8_t v_isSharedCheck_5610_; 
v_value_5603_ = lean_ctor_get(v_path_5593_, 0);
v_isSharedCheck_5610_ = !lean_is_exclusive(v_path_5593_);
if (v_isSharedCheck_5610_ == 0)
{
v___x_5605_ = v_path_5593_;
v_isShared_5606_ = v_isSharedCheck_5610_;
goto v_resetjp_5604_;
}
else
{
lean_inc(v_value_5603_);
lean_dec(v_path_5593_);
v___x_5605_ = lean_box(0);
v_isShared_5606_ = v_isSharedCheck_5610_;
goto v_resetjp_5604_;
}
v_resetjp_5604_:
{
lean_object* v___x_5608_; 
if (v_isShared_5606_ == 0)
{
lean_ctor_set_tag(v___x_5605_, 4);
v___x_5608_ = v___x_5605_;
goto v_reusejp_5607_;
}
else
{
lean_object* v_reuseFailAlloc_5609_; 
v_reuseFailAlloc_5609_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5609_, 0, v_value_5603_);
v___x_5608_ = v_reuseFailAlloc_5609_;
goto v_reusejp_5607_;
}
v_reusejp_5607_:
{
v___y_5598_ = v___x_5608_;
goto v___jp_5597_;
}
}
}
else
{
lean_object* v_value_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; 
v_value_5611_ = lean_ctor_get(v_path_5593_, 0);
lean_inc(v_value_5611_);
lean_dec_ref_known(v_path_5593_, 1);
v___x_5612_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5613_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5613_, 0, v_value_5611_);
lean_ctor_set(v___x_5613_, 1, v___x_5612_);
v___y_5598_ = v___x_5613_;
goto v___jp_5597_;
}
v___jp_5597_:
{
lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; 
v___x_5599_ = lean_mk_empty_array_with_capacity(v___x_5595_);
v___x_5600_ = lean_array_push(v___x_5599_, v___y_5598_);
v___x_5601_ = l_Lasm_JS_Web_Support_args(v___x_5600_);
v___x_5602_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5596_, v___x_5601_);
return v___x_5602_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink___boxed(lean_object* v_path_5614_, lean_object* v_a_5615_){
_start:
{
lean_object* v_res_5616_; 
v_res_5616_ = l_Lasm_JS_Deno_readLink(v_path_5614_);
return v_res_5616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync(lean_object* v_path_5625_){
_start:
{
uint8_t v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___y_5631_; 
v___x_5627_ = 0;
v___x_5628_ = lean_unsigned_to_nat(1u);
v___x_5629_ = ((lean_object*)(l_Lasm_JS_Deno_readLinkSync___closed__2));
if (lean_obj_tag(v_path_5625_) == 0)
{
lean_object* v_value_5636_; lean_object* v___x_5638_; uint8_t v_isShared_5639_; uint8_t v_isSharedCheck_5643_; 
v_value_5636_ = lean_ctor_get(v_path_5625_, 0);
v_isSharedCheck_5643_ = !lean_is_exclusive(v_path_5625_);
if (v_isSharedCheck_5643_ == 0)
{
v___x_5638_ = v_path_5625_;
v_isShared_5639_ = v_isSharedCheck_5643_;
goto v_resetjp_5637_;
}
else
{
lean_inc(v_value_5636_);
lean_dec(v_path_5625_);
v___x_5638_ = lean_box(0);
v_isShared_5639_ = v_isSharedCheck_5643_;
goto v_resetjp_5637_;
}
v_resetjp_5637_:
{
lean_object* v___x_5641_; 
if (v_isShared_5639_ == 0)
{
lean_ctor_set_tag(v___x_5638_, 4);
v___x_5641_ = v___x_5638_;
goto v_reusejp_5640_;
}
else
{
lean_object* v_reuseFailAlloc_5642_; 
v_reuseFailAlloc_5642_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5642_, 0, v_value_5636_);
v___x_5641_ = v_reuseFailAlloc_5642_;
goto v_reusejp_5640_;
}
v_reusejp_5640_:
{
v___y_5631_ = v___x_5641_;
goto v___jp_5630_;
}
}
}
else
{
lean_object* v_value_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; 
v_value_5644_ = lean_ctor_get(v_path_5625_, 0);
lean_inc(v_value_5644_);
lean_dec_ref_known(v_path_5625_, 1);
v___x_5645_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5646_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5646_, 0, v_value_5644_);
lean_ctor_set(v___x_5646_, 1, v___x_5645_);
v___y_5631_ = v___x_5646_;
goto v___jp_5630_;
}
v___jp_5630_:
{
lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; 
v___x_5632_ = lean_mk_empty_array_with_capacity(v___x_5628_);
v___x_5633_ = lean_array_push(v___x_5632_, v___y_5631_);
v___x_5634_ = l_Lasm_JS_Web_Support_args(v___x_5633_);
v___x_5635_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5629_, v___x_5634_, v___x_5627_);
return v___x_5635_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync___boxed(lean_object* v_path_5647_, lean_object* v_a_5648_){
_start:
{
lean_object* v_res_5649_; 
v_res_5649_ = l_Lasm_JS_Deno_readLinkSync(v_path_5647_);
return v_res_5649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(lean_object* v_b_5650_, lean_object* v_args_5651_){
_start:
{
uint8_t v_construct_5653_; lean_object* v___x_5654_; uint32_t v___x_5655_; uint64_t v___x_5656_; uint64_t v___y_5658_; 
v_construct_5653_ = lean_ctor_get_uint8(v_b_5650_, sizeof(void*)*4);
v___x_5654_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5650_);
v___x_5655_ = 214;
v___x_5656_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5653_ == 0)
{
uint64_t v___x_5666_; 
v___x_5666_ = 0ULL;
v___y_5658_ = v___x_5666_;
goto v___jp_5657_;
}
else
{
uint64_t v___x_5667_; 
v___x_5667_ = 4ULL;
v___y_5658_ = v___x_5667_;
goto v___jp_5657_;
}
v___jp_5657_:
{
uint64_t v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; 
v___x_5659_ = lean_uint64_lor(v___x_5656_, v___y_5658_);
v___x_5660_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5650_, v_args_5651_);
v___x_5661_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5662_ = lean_string_append(v___x_5661_, v___x_5654_);
v___x_5663_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5664_ = lean_string_append(v___x_5662_, v___x_5663_);
v___x_5665_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v___x_5654_, v___x_5655_, v___x_5659_, v___x_5660_, v___x_5664_);
return v___x_5665_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0___boxed(lean_object* v_b_5668_, lean_object* v_args_5669_, lean_object* v_a_5670_){
_start:
{
lean_object* v_res_5671_; 
v_res_5671_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v_b_5668_, v_args_5669_);
lean_dec_ref(v_b_5668_);
return v_res_5671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat(lean_object* v_path_5680_){
_start:
{
lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___y_5685_; 
v___x_5682_ = lean_unsigned_to_nat(1u);
v___x_5683_ = ((lean_object*)(l_Lasm_JS_Deno_lstat___closed__2));
if (lean_obj_tag(v_path_5680_) == 0)
{
lean_object* v_value_5690_; lean_object* v___x_5692_; uint8_t v_isShared_5693_; uint8_t v_isSharedCheck_5697_; 
v_value_5690_ = lean_ctor_get(v_path_5680_, 0);
v_isSharedCheck_5697_ = !lean_is_exclusive(v_path_5680_);
if (v_isSharedCheck_5697_ == 0)
{
v___x_5692_ = v_path_5680_;
v_isShared_5693_ = v_isSharedCheck_5697_;
goto v_resetjp_5691_;
}
else
{
lean_inc(v_value_5690_);
lean_dec(v_path_5680_);
v___x_5692_ = lean_box(0);
v_isShared_5693_ = v_isSharedCheck_5697_;
goto v_resetjp_5691_;
}
v_resetjp_5691_:
{
lean_object* v___x_5695_; 
if (v_isShared_5693_ == 0)
{
lean_ctor_set_tag(v___x_5692_, 4);
v___x_5695_ = v___x_5692_;
goto v_reusejp_5694_;
}
else
{
lean_object* v_reuseFailAlloc_5696_; 
v_reuseFailAlloc_5696_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5696_, 0, v_value_5690_);
v___x_5695_ = v_reuseFailAlloc_5696_;
goto v_reusejp_5694_;
}
v_reusejp_5694_:
{
v___y_5685_ = v___x_5695_;
goto v___jp_5684_;
}
}
}
else
{
lean_object* v_value_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; 
v_value_5698_ = lean_ctor_get(v_path_5680_, 0);
lean_inc(v_value_5698_);
lean_dec_ref_known(v_path_5680_, 1);
v___x_5699_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5700_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5700_, 0, v_value_5698_);
lean_ctor_set(v___x_5700_, 1, v___x_5699_);
v___y_5685_ = v___x_5700_;
goto v___jp_5684_;
}
v___jp_5684_:
{
lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; 
v___x_5686_ = lean_mk_empty_array_with_capacity(v___x_5682_);
v___x_5687_ = lean_array_push(v___x_5686_, v___y_5685_);
v___x_5688_ = l_Lasm_JS_Web_Support_args(v___x_5687_);
v___x_5689_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5683_, v___x_5688_);
return v___x_5689_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat___boxed(lean_object* v_path_5701_, lean_object* v_a_5702_){
_start:
{
lean_object* v_res_5703_; 
v_res_5703_ = l_Lasm_JS_Deno_lstat(v_path_5701_);
return v_res_5703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(lean_object* v_b_5704_, lean_object* v_args_5705_, uint8_t v_await_5706_){
_start:
{
uint64_t v___y_5709_; uint64_t v___y_5710_; uint64_t v___x_5753_; uint64_t v___y_5755_; 
v___x_5753_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_5706_ == 0)
{
uint64_t v___x_5760_; 
v___x_5760_ = 0ULL;
v___y_5755_ = v___x_5760_;
goto v___jp_5754_;
}
else
{
uint64_t v___x_5761_; 
v___x_5761_ = 2ULL;
v___y_5755_ = v___x_5761_;
goto v___jp_5754_;
}
v___jp_5708_:
{
uint64_t v_flags_5711_; uint32_t v___x_5712_; lean_object* v___x_5713_; uint32_t v___x_5714_; lean_object* v___x_5715_; 
v_flags_5711_ = lean_uint64_lor(v___y_5709_, v___y_5710_);
v___x_5712_ = 214;
v___x_5713_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5704_, v_args_5705_);
v___x_5714_ = 0;
v___x_5715_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5712_, v_flags_5711_, v___x_5713_, v___x_5714_);
lean_dec(v___x_5713_);
if (lean_obj_tag(v___x_5715_) == 0)
{
if (lean_obj_tag(v___x_5715_) == 0)
{
lean_object* v_a_5716_; lean_object* v___x_5717_; 
v_a_5716_ = lean_ctor_get(v___x_5715_, 0);
lean_inc(v_a_5716_);
lean_dec_ref_known(v___x_5715_, 1);
v___x_5717_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5716_);
lean_dec(v_a_5716_);
if (lean_obj_tag(v___x_5717_) == 0)
{
lean_object* v_a_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; 
v_a_5718_ = lean_ctor_get(v___x_5717_, 0);
lean_inc(v_a_5718_);
lean_dec_ref_known(v___x_5717_, 1);
v___x_5719_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5704_);
v___x_5720_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v___x_5719_, v_a_5718_);
lean_dec_ref(v___x_5719_);
return v___x_5720_;
}
else
{
lean_object* v_a_5721_; lean_object* v___x_5723_; uint8_t v_isShared_5724_; uint8_t v_isSharedCheck_5728_; 
v_a_5721_ = lean_ctor_get(v___x_5717_, 0);
v_isSharedCheck_5728_ = !lean_is_exclusive(v___x_5717_);
if (v_isSharedCheck_5728_ == 0)
{
v___x_5723_ = v___x_5717_;
v_isShared_5724_ = v_isSharedCheck_5728_;
goto v_resetjp_5722_;
}
else
{
lean_inc(v_a_5721_);
lean_dec(v___x_5717_);
v___x_5723_ = lean_box(0);
v_isShared_5724_ = v_isSharedCheck_5728_;
goto v_resetjp_5722_;
}
v_resetjp_5722_:
{
lean_object* v___x_5726_; 
if (v_isShared_5724_ == 0)
{
v___x_5726_ = v___x_5723_;
goto v_reusejp_5725_;
}
else
{
lean_object* v_reuseFailAlloc_5727_; 
v_reuseFailAlloc_5727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5727_, 0, v_a_5721_);
v___x_5726_ = v_reuseFailAlloc_5727_;
goto v_reusejp_5725_;
}
v_reusejp_5725_:
{
return v___x_5726_;
}
}
}
}
else
{
lean_object* v_a_5729_; lean_object* v___x_5731_; uint8_t v_isShared_5732_; uint8_t v_isSharedCheck_5736_; 
v_a_5729_ = lean_ctor_get(v___x_5715_, 0);
v_isSharedCheck_5736_ = !lean_is_exclusive(v___x_5715_);
if (v_isSharedCheck_5736_ == 0)
{
v___x_5731_ = v___x_5715_;
v_isShared_5732_ = v_isSharedCheck_5736_;
goto v_resetjp_5730_;
}
else
{
lean_inc(v_a_5729_);
lean_dec(v___x_5715_);
v___x_5731_ = lean_box(0);
v_isShared_5732_ = v_isSharedCheck_5736_;
goto v_resetjp_5730_;
}
v_resetjp_5730_:
{
lean_object* v___x_5734_; 
if (v_isShared_5732_ == 0)
{
lean_ctor_set_tag(v___x_5731_, 1);
v___x_5734_ = v___x_5731_;
goto v_reusejp_5733_;
}
else
{
lean_object* v_reuseFailAlloc_5735_; 
v_reuseFailAlloc_5735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5735_, 0, v_a_5729_);
v___x_5734_ = v_reuseFailAlloc_5735_;
goto v_reusejp_5733_;
}
v_reusejp_5733_:
{
return v___x_5734_;
}
}
}
}
else
{
lean_object* v_a_5737_; lean_object* v___x_5739_; uint8_t v_isShared_5740_; uint8_t v_isSharedCheck_5752_; 
v_a_5737_ = lean_ctor_get(v___x_5715_, 0);
v_isSharedCheck_5752_ = !lean_is_exclusive(v___x_5715_);
if (v_isSharedCheck_5752_ == 0)
{
v___x_5739_ = v___x_5715_;
v_isShared_5740_ = v_isSharedCheck_5752_;
goto v_resetjp_5738_;
}
else
{
lean_inc(v_a_5737_);
lean_dec(v___x_5715_);
v___x_5739_ = lean_box(0);
v_isShared_5740_ = v_isSharedCheck_5752_;
goto v_resetjp_5738_;
}
v_resetjp_5738_:
{
lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5750_; 
v___x_5741_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5742_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5704_);
v___x_5743_ = lean_string_append(v___x_5741_, v___x_5742_);
lean_dec_ref(v___x_5742_);
v___x_5744_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5745_ = lean_string_append(v___x_5743_, v___x_5744_);
v___x_5746_ = lean_io_error_to_string(v_a_5737_);
v___x_5747_ = lean_string_append(v___x_5745_, v___x_5746_);
lean_dec_ref(v___x_5746_);
v___x_5748_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5748_, 0, v___x_5747_);
if (v_isShared_5740_ == 0)
{
lean_ctor_set(v___x_5739_, 0, v___x_5748_);
v___x_5750_ = v___x_5739_;
goto v_reusejp_5749_;
}
else
{
lean_object* v_reuseFailAlloc_5751_; 
v_reuseFailAlloc_5751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5751_, 0, v___x_5748_);
v___x_5750_ = v_reuseFailAlloc_5751_;
goto v_reusejp_5749_;
}
v_reusejp_5749_:
{
return v___x_5750_;
}
}
}
}
v___jp_5754_:
{
uint8_t v_construct_5756_; uint64_t v___x_5757_; 
v_construct_5756_ = lean_ctor_get_uint8(v_b_5704_, sizeof(void*)*4);
v___x_5757_ = lean_uint64_lor(v___x_5753_, v___y_5755_);
if (v_construct_5756_ == 0)
{
uint64_t v___x_5758_; 
v___x_5758_ = 0ULL;
v___y_5709_ = v___x_5757_;
v___y_5710_ = v___x_5758_;
goto v___jp_5708_;
}
else
{
uint64_t v___x_5759_; 
v___x_5759_ = 4ULL;
v___y_5709_ = v___x_5757_;
v___y_5710_ = v___x_5759_;
goto v___jp_5708_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0___boxed(lean_object* v_b_5762_, lean_object* v_args_5763_, lean_object* v_await_5764_, lean_object* v_a_5765_){
_start:
{
uint8_t v_await_boxed_5766_; lean_object* v_res_5767_; 
v_await_boxed_5766_ = lean_unbox(v_await_5764_);
v_res_5767_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v_b_5762_, v_args_5763_, v_await_boxed_5766_);
lean_dec_ref(v_b_5762_);
return v_res_5767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync(lean_object* v_path_5776_){
_start:
{
uint8_t v___x_5778_; lean_object* v___x_5779_; lean_object* v___x_5780_; lean_object* v___y_5782_; 
v___x_5778_ = 0;
v___x_5779_ = lean_unsigned_to_nat(1u);
v___x_5780_ = ((lean_object*)(l_Lasm_JS_Deno_lstatSync___closed__2));
if (lean_obj_tag(v_path_5776_) == 0)
{
lean_object* v_value_5787_; lean_object* v___x_5789_; uint8_t v_isShared_5790_; uint8_t v_isSharedCheck_5794_; 
v_value_5787_ = lean_ctor_get(v_path_5776_, 0);
v_isSharedCheck_5794_ = !lean_is_exclusive(v_path_5776_);
if (v_isSharedCheck_5794_ == 0)
{
v___x_5789_ = v_path_5776_;
v_isShared_5790_ = v_isSharedCheck_5794_;
goto v_resetjp_5788_;
}
else
{
lean_inc(v_value_5787_);
lean_dec(v_path_5776_);
v___x_5789_ = lean_box(0);
v_isShared_5790_ = v_isSharedCheck_5794_;
goto v_resetjp_5788_;
}
v_resetjp_5788_:
{
lean_object* v___x_5792_; 
if (v_isShared_5790_ == 0)
{
lean_ctor_set_tag(v___x_5789_, 4);
v___x_5792_ = v___x_5789_;
goto v_reusejp_5791_;
}
else
{
lean_object* v_reuseFailAlloc_5793_; 
v_reuseFailAlloc_5793_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5793_, 0, v_value_5787_);
v___x_5792_ = v_reuseFailAlloc_5793_;
goto v_reusejp_5791_;
}
v_reusejp_5791_:
{
v___y_5782_ = v___x_5792_;
goto v___jp_5781_;
}
}
}
else
{
lean_object* v_value_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; 
v_value_5795_ = lean_ctor_get(v_path_5776_, 0);
lean_inc(v_value_5795_);
lean_dec_ref_known(v_path_5776_, 1);
v___x_5796_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5797_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5797_, 0, v_value_5795_);
lean_ctor_set(v___x_5797_, 1, v___x_5796_);
v___y_5782_ = v___x_5797_;
goto v___jp_5781_;
}
v___jp_5781_:
{
lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___x_5783_ = lean_mk_empty_array_with_capacity(v___x_5779_);
v___x_5784_ = lean_array_push(v___x_5783_, v___y_5782_);
v___x_5785_ = l_Lasm_JS_Web_Support_args(v___x_5784_);
v___x_5786_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5780_, v___x_5785_, v___x_5778_);
return v___x_5786_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync___boxed(lean_object* v_path_5798_, lean_object* v_a_5799_){
_start:
{
lean_object* v_res_5800_; 
v_res_5800_ = l_Lasm_JS_Deno_lstatSync(v_path_5798_);
return v_res_5800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat(lean_object* v_path_5809_){
_start:
{
lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___y_5814_; 
v___x_5811_ = lean_unsigned_to_nat(1u);
v___x_5812_ = ((lean_object*)(l_Lasm_JS_Deno_stat___closed__2));
if (lean_obj_tag(v_path_5809_) == 0)
{
lean_object* v_value_5819_; lean_object* v___x_5821_; uint8_t v_isShared_5822_; uint8_t v_isSharedCheck_5826_; 
v_value_5819_ = lean_ctor_get(v_path_5809_, 0);
v_isSharedCheck_5826_ = !lean_is_exclusive(v_path_5809_);
if (v_isSharedCheck_5826_ == 0)
{
v___x_5821_ = v_path_5809_;
v_isShared_5822_ = v_isSharedCheck_5826_;
goto v_resetjp_5820_;
}
else
{
lean_inc(v_value_5819_);
lean_dec(v_path_5809_);
v___x_5821_ = lean_box(0);
v_isShared_5822_ = v_isSharedCheck_5826_;
goto v_resetjp_5820_;
}
v_resetjp_5820_:
{
lean_object* v___x_5824_; 
if (v_isShared_5822_ == 0)
{
lean_ctor_set_tag(v___x_5821_, 4);
v___x_5824_ = v___x_5821_;
goto v_reusejp_5823_;
}
else
{
lean_object* v_reuseFailAlloc_5825_; 
v_reuseFailAlloc_5825_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5825_, 0, v_value_5819_);
v___x_5824_ = v_reuseFailAlloc_5825_;
goto v_reusejp_5823_;
}
v_reusejp_5823_:
{
v___y_5814_ = v___x_5824_;
goto v___jp_5813_;
}
}
}
else
{
lean_object* v_value_5827_; lean_object* v___x_5828_; lean_object* v___x_5829_; 
v_value_5827_ = lean_ctor_get(v_path_5809_, 0);
lean_inc(v_value_5827_);
lean_dec_ref_known(v_path_5809_, 1);
v___x_5828_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5829_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5829_, 0, v_value_5827_);
lean_ctor_set(v___x_5829_, 1, v___x_5828_);
v___y_5814_ = v___x_5829_;
goto v___jp_5813_;
}
v___jp_5813_:
{
lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; 
v___x_5815_ = lean_mk_empty_array_with_capacity(v___x_5811_);
v___x_5816_ = lean_array_push(v___x_5815_, v___y_5814_);
v___x_5817_ = l_Lasm_JS_Web_Support_args(v___x_5816_);
v___x_5818_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5812_, v___x_5817_);
return v___x_5818_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat___boxed(lean_object* v_path_5830_, lean_object* v_a_5831_){
_start:
{
lean_object* v_res_5832_; 
v_res_5832_ = l_Lasm_JS_Deno_stat(v_path_5830_);
return v_res_5832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync(lean_object* v_path_5841_){
_start:
{
uint8_t v___x_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___y_5847_; 
v___x_5843_ = 0;
v___x_5844_ = lean_unsigned_to_nat(1u);
v___x_5845_ = ((lean_object*)(l_Lasm_JS_Deno_statSync___closed__2));
if (lean_obj_tag(v_path_5841_) == 0)
{
lean_object* v_value_5852_; lean_object* v___x_5854_; uint8_t v_isShared_5855_; uint8_t v_isSharedCheck_5859_; 
v_value_5852_ = lean_ctor_get(v_path_5841_, 0);
v_isSharedCheck_5859_ = !lean_is_exclusive(v_path_5841_);
if (v_isSharedCheck_5859_ == 0)
{
v___x_5854_ = v_path_5841_;
v_isShared_5855_ = v_isSharedCheck_5859_;
goto v_resetjp_5853_;
}
else
{
lean_inc(v_value_5852_);
lean_dec(v_path_5841_);
v___x_5854_ = lean_box(0);
v_isShared_5855_ = v_isSharedCheck_5859_;
goto v_resetjp_5853_;
}
v_resetjp_5853_:
{
lean_object* v___x_5857_; 
if (v_isShared_5855_ == 0)
{
lean_ctor_set_tag(v___x_5854_, 4);
v___x_5857_ = v___x_5854_;
goto v_reusejp_5856_;
}
else
{
lean_object* v_reuseFailAlloc_5858_; 
v_reuseFailAlloc_5858_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5858_, 0, v_value_5852_);
v___x_5857_ = v_reuseFailAlloc_5858_;
goto v_reusejp_5856_;
}
v_reusejp_5856_:
{
v___y_5847_ = v___x_5857_;
goto v___jp_5846_;
}
}
}
else
{
lean_object* v_value_5860_; lean_object* v___x_5861_; lean_object* v___x_5862_; 
v_value_5860_ = lean_ctor_get(v_path_5841_, 0);
lean_inc(v_value_5860_);
lean_dec_ref_known(v_path_5841_, 1);
v___x_5861_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5862_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5862_, 0, v_value_5860_);
lean_ctor_set(v___x_5862_, 1, v___x_5861_);
v___y_5847_ = v___x_5862_;
goto v___jp_5846_;
}
v___jp_5846_:
{
lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; 
v___x_5848_ = lean_mk_empty_array_with_capacity(v___x_5844_);
v___x_5849_ = lean_array_push(v___x_5848_, v___y_5847_);
v___x_5850_ = l_Lasm_JS_Web_Support_args(v___x_5849_);
v___x_5851_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5845_, v___x_5850_, v___x_5843_);
return v___x_5851_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync___boxed(lean_object* v_path_5863_, lean_object* v_a_5864_){
_start:
{
lean_object* v_res_5865_; 
v_res_5865_ = l_Lasm_JS_Deno_statSync(v_path_5863_);
return v_res_5865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(lean_object* v_x_5866_){
_start:
{
if (lean_obj_tag(v_x_5866_) == 0)
{
lean_object* v___x_5867_; 
v___x_5867_ = lean_box(0);
return v___x_5867_;
}
else
{
lean_object* v_val_5868_; lean_object* v_append_5869_; lean_object* v_create_5870_; lean_object* v_createNew_5871_; lean_object* v_mode_5872_; lean_object* v_signal_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; 
v_val_5868_ = lean_ctor_get(v_x_5866_, 0);
v_append_5869_ = lean_ctor_get(v_val_5868_, 0);
v_create_5870_ = lean_ctor_get(v_val_5868_, 1);
v_createNew_5871_ = lean_ctor_get(v_val_5868_, 2);
v_mode_5872_ = lean_ctor_get(v_val_5868_, 3);
v_signal_5873_ = lean_ctor_get(v_val_5868_, 4);
v___x_5874_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_5875_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_5869_);
v___x_5876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5876_, 0, v___x_5874_);
lean_ctor_set(v___x_5876_, 1, v___x_5875_);
v___x_5877_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_5878_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_5870_);
v___x_5879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5879_, 0, v___x_5877_);
lean_ctor_set(v___x_5879_, 1, v___x_5878_);
v___x_5880_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_5881_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_5871_);
v___x_5882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5882_, 0, v___x_5880_);
lean_ctor_set(v___x_5882_, 1, v___x_5881_);
v___x_5883_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_5884_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_5872_);
v___x_5885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5885_, 0, v___x_5883_);
lean_ctor_set(v___x_5885_, 1, v___x_5884_);
v___x_5886_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5887_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_5873_);
v___x_5888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5888_, 0, v___x_5886_);
lean_ctor_set(v___x_5888_, 1, v___x_5887_);
v___x_5889_ = lean_unsigned_to_nat(5u);
v___x_5890_ = lean_mk_empty_array_with_capacity(v___x_5889_);
v___x_5891_ = lean_array_push(v___x_5890_, v___x_5876_);
v___x_5892_ = lean_array_push(v___x_5891_, v___x_5879_);
v___x_5893_ = lean_array_push(v___x_5892_, v___x_5882_);
v___x_5894_ = lean_array_push(v___x_5893_, v___x_5885_);
v___x_5895_ = lean_array_push(v___x_5894_, v___x_5888_);
v___x_5896_ = l_Lasm_JS_Web_Support_fields(v___x_5895_);
lean_dec_ref(v___x_5895_);
return v___x_5896_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0___boxed(lean_object* v_x_5897_){
_start:
{
lean_object* v_res_5898_; 
v_res_5898_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_x_5897_);
lean_dec(v_x_5897_);
return v_res_5898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile(lean_object* v_path_5907_, lean_object* v_data_5908_, lean_object* v_options_5909_){
_start:
{
lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___y_5914_; lean_object* v___y_5915_; lean_object* v___y_5924_; 
v___x_5911_ = lean_unsigned_to_nat(3u);
v___x_5912_ = ((lean_object*)(l_Lasm_JS_Deno_writeFile___closed__2));
if (lean_obj_tag(v_path_5907_) == 0)
{
lean_object* v_value_5936_; lean_object* v___x_5938_; uint8_t v_isShared_5939_; uint8_t v_isSharedCheck_5943_; 
v_value_5936_ = lean_ctor_get(v_path_5907_, 0);
v_isSharedCheck_5943_ = !lean_is_exclusive(v_path_5907_);
if (v_isSharedCheck_5943_ == 0)
{
v___x_5938_ = v_path_5907_;
v_isShared_5939_ = v_isSharedCheck_5943_;
goto v_resetjp_5937_;
}
else
{
lean_inc(v_value_5936_);
lean_dec(v_path_5907_);
v___x_5938_ = lean_box(0);
v_isShared_5939_ = v_isSharedCheck_5943_;
goto v_resetjp_5937_;
}
v_resetjp_5937_:
{
lean_object* v___x_5941_; 
if (v_isShared_5939_ == 0)
{
lean_ctor_set_tag(v___x_5938_, 4);
v___x_5941_ = v___x_5938_;
goto v_reusejp_5940_;
}
else
{
lean_object* v_reuseFailAlloc_5942_; 
v_reuseFailAlloc_5942_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5942_, 0, v_value_5936_);
v___x_5941_ = v_reuseFailAlloc_5942_;
goto v_reusejp_5940_;
}
v_reusejp_5940_:
{
v___y_5924_ = v___x_5941_;
goto v___jp_5923_;
}
}
}
else
{
lean_object* v_value_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; 
v_value_5944_ = lean_ctor_get(v_path_5907_, 0);
lean_inc(v_value_5944_);
lean_dec_ref_known(v_path_5907_, 1);
v___x_5945_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5946_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5946_, 0, v_value_5944_);
lean_ctor_set(v___x_5946_, 1, v___x_5945_);
v___y_5924_ = v___x_5946_;
goto v___jp_5923_;
}
v___jp_5913_:
{
lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; 
v___x_5916_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_5909_);
v___x_5917_ = lean_mk_empty_array_with_capacity(v___x_5911_);
v___x_5918_ = lean_array_push(v___x_5917_, v___y_5914_);
v___x_5919_ = lean_array_push(v___x_5918_, v___y_5915_);
v___x_5920_ = lean_array_push(v___x_5919_, v___x_5916_);
v___x_5921_ = l_Lasm_JS_Web_Support_args(v___x_5920_);
v___x_5922_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5912_, v___x_5921_);
return v___x_5922_;
}
v___jp_5923_:
{
if (lean_obj_tag(v_data_5908_) == 0)
{
lean_object* v_value_5925_; lean_object* v___x_5927_; uint8_t v_isShared_5928_; uint8_t v_isSharedCheck_5932_; 
v_value_5925_ = lean_ctor_get(v_data_5908_, 0);
v_isSharedCheck_5932_ = !lean_is_exclusive(v_data_5908_);
if (v_isSharedCheck_5932_ == 0)
{
v___x_5927_ = v_data_5908_;
v_isShared_5928_ = v_isSharedCheck_5932_;
goto v_resetjp_5926_;
}
else
{
lean_inc(v_value_5925_);
lean_dec(v_data_5908_);
v___x_5927_ = lean_box(0);
v_isShared_5928_ = v_isSharedCheck_5932_;
goto v_resetjp_5926_;
}
v_resetjp_5926_:
{
lean_object* v___x_5930_; 
if (v_isShared_5928_ == 0)
{
lean_ctor_set_tag(v___x_5927_, 6);
v___x_5930_ = v___x_5927_;
goto v_reusejp_5929_;
}
else
{
lean_object* v_reuseFailAlloc_5931_; 
v_reuseFailAlloc_5931_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5931_, 0, v_value_5925_);
v___x_5930_ = v_reuseFailAlloc_5931_;
goto v_reusejp_5929_;
}
v_reusejp_5929_:
{
v___y_5914_ = v___y_5924_;
v___y_5915_ = v___x_5930_;
goto v___jp_5913_;
}
}
}
else
{
lean_object* v_value_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; 
v_value_5933_ = lean_ctor_get(v_data_5908_, 0);
lean_inc(v_value_5933_);
lean_dec_ref_known(v_data_5908_, 1);
v___x_5934_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5935_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5935_, 0, v_value_5933_);
lean_ctor_set(v___x_5935_, 1, v___x_5934_);
v___y_5914_ = v___y_5924_;
v___y_5915_ = v___x_5935_;
goto v___jp_5913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile___boxed(lean_object* v_path_5947_, lean_object* v_data_5948_, lean_object* v_options_5949_, lean_object* v_a_5950_){
_start:
{
lean_object* v_res_5951_; 
v_res_5951_ = l_Lasm_JS_Deno_writeFile(v_path_5947_, v_data_5948_, v_options_5949_);
lean_dec(v_options_5949_);
return v_res_5951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync(lean_object* v_path_5960_, lean_object* v_data_5961_, lean_object* v_options_5962_){
_start:
{
uint8_t v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___y_5968_; 
v___x_5964_ = 0;
v___x_5965_ = lean_unsigned_to_nat(3u);
v___x_5966_ = ((lean_object*)(l_Lasm_JS_Deno_writeFileSync___closed__2));
if (lean_obj_tag(v_path_5960_) == 0)
{
lean_object* v_value_5977_; lean_object* v___x_5979_; uint8_t v_isShared_5980_; uint8_t v_isSharedCheck_5984_; 
v_value_5977_ = lean_ctor_get(v_path_5960_, 0);
v_isSharedCheck_5984_ = !lean_is_exclusive(v_path_5960_);
if (v_isSharedCheck_5984_ == 0)
{
v___x_5979_ = v_path_5960_;
v_isShared_5980_ = v_isSharedCheck_5984_;
goto v_resetjp_5978_;
}
else
{
lean_inc(v_value_5977_);
lean_dec(v_path_5960_);
v___x_5979_ = lean_box(0);
v_isShared_5980_ = v_isSharedCheck_5984_;
goto v_resetjp_5978_;
}
v_resetjp_5978_:
{
lean_object* v___x_5982_; 
if (v_isShared_5980_ == 0)
{
lean_ctor_set_tag(v___x_5979_, 4);
v___x_5982_ = v___x_5979_;
goto v_reusejp_5981_;
}
else
{
lean_object* v_reuseFailAlloc_5983_; 
v_reuseFailAlloc_5983_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5983_, 0, v_value_5977_);
v___x_5982_ = v_reuseFailAlloc_5983_;
goto v_reusejp_5981_;
}
v_reusejp_5981_:
{
v___y_5968_ = v___x_5982_;
goto v___jp_5967_;
}
}
}
else
{
lean_object* v_value_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; 
v_value_5985_ = lean_ctor_get(v_path_5960_, 0);
lean_inc(v_value_5985_);
lean_dec_ref_known(v_path_5960_, 1);
v___x_5986_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5987_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5987_, 0, v_value_5985_);
lean_ctor_set(v___x_5987_, 1, v___x_5986_);
v___y_5968_ = v___x_5987_;
goto v___jp_5967_;
}
v___jp_5967_:
{
lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; 
v___x_5969_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5969_, 0, v_data_5961_);
v___x_5970_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_5962_);
v___x_5971_ = lean_mk_empty_array_with_capacity(v___x_5965_);
v___x_5972_ = lean_array_push(v___x_5971_, v___y_5968_);
v___x_5973_ = lean_array_push(v___x_5972_, v___x_5969_);
v___x_5974_ = lean_array_push(v___x_5973_, v___x_5970_);
v___x_5975_ = l_Lasm_JS_Web_Support_args(v___x_5974_);
v___x_5976_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5966_, v___x_5975_, v___x_5964_);
return v___x_5976_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync___boxed(lean_object* v_path_5988_, lean_object* v_data_5989_, lean_object* v_options_5990_, lean_object* v_a_5991_){
_start:
{
lean_object* v_res_5992_; 
v_res_5992_ = l_Lasm_JS_Deno_writeFileSync(v_path_5988_, v_data_5989_, v_options_5990_);
lean_dec(v_options_5990_);
return v_res_5992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile(lean_object* v_path_6001_, lean_object* v_data_6002_, lean_object* v_options_6003_){
_start:
{
lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v___y_6008_; lean_object* v___y_6009_; lean_object* v___y_6018_; 
v___x_6005_ = lean_unsigned_to_nat(3u);
v___x_6006_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFile___closed__2));
if (lean_obj_tag(v_path_6001_) == 0)
{
lean_object* v_value_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6037_; 
v_value_6030_ = lean_ctor_get(v_path_6001_, 0);
v_isSharedCheck_6037_ = !lean_is_exclusive(v_path_6001_);
if (v_isSharedCheck_6037_ == 0)
{
v___x_6032_ = v_path_6001_;
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
else
{
lean_inc(v_value_6030_);
lean_dec(v_path_6001_);
v___x_6032_ = lean_box(0);
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
v_resetjp_6031_:
{
lean_object* v___x_6035_; 
if (v_isShared_6033_ == 0)
{
lean_ctor_set_tag(v___x_6032_, 4);
v___x_6035_ = v___x_6032_;
goto v_reusejp_6034_;
}
else
{
lean_object* v_reuseFailAlloc_6036_; 
v_reuseFailAlloc_6036_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6036_, 0, v_value_6030_);
v___x_6035_ = v_reuseFailAlloc_6036_;
goto v_reusejp_6034_;
}
v_reusejp_6034_:
{
v___y_6018_ = v___x_6035_;
goto v___jp_6017_;
}
}
}
else
{
lean_object* v_value_6038_; lean_object* v___x_6039_; lean_object* v___x_6040_; 
v_value_6038_ = lean_ctor_get(v_path_6001_, 0);
lean_inc(v_value_6038_);
lean_dec_ref_known(v_path_6001_, 1);
v___x_6039_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6040_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6040_, 0, v_value_6038_);
lean_ctor_set(v___x_6040_, 1, v___x_6039_);
v___y_6018_ = v___x_6040_;
goto v___jp_6017_;
}
v___jp_6007_:
{
lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; lean_object* v___x_6016_; 
v___x_6010_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6003_);
v___x_6011_ = lean_mk_empty_array_with_capacity(v___x_6005_);
v___x_6012_ = lean_array_push(v___x_6011_, v___y_6008_);
v___x_6013_ = lean_array_push(v___x_6012_, v___y_6009_);
v___x_6014_ = lean_array_push(v___x_6013_, v___x_6010_);
v___x_6015_ = l_Lasm_JS_Web_Support_args(v___x_6014_);
v___x_6016_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6006_, v___x_6015_);
return v___x_6016_;
}
v___jp_6017_:
{
if (lean_obj_tag(v_data_6002_) == 0)
{
lean_object* v_value_6019_; lean_object* v___x_6021_; uint8_t v_isShared_6022_; uint8_t v_isSharedCheck_6026_; 
v_value_6019_ = lean_ctor_get(v_data_6002_, 0);
v_isSharedCheck_6026_ = !lean_is_exclusive(v_data_6002_);
if (v_isSharedCheck_6026_ == 0)
{
v___x_6021_ = v_data_6002_;
v_isShared_6022_ = v_isSharedCheck_6026_;
goto v_resetjp_6020_;
}
else
{
lean_inc(v_value_6019_);
lean_dec(v_data_6002_);
v___x_6021_ = lean_box(0);
v_isShared_6022_ = v_isSharedCheck_6026_;
goto v_resetjp_6020_;
}
v_resetjp_6020_:
{
lean_object* v___x_6024_; 
if (v_isShared_6022_ == 0)
{
lean_ctor_set_tag(v___x_6021_, 4);
v___x_6024_ = v___x_6021_;
goto v_reusejp_6023_;
}
else
{
lean_object* v_reuseFailAlloc_6025_; 
v_reuseFailAlloc_6025_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6025_, 0, v_value_6019_);
v___x_6024_ = v_reuseFailAlloc_6025_;
goto v_reusejp_6023_;
}
v_reusejp_6023_:
{
v___y_6008_ = v___y_6018_;
v___y_6009_ = v___x_6024_;
goto v___jp_6007_;
}
}
}
else
{
lean_object* v_value_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; 
v_value_6027_ = lean_ctor_get(v_data_6002_, 0);
lean_inc(v_value_6027_);
lean_dec_ref_known(v_data_6002_, 1);
v___x_6028_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6029_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6029_, 0, v_value_6027_);
lean_ctor_set(v___x_6029_, 1, v___x_6028_);
v___y_6008_ = v___y_6018_;
v___y_6009_ = v___x_6029_;
goto v___jp_6007_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile___boxed(lean_object* v_path_6041_, lean_object* v_data_6042_, lean_object* v_options_6043_, lean_object* v_a_6044_){
_start:
{
lean_object* v_res_6045_; 
v_res_6045_ = l_Lasm_JS_Deno_writeTextFile(v_path_6041_, v_data_6042_, v_options_6043_);
lean_dec(v_options_6043_);
return v_res_6045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync(lean_object* v_path_6054_, lean_object* v_data_6055_, lean_object* v_options_6056_){
_start:
{
uint8_t v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___y_6062_; 
v___x_6058_ = 0;
v___x_6059_ = lean_unsigned_to_nat(3u);
v___x_6060_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFileSync___closed__2));
if (lean_obj_tag(v_path_6054_) == 0)
{
lean_object* v_value_6071_; lean_object* v___x_6073_; uint8_t v_isShared_6074_; uint8_t v_isSharedCheck_6078_; 
v_value_6071_ = lean_ctor_get(v_path_6054_, 0);
v_isSharedCheck_6078_ = !lean_is_exclusive(v_path_6054_);
if (v_isSharedCheck_6078_ == 0)
{
v___x_6073_ = v_path_6054_;
v_isShared_6074_ = v_isSharedCheck_6078_;
goto v_resetjp_6072_;
}
else
{
lean_inc(v_value_6071_);
lean_dec(v_path_6054_);
v___x_6073_ = lean_box(0);
v_isShared_6074_ = v_isSharedCheck_6078_;
goto v_resetjp_6072_;
}
v_resetjp_6072_:
{
lean_object* v___x_6076_; 
if (v_isShared_6074_ == 0)
{
lean_ctor_set_tag(v___x_6073_, 4);
v___x_6076_ = v___x_6073_;
goto v_reusejp_6075_;
}
else
{
lean_object* v_reuseFailAlloc_6077_; 
v_reuseFailAlloc_6077_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6077_, 0, v_value_6071_);
v___x_6076_ = v_reuseFailAlloc_6077_;
goto v_reusejp_6075_;
}
v_reusejp_6075_:
{
v___y_6062_ = v___x_6076_;
goto v___jp_6061_;
}
}
}
else
{
lean_object* v_value_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; 
v_value_6079_ = lean_ctor_get(v_path_6054_, 0);
lean_inc(v_value_6079_);
lean_dec_ref_known(v_path_6054_, 1);
v___x_6080_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6081_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6081_, 0, v_value_6079_);
lean_ctor_set(v___x_6081_, 1, v___x_6080_);
v___y_6062_ = v___x_6081_;
goto v___jp_6061_;
}
v___jp_6061_:
{
lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; 
v___x_6063_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6063_, 0, v_data_6055_);
v___x_6064_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6056_);
v___x_6065_ = lean_mk_empty_array_with_capacity(v___x_6059_);
v___x_6066_ = lean_array_push(v___x_6065_, v___y_6062_);
v___x_6067_ = lean_array_push(v___x_6066_, v___x_6063_);
v___x_6068_ = lean_array_push(v___x_6067_, v___x_6064_);
v___x_6069_ = l_Lasm_JS_Web_Support_args(v___x_6068_);
v___x_6070_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6060_, v___x_6069_, v___x_6058_);
return v___x_6070_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync___boxed(lean_object* v_path_6082_, lean_object* v_data_6083_, lean_object* v_options_6084_, lean_object* v_a_6085_){
_start:
{
lean_object* v_res_6086_; 
v_res_6086_ = l_Lasm_JS_Deno_writeTextFileSync(v_path_6082_, v_data_6083_, v_options_6084_);
lean_dec(v_options_6084_);
return v_res_6086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate(lean_object* v_name_6095_, lean_object* v_len_6096_){
_start:
{
lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; 
v___x_6098_ = lean_unsigned_to_nat(2u);
v___x_6099_ = ((lean_object*)(l_Lasm_JS_Deno_truncate___closed__2));
v___x_6100_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6100_, 0, v_name_6095_);
v___x_6101_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6096_);
v___x_6102_ = lean_mk_empty_array_with_capacity(v___x_6098_);
v___x_6103_ = lean_array_push(v___x_6102_, v___x_6100_);
v___x_6104_ = lean_array_push(v___x_6103_, v___x_6101_);
v___x_6105_ = l_Lasm_JS_Web_Support_args(v___x_6104_);
v___x_6106_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6099_, v___x_6105_);
return v___x_6106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate___boxed(lean_object* v_name_6107_, lean_object* v_len_6108_, lean_object* v_a_6109_){
_start:
{
lean_object* v_res_6110_; 
v_res_6110_ = l_Lasm_JS_Deno_truncate(v_name_6107_, v_len_6108_);
lean_dec(v_len_6108_);
return v_res_6110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync(lean_object* v_name_6119_, lean_object* v_len_6120_){
_start:
{
uint8_t v___x_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; 
v___x_6122_ = 0;
v___x_6123_ = lean_unsigned_to_nat(2u);
v___x_6124_ = ((lean_object*)(l_Lasm_JS_Deno_truncateSync___closed__2));
v___x_6125_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6125_, 0, v_name_6119_);
v___x_6126_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6120_);
v___x_6127_ = lean_mk_empty_array_with_capacity(v___x_6123_);
v___x_6128_ = lean_array_push(v___x_6127_, v___x_6125_);
v___x_6129_ = lean_array_push(v___x_6128_, v___x_6126_);
v___x_6130_ = l_Lasm_JS_Web_Support_args(v___x_6129_);
v___x_6131_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6124_, v___x_6130_, v___x_6122_);
return v___x_6131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync___boxed(lean_object* v_name_6132_, lean_object* v_len_6133_, lean_object* v_a_6134_){
_start:
{
lean_object* v_res_6135_; 
v_res_6135_ = l_Lasm_JS_Deno_truncateSync(v_name_6132_, v_len_6133_);
lean_dec(v_len_6133_);
return v_res_6135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(lean_object* v_x_6136_){
_start:
{
if (lean_obj_tag(v_x_6136_) == 0)
{
lean_object* v___x_6137_; 
v___x_6137_ = lean_box(0);
return v___x_6137_;
}
else
{
lean_object* v_val_6138_; 
v_val_6138_ = lean_ctor_get(v_x_6136_, 0);
lean_inc(v_val_6138_);
lean_dec_ref_known(v_x_6136_, 1);
if (lean_obj_tag(v_val_6138_) == 0)
{
lean_object* v_value_6139_; lean_object* v___x_6141_; uint8_t v_isShared_6142_; uint8_t v_isSharedCheck_6146_; 
v_value_6139_ = lean_ctor_get(v_val_6138_, 0);
v_isSharedCheck_6146_ = !lean_is_exclusive(v_val_6138_);
if (v_isSharedCheck_6146_ == 0)
{
v___x_6141_ = v_val_6138_;
v_isShared_6142_ = v_isSharedCheck_6146_;
goto v_resetjp_6140_;
}
else
{
lean_inc(v_value_6139_);
lean_dec(v_val_6138_);
v___x_6141_ = lean_box(0);
v_isShared_6142_ = v_isSharedCheck_6146_;
goto v_resetjp_6140_;
}
v_resetjp_6140_:
{
lean_object* v___x_6144_; 
if (v_isShared_6142_ == 0)
{
lean_ctor_set_tag(v___x_6141_, 4);
v___x_6144_ = v___x_6141_;
goto v_reusejp_6143_;
}
else
{
lean_object* v_reuseFailAlloc_6145_; 
v_reuseFailAlloc_6145_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6145_, 0, v_value_6139_);
v___x_6144_ = v_reuseFailAlloc_6145_;
goto v_reusejp_6143_;
}
v_reusejp_6143_:
{
return v___x_6144_;
}
}
}
else
{
lean_object* v_value_6147_; lean_object* v___x_6149_; uint8_t v_isShared_6150_; uint8_t v_isSharedCheck_6157_; 
v_value_6147_ = lean_ctor_get(v_val_6138_, 0);
v_isSharedCheck_6157_ = !lean_is_exclusive(v_val_6138_);
if (v_isSharedCheck_6157_ == 0)
{
v___x_6149_ = v_val_6138_;
v_isShared_6150_ = v_isSharedCheck_6157_;
goto v_resetjp_6148_;
}
else
{
lean_inc(v_value_6147_);
lean_dec(v_val_6138_);
v___x_6149_ = lean_box(0);
v_isShared_6150_ = v_isSharedCheck_6157_;
goto v_resetjp_6148_;
}
v_resetjp_6148_:
{
size_t v_sz_6151_; size_t v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6155_; 
v_sz_6151_ = lean_array_size(v_value_6147_);
v___x_6152_ = ((size_t)0ULL);
v___x_6153_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6151_, v___x_6152_, v_value_6147_);
if (v_isShared_6150_ == 0)
{
lean_ctor_set_tag(v___x_6149_, 7);
lean_ctor_set(v___x_6149_, 0, v___x_6153_);
v___x_6155_ = v___x_6149_;
goto v_reusejp_6154_;
}
else
{
lean_object* v_reuseFailAlloc_6156_; 
v_reuseFailAlloc_6156_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6156_, 0, v___x_6153_);
v___x_6155_ = v_reuseFailAlloc_6156_;
goto v_reusejp_6154_;
}
v_reusejp_6154_:
{
return v___x_6155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(lean_object* v_x_6158_){
_start:
{
if (lean_obj_tag(v_x_6158_) == 0)
{
lean_object* v___x_6159_; 
v___x_6159_ = lean_box(0);
return v___x_6159_;
}
else
{
lean_object* v_val_6160_; lean_object* v_recursive_6161_; lean_object* v_ignore_6162_; lean_object* v___x_6164_; uint8_t v_isShared_6165_; uint8_t v_isSharedCheck_6179_; 
v_val_6160_ = lean_ctor_get(v_x_6158_, 0);
lean_inc(v_val_6160_);
lean_dec_ref_known(v_x_6158_, 1);
v_recursive_6161_ = lean_ctor_get(v_val_6160_, 0);
v_ignore_6162_ = lean_ctor_get(v_val_6160_, 1);
v_isSharedCheck_6179_ = !lean_is_exclusive(v_val_6160_);
if (v_isSharedCheck_6179_ == 0)
{
v___x_6164_ = v_val_6160_;
v_isShared_6165_ = v_isSharedCheck_6179_;
goto v_resetjp_6163_;
}
else
{
lean_inc(v_ignore_6162_);
lean_inc(v_recursive_6161_);
lean_dec(v_val_6160_);
v___x_6164_ = lean_box(0);
v_isShared_6165_ = v_isSharedCheck_6179_;
goto v_resetjp_6163_;
}
v_resetjp_6163_:
{
lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6169_; 
v___x_6166_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_6167_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_6161_);
lean_dec(v_recursive_6161_);
if (v_isShared_6165_ == 0)
{
lean_ctor_set(v___x_6164_, 1, v___x_6167_);
lean_ctor_set(v___x_6164_, 0, v___x_6166_);
v___x_6169_ = v___x_6164_;
goto v_reusejp_6168_;
}
else
{
lean_object* v_reuseFailAlloc_6178_; 
v_reuseFailAlloc_6178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6178_, 0, v___x_6166_);
lean_ctor_set(v_reuseFailAlloc_6178_, 1, v___x_6167_);
v___x_6169_ = v_reuseFailAlloc_6178_;
goto v_reusejp_6168_;
}
v_reusejp_6168_:
{
lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; 
v___x_6170_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0));
v___x_6171_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(v_ignore_6162_);
v___x_6172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6172_, 0, v___x_6170_);
lean_ctor_set(v___x_6172_, 1, v___x_6171_);
v___x_6173_ = lean_unsigned_to_nat(2u);
v___x_6174_ = lean_mk_empty_array_with_capacity(v___x_6173_);
v___x_6175_ = lean_array_push(v___x_6174_, v___x_6169_);
v___x_6176_ = lean_array_push(v___x_6175_, v___x_6172_);
v___x_6177_ = l_Lasm_JS_Web_Support_fields(v___x_6176_);
lean_dec_ref(v___x_6176_);
return v___x_6177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs(lean_object* v_paths_6188_, lean_object* v_options_6189_){
_start:
{
uint8_t v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___y_6195_; 
v___x_6191_ = 0;
v___x_6192_ = lean_unsigned_to_nat(2u);
v___x_6193_ = ((lean_object*)(l_Lasm_JS_Deno_watchFs___closed__2));
if (lean_obj_tag(v_paths_6188_) == 0)
{
lean_object* v_value_6218_; lean_object* v___x_6220_; uint8_t v_isShared_6221_; uint8_t v_isSharedCheck_6225_; 
v_value_6218_ = lean_ctor_get(v_paths_6188_, 0);
v_isSharedCheck_6225_ = !lean_is_exclusive(v_paths_6188_);
if (v_isSharedCheck_6225_ == 0)
{
v___x_6220_ = v_paths_6188_;
v_isShared_6221_ = v_isSharedCheck_6225_;
goto v_resetjp_6219_;
}
else
{
lean_inc(v_value_6218_);
lean_dec(v_paths_6188_);
v___x_6220_ = lean_box(0);
v_isShared_6221_ = v_isSharedCheck_6225_;
goto v_resetjp_6219_;
}
v_resetjp_6219_:
{
lean_object* v___x_6223_; 
if (v_isShared_6221_ == 0)
{
lean_ctor_set_tag(v___x_6220_, 4);
v___x_6223_ = v___x_6220_;
goto v_reusejp_6222_;
}
else
{
lean_object* v_reuseFailAlloc_6224_; 
v_reuseFailAlloc_6224_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6224_, 0, v_value_6218_);
v___x_6223_ = v_reuseFailAlloc_6224_;
goto v_reusejp_6222_;
}
v_reusejp_6222_:
{
v___y_6195_ = v___x_6223_;
goto v___jp_6194_;
}
}
}
else
{
lean_object* v_value_6226_; lean_object* v___x_6228_; uint8_t v_isShared_6229_; uint8_t v_isSharedCheck_6236_; 
v_value_6226_ = lean_ctor_get(v_paths_6188_, 0);
v_isSharedCheck_6236_ = !lean_is_exclusive(v_paths_6188_);
if (v_isSharedCheck_6236_ == 0)
{
v___x_6228_ = v_paths_6188_;
v_isShared_6229_ = v_isSharedCheck_6236_;
goto v_resetjp_6227_;
}
else
{
lean_inc(v_value_6226_);
lean_dec(v_paths_6188_);
v___x_6228_ = lean_box(0);
v_isShared_6229_ = v_isSharedCheck_6236_;
goto v_resetjp_6227_;
}
v_resetjp_6227_:
{
size_t v_sz_6230_; size_t v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6234_; 
v_sz_6230_ = lean_array_size(v_value_6226_);
v___x_6231_ = ((size_t)0ULL);
v___x_6232_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6230_, v___x_6231_, v_value_6226_);
if (v_isShared_6229_ == 0)
{
lean_ctor_set_tag(v___x_6228_, 7);
lean_ctor_set(v___x_6228_, 0, v___x_6232_);
v___x_6234_ = v___x_6228_;
goto v_reusejp_6233_;
}
else
{
lean_object* v_reuseFailAlloc_6235_; 
v_reuseFailAlloc_6235_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6235_, 0, v___x_6232_);
v___x_6234_ = v_reuseFailAlloc_6235_;
goto v_reusejp_6233_;
}
v_reusejp_6233_:
{
v___y_6195_ = v___x_6234_;
goto v___jp_6194_;
}
}
}
v___jp_6194_:
{
lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; 
v___x_6196_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(v_options_6189_);
v___x_6197_ = lean_mk_empty_array_with_capacity(v___x_6192_);
v___x_6198_ = lean_array_push(v___x_6197_, v___y_6195_);
v___x_6199_ = lean_array_push(v___x_6198_, v___x_6196_);
v___x_6200_ = l_Lasm_JS_Web_Support_args(v___x_6199_);
v___x_6201_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_6193_, v___x_6200_, v___x_6191_);
if (lean_obj_tag(v___x_6201_) == 0)
{
lean_object* v_a_6202_; lean_object* v___x_6204_; uint8_t v_isShared_6205_; uint8_t v_isSharedCheck_6209_; 
v_a_6202_ = lean_ctor_get(v___x_6201_, 0);
v_isSharedCheck_6209_ = !lean_is_exclusive(v___x_6201_);
if (v_isSharedCheck_6209_ == 0)
{
v___x_6204_ = v___x_6201_;
v_isShared_6205_ = v_isSharedCheck_6209_;
goto v_resetjp_6203_;
}
else
{
lean_inc(v_a_6202_);
lean_dec(v___x_6201_);
v___x_6204_ = lean_box(0);
v_isShared_6205_ = v_isSharedCheck_6209_;
goto v_resetjp_6203_;
}
v_resetjp_6203_:
{
lean_object* v___x_6207_; 
if (v_isShared_6205_ == 0)
{
v___x_6207_ = v___x_6204_;
goto v_reusejp_6206_;
}
else
{
lean_object* v_reuseFailAlloc_6208_; 
v_reuseFailAlloc_6208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6208_, 0, v_a_6202_);
v___x_6207_ = v_reuseFailAlloc_6208_;
goto v_reusejp_6206_;
}
v_reusejp_6206_:
{
return v___x_6207_;
}
}
}
else
{
lean_object* v_a_6210_; lean_object* v___x_6212_; uint8_t v_isShared_6213_; uint8_t v_isSharedCheck_6217_; 
v_a_6210_ = lean_ctor_get(v___x_6201_, 0);
v_isSharedCheck_6217_ = !lean_is_exclusive(v___x_6201_);
if (v_isSharedCheck_6217_ == 0)
{
v___x_6212_ = v___x_6201_;
v_isShared_6213_ = v_isSharedCheck_6217_;
goto v_resetjp_6211_;
}
else
{
lean_inc(v_a_6210_);
lean_dec(v___x_6201_);
v___x_6212_ = lean_box(0);
v_isShared_6213_ = v_isSharedCheck_6217_;
goto v_resetjp_6211_;
}
v_resetjp_6211_:
{
lean_object* v___x_6215_; 
if (v_isShared_6213_ == 0)
{
v___x_6215_ = v___x_6212_;
goto v_reusejp_6214_;
}
else
{
lean_object* v_reuseFailAlloc_6216_; 
v_reuseFailAlloc_6216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6216_, 0, v_a_6210_);
v___x_6215_ = v_reuseFailAlloc_6216_;
goto v_reusejp_6214_;
}
v_reusejp_6214_:
{
return v___x_6215_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs___boxed(lean_object* v_paths_6237_, lean_object* v_options_6238_, lean_object* v_a_6239_){
_start:
{
lean_object* v_res_6240_; 
v_res_6240_ = l_Lasm_JS_Deno_watchFs(v_paths_6237_, v_options_6238_);
return v_res_6240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(lean_object* v_x_6241_){
_start:
{
if (lean_obj_tag(v_x_6241_) == 0)
{
lean_object* v___x_6242_; 
v___x_6242_ = lean_box(0);
return v___x_6242_;
}
else
{
lean_object* v_val_6243_; lean_object* v___x_6244_; lean_object* v___y_6246_; uint8_t v___x_6252_; 
v_val_6243_ = lean_ctor_get(v_x_6241_, 0);
v___x_6244_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0));
v___x_6252_ = lean_unbox(v_val_6243_);
switch(v___x_6252_)
{
case 0:
{
lean_object* v___x_6253_; 
v___x_6253_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
v___y_6246_ = v___x_6253_;
goto v___jp_6245_;
}
case 1:
{
lean_object* v___x_6254_; 
v___x_6254_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
v___y_6246_ = v___x_6254_;
goto v___jp_6245_;
}
default: 
{
lean_object* v___x_6255_; 
v___x_6255_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
v___y_6246_ = v___x_6255_;
goto v___jp_6245_;
}
}
v___jp_6245_:
{
lean_object* v___x_6247_; lean_object* v___x_6248_; lean_object* v___x_6249_; lean_object* v___x_6250_; lean_object* v___x_6251_; 
lean_inc(v___y_6246_);
v___x_6247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6247_, 0, v___x_6244_);
lean_ctor_set(v___x_6247_, 1, v___y_6246_);
v___x_6248_ = lean_unsigned_to_nat(1u);
v___x_6249_ = lean_mk_empty_array_with_capacity(v___x_6248_);
v___x_6250_ = lean_array_push(v___x_6249_, v___x_6247_);
v___x_6251_ = l_Lasm_JS_Web_Support_fields(v___x_6250_);
lean_dec_ref(v___x_6250_);
return v___x_6251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0___boxed(lean_object* v_x_6256_){
_start:
{
lean_object* v_res_6257_; 
v_res_6257_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_x_6256_);
lean_dec(v_x_6256_);
return v_res_6257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink(lean_object* v_oldpath_6266_, lean_object* v_newpath_6267_, lean_object* v_options_6268_){
_start:
{
lean_object* v___x_6270_; lean_object* v___x_6271_; lean_object* v___y_6273_; lean_object* v___y_6274_; lean_object* v___y_6283_; 
v___x_6270_ = lean_unsigned_to_nat(3u);
v___x_6271_ = ((lean_object*)(l_Lasm_JS_Deno_symlink___closed__2));
if (lean_obj_tag(v_oldpath_6266_) == 0)
{
lean_object* v_value_6295_; lean_object* v___x_6297_; uint8_t v_isShared_6298_; uint8_t v_isSharedCheck_6302_; 
v_value_6295_ = lean_ctor_get(v_oldpath_6266_, 0);
v_isSharedCheck_6302_ = !lean_is_exclusive(v_oldpath_6266_);
if (v_isSharedCheck_6302_ == 0)
{
v___x_6297_ = v_oldpath_6266_;
v_isShared_6298_ = v_isSharedCheck_6302_;
goto v_resetjp_6296_;
}
else
{
lean_inc(v_value_6295_);
lean_dec(v_oldpath_6266_);
v___x_6297_ = lean_box(0);
v_isShared_6298_ = v_isSharedCheck_6302_;
goto v_resetjp_6296_;
}
v_resetjp_6296_:
{
lean_object* v___x_6300_; 
if (v_isShared_6298_ == 0)
{
lean_ctor_set_tag(v___x_6297_, 4);
v___x_6300_ = v___x_6297_;
goto v_reusejp_6299_;
}
else
{
lean_object* v_reuseFailAlloc_6301_; 
v_reuseFailAlloc_6301_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6301_, 0, v_value_6295_);
v___x_6300_ = v_reuseFailAlloc_6301_;
goto v_reusejp_6299_;
}
v_reusejp_6299_:
{
v___y_6283_ = v___x_6300_;
goto v___jp_6282_;
}
}
}
else
{
lean_object* v_value_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; 
v_value_6303_ = lean_ctor_get(v_oldpath_6266_, 0);
lean_inc(v_value_6303_);
lean_dec_ref_known(v_oldpath_6266_, 1);
v___x_6304_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6305_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6305_, 0, v_value_6303_);
lean_ctor_set(v___x_6305_, 1, v___x_6304_);
v___y_6283_ = v___x_6305_;
goto v___jp_6282_;
}
v___jp_6272_:
{
lean_object* v___x_6275_; lean_object* v___x_6276_; lean_object* v___x_6277_; lean_object* v___x_6278_; lean_object* v___x_6279_; lean_object* v___x_6280_; lean_object* v___x_6281_; 
v___x_6275_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6268_);
v___x_6276_ = lean_mk_empty_array_with_capacity(v___x_6270_);
v___x_6277_ = lean_array_push(v___x_6276_, v___y_6273_);
v___x_6278_ = lean_array_push(v___x_6277_, v___y_6274_);
v___x_6279_ = lean_array_push(v___x_6278_, v___x_6275_);
v___x_6280_ = l_Lasm_JS_Web_Support_args(v___x_6279_);
v___x_6281_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6271_, v___x_6280_);
return v___x_6281_;
}
v___jp_6282_:
{
if (lean_obj_tag(v_newpath_6267_) == 0)
{
lean_object* v_value_6284_; lean_object* v___x_6286_; uint8_t v_isShared_6287_; uint8_t v_isSharedCheck_6291_; 
v_value_6284_ = lean_ctor_get(v_newpath_6267_, 0);
v_isSharedCheck_6291_ = !lean_is_exclusive(v_newpath_6267_);
if (v_isSharedCheck_6291_ == 0)
{
v___x_6286_ = v_newpath_6267_;
v_isShared_6287_ = v_isSharedCheck_6291_;
goto v_resetjp_6285_;
}
else
{
lean_inc(v_value_6284_);
lean_dec(v_newpath_6267_);
v___x_6286_ = lean_box(0);
v_isShared_6287_ = v_isSharedCheck_6291_;
goto v_resetjp_6285_;
}
v_resetjp_6285_:
{
lean_object* v___x_6289_; 
if (v_isShared_6287_ == 0)
{
lean_ctor_set_tag(v___x_6286_, 4);
v___x_6289_ = v___x_6286_;
goto v_reusejp_6288_;
}
else
{
lean_object* v_reuseFailAlloc_6290_; 
v_reuseFailAlloc_6290_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6290_, 0, v_value_6284_);
v___x_6289_ = v_reuseFailAlloc_6290_;
goto v_reusejp_6288_;
}
v_reusejp_6288_:
{
v___y_6273_ = v___y_6283_;
v___y_6274_ = v___x_6289_;
goto v___jp_6272_;
}
}
}
else
{
lean_object* v_value_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; 
v_value_6292_ = lean_ctor_get(v_newpath_6267_, 0);
lean_inc(v_value_6292_);
lean_dec_ref_known(v_newpath_6267_, 1);
v___x_6293_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6294_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6294_, 0, v_value_6292_);
lean_ctor_set(v___x_6294_, 1, v___x_6293_);
v___y_6273_ = v___y_6283_;
v___y_6274_ = v___x_6294_;
goto v___jp_6272_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink___boxed(lean_object* v_oldpath_6306_, lean_object* v_newpath_6307_, lean_object* v_options_6308_, lean_object* v_a_6309_){
_start:
{
lean_object* v_res_6310_; 
v_res_6310_ = l_Lasm_JS_Deno_symlink(v_oldpath_6306_, v_newpath_6307_, v_options_6308_);
lean_dec(v_options_6308_);
return v_res_6310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync(lean_object* v_oldpath_6319_, lean_object* v_newpath_6320_, lean_object* v_options_6321_){
_start:
{
uint8_t v___x_6323_; lean_object* v___x_6324_; lean_object* v___x_6325_; lean_object* v___y_6327_; lean_object* v___y_6328_; lean_object* v___y_6337_; 
v___x_6323_ = 0;
v___x_6324_ = lean_unsigned_to_nat(3u);
v___x_6325_ = ((lean_object*)(l_Lasm_JS_Deno_symlinkSync___closed__2));
if (lean_obj_tag(v_oldpath_6319_) == 0)
{
lean_object* v_value_6349_; lean_object* v___x_6351_; uint8_t v_isShared_6352_; uint8_t v_isSharedCheck_6356_; 
v_value_6349_ = lean_ctor_get(v_oldpath_6319_, 0);
v_isSharedCheck_6356_ = !lean_is_exclusive(v_oldpath_6319_);
if (v_isSharedCheck_6356_ == 0)
{
v___x_6351_ = v_oldpath_6319_;
v_isShared_6352_ = v_isSharedCheck_6356_;
goto v_resetjp_6350_;
}
else
{
lean_inc(v_value_6349_);
lean_dec(v_oldpath_6319_);
v___x_6351_ = lean_box(0);
v_isShared_6352_ = v_isSharedCheck_6356_;
goto v_resetjp_6350_;
}
v_resetjp_6350_:
{
lean_object* v___x_6354_; 
if (v_isShared_6352_ == 0)
{
lean_ctor_set_tag(v___x_6351_, 4);
v___x_6354_ = v___x_6351_;
goto v_reusejp_6353_;
}
else
{
lean_object* v_reuseFailAlloc_6355_; 
v_reuseFailAlloc_6355_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6355_, 0, v_value_6349_);
v___x_6354_ = v_reuseFailAlloc_6355_;
goto v_reusejp_6353_;
}
v_reusejp_6353_:
{
v___y_6337_ = v___x_6354_;
goto v___jp_6336_;
}
}
}
else
{
lean_object* v_value_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; 
v_value_6357_ = lean_ctor_get(v_oldpath_6319_, 0);
lean_inc(v_value_6357_);
lean_dec_ref_known(v_oldpath_6319_, 1);
v___x_6358_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6359_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6359_, 0, v_value_6357_);
lean_ctor_set(v___x_6359_, 1, v___x_6358_);
v___y_6337_ = v___x_6359_;
goto v___jp_6336_;
}
v___jp_6326_:
{
lean_object* v___x_6329_; lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; 
v___x_6329_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6321_);
v___x_6330_ = lean_mk_empty_array_with_capacity(v___x_6324_);
v___x_6331_ = lean_array_push(v___x_6330_, v___y_6327_);
v___x_6332_ = lean_array_push(v___x_6331_, v___y_6328_);
v___x_6333_ = lean_array_push(v___x_6332_, v___x_6329_);
v___x_6334_ = l_Lasm_JS_Web_Support_args(v___x_6333_);
v___x_6335_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6325_, v___x_6334_, v___x_6323_);
return v___x_6335_;
}
v___jp_6336_:
{
if (lean_obj_tag(v_newpath_6320_) == 0)
{
lean_object* v_value_6338_; lean_object* v___x_6340_; uint8_t v_isShared_6341_; uint8_t v_isSharedCheck_6345_; 
v_value_6338_ = lean_ctor_get(v_newpath_6320_, 0);
v_isSharedCheck_6345_ = !lean_is_exclusive(v_newpath_6320_);
if (v_isSharedCheck_6345_ == 0)
{
v___x_6340_ = v_newpath_6320_;
v_isShared_6341_ = v_isSharedCheck_6345_;
goto v_resetjp_6339_;
}
else
{
lean_inc(v_value_6338_);
lean_dec(v_newpath_6320_);
v___x_6340_ = lean_box(0);
v_isShared_6341_ = v_isSharedCheck_6345_;
goto v_resetjp_6339_;
}
v_resetjp_6339_:
{
lean_object* v___x_6343_; 
if (v_isShared_6341_ == 0)
{
lean_ctor_set_tag(v___x_6340_, 4);
v___x_6343_ = v___x_6340_;
goto v_reusejp_6342_;
}
else
{
lean_object* v_reuseFailAlloc_6344_; 
v_reuseFailAlloc_6344_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6344_, 0, v_value_6338_);
v___x_6343_ = v_reuseFailAlloc_6344_;
goto v_reusejp_6342_;
}
v_reusejp_6342_:
{
v___y_6327_ = v___y_6337_;
v___y_6328_ = v___x_6343_;
goto v___jp_6326_;
}
}
}
else
{
lean_object* v_value_6346_; lean_object* v___x_6347_; lean_object* v___x_6348_; 
v_value_6346_ = lean_ctor_get(v_newpath_6320_, 0);
lean_inc(v_value_6346_);
lean_dec_ref_known(v_newpath_6320_, 1);
v___x_6347_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6348_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6348_, 0, v_value_6346_);
lean_ctor_set(v___x_6348_, 1, v___x_6347_);
v___y_6327_ = v___y_6337_;
v___y_6328_ = v___x_6348_;
goto v___jp_6326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync___boxed(lean_object* v_oldpath_6360_, lean_object* v_newpath_6361_, lean_object* v_options_6362_, lean_object* v_a_6363_){
_start:
{
lean_object* v_res_6364_; 
v_res_6364_ = l_Lasm_JS_Deno_symlinkSync(v_oldpath_6360_, v_newpath_6361_, v_options_6362_);
lean_dec(v_options_6362_);
return v_res_6364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync(lean_object* v_path_6373_, lean_object* v_atime_6374_, lean_object* v_mtime_6375_){
_start:
{
uint8_t v___x_6377_; lean_object* v___x_6378_; lean_object* v___x_6379_; lean_object* v___y_6381_; 
v___x_6377_ = 0;
v___x_6378_ = lean_unsigned_to_nat(3u);
v___x_6379_ = ((lean_object*)(l_Lasm_JS_Deno_utimeSync___closed__2));
if (lean_obj_tag(v_path_6373_) == 0)
{
lean_object* v_value_6388_; lean_object* v___x_6390_; uint8_t v_isShared_6391_; uint8_t v_isSharedCheck_6395_; 
v_value_6388_ = lean_ctor_get(v_path_6373_, 0);
v_isSharedCheck_6395_ = !lean_is_exclusive(v_path_6373_);
if (v_isSharedCheck_6395_ == 0)
{
v___x_6390_ = v_path_6373_;
v_isShared_6391_ = v_isSharedCheck_6395_;
goto v_resetjp_6389_;
}
else
{
lean_inc(v_value_6388_);
lean_dec(v_path_6373_);
v___x_6390_ = lean_box(0);
v_isShared_6391_ = v_isSharedCheck_6395_;
goto v_resetjp_6389_;
}
v_resetjp_6389_:
{
lean_object* v___x_6393_; 
if (v_isShared_6391_ == 0)
{
lean_ctor_set_tag(v___x_6390_, 4);
v___x_6393_ = v___x_6390_;
goto v_reusejp_6392_;
}
else
{
lean_object* v_reuseFailAlloc_6394_; 
v_reuseFailAlloc_6394_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6394_, 0, v_value_6388_);
v___x_6393_ = v_reuseFailAlloc_6394_;
goto v_reusejp_6392_;
}
v_reusejp_6392_:
{
v___y_6381_ = v___x_6393_;
goto v___jp_6380_;
}
}
}
else
{
lean_object* v_value_6396_; lean_object* v___x_6397_; lean_object* v___x_6398_; 
v_value_6396_ = lean_ctor_get(v_path_6373_, 0);
lean_inc(v_value_6396_);
lean_dec_ref_known(v_path_6373_, 1);
v___x_6397_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6398_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6398_, 0, v_value_6396_);
lean_ctor_set(v___x_6398_, 1, v___x_6397_);
v___y_6381_ = v___x_6398_;
goto v___jp_6380_;
}
v___jp_6380_:
{
lean_object* v___x_6382_; lean_object* v___x_6383_; lean_object* v___x_6384_; lean_object* v___x_6385_; lean_object* v___x_6386_; lean_object* v___x_6387_; 
v___x_6382_ = lean_mk_empty_array_with_capacity(v___x_6378_);
v___x_6383_ = lean_array_push(v___x_6382_, v___y_6381_);
v___x_6384_ = lean_array_push(v___x_6383_, v_atime_6374_);
v___x_6385_ = lean_array_push(v___x_6384_, v_mtime_6375_);
v___x_6386_ = l_Lasm_JS_Web_Support_args(v___x_6385_);
v___x_6387_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6379_, v___x_6386_, v___x_6377_);
return v___x_6387_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync___boxed(lean_object* v_path_6399_, lean_object* v_atime_6400_, lean_object* v_mtime_6401_, lean_object* v_a_6402_){
_start:
{
lean_object* v_res_6403_; 
v_res_6403_ = l_Lasm_JS_Deno_utimeSync(v_path_6399_, v_atime_6400_, v_mtime_6401_);
return v_res_6403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime(lean_object* v_path_6412_, lean_object* v_atime_6413_, lean_object* v_mtime_6414_){
_start:
{
lean_object* v___x_6416_; lean_object* v___x_6417_; lean_object* v___y_6419_; 
v___x_6416_ = lean_unsigned_to_nat(3u);
v___x_6417_ = ((lean_object*)(l_Lasm_JS_Deno_utime___closed__2));
if (lean_obj_tag(v_path_6412_) == 0)
{
lean_object* v_value_6426_; lean_object* v___x_6428_; uint8_t v_isShared_6429_; uint8_t v_isSharedCheck_6433_; 
v_value_6426_ = lean_ctor_get(v_path_6412_, 0);
v_isSharedCheck_6433_ = !lean_is_exclusive(v_path_6412_);
if (v_isSharedCheck_6433_ == 0)
{
v___x_6428_ = v_path_6412_;
v_isShared_6429_ = v_isSharedCheck_6433_;
goto v_resetjp_6427_;
}
else
{
lean_inc(v_value_6426_);
lean_dec(v_path_6412_);
v___x_6428_ = lean_box(0);
v_isShared_6429_ = v_isSharedCheck_6433_;
goto v_resetjp_6427_;
}
v_resetjp_6427_:
{
lean_object* v___x_6431_; 
if (v_isShared_6429_ == 0)
{
lean_ctor_set_tag(v___x_6428_, 4);
v___x_6431_ = v___x_6428_;
goto v_reusejp_6430_;
}
else
{
lean_object* v_reuseFailAlloc_6432_; 
v_reuseFailAlloc_6432_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6432_, 0, v_value_6426_);
v___x_6431_ = v_reuseFailAlloc_6432_;
goto v_reusejp_6430_;
}
v_reusejp_6430_:
{
v___y_6419_ = v___x_6431_;
goto v___jp_6418_;
}
}
}
else
{
lean_object* v_value_6434_; lean_object* v___x_6435_; lean_object* v___x_6436_; 
v_value_6434_ = lean_ctor_get(v_path_6412_, 0);
lean_inc(v_value_6434_);
lean_dec_ref_known(v_path_6412_, 1);
v___x_6435_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6436_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6436_, 0, v_value_6434_);
lean_ctor_set(v___x_6436_, 1, v___x_6435_);
v___y_6419_ = v___x_6436_;
goto v___jp_6418_;
}
v___jp_6418_:
{
lean_object* v___x_6420_; lean_object* v___x_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; 
v___x_6420_ = lean_mk_empty_array_with_capacity(v___x_6416_);
v___x_6421_ = lean_array_push(v___x_6420_, v___y_6419_);
v___x_6422_ = lean_array_push(v___x_6421_, v_atime_6413_);
v___x_6423_ = lean_array_push(v___x_6422_, v_mtime_6414_);
v___x_6424_ = l_Lasm_JS_Web_Support_args(v___x_6423_);
v___x_6425_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6417_, v___x_6424_);
return v___x_6425_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime___boxed(lean_object* v_path_6437_, lean_object* v_atime_6438_, lean_object* v_mtime_6439_, lean_object* v_a_6440_){
_start:
{
lean_object* v_res_6441_; 
v_res_6441_ = l_Lasm_JS_Deno_utime(v_path_6437_, v_atime_6438_, v_mtime_6439_);
return v_res_6441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask(lean_object* v_mask_6450_){
_start:
{
uint8_t v___x_6452_; lean_object* v___x_6453_; lean_object* v___x_6454_; lean_object* v___x_6455_; lean_object* v___x_6456_; lean_object* v___x_6457_; lean_object* v___x_6458_; lean_object* v___x_6459_; 
v___x_6452_ = 0;
v___x_6453_ = lean_unsigned_to_nat(1u);
v___x_6454_ = ((lean_object*)(l_Lasm_JS_Deno_umask___closed__2));
v___x_6455_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mask_6450_);
v___x_6456_ = lean_mk_empty_array_with_capacity(v___x_6453_);
v___x_6457_ = lean_array_push(v___x_6456_, v___x_6455_);
v___x_6458_ = l_Lasm_JS_Web_Support_args(v___x_6457_);
v___x_6459_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v___x_6454_, v___x_6458_, v___x_6452_);
return v___x_6459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask___boxed(lean_object* v_mask_6460_, lean_object* v_a_6461_){
_start:
{
lean_object* v_res_6462_; 
v_res_6462_ = l_Lasm_JS_Deno_umask(v_mask_6460_);
lean_dec(v_mask_6460_);
return v_res_6462_;
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
