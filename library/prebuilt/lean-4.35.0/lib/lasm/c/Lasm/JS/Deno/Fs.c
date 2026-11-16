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
lean_object* v_value_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_676_; 
v_value_664_ = lean_ctor_get(v_x_655_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v_x_655_);
if (v_isSharedCheck_676_ == 0)
{
v___x_666_ = v_x_655_;
v_isShared_667_ = v_isSharedCheck_676_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_value_664_);
lean_dec(v_x_655_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_676_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_668_ = lean_nat_abs(v_value_664_);
v___x_669_ = lean_cstr_to_nat("9007199254740991");
v___x_670_ = lean_nat_dec_le(v___x_668_, v___x_669_);
lean_dec(v___x_668_);
if (v___x_670_ == 0)
{
lean_object* v___x_672_; 
if (v_isShared_667_ == 0)
{
lean_ctor_set_tag(v___x_666_, 5);
v___x_672_ = v___x_666_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_value_664_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
else
{
double v___x_674_; lean_object* v___x_675_; 
lean_del_object(v___x_666_);
v___x_674_ = l_Float_ofInt(v_value_664_);
lean_dec(v_value_664_);
v___x_675_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0(double v_value_679_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_680_, 0, v_value_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0___boxed(lean_object* v_value_681_){
_start:
{
double v_value_boxed_682_; lean_object* v_res_683_; 
v_value_boxed_682_ = lean_unbox_float(v_value_681_);
lean_dec_ref(v_value_681_);
v_res_683_ = l_Lasm_JS_Deno_instCoeFloatDoubleOrBigint___lam__0(v_value_boxed_682_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeIntDoubleOrBigint___lam__0(lean_object* v_value_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_687_, 0, v_value_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0(lean_object* v___x_711_, lean_object* v___x_712_, lean_object* v___x_713_, lean_object* v___x_714_, lean_object* v___x_715_, lean_object* v_d_716_){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc_ref(v___x_711_);
v___x_718_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_716_, v___x_717_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
v_a_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v_a_727_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_718_, 1);
v___x_728_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc_ref(v___x_711_);
v___x_729_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_716_, v___x_728_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
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
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_a_738_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_729_, 1);
v___x_739_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
v___x_740_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_716_, v___x_739_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
v_a_741_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_740_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_740_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_a_749_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_740_, 1);
v___x_750_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3));
lean_inc_ref(v___x_712_);
v___x_751_ = l_Lasm_JS_readField___redArg(v___x_712_, v_d_716_, v___x_750_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
v_a_752_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_751_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_751_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
else
{
lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v_a_760_ = lean_ctor_get(v___x_751_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v___x_751_, 1);
v___x_761_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4));
lean_inc_ref(v___x_713_);
v___x_762_ = l_Lasm_JS_readField___redArg(v___x_713_, v_d_716_, v___x_761_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
v_a_763_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_762_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_762_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
else
{
lean_object* v_a_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v_a_771_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_771_);
lean_dec_ref_known(v___x_762_, 1);
v___x_772_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5));
lean_inc_ref(v___x_713_);
v___x_773_ = l_Lasm_JS_readField___redArg(v___x_713_, v_d_716_, v___x_772_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v_a_782_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_782_);
lean_dec_ref_known(v___x_773_, 1);
v___x_783_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6));
lean_inc_ref(v___x_713_);
v___x_784_ = l_Lasm_JS_readField___redArg(v___x_713_, v_d_716_, v___x_783_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
v_a_785_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_784_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v_a_793_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_784_, 1);
v___x_794_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7));
v___x_795_ = l_Lasm_JS_readField___redArg(v___x_713_, v_d_716_, v___x_794_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_803_; 
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_712_);
v_a_796_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_803_ == 0)
{
v___x_798_ = v___x_795_;
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_795_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_796_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_a_804_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_804_);
lean_dec_ref_known(v___x_795_, 1);
v___x_805_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8));
v___x_806_ = l_Lasm_JS_readField___redArg(v___x_712_, v_d_716_, v___x_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
v_a_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_806_);
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
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_a_815_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_806_, 1);
v___x_816_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9));
lean_inc_ref(v___x_714_);
v___x_817_ = l_Lasm_JS_readField___redArg(v___x_714_, v_d_716_, v___x_816_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
if (v_isShared_821_ == 0)
{
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_818_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_a_826_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_817_, 1);
v___x_827_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
lean_inc_ref(v___x_714_);
v___x_828_ = l_Lasm_JS_readField___redArg(v___x_714_, v_d_716_, v___x_827_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
v_a_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v_a_837_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_828_, 1);
v___x_838_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11));
lean_inc_ref(v___x_714_);
v___x_839_ = l_Lasm_JS_readField___redArg(v___x_714_, v_d_716_, v___x_838_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
v_a_840_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_839_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_839_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
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
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_a_848_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_a_848_);
lean_dec_ref_known(v___x_839_, 1);
v___x_849_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12));
lean_inc_ref(v___x_714_);
v___x_850_ = l_Lasm_JS_readField___redArg(v___x_714_, v_d_716_, v___x_849_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
v_a_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v_a_859_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_850_, 1);
v___x_860_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13));
lean_inc_ref(v___x_714_);
v___x_861_ = l_Lasm_JS_readField___redArg(v___x_714_, v_d_716_, v___x_860_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
lean_dec(v_a_859_);
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
v_a_862_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_861_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
else
{
lean_object* v_a_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_a_870_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_861_, 1);
v___x_871_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14));
lean_inc_ref(v___x_714_);
v___x_872_ = l_Lasm_JS_readField___redArg(v___x_714_, v_d_716_, v___x_871_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
lean_dec(v_a_870_);
lean_dec(v_a_859_);
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v_a_881_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v___x_872_, 1);
v___x_882_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15));
lean_inc_ref(v___x_714_);
v___x_883_ = l_Lasm_JS_readField___redArg(v___x_714_, v_d_716_, v___x_882_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
lean_dec(v_a_881_);
lean_dec(v_a_870_);
lean_dec(v_a_859_);
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
v_a_884_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_883_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_883_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v_a_892_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_892_);
lean_dec_ref_known(v___x_883_, 1);
v___x_893_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16));
v___x_894_ = l_Lasm_JS_readField___redArg(v___x_714_, v_d_716_, v___x_893_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_dec(v_a_892_);
lean_dec(v_a_881_);
lean_dec(v_a_870_);
lean_dec(v_a_859_);
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
v_a_895_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v_a_903_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_894_, 1);
v___x_904_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17));
lean_inc_ref(v___x_715_);
v___x_905_ = l_Lasm_JS_readField___redArg(v___x_715_, v_d_716_, v___x_904_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec(v_a_903_);
lean_dec(v_a_892_);
lean_dec(v_a_881_);
lean_dec(v_a_870_);
lean_dec(v_a_859_);
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
v_a_906_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_905_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_905_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_a_914_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v___x_905_, 1);
v___x_915_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18));
lean_inc_ref(v___x_715_);
v___x_916_ = l_Lasm_JS_readField___redArg(v___x_715_, v_d_716_, v___x_915_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_a_914_);
lean_dec(v_a_903_);
lean_dec(v_a_892_);
lean_dec(v_a_881_);
lean_dec(v_a_870_);
lean_dec(v_a_859_);
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
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
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_a_925_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_925_);
lean_dec_ref_known(v___x_916_, 1);
v___x_926_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19));
lean_inc_ref(v___x_715_);
v___x_927_ = l_Lasm_JS_readField___redArg(v___x_715_, v_d_716_, v___x_926_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec(v_a_925_);
lean_dec(v_a_914_);
lean_dec(v_a_903_);
lean_dec(v_a_892_);
lean_dec(v_a_881_);
lean_dec(v_a_870_);
lean_dec(v_a_859_);
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
lean_dec_ref(v___x_715_);
v_a_928_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_927_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_927_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v_a_936_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_927_, 1);
v___x_937_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20));
v___x_938_ = l_Lasm_JS_readField___redArg(v___x_715_, v_d_716_, v___x_937_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
lean_dec(v_a_936_);
lean_dec(v_a_925_);
lean_dec(v_a_914_);
lean_dec(v_a_903_);
lean_dec(v_a_892_);
lean_dec(v_a_881_);
lean_dec(v_a_870_);
lean_dec(v_a_859_);
lean_dec(v_a_848_);
lean_dec(v_a_837_);
lean_dec(v_a_826_);
lean_dec(v_a_815_);
lean_dec(v_a_804_);
lean_dec(v_a_793_);
lean_dec(v_a_782_);
lean_dec(v_a_771_);
lean_dec(v_a_760_);
lean_dec(v_a_749_);
lean_dec(v_a_738_);
lean_dec(v_a_727_);
v_a_939_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_938_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_938_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_960_; 
v_a_947_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_960_ == 0)
{
v___x_949_ = v___x_938_;
v_isShared_950_ = v_isSharedCheck_960_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_938_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_960_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_951_; uint8_t v___x_952_; uint8_t v___x_953_; uint8_t v___x_954_; double v___x_955_; double v___x_956_; lean_object* v___x_958_; 
v___x_951_ = lean_alloc_ctor(0, 16, 19);
lean_ctor_set(v___x_951_, 0, v_a_771_);
lean_ctor_set(v___x_951_, 1, v_a_782_);
lean_ctor_set(v___x_951_, 2, v_a_793_);
lean_ctor_set(v___x_951_, 3, v_a_804_);
lean_ctor_set(v___x_951_, 4, v_a_826_);
lean_ctor_set(v___x_951_, 5, v_a_837_);
lean_ctor_set(v___x_951_, 6, v_a_848_);
lean_ctor_set(v___x_951_, 7, v_a_859_);
lean_ctor_set(v___x_951_, 8, v_a_870_);
lean_ctor_set(v___x_951_, 9, v_a_881_);
lean_ctor_set(v___x_951_, 10, v_a_892_);
lean_ctor_set(v___x_951_, 11, v_a_903_);
lean_ctor_set(v___x_951_, 12, v_a_914_);
lean_ctor_set(v___x_951_, 13, v_a_925_);
lean_ctor_set(v___x_951_, 14, v_a_936_);
lean_ctor_set(v___x_951_, 15, v_a_947_);
v___x_952_ = lean_unbox(v_a_727_);
lean_dec(v_a_727_);
lean_ctor_set_uint8(v___x_951_, sizeof(void*)*16 + 16, v___x_952_);
v___x_953_ = lean_unbox(v_a_738_);
lean_dec(v_a_738_);
lean_ctor_set_uint8(v___x_951_, sizeof(void*)*16 + 17, v___x_953_);
v___x_954_ = lean_unbox(v_a_749_);
lean_dec(v_a_749_);
lean_ctor_set_uint8(v___x_951_, sizeof(void*)*16 + 18, v___x_954_);
v___x_955_ = lean_unbox_float(v_a_760_);
lean_dec(v_a_760_);
lean_ctor_set_float(v___x_951_, sizeof(void*)*16, v___x_955_);
v___x_956_ = lean_unbox_float(v_a_815_);
lean_dec(v_a_815_);
lean_ctor_set_float(v___x_951_, sizeof(void*)*16 + 8, v___x_956_);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_951_);
v___x_958_ = v___x_949_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_951_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___boxed(lean_object* v___x_961_, lean_object* v___x_962_, lean_object* v___x_963_, lean_object* v___x_964_, lean_object* v___x_965_, lean_object* v_d_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lasm_JS_Deno_instFromJSFileInfo___lam__0(v___x_961_, v___x_962_, v___x_963_, v___x_964_, v___x_965_, v_d_966_);
lean_dec(v_d_966_);
return v_res_967_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__0(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = l_Lasm_JS_instFromJSData;
v___x_969_ = l_Lasm_JS_instFromJSOption___redArg(v___x_968_);
return v___x_969_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__1(void){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = l_Lasm_JS_instFromJSFloat;
v___x_971_ = l_Lasm_JS_instFromJSOption___redArg(v___x_970_);
return v___x_971_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__2(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = l_Lasm_JS_instFromJSBool;
v___x_973_ = l_Lasm_JS_instFromJSOption___redArg(v___x_972_);
return v___x_973_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__3(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___f_979_; 
v___x_974_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__2, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__2);
v___x_975_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__1, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__1);
v___x_976_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__0, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__0);
v___x_977_ = l_Lasm_JS_instFromJSFloat;
v___x_978_ = l_Lasm_JS_instFromJSBool;
v___f_979_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___boxed), 6, 5);
lean_closure_set(v___f_979_, 0, v___x_978_);
lean_closure_set(v___f_979_, 1, v___x_977_);
lean_closure_set(v___f_979_, 2, v___x_976_);
lean_closure_set(v___f_979_, 3, v___x_975_);
lean_closure_set(v___f_979_, 4, v___x_974_);
return v___f_979_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__5(void){
_start:
{
uint8_t v___x_981_; lean_object* v___x_982_; lean_object* v___f_983_; lean_object* v___x_984_; 
v___x_981_ = 0;
v___x_982_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___closed__4));
v___f_983_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__3, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__3);
v___x_984_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_984_, 0, v___f_983_);
lean_ctor_set(v___x_984_, 1, v___x_982_);
lean_ctor_set_uint8(v___x_984_, sizeof(void*)*2, v___x_981_);
return v___x_984_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo(void){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__5, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__5_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__5);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0(lean_object* v___x_987_, lean_object* v___x_988_, lean_object* v_d_989_){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0));
v___x_991_ = l_Lasm_JS_readField___redArg(v___x_987_, v_d_989_, v___x_990_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec_ref(v___x_988_);
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v_a_1000_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_991_, 1);
v___x_1001_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc_ref(v___x_988_);
v___x_1002_ = l_Lasm_JS_readField___redArg(v___x_988_, v_d_989_, v___x_1001_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
lean_dec(v_a_1000_);
lean_dec_ref(v___x_988_);
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_1002_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v_a_1011_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1002_, 1);
v___x_1012_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc_ref(v___x_988_);
v___x_1013_ = l_Lasm_JS_readField___redArg(v___x_988_, v_d_989_, v___x_1012_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_dec(v_a_1011_);
lean_dec(v_a_1000_);
lean_dec_ref(v___x_988_);
v_a_1014_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_1013_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1013_);
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
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v_a_1022_ = lean_ctor_get(v___x_1013_, 0);
lean_inc(v_a_1022_);
lean_dec_ref_known(v___x_1013_, 1);
v___x_1023_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
v___x_1024_ = l_Lasm_JS_readField___redArg(v___x_988_, v_d_989_, v___x_1023_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec(v_a_1022_);
lean_dec(v_a_1011_);
lean_dec(v_a_1000_);
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1024_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1024_);
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
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1044_; 
v_a_1033_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1035_ = v___x_1024_;
v_isShared_1036_ = v_isSharedCheck_1044_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1024_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1044_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; uint8_t v___x_1038_; uint8_t v___x_1039_; uint8_t v___x_1040_; lean_object* v___x_1042_; 
v___x_1037_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1037_, 0, v_a_1000_);
v___x_1038_ = lean_unbox(v_a_1011_);
lean_dec(v_a_1011_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*1, v___x_1038_);
v___x_1039_ = lean_unbox(v_a_1022_);
lean_dec(v_a_1022_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*1 + 1, v___x_1039_);
v___x_1040_ = lean_unbox(v_a_1033_);
lean_dec(v_a_1033_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*1 + 2, v___x_1040_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 0, v___x_1037_);
v___x_1042_ = v___x_1035_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___boxed(lean_object* v___x_1045_, lean_object* v___x_1046_, lean_object* v_d_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lasm_JS_Deno_instFromJSDirEntry___lam__0(v___x_1045_, v___x_1046_, v_d_1047_);
lean_dec(v_d_1047_);
return v_res_1048_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__0(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___f_1051_; 
v___x_1049_ = l_Lasm_JS_instFromJSBool;
v___x_1050_ = l_Lasm_JS_instFromJSString;
v___f_1051_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1051_, 0, v___x_1050_);
lean_closure_set(v___f_1051_, 1, v___x_1049_);
return v___f_1051_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__2(void){
_start:
{
uint8_t v___x_1053_; lean_object* v___x_1054_; lean_object* v___f_1055_; lean_object* v___x_1056_; 
v___x_1053_ = 0;
v___x_1054_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___closed__1));
v___f_1055_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSDirEntry___closed__0, &l_Lasm_JS_Deno_instFromJSDirEntry___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__0);
v___x_1056_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1056_, 0, v___f_1055_);
lean_ctor_set(v___x_1056_, 1, v___x_1054_);
lean_ctor_set_uint8(v___x_1056_, sizeof(void*)*2, v___x_1053_);
return v___x_1056_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry(void){
_start:
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSDirEntry___closed__2, &l_Lasm_JS_Deno_instFromJSDirEntry___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__2);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0(lean_object* v___x_1061_, lean_object* v___x_1062_, lean_object* v___x_1063_, lean_object* v_d_1064_){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0));
v___x_1066_ = l_Lasm_JS_readField___redArg(v___x_1061_, v_d_1064_, v___x_1065_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
lean_dec_ref(v___x_1063_);
lean_dec_ref(v___x_1062_);
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1066_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1066_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_a_1075_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_a_1075_);
lean_dec_ref_known(v___x_1066_, 1);
v___x_1076_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1));
v___x_1077_ = l_Lasm_JS_readField___redArg(v___x_1062_, v_d_1064_, v___x_1076_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec(v_a_1075_);
lean_dec_ref(v___x_1063_);
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1077_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1077_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_a_1086_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1077_, 1);
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2));
v___x_1088_ = l_Lasm_JS_readField___redArg(v___x_1063_, v_d_1064_, v___x_1087_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_dec(v_a_1086_);
lean_dec(v_a_1075_);
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
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1106_; 
v_a_1097_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1099_ = v___x_1088_;
v_isShared_1100_ = v_isSharedCheck_1106_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1088_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1106_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1101_; uint8_t v___x_1102_; lean_object* v___x_1104_; 
v___x_1101_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1101_, 0, v_a_1086_);
lean_ctor_set(v___x_1101_, 1, v_a_1097_);
v___x_1102_ = lean_unbox(v_a_1075_);
lean_dec(v_a_1075_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*2, v___x_1102_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v___x_1101_);
v___x_1104_ = v___x_1099_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1101_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___boxed(lean_object* v___x_1107_, lean_object* v___x_1108_, lean_object* v___x_1109_, lean_object* v_d_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lasm_JS_Deno_instFromJSFsEvent___lam__0(v___x_1107_, v___x_1108_, v___x_1109_, v_d_1110_);
lean_dec(v_d_1110_);
return v_res_1111_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__0(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = l_Lasm_JS_instFromJSString;
v___x_1113_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1112_);
return v___x_1113_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__1(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventFlag));
v___x_1115_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__2(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___f_1119_; 
v___x_1116_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__1, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__1);
v___x_1117_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__0, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__0);
v___x_1118_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind));
v___f_1119_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1119_, 0, v___x_1118_);
lean_closure_set(v___f_1119_, 1, v___x_1117_);
lean_closure_set(v___f_1119_, 2, v___x_1116_);
return v___f_1119_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__4(void){
_start:
{
uint8_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___f_1123_; lean_object* v___x_1124_; 
v___x_1121_ = 0;
v___x_1122_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___closed__3));
v___f_1123_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__2, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__2);
v___x_1124_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1124_, 0, v___f_1123_);
lean_ctor_set(v___x_1124_, 1, v___x_1122_);
lean_ctor_set_uint8(v___x_1124_, sizeof(void*)*2, v___x_1121_);
return v___x_1124_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent(void){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__4, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__4_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__4);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0(lean_object* v___f_1131_, lean_object* v___f_1132_, lean_object* v_d_1133_){
_start:
{
lean_object* v_read_1134_; lean_object* v_write_1135_; lean_object* v_append_1136_; lean_object* v_truncate_1137_; lean_object* v_create_1138_; lean_object* v_createNew_1139_; lean_object* v_mode_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v_read_1134_ = lean_ctor_get(v_d_1133_, 0);
lean_inc(v_read_1134_);
v_write_1135_ = lean_ctor_get(v_d_1133_, 1);
lean_inc(v_write_1135_);
v_append_1136_ = lean_ctor_get(v_d_1133_, 2);
lean_inc(v_append_1136_);
v_truncate_1137_ = lean_ctor_get(v_d_1133_, 3);
lean_inc(v_truncate_1137_);
v_create_1138_ = lean_ctor_get(v_d_1133_, 4);
lean_inc(v_create_1138_);
v_createNew_1139_ = lean_ctor_get(v_d_1133_, 5);
lean_inc(v_createNew_1139_);
v_mode_1140_ = lean_ctor_get(v_d_1133_, 6);
lean_inc(v_mode_1140_);
lean_dec_ref(v_d_1133_);
v___x_1141_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1131_, 5);
v___x_1142_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1131_, v_read_1134_);
v___x_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1));
v___x_1145_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1131_, v_write_1135_);
v___x_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_1148_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1131_, v_append_1136_);
v___x_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1147_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_1151_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1131_, v_truncate_1137_);
v___x_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1150_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_1154_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1131_, v_create_1138_);
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1153_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_1157_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1131_, v_createNew_1139_);
v___x_1158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1160_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1132_, v_mode_1140_);
v___x_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1159_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
v___x_1162_ = lean_unsigned_to_nat(7u);
v___x_1163_ = lean_mk_empty_array_with_capacity(v___x_1162_);
v___x_1164_ = lean_array_push(v___x_1163_, v___x_1143_);
v___x_1165_ = lean_array_push(v___x_1164_, v___x_1146_);
v___x_1166_ = lean_array_push(v___x_1165_, v___x_1149_);
v___x_1167_ = lean_array_push(v___x_1166_, v___x_1152_);
v___x_1168_ = lean_array_push(v___x_1167_, v___x_1155_);
v___x_1169_ = lean_array_push(v___x_1168_, v___x_1158_);
v___x_1170_ = lean_array_push(v___x_1169_, v___x_1161_);
v___x_1171_ = l_Lasm_JS_Web_Support_fields(v___x_1170_);
lean_dec_ref(v___x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0(lean_object* v___f_1179_, lean_object* v___f_1180_, lean_object* v_d_1181_){
_start:
{
lean_object* v_recursive_1182_; lean_object* v_mode_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1200_; 
v_recursive_1182_ = lean_ctor_get(v_d_1181_, 0);
v_mode_1183_ = lean_ctor_get(v_d_1181_, 1);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_d_1181_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1185_ = v_d_1181_;
v_isShared_1186_ = v_isSharedCheck_1200_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_mode_1183_);
lean_inc(v_recursive_1182_);
lean_dec(v_d_1181_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1200_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1188_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1179_, v_recursive_1182_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 1, v___x_1188_);
lean_ctor_set(v___x_1185_, 0, v___x_1187_);
v___x_1190_ = v___x_1185_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1187_);
lean_ctor_set(v_reuseFailAlloc_1199_, 1, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1191_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1192_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1180_, v_mode_1183_);
v___x_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1191_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
v___x_1194_ = lean_unsigned_to_nat(2u);
v___x_1195_ = lean_mk_empty_array_with_capacity(v___x_1194_);
v___x_1196_ = lean_array_push(v___x_1195_, v___x_1190_);
v___x_1197_ = lean_array_push(v___x_1196_, v___x_1193_);
v___x_1198_ = l_Lasm_JS_Web_Support_fields(v___x_1197_);
lean_dec_ref(v___x_1197_);
return v___x_1198_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0(lean_object* v___f_1207_, lean_object* v_d_1208_){
_start:
{
lean_object* v_dir_1209_; lean_object* v_prefix_1210_; lean_object* v_suffix_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v_dir_1209_ = lean_ctor_get(v_d_1208_, 0);
lean_inc(v_dir_1209_);
v_prefix_1210_ = lean_ctor_get(v_d_1208_, 1);
lean_inc(v_prefix_1210_);
v_suffix_1211_ = lean_ctor_get(v_d_1208_, 2);
lean_inc(v_suffix_1211_);
lean_dec_ref(v_d_1208_);
v___x_1212_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
lean_inc_ref_n(v___f_1207_, 2);
v___x_1213_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_dir_1209_);
v___x_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0));
v___x_1216_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_prefix_1210_);
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1215_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1));
v___x_1219_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_suffix_1211_);
v___x_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1218_);
lean_ctor_set(v___x_1220_, 1, v___x_1219_);
v___x_1221_ = lean_unsigned_to_nat(3u);
v___x_1222_ = lean_mk_empty_array_with_capacity(v___x_1221_);
v___x_1223_ = lean_array_push(v___x_1222_, v___x_1214_);
v___x_1224_ = lean_array_push(v___x_1223_, v___x_1217_);
v___x_1225_ = lean_array_push(v___x_1224_, v___x_1220_);
v___x_1226_ = l_Lasm_JS_Web_Support_fields(v___x_1225_);
lean_dec_ref(v___x_1225_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSRemoveOptions___lam__0(lean_object* v___f_1231_, lean_object* v_d_1232_){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1233_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1234_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1231_, v_d_1232_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = lean_unsigned_to_nat(1u);
v___x_1237_ = lean_mk_empty_array_with_capacity(v___x_1236_);
v___x_1238_ = lean_array_push(v___x_1237_, v___x_1235_);
v___x_1239_ = l_Lasm_JS_Web_Support_fields(v___x_1238_);
lean_dec_ref(v___x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0(lean_object* v___f_1244_, lean_object* v_d_1245_){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1246_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_1247_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1244_, v_d_1245_);
v___x_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1246_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = lean_unsigned_to_nat(1u);
v___x_1250_ = lean_mk_empty_array_with_capacity(v___x_1249_);
v___x_1251_ = lean_array_push(v___x_1250_, v___x_1248_);
v___x_1252_ = l_Lasm_JS_Web_Support_fields(v___x_1251_);
lean_dec_ref(v___x_1251_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx(lean_object* v_x_1257_){
_start:
{
if (lean_obj_tag(v_x_1257_) == 0)
{
lean_object* v___x_1258_; 
v___x_1258_ = lean_unsigned_to_nat(0u);
return v___x_1258_;
}
else
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_unsigned_to_nat(1u);
return v___x_1259_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx___boxed(lean_object* v_x_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx(v_x_1260_);
lean_dec_ref(v_x_1260_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(lean_object* v_t_1262_, lean_object* v_k_1263_){
_start:
{
if (lean_obj_tag(v_t_1262_) == 0)
{
lean_object* v_value_1264_; lean_object* v___x_1265_; 
v_value_1264_ = lean_ctor_get(v_t_1262_, 0);
lean_inc_ref(v_value_1264_);
lean_dec_ref_known(v_t_1262_, 1);
v___x_1265_ = lean_apply_1(v_k_1263_, v_value_1264_);
return v___x_1265_;
}
else
{
lean_object* v_value_1266_; lean_object* v___x_1267_; 
v_value_1266_ = lean_ctor_get(v_t_1262_, 0);
lean_inc(v_value_1266_);
lean_dec_ref_known(v_t_1262_, 1);
v___x_1267_ = lean_apply_1(v_k_1263_, v_value_1266_);
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim(lean_object* v_motive_1268_, lean_object* v_ctorIdx_1269_, lean_object* v_t_1270_, lean_object* v_h_1271_, lean_object* v_k_1272_){
_start:
{
lean_object* v___x_1273_; 
v___x_1273_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1270_, v_k_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___boxed(lean_object* v_motive_1274_, lean_object* v_ctorIdx_1275_, lean_object* v_t_1276_, lean_object* v_h_1277_, lean_object* v_k_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim(v_motive_1274_, v_ctorIdx_1275_, v_t_1276_, v_h_1277_, v_k_1278_);
lean_dec(v_ctorIdx_1275_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_uint8Array_elim___redArg(lean_object* v_t_1280_, lean_object* v_uint8Array_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1280_, v_uint8Array_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_uint8Array_elim(lean_object* v_motive_1283_, lean_object* v_t_1284_, lean_object* v_h_1285_, lean_object* v_uint8Array_1286_){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1284_, v_uint8Array_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1288_, lean_object* v_readableStream_1289_){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1288_, v_readableStream_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_readableStream_elim(lean_object* v_motive_1291_, lean_object* v_t_1292_, lean_object* v_h_1293_, lean_object* v_readableStream_1294_){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1292_, v_readableStream_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___lam__0(lean_object* v_x_1296_){
_start:
{
if (lean_obj_tag(v_x_1296_) == 0)
{
lean_object* v_value_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
v_value_1297_ = lean_ctor_get(v_x_1296_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v_x_1296_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v_x_1296_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_value_1297_);
lean_dec(v_x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set_tag(v___x_1299_, 6);
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_value_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
else
{
lean_object* v_value_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v_value_1305_ = lean_ctor_get(v_x_1296_, 0);
lean_inc(v_value_1305_);
lean_dec_ref_known(v_x_1296_, 1);
v___x_1306_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_1307_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1307_, 0, v_value_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
return v___x_1307_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___lam__0(lean_object* v_value_1310_){
_start:
{
lean_object* v___x_1311_; 
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v_value_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___lam__0(lean_object* v_value_1314_){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1315_, 0, v_value_1314_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSWriteFileOptions___lam__0(lean_object* v___f_1318_, lean_object* v___f_1319_, lean_object* v___f_1320_, lean_object* v_d_1321_){
_start:
{
lean_object* v_append_1322_; lean_object* v_create_1323_; lean_object* v_createNew_1324_; lean_object* v_mode_1325_; lean_object* v_signal_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v_append_1322_ = lean_ctor_get(v_d_1321_, 0);
lean_inc(v_append_1322_);
v_create_1323_ = lean_ctor_get(v_d_1321_, 1);
lean_inc(v_create_1323_);
v_createNew_1324_ = lean_ctor_get(v_d_1321_, 2);
lean_inc(v_createNew_1324_);
v_mode_1325_ = lean_ctor_get(v_d_1321_, 3);
lean_inc(v_mode_1325_);
v_signal_1326_ = lean_ctor_get(v_d_1321_, 4);
lean_inc(v_signal_1326_);
lean_dec_ref(v_d_1321_);
v___x_1327_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_1318_, 2);
v___x_1328_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1318_, v_append_1322_);
v___x_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_1331_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1318_, v_create_1323_);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_1334_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1318_, v_createNew_1324_);
v___x_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1337_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1319_, v_mode_1325_);
v___x_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1336_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_1340_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1320_, v_signal_1326_);
v___x_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = lean_unsigned_to_nat(5u);
v___x_1343_ = lean_mk_empty_array_with_capacity(v___x_1342_);
v___x_1344_ = lean_array_push(v___x_1343_, v___x_1329_);
v___x_1345_ = lean_array_push(v___x_1344_, v___x_1332_);
v___x_1346_ = lean_array_push(v___x_1345_, v___x_1335_);
v___x_1347_ = lean_array_push(v___x_1346_, v___x_1338_);
v___x_1348_ = lean_array_push(v___x_1347_, v___x_1341_);
v___x_1349_ = l_Lasm_JS_Web_Support_fields(v___x_1348_);
lean_dec_ref(v___x_1348_);
return v___x_1349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx(lean_object* v_x_1355_){
_start:
{
if (lean_obj_tag(v_x_1355_) == 0)
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_unsigned_to_nat(0u);
return v___x_1356_;
}
else
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_unsigned_to_nat(1u);
return v___x_1357_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx___boxed(lean_object* v_x_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx(v_x_1358_);
lean_dec_ref(v_x_1358_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(lean_object* v_t_1360_, lean_object* v_k_1361_){
_start:
{
if (lean_obj_tag(v_t_1360_) == 0)
{
lean_object* v_value_1362_; lean_object* v___x_1363_; 
v_value_1362_ = lean_ctor_get(v_t_1360_, 0);
lean_inc_ref(v_value_1362_);
lean_dec_ref_known(v_t_1360_, 1);
v___x_1363_ = lean_apply_1(v_k_1361_, v_value_1362_);
return v___x_1363_;
}
else
{
lean_object* v_value_1364_; lean_object* v___x_1365_; 
v_value_1364_ = lean_ctor_get(v_t_1360_, 0);
lean_inc(v_value_1364_);
lean_dec_ref_known(v_t_1360_, 1);
v___x_1365_ = lean_apply_1(v_k_1361_, v_value_1364_);
return v___x_1365_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim(lean_object* v_motive_1366_, lean_object* v_ctorIdx_1367_, lean_object* v_t_1368_, lean_object* v_h_1369_, lean_object* v_k_1370_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1368_, v_k_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___boxed(lean_object* v_motive_1372_, lean_object* v_ctorIdx_1373_, lean_object* v_t_1374_, lean_object* v_h_1375_, lean_object* v_k_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim(v_motive_1372_, v_ctorIdx_1373_, v_t_1374_, v_h_1375_, v_k_1376_);
lean_dec(v_ctorIdx_1373_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_domString_elim___redArg(lean_object* v_t_1378_, lean_object* v_domString_1379_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1378_, v_domString_1379_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_domString_elim(lean_object* v_motive_1381_, lean_object* v_t_1382_, lean_object* v_h_1383_, lean_object* v_domString_1384_){
_start:
{
lean_object* v___x_1385_; 
v___x_1385_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1382_, v_domString_1384_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1386_, lean_object* v_readableStream_1387_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1386_, v_readableStream_1387_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_readableStream_elim(lean_object* v_motive_1389_, lean_object* v_t_1390_, lean_object* v_h_1391_, lean_object* v_readableStream_1392_){
_start:
{
lean_object* v___x_1393_; 
v___x_1393_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1390_, v_readableStream_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___lam__0(lean_object* v_x_1394_){
_start:
{
if (lean_obj_tag(v_x_1394_) == 0)
{
lean_object* v_value_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1402_; 
v_value_1395_ = lean_ctor_get(v_x_1394_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_x_1394_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1397_ = v_x_1394_;
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_value_1395_);
lean_dec(v_x_1394_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1400_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set_tag(v___x_1397_, 4);
v___x_1400_ = v___x_1397_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_value_1395_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
else
{
lean_object* v_value_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v_value_1403_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_value_1403_);
lean_dec_ref_known(v_x_1394_, 1);
v___x_1404_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_1405_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1405_, 0, v_value_1403_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
return v___x_1405_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___lam__0(lean_object* v_value_1408_){
_start:
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1409_, 0, v_value_1408_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___lam__0(lean_object* v_value_1412_){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1413_, 0, v_value_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object* v_x_1416_){
_start:
{
if (lean_obj_tag(v_x_1416_) == 0)
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_unsigned_to_nat(0u);
return v___x_1417_;
}
else
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_unsigned_to_nat(1u);
return v___x_1418_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object* v_x_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx(v_x_1419_);
lean_dec_ref(v_x_1419_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object* v_t_1421_, lean_object* v_k_1422_){
_start:
{
lean_object* v_value_1423_; lean_object* v___x_1424_; 
v_value_1423_ = lean_ctor_get(v_t_1421_, 0);
lean_inc_ref(v_value_1423_);
lean_dec_ref(v_t_1421_);
v___x_1424_ = lean_apply_1(v_k_1422_, v_value_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim(lean_object* v_motive_1425_, lean_object* v_ctorIdx_1426_, lean_object* v_t_1427_, lean_object* v_h_1428_, lean_object* v_k_1429_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1427_, v_k_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object* v_motive_1431_, lean_object* v_ctorIdx_1432_, lean_object* v_t_1433_, lean_object* v_h_1434_, lean_object* v_k_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim(v_motive_1431_, v_ctorIdx_1432_, v_t_1433_, v_h_1434_, v_k_1435_);
lean_dec(v_ctorIdx_1432_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object* v_t_1437_, lean_object* v_domString_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1437_, v_domString_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_domString_elim(lean_object* v_motive_1440_, lean_object* v_t_1441_, lean_object* v_h_1442_, lean_object* v_domString_1443_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1441_, v_domString_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object* v_t_1445_, lean_object* v_sequence_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1445_, v_sequence_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object* v_motive_1448_, lean_object* v_t_1449_, lean_object* v_h_1450_, lean_object* v_sequence_1451_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1449_, v_sequence_1451_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_x_1453_){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_x_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object* v___f_1474_, lean_object* v_x_1475_){
_start:
{
if (lean_obj_tag(v_x_1475_) == 0)
{
lean_object* v_value_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
lean_dec_ref(v___f_1474_);
v_value_1476_ = lean_ctor_get(v_x_1475_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_x_1475_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1478_ = v_x_1475_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_value_1476_);
lean_dec(v_x_1475_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
lean_ctor_set_tag(v___x_1478_, 4);
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_value_1476_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
else
{
lean_object* v_value_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1495_; 
v_value_1484_ = lean_ctor_get(v_x_1475_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v_x_1475_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1486_ = v_x_1475_;
v_isShared_1487_ = v_isSharedCheck_1495_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_value_1484_);
lean_dec(v_x_1475_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1495_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1488_; size_t v_sz_1489_; size_t v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
v___x_1488_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9));
v_sz_1489_ = lean_array_size(v_value_1484_);
v___x_1490_ = ((size_t)0ULL);
v___x_1491_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1488_, v___f_1474_, v_sz_1489_, v___x_1490_, v_value_1484_);
if (v_isShared_1487_ == 0)
{
lean_ctor_set_tag(v___x_1486_, 7);
lean_ctor_set(v___x_1486_, 0, v___x_1491_);
v___x_1493_ = v___x_1486_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1500_){
_start:
{
lean_object* v___x_1501_; 
v___x_1501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1501_, 0, v_value_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1504_){
_start:
{
lean_object* v___x_1505_; 
v___x_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1505_, 0, v_value_1504_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0(lean_object* v___f_1509_, lean_object* v___x_1510_, lean_object* v_d_1511_){
_start:
{
lean_object* v_recursive_1512_; lean_object* v_ignore_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1530_; 
v_recursive_1512_ = lean_ctor_get(v_d_1511_, 0);
v_ignore_1513_ = lean_ctor_get(v_d_1511_, 1);
v_isSharedCheck_1530_ = !lean_is_exclusive(v_d_1511_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1515_ = v_d_1511_;
v_isShared_1516_ = v_isSharedCheck_1530_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_ignore_1513_);
lean_inc(v_recursive_1512_);
lean_dec(v_d_1511_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1530_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1517_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1518_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1509_, v_recursive_1512_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 1, v___x_1518_);
lean_ctor_set(v___x_1515_, 0, v___x_1517_);
v___x_1520_ = v___x_1515_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1521_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0));
v___x_1522_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1510_, v_ignore_1513_);
v___x_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1521_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = lean_unsigned_to_nat(2u);
v___x_1525_ = lean_mk_empty_array_with_capacity(v___x_1524_);
v___x_1526_ = lean_array_push(v___x_1525_, v___x_1520_);
v___x_1527_ = lean_array_push(v___x_1526_, v___x_1523_);
v___x_1528_ = l_Lasm_JS_Web_Support_fields(v___x_1527_);
lean_dec_ref(v___x_1527_);
return v___x_1528_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0(uint8_t v_d_1536_){
_start:
{
lean_object* v___x_1537_; lean_object* v___y_1539_; 
v___x_1537_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0));
switch(v_d_1536_)
{
case 0:
{
lean_object* v___x_1545_; 
v___x_1545_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
v___y_1539_ = v___x_1545_;
goto v___jp_1538_;
}
case 1:
{
lean_object* v___x_1546_; 
v___x_1546_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
v___y_1539_ = v___x_1546_;
goto v___jp_1538_;
}
default: 
{
lean_object* v___x_1547_; 
v___x_1547_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
v___y_1539_ = v___x_1547_;
goto v___jp_1538_;
}
}
v___jp_1538_:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
lean_inc(v___y_1539_);
v___x_1540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1537_);
lean_ctor_set(v___x_1540_, 1, v___y_1539_);
v___x_1541_ = lean_unsigned_to_nat(1u);
v___x_1542_ = lean_mk_empty_array_with_capacity(v___x_1541_);
v___x_1543_ = lean_array_push(v___x_1542_, v___x_1540_);
v___x_1544_ = l_Lasm_JS_Web_Support_fields(v___x_1543_);
lean_dec_ref(v___x_1543_);
return v___x_1544_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___boxed(lean_object* v_d_1548_){
_start:
{
uint8_t v_d_boxed_1549_; lean_object* v_res_1550_; 
v_d_boxed_1549_ = lean_unbox(v_d_1548_);
v_res_1550_ = l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0(v_d_boxed_1549_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_readable(lean_object* v_self_1554_){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_readable___closed__0));
v___x_1557_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1554_, v___x_1556_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
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
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
v_a_1566_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1557_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1557_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_readable___boxed(lean_object* v_self_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lasm_JS_Deno_FsFile_readable(v_self_1574_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_writable(lean_object* v_self_1578_){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_writable___closed__0));
v___x_1581_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1578_, v___x_1580_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1581_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1581_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
v_a_1590_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1581_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1581_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_writable___boxed(lean_object* v_self_1598_, lean_object* v_a_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lasm_JS_Deno_FsFile_writable(v_self_1598_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncate(lean_object* v_self_1601_, lean_object* v_len_1602_){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1604_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_1605_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_1602_);
v___x_1606_ = lean_unsigned_to_nat(1u);
v___x_1607_ = lean_mk_empty_array_with_capacity(v___x_1606_);
v___x_1608_ = lean_array_push(v___x_1607_, v___x_1605_);
v___x_1609_ = l_Lasm_JS_Web_Support_args(v___x_1608_);
v___x_1610_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1601_, v___x_1604_, v___x_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncate___boxed(lean_object* v_self_1611_, lean_object* v_len_1612_, lean_object* v_a_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lasm_JS_Deno_FsFile_truncate(v_self_1611_, v_len_1612_);
lean_dec(v_len_1612_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncateSync(lean_object* v_self_1616_, lean_object* v_len_1617_){
_start:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1619_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_truncateSync___closed__0));
v___x_1620_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_1617_);
v___x_1621_ = lean_unsigned_to_nat(1u);
v___x_1622_ = lean_mk_empty_array_with_capacity(v___x_1621_);
v___x_1623_ = lean_array_push(v___x_1622_, v___x_1620_);
v___x_1624_ = l_Lasm_JS_Web_Support_args(v___x_1623_);
v___x_1625_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1616_, v___x_1619_, v___x_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncateSync___boxed(lean_object* v_self_1626_, lean_object* v_len_1627_, lean_object* v_a_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lasm_JS_Deno_FsFile_truncateSync(v_self_1626_, v_len_1627_);
lean_dec(v_len_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2(lean_object* v___f_1630_, lean_object* v_x_1631_){
_start:
{
if (lean_obj_tag(v_x_1631_) == 0)
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1641_; 
lean_dec_ref(v___f_1630_);
v_a_1633_ = lean_ctor_get(v_x_1631_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_x_1631_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1635_ = v_x_1631_;
v_isShared_1636_ = v_isSharedCheck_1641_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v_x_1631_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1641_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1639_; 
v___x_1639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1638_);
return v___x_1639_;
}
}
}
else
{
lean_object* v_a_1642_; lean_object* v___x_1643_; 
v_a_1642_ = lean_ctor_get(v_x_1631_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v_x_1631_, 1);
v___x_1643_ = lean_apply_2(v___f_1630_, v_a_1642_, lean_box(0));
return v___x_1643_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1644_, lean_object* v_x_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2(v___f_1644_, v_x_1645_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8(lean_object* v___f_1648_, lean_object* v_x_1649_){
_start:
{
if (lean_obj_tag(v_x_1649_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1659_; 
lean_dec_ref(v___f_1648_);
v_a_1651_ = lean_ctor_get(v_x_1649_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_x_1649_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1653_ = v_x_1649_;
v_isShared_1654_ = v_isSharedCheck_1659_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v_x_1649_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1659_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1657_; 
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
}
}
else
{
lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1671_; 
v_isSharedCheck_1671_ = !lean_is_exclusive(v_x_1649_);
if (v_isSharedCheck_1671_ == 0)
{
lean_object* v_unused_1672_; 
v_unused_1672_ = lean_ctor_get(v_x_1649_, 0);
lean_dec(v_unused_1672_);
v___x_1661_ = v_x_1649_;
v_isShared_1662_ = v_isSharedCheck_1671_;
goto v_resetjp_1660_;
}
else
{
lean_dec(v_x_1649_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1671_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1663_; uint8_t v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1667_; 
v___x_1663_ = lean_unsigned_to_nat(0u);
v___x_1664_ = 0;
v___x_1665_ = lean_io_promise_new();
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 0, v___x_1665_);
v___x_1667_ = v___x_1661_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1665_);
v___x_1667_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
v___x_1669_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1663_, v___x_1664_, v___x_1668_, v___f_1648_);
return v___x_1669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8___boxed(lean_object* v___f_1673_, lean_object* v_x_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8(v___f_1673_, v_x_1674_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1(lean_object* v___f_1677_, lean_object* v_bytes_1678_){
_start:
{
lean_object* v___x_1680_; uint8_t v___x_1681_; lean_object* v_val_1683_; lean_object* v___x_1686_; 
v___x_1680_ = lean_unsigned_to_nat(0u);
v___x_1681_ = 0;
v___x_1686_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1678_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1694_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1689_ = v___x_1686_;
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1686_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1692_; 
if (v_isShared_1690_ == 0)
{
lean_ctor_set_tag(v___x_1689_, 1);
v___x_1692_ = v___x_1689_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_a_1687_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
v_val_1683_ = v___x_1692_;
goto v___jp_1682_;
}
}
}
else
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
v_a_1695_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1697_ = v___x_1686_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1686_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
lean_ctor_set_tag(v___x_1697_, 0);
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_a_1695_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
v_val_1683_ = v___x_1700_;
goto v___jp_1682_;
}
}
}
v___jp_1682_:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1684_, 0, v_val_1683_);
v___x_1685_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1680_, v___x_1681_, v___x_1684_, v___f_1677_);
return v___x_1685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1703_, lean_object* v_bytes_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1(v___f_1703_, v_bytes_1704_);
lean_dec_ref(v_bytes_1704_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_1707_, lean_object* v_x_1708_){
_start:
{
if (lean_obj_tag(v_x_1708_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1721_; 
v_a_1710_ = lean_ctor_get(v_x_1708_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_x_1708_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1712_ = v_x_1708_;
v_isShared_1713_ = v_isSharedCheck_1721_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v_x_1708_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1721_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1718_; 
v___x_1714_ = lean_io_error_to_string(v_a_1710_);
v___x_1715_ = lean_string_append(v_failurePrefix_1707_, v___x_1714_);
lean_dec_ref(v___x_1714_);
v___x_1716_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1715_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1716_);
v___x_1718_ = v___x_1712_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1718_);
return v___x_1719_;
}
}
}
else
{
lean_object* v___x_1722_; 
lean_dec_ref(v_failurePrefix_1707_);
v___x_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1722_, 0, v_x_1708_);
return v___x_1722_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1723_, lean_object* v_x_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4(v_failurePrefix_1723_, v_x_1724_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0(lean_object* v_context_1727_, lean_object* v_x_1728_){
_start:
{
lean_object* v_val_1731_; 
if (lean_obj_tag(v_x_1728_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1741_; 
v_a_1733_ = lean_ctor_get(v_x_1728_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v_x_1728_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1735_ = v_x_1728_;
v_isShared_1736_ = v_isSharedCheck_1741_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v_x_1728_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1741_;
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
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
lean_object* v___x_1739_; 
v___x_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
return v___x_1739_;
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1755_; 
v_a_1742_ = lean_ctor_get(v_x_1728_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v_x_1728_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1744_ = v_x_1728_;
v_isShared_1745_ = v_isSharedCheck_1755_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v_x_1728_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1755_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1746_; 
v___x_1746_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_1727_, v_a_1742_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v___x_1749_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1746_, 1);
if (v_isShared_1745_ == 0)
{
lean_ctor_set(v___x_1744_, 0, v_a_1747_);
v___x_1749_ = v___x_1744_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1747_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
v_val_1731_ = v___x_1749_;
goto v___jp_1730_;
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; 
v_a_1751_ = lean_ctor_get(v___x_1746_, 0);
lean_inc(v_a_1751_);
lean_dec_ref_known(v___x_1746_, 1);
if (v_isShared_1745_ == 0)
{
lean_ctor_set_tag(v___x_1744_, 0);
lean_ctor_set(v___x_1744_, 0, v_a_1751_);
v___x_1753_ = v___x_1744_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1751_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
v_val_1731_ = v___x_1753_;
goto v___jp_1730_;
}
}
}
}
v___jp_1730_:
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1732_, 0, v_val_1731_);
return v___x_1732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1756_, lean_object* v_x_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0(v_context_1756_, v_x_1757_);
lean_dec_ref(v_context_1756_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5(lean_object* v___x_1760_, uint8_t v___x_1761_, lean_object* v___f_1762_, lean_object* v_a_1763_, uint32_t v_op_1764_, uint64_t v_flags_1765_, lean_object* v_payload_1766_, lean_object* v_x_1767_){
_start:
{
lean_object* v_val_1770_; 
if (lean_obj_tag(v_x_1767_) == 0)
{
lean_object* v___x_1773_; 
lean_dec_ref(v___f_1762_);
lean_dec(v___x_1760_);
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v_x_1767_);
return v___x_1773_;
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1788_; 
v_a_1774_ = lean_ctor_get(v_x_1767_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v_x_1767_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1776_ = v_x_1767_;
v_isShared_1777_ = v_isSharedCheck_1788_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v_x_1767_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1788_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
uint32_t v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = 0;
v___x_1779_ = lasm_js_call_into(v_a_1763_, v_op_1764_, v___x_1778_, v_flags_1765_, v_a_1774_, v_payload_1766_);
lean_dec(v_a_1774_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; lean_object* v___x_1782_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1780_);
lean_dec_ref_known(v___x_1779_, 1);
if (v_isShared_1777_ == 0)
{
lean_ctor_set(v___x_1776_, 0, v_a_1780_);
v___x_1782_ = v___x_1776_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
v_val_1770_ = v___x_1782_;
goto v___jp_1769_;
}
}
else
{
lean_object* v_a_1784_; lean_object* v___x_1786_; 
v_a_1784_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1784_);
lean_dec_ref_known(v___x_1779_, 1);
if (v_isShared_1777_ == 0)
{
lean_ctor_set_tag(v___x_1776_, 0);
lean_ctor_set(v___x_1776_, 0, v_a_1784_);
v___x_1786_ = v___x_1776_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1784_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
v_val_1770_ = v___x_1786_;
goto v___jp_1769_;
}
}
}
}
v___jp_1769_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1771_, 0, v_val_1770_);
v___x_1772_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1760_, v___x_1761_, v___x_1771_, v___f_1762_);
return v___x_1772_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed(lean_object* v___x_1789_, lean_object* v___x_1790_, lean_object* v___f_1791_, lean_object* v_a_1792_, lean_object* v_op_1793_, lean_object* v_flags_1794_, lean_object* v_payload_1795_, lean_object* v_x_1796_, lean_object* v___y_1797_){
_start:
{
uint8_t v___x_1026__boxed_1798_; uint32_t v_op_boxed_1799_; uint64_t v_flags_boxed_1800_; lean_object* v_res_1801_; 
v___x_1026__boxed_1798_ = lean_unbox(v___x_1790_);
v_op_boxed_1799_ = lean_unbox_uint32(v_op_1793_);
lean_dec(v_op_1793_);
v_flags_boxed_1800_ = lean_unbox_uint64(v_flags_1794_);
lean_dec_ref(v_flags_1794_);
v_res_1801_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5(v___x_1789_, v___x_1026__boxed_1798_, v___f_1791_, v_a_1792_, v_op_boxed_1799_, v_flags_boxed_1800_, v_payload_1795_, v_x_1796_);
lean_dec(v_payload_1795_);
lean_dec(v_a_1792_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7(lean_object* v___f_1802_, lean_object* v_a_1803_, uint32_t v_op_1804_, uint64_t v_flags_1805_, lean_object* v_payload_1806_, lean_object* v_x_1807_){
_start:
{
if (lean_obj_tag(v_x_1807_) == 0)
{
lean_object* v___x_1809_; 
lean_dec_ref(v___f_1802_);
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v_x_1807_);
return v___x_1809_;
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1830_; 
v_a_1810_ = lean_ctor_get(v_x_1807_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v_x_1807_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1812_ = v_x_1807_;
v_isShared_1813_ = v_isSharedCheck_1830_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v_x_1807_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1830_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
uint32_t v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; lean_object* v_val_1818_; lean_object* v___x_1821_; 
v___x_1814_ = 0;
v___x_1815_ = lean_unsigned_to_nat(0u);
v___x_1816_ = 0;
v___x_1821_ = lasm_js_call_into(v_a_1803_, v_op_1804_, v___x_1814_, v_flags_1805_, v_a_1810_, v_payload_1806_);
lean_dec(v_a_1810_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; lean_object* v___x_1824_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1821_, 1);
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v_a_1822_);
v___x_1824_ = v___x_1812_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
v_val_1818_ = v___x_1824_;
goto v___jp_1817_;
}
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; 
v_a_1826_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v___x_1821_, 1);
if (v_isShared_1813_ == 0)
{
lean_ctor_set_tag(v___x_1812_, 0);
lean_ctor_set(v___x_1812_, 0, v_a_1826_);
v___x_1828_ = v___x_1812_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1826_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
v_val_1818_ = v___x_1828_;
goto v___jp_1817_;
}
}
v___jp_1817_:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1819_, 0, v_val_1818_);
v___x_1820_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1815_, v___x_1816_, v___x_1819_, v___f_1802_);
return v___x_1820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed(lean_object* v___f_1831_, lean_object* v_a_1832_, lean_object* v_op_1833_, lean_object* v_flags_1834_, lean_object* v_payload_1835_, lean_object* v_x_1836_, lean_object* v___y_1837_){
_start:
{
uint32_t v_op_boxed_1838_; uint64_t v_flags_boxed_1839_; lean_object* v_res_1840_; 
v_op_boxed_1838_ = lean_unbox_uint32(v_op_1833_);
lean_dec(v_op_1833_);
v_flags_boxed_1839_ = lean_unbox_uint64(v_flags_1834_);
lean_dec_ref(v_flags_1834_);
v_res_1840_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7(v___f_1831_, v_a_1832_, v_op_boxed_1838_, v_flags_boxed_1839_, v_payload_1835_, v_x_1836_);
lean_dec(v_payload_1835_);
lean_dec(v_a_1832_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3(lean_object* v_a_1841_, lean_object* v_x_1842_){
_start:
{
if (lean_obj_tag(v_x_1842_) == 0)
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1852_; 
v_a_1844_ = lean_ctor_get(v_x_1842_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v_x_1842_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1846_ = v_x_1842_;
v_isShared_1847_ = v_isSharedCheck_1852_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v_x_1842_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1852_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
return v___x_1850_;
}
}
}
else
{
lean_object* v___x_1853_; 
lean_dec_ref_known(v_x_1842_, 1);
v___x_1853_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1841_);
return v___x_1853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed(lean_object* v_a_1854_, lean_object* v_x_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3(v_a_1854_, v_x_1855_);
lean_dec(v_a_1854_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_1858_, uint32_t v_op_1859_, uint64_t v_flags_1860_, lean_object* v_payload_1861_, lean_object* v___f_1862_, lean_object* v___f_1863_, lean_object* v___f_1864_, lean_object* v_x_1865_){
_start:
{
if (lean_obj_tag(v_x_1865_) == 0)
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1875_; 
lean_dec_ref(v___f_1864_);
lean_dec_ref(v___f_1863_);
lean_dec_ref(v___f_1862_);
lean_dec(v_payload_1861_);
v_a_1867_ = lean_ctor_get(v_x_1865_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_x_1865_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1869_ = v_x_1865_;
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v_x_1865_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
lean_object* v___x_1873_; 
v___x_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
return v___x_1873_;
}
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1922_; 
v_a_1876_ = lean_ctor_get(v_x_1865_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_x_1865_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1878_ = v_x_1865_;
v_isShared_1879_ = v_isSharedCheck_1922_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v_x_1865_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1922_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; uint8_t v___x_1882_; 
v___x_1880_ = lean_string_utf8_byte_size(v_failurePrefix_1858_);
v___x_1881_ = lean_unsigned_to_nat(0u);
v___x_1882_ = lean_nat_dec_eq(v___x_1880_, v___x_1881_);
if (v___x_1882_ == 0)
{
lean_object* v___f_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___f_1887_; lean_object* v_val_1889_; lean_object* v___x_1894_; 
lean_dec_ref(v___f_1864_);
lean_inc(v_a_1876_);
v___f_1883_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1883_, 0, v_a_1876_);
v___x_1884_ = lean_box(v___x_1882_);
v___x_1885_ = lean_box_uint32(v_op_1859_);
v___x_1886_ = lean_box_uint64(v_flags_1860_);
lean_inc(v_payload_1861_);
v___f_1887_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1887_, 0, v___x_1881_);
lean_closure_set(v___f_1887_, 1, v___x_1884_);
lean_closure_set(v___f_1887_, 2, v___f_1883_);
lean_closure_set(v___f_1887_, 3, v_a_1876_);
lean_closure_set(v___f_1887_, 4, v___x_1885_);
lean_closure_set(v___f_1887_, 5, v___x_1886_);
lean_closure_set(v___f_1887_, 6, v_payload_1861_);
v___x_1894_ = l_Lasm_JS_Wire_encodeIO(v_payload_1861_);
lean_dec(v_payload_1861_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v___x_1894_, 1);
if (v_isShared_1879_ == 0)
{
lean_ctor_set(v___x_1878_, 0, v_a_1895_);
v___x_1897_ = v___x_1878_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
v_val_1889_ = v___x_1897_;
goto v___jp_1888_;
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1901_; 
v_a_1899_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1894_, 1);
if (v_isShared_1879_ == 0)
{
lean_ctor_set_tag(v___x_1878_, 0);
lean_ctor_set(v___x_1878_, 0, v_a_1899_);
v___x_1901_ = v___x_1878_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_a_1899_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
v_val_1889_ = v___x_1901_;
goto v___jp_1888_;
}
}
v___jp_1888_:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1890_, 0, v_val_1889_);
v___x_1891_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1881_, v___x_1882_, v___x_1890_, v___f_1887_);
v___x_1892_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1881_, v___x_1882_, v___x_1891_, v___f_1862_);
v___x_1893_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1881_, v___x_1882_, v___x_1892_, v___f_1863_);
return v___x_1893_;
}
}
else
{
lean_object* v___f_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___f_1906_; uint8_t v___x_1907_; lean_object* v_val_1909_; lean_object* v___x_1913_; 
lean_dec_ref(v___f_1863_);
lean_dec_ref(v___f_1862_);
lean_inc(v_a_1876_);
v___f_1903_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1903_, 0, v_a_1876_);
v___x_1904_ = lean_box_uint32(v_op_1859_);
v___x_1905_ = lean_box_uint64(v_flags_1860_);
lean_inc(v_payload_1861_);
v___f_1906_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1906_, 0, v___f_1903_);
lean_closure_set(v___f_1906_, 1, v_a_1876_);
lean_closure_set(v___f_1906_, 2, v___x_1904_);
lean_closure_set(v___f_1906_, 3, v___x_1905_);
lean_closure_set(v___f_1906_, 4, v_payload_1861_);
v___x_1907_ = 0;
v___x_1913_ = l_Lasm_JS_Wire_encodeIO(v_payload_1861_);
lean_dec(v_payload_1861_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; lean_object* v___x_1916_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1914_);
lean_dec_ref_known(v___x_1913_, 1);
if (v_isShared_1879_ == 0)
{
lean_ctor_set(v___x_1878_, 0, v_a_1914_);
v___x_1916_ = v___x_1878_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1914_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
v_val_1909_ = v___x_1916_;
goto v___jp_1908_;
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; 
v_a_1918_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1913_, 1);
if (v_isShared_1879_ == 0)
{
lean_ctor_set_tag(v___x_1878_, 0);
lean_ctor_set(v___x_1878_, 0, v_a_1918_);
v___x_1920_ = v___x_1878_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1918_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
v_val_1909_ = v___x_1920_;
goto v___jp_1908_;
}
}
v___jp_1908_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1910_, 0, v_val_1909_);
v___x_1911_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1881_, v___x_1907_, v___x_1910_, v___f_1906_);
v___x_1912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1881_, v___x_1907_, v___x_1911_, v___f_1864_);
return v___x_1912_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_1923_, lean_object* v_op_1924_, lean_object* v_flags_1925_, lean_object* v_payload_1926_, lean_object* v___f_1927_, lean_object* v___f_1928_, lean_object* v___f_1929_, lean_object* v_x_1930_, lean_object* v___y_1931_){
_start:
{
uint32_t v_op_boxed_1932_; uint64_t v_flags_boxed_1933_; lean_object* v_res_1934_; 
v_op_boxed_1932_ = lean_unbox_uint32(v_op_1924_);
lean_dec(v_op_1924_);
v_flags_boxed_1933_ = lean_unbox_uint64(v_flags_1925_);
lean_dec_ref(v_flags_1925_);
v_res_1934_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6(v_failurePrefix_1923_, v_op_boxed_1932_, v_flags_boxed_1933_, v_payload_1926_, v___f_1927_, v___f_1928_, v___f_1929_, v_x_1930_);
lean_dec_ref(v_failurePrefix_1923_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(lean_object* v_context_1935_, uint32_t v_op_1936_, uint64_t v_flags_1937_, lean_object* v_payload_1938_, lean_object* v_failurePrefix_1939_){
_start:
{
lean_object* v___f_1941_; lean_object* v___f_1942_; lean_object* v___f_1943_; lean_object* v___f_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___f_1947_; lean_object* v___f_1948_; lean_object* v___x_1949_; uint8_t v___x_1950_; lean_object* v_val_1952_; lean_object* v___x_1955_; 
v___f_1941_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1941_, 0, v_context_1935_);
v___f_1942_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1942_, 0, v___f_1941_);
v___f_1943_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1943_, 0, v___f_1942_);
lean_inc_ref(v_failurePrefix_1939_);
v___f_1944_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1944_, 0, v_failurePrefix_1939_);
v___x_1945_ = lean_box_uint32(v_op_1936_);
v___x_1946_ = lean_box_uint64(v_flags_1937_);
lean_inc_ref(v___f_1943_);
v___f_1947_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1947_, 0, v_failurePrefix_1939_);
lean_closure_set(v___f_1947_, 1, v___x_1945_);
lean_closure_set(v___f_1947_, 2, v___x_1946_);
lean_closure_set(v___f_1947_, 3, v_payload_1938_);
lean_closure_set(v___f_1947_, 4, v___f_1944_);
lean_closure_set(v___f_1947_, 5, v___f_1943_);
lean_closure_set(v___f_1947_, 6, v___f_1943_);
v___f_1948_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1948_, 0, v___f_1947_);
v___x_1949_ = lean_unsigned_to_nat(0u);
v___x_1950_ = 0;
v___x_1955_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1955_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1955_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
lean_ctor_set_tag(v___x_1958_, 1);
v___x_1961_ = v___x_1958_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1956_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
v_val_1952_ = v___x_1961_;
goto v___jp_1951_;
}
}
}
else
{
lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
v_a_1964_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1955_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___x_1955_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
lean_ctor_set_tag(v___x_1966_, 0);
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
v_val_1952_ = v___x_1969_;
goto v___jp_1951_;
}
}
}
v___jp_1951_:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1953_, 0, v_val_1952_);
v___x_1954_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1949_, v___x_1950_, v___x_1953_, v___f_1948_);
return v___x_1954_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___boxed(lean_object* v_context_1972_, lean_object* v_op_1973_, lean_object* v_flags_1974_, lean_object* v_payload_1975_, lean_object* v_failurePrefix_1976_, lean_object* v_a_1977_){
_start:
{
uint32_t v_op_boxed_1978_; uint64_t v_flags_boxed_1979_; lean_object* v_res_1980_; 
v_op_boxed_1978_ = lean_unbox_uint32(v_op_1973_);
lean_dec(v_op_1973_);
v_flags_boxed_1979_ = lean_unbox_uint64(v_flags_1974_);
lean_dec_ref(v_flags_1974_);
v_res_1980_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(v_context_1972_, v_op_boxed_1978_, v_flags_boxed_1979_, v_payload_1975_, v_failurePrefix_1976_);
return v_res_1980_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1981_; uint64_t v___x_1982_; 
v___x_1981_ = 0;
v___x_1982_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1981_);
return v___x_1982_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(uint8_t v_await_1983_, uint64_t v_extra_1984_){
_start:
{
uint64_t v___x_1985_; uint64_t v___y_1987_; 
v___x_1985_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_1983_ == 0)
{
uint64_t v___x_1990_; 
v___x_1990_ = 0ULL;
v___y_1987_ = v___x_1990_;
goto v___jp_1986_;
}
else
{
uint64_t v___x_1991_; 
v___x_1991_ = 2ULL;
v___y_1987_ = v___x_1991_;
goto v___jp_1986_;
}
v___jp_1986_:
{
uint64_t v___x_1988_; uint64_t v___x_1989_; 
v___x_1988_ = lean_uint64_lor(v___x_1985_, v___y_1987_);
v___x_1989_ = lean_uint64_lor(v___x_1988_, v_extra_1984_);
return v___x_1989_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___boxed(lean_object* v_await_1992_, lean_object* v_extra_1993_){
_start:
{
uint8_t v_await_boxed_1994_; uint64_t v_extra_boxed_1995_; uint64_t v_res_1996_; lean_object* v_r_1997_; 
v_await_boxed_1994_ = lean_unbox(v_await_1992_);
v_extra_boxed_1995_ = lean_unbox_uint64(v_extra_1993_);
lean_dec_ref(v_extra_1993_);
v_res_1996_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(v_await_boxed_1994_, v_extra_boxed_1995_);
v_r_1997_ = lean_box_uint64(v_res_1996_);
return v_r_1997_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1(void){
_start:
{
uint64_t v___x_1999_; uint8_t v___x_2000_; uint64_t v___x_2001_; 
v___x_1999_ = 8ULL;
v___x_2000_ = 0;
v___x_2001_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(v___x_2000_, v___x_1999_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(lean_object* v_o_2002_, lean_object* v_name_2003_, lean_object* v_args_2004_){
_start:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; uint32_t v___x_2011_; uint64_t v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2006_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2007_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2007_, 0, v_o_2002_);
lean_ctor_set(v___x_2007_, 1, v___x_2006_);
lean_inc_ref(v_name_2003_);
v___x_2008_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2008_, 0, v_name_2003_);
v___x_2009_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2010_ = lean_string_append(v___x_2009_, v_name_2003_);
lean_dec_ref(v_name_2003_);
v___x_2011_ = 205;
v___x_2012_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1);
v___x_2013_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2013_, 0, v_args_2004_);
v___x_2014_ = lean_unsigned_to_nat(3u);
v___x_2015_ = lean_mk_empty_array_with_capacity(v___x_2014_);
v___x_2016_ = lean_array_push(v___x_2015_, v___x_2007_);
v___x_2017_ = lean_array_push(v___x_2016_, v___x_2008_);
v___x_2018_ = lean_array_push(v___x_2017_, v___x_2013_);
v___x_2019_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2018_);
v___x_2020_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(v___x_2010_, v___x_2011_, v___x_2012_, v___x_2019_, v___x_2006_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___boxed(lean_object* v_o_2021_, lean_object* v_name_2022_, lean_object* v_args_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v_res_2025_; 
v_res_2025_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(v_o_2021_, v_name_2022_, v_args_2023_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seek(lean_object* v_self_2027_, lean_object* v_offset_2028_, lean_object* v_whence_2029_){
_start:
{
lean_object* v___x_2031_; lean_object* v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2042_; 
v___x_2031_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_seek___closed__0));
if (lean_obj_tag(v_offset_2028_) == 0)
{
double v_value_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2057_; 
v_value_2050_ = lean_ctor_get_float(v_offset_2028_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_offset_2028_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2052_ = v_offset_2028_;
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
else
{
lean_dec(v_offset_2028_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2055_; 
if (v_isShared_2053_ == 0)
{
lean_ctor_set_tag(v___x_2052_, 3);
v___x_2055_ = v___x_2052_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2056_, 0, v_value_2050_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
v___y_2042_ = v___x_2055_;
goto v___jp_2041_;
}
}
}
else
{
lean_object* v_value_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2070_; 
v_value_2058_ = lean_ctor_get(v_offset_2028_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v_offset_2028_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2060_ = v_offset_2028_;
v_isShared_2061_ = v_isSharedCheck_2070_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_value_2058_);
lean_dec(v_offset_2028_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2070_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; 
v___x_2062_ = lean_nat_abs(v_value_2058_);
v___x_2063_ = lean_cstr_to_nat("9007199254740991");
v___x_2064_ = lean_nat_dec_le(v___x_2062_, v___x_2063_);
lean_dec(v___x_2062_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2066_; 
if (v_isShared_2061_ == 0)
{
lean_ctor_set_tag(v___x_2060_, 5);
v___x_2066_ = v___x_2060_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_value_2058_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
v___y_2042_ = v___x_2066_;
goto v___jp_2041_;
}
}
else
{
double v___x_2068_; lean_object* v___x_2069_; 
lean_del_object(v___x_2060_);
v___x_2068_ = l_Float_ofInt(v_value_2058_);
lean_dec(v_value_2058_);
v___x_2069_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2069_, 0, v___x_2068_);
v___y_2042_ = v___x_2069_;
goto v___jp_2041_;
}
}
}
v___jp_2032_:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2035_ = lean_unsigned_to_nat(2u);
v___x_2036_ = lean_mk_empty_array_with_capacity(v___x_2035_);
v___x_2037_ = lean_array_push(v___x_2036_, v___y_2033_);
v___x_2038_ = lean_array_push(v___x_2037_, v___y_2034_);
v___x_2039_ = l_Lasm_JS_Web_Support_args(v___x_2038_);
v___x_2040_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(v_self_2027_, v___x_2031_, v___x_2039_);
return v___x_2040_;
}
v___jp_2041_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; uint8_t v___x_2046_; 
v___x_2043_ = lean_nat_to_int(v_whence_2029_);
v___x_2044_ = lean_nat_abs(v___x_2043_);
v___x_2045_ = lean_cstr_to_nat("9007199254740991");
v___x_2046_ = lean_nat_dec_le(v___x_2044_, v___x_2045_);
lean_dec(v___x_2044_);
if (v___x_2046_ == 0)
{
lean_object* v___x_2047_; 
v___x_2047_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2043_);
v___y_2033_ = v___y_2042_;
v___y_2034_ = v___x_2047_;
goto v___jp_2032_;
}
else
{
double v___x_2048_; lean_object* v___x_2049_; 
v___x_2048_ = l_Float_ofInt(v___x_2043_);
lean_dec(v___x_2043_);
v___x_2049_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2049_, 0, v___x_2048_);
v___y_2033_ = v___y_2042_;
v___y_2034_ = v___x_2049_;
goto v___jp_2032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seek___boxed(lean_object* v_self_2071_, lean_object* v_offset_2072_, lean_object* v_whence_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Lasm_JS_Deno_FsFile_seek(v_self_2071_, v_offset_2072_, v_whence_2073_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(lean_object* v_o_2076_, lean_object* v_name_2077_, lean_object* v_args_2078_){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; uint64_t v___x_2083_; lean_object* v___x_2084_; 
v___x_2080_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2081_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2081_, 0, v_o_2076_);
lean_ctor_set(v___x_2081_, 1, v___x_2080_);
lean_inc_ref(v_name_2077_);
v___x_2082_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2082_, 0, v_name_2077_);
v___x_2083_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1);
v___x_2084_ = l_Lasm_JS_Value_invokeRaw(v___x_2081_, v___x_2082_, v_args_2078_, v___x_2083_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2084_, 1);
v___x_2086_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2087_ = lean_string_append(v___x_2086_, v_name_2077_);
lean_dec_ref(v_name_2077_);
v___x_2088_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v___x_2087_, v_a_2085_);
lean_dec(v_a_2085_);
lean_dec_ref(v___x_2087_);
return v___x_2088_;
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_dec_ref(v_name_2077_);
v_a_2089_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2084_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2084_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0___boxed(lean_object* v_o_2097_, lean_object* v_name_2098_, lean_object* v_args_2099_, lean_object* v_a_2100_){
_start:
{
lean_object* v_res_2101_; 
v_res_2101_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(v_o_2097_, v_name_2098_, v_args_2099_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seekSync(lean_object* v_self_2103_, lean_object* v_offset_2104_, lean_object* v_whence_2105_){
_start:
{
lean_object* v___x_2107_; lean_object* v___y_2109_; lean_object* v___y_2110_; lean_object* v___y_2118_; 
v___x_2107_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_seekSync___closed__0));
if (lean_obj_tag(v_offset_2104_) == 0)
{
double v_value_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
v_value_2126_ = lean_ctor_get_float(v_offset_2104_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v_offset_2104_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v_offset_2104_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_dec(v_offset_2104_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
lean_ctor_set_tag(v___x_2128_, 3);
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2132_, 0, v_value_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
v___y_2118_ = v___x_2131_;
goto v___jp_2117_;
}
}
}
else
{
lean_object* v_value_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2146_; 
v_value_2134_ = lean_ctor_get(v_offset_2104_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_offset_2104_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2136_ = v_offset_2104_;
v_isShared_2137_ = v_isSharedCheck_2146_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_value_2134_);
lean_dec(v_offset_2104_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2146_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; uint8_t v___x_2140_; 
v___x_2138_ = lean_nat_abs(v_value_2134_);
v___x_2139_ = lean_cstr_to_nat("9007199254740991");
v___x_2140_ = lean_nat_dec_le(v___x_2138_, v___x_2139_);
lean_dec(v___x_2138_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2142_; 
if (v_isShared_2137_ == 0)
{
lean_ctor_set_tag(v___x_2136_, 5);
v___x_2142_ = v___x_2136_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_value_2134_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
v___y_2118_ = v___x_2142_;
goto v___jp_2117_;
}
}
else
{
double v___x_2144_; lean_object* v___x_2145_; 
lean_del_object(v___x_2136_);
v___x_2144_ = l_Float_ofInt(v_value_2134_);
lean_dec(v_value_2134_);
v___x_2145_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2145_, 0, v___x_2144_);
v___y_2118_ = v___x_2145_;
goto v___jp_2117_;
}
}
}
v___jp_2108_:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2111_ = lean_unsigned_to_nat(2u);
v___x_2112_ = lean_mk_empty_array_with_capacity(v___x_2111_);
v___x_2113_ = lean_array_push(v___x_2112_, v___y_2109_);
v___x_2114_ = lean_array_push(v___x_2113_, v___y_2110_);
v___x_2115_ = l_Lasm_JS_Web_Support_args(v___x_2114_);
v___x_2116_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(v_self_2103_, v___x_2107_, v___x_2115_);
return v___x_2116_;
}
v___jp_2117_:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
v___x_2119_ = lean_nat_to_int(v_whence_2105_);
v___x_2120_ = lean_nat_abs(v___x_2119_);
v___x_2121_ = lean_cstr_to_nat("9007199254740991");
v___x_2122_ = lean_nat_dec_le(v___x_2120_, v___x_2121_);
lean_dec(v___x_2120_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; 
v___x_2123_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2119_);
v___y_2109_ = v___y_2118_;
v___y_2110_ = v___x_2123_;
goto v___jp_2108_;
}
else
{
double v___x_2124_; lean_object* v___x_2125_; 
v___x_2124_ = l_Float_ofInt(v___x_2119_);
lean_dec(v___x_2119_);
v___x_2125_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2125_, 0, v___x_2124_);
v___y_2109_ = v___y_2118_;
v___y_2110_ = v___x_2125_;
goto v___jp_2108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seekSync___boxed(lean_object* v_self_2147_, lean_object* v_offset_2148_, lean_object* v_whence_2149_, lean_object* v_a_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l_Lasm_JS_Deno_FsFile_seekSync(v_self_2147_, v_offset_2148_, v_whence_2149_);
return v_res_2151_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(uint8_t v_await_2152_, uint64_t v_extra_2153_){
_start:
{
uint64_t v___x_2154_; uint64_t v___y_2156_; 
v___x_2154_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_2152_ == 0)
{
uint64_t v___x_2159_; 
v___x_2159_ = 0ULL;
v___y_2156_ = v___x_2159_;
goto v___jp_2155_;
}
else
{
uint64_t v___x_2160_; 
v___x_2160_ = 2ULL;
v___y_2156_ = v___x_2160_;
goto v___jp_2155_;
}
v___jp_2155_:
{
uint64_t v___x_2157_; uint64_t v___x_2158_; 
v___x_2157_ = lean_uint64_lor(v___x_2154_, v___y_2156_);
v___x_2158_ = lean_uint64_lor(v___x_2157_, v_extra_2153_);
return v___x_2158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0___boxed(lean_object* v_await_2161_, lean_object* v_extra_2162_){
_start:
{
uint8_t v_await_boxed_2163_; uint64_t v_extra_boxed_2164_; uint64_t v_res_2165_; lean_object* v_r_2166_; 
v_await_boxed_2163_ = lean_unbox(v_await_2161_);
v_extra_boxed_2164_ = lean_unbox_uint64(v_extra_2162_);
lean_dec_ref(v_extra_2162_);
v_res_2165_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(v_await_boxed_2163_, v_extra_boxed_2164_);
v_r_2166_ = lean_box_uint64(v_res_2165_);
return v_r_2166_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2(lean_object* v___f_2167_, lean_object* v_x_2168_){
_start:
{
if (lean_obj_tag(v_x_2168_) == 0)
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref(v___f_2167_);
v_a_2170_ = lean_ctor_get(v_x_2168_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v_x_2168_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2172_ = v_x_2168_;
v_isShared_2173_ = v_isSharedCheck_2178_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v_x_2168_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2178_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2176_; 
v___x_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2175_);
return v___x_2176_;
}
}
}
else
{
lean_object* v_a_2179_; lean_object* v___x_2180_; 
v_a_2179_ = lean_ctor_get(v_x_2168_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v_x_2168_, 1);
v___x_2180_ = lean_apply_2(v___f_2167_, v_a_2179_, lean_box(0));
return v___x_2180_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2___boxed(lean_object* v___f_2181_, lean_object* v_x_2182_, lean_object* v___y_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2(v___f_2181_, v_x_2182_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1(lean_object* v___f_2185_, lean_object* v_bytes_2186_){
_start:
{
lean_object* v___x_2188_; uint8_t v___x_2189_; lean_object* v_val_2191_; lean_object* v___x_2194_; 
v___x_2188_ = lean_unsigned_to_nat(0u);
v___x_2189_ = 0;
v___x_2194_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2186_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2194_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2194_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
lean_ctor_set_tag(v___x_2197_, 1);
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
v_val_2191_ = v___x_2200_;
goto v___jp_2190_;
}
}
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
v_a_2203_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2194_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2194_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
lean_ctor_set_tag(v___x_2205_, 0);
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
v_val_2191_ = v___x_2208_;
goto v___jp_2190_;
}
}
}
v___jp_2190_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2192_, 0, v_val_2191_);
v___x_2193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2188_, v___x_2189_, v___x_2192_, v___f_2185_);
return v___x_2193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1___boxed(lean_object* v___f_2211_, lean_object* v_bytes_2212_, lean_object* v___y_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1(v___f_2211_, v_bytes_2212_);
lean_dec_ref(v_bytes_2212_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3(lean_object* v___f_2215_, lean_object* v_x_2216_){
_start:
{
if (lean_obj_tag(v_x_2216_) == 0)
{
lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2226_; 
lean_dec_ref(v___f_2215_);
v_a_2218_ = lean_ctor_get(v_x_2216_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v_x_2216_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2220_ = v_x_2216_;
v_isShared_2221_ = v_isSharedCheck_2226_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_dec(v_x_2216_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2226_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2218_);
v___x_2223_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2223_);
return v___x_2224_;
}
}
}
else
{
lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2238_; 
v_isSharedCheck_2238_ = !lean_is_exclusive(v_x_2216_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; 
v_unused_2239_ = lean_ctor_get(v_x_2216_, 0);
lean_dec(v_unused_2239_);
v___x_2228_ = v_x_2216_;
v_isShared_2229_ = v_isSharedCheck_2238_;
goto v_resetjp_2227_;
}
else
{
lean_dec(v_x_2216_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2238_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2230_; uint8_t v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2234_; 
v___x_2230_ = lean_unsigned_to_nat(0u);
v___x_2231_ = 0;
v___x_2232_ = lean_io_promise_new();
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 0, v___x_2232_);
v___x_2234_ = v___x_2228_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2232_);
v___x_2234_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
v___x_2236_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2230_, v___x_2231_, v___x_2235_, v___f_2215_);
return v___x_2236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3___boxed(lean_object* v___f_2240_, lean_object* v_x_2241_, lean_object* v___y_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3(v___f_2240_, v_x_2241_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_2244_, uint32_t v_op_2245_, uint64_t v_flags_2246_, lean_object* v_payload_2247_, lean_object* v___f_2248_, lean_object* v___f_2249_, lean_object* v___f_2250_, lean_object* v_x_2251_){
_start:
{
if (lean_obj_tag(v_x_2251_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2261_; 
lean_dec_ref(v___f_2250_);
lean_dec_ref(v___f_2249_);
lean_dec_ref(v___f_2248_);
lean_dec(v_payload_2247_);
v_a_2253_ = lean_ctor_get(v_x_2251_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v_x_2251_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2255_ = v_x_2251_;
v_isShared_2256_ = v_isSharedCheck_2261_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v_x_2251_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2261_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2258_; 
if (v_isShared_2256_ == 0)
{
v___x_2258_ = v___x_2255_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_a_2253_);
v___x_2258_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
lean_object* v___x_2259_; 
v___x_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
return v___x_2259_;
}
}
}
else
{
lean_object* v_a_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2308_; 
v_a_2262_ = lean_ctor_get(v_x_2251_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v_x_2251_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2264_ = v_x_2251_;
v_isShared_2265_ = v_isSharedCheck_2308_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_a_2262_);
lean_dec(v_x_2251_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2308_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; uint8_t v___x_2268_; 
v___x_2266_ = lean_string_utf8_byte_size(v_failurePrefix_2244_);
v___x_2267_ = lean_unsigned_to_nat(0u);
v___x_2268_ = lean_nat_dec_eq(v___x_2266_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___f_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___f_2273_; lean_object* v_val_2275_; lean_object* v___x_2280_; 
lean_dec_ref(v___f_2250_);
lean_inc(v_a_2262_);
v___f_2269_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2269_, 0, v_a_2262_);
v___x_2270_ = lean_box(v___x_2268_);
v___x_2271_ = lean_box_uint32(v_op_2245_);
v___x_2272_ = lean_box_uint64(v_flags_2246_);
lean_inc(v_payload_2247_);
v___f_2273_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2273_, 0, v___x_2267_);
lean_closure_set(v___f_2273_, 1, v___x_2270_);
lean_closure_set(v___f_2273_, 2, v___f_2269_);
lean_closure_set(v___f_2273_, 3, v_a_2262_);
lean_closure_set(v___f_2273_, 4, v___x_2271_);
lean_closure_set(v___f_2273_, 5, v___x_2272_);
lean_closure_set(v___f_2273_, 6, v_payload_2247_);
v___x_2280_ = l_Lasm_JS_Wire_encodeIO(v_payload_2247_);
lean_dec(v_payload_2247_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2283_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2281_);
lean_dec_ref_known(v___x_2280_, 1);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 0, v_a_2281_);
v___x_2283_ = v___x_2264_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2281_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
v_val_2275_ = v___x_2283_;
goto v___jp_2274_;
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; 
v_a_2285_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2280_, 1);
if (v_isShared_2265_ == 0)
{
lean_ctor_set_tag(v___x_2264_, 0);
lean_ctor_set(v___x_2264_, 0, v_a_2285_);
v___x_2287_ = v___x_2264_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2285_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
v_val_2275_ = v___x_2287_;
goto v___jp_2274_;
}
}
v___jp_2274_:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2276_, 0, v_val_2275_);
v___x_2277_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2267_, v___x_2268_, v___x_2276_, v___f_2273_);
v___x_2278_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2267_, v___x_2268_, v___x_2277_, v___f_2248_);
v___x_2279_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2267_, v___x_2268_, v___x_2278_, v___f_2249_);
return v___x_2279_;
}
}
else
{
lean_object* v___f_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___f_2292_; uint8_t v___x_2293_; lean_object* v_val_2295_; lean_object* v___x_2299_; 
lean_dec_ref(v___f_2249_);
lean_dec_ref(v___f_2248_);
lean_inc(v_a_2262_);
v___f_2289_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2289_, 0, v_a_2262_);
v___x_2290_ = lean_box_uint32(v_op_2245_);
v___x_2291_ = lean_box_uint64(v_flags_2246_);
lean_inc(v_payload_2247_);
v___f_2292_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2292_, 0, v___f_2289_);
lean_closure_set(v___f_2292_, 1, v_a_2262_);
lean_closure_set(v___f_2292_, 2, v___x_2290_);
lean_closure_set(v___f_2292_, 3, v___x_2291_);
lean_closure_set(v___f_2292_, 4, v_payload_2247_);
v___x_2293_ = 0;
v___x_2299_ = l_Lasm_JS_Wire_encodeIO(v_payload_2247_);
lean_dec(v_payload_2247_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_object* v_a_2300_; lean_object* v___x_2302_; 
v_a_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc(v_a_2300_);
lean_dec_ref_known(v___x_2299_, 1);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 0, v_a_2300_);
v___x_2302_ = v___x_2264_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2300_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
v_val_2295_ = v___x_2302_;
goto v___jp_2294_;
}
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2306_; 
v_a_2304_ = lean_ctor_get(v___x_2299_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v___x_2299_, 1);
if (v_isShared_2265_ == 0)
{
lean_ctor_set_tag(v___x_2264_, 0);
lean_ctor_set(v___x_2264_, 0, v_a_2304_);
v___x_2306_ = v___x_2264_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2304_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
v_val_2295_ = v___x_2306_;
goto v___jp_2294_;
}
}
v___jp_2294_:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2296_, 0, v_val_2295_);
v___x_2297_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2267_, v___x_2293_, v___x_2296_, v___f_2292_);
v___x_2298_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2267_, v___x_2293_, v___x_2297_, v___f_2250_);
return v___x_2298_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_2309_, lean_object* v_op_2310_, lean_object* v_flags_2311_, lean_object* v_payload_2312_, lean_object* v___f_2313_, lean_object* v___f_2314_, lean_object* v___f_2315_, lean_object* v_x_2316_, lean_object* v___y_2317_){
_start:
{
uint32_t v_op_boxed_2318_; uint64_t v_flags_boxed_2319_; lean_object* v_res_2320_; 
v_op_boxed_2318_ = lean_unbox_uint32(v_op_2310_);
lean_dec(v_op_2310_);
v_flags_boxed_2319_ = lean_unbox_uint64(v_flags_2311_);
lean_dec_ref(v_flags_2311_);
v_res_2320_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9(v_failurePrefix_2309_, v_op_boxed_2318_, v_flags_boxed_2319_, v_payload_2312_, v___f_2313_, v___f_2314_, v___f_2315_, v_x_2316_);
lean_dec_ref(v_failurePrefix_2309_);
return v_res_2320_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2327_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2328_ = lean_string_utf8_byte_size(v___x_2327_);
return v___x_2328_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; uint8_t v___x_2331_; 
v___x_2329_ = lean_unsigned_to_nat(0u);
v___x_2330_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__5);
v___x_2331_ = lean_nat_dec_eq(v___x_2330_, v___x_2329_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_2336_, lean_object* v_key_2337_){
_start:
{
if (lean_obj_tag(v_d_2336_) == 8)
{
lean_object* v___x_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2369_; 
v___x_2340_ = l_Lasm_JS_Data_field(v_d_2336_, v_key_2337_);
v_isSharedCheck_2369_ = !lean_is_exclusive(v_d_2336_);
if (v_isSharedCheck_2369_ == 0)
{
lean_object* v_unused_2370_; 
v_unused_2370_ = lean_ctor_get(v_d_2336_, 0);
lean_dec(v_unused_2370_);
v___x_2342_ = v_d_2336_;
v_isShared_2343_ = v_isSharedCheck_2369_;
goto v_resetjp_2341_;
}
else
{
lean_dec(v_d_2336_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2369_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
switch(lean_obj_tag(v___x_2340_))
{
case 1:
{
lean_del_object(v___x_2342_);
goto v___jp_2338_;
}
case 0:
{
lean_del_object(v___x_2342_);
goto v___jp_2338_;
}
default: 
{
if (lean_obj_tag(v___x_2340_) == 3)
{
double v_n_2344_; lean_object* v___x_2345_; lean_object* v___x_2347_; 
v_n_2344_ = lean_ctor_get_float(v___x_2340_, 0);
lean_dec_ref_known(v___x_2340_, 0);
v___x_2345_ = lean_box_float(v_n_2344_);
if (v_isShared_2343_ == 0)
{
lean_ctor_set_tag(v___x_2342_, 1);
lean_ctor_set(v___x_2342_, 0, v___x_2345_);
v___x_2347_ = v___x_2342_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v___x_2345_);
v___x_2347_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
lean_object* v___x_2348_; 
v___x_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
return v___x_2348_;
}
}
else
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; uint8_t v___x_2360_; 
v___x_2350_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_2351_ = lean_string_append(v___x_2350_, v_key_2337_);
v___x_2352_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_2353_ = lean_string_append(v___x_2351_, v___x_2352_);
v___x_2354_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__3));
v___x_2355_ = lean_string_append(v___x_2353_, v___x_2354_);
v___x_2356_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_2357_ = lean_string_append(v___x_2355_, v___x_2356_);
v___x_2358_ = l_Lasm_JS_Data_describe(v___x_2340_);
v___x_2359_ = lean_string_append(v___x_2357_, v___x_2358_);
lean_dec_ref(v___x_2358_);
v___x_2360_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__6);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2364_; 
v___x_2361_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__7));
v___x_2362_ = lean_string_append(v___x_2359_, v___x_2361_);
if (v_isShared_2343_ == 0)
{
lean_ctor_set_tag(v___x_2342_, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2362_);
v___x_2364_ = v___x_2342_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2362_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
else
{
lean_object* v___x_2367_; 
if (v_isShared_2343_ == 0)
{
lean_ctor_set_tag(v___x_2342_, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2359_);
v___x_2367_ = v___x_2342_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2359_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2371_; 
lean_dec(v_d_2336_);
v___x_2371_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__9));
return v___x_2371_;
}
v___jp_2338_:
{
lean_object* v___x_2339_; 
v___x_2339_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_2339_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_2372_, lean_object* v_key_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2372_, v_key_2373_);
lean_dec_ref(v_key_2373_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_2379_, lean_object* v_key_2380_){
_start:
{
if (lean_obj_tag(v_d_2379_) == 8)
{
lean_object* v___x_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2391_; 
v___x_2383_ = l_Lasm_JS_Data_field(v_d_2379_, v_key_2380_);
v_isSharedCheck_2391_ = !lean_is_exclusive(v_d_2379_);
if (v_isSharedCheck_2391_ == 0)
{
lean_object* v_unused_2392_; 
v_unused_2392_ = lean_ctor_get(v_d_2379_, 0);
lean_dec(v_unused_2392_);
v___x_2385_ = v_d_2379_;
v_isShared_2386_ = v_isSharedCheck_2391_;
goto v_resetjp_2384_;
}
else
{
lean_dec(v_d_2379_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2391_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
switch(lean_obj_tag(v___x_2383_))
{
case 1:
{
lean_del_object(v___x_2385_);
goto v___jp_2381_;
}
case 0:
{
lean_del_object(v___x_2385_);
goto v___jp_2381_;
}
default: 
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
lean_ctor_set_tag(v___x_2385_, 1);
lean_ctor_set(v___x_2385_, 0, v___x_2383_);
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2383_);
v___x_2388_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
lean_object* v___x_2389_; 
v___x_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2388_);
return v___x_2389_;
}
}
}
}
}
else
{
lean_object* v___x_2393_; 
lean_dec(v_d_2379_);
v___x_2393_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_2393_;
}
v___jp_2381_:
{
lean_object* v___x_2382_; 
v___x_2382_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2382_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_2394_, lean_object* v_key_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2394_, v_key_2395_);
lean_dec_ref(v_key_2395_);
return v_res_2396_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8(void){
_start:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2405_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7));
v___x_2406_ = lean_unsigned_to_nat(46u);
v___x_2407_ = lean_unsigned_to_nat(193u);
v___x_2408_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6));
v___x_2409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5));
v___x_2410_ = l_mkPanicMessageWithDecl(v___x_2409_, v___x_2408_, v___x_2407_, v___x_2406_, v___x_2405_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(lean_object* v_context_2412_, lean_object* v_d_2413_){
_start:
{
lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2422_; lean_object* v_received_2423_; lean_object* v___y_2442_; lean_object* v_a_2445_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2469_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc(v_d_2413_);
v___x_2470_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2413_, v___x_2469_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2471_);
lean_dec_ref_known(v___x_2470_, 1);
v_a_2445_ = v_a_2471_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v_a_2472_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2472_);
lean_dec_ref_known(v___x_2470_, 1);
v___x_2473_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc(v_d_2413_);
v___x_2474_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2413_, v___x_2473_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; 
lean_dec(v_a_2472_);
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
v_a_2445_ = v_a_2475_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v_a_2476_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2476_);
lean_dec_ref_known(v___x_2474_, 1);
v___x_2477_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
lean_inc(v_d_2413_);
v___x_2478_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2413_, v___x_2477_);
if (lean_obj_tag(v___x_2478_) == 0)
{
lean_object* v_a_2479_; 
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
lean_inc(v_a_2479_);
lean_dec_ref_known(v___x_2478_, 1);
v_a_2445_ = v_a_2479_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v_a_2480_ = lean_ctor_get(v___x_2478_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2478_, 1);
v___x_2481_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3));
lean_inc(v_d_2413_);
v___x_2482_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_consoleSize_spec__0_spec__0_spec__1(v_d_2413_, v___x_2481_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; 
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2483_);
lean_dec_ref_known(v___x_2482_, 1);
v_a_2445_ = v_a_2483_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v_a_2484_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2484_);
lean_dec_ref_known(v___x_2482_, 1);
v___x_2485_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4));
lean_inc(v_d_2413_);
v___x_2486_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2413_, v___x_2485_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; 
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2487_);
lean_dec_ref_known(v___x_2486_, 1);
v_a_2445_ = v_a_2487_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v_a_2488_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2488_);
lean_dec_ref_known(v___x_2486_, 1);
v___x_2489_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5));
lean_inc(v_d_2413_);
v___x_2490_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2413_, v___x_2489_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_object* v_a_2491_; 
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
lean_inc(v_a_2491_);
lean_dec_ref_known(v___x_2490_, 1);
v_a_2445_ = v_a_2491_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v_a_2492_ = lean_ctor_get(v___x_2490_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2490_, 1);
v___x_2493_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6));
lean_inc(v_d_2413_);
v___x_2494_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2413_, v___x_2493_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; 
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2495_);
lean_dec_ref_known(v___x_2494_, 1);
v_a_2445_ = v_a_2495_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v_a_2496_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2494_, 1);
v___x_2497_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7));
lean_inc(v_d_2413_);
v___x_2498_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2413_, v___x_2497_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2499_; 
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2499_);
lean_dec_ref_known(v___x_2498_, 1);
v_a_2445_ = v_a_2499_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
v_a_2500_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v___x_2498_, 1);
v___x_2501_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8));
lean_inc(v_d_2413_);
v___x_2502_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_consoleSize_spec__0_spec__0_spec__1(v_d_2413_, v___x_2501_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v_a_2503_; 
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2503_ = lean_ctor_get(v___x_2502_, 0);
lean_inc(v_a_2503_);
lean_dec_ref_known(v___x_2502_, 1);
v_a_2445_ = v_a_2503_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
v_a_2504_ = lean_ctor_get(v___x_2502_, 0);
lean_inc(v_a_2504_);
lean_dec_ref_known(v___x_2502_, 1);
v___x_2505_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9));
lean_inc(v_d_2413_);
v___x_2506_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2505_);
if (lean_obj_tag(v___x_2506_) == 0)
{
lean_object* v_a_2507_; 
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc(v_a_2507_);
lean_dec_ref_known(v___x_2506_, 1);
v_a_2445_ = v_a_2507_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v_a_2508_ = lean_ctor_get(v___x_2506_, 0);
lean_inc(v_a_2508_);
lean_dec_ref_known(v___x_2506_, 1);
v___x_2509_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
lean_inc(v_d_2413_);
v___x_2510_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2509_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; 
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v_a_2445_ = v_a_2511_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v_a_2512_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2512_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2513_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11));
lean_inc(v_d_2413_);
v___x_2514_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2513_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; 
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2514_, 1);
v_a_2445_ = v_a_2515_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v_a_2516_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v___x_2514_, 1);
v___x_2517_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12));
lean_inc(v_d_2413_);
v___x_2518_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2517_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v_a_2519_; 
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_a_2519_);
lean_dec_ref_known(v___x_2518_, 1);
v_a_2445_ = v_a_2519_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v_a_2520_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2518_, 1);
v___x_2521_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13));
lean_inc(v_d_2413_);
v___x_2522_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2521_);
if (lean_obj_tag(v___x_2522_) == 0)
{
lean_object* v_a_2523_; 
lean_dec(v_a_2520_);
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_a_2523_);
lean_dec_ref_known(v___x_2522_, 1);
v_a_2445_ = v_a_2523_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v_a_2524_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_a_2524_);
lean_dec_ref_known(v___x_2522_, 1);
v___x_2525_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14));
lean_inc(v_d_2413_);
v___x_2526_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2525_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; 
lean_dec(v_a_2524_);
lean_dec(v_a_2520_);
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2527_);
lean_dec_ref_known(v___x_2526_, 1);
v_a_2445_ = v_a_2527_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v_a_2528_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2528_);
lean_dec_ref_known(v___x_2526_, 1);
v___x_2529_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15));
lean_inc(v_d_2413_);
v___x_2530_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2529_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; 
lean_dec(v_a_2528_);
lean_dec(v_a_2524_);
lean_dec(v_a_2520_);
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2530_, 1);
v_a_2445_ = v_a_2531_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v_a_2532_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2532_);
lean_dec_ref_known(v___x_2530_, 1);
v___x_2533_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16));
lean_inc(v_d_2413_);
v___x_2534_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2533_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_a_2535_; 
lean_dec(v_a_2532_);
lean_dec(v_a_2528_);
lean_dec(v_a_2524_);
lean_dec(v_a_2520_);
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2534_, 1);
v_a_2445_ = v_a_2535_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v_a_2536_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2536_);
lean_dec_ref_known(v___x_2534_, 1);
v___x_2537_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17));
lean_inc(v_d_2413_);
v___x_2538_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2537_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v_a_2539_; 
lean_dec(v_a_2536_);
lean_dec(v_a_2532_);
lean_dec(v_a_2528_);
lean_dec(v_a_2524_);
lean_dec(v_a_2520_);
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
lean_inc(v_a_2539_);
lean_dec_ref_known(v___x_2538_, 1);
v_a_2445_ = v_a_2539_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v_a_2540_ = lean_ctor_get(v___x_2538_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2538_, 1);
v___x_2541_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18));
lean_inc(v_d_2413_);
v___x_2542_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2541_);
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v_a_2543_; 
lean_dec(v_a_2540_);
lean_dec(v_a_2536_);
lean_dec(v_a_2532_);
lean_dec(v_a_2528_);
lean_dec(v_a_2524_);
lean_dec(v_a_2520_);
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2543_ = lean_ctor_get(v___x_2542_, 0);
lean_inc(v_a_2543_);
lean_dec_ref_known(v___x_2542_, 1);
v_a_2445_ = v_a_2543_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_a_2544_ = lean_ctor_get(v___x_2542_, 0);
lean_inc(v_a_2544_);
lean_dec_ref_known(v___x_2542_, 1);
v___x_2545_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19));
lean_inc(v_d_2413_);
v___x_2546_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2545_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v_a_2547_; 
lean_dec(v_a_2544_);
lean_dec(v_a_2540_);
lean_dec(v_a_2536_);
lean_dec(v_a_2532_);
lean_dec(v_a_2528_);
lean_dec(v_a_2524_);
lean_dec(v_a_2520_);
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_a_2547_);
lean_dec_ref_known(v___x_2546_, 1);
v_a_2445_ = v_a_2547_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v_a_2548_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2546_, 1);
v___x_2549_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20));
lean_inc(v_d_2413_);
v___x_2550_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2413_, v___x_2549_);
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v_a_2551_; 
lean_dec(v_a_2548_);
lean_dec(v_a_2544_);
lean_dec(v_a_2540_);
lean_dec(v_a_2536_);
lean_dec(v_a_2532_);
lean_dec(v_a_2528_);
lean_dec(v_a_2524_);
lean_dec(v_a_2520_);
lean_dec(v_a_2516_);
lean_dec(v_a_2512_);
lean_dec(v_a_2508_);
lean_dec(v_a_2504_);
lean_dec(v_a_2500_);
lean_dec(v_a_2496_);
lean_dec(v_a_2492_);
lean_dec(v_a_2488_);
lean_dec(v_a_2484_);
lean_dec(v_a_2480_);
lean_dec(v_a_2476_);
lean_dec(v_a_2472_);
v_a_2551_ = lean_ctor_get(v___x_2550_, 0);
lean_inc(v_a_2551_);
lean_dec_ref_known(v___x_2550_, 1);
v_a_2445_ = v_a_2551_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2565_; 
lean_dec(v_d_2413_);
v_a_2552_ = lean_ctor_get(v___x_2550_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2554_ = v___x_2550_;
v_isShared_2555_ = v_isSharedCheck_2565_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2550_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2565_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2556_; uint8_t v___x_2557_; uint8_t v___x_2558_; uint8_t v___x_2559_; double v___x_2560_; double v___x_2561_; lean_object* v___x_2563_; 
v___x_2556_ = lean_alloc_ctor(0, 16, 19);
lean_ctor_set(v___x_2556_, 0, v_a_2488_);
lean_ctor_set(v___x_2556_, 1, v_a_2492_);
lean_ctor_set(v___x_2556_, 2, v_a_2496_);
lean_ctor_set(v___x_2556_, 3, v_a_2500_);
lean_ctor_set(v___x_2556_, 4, v_a_2508_);
lean_ctor_set(v___x_2556_, 5, v_a_2512_);
lean_ctor_set(v___x_2556_, 6, v_a_2516_);
lean_ctor_set(v___x_2556_, 7, v_a_2520_);
lean_ctor_set(v___x_2556_, 8, v_a_2524_);
lean_ctor_set(v___x_2556_, 9, v_a_2528_);
lean_ctor_set(v___x_2556_, 10, v_a_2532_);
lean_ctor_set(v___x_2556_, 11, v_a_2536_);
lean_ctor_set(v___x_2556_, 12, v_a_2540_);
lean_ctor_set(v___x_2556_, 13, v_a_2544_);
lean_ctor_set(v___x_2556_, 14, v_a_2548_);
lean_ctor_set(v___x_2556_, 15, v_a_2552_);
v___x_2557_ = lean_unbox(v_a_2472_);
lean_dec(v_a_2472_);
lean_ctor_set_uint8(v___x_2556_, sizeof(void*)*16 + 16, v___x_2557_);
v___x_2558_ = lean_unbox(v_a_2476_);
lean_dec(v_a_2476_);
lean_ctor_set_uint8(v___x_2556_, sizeof(void*)*16 + 17, v___x_2558_);
v___x_2559_ = lean_unbox(v_a_2480_);
lean_dec(v_a_2480_);
lean_ctor_set_uint8(v___x_2556_, sizeof(void*)*16 + 18, v___x_2559_);
v___x_2560_ = lean_unbox_float(v_a_2484_);
lean_dec(v_a_2484_);
lean_ctor_set_float(v___x_2556_, sizeof(void*)*16, v___x_2560_);
v___x_2561_ = lean_unbox_float(v_a_2504_);
lean_dec(v_a_2504_);
lean_ctor_set_float(v___x_2556_, sizeof(void*)*16 + 8, v___x_2561_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set_tag(v___x_2554_, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2556_);
v___x_2563_ = v___x_2554_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v___x_2556_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
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
v___jp_2415_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2418_ = lean_string_append(v___y_2416_, v___y_2417_);
lean_dec_ref(v___y_2417_);
v___x_2419_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2418_);
v___x_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
return v___x_2420_;
}
v___jp_2421_:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; uint8_t v___x_2435_; 
v___x_2424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_2425_ = lean_string_append(v___x_2424_, v_context_2412_);
v___x_2426_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_2427_ = lean_string_append(v___x_2425_, v___x_2426_);
v___x_2428_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___closed__4));
v___x_2429_ = lean_string_append(v___x_2427_, v___x_2428_);
v___x_2430_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_2431_ = lean_string_append(v___x_2429_, v___x_2430_);
v___x_2432_ = lean_string_append(v___x_2431_, v_received_2423_);
lean_dec_ref(v_received_2423_);
v___x_2433_ = lean_string_utf8_byte_size(v___y_2422_);
v___x_2434_ = lean_unsigned_to_nat(0u);
v___x_2435_ = lean_nat_dec_eq(v___x_2433_, v___x_2434_);
if (v___x_2435_ == 0)
{
lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2436_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_2437_ = lean_string_append(v___x_2436_, v___y_2422_);
lean_dec_ref(v___y_2422_);
v___x_2438_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_2439_ = lean_string_append(v___x_2437_, v___x_2438_);
v___y_2416_ = v___x_2432_;
v___y_2417_ = v___x_2439_;
goto v___jp_2415_;
}
else
{
lean_object* v___x_2440_; 
lean_dec_ref(v___y_2422_);
v___x_2440_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_2416_ = v___x_2432_;
v___y_2417_ = v___x_2440_;
goto v___jp_2415_;
}
}
v___jp_2441_:
{
lean_object* v___x_2443_; 
v___x_2443_ = l_Lasm_JS_Data_describe(v_d_2413_);
v___y_2422_ = v___y_2442_;
v_received_2423_ = v___x_2443_;
goto v___jp_2421_;
}
v___jp_2444_:
{
if (lean_obj_tag(v_d_2413_) == 9)
{
lean_object* v_value_2446_; lean_object* v_description_2447_; lean_object* v___x_2448_; uint8_t v___x_2449_; 
v_value_2446_ = lean_ctor_get(v_d_2413_, 0);
v_description_2447_ = lean_ctor_get(v_d_2413_, 1);
v___x_2448_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2449_ = lean_string_dec_eq(v_description_2447_, v___x_2448_);
if (v___x_2449_ == 0)
{
v___y_2442_ = v_a_2445_;
goto v___jp_2441_;
}
else
{
lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2466_; 
lean_inc(v_value_2446_);
v_isSharedCheck_2466_ = !lean_is_exclusive(v_d_2413_);
if (v_isSharedCheck_2466_ == 0)
{
lean_object* v_unused_2467_; lean_object* v_unused_2468_; 
v_unused_2467_ = lean_ctor_get(v_d_2413_, 1);
lean_dec(v_unused_2467_);
v_unused_2468_ = lean_ctor_get(v_d_2413_, 0);
lean_dec(v_unused_2468_);
v___x_2451_ = v_d_2413_;
v_isShared_2452_ = v_isSharedCheck_2466_;
goto v_resetjp_2450_;
}
else
{
lean_dec(v_d_2413_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2466_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
uint32_t v___x_2453_; uint64_t v___x_2454_; lean_object* v___x_2456_; 
v___x_2453_ = 206;
v___x_2454_ = 0ULL;
lean_inc(v_value_2446_);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 1, v___x_2448_);
v___x_2456_ = v___x_2451_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_value_2446_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v___x_2448_);
v___x_2456_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
uint32_t v___x_2457_; lean_object* v___x_2458_; 
v___x_2457_ = lasm_js_value_handle(v_value_2446_);
lean_dec(v_value_2446_);
v___x_2458_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2453_, v___x_2454_, v___x_2456_, v___x_2457_);
lean_dec_ref(v___x_2456_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; uint8_t v___x_2460_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2458_, 1);
v___x_2460_ = lean_string_validate_utf8(v_a_2459_);
if (v___x_2460_ == 0)
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
lean_dec(v_a_2459_);
v___x_2461_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_2462_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2461_);
v___y_2422_ = v_a_2445_;
v_received_2423_ = v___x_2462_;
goto v___jp_2421_;
}
else
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_string_from_utf8_unchecked(v_a_2459_);
v___y_2422_ = v_a_2445_;
v_received_2423_ = v___x_2463_;
goto v___jp_2421_;
}
}
else
{
lean_object* v___x_2464_; 
lean_dec_ref_known(v___x_2458_, 1);
v___x_2464_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_2422_ = v_a_2445_;
v_received_2423_ = v___x_2464_;
goto v___jp_2421_;
}
}
}
}
}
else
{
v___y_2442_ = v_a_2445_;
goto v___jp_2441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2566_, lean_object* v_d_2567_, lean_object* v_a_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2566_, v_d_2567_);
lean_dec_ref(v_context_2566_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0(lean_object* v_context_2570_, lean_object* v_x_2571_){
_start:
{
lean_object* v_val_2574_; 
if (lean_obj_tag(v_x_2571_) == 0)
{
lean_object* v_a_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2584_; 
v_a_2576_ = lean_ctor_get(v_x_2571_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v_x_2571_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2578_ = v_x_2571_;
v_isShared_2579_ = v_isSharedCheck_2584_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_a_2576_);
lean_dec(v_x_2571_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2584_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
lean_object* v___x_2581_; 
if (v_isShared_2579_ == 0)
{
v___x_2581_ = v___x_2578_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2576_);
v___x_2581_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
lean_object* v___x_2582_; 
v___x_2582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2581_);
return v___x_2582_;
}
}
}
else
{
lean_object* v_a_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2598_; 
v_a_2585_ = lean_ctor_get(v_x_2571_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v_x_2571_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2587_ = v_x_2571_;
v_isShared_2588_ = v_isSharedCheck_2598_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_a_2585_);
lean_dec(v_x_2571_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2598_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2570_, v_a_2585_);
if (lean_obj_tag(v___x_2589_) == 0)
{
lean_object* v_a_2590_; lean_object* v___x_2592_; 
v_a_2590_ = lean_ctor_get(v___x_2589_, 0);
lean_inc(v_a_2590_);
lean_dec_ref_known(v___x_2589_, 1);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 0, v_a_2590_);
v___x_2592_ = v___x_2587_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
v_val_2574_ = v___x_2592_;
goto v___jp_2573_;
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2596_; 
v_a_2594_ = lean_ctor_get(v___x_2589_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2589_, 1);
if (v_isShared_2588_ == 0)
{
lean_ctor_set_tag(v___x_2587_, 0);
lean_ctor_set(v___x_2587_, 0, v_a_2594_);
v___x_2596_ = v___x_2587_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
v_val_2574_ = v___x_2596_;
goto v___jp_2573_;
}
}
}
}
v___jp_2573_:
{
lean_object* v___x_2575_; 
v___x_2575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2575_, 0, v_val_2574_);
return v___x_2575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0___boxed(lean_object* v_context_2599_, lean_object* v_x_2600_, lean_object* v___y_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0(v_context_2599_, v_x_2600_);
lean_dec_ref(v_context_2599_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(lean_object* v_context_2603_, uint32_t v_op_2604_, uint64_t v_flags_2605_, lean_object* v_payload_2606_, lean_object* v_failurePrefix_2607_){
_start:
{
lean_object* v___f_2609_; lean_object* v___f_2610_; lean_object* v___f_2611_; lean_object* v___f_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___f_2615_; lean_object* v___f_2616_; lean_object* v___x_2617_; uint8_t v___x_2618_; lean_object* v_val_2620_; lean_object* v___x_2623_; 
v___f_2609_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2609_, 0, v_context_2603_);
v___f_2610_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2610_, 0, v___f_2609_);
v___f_2611_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2611_, 0, v___f_2610_);
lean_inc_ref(v_failurePrefix_2607_);
v___f_2612_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2612_, 0, v_failurePrefix_2607_);
v___x_2613_ = lean_box_uint32(v_op_2604_);
v___x_2614_ = lean_box_uint64(v_flags_2605_);
lean_inc_ref(v___f_2611_);
v___f_2615_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2615_, 0, v_failurePrefix_2607_);
lean_closure_set(v___f_2615_, 1, v___x_2613_);
lean_closure_set(v___f_2615_, 2, v___x_2614_);
lean_closure_set(v___f_2615_, 3, v_payload_2606_);
lean_closure_set(v___f_2615_, 4, v___f_2612_);
lean_closure_set(v___f_2615_, 5, v___f_2611_);
lean_closure_set(v___f_2615_, 6, v___f_2611_);
v___f_2616_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2616_, 0, v___f_2615_);
v___x_2617_ = lean_unsigned_to_nat(0u);
v___x_2618_ = 0;
v___x_2623_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2623_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2623_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
lean_ctor_set_tag(v___x_2626_, 1);
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
v_val_2620_ = v___x_2629_;
goto v___jp_2619_;
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
v_a_2632_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2623_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2623_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
lean_ctor_set_tag(v___x_2634_, 0);
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
v_val_2620_ = v___x_2637_;
goto v___jp_2619_;
}
}
}
v___jp_2619_:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2621_, 0, v_val_2620_);
v___x_2622_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2617_, v___x_2618_, v___x_2621_, v___f_2616_);
return v___x_2622_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___boxed(lean_object* v_context_2640_, lean_object* v_op_2641_, lean_object* v_flags_2642_, lean_object* v_payload_2643_, lean_object* v_failurePrefix_2644_, lean_object* v_a_2645_){
_start:
{
uint32_t v_op_boxed_2646_; uint64_t v_flags_boxed_2647_; lean_object* v_res_2648_; 
v_op_boxed_2646_ = lean_unbox_uint32(v_op_2641_);
lean_dec(v_op_2641_);
v_flags_boxed_2647_ = lean_unbox_uint64(v_flags_2642_);
lean_dec_ref(v_flags_2642_);
v_res_2648_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v_context_2640_, v_op_boxed_2646_, v_flags_boxed_2647_, v_payload_2643_, v_failurePrefix_2644_);
return v_res_2648_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2649_; uint8_t v___x_2650_; uint64_t v___x_2651_; 
v___x_2649_ = 8ULL;
v___x_2650_ = 0;
v___x_2651_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(v___x_2650_, v___x_2649_);
return v___x_2651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(lean_object* v_o_2652_, lean_object* v_name_2653_, lean_object* v_args_2654_){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; uint32_t v___x_2661_; uint64_t v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2656_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2657_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2657_, 0, v_o_2652_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
lean_inc_ref(v_name_2653_);
v___x_2658_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2658_, 0, v_name_2653_);
v___x_2659_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2660_ = lean_string_append(v___x_2659_, v_name_2653_);
lean_dec_ref(v_name_2653_);
v___x_2661_ = 205;
v___x_2662_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0);
v___x_2663_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2663_, 0, v_args_2654_);
v___x_2664_ = lean_unsigned_to_nat(3u);
v___x_2665_ = lean_mk_empty_array_with_capacity(v___x_2664_);
v___x_2666_ = lean_array_push(v___x_2665_, v___x_2657_);
v___x_2667_ = lean_array_push(v___x_2666_, v___x_2658_);
v___x_2668_ = lean_array_push(v___x_2667_, v___x_2663_);
v___x_2669_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2668_);
v___x_2670_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v___x_2660_, v___x_2661_, v___x_2662_, v___x_2669_, v___x_2656_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___boxed(lean_object* v_o_2671_, lean_object* v_name_2672_, lean_object* v_args_2673_, lean_object* v___y_2674_){
_start:
{
lean_object* v_res_2675_; 
v_res_2675_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(v_o_2671_, v_name_2672_, v_args_2673_);
return v_res_2675_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_FsFile_stat___closed__2(void){
_start:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2679_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_2680_ = l_Lasm_JS_Web_Support_args(v___x_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_stat(lean_object* v_self_2681_){
_start:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2683_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__0));
v___x_2684_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2685_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(v_self_2681_, v___x_2683_, v___x_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_stat___boxed(lean_object* v_self_2686_, lean_object* v_a_2687_){
_start:
{
lean_object* v_res_2688_; 
v_res_2688_ = l_Lasm_JS_Deno_FsFile_stat(v_self_2686_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(lean_object* v_context_2689_, lean_object* v_bytes_2690_){
_start:
{
lean_object* v___x_2692_; 
v___x_2692_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2690_);
if (lean_obj_tag(v___x_2692_) == 0)
{
lean_object* v_a_2693_; lean_object* v___x_2694_; 
v_a_2693_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2692_, 1);
v___x_2694_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2689_, v_a_2693_);
return v___x_2694_;
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
v_a_2695_ = lean_ctor_get(v___x_2692_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2692_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2692_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0___boxed(lean_object* v_context_2703_, lean_object* v_bytes_2704_, lean_object* v_a_2705_){
_start:
{
lean_object* v_res_2706_; 
v_res_2706_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(v_context_2703_, v_bytes_2704_);
lean_dec_ref(v_bytes_2704_);
lean_dec_ref(v_context_2703_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(lean_object* v_o_2707_, lean_object* v_name_2708_, lean_object* v_args_2709_){
_start:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; uint64_t v___x_2714_; lean_object* v___x_2715_; 
v___x_2711_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2712_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2712_, 0, v_o_2707_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
lean_inc_ref(v_name_2708_);
v___x_2713_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2713_, 0, v_name_2708_);
v___x_2714_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0);
v___x_2715_ = l_Lasm_JS_Value_invokeRaw(v___x_2712_, v___x_2713_, v_args_2709_, v___x_2714_);
if (lean_obj_tag(v___x_2715_) == 0)
{
lean_object* v_a_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v_a_2716_ = lean_ctor_get(v___x_2715_, 0);
lean_inc(v_a_2716_);
lean_dec_ref_known(v___x_2715_, 1);
v___x_2717_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2718_ = lean_string_append(v___x_2717_, v_name_2708_);
lean_dec_ref(v_name_2708_);
v___x_2719_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(v___x_2718_, v_a_2716_);
lean_dec(v_a_2716_);
lean_dec_ref(v___x_2718_);
return v___x_2719_;
}
else
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
lean_dec_ref(v_name_2708_);
v_a_2720_ = lean_ctor_get(v___x_2715_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2715_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2715_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2715_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2725_; 
if (v_isShared_2723_ == 0)
{
v___x_2725_ = v___x_2722_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2720_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0___boxed(lean_object* v_o_2728_, lean_object* v_name_2729_, lean_object* v_args_2730_, lean_object* v_a_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(v_o_2728_, v_name_2729_, v_args_2730_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_statSync(lean_object* v_self_2734_){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2736_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_statSync___closed__0));
v___x_2737_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2738_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(v_self_2734_, v___x_2736_, v___x_2737_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_statSync___boxed(lean_object* v_self_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l_Lasm_JS_Deno_FsFile_statSync(v_self_2739_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_sync(lean_object* v_self_2743_){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2745_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_sync___closed__0));
v___x_2746_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2747_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2743_, v___x_2745_, v___x_2746_);
return v___x_2747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_sync___boxed(lean_object* v_self_2748_, lean_object* v_a_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lasm_JS_Deno_FsFile_sync(v_self_2748_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncSync(lean_object* v_self_2752_){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2754_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncSync___closed__0));
v___x_2755_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2756_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2752_, v___x_2754_, v___x_2755_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncSync___boxed(lean_object* v_self_2757_, lean_object* v_a_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Lasm_JS_Deno_FsFile_syncSync(v_self_2757_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncData(lean_object* v_self_2761_){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2763_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncData___closed__0));
v___x_2764_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2765_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2761_, v___x_2763_, v___x_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncData___boxed(lean_object* v_self_2766_, lean_object* v_a_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lasm_JS_Deno_FsFile_syncData(v_self_2766_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync(lean_object* v_self_2770_){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2772_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncDataSync___closed__0));
v___x_2773_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2774_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2770_, v___x_2772_, v___x_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync___boxed(lean_object* v_self_2775_, lean_object* v_a_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l_Lasm_JS_Deno_FsFile_syncDataSync(v_self_2775_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime(lean_object* v_self_2779_, lean_object* v_atime_2780_, lean_object* v_mtime_2781_){
_start:
{
lean_object* v___x_2783_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2794_; 
v___x_2783_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utime___closed__0));
if (lean_obj_tag(v_atime_2780_) == 0)
{
double v_value_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
v_value_2804_ = lean_ctor_get_float(v_atime_2780_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v_atime_2780_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v_atime_2780_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_dec(v_atime_2780_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
lean_ctor_set_tag(v___x_2806_, 3);
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2810_, 0, v_value_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
v___y_2794_ = v___x_2809_;
goto v___jp_2793_;
}
}
}
else
{
lean_object* v_value_2812_; 
v_value_2812_ = lean_ctor_get(v_atime_2780_, 0);
lean_inc(v_value_2812_);
lean_dec_ref_known(v_atime_2780_, 1);
v___y_2794_ = v_value_2812_;
goto v___jp_2793_;
}
v___jp_2784_:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2787_ = lean_unsigned_to_nat(2u);
v___x_2788_ = lean_mk_empty_array_with_capacity(v___x_2787_);
v___x_2789_ = lean_array_push(v___x_2788_, v___y_2785_);
v___x_2790_ = lean_array_push(v___x_2789_, v___y_2786_);
v___x_2791_ = l_Lasm_JS_Web_Support_args(v___x_2790_);
v___x_2792_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2779_, v___x_2783_, v___x_2791_);
return v___x_2792_;
}
v___jp_2793_:
{
if (lean_obj_tag(v_mtime_2781_) == 0)
{
double v_value_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
v_value_2795_ = lean_ctor_get_float(v_mtime_2781_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v_mtime_2781_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v_mtime_2781_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_dec(v_mtime_2781_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set_tag(v___x_2797_, 3);
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2801_, 0, v_value_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
v___y_2785_ = v___y_2794_;
v___y_2786_ = v___x_2800_;
goto v___jp_2784_;
}
}
}
else
{
lean_object* v_value_2803_; 
v_value_2803_ = lean_ctor_get(v_mtime_2781_, 0);
lean_inc(v_value_2803_);
lean_dec_ref_known(v_mtime_2781_, 1);
v___y_2785_ = v___y_2794_;
v___y_2786_ = v_value_2803_;
goto v___jp_2784_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime___boxed(lean_object* v_self_2813_, lean_object* v_atime_2814_, lean_object* v_mtime_2815_, lean_object* v_a_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l_Lasm_JS_Deno_FsFile_utime(v_self_2813_, v_atime_2814_, v_mtime_2815_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync(lean_object* v_self_2819_, lean_object* v_atime_2820_, lean_object* v_mtime_2821_){
_start:
{
lean_object* v___x_2823_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2834_; 
v___x_2823_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utimeSync___closed__0));
if (lean_obj_tag(v_atime_2820_) == 0)
{
double v_value_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
v_value_2844_ = lean_ctor_get_float(v_atime_2820_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v_atime_2820_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v_atime_2820_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_dec(v_atime_2820_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
lean_ctor_set_tag(v___x_2846_, 3);
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2850_, 0, v_value_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
v___y_2834_ = v___x_2849_;
goto v___jp_2833_;
}
}
}
else
{
lean_object* v_value_2852_; 
v_value_2852_ = lean_ctor_get(v_atime_2820_, 0);
lean_inc(v_value_2852_);
lean_dec_ref_known(v_atime_2820_, 1);
v___y_2834_ = v_value_2852_;
goto v___jp_2833_;
}
v___jp_2824_:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; 
v___x_2827_ = lean_unsigned_to_nat(2u);
v___x_2828_ = lean_mk_empty_array_with_capacity(v___x_2827_);
v___x_2829_ = lean_array_push(v___x_2828_, v___y_2825_);
v___x_2830_ = lean_array_push(v___x_2829_, v___y_2826_);
v___x_2831_ = l_Lasm_JS_Web_Support_args(v___x_2830_);
v___x_2832_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2819_, v___x_2823_, v___x_2831_);
return v___x_2832_;
}
v___jp_2833_:
{
if (lean_obj_tag(v_mtime_2821_) == 0)
{
double v_value_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
v_value_2835_ = lean_ctor_get_float(v_mtime_2821_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v_mtime_2821_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v_mtime_2821_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_dec(v_mtime_2821_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
lean_ctor_set_tag(v___x_2837_, 3);
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2841_, 0, v_value_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
v___y_2825_ = v___y_2834_;
v___y_2826_ = v___x_2840_;
goto v___jp_2824_;
}
}
}
else
{
lean_object* v_value_2843_; 
v_value_2843_ = lean_ctor_get(v_mtime_2821_, 0);
lean_inc(v_value_2843_);
lean_dec_ref_known(v_mtime_2821_, 1);
v___y_2825_ = v___y_2834_;
v___y_2826_ = v_value_2843_;
goto v___jp_2824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync___boxed(lean_object* v_self_2853_, lean_object* v_atime_2854_, lean_object* v_mtime_2855_, lean_object* v_a_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l_Lasm_JS_Deno_FsFile_utimeSync(v_self_2853_, v_atime_2854_, v_mtime_2855_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal(lean_object* v_self_2859_){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2861_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_isTerminal___closed__0));
v___x_2862_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2863_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2859_, v___x_2861_, v___x_2862_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal___boxed(lean_object* v_self_2864_, lean_object* v_a_2865_){
_start:
{
lean_object* v_res_2866_; 
v_res_2866_ = l_Lasm_JS_Deno_FsFile_isTerminal(v_self_2864_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw(lean_object* v_self_2868_, uint8_t v_mode_2869_, lean_object* v_options_2870_){
_start:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2872_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_setRaw___closed__0));
v___x_2873_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2873_, 0, v_mode_2869_);
v___x_2874_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Stdin_setRaw_spec__0(v_options_2870_);
v___x_2875_ = lean_unsigned_to_nat(2u);
v___x_2876_ = lean_mk_empty_array_with_capacity(v___x_2875_);
v___x_2877_ = lean_array_push(v___x_2876_, v___x_2873_);
v___x_2878_ = lean_array_push(v___x_2877_, v___x_2874_);
v___x_2879_ = l_Lasm_JS_Web_Support_args(v___x_2878_);
v___x_2880_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2868_, v___x_2872_, v___x_2879_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw___boxed(lean_object* v_self_2881_, lean_object* v_mode_2882_, lean_object* v_options_2883_, lean_object* v_a_2884_){
_start:
{
uint8_t v_mode_boxed_2885_; lean_object* v_res_2886_; 
v_mode_boxed_2885_ = lean_unbox(v_mode_2882_);
v_res_2886_ = l_Lasm_JS_Deno_FsFile_setRaw(v_self_2881_, v_mode_boxed_2885_, v_options_2883_);
lean_dec(v_options_2883_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock(lean_object* v_self_2888_, lean_object* v_exclusive_2889_){
_start:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2891_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lock___closed__0));
v___x_2892_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2889_);
v___x_2893_ = lean_unsigned_to_nat(1u);
v___x_2894_ = lean_mk_empty_array_with_capacity(v___x_2893_);
v___x_2895_ = lean_array_push(v___x_2894_, v___x_2892_);
v___x_2896_ = l_Lasm_JS_Web_Support_args(v___x_2895_);
v___x_2897_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2888_, v___x_2891_, v___x_2896_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock___boxed(lean_object* v_self_2898_, lean_object* v_exclusive_2899_, lean_object* v_a_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_Lasm_JS_Deno_FsFile_lock(v_self_2898_, v_exclusive_2899_);
lean_dec(v_exclusive_2899_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync(lean_object* v_self_2903_, lean_object* v_exclusive_2904_){
_start:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2906_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lockSync___closed__0));
v___x_2907_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2904_);
v___x_2908_ = lean_unsigned_to_nat(1u);
v___x_2909_ = lean_mk_empty_array_with_capacity(v___x_2908_);
v___x_2910_ = lean_array_push(v___x_2909_, v___x_2907_);
v___x_2911_ = l_Lasm_JS_Web_Support_args(v___x_2910_);
v___x_2912_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2903_, v___x_2906_, v___x_2911_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync___boxed(lean_object* v_self_2913_, lean_object* v_exclusive_2914_, lean_object* v_a_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_Lasm_JS_Deno_FsFile_lockSync(v_self_2913_, v_exclusive_2914_);
lean_dec(v_exclusive_2914_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(lean_object* v_context_2917_, lean_object* v_x_2918_){
_start:
{
lean_object* v_val_2921_; 
if (lean_obj_tag(v_x_2918_) == 0)
{
lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2931_; 
v_a_2923_ = lean_ctor_get(v_x_2918_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v_x_2918_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2925_ = v_x_2918_;
v_isShared_2926_ = v_isSharedCheck_2931_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_dec(v_x_2918_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2931_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2928_; 
if (v_isShared_2926_ == 0)
{
v___x_2928_ = v___x_2925_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2923_);
v___x_2928_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2929_; 
v___x_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
return v___x_2929_;
}
}
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2945_; 
v_a_2932_ = lean_ctor_get(v_x_2918_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v_x_2918_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2934_ = v_x_2918_;
v_isShared_2935_ = v_isSharedCheck_2945_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v_x_2918_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2945_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2936_; 
v___x_2936_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_2917_, v_a_2932_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v_a_2937_; lean_object* v___x_2939_; 
v_a_2937_ = lean_ctor_get(v___x_2936_, 0);
lean_inc(v_a_2937_);
lean_dec_ref_known(v___x_2936_, 1);
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v_a_2937_);
v___x_2939_ = v___x_2934_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2937_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
v_val_2921_ = v___x_2939_;
goto v___jp_2920_;
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; 
v_a_2941_ = lean_ctor_get(v___x_2936_, 0);
lean_inc(v_a_2941_);
lean_dec_ref_known(v___x_2936_, 1);
if (v_isShared_2935_ == 0)
{
lean_ctor_set_tag(v___x_2934_, 0);
lean_ctor_set(v___x_2934_, 0, v_a_2941_);
v___x_2943_ = v___x_2934_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2941_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
v_val_2921_ = v___x_2943_;
goto v___jp_2920_;
}
}
}
}
v___jp_2920_:
{
lean_object* v___x_2922_; 
v___x_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2922_, 0, v_val_2921_);
return v___x_2922_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed(lean_object* v_context_2946_, lean_object* v_x_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(v_context_2946_, v_x_2947_);
lean_dec_ref(v_context_2946_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_2950_, uint32_t v_op_2951_, uint64_t v_flags_2952_, lean_object* v_payload_2953_, lean_object* v___f_2954_, lean_object* v___f_2955_, lean_object* v___f_2956_, lean_object* v_x_2957_){
_start:
{
if (lean_obj_tag(v_x_2957_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2967_; 
lean_dec_ref(v___f_2956_);
lean_dec_ref(v___f_2955_);
lean_dec_ref(v___f_2954_);
lean_dec(v_payload_2953_);
v_a_2959_ = lean_ctor_get(v_x_2957_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_x_2957_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2961_ = v_x_2957_;
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v_x_2957_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_a_2959_);
v___x_2964_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_3014_; 
v_a_2968_ = lean_ctor_get(v_x_2957_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v_x_2957_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_2970_ = v_x_2957_;
v_isShared_2971_ = v_isSharedCheck_3014_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v_x_2957_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_3014_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; uint8_t v___x_2974_; 
v___x_2972_ = lean_string_utf8_byte_size(v_failurePrefix_2950_);
v___x_2973_ = lean_unsigned_to_nat(0u);
v___x_2974_ = lean_nat_dec_eq(v___x_2972_, v___x_2973_);
if (v___x_2974_ == 0)
{
lean_object* v___f_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___f_2979_; lean_object* v_val_2981_; lean_object* v___x_2986_; 
lean_dec_ref(v___f_2956_);
lean_inc(v_a_2968_);
v___f_2975_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2975_, 0, v_a_2968_);
v___x_2976_ = lean_box(v___x_2974_);
v___x_2977_ = lean_box_uint32(v_op_2951_);
v___x_2978_ = lean_box_uint64(v_flags_2952_);
lean_inc(v_payload_2953_);
v___f_2979_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2979_, 0, v___x_2973_);
lean_closure_set(v___f_2979_, 1, v___x_2976_);
lean_closure_set(v___f_2979_, 2, v___f_2975_);
lean_closure_set(v___f_2979_, 3, v_a_2968_);
lean_closure_set(v___f_2979_, 4, v___x_2977_);
lean_closure_set(v___f_2979_, 5, v___x_2978_);
lean_closure_set(v___f_2979_, 6, v_payload_2953_);
v___x_2986_ = l_Lasm_JS_Wire_encodeIO(v_payload_2953_);
lean_dec(v_payload_2953_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2989_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2987_);
lean_dec_ref_known(v___x_2986_, 1);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 0, v_a_2987_);
v___x_2989_ = v___x_2970_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_a_2987_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
v_val_2981_ = v___x_2989_;
goto v___jp_2980_;
}
}
else
{
lean_object* v_a_2991_; lean_object* v___x_2993_; 
v_a_2991_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2991_);
lean_dec_ref_known(v___x_2986_, 1);
if (v_isShared_2971_ == 0)
{
lean_ctor_set_tag(v___x_2970_, 0);
lean_ctor_set(v___x_2970_, 0, v_a_2991_);
v___x_2993_ = v___x_2970_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2991_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
v_val_2981_ = v___x_2993_;
goto v___jp_2980_;
}
}
v___jp_2980_:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2982_, 0, v_val_2981_);
v___x_2983_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2973_, v___x_2974_, v___x_2982_, v___f_2979_);
v___x_2984_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2973_, v___x_2974_, v___x_2983_, v___f_2954_);
v___x_2985_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2973_, v___x_2974_, v___x_2984_, v___f_2955_);
return v___x_2985_;
}
}
else
{
lean_object* v___f_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___f_2998_; uint8_t v___x_2999_; lean_object* v_val_3001_; lean_object* v___x_3005_; 
lean_dec_ref(v___f_2955_);
lean_dec_ref(v___f_2954_);
lean_inc(v_a_2968_);
v___f_2995_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2995_, 0, v_a_2968_);
v___x_2996_ = lean_box_uint32(v_op_2951_);
v___x_2997_ = lean_box_uint64(v_flags_2952_);
lean_inc(v_payload_2953_);
v___f_2998_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2998_, 0, v___f_2995_);
lean_closure_set(v___f_2998_, 1, v_a_2968_);
lean_closure_set(v___f_2998_, 2, v___x_2996_);
lean_closure_set(v___f_2998_, 3, v___x_2997_);
lean_closure_set(v___f_2998_, 4, v_payload_2953_);
v___x_2999_ = 0;
v___x_3005_ = l_Lasm_JS_Wire_encodeIO(v_payload_2953_);
lean_dec(v_payload_2953_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3008_; 
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3006_);
lean_dec_ref_known(v___x_3005_, 1);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 0, v_a_3006_);
v___x_3008_ = v___x_2970_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3006_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
v_val_3001_ = v___x_3008_;
goto v___jp_3000_;
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; 
v_a_3010_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3010_);
lean_dec_ref_known(v___x_3005_, 1);
if (v_isShared_2971_ == 0)
{
lean_ctor_set_tag(v___x_2970_, 0);
lean_ctor_set(v___x_2970_, 0, v_a_3010_);
v___x_3012_ = v___x_2970_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_a_3010_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
v_val_3001_ = v___x_3012_;
goto v___jp_3000_;
}
}
v___jp_3000_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3002_, 0, v_val_3001_);
v___x_3003_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2973_, v___x_2999_, v___x_3002_, v___f_2998_);
v___x_3004_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2973_, v___x_2999_, v___x_3003_, v___f_2956_);
return v___x_3004_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_3015_, lean_object* v_op_3016_, lean_object* v_flags_3017_, lean_object* v_payload_3018_, lean_object* v___f_3019_, lean_object* v___f_3020_, lean_object* v___f_3021_, lean_object* v_x_3022_, lean_object* v___y_3023_){
_start:
{
uint32_t v_op_boxed_3024_; uint64_t v_flags_boxed_3025_; lean_object* v_res_3026_; 
v_op_boxed_3024_ = lean_unbox_uint32(v_op_3016_);
lean_dec(v_op_3016_);
v_flags_boxed_3025_ = lean_unbox_uint64(v_flags_3017_);
lean_dec_ref(v_flags_3017_);
v_res_3026_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(v_failurePrefix_3015_, v_op_boxed_3024_, v_flags_boxed_3025_, v_payload_3018_, v___f_3019_, v___f_3020_, v___f_3021_, v_x_3022_);
lean_dec_ref(v_failurePrefix_3015_);
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(lean_object* v___f_3027_, lean_object* v_x_3028_){
_start:
{
if (lean_obj_tag(v_x_3028_) == 0)
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3038_; 
lean_dec_ref(v___f_3027_);
v_a_3030_ = lean_ctor_get(v_x_3028_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v_x_3028_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3032_ = v_x_3028_;
v_isShared_3033_ = v_isSharedCheck_3038_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v_x_3028_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3038_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3036_; 
v___x_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3035_);
return v___x_3036_;
}
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3040_; 
v_a_3039_ = lean_ctor_get(v_x_3028_, 0);
lean_inc(v_a_3039_);
lean_dec_ref_known(v_x_3028_, 1);
v___x_3040_ = lean_apply_2(v___f_3027_, v_a_3039_, lean_box(0));
return v___x_3040_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed(lean_object* v___f_3041_, lean_object* v_x_3042_, lean_object* v___y_3043_){
_start:
{
lean_object* v_res_3044_; 
v_res_3044_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(v___f_3041_, v_x_3042_);
return v_res_3044_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(lean_object* v___f_3045_, lean_object* v_bytes_3046_){
_start:
{
lean_object* v___x_3048_; uint8_t v___x_3049_; lean_object* v_val_3051_; lean_object* v___x_3054_; 
v___x_3048_ = lean_unsigned_to_nat(0u);
v___x_3049_ = 0;
v___x_3054_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3046_);
if (lean_obj_tag(v___x_3054_) == 0)
{
lean_object* v_a_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
v_a_3055_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3057_ = v___x_3054_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_a_3055_);
lean_dec(v___x_3054_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
lean_ctor_set_tag(v___x_3057_, 1);
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_a_3055_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
v_val_3051_ = v___x_3060_;
goto v___jp_3050_;
}
}
}
else
{
lean_object* v_a_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3070_; 
v_a_3063_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3065_ = v___x_3054_;
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_a_3063_);
lean_dec(v___x_3054_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
if (v_isShared_3066_ == 0)
{
lean_ctor_set_tag(v___x_3065_, 0);
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_a_3063_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
v_val_3051_ = v___x_3068_;
goto v___jp_3050_;
}
}
}
v___jp_3050_:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3052_, 0, v_val_3051_);
v___x_3053_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3048_, v___x_3049_, v___x_3052_, v___f_3045_);
return v___x_3053_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed(lean_object* v___f_3071_, lean_object* v_bytes_3072_, lean_object* v___y_3073_){
_start:
{
lean_object* v_res_3074_; 
v_res_3074_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(v___f_3071_, v_bytes_3072_);
lean_dec_ref(v_bytes_3072_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(lean_object* v___f_3075_, lean_object* v_x_3076_){
_start:
{
if (lean_obj_tag(v_x_3076_) == 0)
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3086_; 
lean_dec_ref(v___f_3075_);
v_a_3078_ = lean_ctor_get(v_x_3076_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_x_3076_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3080_ = v_x_3076_;
v_isShared_3081_ = v_isSharedCheck_3086_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v_x_3076_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3086_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3083_; 
if (v_isShared_3081_ == 0)
{
v___x_3083_ = v___x_3080_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3078_);
v___x_3083_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
lean_object* v___x_3084_; 
v___x_3084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3083_);
return v___x_3084_;
}
}
}
else
{
lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3098_; 
v_isSharedCheck_3098_ = !lean_is_exclusive(v_x_3076_);
if (v_isSharedCheck_3098_ == 0)
{
lean_object* v_unused_3099_; 
v_unused_3099_ = lean_ctor_get(v_x_3076_, 0);
lean_dec(v_unused_3099_);
v___x_3088_ = v_x_3076_;
v_isShared_3089_ = v_isSharedCheck_3098_;
goto v_resetjp_3087_;
}
else
{
lean_dec(v_x_3076_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3098_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3090_; uint8_t v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3094_; 
v___x_3090_ = lean_unsigned_to_nat(0u);
v___x_3091_ = 0;
v___x_3092_ = lean_io_promise_new();
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 0, v___x_3092_);
v___x_3094_ = v___x_3088_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v___x_3092_);
v___x_3094_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
v___x_3096_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3090_, v___x_3091_, v___x_3095_, v___f_3075_);
return v___x_3096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed(lean_object* v___f_3100_, lean_object* v_x_3101_, lean_object* v___y_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(v___f_3100_, v_x_3101_);
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(lean_object* v_context_3104_, uint32_t v_op_3105_, uint64_t v_flags_3106_, lean_object* v_payload_3107_, lean_object* v_failurePrefix_3108_){
_start:
{
lean_object* v___f_3110_; lean_object* v___f_3111_; lean_object* v___f_3112_; lean_object* v___f_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___f_3116_; lean_object* v___f_3117_; lean_object* v___x_3118_; uint8_t v___x_3119_; lean_object* v_val_3121_; lean_object* v___x_3124_; 
v___f_3110_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3110_, 0, v_context_3104_);
v___f_3111_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3111_, 0, v___f_3110_);
v___f_3112_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3112_, 0, v___f_3111_);
lean_inc_ref(v_failurePrefix_3108_);
v___f_3113_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3113_, 0, v_failurePrefix_3108_);
v___x_3114_ = lean_box_uint32(v_op_3105_);
v___x_3115_ = lean_box_uint64(v_flags_3106_);
lean_inc_ref(v___f_3112_);
v___f_3116_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3116_, 0, v_failurePrefix_3108_);
lean_closure_set(v___f_3116_, 1, v___x_3114_);
lean_closure_set(v___f_3116_, 2, v___x_3115_);
lean_closure_set(v___f_3116_, 3, v_payload_3107_);
lean_closure_set(v___f_3116_, 4, v___f_3113_);
lean_closure_set(v___f_3116_, 5, v___f_3112_);
lean_closure_set(v___f_3116_, 6, v___f_3112_);
v___f_3117_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3117_, 0, v___f_3116_);
v___x_3118_ = lean_unsigned_to_nat(0u);
v___x_3119_ = 0;
v___x_3124_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3124_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
lean_ctor_set_tag(v___x_3127_, 1);
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
v_val_3121_ = v___x_3130_;
goto v___jp_3120_;
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
v_a_3133_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3124_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3124_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
lean_ctor_set_tag(v___x_3135_, 0);
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
v_val_3121_ = v___x_3138_;
goto v___jp_3120_;
}
}
}
v___jp_3120_:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3122_, 0, v_val_3121_);
v___x_3123_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3118_, v___x_3119_, v___x_3122_, v___f_3117_);
return v___x_3123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___boxed(lean_object* v_context_3141_, lean_object* v_op_3142_, lean_object* v_flags_3143_, lean_object* v_payload_3144_, lean_object* v_failurePrefix_3145_, lean_object* v_a_3146_){
_start:
{
uint32_t v_op_boxed_3147_; uint64_t v_flags_boxed_3148_; lean_object* v_res_3149_; 
v_op_boxed_3147_ = lean_unbox_uint32(v_op_3142_);
lean_dec(v_op_3142_);
v_flags_boxed_3148_ = lean_unbox_uint64(v_flags_3143_);
lean_dec_ref(v_flags_3143_);
v_res_3149_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v_context_3141_, v_op_boxed_3147_, v_flags_boxed_3148_, v_payload_3144_, v_failurePrefix_3145_);
return v_res_3149_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3150_; uint8_t v___x_3151_; uint64_t v___x_3152_; 
v___x_3150_ = 8ULL;
v___x_3151_ = 0;
v___x_3152_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v___x_3151_, v___x_3150_);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(lean_object* v_o_3153_, lean_object* v_name_3154_, lean_object* v_args_3155_){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; uint32_t v___x_3162_; uint64_t v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3157_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3158_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3158_, 0, v_o_3153_);
lean_ctor_set(v___x_3158_, 1, v___x_3157_);
lean_inc_ref(v_name_3154_);
v___x_3159_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3159_, 0, v_name_3154_);
v___x_3160_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_3161_ = lean_string_append(v___x_3160_, v_name_3154_);
lean_dec_ref(v_name_3154_);
v___x_3162_ = 205;
v___x_3163_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0);
v___x_3164_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3164_, 0, v_args_3155_);
v___x_3165_ = lean_unsigned_to_nat(3u);
v___x_3166_ = lean_mk_empty_array_with_capacity(v___x_3165_);
v___x_3167_ = lean_array_push(v___x_3166_, v___x_3158_);
v___x_3168_ = lean_array_push(v___x_3167_, v___x_3159_);
v___x_3169_ = lean_array_push(v___x_3168_, v___x_3164_);
v___x_3170_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3169_);
v___x_3171_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v___x_3161_, v___x_3162_, v___x_3163_, v___x_3170_, v___x_3157_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___boxed(lean_object* v_o_3172_, lean_object* v_name_3173_, lean_object* v_args_3174_, lean_object* v___y_3175_){
_start:
{
lean_object* v_res_3176_; 
v_res_3176_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_o_3172_, v_name_3173_, v_args_3174_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock(lean_object* v_self_3178_, lean_object* v_exclusive_3179_){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3181_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLock___closed__0));
v___x_3182_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3179_);
v___x_3183_ = lean_unsigned_to_nat(1u);
v___x_3184_ = lean_mk_empty_array_with_capacity(v___x_3183_);
v___x_3185_ = lean_array_push(v___x_3184_, v___x_3182_);
v___x_3186_ = l_Lasm_JS_Web_Support_args(v___x_3185_);
v___x_3187_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_self_3178_, v___x_3181_, v___x_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock___boxed(lean_object* v_self_3188_, lean_object* v_exclusive_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = l_Lasm_JS_Deno_FsFile_tryLock(v_self_3188_, v_exclusive_3189_);
lean_dec(v_exclusive_3189_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync(lean_object* v_self_3193_, lean_object* v_exclusive_3194_){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3196_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLockSync___closed__0));
v___x_3197_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3194_);
v___x_3198_ = lean_unsigned_to_nat(1u);
v___x_3199_ = lean_mk_empty_array_with_capacity(v___x_3198_);
v___x_3200_ = lean_array_push(v___x_3199_, v___x_3197_);
v___x_3201_ = l_Lasm_JS_Web_Support_args(v___x_3200_);
v___x_3202_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_3193_, v___x_3196_, v___x_3201_);
return v___x_3202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync___boxed(lean_object* v_self_3203_, lean_object* v_exclusive_3204_, lean_object* v_a_3205_){
_start:
{
lean_object* v_res_3206_; 
v_res_3206_ = l_Lasm_JS_Deno_FsFile_tryLockSync(v_self_3203_, v_exclusive_3204_);
lean_dec(v_exclusive_3204_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock(lean_object* v_self_3208_){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3210_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlock___closed__0));
v___x_3211_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3212_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3208_, v___x_3210_, v___x_3211_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock___boxed(lean_object* v_self_3213_, lean_object* v_a_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l_Lasm_JS_Deno_FsFile_unlock(v_self_3213_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync(lean_object* v_self_3217_){
_start:
{
lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3219_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlockSync___closed__0));
v___x_3220_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3221_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3217_, v___x_3219_, v___x_3220_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync___boxed(lean_object* v_self_3222_, lean_object* v_a_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l_Lasm_JS_Deno_FsFile_unlockSync(v_self_3222_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close(lean_object* v_self_3226_){
_start:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3228_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3229_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3230_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3226_, v___x_3228_, v___x_3229_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close___boxed(lean_object* v_self_3231_, lean_object* v_a_3232_){
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_Lasm_JS_Deno_FsFile_close(v_self_3231_);
return v_res_3233_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3234_; uint8_t v___x_3235_; uint64_t v___x_3236_; 
v___x_3234_ = 0ULL;
v___x_3235_ = 0;
v___x_3236_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_3235_, v___x_3234_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(lean_object* v_f_3238_, lean_object* v_args_3239_, lean_object* v_this_3240_){
_start:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; uint64_t v___x_3244_; lean_object* v___x_3245_; 
v___x_3242_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3243_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3243_, 0, v_f_3238_);
lean_ctor_set(v___x_3243_, 1, v___x_3242_);
v___x_3244_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0);
v___x_3245_ = l_Lasm_JS_Value_invokeRaw(v___x_3243_, v_this_3240_, v_args_3239_, v___x_3244_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v_a_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v_a_3246_ = lean_ctor_get(v___x_3245_, 0);
lean_inc(v_a_3246_);
lean_dec_ref_known(v___x_3245_, 1);
v___x_3247_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__1));
v___x_3248_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3247_, v_a_3246_);
lean_dec(v_a_3246_);
return v___x_3248_;
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
v_a_3249_ = lean_ctor_get(v___x_3245_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3245_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3245_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3245_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___boxed(lean_object* v_f_3257_, lean_object* v_args_3258_, lean_object* v_this_3259_, lean_object* v_a_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_f_3257_, v_args_3258_, v_this_3259_);
return v_res_3261_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3262_; uint64_t v___x_3263_; 
v___x_3262_ = 1;
v___x_3263_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3262_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(lean_object* v_o_3265_, lean_object* v_key_3266_){
_start:
{
lean_object* v___x_3268_; lean_object* v_k_3269_; lean_object* v___x_3270_; 
v___x_3268_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_k_3269_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_3269_, 0, v_key_3266_);
lean_ctor_set(v_k_3269_, 1, v___x_3268_);
v___x_3270_ = l_Lasm_JS_Wire_encodeIO(v_k_3269_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; uint32_t v___x_3272_; uint32_t v___x_3273_; uint64_t v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v___x_3272_ = 203;
v___x_3273_ = lasm_js_value_handle(v_o_3265_);
v___x_3274_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
v___x_3275_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3275_, 0, v_o_3265_);
lean_ctor_set(v___x_3275_, 1, v___x_3268_);
v___x_3276_ = lean_unsigned_to_nat(2u);
v___x_3277_ = lean_mk_empty_array_with_capacity(v___x_3276_);
lean_inc_ref(v_k_3269_);
v___x_3278_ = lean_array_push(v___x_3277_, v_k_3269_);
v___x_3279_ = lean_array_push(v___x_3278_, v___x_3275_);
v___x_3280_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3279_);
v___x_3281_ = lasm_js_call(v___x_3272_, v___x_3273_, v___x_3274_, v_a_3271_, v___x_3280_);
lean_dec_ref_known(v___x_3280_, 1);
lean_dec(v_a_3271_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v_a_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v_a_3282_ = lean_ctor_get(v___x_3281_, 0);
lean_inc(v_a_3282_);
lean_dec_ref_known(v___x_3281_, 1);
v___x_3283_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3284_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3269_);
v___x_3285_ = lean_string_append(v___x_3283_, v___x_3284_);
lean_dec_ref(v___x_3284_);
v___x_3286_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3285_, v_a_3282_);
lean_dec(v_a_3282_);
lean_dec_ref(v___x_3285_);
return v___x_3286_;
}
else
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3294_; 
lean_dec_ref_known(v_k_3269_, 2);
v_a_3287_ = lean_ctor_get(v___x_3281_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3289_ = v___x_3281_;
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3281_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
}
else
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3302_; 
lean_dec_ref_known(v_k_3269_, 2);
lean_dec(v_o_3265_);
v_a_3295_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3297_ = v___x_3270_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___x_3270_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3300_; 
if (v_isShared_3298_ == 0)
{
v___x_3300_ = v___x_3297_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v_a_3295_);
v___x_3300_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
return v___x_3300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___boxed(lean_object* v_o_3303_, lean_object* v_key_3304_, lean_object* v_a_3305_){
_start:
{
lean_object* v_res_3306_; 
v_res_3306_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_o_3303_, v_key_3304_);
return v_res_3306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(lean_object* v_self_3309_){
_start:
{
lean_object* v___x_3311_; 
v___x_3311_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3312_);
lean_dec_ref_known(v___x_3311_, 1);
v___x_3313_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3314_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3312_, v___x_3313_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_object* v_a_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v_a_3315_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_a_3315_);
lean_dec_ref_known(v___x_3314_, 1);
v___x_3316_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3317_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3315_, v___x_3316_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v_a_3318_; lean_object* v___x_3319_; 
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
lean_inc(v_a_3318_);
lean_dec_ref_known(v___x_3317_, 1);
lean_inc(v_self_3309_);
v___x_3319_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3309_, v_a_3318_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_object* v_a_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
lean_inc(v_a_3320_);
lean_dec_ref_known(v___x_3319_, 1);
v___x_3321_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3322_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3323_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3323_, 0, v_self_3309_);
lean_ctor_set(v___x_3323_, 1, v___x_3322_);
v___x_3324_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3320_, v___x_3321_, v___x_3323_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3332_; 
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_3324_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3324_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
else
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3340_; 
v_a_3333_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3335_ = v___x_3324_;
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3324_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3338_; 
if (v_isShared_3336_ == 0)
{
v___x_3338_ = v___x_3335_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3333_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3348_; 
lean_dec(v_self_3309_);
v_a_3341_ = lean_ctor_get(v___x_3319_, 0);
v_isSharedCheck_3348_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3348_ == 0)
{
v___x_3343_ = v___x_3319_;
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3319_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3346_; 
if (v_isShared_3344_ == 0)
{
v___x_3346_ = v___x_3343_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_a_3341_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
}
else
{
lean_object* v_a_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3356_; 
lean_dec(v_self_3309_);
v_a_3349_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3351_ = v___x_3317_;
v_isShared_3352_ = v_isSharedCheck_3356_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_a_3349_);
lean_dec(v___x_3317_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3356_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v___x_3354_; 
if (v_isShared_3352_ == 0)
{
v___x_3354_ = v___x_3351_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_a_3349_);
v___x_3354_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
return v___x_3354_;
}
}
}
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
lean_dec(v_self_3309_);
v_a_3357_ = lean_ctor_get(v___x_3314_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3314_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3314_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3314_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3362_; 
if (v_isShared_3360_ == 0)
{
v___x_3362_ = v___x_3359_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_a_3357_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
lean_dec(v_self_3309_);
v_a_3365_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3367_ = v___x_3311_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3311_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___boxed(lean_object* v_self_3373_, lean_object* v_a_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3373_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(lean_object* v_x_3376_){
_start:
{
if (lean_obj_tag(v_x_3376_) == 0)
{
lean_object* v_a_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3386_; 
v_a_3378_ = lean_ctor_get(v_x_3376_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v_x_3376_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3380_ = v_x_3376_;
v_isShared_3381_ = v_isSharedCheck_3386_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v_x_3376_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3386_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v___x_3383_; 
if (v_isShared_3381_ == 0)
{
v___x_3383_ = v___x_3380_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_a_3378_);
v___x_3383_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
lean_object* v___x_3384_; 
v___x_3384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3383_);
return v___x_3384_;
}
}
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3396_; 
v_a_3387_ = lean_ctor_get(v_x_3376_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v_x_3376_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3389_ = v_x_3376_;
v_isShared_3390_ = v_isSharedCheck_3396_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v_x_3376_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3396_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3391_; lean_object* v___x_3393_; 
v___x_3391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3391_, 0, v_a_3387_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 0, v___x_3391_);
v___x_3393_ = v___x_3389_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v___x_3391_);
v___x_3393_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
lean_object* v___x_3394_; 
v___x_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3393_);
return v___x_3394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0___boxed(lean_object* v_x_3397_, lean_object* v___y_3398_){
_start:
{
lean_object* v_res_3399_; 
v_res_3399_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(v_x_3397_);
return v_res_3399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_3400_, lean_object* v_d_3401_){
_start:
{
lean_object* v___y_3404_; lean_object* v___y_3405_; lean_object* v___y_3410_; lean_object* v_received_3411_; lean_object* v___y_3430_; lean_object* v_a_3433_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3457_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0));
lean_inc(v_d_3401_);
v___x_3458_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3401_, v___x_3457_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v_a_3459_; 
v_a_3459_ = lean_ctor_get(v___x_3458_, 0);
lean_inc(v_a_3459_);
lean_dec_ref_known(v___x_3458_, 1);
v_a_3433_ = v_a_3459_;
goto v___jp_3432_;
}
else
{
lean_object* v_a_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v_a_3460_ = lean_ctor_get(v___x_3458_, 0);
lean_inc(v_a_3460_);
lean_dec_ref_known(v___x_3458_, 1);
v___x_3461_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc(v_d_3401_);
v___x_3462_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3401_, v___x_3461_);
if (lean_obj_tag(v___x_3462_) == 0)
{
lean_object* v_a_3463_; 
lean_dec(v_a_3460_);
v_a_3463_ = lean_ctor_get(v___x_3462_, 0);
lean_inc(v_a_3463_);
lean_dec_ref_known(v___x_3462_, 1);
v_a_3433_ = v_a_3463_;
goto v___jp_3432_;
}
else
{
lean_object* v_a_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v_a_3464_ = lean_ctor_get(v___x_3462_, 0);
lean_inc(v_a_3464_);
lean_dec_ref_known(v___x_3462_, 1);
v___x_3465_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc(v_d_3401_);
v___x_3466_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3401_, v___x_3465_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v_a_3467_; 
lean_dec(v_a_3464_);
lean_dec(v_a_3460_);
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3467_);
lean_dec_ref_known(v___x_3466_, 1);
v_a_3433_ = v_a_3467_;
goto v___jp_3432_;
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v_a_3468_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3468_);
lean_dec_ref_known(v___x_3466_, 1);
v___x_3469_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
lean_inc(v_d_3401_);
v___x_3470_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3401_, v___x_3469_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v_a_3471_; 
lean_dec(v_a_3468_);
lean_dec(v_a_3464_);
lean_dec(v_a_3460_);
v_a_3471_ = lean_ctor_get(v___x_3470_, 0);
lean_inc(v_a_3471_);
lean_dec_ref_known(v___x_3470_, 1);
v_a_3433_ = v_a_3471_;
goto v___jp_3432_;
}
else
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3483_; 
lean_dec(v_d_3401_);
v_a_3472_ = lean_ctor_get(v___x_3470_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3474_ = v___x_3470_;
v_isShared_3475_ = v_isSharedCheck_3483_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3470_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3483_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3476_; uint8_t v___x_3477_; uint8_t v___x_3478_; uint8_t v___x_3479_; lean_object* v___x_3481_; 
v___x_3476_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3476_, 0, v_a_3460_);
v___x_3477_ = lean_unbox(v_a_3464_);
lean_dec(v_a_3464_);
lean_ctor_set_uint8(v___x_3476_, sizeof(void*)*1, v___x_3477_);
v___x_3478_ = lean_unbox(v_a_3468_);
lean_dec(v_a_3468_);
lean_ctor_set_uint8(v___x_3476_, sizeof(void*)*1 + 1, v___x_3478_);
v___x_3479_ = lean_unbox(v_a_3472_);
lean_dec(v_a_3472_);
lean_ctor_set_uint8(v___x_3476_, sizeof(void*)*1 + 2, v___x_3479_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set_tag(v___x_3474_, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3476_);
v___x_3481_ = v___x_3474_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v___x_3476_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
}
}
}
v___jp_3403_:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3406_ = lean_string_append(v___y_3404_, v___y_3405_);
lean_dec_ref(v___y_3405_);
v___x_3407_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
v___x_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
return v___x_3408_;
}
v___jp_3409_:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; uint8_t v___x_3423_; 
v___x_3412_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_3413_ = lean_string_append(v___x_3412_, v_context_3400_);
v___x_3414_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_3415_ = lean_string_append(v___x_3413_, v___x_3414_);
v___x_3416_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___closed__1));
v___x_3417_ = lean_string_append(v___x_3415_, v___x_3416_);
v___x_3418_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_3419_ = lean_string_append(v___x_3417_, v___x_3418_);
v___x_3420_ = lean_string_append(v___x_3419_, v_received_3411_);
lean_dec_ref(v_received_3411_);
v___x_3421_ = lean_string_utf8_byte_size(v___y_3410_);
v___x_3422_ = lean_unsigned_to_nat(0u);
v___x_3423_ = lean_nat_dec_eq(v___x_3421_, v___x_3422_);
if (v___x_3423_ == 0)
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3425_ = lean_string_append(v___x_3424_, v___y_3410_);
lean_dec_ref(v___y_3410_);
v___x_3426_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3427_ = lean_string_append(v___x_3425_, v___x_3426_);
v___y_3404_ = v___x_3420_;
v___y_3405_ = v___x_3427_;
goto v___jp_3403_;
}
else
{
lean_object* v___x_3428_; 
lean_dec_ref(v___y_3410_);
v___x_3428_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_3404_ = v___x_3420_;
v___y_3405_ = v___x_3428_;
goto v___jp_3403_;
}
}
v___jp_3429_:
{
lean_object* v___x_3431_; 
v___x_3431_ = l_Lasm_JS_Data_describe(v_d_3401_);
v___y_3410_ = v___y_3430_;
v_received_3411_ = v___x_3431_;
goto v___jp_3409_;
}
v___jp_3432_:
{
if (lean_obj_tag(v_d_3401_) == 9)
{
lean_object* v_value_3434_; lean_object* v_description_3435_; lean_object* v___x_3436_; uint8_t v___x_3437_; 
v_value_3434_ = lean_ctor_get(v_d_3401_, 0);
v_description_3435_ = lean_ctor_get(v_d_3401_, 1);
v___x_3436_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3437_ = lean_string_dec_eq(v_description_3435_, v___x_3436_);
if (v___x_3437_ == 0)
{
v___y_3430_ = v_a_3433_;
goto v___jp_3429_;
}
else
{
lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3454_; 
lean_inc(v_value_3434_);
v_isSharedCheck_3454_ = !lean_is_exclusive(v_d_3401_);
if (v_isSharedCheck_3454_ == 0)
{
lean_object* v_unused_3455_; lean_object* v_unused_3456_; 
v_unused_3455_ = lean_ctor_get(v_d_3401_, 1);
lean_dec(v_unused_3455_);
v_unused_3456_ = lean_ctor_get(v_d_3401_, 0);
lean_dec(v_unused_3456_);
v___x_3439_ = v_d_3401_;
v_isShared_3440_ = v_isSharedCheck_3454_;
goto v_resetjp_3438_;
}
else
{
lean_dec(v_d_3401_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3454_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
uint32_t v___x_3441_; uint64_t v___x_3442_; lean_object* v___x_3444_; 
v___x_3441_ = 206;
v___x_3442_ = 0ULL;
lean_inc(v_value_3434_);
if (v_isShared_3440_ == 0)
{
lean_ctor_set(v___x_3439_, 1, v___x_3436_);
v___x_3444_ = v___x_3439_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_value_3434_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v___x_3436_);
v___x_3444_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
uint32_t v___x_3445_; lean_object* v___x_3446_; 
v___x_3445_ = lasm_js_value_handle(v_value_3434_);
lean_dec(v_value_3434_);
v___x_3446_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3441_, v___x_3442_, v___x_3444_, v___x_3445_);
lean_dec_ref(v___x_3444_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; uint8_t v___x_3448_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3447_);
lean_dec_ref_known(v___x_3446_, 1);
v___x_3448_ = lean_string_validate_utf8(v_a_3447_);
if (v___x_3448_ == 0)
{
lean_object* v___x_3449_; lean_object* v___x_3450_; 
lean_dec(v_a_3447_);
v___x_3449_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_3450_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3449_);
v___y_3410_ = v_a_3433_;
v_received_3411_ = v___x_3450_;
goto v___jp_3409_;
}
else
{
lean_object* v___x_3451_; 
v___x_3451_ = lean_string_from_utf8_unchecked(v_a_3447_);
v___y_3410_ = v_a_3433_;
v_received_3411_ = v___x_3451_;
goto v___jp_3409_;
}
}
else
{
lean_object* v___x_3452_; 
lean_dec_ref_known(v___x_3446_, 1);
v___x_3452_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_3410_ = v_a_3433_;
v_received_3411_ = v___x_3452_;
goto v___jp_3409_;
}
}
}
}
}
else
{
v___y_3430_ = v_a_3433_;
goto v___jp_3429_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3484_, lean_object* v_d_3485_, lean_object* v_a_3486_){
_start:
{
lean_object* v_res_3487_; 
v_res_3487_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3484_, v_d_3485_);
lean_dec_ref(v_context_3484_);
return v_res_3487_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(lean_object* v_context_3488_, lean_object* v_bytes_3489_){
_start:
{
lean_object* v___x_3491_; 
v___x_3491_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3489_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; lean_object* v___x_3493_; 
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v___x_3493_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3488_, v_a_3492_);
return v___x_3493_;
}
else
{
lean_object* v_a_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3501_; 
v_a_3494_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3496_ = v___x_3491_;
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_a_3494_);
lean_dec(v___x_3491_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v_a_3494_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_3502_, lean_object* v_bytes_3503_, lean_object* v_a_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v_context_3502_, v_bytes_3503_);
lean_dec_ref(v_bytes_3503_);
lean_dec_ref(v_context_3502_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(lean_object* v_o_3506_, lean_object* v_key_3507_){
_start:
{
lean_object* v_k_3509_; lean_object* v___x_3510_; 
v_k_3509_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3509_, 0, v_key_3507_);
v___x_3510_ = l_Lasm_JS_Wire_encodeIO(v_k_3509_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; uint32_t v___x_3512_; uint32_t v___x_3513_; uint64_t v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v___x_3512_ = 203;
v___x_3513_ = lasm_js_value_handle(v_o_3506_);
v___x_3514_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_3515_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3516_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3516_, 0, v_o_3506_);
lean_ctor_set(v___x_3516_, 1, v___x_3515_);
v___x_3517_ = lean_unsigned_to_nat(2u);
v___x_3518_ = lean_mk_empty_array_with_capacity(v___x_3517_);
lean_inc_ref(v_k_3509_);
v___x_3519_ = lean_array_push(v___x_3518_, v_k_3509_);
v___x_3520_ = lean_array_push(v___x_3519_, v___x_3516_);
v___x_3521_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
v___x_3522_ = lasm_js_call(v___x_3512_, v___x_3513_, v___x_3514_, v_a_3511_, v___x_3521_);
lean_dec_ref_known(v___x_3521_, 1);
lean_dec(v_a_3511_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_a_3523_);
lean_dec_ref_known(v___x_3522_, 1);
v___x_3524_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3525_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3509_);
v___x_3526_ = lean_string_append(v___x_3524_, v___x_3525_);
lean_dec_ref(v___x_3525_);
v___x_3527_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v___x_3526_, v_a_3523_);
lean_dec(v_a_3523_);
lean_dec_ref(v___x_3526_);
return v___x_3527_;
}
else
{
lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3535_; 
lean_dec_ref_known(v_k_3509_, 1);
v_a_3528_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3530_ = v___x_3522_;
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3522_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3533_; 
if (v_isShared_3531_ == 0)
{
v___x_3533_ = v___x_3530_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3528_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_dec_ref_known(v_k_3509_, 1);
lean_dec(v_o_3506_);
v_a_3536_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___x_3510_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3510_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0___boxed(lean_object* v_o_3544_, lean_object* v_key_3545_, lean_object* v_a_3546_){
_start:
{
lean_object* v_res_3547_; 
v_res_3547_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_o_3544_, v_key_3545_);
return v_res_3547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(lean_object* v___f_3553_, lean_object* v_a_3554_, lean_object* v_x_3555_){
_start:
{
if (lean_obj_tag(v_x_3555_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3565_; 
lean_dec(v_a_3554_);
lean_dec_ref(v___f_3553_);
v_a_3557_ = lean_ctor_get(v_x_3555_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v_x_3555_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3559_ = v_x_3555_;
v_isShared_3560_ = v_isSharedCheck_3565_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v_x_3555_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3565_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3562_; 
if (v_isShared_3560_ == 0)
{
v___x_3562_ = v___x_3559_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3557_);
v___x_3562_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
lean_object* v___x_3563_; 
v___x_3563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3562_);
return v___x_3563_;
}
}
}
else
{
lean_object* v_a_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3588_; 
v_a_3566_ = lean_ctor_get(v_x_3555_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v_x_3555_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3568_ = v_x_3555_;
v_isShared_3569_ = v_isSharedCheck_3588_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_a_3566_);
lean_dec(v_x_3555_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3588_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
uint8_t v___x_3570_; 
v___x_3570_ = lean_unbox(v_a_3566_);
if (v___x_3570_ == 0)
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v_val_3574_; lean_object* v___x_3578_; 
v___x_3571_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_3572_ = lean_unsigned_to_nat(0u);
v___x_3578_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_a_3554_, v___x_3571_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3581_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3579_);
lean_dec_ref_known(v___x_3578_, 1);
if (v_isShared_3569_ == 0)
{
lean_ctor_set(v___x_3568_, 0, v_a_3579_);
v___x_3581_ = v___x_3568_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_a_3579_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
v_val_3574_ = v___x_3581_;
goto v___jp_3573_;
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; 
v_a_3583_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3583_);
lean_dec_ref_known(v___x_3578_, 1);
if (v_isShared_3569_ == 0)
{
lean_ctor_set_tag(v___x_3568_, 0);
lean_ctor_set(v___x_3568_, 0, v_a_3583_);
v___x_3585_ = v___x_3568_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3583_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
v_val_3574_ = v___x_3585_;
goto v___jp_3573_;
}
}
v___jp_3573_:
{
lean_object* v___x_3575_; uint8_t v___x_3576_; lean_object* v___x_3577_; 
v___x_3575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3575_, 0, v_val_3574_);
v___x_3576_ = lean_unbox(v_a_3566_);
lean_dec(v_a_3566_);
v___x_3577_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3572_, v___x_3576_, v___x_3575_, v___f_3553_);
return v___x_3577_;
}
}
else
{
lean_object* v___x_3587_; 
lean_del_object(v___x_3568_);
lean_dec(v_a_3566_);
lean_dec(v_a_3554_);
lean_dec_ref(v___f_3553_);
v___x_3587_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__2));
return v___x_3587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed(lean_object* v___f_3589_, lean_object* v_a_3590_, lean_object* v_x_3591_, lean_object* v___y_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(v___f_3589_, v_a_3590_, v_x_3591_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(lean_object* v___f_3595_, lean_object* v_x_3596_){
_start:
{
if (lean_obj_tag(v_x_3596_) == 0)
{
lean_object* v_a_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3606_; 
lean_dec_ref(v___f_3595_);
v_a_3598_ = lean_ctor_get(v_x_3596_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v_x_3596_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3600_ = v_x_3596_;
v_isShared_3601_ = v_isSharedCheck_3606_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_a_3598_);
lean_dec(v_x_3596_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3606_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_a_3598_);
v___x_3603_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
lean_object* v___x_3604_; 
v___x_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
return v___x_3604_;
}
}
}
else
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3628_; 
v_a_3607_ = lean_ctor_get(v_x_3596_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v_x_3596_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3609_ = v_x_3596_;
v_isShared_3610_ = v_isSharedCheck_3628_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v_x_3596_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3628_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___f_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; uint8_t v___x_3614_; lean_object* v_val_3616_; lean_object* v___x_3619_; 
lean_inc(v_a_3607_);
v___f_3611_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3611_, 0, v___f_3595_);
lean_closure_set(v___f_3611_, 1, v_a_3607_);
v___x_3612_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_3613_ = lean_unsigned_to_nat(0u);
v___x_3614_ = 0;
v___x_3619_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_3607_, v___x_3612_);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v_a_3620_; lean_object* v___x_3622_; 
v_a_3620_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_a_3620_);
lean_dec_ref_known(v___x_3619_, 1);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v_a_3620_);
v___x_3622_ = v___x_3609_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3620_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
v_val_3616_ = v___x_3622_;
goto v___jp_3615_;
}
}
else
{
lean_object* v_a_3624_; lean_object* v___x_3626_; 
v_a_3624_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_a_3624_);
lean_dec_ref_known(v___x_3619_, 1);
if (v_isShared_3610_ == 0)
{
lean_ctor_set_tag(v___x_3609_, 0);
lean_ctor_set(v___x_3609_, 0, v_a_3624_);
v___x_3626_ = v___x_3609_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3624_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
v_val_3616_ = v___x_3626_;
goto v___jp_3615_;
}
}
v___jp_3615_:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3617_, 0, v_val_3616_);
v___x_3618_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3613_, v___x_3614_, v___x_3617_, v___f_3611_);
return v___x_3618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___boxed(lean_object* v___f_3629_, lean_object* v_x_3630_, lean_object* v___y_3631_){
_start:
{
lean_object* v_res_3632_; 
v_res_3632_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(v___f_3629_, v_x_3630_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(lean_object* v_it_3637_){
_start:
{
lean_object* v___f_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; uint8_t v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___f_3639_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__1));
v___x_3640_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_3641_ = lean_unsigned_to_nat(0u);
v___x_3642_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3643_ = 0;
v___x_3644_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_3637_, v___x_3640_, v___x_3642_);
v___x_3645_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3641_, v___x_3643_, v___x_3644_, v___f_3639_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___boxed(lean_object* v_it_3646_, lean_object* v_a_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3646_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(lean_object* v_acc_3649_, lean_object* v_it_3650_, lean_object* v_x_3651_){
_start:
{
if (lean_obj_tag(v_x_3651_) == 0)
{
lean_object* v_a_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3661_; 
lean_dec(v_it_3650_);
lean_dec_ref(v_acc_3649_);
v_a_3653_ = lean_ctor_get(v_x_3651_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v_x_3651_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3655_ = v_x_3651_;
v_isShared_3656_ = v_isSharedCheck_3661_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_a_3653_);
lean_dec(v_x_3651_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3661_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
if (v_isShared_3656_ == 0)
{
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3653_);
v___x_3658_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
lean_object* v___x_3659_; 
v___x_3659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3658_);
return v___x_3659_;
}
}
}
else
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3673_; 
v_a_3662_ = lean_ctor_get(v_x_3651_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v_x_3651_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3664_ = v_x_3651_;
v_isShared_3665_ = v_isSharedCheck_3673_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v_x_3651_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3673_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
if (lean_obj_tag(v_a_3662_) == 0)
{
lean_object* v___x_3667_; 
lean_dec(v_it_3650_);
if (v_isShared_3665_ == 0)
{
lean_ctor_set(v___x_3664_, 0, v_acc_3649_);
v___x_3667_ = v___x_3664_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_acc_3649_);
v___x_3667_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3668_; 
v___x_3668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
return v___x_3668_;
}
}
else
{
lean_object* v_val_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
lean_del_object(v___x_3664_);
v_val_3670_ = lean_ctor_get(v_a_3662_, 0);
lean_inc(v_val_3670_);
lean_dec_ref_known(v_a_3662_, 1);
v___x_3671_ = lean_array_push(v_acc_3649_, v_val_3670_);
v___x_3672_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3650_, v___x_3671_);
return v___x_3672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed(lean_object* v_acc_3674_, lean_object* v_it_3675_, lean_object* v_x_3676_, lean_object* v___y_3677_){
_start:
{
lean_object* v_res_3678_; 
v_res_3678_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(v_acc_3674_, v_it_3675_, v_x_3676_);
return v_res_3678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(lean_object* v_it_3679_, lean_object* v_acc_3680_){
_start:
{
lean_object* v___f_3682_; lean_object* v___x_3683_; uint8_t v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
lean_inc(v_it_3679_);
v___f_3682_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3682_, 0, v_acc_3680_);
lean_closure_set(v___f_3682_, 1, v_it_3679_);
v___x_3683_ = lean_unsigned_to_nat(0u);
v___x_3684_ = 0;
v___x_3685_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3679_);
v___x_3686_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3683_, v___x_3684_, v___x_3685_, v___f_3682_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___boxed(lean_object* v_it_3687_, lean_object* v_acc_3688_, lean_object* v_a_3689_){
_start:
{
lean_object* v_res_3690_; 
v_res_3690_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3687_, v_acc_3688_);
return v_res_3690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(lean_object* v_x_3693_){
_start:
{
if (lean_obj_tag(v_x_3693_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3703_; 
v_a_3695_ = lean_ctor_get(v_x_3693_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v_x_3693_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3697_ = v_x_3693_;
v_isShared_3698_ = v_isSharedCheck_3703_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_a_3695_);
lean_dec(v_x_3693_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3703_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3700_; 
if (v_isShared_3698_ == 0)
{
v___x_3700_ = v___x_3697_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3695_);
v___x_3700_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
lean_object* v___x_3701_; 
v___x_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3700_);
return v___x_3701_;
}
}
}
else
{
lean_object* v_a_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v_a_3704_ = lean_ctor_get(v_x_3693_, 0);
lean_inc(v_a_3704_);
lean_dec_ref_known(v_x_3693_, 1);
v___x_3705_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___closed__0));
v___x_3706_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_a_3704_, v___x_3705_);
return v___x_3706_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___boxed(lean_object* v_x_3707_, lean_object* v___y_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(v_x_3707_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values(lean_object* v_self_3711_){
_start:
{
lean_object* v___f_3713_; lean_object* v___x_3714_; uint8_t v___x_3715_; lean_object* v_val_3717_; lean_object* v___x_3720_; 
v___f_3713_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___closed__0));
v___x_3714_ = lean_unsigned_to_nat(0u);
v___x_3715_ = 0;
v___x_3720_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3711_);
if (lean_obj_tag(v___x_3720_) == 0)
{
lean_object* v_a_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
v_a_3721_ = lean_ctor_get(v___x_3720_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3720_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v___x_3720_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_a_3721_);
lean_dec(v___x_3720_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
lean_ctor_set_tag(v___x_3723_, 1);
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
v_val_3717_ = v___x_3726_;
goto v___jp_3716_;
}
}
}
else
{
lean_object* v_a_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3736_; 
v_a_3729_ = lean_ctor_get(v___x_3720_, 0);
v_isSharedCheck_3736_ = !lean_is_exclusive(v___x_3720_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3731_ = v___x_3720_;
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_a_3729_);
lean_dec(v___x_3720_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v___x_3734_; 
if (v_isShared_3732_ == 0)
{
lean_ctor_set_tag(v___x_3731_, 0);
v___x_3734_ = v___x_3731_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v_a_3729_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
v_val_3717_ = v___x_3734_;
goto v___jp_3716_;
}
}
}
v___jp_3716_:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3718_, 0, v_val_3717_);
v___x_3719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3714_, v___x_3715_, v___x_3718_, v___f_3713_);
return v___x_3719_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___boxed(lean_object* v_self_3737_, lean_object* v_a_3738_){
_start:
{
lean_object* v_res_3739_; 
v_res_3739_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values(v_self_3737_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close(lean_object* v_self_3740_){
_start:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3742_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3743_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3744_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3740_, v___x_3742_, v___x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close___boxed(lean_object* v_self_3745_, lean_object* v_a_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l_Lasm_JS_Deno_FsWatcher_close(v_self_3745_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator(lean_object* v_self_3748_){
_start:
{
lean_object* v___x_3750_; 
v___x_3750_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3750_) == 0)
{
lean_object* v_a_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v_a_3751_ = lean_ctor_get(v___x_3750_, 0);
lean_inc(v_a_3751_);
lean_dec_ref_known(v___x_3750_, 1);
v___x_3752_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3753_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3751_, v___x_3752_);
if (lean_obj_tag(v___x_3753_) == 0)
{
lean_object* v_a_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v_a_3754_ = lean_ctor_get(v___x_3753_, 0);
lean_inc(v_a_3754_);
lean_dec_ref_known(v___x_3753_, 1);
v___x_3755_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3756_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3754_, v___x_3755_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3758_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3757_);
lean_dec_ref_known(v___x_3756_, 1);
lean_inc(v_self_3748_);
v___x_3758_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3748_, v_a_3757_);
if (lean_obj_tag(v___x_3758_) == 0)
{
lean_object* v_a_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v_a_3759_ = lean_ctor_get(v___x_3758_, 0);
lean_inc(v_a_3759_);
lean_dec_ref_known(v___x_3758_, 1);
v___x_3760_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3761_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3762_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3762_, 0, v_self_3748_);
lean_ctor_set(v___x_3762_, 1, v___x_3761_);
v___x_3763_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3759_, v___x_3760_, v___x_3762_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3771_; 
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3766_ = v___x_3763_;
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___x_3763_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v___x_3769_; 
if (v_isShared_3767_ == 0)
{
v___x_3769_ = v___x_3766_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v_a_3764_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
else
{
lean_object* v_a_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3779_; 
v_a_3772_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3779_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3779_ == 0)
{
v___x_3774_ = v___x_3763_;
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_a_3772_);
lean_dec(v___x_3763_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3777_; 
if (v_isShared_3775_ == 0)
{
v___x_3777_ = v___x_3774_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v_a_3772_);
v___x_3777_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
return v___x_3777_;
}
}
}
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3787_; 
lean_dec(v_self_3748_);
v_a_3780_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3782_ = v___x_3758_;
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3758_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___x_3785_; 
if (v_isShared_3783_ == 0)
{
v___x_3785_ = v___x_3782_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_a_3780_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
}
else
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
lean_dec(v_self_3748_);
v_a_3788_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3756_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3756_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_dec(v_self_3748_);
v_a_3796_ = lean_ctor_get(v___x_3753_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3753_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3753_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
else
{
lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3811_; 
lean_dec(v_self_3748_);
v_a_3804_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3806_ = v___x_3750_;
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3750_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
if (v_isShared_3807_ == 0)
{
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3804_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator___boxed(lean_object* v_self_3812_, lean_object* v_a_3813_){
_start:
{
lean_object* v_res_3814_; 
v_res_3814_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_3812_);
return v_res_3814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(lean_object* v_x_3815_){
_start:
{
if (lean_obj_tag(v_x_3815_) == 0)
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3825_; 
v_a_3817_ = lean_ctor_get(v_x_3815_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v_x_3815_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3819_ = v_x_3815_;
v_isShared_3820_ = v_isSharedCheck_3825_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v_x_3815_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3825_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
lean_object* v___x_3823_; 
v___x_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3822_);
return v___x_3823_;
}
}
}
else
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3835_; 
v_a_3826_ = lean_ctor_get(v_x_3815_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v_x_3815_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3828_ = v_x_3815_;
v_isShared_3829_ = v_isSharedCheck_3835_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v_x_3815_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3835_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3830_; lean_object* v___x_3832_; 
v___x_3830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3830_, 0, v_a_3826_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 0, v___x_3830_);
v___x_3832_ = v___x_3828_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3830_);
v___x_3832_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
lean_object* v___x_3833_; 
v___x_3833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3832_);
return v___x_3833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0___boxed(lean_object* v_x_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(v_x_3836_);
return v_res_3838_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3839_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0));
v___x_3840_ = lean_string_utf8_byte_size(v___x_3839_);
return v___x_3840_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3841_; lean_object* v___x_3842_; uint8_t v___x_3843_; 
v___x_3841_ = lean_unsigned_to_nat(0u);
v___x_3842_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_3843_ = lean_nat_dec_eq(v___x_3842_, v___x_3841_);
return v___x_3843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3847_, lean_object* v_key_3848_){
_start:
{
if (lean_obj_tag(v_d_3847_) == 8)
{
lean_object* v___x_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3895_; 
v___x_3849_ = l_Lasm_JS_Data_field(v_d_3847_, v_key_3848_);
v_isSharedCheck_3895_ = !lean_is_exclusive(v_d_3847_);
if (v_isSharedCheck_3895_ == 0)
{
lean_object* v_unused_3896_; 
v_unused_3896_ = lean_ctor_get(v_d_3847_, 0);
lean_dec(v_unused_3896_);
v___x_3851_ = v_d_3847_;
v_isShared_3852_ = v_isSharedCheck_3895_;
goto v_resetjp_3850_;
}
else
{
lean_dec(v_d_3847_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3895_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
if (lean_obj_tag(v___x_3849_) == 4)
{
lean_object* v_s_3873_; lean_object* v___x_3874_; uint8_t v___x_3875_; 
v_s_3873_ = lean_ctor_get(v___x_3849_, 0);
lean_inc_ref(v_s_3873_);
v___x_3874_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0));
v___x_3875_ = lean_string_dec_eq(v_s_3873_, v___x_3874_);
if (v___x_3875_ == 0)
{
lean_object* v___x_3876_; uint8_t v___x_3877_; 
v___x_3876_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2));
v___x_3877_ = lean_string_dec_eq(v_s_3873_, v___x_3876_);
if (v___x_3877_ == 0)
{
lean_object* v___x_3878_; uint8_t v___x_3879_; 
v___x_3878_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_3879_ = lean_string_dec_eq(v_s_3873_, v___x_3878_);
if (v___x_3879_ == 0)
{
lean_object* v___x_3880_; uint8_t v___x_3881_; 
v___x_3880_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6));
v___x_3881_ = lean_string_dec_eq(v_s_3873_, v___x_3880_);
if (v___x_3881_ == 0)
{
lean_object* v___x_3882_; uint8_t v___x_3883_; 
v___x_3882_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8));
v___x_3883_ = lean_string_dec_eq(v_s_3873_, v___x_3882_);
if (v___x_3883_ == 0)
{
lean_object* v___x_3884_; uint8_t v___x_3885_; 
v___x_3884_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10));
v___x_3885_ = lean_string_dec_eq(v_s_3873_, v___x_3884_);
if (v___x_3885_ == 0)
{
lean_object* v___x_3886_; uint8_t v___x_3887_; 
v___x_3886_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12));
v___x_3887_ = lean_string_dec_eq(v_s_3873_, v___x_3886_);
lean_dec_ref(v_s_3873_);
if (v___x_3887_ == 0)
{
goto v___jp_3853_;
}
else
{
lean_object* v___x_3888_; 
lean_dec_ref_known(v___x_3849_, 1);
lean_del_object(v___x_3851_);
v___x_3888_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2));
return v___x_3888_;
}
}
else
{
lean_object* v___x_3889_; 
lean_dec_ref_known(v___x_3849_, 1);
lean_dec_ref(v_s_3873_);
lean_del_object(v___x_3851_);
v___x_3889_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3));
return v___x_3889_;
}
}
else
{
lean_object* v___x_3890_; 
lean_dec_ref_known(v___x_3849_, 1);
lean_dec_ref(v_s_3873_);
lean_del_object(v___x_3851_);
v___x_3890_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4));
return v___x_3890_;
}
}
else
{
lean_object* v___x_3891_; 
lean_dec_ref_known(v___x_3849_, 1);
lean_dec_ref(v_s_3873_);
lean_del_object(v___x_3851_);
v___x_3891_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5));
return v___x_3891_;
}
}
else
{
lean_object* v___x_3892_; 
lean_dec_ref_known(v___x_3849_, 1);
lean_dec_ref(v_s_3873_);
lean_del_object(v___x_3851_);
v___x_3892_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6));
return v___x_3892_;
}
}
else
{
lean_object* v___x_3893_; 
lean_dec_ref_known(v___x_3849_, 1);
lean_dec_ref(v_s_3873_);
lean_del_object(v___x_3851_);
v___x_3893_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7));
return v___x_3893_;
}
}
else
{
lean_object* v___x_3894_; 
lean_dec_ref_known(v___x_3849_, 1);
lean_dec_ref(v_s_3873_);
lean_del_object(v___x_3851_);
v___x_3894_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8));
return v___x_3894_;
}
}
else
{
goto v___jp_3853_;
}
v___jp_3853_:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; uint8_t v___x_3864_; 
v___x_3854_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3855_ = lean_string_append(v___x_3854_, v_key_3848_);
v___x_3856_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3857_ = lean_string_append(v___x_3855_, v___x_3856_);
v___x_3858_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1));
v___x_3859_ = lean_string_append(v___x_3857_, v___x_3858_);
v___x_3860_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3861_ = lean_string_append(v___x_3859_, v___x_3860_);
v___x_3862_ = l_Lasm_JS_Data_describe(v___x_3849_);
v___x_3863_ = lean_string_append(v___x_3861_, v___x_3862_);
lean_dec_ref(v___x_3862_);
v___x_3864_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3864_ == 0)
{
lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3868_; 
v___x_3865_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3866_ = lean_string_append(v___x_3863_, v___x_3865_);
if (v_isShared_3852_ == 0)
{
lean_ctor_set_tag(v___x_3851_, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3866_);
v___x_3868_ = v___x_3851_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v___x_3866_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
else
{
lean_object* v___x_3871_; 
if (v_isShared_3852_ == 0)
{
lean_ctor_set_tag(v___x_3851_, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3863_);
v___x_3871_ = v___x_3851_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v___x_3863_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
}
else
{
lean_object* v___x_3897_; 
lean_dec(v_d_3847_);
v___x_3897_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_3897_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3898_, lean_object* v_key_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_3898_, v_key_3899_);
lean_dec_ref(v_key_3899_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3906_, lean_object* v_key_3907_){
_start:
{
if (lean_obj_tag(v_d_3906_) == 8)
{
lean_object* v___x_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3952_; 
v___x_3908_ = l_Lasm_JS_Data_field(v_d_3906_, v_key_3907_);
v_isSharedCheck_3952_ = !lean_is_exclusive(v_d_3906_);
if (v_isSharedCheck_3952_ == 0)
{
lean_object* v_unused_3953_; 
v_unused_3953_ = lean_ctor_get(v_d_3906_, 0);
lean_dec(v_unused_3953_);
v___x_3910_ = v_d_3906_;
v_isShared_3911_ = v_isSharedCheck_3952_;
goto v_resetjp_3909_;
}
else
{
lean_dec(v_d_3906_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3952_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v_a_3913_; 
if (lean_obj_tag(v___x_3908_) == 7)
{
lean_object* v_items_3938_; size_t v_sz_3939_; size_t v___x_3940_; lean_object* v___x_3941_; 
v_items_3938_ = lean_ctor_get(v___x_3908_, 0);
lean_inc_ref(v_items_3938_);
v_sz_3939_ = lean_array_size(v_items_3938_);
v___x_3940_ = ((size_t)0ULL);
v___x_3941_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_3939_, v___x_3940_, v_items_3938_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; uint8_t v___x_3946_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3942_);
lean_dec_ref_known(v___x_3941_, 1);
v___x_3943_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3944_ = lean_string_utf8_byte_size(v_a_3942_);
v___x_3945_ = lean_unsigned_to_nat(0u);
v___x_3946_ = lean_nat_dec_eq(v___x_3944_, v___x_3945_);
if (v___x_3946_ == 0)
{
lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v___x_3947_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_3948_ = lean_string_append(v___x_3947_, v_a_3942_);
lean_dec(v_a_3942_);
v___x_3949_ = lean_string_append(v___x_3943_, v___x_3948_);
lean_dec_ref(v___x_3948_);
v_a_3913_ = v___x_3949_;
goto v___jp_3912_;
}
else
{
lean_dec(v_a_3942_);
v_a_3913_ = v___x_3943_;
goto v___jp_3912_;
}
}
else
{
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3950_; 
v_a_3950_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3950_);
lean_dec_ref_known(v___x_3941_, 1);
v_a_3913_ = v_a_3950_;
goto v___jp_3912_;
}
else
{
lean_dec_ref_known(v___x_3908_, 1);
lean_del_object(v___x_3910_);
return v___x_3941_;
}
}
}
else
{
lean_object* v___x_3951_; 
v___x_3951_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_a_3913_ = v___x_3951_;
goto v___jp_3912_;
}
v___jp_3912_:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; uint8_t v___x_3926_; 
v___x_3914_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3915_ = lean_string_append(v___x_3914_, v_key_3907_);
v___x_3916_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3917_ = lean_string_append(v___x_3915_, v___x_3916_);
v___x_3918_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0));
v___x_3919_ = lean_string_append(v___x_3917_, v___x_3918_);
v___x_3920_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3921_ = lean_string_append(v___x_3919_, v___x_3920_);
v___x_3922_ = l_Lasm_JS_Data_describe(v___x_3908_);
v___x_3923_ = lean_string_append(v___x_3921_, v___x_3922_);
lean_dec_ref(v___x_3922_);
v___x_3924_ = lean_string_utf8_byte_size(v_a_3913_);
v___x_3925_ = lean_unsigned_to_nat(0u);
v___x_3926_ = lean_nat_dec_eq(v___x_3924_, v___x_3925_);
if (v___x_3926_ == 0)
{
lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3933_; 
v___x_3927_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3928_ = lean_string_append(v___x_3927_, v_a_3913_);
lean_dec_ref(v_a_3913_);
v___x_3929_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3930_ = lean_string_append(v___x_3928_, v___x_3929_);
v___x_3931_ = lean_string_append(v___x_3923_, v___x_3930_);
lean_dec_ref(v___x_3930_);
if (v_isShared_3911_ == 0)
{
lean_ctor_set_tag(v___x_3910_, 0);
lean_ctor_set(v___x_3910_, 0, v___x_3931_);
v___x_3933_ = v___x_3910_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v___x_3931_);
v___x_3933_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
return v___x_3933_;
}
}
else
{
lean_object* v___x_3936_; 
lean_dec_ref(v_a_3913_);
if (v_isShared_3911_ == 0)
{
lean_ctor_set_tag(v___x_3910_, 0);
lean_ctor_set(v___x_3910_, 0, v___x_3923_);
v___x_3936_ = v___x_3910_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v___x_3923_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
}
}
else
{
lean_object* v___x_3954_; 
lean_dec(v_d_3906_);
v___x_3954_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3));
return v___x_3954_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3955_, lean_object* v_key_3956_){
_start:
{
lean_object* v_res_3957_; 
v_res_3957_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_3955_, v_key_3956_);
lean_dec_ref(v_key_3956_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_3967_, lean_object* v_key_3968_){
_start:
{
if (lean_obj_tag(v_d_3967_) == 8)
{
lean_object* v___x_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3999_; 
v___x_3971_ = l_Lasm_JS_Data_field(v_d_3967_, v_key_3968_);
v_isSharedCheck_3999_ = !lean_is_exclusive(v_d_3967_);
if (v_isSharedCheck_3999_ == 0)
{
lean_object* v_unused_4000_; 
v_unused_4000_ = lean_ctor_get(v_d_3967_, 0);
lean_dec(v_unused_4000_);
v___x_3973_ = v_d_3967_;
v_isShared_3974_ = v_isSharedCheck_3999_;
goto v_resetjp_3972_;
}
else
{
lean_dec(v_d_3967_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3999_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
switch(lean_obj_tag(v___x_3971_))
{
case 1:
{
lean_del_object(v___x_3973_);
goto v___jp_3969_;
}
case 0:
{
lean_del_object(v___x_3973_);
goto v___jp_3969_;
}
default: 
{
if (lean_obj_tag(v___x_3971_) == 4)
{
lean_object* v_s_3995_; lean_object* v___x_3996_; uint8_t v___x_3997_; 
v_s_3995_ = lean_ctor_get(v___x_3971_, 0);
lean_inc_ref(v_s_3995_);
v___x_3996_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0));
v___x_3997_ = lean_string_dec_eq(v_s_3995_, v___x_3996_);
lean_dec_ref(v_s_3995_);
if (v___x_3997_ == 0)
{
goto v___jp_3975_;
}
else
{
lean_object* v___x_3998_; 
lean_dec_ref_known(v___x_3971_, 1);
lean_del_object(v___x_3973_);
v___x_3998_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
return v___x_3998_;
}
}
else
{
goto v___jp_3975_;
}
}
}
v___jp_3975_:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; uint8_t v___x_3986_; 
v___x_3976_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3977_ = lean_string_append(v___x_3976_, v_key_3968_);
v___x_3978_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3979_ = lean_string_append(v___x_3977_, v___x_3978_);
v___x_3980_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_3981_ = lean_string_append(v___x_3979_, v___x_3980_);
v___x_3982_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3983_ = lean_string_append(v___x_3981_, v___x_3982_);
v___x_3984_ = l_Lasm_JS_Data_describe(v___x_3971_);
v___x_3985_ = lean_string_append(v___x_3983_, v___x_3984_);
lean_dec_ref(v___x_3984_);
v___x_3986_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3986_ == 0)
{
lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3990_; 
v___x_3987_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3988_ = lean_string_append(v___x_3985_, v___x_3987_);
if (v_isShared_3974_ == 0)
{
lean_ctor_set_tag(v___x_3973_, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3988_);
v___x_3990_ = v___x_3973_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v___x_3988_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
else
{
lean_object* v___x_3993_; 
if (v_isShared_3974_ == 0)
{
lean_ctor_set_tag(v___x_3973_, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3985_);
v___x_3993_ = v___x_3973_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v___x_3985_);
v___x_3993_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
return v___x_3993_;
}
}
}
}
}
else
{
lean_object* v___x_4001_; 
lean_dec(v_d_3967_);
v___x_4001_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4));
return v___x_4001_;
}
v___jp_3969_:
{
lean_object* v___x_3970_; 
v___x_3970_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
return v___x_3970_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_4002_, lean_object* v_key_4003_){
_start:
{
lean_object* v_res_4004_; 
v_res_4004_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_4002_, v_key_4003_);
lean_dec_ref(v_key_4003_);
return v_res_4004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_4005_, lean_object* v_d_4006_){
_start:
{
lean_object* v___y_4009_; lean_object* v___y_4010_; lean_object* v___y_4015_; lean_object* v_received_4016_; lean_object* v___y_4035_; lean_object* v_a_4038_; lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4062_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0));
lean_inc(v_d_4006_);
v___x_4063_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_4006_, v___x_4062_);
if (lean_obj_tag(v___x_4063_) == 0)
{
lean_object* v_a_4064_; 
v_a_4064_ = lean_ctor_get(v___x_4063_, 0);
lean_inc(v_a_4064_);
lean_dec_ref_known(v___x_4063_, 1);
v_a_4038_ = v_a_4064_;
goto v___jp_4037_;
}
else
{
lean_object* v_a_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; 
v_a_4065_ = lean_ctor_get(v___x_4063_, 0);
lean_inc(v_a_4065_);
lean_dec_ref_known(v___x_4063_, 1);
v___x_4066_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1));
lean_inc(v_d_4006_);
v___x_4067_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_4006_, v___x_4066_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_object* v_a_4068_; 
lean_dec(v_a_4065_);
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4068_);
lean_dec_ref_known(v___x_4067_, 1);
v_a_4038_ = v_a_4068_;
goto v___jp_4037_;
}
else
{
lean_object* v_a_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
v_a_4069_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4069_);
lean_dec_ref_known(v___x_4067_, 1);
v___x_4070_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2));
lean_inc(v_d_4006_);
v___x_4071_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_4006_, v___x_4070_);
if (lean_obj_tag(v___x_4071_) == 0)
{
lean_object* v_a_4072_; 
lean_dec(v_a_4069_);
lean_dec(v_a_4065_);
v_a_4072_ = lean_ctor_get(v___x_4071_, 0);
lean_inc(v_a_4072_);
lean_dec_ref_known(v___x_4071_, 1);
v_a_4038_ = v_a_4072_;
goto v___jp_4037_;
}
else
{
lean_object* v_a_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4082_; 
lean_dec(v_d_4006_);
v_a_4073_ = lean_ctor_get(v___x_4071_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v___x_4071_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4075_ = v___x_4071_;
v_isShared_4076_ = v_isSharedCheck_4082_;
goto v_resetjp_4074_;
}
else
{
lean_inc(v_a_4073_);
lean_dec(v___x_4071_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4082_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
lean_object* v___x_4077_; uint8_t v___x_4078_; lean_object* v___x_4080_; 
v___x_4077_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4077_, 0, v_a_4069_);
lean_ctor_set(v___x_4077_, 1, v_a_4073_);
v___x_4078_ = lean_unbox(v_a_4065_);
lean_dec(v_a_4065_);
lean_ctor_set_uint8(v___x_4077_, sizeof(void*)*2, v___x_4078_);
if (v_isShared_4076_ == 0)
{
lean_ctor_set_tag(v___x_4075_, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4077_);
v___x_4080_ = v___x_4075_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v___x_4077_);
v___x_4080_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
return v___x_4080_;
}
}
}
}
}
v___jp_4008_:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
v___x_4011_ = lean_string_append(v___y_4009_, v___y_4010_);
lean_dec_ref(v___y_4010_);
v___x_4012_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4012_, 0, v___x_4011_);
v___x_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4012_);
return v___x_4013_;
}
v___jp_4014_:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; uint8_t v___x_4028_; 
v___x_4017_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4018_ = lean_string_append(v___x_4017_, v_context_4005_);
v___x_4019_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_4020_ = lean_string_append(v___x_4018_, v___x_4019_);
v___x_4021_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___closed__3));
v___x_4022_ = lean_string_append(v___x_4020_, v___x_4021_);
v___x_4023_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_4024_ = lean_string_append(v___x_4022_, v___x_4023_);
v___x_4025_ = lean_string_append(v___x_4024_, v_received_4016_);
lean_dec_ref(v_received_4016_);
v___x_4026_ = lean_string_utf8_byte_size(v___y_4015_);
v___x_4027_ = lean_unsigned_to_nat(0u);
v___x_4028_ = lean_nat_dec_eq(v___x_4026_, v___x_4027_);
if (v___x_4028_ == 0)
{
lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
v___x_4029_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_4030_ = lean_string_append(v___x_4029_, v___y_4015_);
lean_dec_ref(v___y_4015_);
v___x_4031_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_4032_ = lean_string_append(v___x_4030_, v___x_4031_);
v___y_4009_ = v___x_4025_;
v___y_4010_ = v___x_4032_;
goto v___jp_4008_;
}
else
{
lean_object* v___x_4033_; 
lean_dec_ref(v___y_4015_);
v___x_4033_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_4009_ = v___x_4025_;
v___y_4010_ = v___x_4033_;
goto v___jp_4008_;
}
}
v___jp_4034_:
{
lean_object* v___x_4036_; 
v___x_4036_ = l_Lasm_JS_Data_describe(v_d_4006_);
v___y_4015_ = v___y_4035_;
v_received_4016_ = v___x_4036_;
goto v___jp_4014_;
}
v___jp_4037_:
{
if (lean_obj_tag(v_d_4006_) == 9)
{
lean_object* v_value_4039_; lean_object* v_description_4040_; lean_object* v___x_4041_; uint8_t v___x_4042_; 
v_value_4039_ = lean_ctor_get(v_d_4006_, 0);
v_description_4040_ = lean_ctor_get(v_d_4006_, 1);
v___x_4041_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4042_ = lean_string_dec_eq(v_description_4040_, v___x_4041_);
if (v___x_4042_ == 0)
{
v___y_4035_ = v_a_4038_;
goto v___jp_4034_;
}
else
{
lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4059_; 
lean_inc(v_value_4039_);
v_isSharedCheck_4059_ = !lean_is_exclusive(v_d_4006_);
if (v_isSharedCheck_4059_ == 0)
{
lean_object* v_unused_4060_; lean_object* v_unused_4061_; 
v_unused_4060_ = lean_ctor_get(v_d_4006_, 1);
lean_dec(v_unused_4060_);
v_unused_4061_ = lean_ctor_get(v_d_4006_, 0);
lean_dec(v_unused_4061_);
v___x_4044_ = v_d_4006_;
v_isShared_4045_ = v_isSharedCheck_4059_;
goto v_resetjp_4043_;
}
else
{
lean_dec(v_d_4006_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4059_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
uint32_t v___x_4046_; uint64_t v___x_4047_; lean_object* v___x_4049_; 
v___x_4046_ = 206;
v___x_4047_ = 0ULL;
lean_inc(v_value_4039_);
if (v_isShared_4045_ == 0)
{
lean_ctor_set(v___x_4044_, 1, v___x_4041_);
v___x_4049_ = v___x_4044_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4058_; 
v_reuseFailAlloc_4058_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4058_, 0, v_value_4039_);
lean_ctor_set(v_reuseFailAlloc_4058_, 1, v___x_4041_);
v___x_4049_ = v_reuseFailAlloc_4058_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
uint32_t v___x_4050_; lean_object* v___x_4051_; 
v___x_4050_ = lasm_js_value_handle(v_value_4039_);
lean_dec(v_value_4039_);
v___x_4051_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4046_, v___x_4047_, v___x_4049_, v___x_4050_);
lean_dec_ref(v___x_4049_);
if (lean_obj_tag(v___x_4051_) == 0)
{
lean_object* v_a_4052_; uint8_t v___x_4053_; 
v_a_4052_ = lean_ctor_get(v___x_4051_, 0);
lean_inc(v_a_4052_);
lean_dec_ref_known(v___x_4051_, 1);
v___x_4053_ = lean_string_validate_utf8(v_a_4052_);
if (v___x_4053_ == 0)
{
lean_object* v___x_4054_; lean_object* v___x_4055_; 
lean_dec(v_a_4052_);
v___x_4054_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_4055_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4054_);
v___y_4015_ = v_a_4038_;
v_received_4016_ = v___x_4055_;
goto v___jp_4014_;
}
else
{
lean_object* v___x_4056_; 
v___x_4056_ = lean_string_from_utf8_unchecked(v_a_4052_);
v___y_4015_ = v_a_4038_;
v_received_4016_ = v___x_4056_;
goto v___jp_4014_;
}
}
else
{
lean_object* v___x_4057_; 
lean_dec_ref_known(v___x_4051_, 1);
v___x_4057_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_4015_ = v_a_4038_;
v_received_4016_ = v___x_4057_;
goto v___jp_4014_;
}
}
}
}
}
else
{
v___y_4035_ = v_a_4038_;
goto v___jp_4034_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4083_, lean_object* v_d_4084_, lean_object* v_a_4085_){
_start:
{
lean_object* v_res_4086_; 
v_res_4086_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4083_, v_d_4084_);
lean_dec_ref(v_context_4083_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(lean_object* v_context_4087_, lean_object* v_bytes_4088_){
_start:
{
lean_object* v___x_4090_; 
v___x_4090_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4088_);
if (lean_obj_tag(v___x_4090_) == 0)
{
lean_object* v_a_4091_; lean_object* v___x_4092_; 
v_a_4091_ = lean_ctor_get(v___x_4090_, 0);
lean_inc(v_a_4091_);
lean_dec_ref_known(v___x_4090_, 1);
v___x_4092_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4087_, v_a_4091_);
return v___x_4092_;
}
else
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4100_; 
v_a_4093_ = lean_ctor_get(v___x_4090_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4090_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4095_ = v___x_4090_;
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4090_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4093_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_4101_, lean_object* v_bytes_4102_, lean_object* v_a_4103_){
_start:
{
lean_object* v_res_4104_; 
v_res_4104_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v_context_4101_, v_bytes_4102_);
lean_dec_ref(v_bytes_4102_);
lean_dec_ref(v_context_4101_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(lean_object* v_o_4105_, lean_object* v_key_4106_){
_start:
{
lean_object* v_k_4108_; lean_object* v___x_4109_; 
v_k_4108_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4108_, 0, v_key_4106_);
v___x_4109_ = l_Lasm_JS_Wire_encodeIO(v_k_4108_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; uint32_t v___x_4111_; uint32_t v___x_4112_; uint64_t v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_a_4110_);
lean_dec_ref_known(v___x_4109_, 1);
v___x_4111_ = 203;
v___x_4112_ = lasm_js_value_handle(v_o_4105_);
v___x_4113_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_4114_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4115_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4115_, 0, v_o_4105_);
lean_ctor_set(v___x_4115_, 1, v___x_4114_);
v___x_4116_ = lean_unsigned_to_nat(2u);
v___x_4117_ = lean_mk_empty_array_with_capacity(v___x_4116_);
lean_inc_ref(v_k_4108_);
v___x_4118_ = lean_array_push(v___x_4117_, v_k_4108_);
v___x_4119_ = lean_array_push(v___x_4118_, v___x_4115_);
v___x_4120_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4119_);
v___x_4121_ = lasm_js_call(v___x_4111_, v___x_4112_, v___x_4113_, v_a_4110_, v___x_4120_);
lean_dec_ref_known(v___x_4120_, 1);
lean_dec(v_a_4110_);
if (lean_obj_tag(v___x_4121_) == 0)
{
lean_object* v_a_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; 
v_a_4122_ = lean_ctor_get(v___x_4121_, 0);
lean_inc(v_a_4122_);
lean_dec_ref_known(v___x_4121_, 1);
v___x_4123_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_4124_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4108_);
v___x_4125_ = lean_string_append(v___x_4123_, v___x_4124_);
lean_dec_ref(v___x_4124_);
v___x_4126_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v___x_4125_, v_a_4122_);
lean_dec(v_a_4122_);
lean_dec_ref(v___x_4125_);
return v___x_4126_;
}
else
{
lean_object* v_a_4127_; lean_object* v___x_4129_; uint8_t v_isShared_4130_; uint8_t v_isSharedCheck_4134_; 
lean_dec_ref_known(v_k_4108_, 1);
v_a_4127_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4134_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4134_ == 0)
{
v___x_4129_ = v___x_4121_;
v_isShared_4130_ = v_isSharedCheck_4134_;
goto v_resetjp_4128_;
}
else
{
lean_inc(v_a_4127_);
lean_dec(v___x_4121_);
v___x_4129_ = lean_box(0);
v_isShared_4130_ = v_isSharedCheck_4134_;
goto v_resetjp_4128_;
}
v_resetjp_4128_:
{
lean_object* v___x_4132_; 
if (v_isShared_4130_ == 0)
{
v___x_4132_ = v___x_4129_;
goto v_reusejp_4131_;
}
else
{
lean_object* v_reuseFailAlloc_4133_; 
v_reuseFailAlloc_4133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4133_, 0, v_a_4127_);
v___x_4132_ = v_reuseFailAlloc_4133_;
goto v_reusejp_4131_;
}
v_reusejp_4131_:
{
return v___x_4132_;
}
}
}
}
else
{
lean_object* v_a_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4142_; 
lean_dec_ref_known(v_k_4108_, 1);
lean_dec(v_o_4105_);
v_a_4135_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4142_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4137_ = v___x_4109_;
v_isShared_4138_ = v_isSharedCheck_4142_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_a_4135_);
lean_dec(v___x_4109_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4142_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v___x_4140_; 
if (v_isShared_4138_ == 0)
{
v___x_4140_ = v___x_4137_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v_a_4135_);
v___x_4140_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
return v___x_4140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0___boxed(lean_object* v_o_4143_, lean_object* v_key_4144_, lean_object* v_a_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_o_4143_, v_key_4144_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(lean_object* v___f_4151_, lean_object* v_a_4152_, lean_object* v_x_4153_){
_start:
{
if (lean_obj_tag(v_x_4153_) == 0)
{
lean_object* v_a_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4163_; 
lean_dec(v_a_4152_);
lean_dec_ref(v___f_4151_);
v_a_4155_ = lean_ctor_get(v_x_4153_, 0);
v_isSharedCheck_4163_ = !lean_is_exclusive(v_x_4153_);
if (v_isSharedCheck_4163_ == 0)
{
v___x_4157_ = v_x_4153_;
v_isShared_4158_ = v_isSharedCheck_4163_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_a_4155_);
lean_dec(v_x_4153_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4163_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___x_4160_; 
if (v_isShared_4158_ == 0)
{
v___x_4160_ = v___x_4157_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_a_4155_);
v___x_4160_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
lean_object* v___x_4161_; 
v___x_4161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4161_, 0, v___x_4160_);
return v___x_4161_;
}
}
}
else
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4186_; 
v_a_4164_ = lean_ctor_get(v_x_4153_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v_x_4153_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4166_ = v_x_4153_;
v_isShared_4167_ = v_isSharedCheck_4186_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v_x_4153_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4186_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
uint8_t v___x_4168_; 
v___x_4168_ = lean_unbox(v_a_4164_);
if (v___x_4168_ == 0)
{
lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v_val_4172_; lean_object* v___x_4176_; 
v___x_4169_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_4170_ = lean_unsigned_to_nat(0u);
v___x_4176_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_a_4152_, v___x_4169_);
if (lean_obj_tag(v___x_4176_) == 0)
{
lean_object* v_a_4177_; lean_object* v___x_4179_; 
v_a_4177_ = lean_ctor_get(v___x_4176_, 0);
lean_inc(v_a_4177_);
lean_dec_ref_known(v___x_4176_, 1);
if (v_isShared_4167_ == 0)
{
lean_ctor_set(v___x_4166_, 0, v_a_4177_);
v___x_4179_ = v___x_4166_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v_a_4177_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
v_val_4172_ = v___x_4179_;
goto v___jp_4171_;
}
}
else
{
lean_object* v_a_4181_; lean_object* v___x_4183_; 
v_a_4181_ = lean_ctor_get(v___x_4176_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v___x_4176_, 1);
if (v_isShared_4167_ == 0)
{
lean_ctor_set_tag(v___x_4166_, 0);
lean_ctor_set(v___x_4166_, 0, v_a_4181_);
v___x_4183_ = v___x_4166_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_a_4181_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
v_val_4172_ = v___x_4183_;
goto v___jp_4171_;
}
}
v___jp_4171_:
{
lean_object* v___x_4173_; uint8_t v___x_4174_; lean_object* v___x_4175_; 
v___x_4173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4173_, 0, v_val_4172_);
v___x_4174_ = lean_unbox(v_a_4164_);
lean_dec(v_a_4164_);
v___x_4175_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4170_, v___x_4174_, v___x_4173_, v___f_4151_);
return v___x_4175_;
}
}
else
{
lean_object* v___x_4185_; 
lean_del_object(v___x_4166_);
lean_dec(v_a_4164_);
lean_dec(v_a_4152_);
lean_dec_ref(v___f_4151_);
v___x_4185_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__1));
return v___x_4185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed(lean_object* v___f_4187_, lean_object* v_a_4188_, lean_object* v_x_4189_, lean_object* v___y_4190_){
_start:
{
lean_object* v_res_4191_; 
v_res_4191_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(v___f_4187_, v_a_4188_, v_x_4189_);
return v_res_4191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(lean_object* v___f_4192_, lean_object* v_x_4193_){
_start:
{
if (lean_obj_tag(v_x_4193_) == 0)
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4203_; 
lean_dec_ref(v___f_4192_);
v_a_4195_ = lean_ctor_get(v_x_4193_, 0);
v_isSharedCheck_4203_ = !lean_is_exclusive(v_x_4193_);
if (v_isSharedCheck_4203_ == 0)
{
v___x_4197_ = v_x_4193_;
v_isShared_4198_ = v_isSharedCheck_4203_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v_x_4193_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4203_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
lean_object* v___x_4201_; 
v___x_4201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4201_, 0, v___x_4200_);
return v___x_4201_;
}
}
}
else
{
lean_object* v_a_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4225_; 
v_a_4204_ = lean_ctor_get(v_x_4193_, 0);
v_isSharedCheck_4225_ = !lean_is_exclusive(v_x_4193_);
if (v_isSharedCheck_4225_ == 0)
{
v___x_4206_ = v_x_4193_;
v_isShared_4207_ = v_isSharedCheck_4225_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_a_4204_);
lean_dec(v_x_4193_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4225_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
lean_object* v___f_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; uint8_t v___x_4211_; lean_object* v_val_4213_; lean_object* v___x_4216_; 
lean_inc(v_a_4204_);
v___f_4208_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4208_, 0, v___f_4192_);
lean_closure_set(v___f_4208_, 1, v_a_4204_);
v___x_4209_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_4210_ = lean_unsigned_to_nat(0u);
v___x_4211_ = 0;
v___x_4216_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_4204_, v___x_4209_);
if (lean_obj_tag(v___x_4216_) == 0)
{
lean_object* v_a_4217_; lean_object* v___x_4219_; 
v_a_4217_ = lean_ctor_get(v___x_4216_, 0);
lean_inc(v_a_4217_);
lean_dec_ref_known(v___x_4216_, 1);
if (v_isShared_4207_ == 0)
{
lean_ctor_set(v___x_4206_, 0, v_a_4217_);
v___x_4219_ = v___x_4206_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_a_4217_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
v_val_4213_ = v___x_4219_;
goto v___jp_4212_;
}
}
else
{
lean_object* v_a_4221_; lean_object* v___x_4223_; 
v_a_4221_ = lean_ctor_get(v___x_4216_, 0);
lean_inc(v_a_4221_);
lean_dec_ref_known(v___x_4216_, 1);
if (v_isShared_4207_ == 0)
{
lean_ctor_set_tag(v___x_4206_, 0);
lean_ctor_set(v___x_4206_, 0, v_a_4221_);
v___x_4223_ = v___x_4206_;
goto v_reusejp_4222_;
}
else
{
lean_object* v_reuseFailAlloc_4224_; 
v_reuseFailAlloc_4224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4224_, 0, v_a_4221_);
v___x_4223_ = v_reuseFailAlloc_4224_;
goto v_reusejp_4222_;
}
v_reusejp_4222_:
{
v_val_4213_ = v___x_4223_;
goto v___jp_4212_;
}
}
v___jp_4212_:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; 
v___x_4214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4214_, 0, v_val_4213_);
v___x_4215_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4210_, v___x_4211_, v___x_4214_, v___f_4208_);
return v___x_4215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2___boxed(lean_object* v___f_4226_, lean_object* v_x_4227_, lean_object* v___y_4228_){
_start:
{
lean_object* v_res_4229_; 
v_res_4229_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(v___f_4226_, v_x_4227_);
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next(lean_object* v_it_4233_){
_start:
{
lean_object* v___f_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; uint8_t v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; 
v___f_4235_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__1));
v___x_4236_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_4237_ = lean_unsigned_to_nat(0u);
v___x_4238_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_4239_ = 0;
v___x_4240_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_4233_, v___x_4236_, v___x_4238_);
v___x_4241_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4237_, v___x_4239_, v___x_4240_, v___f_4235_);
return v___x_4241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___boxed(lean_object* v_it_4242_, lean_object* v_a_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4242_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(lean_object* v_acc_4245_, lean_object* v_it_4246_, lean_object* v_x_4247_){
_start:
{
if (lean_obj_tag(v_x_4247_) == 0)
{
lean_object* v_a_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4257_; 
lean_dec(v_it_4246_);
lean_dec_ref(v_acc_4245_);
v_a_4249_ = lean_ctor_get(v_x_4247_, 0);
v_isSharedCheck_4257_ = !lean_is_exclusive(v_x_4247_);
if (v_isSharedCheck_4257_ == 0)
{
v___x_4251_ = v_x_4247_;
v_isShared_4252_ = v_isSharedCheck_4257_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_a_4249_);
lean_dec(v_x_4247_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4257_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
lean_object* v___x_4254_; 
if (v_isShared_4252_ == 0)
{
v___x_4254_ = v___x_4251_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4256_; 
v_reuseFailAlloc_4256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4256_, 0, v_a_4249_);
v___x_4254_ = v_reuseFailAlloc_4256_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
lean_object* v___x_4255_; 
v___x_4255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4255_, 0, v___x_4254_);
return v___x_4255_;
}
}
}
else
{
lean_object* v_a_4258_; lean_object* v___x_4260_; uint8_t v_isShared_4261_; uint8_t v_isSharedCheck_4269_; 
v_a_4258_ = lean_ctor_get(v_x_4247_, 0);
v_isSharedCheck_4269_ = !lean_is_exclusive(v_x_4247_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4260_ = v_x_4247_;
v_isShared_4261_ = v_isSharedCheck_4269_;
goto v_resetjp_4259_;
}
else
{
lean_inc(v_a_4258_);
lean_dec(v_x_4247_);
v___x_4260_ = lean_box(0);
v_isShared_4261_ = v_isSharedCheck_4269_;
goto v_resetjp_4259_;
}
v_resetjp_4259_:
{
if (lean_obj_tag(v_a_4258_) == 0)
{
lean_object* v___x_4263_; 
lean_dec(v_it_4246_);
if (v_isShared_4261_ == 0)
{
lean_ctor_set(v___x_4260_, 0, v_acc_4245_);
v___x_4263_ = v___x_4260_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4265_; 
v_reuseFailAlloc_4265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4265_, 0, v_acc_4245_);
v___x_4263_ = v_reuseFailAlloc_4265_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
lean_object* v___x_4264_; 
v___x_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4264_, 0, v___x_4263_);
return v___x_4264_;
}
}
else
{
lean_object* v_val_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; 
lean_del_object(v___x_4260_);
v_val_4266_ = lean_ctor_get(v_a_4258_, 0);
lean_inc(v_val_4266_);
lean_dec_ref_known(v_a_4258_, 1);
v___x_4267_ = lean_array_push(v_acc_4245_, v_val_4266_);
v___x_4268_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4246_, v___x_4267_);
return v___x_4268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed(lean_object* v_acc_4270_, lean_object* v_it_4271_, lean_object* v_x_4272_, lean_object* v___y_4273_){
_start:
{
lean_object* v_res_4274_; 
v_res_4274_ = l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(v_acc_4270_, v_it_4271_, v_x_4272_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop(lean_object* v_it_4275_, lean_object* v_acc_4276_){
_start:
{
lean_object* v___f_4278_; lean_object* v___x_4279_; uint8_t v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; 
lean_inc(v_it_4275_);
v___f_4278_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4278_, 0, v_acc_4276_);
lean_closure_set(v___f_4278_, 1, v_it_4275_);
v___x_4279_ = lean_unsigned_to_nat(0u);
v___x_4280_ = 0;
v___x_4281_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4275_);
v___x_4282_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4279_, v___x_4280_, v___x_4281_, v___f_4278_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___boxed(lean_object* v_it_4283_, lean_object* v_acc_4284_, lean_object* v_a_4285_){
_start:
{
lean_object* v_res_4286_; 
v_res_4286_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4283_, v_acc_4284_);
return v_res_4286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0(lean_object* v_x_4289_){
_start:
{
if (lean_obj_tag(v_x_4289_) == 0)
{
lean_object* v_a_4291_; lean_object* v___x_4293_; uint8_t v_isShared_4294_; uint8_t v_isSharedCheck_4299_; 
v_a_4291_ = lean_ctor_get(v_x_4289_, 0);
v_isSharedCheck_4299_ = !lean_is_exclusive(v_x_4289_);
if (v_isSharedCheck_4299_ == 0)
{
v___x_4293_ = v_x_4289_;
v_isShared_4294_ = v_isSharedCheck_4299_;
goto v_resetjp_4292_;
}
else
{
lean_inc(v_a_4291_);
lean_dec(v_x_4289_);
v___x_4293_ = lean_box(0);
v_isShared_4294_ = v_isSharedCheck_4299_;
goto v_resetjp_4292_;
}
v_resetjp_4292_:
{
lean_object* v___x_4296_; 
if (v_isShared_4294_ == 0)
{
v___x_4296_ = v___x_4293_;
goto v_reusejp_4295_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v_a_4291_);
v___x_4296_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4295_;
}
v_reusejp_4295_:
{
lean_object* v___x_4297_; 
v___x_4297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
return v___x_4297_;
}
}
}
else
{
lean_object* v_a_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; 
v_a_4300_ = lean_ctor_get(v_x_4289_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v_x_4289_, 1);
v___x_4301_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___lam__0___closed__0));
v___x_4302_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_a_4300_, v___x_4301_);
return v___x_4302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0___boxed(lean_object* v_x_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v_res_4305_; 
v_res_4305_ = l_Lasm_JS_Deno_FsWatcher_values___lam__0(v_x_4303_);
return v_res_4305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values(lean_object* v_self_4307_){
_start:
{
lean_object* v___f_4309_; lean_object* v___x_4310_; uint8_t v___x_4311_; lean_object* v_val_4313_; lean_object* v___x_4316_; 
v___f_4309_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___closed__0));
v___x_4310_ = lean_unsigned_to_nat(0u);
v___x_4311_ = 0;
v___x_4316_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_4307_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4324_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4319_ = v___x_4316_;
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4316_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4322_; 
if (v_isShared_4320_ == 0)
{
lean_ctor_set_tag(v___x_4319_, 1);
v___x_4322_ = v___x_4319_;
goto v_reusejp_4321_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v_a_4317_);
v___x_4322_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4321_;
}
v_reusejp_4321_:
{
v_val_4313_ = v___x_4322_;
goto v___jp_4312_;
}
}
}
else
{
lean_object* v_a_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4332_; 
v_a_4325_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4332_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4332_ == 0)
{
v___x_4327_ = v___x_4316_;
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_a_4325_);
lean_dec(v___x_4316_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
lean_ctor_set_tag(v___x_4327_, 0);
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4331_; 
v_reuseFailAlloc_4331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4331_, 0, v_a_4325_);
v___x_4330_ = v_reuseFailAlloc_4331_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
v_val_4313_ = v___x_4330_;
goto v___jp_4312_;
}
}
}
v___jp_4312_:
{
lean_object* v___x_4314_; lean_object* v___x_4315_; 
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v_val_4313_);
v___x_4315_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4310_, v___x_4311_, v___x_4314_, v___f_4309_);
return v___x_4315_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___boxed(lean_object* v_self_4333_, lean_object* v_a_4334_){
_start:
{
lean_object* v_res_4335_; 
v_res_4335_ = l_Lasm_JS_Deno_FsWatcher_values(v_self_4333_);
return v_res_4335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(lean_object* v_b_4336_, lean_object* v_args_4337_){
_start:
{
uint8_t v_construct_4339_; lean_object* v___x_4340_; uint32_t v___x_4341_; uint64_t v___x_4342_; uint64_t v___y_4344_; 
v_construct_4339_ = lean_ctor_get_uint8(v_b_4336_, sizeof(void*)*4);
v___x_4340_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4336_);
v___x_4341_ = 214;
v___x_4342_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4339_ == 0)
{
uint64_t v___x_4352_; 
v___x_4352_ = 0ULL;
v___y_4344_ = v___x_4352_;
goto v___jp_4343_;
}
else
{
uint64_t v___x_4353_; 
v___x_4353_ = 4ULL;
v___y_4344_ = v___x_4353_;
goto v___jp_4343_;
}
v___jp_4343_:
{
uint64_t v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4345_ = lean_uint64_lor(v___x_4342_, v___y_4344_);
v___x_4346_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4336_, v_args_4337_);
v___x_4347_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4348_ = lean_string_append(v___x_4347_, v___x_4340_);
lean_dec_ref(v___x_4340_);
v___x_4349_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4350_ = lean_string_append(v___x_4348_, v___x_4349_);
v___x_4351_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_4341_, v___x_4345_, v___x_4346_, v___x_4350_);
return v___x_4351_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0___boxed(lean_object* v_b_4354_, lean_object* v_args_4355_, lean_object* v_a_4356_){
_start:
{
lean_object* v_res_4357_; 
v_res_4357_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v_b_4354_, v_args_4355_);
lean_dec_ref(v_b_4354_);
return v_res_4357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link(lean_object* v_oldpath_4367_, lean_object* v_newpath_4368_){
_start:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; 
v___x_4370_ = lean_unsigned_to_nat(2u);
v___x_4371_ = ((lean_object*)(l_Lasm_JS_Deno_link___closed__3));
v___x_4372_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4372_, 0, v_oldpath_4367_);
v___x_4373_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4373_, 0, v_newpath_4368_);
v___x_4374_ = lean_mk_empty_array_with_capacity(v___x_4370_);
v___x_4375_ = lean_array_push(v___x_4374_, v___x_4372_);
v___x_4376_ = lean_array_push(v___x_4375_, v___x_4373_);
v___x_4377_ = l_Lasm_JS_Web_Support_args(v___x_4376_);
v___x_4378_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4371_, v___x_4377_);
return v___x_4378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link___boxed(lean_object* v_oldpath_4379_, lean_object* v_newpath_4380_, lean_object* v_a_4381_){
_start:
{
lean_object* v_res_4382_; 
v_res_4382_ = l_Lasm_JS_Deno_link(v_oldpath_4379_, v_newpath_4380_);
return v_res_4382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync(lean_object* v_oldpath_4391_, lean_object* v_newpath_4392_){
_start:
{
uint8_t v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4394_ = 0;
v___x_4395_ = lean_unsigned_to_nat(2u);
v___x_4396_ = ((lean_object*)(l_Lasm_JS_Deno_linkSync___closed__2));
v___x_4397_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4397_, 0, v_oldpath_4391_);
v___x_4398_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4398_, 0, v_newpath_4392_);
v___x_4399_ = lean_mk_empty_array_with_capacity(v___x_4395_);
v___x_4400_ = lean_array_push(v___x_4399_, v___x_4397_);
v___x_4401_ = lean_array_push(v___x_4400_, v___x_4398_);
v___x_4402_ = l_Lasm_JS_Web_Support_args(v___x_4401_);
v___x_4403_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4396_, v___x_4402_, v___x_4394_);
return v___x_4403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync___boxed(lean_object* v_oldpath_4404_, lean_object* v_newpath_4405_, lean_object* v_a_4406_){
_start:
{
lean_object* v_res_4407_; 
v_res_4407_ = l_Lasm_JS_Deno_linkSync(v_oldpath_4404_, v_newpath_4405_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0(lean_object* v_x_4408_){
_start:
{
if (lean_obj_tag(v_x_4408_) == 0)
{
lean_object* v_a_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4418_; 
v_a_4410_ = lean_ctor_get(v_x_4408_, 0);
v_isSharedCheck_4418_ = !lean_is_exclusive(v_x_4408_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4412_ = v_x_4408_;
v_isShared_4413_ = v_isSharedCheck_4418_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_a_4410_);
lean_dec(v_x_4408_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4418_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4415_; 
if (v_isShared_4413_ == 0)
{
v___x_4415_ = v___x_4412_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_a_4410_);
v___x_4415_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
lean_object* v___x_4416_; 
v___x_4416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4416_, 0, v___x_4415_);
return v___x_4416_;
}
}
}
else
{
lean_object* v_a_4419_; lean_object* v___x_4421_; uint8_t v_isShared_4422_; uint8_t v_isSharedCheck_4427_; 
v_a_4419_ = lean_ctor_get(v_x_4408_, 0);
v_isSharedCheck_4427_ = !lean_is_exclusive(v_x_4408_);
if (v_isSharedCheck_4427_ == 0)
{
v___x_4421_ = v_x_4408_;
v_isShared_4422_ = v_isSharedCheck_4427_;
goto v_resetjp_4420_;
}
else
{
lean_inc(v_a_4419_);
lean_dec(v_x_4408_);
v___x_4421_ = lean_box(0);
v_isShared_4422_ = v_isSharedCheck_4427_;
goto v_resetjp_4420_;
}
v_resetjp_4420_:
{
lean_object* v___x_4424_; 
if (v_isShared_4422_ == 0)
{
v___x_4424_ = v___x_4421_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4426_; 
v_reuseFailAlloc_4426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4426_, 0, v_a_4419_);
v___x_4424_ = v_reuseFailAlloc_4426_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
lean_object* v___x_4425_; 
v___x_4425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4424_);
return v___x_4425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0___boxed(lean_object* v_x_4428_, lean_object* v___y_4429_){
_start:
{
lean_object* v_res_4430_; 
v_res_4430_ = l_Lasm_JS_Deno_open___lam__0(v_x_4428_);
return v_res_4430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(lean_object* v_x_4431_){
_start:
{
if (lean_obj_tag(v_x_4431_) == 0)
{
lean_object* v___x_4432_; 
v___x_4432_ = lean_box(0);
return v___x_4432_;
}
else
{
lean_object* v_val_4433_; lean_object* v_read_4434_; lean_object* v_write_4435_; lean_object* v_append_4436_; lean_object* v_truncate_4437_; lean_object* v_create_4438_; lean_object* v_createNew_4439_; lean_object* v_mode_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; 
v_val_4433_ = lean_ctor_get(v_x_4431_, 0);
v_read_4434_ = lean_ctor_get(v_val_4433_, 0);
v_write_4435_ = lean_ctor_get(v_val_4433_, 1);
v_append_4436_ = lean_ctor_get(v_val_4433_, 2);
v_truncate_4437_ = lean_ctor_get(v_val_4433_, 3);
v_create_4438_ = lean_ctor_get(v_val_4433_, 4);
v_createNew_4439_ = lean_ctor_get(v_val_4433_, 5);
v_mode_4440_ = lean_ctor_get(v_val_4433_, 6);
v___x_4441_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0));
v___x_4442_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_read_4434_);
v___x_4443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4441_);
lean_ctor_set(v___x_4443_, 1, v___x_4442_);
v___x_4444_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1));
v___x_4445_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_write_4435_);
v___x_4446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4444_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
v___x_4447_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_4448_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_4436_);
v___x_4449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4449_, 0, v___x_4447_);
lean_ctor_set(v___x_4449_, 1, v___x_4448_);
v___x_4450_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_4451_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_truncate_4437_);
v___x_4452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4452_, 0, v___x_4450_);
lean_ctor_set(v___x_4452_, 1, v___x_4451_);
v___x_4453_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_4454_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_4438_);
v___x_4455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4455_, 0, v___x_4453_);
lean_ctor_set(v___x_4455_, 1, v___x_4454_);
v___x_4456_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_4457_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_4439_);
v___x_4458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4458_, 0, v___x_4456_);
lean_ctor_set(v___x_4458_, 1, v___x_4457_);
v___x_4459_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4460_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4440_);
v___x_4461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4461_, 0, v___x_4459_);
lean_ctor_set(v___x_4461_, 1, v___x_4460_);
v___x_4462_ = lean_unsigned_to_nat(7u);
v___x_4463_ = lean_mk_empty_array_with_capacity(v___x_4462_);
v___x_4464_ = lean_array_push(v___x_4463_, v___x_4443_);
v___x_4465_ = lean_array_push(v___x_4464_, v___x_4446_);
v___x_4466_ = lean_array_push(v___x_4465_, v___x_4449_);
v___x_4467_ = lean_array_push(v___x_4466_, v___x_4452_);
v___x_4468_ = lean_array_push(v___x_4467_, v___x_4455_);
v___x_4469_ = lean_array_push(v___x_4468_, v___x_4458_);
v___x_4470_ = lean_array_push(v___x_4469_, v___x_4461_);
v___x_4471_ = l_Lasm_JS_Web_Support_fields(v___x_4470_);
lean_dec_ref(v___x_4470_);
return v___x_4471_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0___boxed(lean_object* v_x_4472_){
_start:
{
lean_object* v_res_4473_; 
v_res_4473_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_x_4472_);
lean_dec(v_x_4472_);
return v_res_4473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(lean_object* v_b_4474_, lean_object* v_args_4475_){
_start:
{
uint8_t v_construct_4477_; lean_object* v___x_4478_; uint32_t v___x_4479_; uint64_t v___x_4480_; uint64_t v___y_4482_; 
v_construct_4477_ = lean_ctor_get_uint8(v_b_4474_, sizeof(void*)*4);
v___x_4478_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4474_);
v___x_4479_ = 214;
v___x_4480_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
if (v_construct_4477_ == 0)
{
uint64_t v___x_4490_; 
v___x_4490_ = 0ULL;
v___y_4482_ = v___x_4490_;
goto v___jp_4481_;
}
else
{
uint64_t v___x_4491_; 
v___x_4491_ = 4ULL;
v___y_4482_ = v___x_4491_;
goto v___jp_4481_;
}
v___jp_4481_:
{
uint64_t v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; 
v___x_4483_ = lean_uint64_lor(v___x_4480_, v___y_4482_);
v___x_4484_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4474_, v_args_4475_);
v___x_4485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4486_ = lean_string_append(v___x_4485_, v___x_4478_);
v___x_4487_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4488_ = lean_string_append(v___x_4486_, v___x_4487_);
v___x_4489_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_4478_, v___x_4479_, v___x_4483_, v___x_4484_, v___x_4488_);
return v___x_4489_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1___boxed(lean_object* v_b_4492_, lean_object* v_args_4493_, lean_object* v_a_4494_){
_start:
{
lean_object* v_res_4495_; 
v_res_4495_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v_b_4492_, v_args_4493_);
lean_dec_ref(v_b_4492_);
return v_res_4495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open(lean_object* v_path_4505_, lean_object* v_options_4506_){
_start:
{
lean_object* v___f_4508_; uint8_t v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___y_4513_; 
v___f_4508_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4509_ = 0;
v___x_4510_ = lean_unsigned_to_nat(2u);
v___x_4511_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__3));
if (lean_obj_tag(v_path_4505_) == 0)
{
lean_object* v_value_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4529_; 
v_value_4522_ = lean_ctor_get(v_path_4505_, 0);
v_isSharedCheck_4529_ = !lean_is_exclusive(v_path_4505_);
if (v_isSharedCheck_4529_ == 0)
{
v___x_4524_ = v_path_4505_;
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_value_4522_);
lean_dec(v_path_4505_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4527_; 
if (v_isShared_4525_ == 0)
{
lean_ctor_set_tag(v___x_4524_, 4);
v___x_4527_ = v___x_4524_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v_value_4522_);
v___x_4527_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
v___y_4513_ = v___x_4527_;
goto v___jp_4512_;
}
}
}
else
{
lean_object* v_value_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v_value_4530_ = lean_ctor_get(v_path_4505_, 0);
lean_inc(v_value_4530_);
lean_dec_ref_known(v_path_4505_, 1);
v___x_4531_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4532_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4532_, 0, v_value_4530_);
lean_ctor_set(v___x_4532_, 1, v___x_4531_);
v___y_4513_ = v___x_4532_;
goto v___jp_4512_;
}
v___jp_4512_:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; 
v___x_4514_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4506_);
v___x_4515_ = lean_mk_empty_array_with_capacity(v___x_4510_);
v___x_4516_ = lean_array_push(v___x_4515_, v___y_4513_);
v___x_4517_ = lean_array_push(v___x_4516_, v___x_4514_);
v___x_4518_ = l_Lasm_JS_Web_Support_args(v___x_4517_);
v___x_4519_ = lean_unsigned_to_nat(0u);
v___x_4520_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4511_, v___x_4518_);
v___x_4521_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4519_, v___x_4509_, v___x_4520_, v___f_4508_);
return v___x_4521_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___boxed(lean_object* v_path_4533_, lean_object* v_options_4534_, lean_object* v_a_4535_){
_start:
{
lean_object* v_res_4536_; 
v_res_4536_ = l_Lasm_JS_Deno_open(v_path_4533_, v_options_4534_);
lean_dec(v_options_4534_);
return v_res_4536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync(lean_object* v_path_4545_, lean_object* v_options_4546_){
_start:
{
uint8_t v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___y_4552_; 
v___x_4548_ = 0;
v___x_4549_ = lean_unsigned_to_nat(2u);
v___x_4550_ = ((lean_object*)(l_Lasm_JS_Deno_openSync___closed__2));
if (lean_obj_tag(v_path_4545_) == 0)
{
lean_object* v_value_4575_; lean_object* v___x_4577_; uint8_t v_isShared_4578_; uint8_t v_isSharedCheck_4582_; 
v_value_4575_ = lean_ctor_get(v_path_4545_, 0);
v_isSharedCheck_4582_ = !lean_is_exclusive(v_path_4545_);
if (v_isSharedCheck_4582_ == 0)
{
v___x_4577_ = v_path_4545_;
v_isShared_4578_ = v_isSharedCheck_4582_;
goto v_resetjp_4576_;
}
else
{
lean_inc(v_value_4575_);
lean_dec(v_path_4545_);
v___x_4577_ = lean_box(0);
v_isShared_4578_ = v_isSharedCheck_4582_;
goto v_resetjp_4576_;
}
v_resetjp_4576_:
{
lean_object* v___x_4580_; 
if (v_isShared_4578_ == 0)
{
lean_ctor_set_tag(v___x_4577_, 4);
v___x_4580_ = v___x_4577_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v_value_4575_);
v___x_4580_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
v___y_4552_ = v___x_4580_;
goto v___jp_4551_;
}
}
}
else
{
lean_object* v_value_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; 
v_value_4583_ = lean_ctor_get(v_path_4545_, 0);
lean_inc(v_value_4583_);
lean_dec_ref_known(v_path_4545_, 1);
v___x_4584_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4585_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4585_, 0, v_value_4583_);
lean_ctor_set(v___x_4585_, 1, v___x_4584_);
v___y_4552_ = v___x_4585_;
goto v___jp_4551_;
}
v___jp_4551_:
{
lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; 
v___x_4553_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4546_);
v___x_4554_ = lean_mk_empty_array_with_capacity(v___x_4549_);
v___x_4555_ = lean_array_push(v___x_4554_, v___y_4552_);
v___x_4556_ = lean_array_push(v___x_4555_, v___x_4553_);
v___x_4557_ = l_Lasm_JS_Web_Support_args(v___x_4556_);
v___x_4558_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4550_, v___x_4557_, v___x_4548_);
if (lean_obj_tag(v___x_4558_) == 0)
{
lean_object* v_a_4559_; lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4566_; 
v_a_4559_ = lean_ctor_get(v___x_4558_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v___x_4558_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4561_ = v___x_4558_;
v_isShared_4562_ = v_isSharedCheck_4566_;
goto v_resetjp_4560_;
}
else
{
lean_inc(v_a_4559_);
lean_dec(v___x_4558_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4566_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v___x_4564_; 
if (v_isShared_4562_ == 0)
{
v___x_4564_ = v___x_4561_;
goto v_reusejp_4563_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v_a_4559_);
v___x_4564_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4563_;
}
v_reusejp_4563_:
{
return v___x_4564_;
}
}
}
else
{
lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4574_; 
v_a_4567_ = lean_ctor_get(v___x_4558_, 0);
v_isSharedCheck_4574_ = !lean_is_exclusive(v___x_4558_);
if (v_isSharedCheck_4574_ == 0)
{
v___x_4569_ = v___x_4558_;
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v___x_4558_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v_a_4567_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync___boxed(lean_object* v_path_4586_, lean_object* v_options_4587_, lean_object* v_a_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l_Lasm_JS_Deno_openSync(v_path_4586_, v_options_4587_);
lean_dec(v_options_4587_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create(lean_object* v_path_4598_){
_start:
{
lean_object* v___f_4600_; uint8_t v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___y_4605_; 
v___f_4600_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4601_ = 0;
v___x_4602_ = lean_unsigned_to_nat(1u);
v___x_4603_ = ((lean_object*)(l_Lasm_JS_Deno_create___closed__2));
if (lean_obj_tag(v_path_4598_) == 0)
{
lean_object* v_value_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4619_; 
v_value_4612_ = lean_ctor_get(v_path_4598_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v_path_4598_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4614_ = v_path_4598_;
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_value_4612_);
lean_dec(v_path_4598_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
lean_object* v___x_4617_; 
if (v_isShared_4615_ == 0)
{
lean_ctor_set_tag(v___x_4614_, 4);
v___x_4617_ = v___x_4614_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v_value_4612_);
v___x_4617_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
v___y_4605_ = v___x_4617_;
goto v___jp_4604_;
}
}
}
else
{
lean_object* v_value_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; 
v_value_4620_ = lean_ctor_get(v_path_4598_, 0);
lean_inc(v_value_4620_);
lean_dec_ref_known(v_path_4598_, 1);
v___x_4621_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4622_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4622_, 0, v_value_4620_);
lean_ctor_set(v___x_4622_, 1, v___x_4621_);
v___y_4605_ = v___x_4622_;
goto v___jp_4604_;
}
v___jp_4604_:
{
lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4606_ = lean_mk_empty_array_with_capacity(v___x_4602_);
v___x_4607_ = lean_array_push(v___x_4606_, v___y_4605_);
v___x_4608_ = l_Lasm_JS_Web_Support_args(v___x_4607_);
v___x_4609_ = lean_unsigned_to_nat(0u);
v___x_4610_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4603_, v___x_4608_);
v___x_4611_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4609_, v___x_4601_, v___x_4610_, v___f_4600_);
return v___x_4611_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create___boxed(lean_object* v_path_4623_, lean_object* v_a_4624_){
_start:
{
lean_object* v_res_4625_; 
v_res_4625_ = l_Lasm_JS_Deno_create(v_path_4623_);
return v_res_4625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync(lean_object* v_path_4634_){
_start:
{
uint8_t v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___y_4640_; 
v___x_4636_ = 0;
v___x_4637_ = lean_unsigned_to_nat(1u);
v___x_4638_ = ((lean_object*)(l_Lasm_JS_Deno_createSync___closed__2));
if (lean_obj_tag(v_path_4634_) == 0)
{
lean_object* v_value_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4668_; 
v_value_4661_ = lean_ctor_get(v_path_4634_, 0);
v_isSharedCheck_4668_ = !lean_is_exclusive(v_path_4634_);
if (v_isSharedCheck_4668_ == 0)
{
v___x_4663_ = v_path_4634_;
v_isShared_4664_ = v_isSharedCheck_4668_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_value_4661_);
lean_dec(v_path_4634_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4668_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v___x_4666_; 
if (v_isShared_4664_ == 0)
{
lean_ctor_set_tag(v___x_4663_, 4);
v___x_4666_ = v___x_4663_;
goto v_reusejp_4665_;
}
else
{
lean_object* v_reuseFailAlloc_4667_; 
v_reuseFailAlloc_4667_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4667_, 0, v_value_4661_);
v___x_4666_ = v_reuseFailAlloc_4667_;
goto v_reusejp_4665_;
}
v_reusejp_4665_:
{
v___y_4640_ = v___x_4666_;
goto v___jp_4639_;
}
}
}
else
{
lean_object* v_value_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v_value_4669_ = lean_ctor_get(v_path_4634_, 0);
lean_inc(v_value_4669_);
lean_dec_ref_known(v_path_4634_, 1);
v___x_4670_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4671_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4671_, 0, v_value_4669_);
lean_ctor_set(v___x_4671_, 1, v___x_4670_);
v___y_4640_ = v___x_4671_;
goto v___jp_4639_;
}
v___jp_4639_:
{
lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; 
v___x_4641_ = lean_mk_empty_array_with_capacity(v___x_4637_);
v___x_4642_ = lean_array_push(v___x_4641_, v___y_4640_);
v___x_4643_ = l_Lasm_JS_Web_Support_args(v___x_4642_);
v___x_4644_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4638_, v___x_4643_, v___x_4636_);
if (lean_obj_tag(v___x_4644_) == 0)
{
lean_object* v_a_4645_; lean_object* v___x_4647_; uint8_t v_isShared_4648_; uint8_t v_isSharedCheck_4652_; 
v_a_4645_ = lean_ctor_get(v___x_4644_, 0);
v_isSharedCheck_4652_ = !lean_is_exclusive(v___x_4644_);
if (v_isSharedCheck_4652_ == 0)
{
v___x_4647_ = v___x_4644_;
v_isShared_4648_ = v_isSharedCheck_4652_;
goto v_resetjp_4646_;
}
else
{
lean_inc(v_a_4645_);
lean_dec(v___x_4644_);
v___x_4647_ = lean_box(0);
v_isShared_4648_ = v_isSharedCheck_4652_;
goto v_resetjp_4646_;
}
v_resetjp_4646_:
{
lean_object* v___x_4650_; 
if (v_isShared_4648_ == 0)
{
v___x_4650_ = v___x_4647_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v_a_4645_);
v___x_4650_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
return v___x_4650_;
}
}
}
else
{
lean_object* v_a_4653_; lean_object* v___x_4655_; uint8_t v_isShared_4656_; uint8_t v_isSharedCheck_4660_; 
v_a_4653_ = lean_ctor_get(v___x_4644_, 0);
v_isSharedCheck_4660_ = !lean_is_exclusive(v___x_4644_);
if (v_isSharedCheck_4660_ == 0)
{
v___x_4655_ = v___x_4644_;
v_isShared_4656_ = v_isSharedCheck_4660_;
goto v_resetjp_4654_;
}
else
{
lean_inc(v_a_4653_);
lean_dec(v___x_4644_);
v___x_4655_ = lean_box(0);
v_isShared_4656_ = v_isSharedCheck_4660_;
goto v_resetjp_4654_;
}
v_resetjp_4654_:
{
lean_object* v___x_4658_; 
if (v_isShared_4656_ == 0)
{
v___x_4658_ = v___x_4655_;
goto v_reusejp_4657_;
}
else
{
lean_object* v_reuseFailAlloc_4659_; 
v_reuseFailAlloc_4659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4659_, 0, v_a_4653_);
v___x_4658_ = v_reuseFailAlloc_4659_;
goto v_reusejp_4657_;
}
v_reusejp_4657_:
{
return v___x_4658_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync___boxed(lean_object* v_path_4672_, lean_object* v_a_4673_){
_start:
{
lean_object* v_res_4674_; 
v_res_4674_ = l_Lasm_JS_Deno_createSync(v_path_4672_);
return v_res_4674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(lean_object* v_x_4675_){
_start:
{
if (lean_obj_tag(v_x_4675_) == 0)
{
lean_object* v___x_4676_; 
v___x_4676_ = lean_box(0);
return v___x_4676_;
}
else
{
lean_object* v_val_4677_; lean_object* v_recursive_4678_; lean_object* v_mode_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4696_; 
v_val_4677_ = lean_ctor_get(v_x_4675_, 0);
lean_inc(v_val_4677_);
lean_dec_ref_known(v_x_4675_, 1);
v_recursive_4678_ = lean_ctor_get(v_val_4677_, 0);
v_mode_4679_ = lean_ctor_get(v_val_4677_, 1);
v_isSharedCheck_4696_ = !lean_is_exclusive(v_val_4677_);
if (v_isSharedCheck_4696_ == 0)
{
v___x_4681_ = v_val_4677_;
v_isShared_4682_ = v_isSharedCheck_4696_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_mode_4679_);
lean_inc(v_recursive_4678_);
lean_dec(v_val_4677_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4696_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4686_; 
v___x_4683_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_4684_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_4678_);
lean_dec(v_recursive_4678_);
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 1, v___x_4684_);
lean_ctor_set(v___x_4681_, 0, v___x_4683_);
v___x_4686_ = v___x_4681_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4695_; 
v_reuseFailAlloc_4695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4695_, 0, v___x_4683_);
lean_ctor_set(v_reuseFailAlloc_4695_, 1, v___x_4684_);
v___x_4686_ = v_reuseFailAlloc_4695_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4687_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4688_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4679_);
lean_dec(v_mode_4679_);
v___x_4689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4689_, 0, v___x_4687_);
lean_ctor_set(v___x_4689_, 1, v___x_4688_);
v___x_4690_ = lean_unsigned_to_nat(2u);
v___x_4691_ = lean_mk_empty_array_with_capacity(v___x_4690_);
v___x_4692_ = lean_array_push(v___x_4691_, v___x_4686_);
v___x_4693_ = lean_array_push(v___x_4692_, v___x_4689_);
v___x_4694_ = l_Lasm_JS_Web_Support_fields(v___x_4693_);
lean_dec_ref(v___x_4693_);
return v___x_4694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir(lean_object* v_path_4705_, lean_object* v_options_4706_){
_start:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___y_4711_; 
v___x_4708_ = lean_unsigned_to_nat(2u);
v___x_4709_ = ((lean_object*)(l_Lasm_JS_Deno_mkdir___closed__2));
if (lean_obj_tag(v_path_4705_) == 0)
{
lean_object* v_value_4718_; lean_object* v___x_4720_; uint8_t v_isShared_4721_; uint8_t v_isSharedCheck_4725_; 
v_value_4718_ = lean_ctor_get(v_path_4705_, 0);
v_isSharedCheck_4725_ = !lean_is_exclusive(v_path_4705_);
if (v_isSharedCheck_4725_ == 0)
{
v___x_4720_ = v_path_4705_;
v_isShared_4721_ = v_isSharedCheck_4725_;
goto v_resetjp_4719_;
}
else
{
lean_inc(v_value_4718_);
lean_dec(v_path_4705_);
v___x_4720_ = lean_box(0);
v_isShared_4721_ = v_isSharedCheck_4725_;
goto v_resetjp_4719_;
}
v_resetjp_4719_:
{
lean_object* v___x_4723_; 
if (v_isShared_4721_ == 0)
{
lean_ctor_set_tag(v___x_4720_, 4);
v___x_4723_ = v___x_4720_;
goto v_reusejp_4722_;
}
else
{
lean_object* v_reuseFailAlloc_4724_; 
v_reuseFailAlloc_4724_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4724_, 0, v_value_4718_);
v___x_4723_ = v_reuseFailAlloc_4724_;
goto v_reusejp_4722_;
}
v_reusejp_4722_:
{
v___y_4711_ = v___x_4723_;
goto v___jp_4710_;
}
}
}
else
{
lean_object* v_value_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; 
v_value_4726_ = lean_ctor_get(v_path_4705_, 0);
lean_inc(v_value_4726_);
lean_dec_ref_known(v_path_4705_, 1);
v___x_4727_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4728_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4728_, 0, v_value_4726_);
lean_ctor_set(v___x_4728_, 1, v___x_4727_);
v___y_4711_ = v___x_4728_;
goto v___jp_4710_;
}
v___jp_4710_:
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4712_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4706_);
v___x_4713_ = lean_mk_empty_array_with_capacity(v___x_4708_);
v___x_4714_ = lean_array_push(v___x_4713_, v___y_4711_);
v___x_4715_ = lean_array_push(v___x_4714_, v___x_4712_);
v___x_4716_ = l_Lasm_JS_Web_Support_args(v___x_4715_);
v___x_4717_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4709_, v___x_4716_);
return v___x_4717_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir___boxed(lean_object* v_path_4729_, lean_object* v_options_4730_, lean_object* v_a_4731_){
_start:
{
lean_object* v_res_4732_; 
v_res_4732_ = l_Lasm_JS_Deno_mkdir(v_path_4729_, v_options_4730_);
return v_res_4732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync(lean_object* v_path_4741_, lean_object* v_options_4742_){
_start:
{
uint8_t v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___y_4748_; 
v___x_4744_ = 0;
v___x_4745_ = lean_unsigned_to_nat(2u);
v___x_4746_ = ((lean_object*)(l_Lasm_JS_Deno_mkdirSync___closed__2));
if (lean_obj_tag(v_path_4741_) == 0)
{
lean_object* v_value_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4762_; 
v_value_4755_ = lean_ctor_get(v_path_4741_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v_path_4741_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4757_ = v_path_4741_;
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_value_4755_);
lean_dec(v_path_4741_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4760_; 
if (v_isShared_4758_ == 0)
{
lean_ctor_set_tag(v___x_4757_, 4);
v___x_4760_ = v___x_4757_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_value_4755_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
v___y_4748_ = v___x_4760_;
goto v___jp_4747_;
}
}
}
else
{
lean_object* v_value_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; 
v_value_4763_ = lean_ctor_get(v_path_4741_, 0);
lean_inc(v_value_4763_);
lean_dec_ref_known(v_path_4741_, 1);
v___x_4764_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4765_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4765_, 0, v_value_4763_);
lean_ctor_set(v___x_4765_, 1, v___x_4764_);
v___y_4748_ = v___x_4765_;
goto v___jp_4747_;
}
v___jp_4747_:
{
lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; 
v___x_4749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4742_);
v___x_4750_ = lean_mk_empty_array_with_capacity(v___x_4745_);
v___x_4751_ = lean_array_push(v___x_4750_, v___y_4748_);
v___x_4752_ = lean_array_push(v___x_4751_, v___x_4749_);
v___x_4753_ = l_Lasm_JS_Web_Support_args(v___x_4752_);
v___x_4754_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4746_, v___x_4753_, v___x_4744_);
return v___x_4754_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync___boxed(lean_object* v_path_4766_, lean_object* v_options_4767_, lean_object* v_a_4768_){
_start:
{
lean_object* v_res_4769_; 
v_res_4769_ = l_Lasm_JS_Deno_mkdirSync(v_path_4766_, v_options_4767_);
return v_res_4769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(lean_object* v_x_4770_){
_start:
{
if (lean_obj_tag(v_x_4770_) == 0)
{
lean_object* v___x_4771_; 
v___x_4771_ = lean_box(0);
return v___x_4771_;
}
else
{
lean_object* v_val_4772_; lean_object* v_dir_4773_; lean_object* v_prefix_4774_; lean_object* v_suffix_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; 
v_val_4772_ = lean_ctor_get(v_x_4770_, 0);
lean_inc(v_val_4772_);
lean_dec_ref_known(v_x_4770_, 1);
v_dir_4773_ = lean_ctor_get(v_val_4772_, 0);
lean_inc(v_dir_4773_);
v_prefix_4774_ = lean_ctor_get(v_val_4772_, 1);
lean_inc(v_prefix_4774_);
v_suffix_4775_ = lean_ctor_get(v_val_4772_, 2);
lean_inc(v_suffix_4775_);
lean_dec(v_val_4772_);
v___x_4776_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
v___x_4777_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dir_4773_);
v___x_4778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4778_, 0, v___x_4776_);
lean_ctor_set(v___x_4778_, 1, v___x_4777_);
v___x_4779_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0));
v___x_4780_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_4774_);
v___x_4781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4779_);
lean_ctor_set(v___x_4781_, 1, v___x_4780_);
v___x_4782_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1));
v___x_4783_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_suffix_4775_);
v___x_4784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4784_, 0, v___x_4782_);
lean_ctor_set(v___x_4784_, 1, v___x_4783_);
v___x_4785_ = lean_unsigned_to_nat(3u);
v___x_4786_ = lean_mk_empty_array_with_capacity(v___x_4785_);
v___x_4787_ = lean_array_push(v___x_4786_, v___x_4778_);
v___x_4788_ = lean_array_push(v___x_4787_, v___x_4781_);
v___x_4789_ = lean_array_push(v___x_4788_, v___x_4784_);
v___x_4790_ = l_Lasm_JS_Web_Support_fields(v___x_4789_);
lean_dec_ref(v___x_4789_);
return v___x_4790_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(lean_object* v_b_4791_, lean_object* v_args_4792_){
_start:
{
uint8_t v_construct_4794_; lean_object* v___x_4795_; uint32_t v___x_4796_; uint64_t v___x_4797_; uint64_t v___y_4799_; 
v_construct_4794_ = lean_ctor_get_uint8(v_b_4791_, sizeof(void*)*4);
v___x_4795_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4791_);
v___x_4796_ = 214;
v___x_4797_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4794_ == 0)
{
uint64_t v___x_4807_; 
v___x_4807_ = 0ULL;
v___y_4799_ = v___x_4807_;
goto v___jp_4798_;
}
else
{
uint64_t v___x_4808_; 
v___x_4808_ = 4ULL;
v___y_4799_ = v___x_4808_;
goto v___jp_4798_;
}
v___jp_4798_:
{
uint64_t v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; 
v___x_4800_ = lean_uint64_lor(v___x_4797_, v___y_4799_);
v___x_4801_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4791_, v_args_4792_);
v___x_4802_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4803_ = lean_string_append(v___x_4802_, v___x_4795_);
v___x_4804_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4805_ = lean_string_append(v___x_4803_, v___x_4804_);
v___x_4806_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_4795_, v___x_4796_, v___x_4800_, v___x_4801_, v___x_4805_);
return v___x_4806_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1___boxed(lean_object* v_b_4809_, lean_object* v_args_4810_, lean_object* v_a_4811_){
_start:
{
lean_object* v_res_4812_; 
v_res_4812_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v_b_4809_, v_args_4810_);
lean_dec_ref(v_b_4809_);
return v_res_4812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir(lean_object* v_options_4821_){
_start:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; 
v___x_4823_ = lean_unsigned_to_nat(1u);
v___x_4824_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDir___closed__2));
v___x_4825_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4821_);
v___x_4826_ = lean_mk_empty_array_with_capacity(v___x_4823_);
v___x_4827_ = lean_array_push(v___x_4826_, v___x_4825_);
v___x_4828_ = l_Lasm_JS_Web_Support_args(v___x_4827_);
v___x_4829_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4824_, v___x_4828_);
return v___x_4829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir___boxed(lean_object* v_options_4830_, lean_object* v_a_4831_){
_start:
{
lean_object* v_res_4832_; 
v_res_4832_ = l_Lasm_JS_Deno_makeTempDir(v_options_4830_);
return v_res_4832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync(lean_object* v_options_4841_){
_start:
{
uint8_t v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4843_ = 0;
v___x_4844_ = lean_unsigned_to_nat(1u);
v___x_4845_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDirSync___closed__2));
v___x_4846_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4841_);
v___x_4847_ = lean_mk_empty_array_with_capacity(v___x_4844_);
v___x_4848_ = lean_array_push(v___x_4847_, v___x_4846_);
v___x_4849_ = l_Lasm_JS_Web_Support_args(v___x_4848_);
v___x_4850_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4845_, v___x_4849_, v___x_4843_);
return v___x_4850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync___boxed(lean_object* v_options_4851_, lean_object* v_a_4852_){
_start:
{
lean_object* v_res_4853_; 
v_res_4853_ = l_Lasm_JS_Deno_makeTempDirSync(v_options_4851_);
return v_res_4853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile(lean_object* v_options_4862_){
_start:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; 
v___x_4864_ = lean_unsigned_to_nat(1u);
v___x_4865_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFile___closed__2));
v___x_4866_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4862_);
v___x_4867_ = lean_mk_empty_array_with_capacity(v___x_4864_);
v___x_4868_ = lean_array_push(v___x_4867_, v___x_4866_);
v___x_4869_ = l_Lasm_JS_Web_Support_args(v___x_4868_);
v___x_4870_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4865_, v___x_4869_);
return v___x_4870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile___boxed(lean_object* v_options_4871_, lean_object* v_a_4872_){
_start:
{
lean_object* v_res_4873_; 
v_res_4873_ = l_Lasm_JS_Deno_makeTempFile(v_options_4871_);
return v_res_4873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync(lean_object* v_options_4882_){
_start:
{
uint8_t v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; 
v___x_4884_ = 0;
v___x_4885_ = lean_unsigned_to_nat(1u);
v___x_4886_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFileSync___closed__2));
v___x_4887_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4882_);
v___x_4888_ = lean_mk_empty_array_with_capacity(v___x_4885_);
v___x_4889_ = lean_array_push(v___x_4888_, v___x_4887_);
v___x_4890_ = l_Lasm_JS_Web_Support_args(v___x_4889_);
v___x_4891_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4886_, v___x_4890_, v___x_4884_);
return v___x_4891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync___boxed(lean_object* v_options_4892_, lean_object* v_a_4893_){
_start:
{
lean_object* v_res_4894_; 
v_res_4894_ = l_Lasm_JS_Deno_makeTempFileSync(v_options_4892_);
return v_res_4894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod(lean_object* v_path_4903_, double v_mode_4904_){
_start:
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___y_4909_; 
v___x_4906_ = lean_unsigned_to_nat(2u);
v___x_4907_ = ((lean_object*)(l_Lasm_JS_Deno_chmod___closed__2));
if (lean_obj_tag(v_path_4903_) == 0)
{
lean_object* v_value_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4923_; 
v_value_4916_ = lean_ctor_get(v_path_4903_, 0);
v_isSharedCheck_4923_ = !lean_is_exclusive(v_path_4903_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4918_ = v_path_4903_;
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
else
{
lean_inc(v_value_4916_);
lean_dec(v_path_4903_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4921_; 
if (v_isShared_4919_ == 0)
{
lean_ctor_set_tag(v___x_4918_, 4);
v___x_4921_ = v___x_4918_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v_value_4916_);
v___x_4921_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
v___y_4909_ = v___x_4921_;
goto v___jp_4908_;
}
}
}
else
{
lean_object* v_value_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; 
v_value_4924_ = lean_ctor_get(v_path_4903_, 0);
lean_inc(v_value_4924_);
lean_dec_ref_known(v_path_4903_, 1);
v___x_4925_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4926_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4926_, 0, v_value_4924_);
lean_ctor_set(v___x_4926_, 1, v___x_4925_);
v___y_4909_ = v___x_4926_;
goto v___jp_4908_;
}
v___jp_4908_:
{
lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; 
v___x_4910_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4910_, 0, v_mode_4904_);
v___x_4911_ = lean_mk_empty_array_with_capacity(v___x_4906_);
v___x_4912_ = lean_array_push(v___x_4911_, v___y_4909_);
v___x_4913_ = lean_array_push(v___x_4912_, v___x_4910_);
v___x_4914_ = l_Lasm_JS_Web_Support_args(v___x_4913_);
v___x_4915_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4907_, v___x_4914_);
return v___x_4915_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod___boxed(lean_object* v_path_4927_, lean_object* v_mode_4928_, lean_object* v_a_4929_){
_start:
{
double v_mode_boxed_4930_; lean_object* v_res_4931_; 
v_mode_boxed_4930_ = lean_unbox_float(v_mode_4928_);
lean_dec_ref(v_mode_4928_);
v_res_4931_ = l_Lasm_JS_Deno_chmod(v_path_4927_, v_mode_boxed_4930_);
return v_res_4931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync(lean_object* v_path_4940_, double v_mode_4941_){
_start:
{
uint8_t v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___y_4947_; 
v___x_4943_ = 0;
v___x_4944_ = lean_unsigned_to_nat(2u);
v___x_4945_ = ((lean_object*)(l_Lasm_JS_Deno_chmodSync___closed__2));
if (lean_obj_tag(v_path_4940_) == 0)
{
lean_object* v_value_4954_; lean_object* v___x_4956_; uint8_t v_isShared_4957_; uint8_t v_isSharedCheck_4961_; 
v_value_4954_ = lean_ctor_get(v_path_4940_, 0);
v_isSharedCheck_4961_ = !lean_is_exclusive(v_path_4940_);
if (v_isSharedCheck_4961_ == 0)
{
v___x_4956_ = v_path_4940_;
v_isShared_4957_ = v_isSharedCheck_4961_;
goto v_resetjp_4955_;
}
else
{
lean_inc(v_value_4954_);
lean_dec(v_path_4940_);
v___x_4956_ = lean_box(0);
v_isShared_4957_ = v_isSharedCheck_4961_;
goto v_resetjp_4955_;
}
v_resetjp_4955_:
{
lean_object* v___x_4959_; 
if (v_isShared_4957_ == 0)
{
lean_ctor_set_tag(v___x_4956_, 4);
v___x_4959_ = v___x_4956_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4960_; 
v_reuseFailAlloc_4960_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4960_, 0, v_value_4954_);
v___x_4959_ = v_reuseFailAlloc_4960_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
v___y_4947_ = v___x_4959_;
goto v___jp_4946_;
}
}
}
else
{
lean_object* v_value_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; 
v_value_4962_ = lean_ctor_get(v_path_4940_, 0);
lean_inc(v_value_4962_);
lean_dec_ref_known(v_path_4940_, 1);
v___x_4963_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4964_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4964_, 0, v_value_4962_);
lean_ctor_set(v___x_4964_, 1, v___x_4963_);
v___y_4947_ = v___x_4964_;
goto v___jp_4946_;
}
v___jp_4946_:
{
lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; 
v___x_4948_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4948_, 0, v_mode_4941_);
v___x_4949_ = lean_mk_empty_array_with_capacity(v___x_4944_);
v___x_4950_ = lean_array_push(v___x_4949_, v___y_4947_);
v___x_4951_ = lean_array_push(v___x_4950_, v___x_4948_);
v___x_4952_ = l_Lasm_JS_Web_Support_args(v___x_4951_);
v___x_4953_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4945_, v___x_4952_, v___x_4943_);
return v___x_4953_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync___boxed(lean_object* v_path_4965_, lean_object* v_mode_4966_, lean_object* v_a_4967_){
_start:
{
double v_mode_boxed_4968_; lean_object* v_res_4969_; 
v_mode_boxed_4968_ = lean_unbox_float(v_mode_4966_);
lean_dec_ref(v_mode_4966_);
v_res_4969_ = l_Lasm_JS_Deno_chmodSync(v_path_4965_, v_mode_boxed_4968_);
return v_res_4969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown(lean_object* v_path_4978_, lean_object* v_uid_4979_, lean_object* v_gid_4980_){
_start:
{
lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___y_4985_; lean_object* v___y_4986_; lean_object* v___y_4987_; lean_object* v___y_4995_; lean_object* v___y_4996_; lean_object* v___y_5002_; 
v___x_4982_ = lean_unsigned_to_nat(3u);
v___x_4983_ = ((lean_object*)(l_Lasm_JS_Deno_chown___closed__2));
if (lean_obj_tag(v_path_4978_) == 0)
{
lean_object* v_value_5007_; lean_object* v___x_5009_; uint8_t v_isShared_5010_; uint8_t v_isSharedCheck_5014_; 
v_value_5007_ = lean_ctor_get(v_path_4978_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v_path_4978_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_5009_ = v_path_4978_;
v_isShared_5010_ = v_isSharedCheck_5014_;
goto v_resetjp_5008_;
}
else
{
lean_inc(v_value_5007_);
lean_dec(v_path_4978_);
v___x_5009_ = lean_box(0);
v_isShared_5010_ = v_isSharedCheck_5014_;
goto v_resetjp_5008_;
}
v_resetjp_5008_:
{
lean_object* v___x_5012_; 
if (v_isShared_5010_ == 0)
{
lean_ctor_set_tag(v___x_5009_, 4);
v___x_5012_ = v___x_5009_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v_value_5007_);
v___x_5012_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
v___y_5002_ = v___x_5012_;
goto v___jp_5001_;
}
}
}
else
{
lean_object* v_value_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; 
v_value_5015_ = lean_ctor_get(v_path_4978_, 0);
lean_inc(v_value_5015_);
lean_dec_ref_known(v_path_4978_, 1);
v___x_5016_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5017_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5017_, 0, v_value_5015_);
lean_ctor_set(v___x_5017_, 1, v___x_5016_);
v___y_5002_ = v___x_5017_;
goto v___jp_5001_;
}
v___jp_4984_:
{
lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4988_ = lean_mk_empty_array_with_capacity(v___x_4982_);
v___x_4989_ = lean_array_push(v___x_4988_, v___y_4986_);
v___x_4990_ = lean_array_push(v___x_4989_, v___y_4985_);
v___x_4991_ = lean_array_push(v___x_4990_, v___y_4987_);
v___x_4992_ = l_Lasm_JS_Web_Support_args(v___x_4991_);
v___x_4993_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4983_, v___x_4992_);
return v___x_4993_;
}
v___jp_4994_:
{
if (lean_obj_tag(v_gid_4980_) == 0)
{
lean_object* v___x_4997_; 
v___x_4997_ = lean_box(1);
v___y_4985_ = v___y_4996_;
v___y_4986_ = v___y_4995_;
v___y_4987_ = v___x_4997_;
goto v___jp_4984_;
}
else
{
lean_object* v_val_4998_; lean_object* v___x_4999_; double v___x_5000_; 
v_val_4998_ = lean_ctor_get(v_gid_4980_, 0);
v___x_4999_ = lean_alloc_ctor(3, 0, 8);
v___x_5000_ = lean_unbox_float(v_val_4998_);
lean_ctor_set_float(v___x_4999_, 0, v___x_5000_);
v___y_4985_ = v___y_4996_;
v___y_4986_ = v___y_4995_;
v___y_4987_ = v___x_4999_;
goto v___jp_4984_;
}
}
v___jp_5001_:
{
if (lean_obj_tag(v_uid_4979_) == 0)
{
lean_object* v___x_5003_; 
v___x_5003_ = lean_box(1);
v___y_4995_ = v___y_5002_;
v___y_4996_ = v___x_5003_;
goto v___jp_4994_;
}
else
{
lean_object* v_val_5004_; lean_object* v___x_5005_; double v___x_5006_; 
v_val_5004_ = lean_ctor_get(v_uid_4979_, 0);
v___x_5005_ = lean_alloc_ctor(3, 0, 8);
v___x_5006_ = lean_unbox_float(v_val_5004_);
lean_ctor_set_float(v___x_5005_, 0, v___x_5006_);
v___y_4995_ = v___y_5002_;
v___y_4996_ = v___x_5005_;
goto v___jp_4994_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown___boxed(lean_object* v_path_5018_, lean_object* v_uid_5019_, lean_object* v_gid_5020_, lean_object* v_a_5021_){
_start:
{
lean_object* v_res_5022_; 
v_res_5022_ = l_Lasm_JS_Deno_chown(v_path_5018_, v_uid_5019_, v_gid_5020_);
lean_dec(v_gid_5020_);
lean_dec(v_uid_5019_);
return v_res_5022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync(lean_object* v_path_5031_, lean_object* v_uid_5032_, lean_object* v_gid_5033_){
_start:
{
uint8_t v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___y_5039_; lean_object* v___y_5040_; lean_object* v___y_5041_; lean_object* v___y_5049_; lean_object* v___y_5050_; lean_object* v___y_5056_; 
v___x_5035_ = 0;
v___x_5036_ = lean_unsigned_to_nat(3u);
v___x_5037_ = ((lean_object*)(l_Lasm_JS_Deno_chownSync___closed__2));
if (lean_obj_tag(v_path_5031_) == 0)
{
lean_object* v_value_5061_; lean_object* v___x_5063_; uint8_t v_isShared_5064_; uint8_t v_isSharedCheck_5068_; 
v_value_5061_ = lean_ctor_get(v_path_5031_, 0);
v_isSharedCheck_5068_ = !lean_is_exclusive(v_path_5031_);
if (v_isSharedCheck_5068_ == 0)
{
v___x_5063_ = v_path_5031_;
v_isShared_5064_ = v_isSharedCheck_5068_;
goto v_resetjp_5062_;
}
else
{
lean_inc(v_value_5061_);
lean_dec(v_path_5031_);
v___x_5063_ = lean_box(0);
v_isShared_5064_ = v_isSharedCheck_5068_;
goto v_resetjp_5062_;
}
v_resetjp_5062_:
{
lean_object* v___x_5066_; 
if (v_isShared_5064_ == 0)
{
lean_ctor_set_tag(v___x_5063_, 4);
v___x_5066_ = v___x_5063_;
goto v_reusejp_5065_;
}
else
{
lean_object* v_reuseFailAlloc_5067_; 
v_reuseFailAlloc_5067_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5067_, 0, v_value_5061_);
v___x_5066_ = v_reuseFailAlloc_5067_;
goto v_reusejp_5065_;
}
v_reusejp_5065_:
{
v___y_5056_ = v___x_5066_;
goto v___jp_5055_;
}
}
}
else
{
lean_object* v_value_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; 
v_value_5069_ = lean_ctor_get(v_path_5031_, 0);
lean_inc(v_value_5069_);
lean_dec_ref_known(v_path_5031_, 1);
v___x_5070_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5071_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5071_, 0, v_value_5069_);
lean_ctor_set(v___x_5071_, 1, v___x_5070_);
v___y_5056_ = v___x_5071_;
goto v___jp_5055_;
}
v___jp_5038_:
{
lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; 
v___x_5042_ = lean_mk_empty_array_with_capacity(v___x_5036_);
v___x_5043_ = lean_array_push(v___x_5042_, v___y_5039_);
v___x_5044_ = lean_array_push(v___x_5043_, v___y_5040_);
v___x_5045_ = lean_array_push(v___x_5044_, v___y_5041_);
v___x_5046_ = l_Lasm_JS_Web_Support_args(v___x_5045_);
v___x_5047_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5037_, v___x_5046_, v___x_5035_);
return v___x_5047_;
}
v___jp_5048_:
{
if (lean_obj_tag(v_gid_5033_) == 0)
{
lean_object* v___x_5051_; 
v___x_5051_ = lean_box(1);
v___y_5039_ = v___y_5049_;
v___y_5040_ = v___y_5050_;
v___y_5041_ = v___x_5051_;
goto v___jp_5038_;
}
else
{
lean_object* v_val_5052_; lean_object* v___x_5053_; double v___x_5054_; 
v_val_5052_ = lean_ctor_get(v_gid_5033_, 0);
v___x_5053_ = lean_alloc_ctor(3, 0, 8);
v___x_5054_ = lean_unbox_float(v_val_5052_);
lean_ctor_set_float(v___x_5053_, 0, v___x_5054_);
v___y_5039_ = v___y_5049_;
v___y_5040_ = v___y_5050_;
v___y_5041_ = v___x_5053_;
goto v___jp_5038_;
}
}
v___jp_5055_:
{
if (lean_obj_tag(v_uid_5032_) == 0)
{
lean_object* v___x_5057_; 
v___x_5057_ = lean_box(1);
v___y_5049_ = v___y_5056_;
v___y_5050_ = v___x_5057_;
goto v___jp_5048_;
}
else
{
lean_object* v_val_5058_; lean_object* v___x_5059_; double v___x_5060_; 
v_val_5058_ = lean_ctor_get(v_uid_5032_, 0);
v___x_5059_ = lean_alloc_ctor(3, 0, 8);
v___x_5060_ = lean_unbox_float(v_val_5058_);
lean_ctor_set_float(v___x_5059_, 0, v___x_5060_);
v___y_5049_ = v___y_5056_;
v___y_5050_ = v___x_5059_;
goto v___jp_5048_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync___boxed(lean_object* v_path_5072_, lean_object* v_uid_5073_, lean_object* v_gid_5074_, lean_object* v_a_5075_){
_start:
{
lean_object* v_res_5076_; 
v_res_5076_ = l_Lasm_JS_Deno_chownSync(v_path_5072_, v_uid_5073_, v_gid_5074_);
lean_dec(v_gid_5074_);
lean_dec(v_uid_5073_);
return v_res_5076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(lean_object* v_x_5077_){
_start:
{
if (lean_obj_tag(v_x_5077_) == 0)
{
lean_object* v___x_5078_; 
v___x_5078_ = lean_box(0);
return v___x_5078_;
}
else
{
lean_object* v_val_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; 
v_val_5079_ = lean_ctor_get(v_x_5077_, 0);
v___x_5080_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_5081_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_5079_);
v___x_5082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5082_, 0, v___x_5080_);
lean_ctor_set(v___x_5082_, 1, v___x_5081_);
v___x_5083_ = lean_unsigned_to_nat(1u);
v___x_5084_ = lean_mk_empty_array_with_capacity(v___x_5083_);
v___x_5085_ = lean_array_push(v___x_5084_, v___x_5082_);
v___x_5086_ = l_Lasm_JS_Web_Support_fields(v___x_5085_);
lean_dec_ref(v___x_5085_);
return v___x_5086_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0___boxed(lean_object* v_x_5087_){
_start:
{
lean_object* v_res_5088_; 
v_res_5088_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_x_5087_);
lean_dec(v_x_5087_);
return v_res_5088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove(lean_object* v_path_5097_, lean_object* v_options_5098_){
_start:
{
lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___y_5103_; 
v___x_5100_ = lean_unsigned_to_nat(2u);
v___x_5101_ = ((lean_object*)(l_Lasm_JS_Deno_remove___closed__2));
if (lean_obj_tag(v_path_5097_) == 0)
{
lean_object* v_value_5110_; lean_object* v___x_5112_; uint8_t v_isShared_5113_; uint8_t v_isSharedCheck_5117_; 
v_value_5110_ = lean_ctor_get(v_path_5097_, 0);
v_isSharedCheck_5117_ = !lean_is_exclusive(v_path_5097_);
if (v_isSharedCheck_5117_ == 0)
{
v___x_5112_ = v_path_5097_;
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
else
{
lean_inc(v_value_5110_);
lean_dec(v_path_5097_);
v___x_5112_ = lean_box(0);
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
v_resetjp_5111_:
{
lean_object* v___x_5115_; 
if (v_isShared_5113_ == 0)
{
lean_ctor_set_tag(v___x_5112_, 4);
v___x_5115_ = v___x_5112_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v_value_5110_);
v___x_5115_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
v___y_5103_ = v___x_5115_;
goto v___jp_5102_;
}
}
}
else
{
lean_object* v_value_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; 
v_value_5118_ = lean_ctor_get(v_path_5097_, 0);
lean_inc(v_value_5118_);
lean_dec_ref_known(v_path_5097_, 1);
v___x_5119_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5120_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5120_, 0, v_value_5118_);
lean_ctor_set(v___x_5120_, 1, v___x_5119_);
v___y_5103_ = v___x_5120_;
goto v___jp_5102_;
}
v___jp_5102_:
{
lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; 
v___x_5104_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5098_);
v___x_5105_ = lean_mk_empty_array_with_capacity(v___x_5100_);
v___x_5106_ = lean_array_push(v___x_5105_, v___y_5103_);
v___x_5107_ = lean_array_push(v___x_5106_, v___x_5104_);
v___x_5108_ = l_Lasm_JS_Web_Support_args(v___x_5107_);
v___x_5109_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5101_, v___x_5108_);
return v___x_5109_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove___boxed(lean_object* v_path_5121_, lean_object* v_options_5122_, lean_object* v_a_5123_){
_start:
{
lean_object* v_res_5124_; 
v_res_5124_ = l_Lasm_JS_Deno_remove(v_path_5121_, v_options_5122_);
lean_dec(v_options_5122_);
return v_res_5124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync(lean_object* v_path_5133_, lean_object* v_options_5134_){
_start:
{
uint8_t v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; lean_object* v___y_5140_; 
v___x_5136_ = 0;
v___x_5137_ = lean_unsigned_to_nat(2u);
v___x_5138_ = ((lean_object*)(l_Lasm_JS_Deno_removeSync___closed__2));
if (lean_obj_tag(v_path_5133_) == 0)
{
lean_object* v_value_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5154_; 
v_value_5147_ = lean_ctor_get(v_path_5133_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v_path_5133_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5149_ = v_path_5133_;
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_value_5147_);
lean_dec(v_path_5133_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5152_; 
if (v_isShared_5150_ == 0)
{
lean_ctor_set_tag(v___x_5149_, 4);
v___x_5152_ = v___x_5149_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v_value_5147_);
v___x_5152_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
v___y_5140_ = v___x_5152_;
goto v___jp_5139_;
}
}
}
else
{
lean_object* v_value_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; 
v_value_5155_ = lean_ctor_get(v_path_5133_, 0);
lean_inc(v_value_5155_);
lean_dec_ref_known(v_path_5133_, 1);
v___x_5156_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5157_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5157_, 0, v_value_5155_);
lean_ctor_set(v___x_5157_, 1, v___x_5156_);
v___y_5140_ = v___x_5157_;
goto v___jp_5139_;
}
v___jp_5139_:
{
lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; 
v___x_5141_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5134_);
v___x_5142_ = lean_mk_empty_array_with_capacity(v___x_5137_);
v___x_5143_ = lean_array_push(v___x_5142_, v___y_5140_);
v___x_5144_ = lean_array_push(v___x_5143_, v___x_5141_);
v___x_5145_ = l_Lasm_JS_Web_Support_args(v___x_5144_);
v___x_5146_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5138_, v___x_5145_, v___x_5136_);
return v___x_5146_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync___boxed(lean_object* v_path_5158_, lean_object* v_options_5159_, lean_object* v_a_5160_){
_start:
{
lean_object* v_res_5161_; 
v_res_5161_ = l_Lasm_JS_Deno_removeSync(v_path_5158_, v_options_5159_);
lean_dec(v_options_5159_);
return v_res_5161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync(lean_object* v_oldpath_5170_, lean_object* v_newpath_5171_){
_start:
{
uint8_t v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___y_5177_; lean_object* v___y_5178_; lean_object* v___y_5185_; 
v___x_5173_ = 0;
v___x_5174_ = lean_unsigned_to_nat(2u);
v___x_5175_ = ((lean_object*)(l_Lasm_JS_Deno_renameSync___closed__2));
if (lean_obj_tag(v_oldpath_5170_) == 0)
{
lean_object* v_value_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5204_; 
v_value_5197_ = lean_ctor_get(v_oldpath_5170_, 0);
v_isSharedCheck_5204_ = !lean_is_exclusive(v_oldpath_5170_);
if (v_isSharedCheck_5204_ == 0)
{
v___x_5199_ = v_oldpath_5170_;
v_isShared_5200_ = v_isSharedCheck_5204_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_value_5197_);
lean_dec(v_oldpath_5170_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5204_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v___x_5202_; 
if (v_isShared_5200_ == 0)
{
lean_ctor_set_tag(v___x_5199_, 4);
v___x_5202_ = v___x_5199_;
goto v_reusejp_5201_;
}
else
{
lean_object* v_reuseFailAlloc_5203_; 
v_reuseFailAlloc_5203_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5203_, 0, v_value_5197_);
v___x_5202_ = v_reuseFailAlloc_5203_;
goto v_reusejp_5201_;
}
v_reusejp_5201_:
{
v___y_5185_ = v___x_5202_;
goto v___jp_5184_;
}
}
}
else
{
lean_object* v_value_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; 
v_value_5205_ = lean_ctor_get(v_oldpath_5170_, 0);
lean_inc(v_value_5205_);
lean_dec_ref_known(v_oldpath_5170_, 1);
v___x_5206_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5207_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5207_, 0, v_value_5205_);
lean_ctor_set(v___x_5207_, 1, v___x_5206_);
v___y_5185_ = v___x_5207_;
goto v___jp_5184_;
}
v___jp_5176_:
{
lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; 
v___x_5179_ = lean_mk_empty_array_with_capacity(v___x_5174_);
v___x_5180_ = lean_array_push(v___x_5179_, v___y_5177_);
v___x_5181_ = lean_array_push(v___x_5180_, v___y_5178_);
v___x_5182_ = l_Lasm_JS_Web_Support_args(v___x_5181_);
v___x_5183_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5175_, v___x_5182_, v___x_5173_);
return v___x_5183_;
}
v___jp_5184_:
{
if (lean_obj_tag(v_newpath_5171_) == 0)
{
lean_object* v_value_5186_; lean_object* v___x_5188_; uint8_t v_isShared_5189_; uint8_t v_isSharedCheck_5193_; 
v_value_5186_ = lean_ctor_get(v_newpath_5171_, 0);
v_isSharedCheck_5193_ = !lean_is_exclusive(v_newpath_5171_);
if (v_isSharedCheck_5193_ == 0)
{
v___x_5188_ = v_newpath_5171_;
v_isShared_5189_ = v_isSharedCheck_5193_;
goto v_resetjp_5187_;
}
else
{
lean_inc(v_value_5186_);
lean_dec(v_newpath_5171_);
v___x_5188_ = lean_box(0);
v_isShared_5189_ = v_isSharedCheck_5193_;
goto v_resetjp_5187_;
}
v_resetjp_5187_:
{
lean_object* v___x_5191_; 
if (v_isShared_5189_ == 0)
{
lean_ctor_set_tag(v___x_5188_, 4);
v___x_5191_ = v___x_5188_;
goto v_reusejp_5190_;
}
else
{
lean_object* v_reuseFailAlloc_5192_; 
v_reuseFailAlloc_5192_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5192_, 0, v_value_5186_);
v___x_5191_ = v_reuseFailAlloc_5192_;
goto v_reusejp_5190_;
}
v_reusejp_5190_:
{
v___y_5177_ = v___y_5185_;
v___y_5178_ = v___x_5191_;
goto v___jp_5176_;
}
}
}
else
{
lean_object* v_value_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; 
v_value_5194_ = lean_ctor_get(v_newpath_5171_, 0);
lean_inc(v_value_5194_);
lean_dec_ref_known(v_newpath_5171_, 1);
v___x_5195_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5196_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5196_, 0, v_value_5194_);
lean_ctor_set(v___x_5196_, 1, v___x_5195_);
v___y_5177_ = v___y_5185_;
v___y_5178_ = v___x_5196_;
goto v___jp_5176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync___boxed(lean_object* v_oldpath_5208_, lean_object* v_newpath_5209_, lean_object* v_a_5210_){
_start:
{
lean_object* v_res_5211_; 
v_res_5211_ = l_Lasm_JS_Deno_renameSync(v_oldpath_5208_, v_newpath_5209_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename(lean_object* v_oldpath_5220_, lean_object* v_newpath_5221_){
_start:
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___y_5226_; lean_object* v___y_5227_; lean_object* v___y_5234_; 
v___x_5223_ = lean_unsigned_to_nat(2u);
v___x_5224_ = ((lean_object*)(l_Lasm_JS_Deno_rename___closed__2));
if (lean_obj_tag(v_oldpath_5220_) == 0)
{
lean_object* v_value_5246_; lean_object* v___x_5248_; uint8_t v_isShared_5249_; uint8_t v_isSharedCheck_5253_; 
v_value_5246_ = lean_ctor_get(v_oldpath_5220_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v_oldpath_5220_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5248_ = v_oldpath_5220_;
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
else
{
lean_inc(v_value_5246_);
lean_dec(v_oldpath_5220_);
v___x_5248_ = lean_box(0);
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
v_resetjp_5247_:
{
lean_object* v___x_5251_; 
if (v_isShared_5249_ == 0)
{
lean_ctor_set_tag(v___x_5248_, 4);
v___x_5251_ = v___x_5248_;
goto v_reusejp_5250_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v_value_5246_);
v___x_5251_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5250_;
}
v_reusejp_5250_:
{
v___y_5234_ = v___x_5251_;
goto v___jp_5233_;
}
}
}
else
{
lean_object* v_value_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; 
v_value_5254_ = lean_ctor_get(v_oldpath_5220_, 0);
lean_inc(v_value_5254_);
lean_dec_ref_known(v_oldpath_5220_, 1);
v___x_5255_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5256_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5256_, 0, v_value_5254_);
lean_ctor_set(v___x_5256_, 1, v___x_5255_);
v___y_5234_ = v___x_5256_;
goto v___jp_5233_;
}
v___jp_5225_:
{
lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; 
v___x_5228_ = lean_mk_empty_array_with_capacity(v___x_5223_);
v___x_5229_ = lean_array_push(v___x_5228_, v___y_5226_);
v___x_5230_ = lean_array_push(v___x_5229_, v___y_5227_);
v___x_5231_ = l_Lasm_JS_Web_Support_args(v___x_5230_);
v___x_5232_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5224_, v___x_5231_);
return v___x_5232_;
}
v___jp_5233_:
{
if (lean_obj_tag(v_newpath_5221_) == 0)
{
lean_object* v_value_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5242_; 
v_value_5235_ = lean_ctor_get(v_newpath_5221_, 0);
v_isSharedCheck_5242_ = !lean_is_exclusive(v_newpath_5221_);
if (v_isSharedCheck_5242_ == 0)
{
v___x_5237_ = v_newpath_5221_;
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_value_5235_);
lean_dec(v_newpath_5221_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v___x_5240_; 
if (v_isShared_5238_ == 0)
{
lean_ctor_set_tag(v___x_5237_, 4);
v___x_5240_ = v___x_5237_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5241_; 
v_reuseFailAlloc_5241_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5241_, 0, v_value_5235_);
v___x_5240_ = v_reuseFailAlloc_5241_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
v___y_5226_ = v___y_5234_;
v___y_5227_ = v___x_5240_;
goto v___jp_5225_;
}
}
}
else
{
lean_object* v_value_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; 
v_value_5243_ = lean_ctor_get(v_newpath_5221_, 0);
lean_inc(v_value_5243_);
lean_dec_ref_known(v_newpath_5221_, 1);
v___x_5244_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5245_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5245_, 0, v_value_5243_);
lean_ctor_set(v___x_5245_, 1, v___x_5244_);
v___y_5226_ = v___y_5234_;
v___y_5227_ = v___x_5245_;
goto v___jp_5225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename___boxed(lean_object* v_oldpath_5257_, lean_object* v_newpath_5258_, lean_object* v_a_5259_){
_start:
{
lean_object* v_res_5260_; 
v_res_5260_ = l_Lasm_JS_Deno_rename(v_oldpath_5257_, v_newpath_5258_);
return v_res_5260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(lean_object* v_x_5261_){
_start:
{
if (lean_obj_tag(v_x_5261_) == 0)
{
lean_object* v___x_5262_; 
v___x_5262_ = lean_box(0);
return v___x_5262_;
}
else
{
lean_object* v_val_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; 
v_val_5263_ = lean_ctor_get(v_x_5261_, 0);
v___x_5264_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5265_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_5263_);
v___x_5266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5266_, 0, v___x_5264_);
lean_ctor_set(v___x_5266_, 1, v___x_5265_);
v___x_5267_ = lean_unsigned_to_nat(1u);
v___x_5268_ = lean_mk_empty_array_with_capacity(v___x_5267_);
v___x_5269_ = lean_array_push(v___x_5268_, v___x_5266_);
v___x_5270_ = l_Lasm_JS_Web_Support_fields(v___x_5269_);
lean_dec_ref(v___x_5269_);
return v___x_5270_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0___boxed(lean_object* v_x_5271_){
_start:
{
lean_object* v_res_5272_; 
v_res_5272_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_x_5271_);
lean_dec(v_x_5271_);
return v_res_5272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile(lean_object* v_path_5281_, lean_object* v_options_5282_){
_start:
{
lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___y_5287_; 
v___x_5284_ = lean_unsigned_to_nat(2u);
v___x_5285_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFile___closed__2));
if (lean_obj_tag(v_path_5281_) == 0)
{
lean_object* v_value_5294_; lean_object* v___x_5296_; uint8_t v_isShared_5297_; uint8_t v_isSharedCheck_5301_; 
v_value_5294_ = lean_ctor_get(v_path_5281_, 0);
v_isSharedCheck_5301_ = !lean_is_exclusive(v_path_5281_);
if (v_isSharedCheck_5301_ == 0)
{
v___x_5296_ = v_path_5281_;
v_isShared_5297_ = v_isSharedCheck_5301_;
goto v_resetjp_5295_;
}
else
{
lean_inc(v_value_5294_);
lean_dec(v_path_5281_);
v___x_5296_ = lean_box(0);
v_isShared_5297_ = v_isSharedCheck_5301_;
goto v_resetjp_5295_;
}
v_resetjp_5295_:
{
lean_object* v___x_5299_; 
if (v_isShared_5297_ == 0)
{
lean_ctor_set_tag(v___x_5296_, 4);
v___x_5299_ = v___x_5296_;
goto v_reusejp_5298_;
}
else
{
lean_object* v_reuseFailAlloc_5300_; 
v_reuseFailAlloc_5300_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5300_, 0, v_value_5294_);
v___x_5299_ = v_reuseFailAlloc_5300_;
goto v_reusejp_5298_;
}
v_reusejp_5298_:
{
v___y_5287_ = v___x_5299_;
goto v___jp_5286_;
}
}
}
else
{
lean_object* v_value_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; 
v_value_5302_ = lean_ctor_get(v_path_5281_, 0);
lean_inc(v_value_5302_);
lean_dec_ref_known(v_path_5281_, 1);
v___x_5303_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5304_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5304_, 0, v_value_5302_);
lean_ctor_set(v___x_5304_, 1, v___x_5303_);
v___y_5287_ = v___x_5304_;
goto v___jp_5286_;
}
v___jp_5286_:
{
lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; 
v___x_5288_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5282_);
v___x_5289_ = lean_mk_empty_array_with_capacity(v___x_5284_);
v___x_5290_ = lean_array_push(v___x_5289_, v___y_5287_);
v___x_5291_ = lean_array_push(v___x_5290_, v___x_5288_);
v___x_5292_ = l_Lasm_JS_Web_Support_args(v___x_5291_);
v___x_5293_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5285_, v___x_5292_);
return v___x_5293_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile___boxed(lean_object* v_path_5305_, lean_object* v_options_5306_, lean_object* v_a_5307_){
_start:
{
lean_object* v_res_5308_; 
v_res_5308_ = l_Lasm_JS_Deno_readTextFile(v_path_5305_, v_options_5306_);
lean_dec(v_options_5306_);
return v_res_5308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync(lean_object* v_path_5317_){
_start:
{
uint8_t v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___y_5323_; 
v___x_5319_ = 0;
v___x_5320_ = lean_unsigned_to_nat(1u);
v___x_5321_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFileSync___closed__2));
if (lean_obj_tag(v_path_5317_) == 0)
{
lean_object* v_value_5328_; lean_object* v___x_5330_; uint8_t v_isShared_5331_; uint8_t v_isSharedCheck_5335_; 
v_value_5328_ = lean_ctor_get(v_path_5317_, 0);
v_isSharedCheck_5335_ = !lean_is_exclusive(v_path_5317_);
if (v_isSharedCheck_5335_ == 0)
{
v___x_5330_ = v_path_5317_;
v_isShared_5331_ = v_isSharedCheck_5335_;
goto v_resetjp_5329_;
}
else
{
lean_inc(v_value_5328_);
lean_dec(v_path_5317_);
v___x_5330_ = lean_box(0);
v_isShared_5331_ = v_isSharedCheck_5335_;
goto v_resetjp_5329_;
}
v_resetjp_5329_:
{
lean_object* v___x_5333_; 
if (v_isShared_5331_ == 0)
{
lean_ctor_set_tag(v___x_5330_, 4);
v___x_5333_ = v___x_5330_;
goto v_reusejp_5332_;
}
else
{
lean_object* v_reuseFailAlloc_5334_; 
v_reuseFailAlloc_5334_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5334_, 0, v_value_5328_);
v___x_5333_ = v_reuseFailAlloc_5334_;
goto v_reusejp_5332_;
}
v_reusejp_5332_:
{
v___y_5323_ = v___x_5333_;
goto v___jp_5322_;
}
}
}
else
{
lean_object* v_value_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; 
v_value_5336_ = lean_ctor_get(v_path_5317_, 0);
lean_inc(v_value_5336_);
lean_dec_ref_known(v_path_5317_, 1);
v___x_5337_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5338_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5338_, 0, v_value_5336_);
lean_ctor_set(v___x_5338_, 1, v___x_5337_);
v___y_5323_ = v___x_5338_;
goto v___jp_5322_;
}
v___jp_5322_:
{
lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; 
v___x_5324_ = lean_mk_empty_array_with_capacity(v___x_5320_);
v___x_5325_ = lean_array_push(v___x_5324_, v___y_5323_);
v___x_5326_ = l_Lasm_JS_Web_Support_args(v___x_5325_);
v___x_5327_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5321_, v___x_5326_, v___x_5319_);
return v___x_5327_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync___boxed(lean_object* v_path_5339_, lean_object* v_a_5340_){
_start:
{
lean_object* v_res_5341_; 
v_res_5341_ = l_Lasm_JS_Deno_readTextFileSync(v_path_5339_);
return v_res_5341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(lean_object* v_b_5342_, lean_object* v_args_5343_){
_start:
{
uint8_t v_construct_5345_; lean_object* v___x_5346_; uint32_t v___x_5347_; uint64_t v___x_5348_; uint64_t v___y_5350_; 
v_construct_5345_ = lean_ctor_get_uint8(v_b_5342_, sizeof(void*)*4);
v___x_5346_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5342_);
v___x_5347_ = 214;
v___x_5348_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5345_ == 0)
{
uint64_t v___x_5358_; 
v___x_5358_ = 0ULL;
v___y_5350_ = v___x_5358_;
goto v___jp_5349_;
}
else
{
uint64_t v___x_5359_; 
v___x_5359_ = 4ULL;
v___y_5350_ = v___x_5359_;
goto v___jp_5349_;
}
v___jp_5349_:
{
uint64_t v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; 
v___x_5351_ = lean_uint64_lor(v___x_5348_, v___y_5350_);
v___x_5352_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5342_, v_args_5343_);
v___x_5353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5354_ = lean_string_append(v___x_5353_, v___x_5346_);
v___x_5355_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5356_ = lean_string_append(v___x_5354_, v___x_5355_);
v___x_5357_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_5346_, v___x_5347_, v___x_5351_, v___x_5352_, v___x_5356_);
return v___x_5357_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0___boxed(lean_object* v_b_5360_, lean_object* v_args_5361_, lean_object* v_a_5362_){
_start:
{
lean_object* v_res_5363_; 
v_res_5363_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v_b_5360_, v_args_5361_);
lean_dec_ref(v_b_5360_);
return v_res_5363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile(lean_object* v_path_5372_, lean_object* v_options_5373_){
_start:
{
lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___y_5378_; 
v___x_5375_ = lean_unsigned_to_nat(2u);
v___x_5376_ = ((lean_object*)(l_Lasm_JS_Deno_readFile___closed__2));
if (lean_obj_tag(v_path_5372_) == 0)
{
lean_object* v_value_5385_; lean_object* v___x_5387_; uint8_t v_isShared_5388_; uint8_t v_isSharedCheck_5392_; 
v_value_5385_ = lean_ctor_get(v_path_5372_, 0);
v_isSharedCheck_5392_ = !lean_is_exclusive(v_path_5372_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5387_ = v_path_5372_;
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
else
{
lean_inc(v_value_5385_);
lean_dec(v_path_5372_);
v___x_5387_ = lean_box(0);
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
v_resetjp_5386_:
{
lean_object* v___x_5390_; 
if (v_isShared_5388_ == 0)
{
lean_ctor_set_tag(v___x_5387_, 4);
v___x_5390_ = v___x_5387_;
goto v_reusejp_5389_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v_value_5385_);
v___x_5390_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5389_;
}
v_reusejp_5389_:
{
v___y_5378_ = v___x_5390_;
goto v___jp_5377_;
}
}
}
else
{
lean_object* v_value_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; 
v_value_5393_ = lean_ctor_get(v_path_5372_, 0);
lean_inc(v_value_5393_);
lean_dec_ref_known(v_path_5372_, 1);
v___x_5394_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5395_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5395_, 0, v_value_5393_);
lean_ctor_set(v___x_5395_, 1, v___x_5394_);
v___y_5378_ = v___x_5395_;
goto v___jp_5377_;
}
v___jp_5377_:
{
lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; 
v___x_5379_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5373_);
v___x_5380_ = lean_mk_empty_array_with_capacity(v___x_5375_);
v___x_5381_ = lean_array_push(v___x_5380_, v___y_5378_);
v___x_5382_ = lean_array_push(v___x_5381_, v___x_5379_);
v___x_5383_ = l_Lasm_JS_Web_Support_args(v___x_5382_);
v___x_5384_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v___x_5376_, v___x_5383_);
return v___x_5384_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile___boxed(lean_object* v_path_5396_, lean_object* v_options_5397_, lean_object* v_a_5398_){
_start:
{
lean_object* v_res_5399_; 
v_res_5399_ = l_Lasm_JS_Deno_readFile(v_path_5396_, v_options_5397_);
lean_dec(v_options_5397_);
return v_res_5399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync(lean_object* v_path_5408_){
_start:
{
uint8_t v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___y_5414_; 
v___x_5410_ = 0;
v___x_5411_ = lean_unsigned_to_nat(1u);
v___x_5412_ = ((lean_object*)(l_Lasm_JS_Deno_readFileSync___closed__2));
if (lean_obj_tag(v_path_5408_) == 0)
{
lean_object* v_value_5419_; lean_object* v___x_5421_; uint8_t v_isShared_5422_; uint8_t v_isSharedCheck_5426_; 
v_value_5419_ = lean_ctor_get(v_path_5408_, 0);
v_isSharedCheck_5426_ = !lean_is_exclusive(v_path_5408_);
if (v_isSharedCheck_5426_ == 0)
{
v___x_5421_ = v_path_5408_;
v_isShared_5422_ = v_isSharedCheck_5426_;
goto v_resetjp_5420_;
}
else
{
lean_inc(v_value_5419_);
lean_dec(v_path_5408_);
v___x_5421_ = lean_box(0);
v_isShared_5422_ = v_isSharedCheck_5426_;
goto v_resetjp_5420_;
}
v_resetjp_5420_:
{
lean_object* v___x_5424_; 
if (v_isShared_5422_ == 0)
{
lean_ctor_set_tag(v___x_5421_, 4);
v___x_5424_ = v___x_5421_;
goto v_reusejp_5423_;
}
else
{
lean_object* v_reuseFailAlloc_5425_; 
v_reuseFailAlloc_5425_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5425_, 0, v_value_5419_);
v___x_5424_ = v_reuseFailAlloc_5425_;
goto v_reusejp_5423_;
}
v_reusejp_5423_:
{
v___y_5414_ = v___x_5424_;
goto v___jp_5413_;
}
}
}
else
{
lean_object* v_value_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; 
v_value_5427_ = lean_ctor_get(v_path_5408_, 0);
lean_inc(v_value_5427_);
lean_dec_ref_known(v_path_5408_, 1);
v___x_5428_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5429_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5429_, 0, v_value_5427_);
lean_ctor_set(v___x_5429_, 1, v___x_5428_);
v___y_5414_ = v___x_5429_;
goto v___jp_5413_;
}
v___jp_5413_:
{
lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; 
v___x_5415_ = lean_mk_empty_array_with_capacity(v___x_5411_);
v___x_5416_ = lean_array_push(v___x_5415_, v___y_5414_);
v___x_5417_ = l_Lasm_JS_Web_Support_args(v___x_5416_);
v___x_5418_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_5412_, v___x_5417_, v___x_5410_);
return v___x_5418_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync___boxed(lean_object* v_path_5430_, lean_object* v_a_5431_){
_start:
{
lean_object* v_res_5432_; 
v_res_5432_ = l_Lasm_JS_Deno_readFileSync(v_path_5430_);
return v_res_5432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath(lean_object* v_path_5441_){
_start:
{
lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___y_5446_; 
v___x_5443_ = lean_unsigned_to_nat(1u);
v___x_5444_ = ((lean_object*)(l_Lasm_JS_Deno_realPath___closed__2));
if (lean_obj_tag(v_path_5441_) == 0)
{
lean_object* v_value_5451_; lean_object* v___x_5453_; uint8_t v_isShared_5454_; uint8_t v_isSharedCheck_5458_; 
v_value_5451_ = lean_ctor_get(v_path_5441_, 0);
v_isSharedCheck_5458_ = !lean_is_exclusive(v_path_5441_);
if (v_isSharedCheck_5458_ == 0)
{
v___x_5453_ = v_path_5441_;
v_isShared_5454_ = v_isSharedCheck_5458_;
goto v_resetjp_5452_;
}
else
{
lean_inc(v_value_5451_);
lean_dec(v_path_5441_);
v___x_5453_ = lean_box(0);
v_isShared_5454_ = v_isSharedCheck_5458_;
goto v_resetjp_5452_;
}
v_resetjp_5452_:
{
lean_object* v___x_5456_; 
if (v_isShared_5454_ == 0)
{
lean_ctor_set_tag(v___x_5453_, 4);
v___x_5456_ = v___x_5453_;
goto v_reusejp_5455_;
}
else
{
lean_object* v_reuseFailAlloc_5457_; 
v_reuseFailAlloc_5457_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5457_, 0, v_value_5451_);
v___x_5456_ = v_reuseFailAlloc_5457_;
goto v_reusejp_5455_;
}
v_reusejp_5455_:
{
v___y_5446_ = v___x_5456_;
goto v___jp_5445_;
}
}
}
else
{
lean_object* v_value_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; 
v_value_5459_ = lean_ctor_get(v_path_5441_, 0);
lean_inc(v_value_5459_);
lean_dec_ref_known(v_path_5441_, 1);
v___x_5460_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5461_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5461_, 0, v_value_5459_);
lean_ctor_set(v___x_5461_, 1, v___x_5460_);
v___y_5446_ = v___x_5461_;
goto v___jp_5445_;
}
v___jp_5445_:
{
lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; 
v___x_5447_ = lean_mk_empty_array_with_capacity(v___x_5443_);
v___x_5448_ = lean_array_push(v___x_5447_, v___y_5446_);
v___x_5449_ = l_Lasm_JS_Web_Support_args(v___x_5448_);
v___x_5450_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5444_, v___x_5449_);
return v___x_5450_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath___boxed(lean_object* v_path_5462_, lean_object* v_a_5463_){
_start:
{
lean_object* v_res_5464_; 
v_res_5464_ = l_Lasm_JS_Deno_realPath(v_path_5462_);
return v_res_5464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync(lean_object* v_path_5473_){
_start:
{
uint8_t v___x_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___y_5479_; 
v___x_5475_ = 0;
v___x_5476_ = lean_unsigned_to_nat(1u);
v___x_5477_ = ((lean_object*)(l_Lasm_JS_Deno_realPathSync___closed__2));
if (lean_obj_tag(v_path_5473_) == 0)
{
lean_object* v_value_5484_; lean_object* v___x_5486_; uint8_t v_isShared_5487_; uint8_t v_isSharedCheck_5491_; 
v_value_5484_ = lean_ctor_get(v_path_5473_, 0);
v_isSharedCheck_5491_ = !lean_is_exclusive(v_path_5473_);
if (v_isSharedCheck_5491_ == 0)
{
v___x_5486_ = v_path_5473_;
v_isShared_5487_ = v_isSharedCheck_5491_;
goto v_resetjp_5485_;
}
else
{
lean_inc(v_value_5484_);
lean_dec(v_path_5473_);
v___x_5486_ = lean_box(0);
v_isShared_5487_ = v_isSharedCheck_5491_;
goto v_resetjp_5485_;
}
v_resetjp_5485_:
{
lean_object* v___x_5489_; 
if (v_isShared_5487_ == 0)
{
lean_ctor_set_tag(v___x_5486_, 4);
v___x_5489_ = v___x_5486_;
goto v_reusejp_5488_;
}
else
{
lean_object* v_reuseFailAlloc_5490_; 
v_reuseFailAlloc_5490_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5490_, 0, v_value_5484_);
v___x_5489_ = v_reuseFailAlloc_5490_;
goto v_reusejp_5488_;
}
v_reusejp_5488_:
{
v___y_5479_ = v___x_5489_;
goto v___jp_5478_;
}
}
}
else
{
lean_object* v_value_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; 
v_value_5492_ = lean_ctor_get(v_path_5473_, 0);
lean_inc(v_value_5492_);
lean_dec_ref_known(v_path_5473_, 1);
v___x_5493_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5494_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5494_, 0, v_value_5492_);
lean_ctor_set(v___x_5494_, 1, v___x_5493_);
v___y_5479_ = v___x_5494_;
goto v___jp_5478_;
}
v___jp_5478_:
{
lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; 
v___x_5480_ = lean_mk_empty_array_with_capacity(v___x_5476_);
v___x_5481_ = lean_array_push(v___x_5480_, v___y_5479_);
v___x_5482_ = l_Lasm_JS_Web_Support_args(v___x_5481_);
v___x_5483_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5477_, v___x_5482_, v___x_5475_);
return v___x_5483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync___boxed(lean_object* v_path_5495_, lean_object* v_a_5496_){
_start:
{
lean_object* v_res_5497_; 
v_res_5497_ = l_Lasm_JS_Deno_realPathSync(v_path_5495_);
return v_res_5497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir(lean_object* v_path_5506_){
_start:
{
uint8_t v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___y_5512_; 
v___x_5508_ = 0;
v___x_5509_ = lean_unsigned_to_nat(1u);
v___x_5510_ = ((lean_object*)(l_Lasm_JS_Deno_readDir___closed__2));
if (lean_obj_tag(v_path_5506_) == 0)
{
lean_object* v_value_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5540_; 
v_value_5533_ = lean_ctor_get(v_path_5506_, 0);
v_isSharedCheck_5540_ = !lean_is_exclusive(v_path_5506_);
if (v_isSharedCheck_5540_ == 0)
{
v___x_5535_ = v_path_5506_;
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
else
{
lean_inc(v_value_5533_);
lean_dec(v_path_5506_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5538_; 
if (v_isShared_5536_ == 0)
{
lean_ctor_set_tag(v___x_5535_, 4);
v___x_5538_ = v___x_5535_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v_value_5533_);
v___x_5538_ = v_reuseFailAlloc_5539_;
goto v_reusejp_5537_;
}
v_reusejp_5537_:
{
v___y_5512_ = v___x_5538_;
goto v___jp_5511_;
}
}
}
else
{
lean_object* v_value_5541_; lean_object* v___x_5542_; lean_object* v___x_5543_; 
v_value_5541_ = lean_ctor_get(v_path_5506_, 0);
lean_inc(v_value_5541_);
lean_dec_ref_known(v_path_5506_, 1);
v___x_5542_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5543_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5543_, 0, v_value_5541_);
lean_ctor_set(v___x_5543_, 1, v___x_5542_);
v___y_5512_ = v___x_5543_;
goto v___jp_5511_;
}
v___jp_5511_:
{
lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; 
v___x_5513_ = lean_mk_empty_array_with_capacity(v___x_5509_);
v___x_5514_ = lean_array_push(v___x_5513_, v___y_5512_);
v___x_5515_ = l_Lasm_JS_Web_Support_args(v___x_5514_);
v___x_5516_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_5510_, v___x_5515_, v___x_5508_);
if (lean_obj_tag(v___x_5516_) == 0)
{
lean_object* v_a_5517_; lean_object* v___x_5519_; uint8_t v_isShared_5520_; uint8_t v_isSharedCheck_5524_; 
v_a_5517_ = lean_ctor_get(v___x_5516_, 0);
v_isSharedCheck_5524_ = !lean_is_exclusive(v___x_5516_);
if (v_isSharedCheck_5524_ == 0)
{
v___x_5519_ = v___x_5516_;
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
else
{
lean_inc(v_a_5517_);
lean_dec(v___x_5516_);
v___x_5519_ = lean_box(0);
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
v_resetjp_5518_:
{
lean_object* v___x_5522_; 
if (v_isShared_5520_ == 0)
{
v___x_5522_ = v___x_5519_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v_a_5517_);
v___x_5522_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
return v___x_5522_;
}
}
}
else
{
lean_object* v_a_5525_; lean_object* v___x_5527_; uint8_t v_isShared_5528_; uint8_t v_isSharedCheck_5532_; 
v_a_5525_ = lean_ctor_get(v___x_5516_, 0);
v_isSharedCheck_5532_ = !lean_is_exclusive(v___x_5516_);
if (v_isSharedCheck_5532_ == 0)
{
v___x_5527_ = v___x_5516_;
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
else
{
lean_inc(v_a_5525_);
lean_dec(v___x_5516_);
v___x_5527_ = lean_box(0);
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
v_resetjp_5526_:
{
lean_object* v___x_5530_; 
if (v_isShared_5528_ == 0)
{
v___x_5530_ = v___x_5527_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v_a_5525_);
v___x_5530_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5529_;
}
v_reusejp_5529_:
{
return v___x_5530_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir___boxed(lean_object* v_path_5544_, lean_object* v_a_5545_){
_start:
{
lean_object* v_res_5546_; 
v_res_5546_ = l_Lasm_JS_Deno_readDir(v_path_5544_);
return v_res_5546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile(lean_object* v_fromPath_5555_, lean_object* v_toPath_5556_){
_start:
{
lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___y_5561_; lean_object* v___y_5562_; lean_object* v___y_5569_; 
v___x_5558_ = lean_unsigned_to_nat(2u);
v___x_5559_ = ((lean_object*)(l_Lasm_JS_Deno_copyFile___closed__2));
if (lean_obj_tag(v_fromPath_5555_) == 0)
{
lean_object* v_value_5581_; lean_object* v___x_5583_; uint8_t v_isShared_5584_; uint8_t v_isSharedCheck_5588_; 
v_value_5581_ = lean_ctor_get(v_fromPath_5555_, 0);
v_isSharedCheck_5588_ = !lean_is_exclusive(v_fromPath_5555_);
if (v_isSharedCheck_5588_ == 0)
{
v___x_5583_ = v_fromPath_5555_;
v_isShared_5584_ = v_isSharedCheck_5588_;
goto v_resetjp_5582_;
}
else
{
lean_inc(v_value_5581_);
lean_dec(v_fromPath_5555_);
v___x_5583_ = lean_box(0);
v_isShared_5584_ = v_isSharedCheck_5588_;
goto v_resetjp_5582_;
}
v_resetjp_5582_:
{
lean_object* v___x_5586_; 
if (v_isShared_5584_ == 0)
{
lean_ctor_set_tag(v___x_5583_, 4);
v___x_5586_ = v___x_5583_;
goto v_reusejp_5585_;
}
else
{
lean_object* v_reuseFailAlloc_5587_; 
v_reuseFailAlloc_5587_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5587_, 0, v_value_5581_);
v___x_5586_ = v_reuseFailAlloc_5587_;
goto v_reusejp_5585_;
}
v_reusejp_5585_:
{
v___y_5569_ = v___x_5586_;
goto v___jp_5568_;
}
}
}
else
{
lean_object* v_value_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; 
v_value_5589_ = lean_ctor_get(v_fromPath_5555_, 0);
lean_inc(v_value_5589_);
lean_dec_ref_known(v_fromPath_5555_, 1);
v___x_5590_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5591_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5591_, 0, v_value_5589_);
lean_ctor_set(v___x_5591_, 1, v___x_5590_);
v___y_5569_ = v___x_5591_;
goto v___jp_5568_;
}
v___jp_5560_:
{
lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5563_ = lean_mk_empty_array_with_capacity(v___x_5558_);
v___x_5564_ = lean_array_push(v___x_5563_, v___y_5561_);
v___x_5565_ = lean_array_push(v___x_5564_, v___y_5562_);
v___x_5566_ = l_Lasm_JS_Web_Support_args(v___x_5565_);
v___x_5567_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5559_, v___x_5566_);
return v___x_5567_;
}
v___jp_5568_:
{
if (lean_obj_tag(v_toPath_5556_) == 0)
{
lean_object* v_value_5570_; lean_object* v___x_5572_; uint8_t v_isShared_5573_; uint8_t v_isSharedCheck_5577_; 
v_value_5570_ = lean_ctor_get(v_toPath_5556_, 0);
v_isSharedCheck_5577_ = !lean_is_exclusive(v_toPath_5556_);
if (v_isSharedCheck_5577_ == 0)
{
v___x_5572_ = v_toPath_5556_;
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
else
{
lean_inc(v_value_5570_);
lean_dec(v_toPath_5556_);
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
v___y_5561_ = v___y_5569_;
v___y_5562_ = v___x_5575_;
goto v___jp_5560_;
}
}
}
else
{
lean_object* v_value_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; 
v_value_5578_ = lean_ctor_get(v_toPath_5556_, 0);
lean_inc(v_value_5578_);
lean_dec_ref_known(v_toPath_5556_, 1);
v___x_5579_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5580_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5580_, 0, v_value_5578_);
lean_ctor_set(v___x_5580_, 1, v___x_5579_);
v___y_5561_ = v___y_5569_;
v___y_5562_ = v___x_5580_;
goto v___jp_5560_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile___boxed(lean_object* v_fromPath_5592_, lean_object* v_toPath_5593_, lean_object* v_a_5594_){
_start:
{
lean_object* v_res_5595_; 
v_res_5595_ = l_Lasm_JS_Deno_copyFile(v_fromPath_5592_, v_toPath_5593_);
return v_res_5595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync(lean_object* v_fromPath_5604_, lean_object* v_toPath_5605_){
_start:
{
uint8_t v___x_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___y_5611_; lean_object* v___y_5612_; lean_object* v___y_5619_; 
v___x_5607_ = 0;
v___x_5608_ = lean_unsigned_to_nat(2u);
v___x_5609_ = ((lean_object*)(l_Lasm_JS_Deno_copyFileSync___closed__2));
if (lean_obj_tag(v_fromPath_5604_) == 0)
{
lean_object* v_value_5631_; lean_object* v___x_5633_; uint8_t v_isShared_5634_; uint8_t v_isSharedCheck_5638_; 
v_value_5631_ = lean_ctor_get(v_fromPath_5604_, 0);
v_isSharedCheck_5638_ = !lean_is_exclusive(v_fromPath_5604_);
if (v_isSharedCheck_5638_ == 0)
{
v___x_5633_ = v_fromPath_5604_;
v_isShared_5634_ = v_isSharedCheck_5638_;
goto v_resetjp_5632_;
}
else
{
lean_inc(v_value_5631_);
lean_dec(v_fromPath_5604_);
v___x_5633_ = lean_box(0);
v_isShared_5634_ = v_isSharedCheck_5638_;
goto v_resetjp_5632_;
}
v_resetjp_5632_:
{
lean_object* v___x_5636_; 
if (v_isShared_5634_ == 0)
{
lean_ctor_set_tag(v___x_5633_, 4);
v___x_5636_ = v___x_5633_;
goto v_reusejp_5635_;
}
else
{
lean_object* v_reuseFailAlloc_5637_; 
v_reuseFailAlloc_5637_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5637_, 0, v_value_5631_);
v___x_5636_ = v_reuseFailAlloc_5637_;
goto v_reusejp_5635_;
}
v_reusejp_5635_:
{
v___y_5619_ = v___x_5636_;
goto v___jp_5618_;
}
}
}
else
{
lean_object* v_value_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; 
v_value_5639_ = lean_ctor_get(v_fromPath_5604_, 0);
lean_inc(v_value_5639_);
lean_dec_ref_known(v_fromPath_5604_, 1);
v___x_5640_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5641_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5641_, 0, v_value_5639_);
lean_ctor_set(v___x_5641_, 1, v___x_5640_);
v___y_5619_ = v___x_5641_;
goto v___jp_5618_;
}
v___jp_5610_:
{
lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; 
v___x_5613_ = lean_mk_empty_array_with_capacity(v___x_5608_);
v___x_5614_ = lean_array_push(v___x_5613_, v___y_5611_);
v___x_5615_ = lean_array_push(v___x_5614_, v___y_5612_);
v___x_5616_ = l_Lasm_JS_Web_Support_args(v___x_5615_);
v___x_5617_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5609_, v___x_5616_, v___x_5607_);
return v___x_5617_;
}
v___jp_5618_:
{
if (lean_obj_tag(v_toPath_5605_) == 0)
{
lean_object* v_value_5620_; lean_object* v___x_5622_; uint8_t v_isShared_5623_; uint8_t v_isSharedCheck_5627_; 
v_value_5620_ = lean_ctor_get(v_toPath_5605_, 0);
v_isSharedCheck_5627_ = !lean_is_exclusive(v_toPath_5605_);
if (v_isSharedCheck_5627_ == 0)
{
v___x_5622_ = v_toPath_5605_;
v_isShared_5623_ = v_isSharedCheck_5627_;
goto v_resetjp_5621_;
}
else
{
lean_inc(v_value_5620_);
lean_dec(v_toPath_5605_);
v___x_5622_ = lean_box(0);
v_isShared_5623_ = v_isSharedCheck_5627_;
goto v_resetjp_5621_;
}
v_resetjp_5621_:
{
lean_object* v___x_5625_; 
if (v_isShared_5623_ == 0)
{
lean_ctor_set_tag(v___x_5622_, 4);
v___x_5625_ = v___x_5622_;
goto v_reusejp_5624_;
}
else
{
lean_object* v_reuseFailAlloc_5626_; 
v_reuseFailAlloc_5626_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5626_, 0, v_value_5620_);
v___x_5625_ = v_reuseFailAlloc_5626_;
goto v_reusejp_5624_;
}
v_reusejp_5624_:
{
v___y_5611_ = v___y_5619_;
v___y_5612_ = v___x_5625_;
goto v___jp_5610_;
}
}
}
else
{
lean_object* v_value_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; 
v_value_5628_ = lean_ctor_get(v_toPath_5605_, 0);
lean_inc(v_value_5628_);
lean_dec_ref_known(v_toPath_5605_, 1);
v___x_5629_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5630_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5630_, 0, v_value_5628_);
lean_ctor_set(v___x_5630_, 1, v___x_5629_);
v___y_5611_ = v___y_5619_;
v___y_5612_ = v___x_5630_;
goto v___jp_5610_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync___boxed(lean_object* v_fromPath_5642_, lean_object* v_toPath_5643_, lean_object* v_a_5644_){
_start:
{
lean_object* v_res_5645_; 
v_res_5645_ = l_Lasm_JS_Deno_copyFileSync(v_fromPath_5642_, v_toPath_5643_);
return v_res_5645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink(lean_object* v_path_5654_){
_start:
{
lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___y_5659_; 
v___x_5656_ = lean_unsigned_to_nat(1u);
v___x_5657_ = ((lean_object*)(l_Lasm_JS_Deno_readLink___closed__2));
if (lean_obj_tag(v_path_5654_) == 0)
{
lean_object* v_value_5664_; lean_object* v___x_5666_; uint8_t v_isShared_5667_; uint8_t v_isSharedCheck_5671_; 
v_value_5664_ = lean_ctor_get(v_path_5654_, 0);
v_isSharedCheck_5671_ = !lean_is_exclusive(v_path_5654_);
if (v_isSharedCheck_5671_ == 0)
{
v___x_5666_ = v_path_5654_;
v_isShared_5667_ = v_isSharedCheck_5671_;
goto v_resetjp_5665_;
}
else
{
lean_inc(v_value_5664_);
lean_dec(v_path_5654_);
v___x_5666_ = lean_box(0);
v_isShared_5667_ = v_isSharedCheck_5671_;
goto v_resetjp_5665_;
}
v_resetjp_5665_:
{
lean_object* v___x_5669_; 
if (v_isShared_5667_ == 0)
{
lean_ctor_set_tag(v___x_5666_, 4);
v___x_5669_ = v___x_5666_;
goto v_reusejp_5668_;
}
else
{
lean_object* v_reuseFailAlloc_5670_; 
v_reuseFailAlloc_5670_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5670_, 0, v_value_5664_);
v___x_5669_ = v_reuseFailAlloc_5670_;
goto v_reusejp_5668_;
}
v_reusejp_5668_:
{
v___y_5659_ = v___x_5669_;
goto v___jp_5658_;
}
}
}
else
{
lean_object* v_value_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; 
v_value_5672_ = lean_ctor_get(v_path_5654_, 0);
lean_inc(v_value_5672_);
lean_dec_ref_known(v_path_5654_, 1);
v___x_5673_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5674_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5674_, 0, v_value_5672_);
lean_ctor_set(v___x_5674_, 1, v___x_5673_);
v___y_5659_ = v___x_5674_;
goto v___jp_5658_;
}
v___jp_5658_:
{
lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; 
v___x_5660_ = lean_mk_empty_array_with_capacity(v___x_5656_);
v___x_5661_ = lean_array_push(v___x_5660_, v___y_5659_);
v___x_5662_ = l_Lasm_JS_Web_Support_args(v___x_5661_);
v___x_5663_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5657_, v___x_5662_);
return v___x_5663_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink___boxed(lean_object* v_path_5675_, lean_object* v_a_5676_){
_start:
{
lean_object* v_res_5677_; 
v_res_5677_ = l_Lasm_JS_Deno_readLink(v_path_5675_);
return v_res_5677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync(lean_object* v_path_5686_){
_start:
{
uint8_t v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___y_5692_; 
v___x_5688_ = 0;
v___x_5689_ = lean_unsigned_to_nat(1u);
v___x_5690_ = ((lean_object*)(l_Lasm_JS_Deno_readLinkSync___closed__2));
if (lean_obj_tag(v_path_5686_) == 0)
{
lean_object* v_value_5697_; lean_object* v___x_5699_; uint8_t v_isShared_5700_; uint8_t v_isSharedCheck_5704_; 
v_value_5697_ = lean_ctor_get(v_path_5686_, 0);
v_isSharedCheck_5704_ = !lean_is_exclusive(v_path_5686_);
if (v_isSharedCheck_5704_ == 0)
{
v___x_5699_ = v_path_5686_;
v_isShared_5700_ = v_isSharedCheck_5704_;
goto v_resetjp_5698_;
}
else
{
lean_inc(v_value_5697_);
lean_dec(v_path_5686_);
v___x_5699_ = lean_box(0);
v_isShared_5700_ = v_isSharedCheck_5704_;
goto v_resetjp_5698_;
}
v_resetjp_5698_:
{
lean_object* v___x_5702_; 
if (v_isShared_5700_ == 0)
{
lean_ctor_set_tag(v___x_5699_, 4);
v___x_5702_ = v___x_5699_;
goto v_reusejp_5701_;
}
else
{
lean_object* v_reuseFailAlloc_5703_; 
v_reuseFailAlloc_5703_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5703_, 0, v_value_5697_);
v___x_5702_ = v_reuseFailAlloc_5703_;
goto v_reusejp_5701_;
}
v_reusejp_5701_:
{
v___y_5692_ = v___x_5702_;
goto v___jp_5691_;
}
}
}
else
{
lean_object* v_value_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; 
v_value_5705_ = lean_ctor_get(v_path_5686_, 0);
lean_inc(v_value_5705_);
lean_dec_ref_known(v_path_5686_, 1);
v___x_5706_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5707_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5707_, 0, v_value_5705_);
lean_ctor_set(v___x_5707_, 1, v___x_5706_);
v___y_5692_ = v___x_5707_;
goto v___jp_5691_;
}
v___jp_5691_:
{
lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; 
v___x_5693_ = lean_mk_empty_array_with_capacity(v___x_5689_);
v___x_5694_ = lean_array_push(v___x_5693_, v___y_5692_);
v___x_5695_ = l_Lasm_JS_Web_Support_args(v___x_5694_);
v___x_5696_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5690_, v___x_5695_, v___x_5688_);
return v___x_5696_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync___boxed(lean_object* v_path_5708_, lean_object* v_a_5709_){
_start:
{
lean_object* v_res_5710_; 
v_res_5710_ = l_Lasm_JS_Deno_readLinkSync(v_path_5708_);
return v_res_5710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(lean_object* v_b_5711_, lean_object* v_args_5712_){
_start:
{
uint8_t v_construct_5714_; lean_object* v___x_5715_; uint32_t v___x_5716_; uint64_t v___x_5717_; uint64_t v___y_5719_; 
v_construct_5714_ = lean_ctor_get_uint8(v_b_5711_, sizeof(void*)*4);
v___x_5715_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5711_);
v___x_5716_ = 214;
v___x_5717_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5714_ == 0)
{
uint64_t v___x_5727_; 
v___x_5727_ = 0ULL;
v___y_5719_ = v___x_5727_;
goto v___jp_5718_;
}
else
{
uint64_t v___x_5728_; 
v___x_5728_ = 4ULL;
v___y_5719_ = v___x_5728_;
goto v___jp_5718_;
}
v___jp_5718_:
{
uint64_t v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; 
v___x_5720_ = lean_uint64_lor(v___x_5717_, v___y_5719_);
v___x_5721_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5711_, v_args_5712_);
v___x_5722_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5723_ = lean_string_append(v___x_5722_, v___x_5715_);
v___x_5724_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5725_ = lean_string_append(v___x_5723_, v___x_5724_);
v___x_5726_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v___x_5715_, v___x_5716_, v___x_5720_, v___x_5721_, v___x_5725_);
return v___x_5726_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0___boxed(lean_object* v_b_5729_, lean_object* v_args_5730_, lean_object* v_a_5731_){
_start:
{
lean_object* v_res_5732_; 
v_res_5732_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v_b_5729_, v_args_5730_);
lean_dec_ref(v_b_5729_);
return v_res_5732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat(lean_object* v_path_5741_){
_start:
{
lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___y_5746_; 
v___x_5743_ = lean_unsigned_to_nat(1u);
v___x_5744_ = ((lean_object*)(l_Lasm_JS_Deno_lstat___closed__2));
if (lean_obj_tag(v_path_5741_) == 0)
{
lean_object* v_value_5751_; lean_object* v___x_5753_; uint8_t v_isShared_5754_; uint8_t v_isSharedCheck_5758_; 
v_value_5751_ = lean_ctor_get(v_path_5741_, 0);
v_isSharedCheck_5758_ = !lean_is_exclusive(v_path_5741_);
if (v_isSharedCheck_5758_ == 0)
{
v___x_5753_ = v_path_5741_;
v_isShared_5754_ = v_isSharedCheck_5758_;
goto v_resetjp_5752_;
}
else
{
lean_inc(v_value_5751_);
lean_dec(v_path_5741_);
v___x_5753_ = lean_box(0);
v_isShared_5754_ = v_isSharedCheck_5758_;
goto v_resetjp_5752_;
}
v_resetjp_5752_:
{
lean_object* v___x_5756_; 
if (v_isShared_5754_ == 0)
{
lean_ctor_set_tag(v___x_5753_, 4);
v___x_5756_ = v___x_5753_;
goto v_reusejp_5755_;
}
else
{
lean_object* v_reuseFailAlloc_5757_; 
v_reuseFailAlloc_5757_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5757_, 0, v_value_5751_);
v___x_5756_ = v_reuseFailAlloc_5757_;
goto v_reusejp_5755_;
}
v_reusejp_5755_:
{
v___y_5746_ = v___x_5756_;
goto v___jp_5745_;
}
}
}
else
{
lean_object* v_value_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; 
v_value_5759_ = lean_ctor_get(v_path_5741_, 0);
lean_inc(v_value_5759_);
lean_dec_ref_known(v_path_5741_, 1);
v___x_5760_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5761_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5761_, 0, v_value_5759_);
lean_ctor_set(v___x_5761_, 1, v___x_5760_);
v___y_5746_ = v___x_5761_;
goto v___jp_5745_;
}
v___jp_5745_:
{
lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; 
v___x_5747_ = lean_mk_empty_array_with_capacity(v___x_5743_);
v___x_5748_ = lean_array_push(v___x_5747_, v___y_5746_);
v___x_5749_ = l_Lasm_JS_Web_Support_args(v___x_5748_);
v___x_5750_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5744_, v___x_5749_);
return v___x_5750_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat___boxed(lean_object* v_path_5762_, lean_object* v_a_5763_){
_start:
{
lean_object* v_res_5764_; 
v_res_5764_ = l_Lasm_JS_Deno_lstat(v_path_5762_);
return v_res_5764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(lean_object* v_b_5765_, lean_object* v_args_5766_, uint8_t v_await_5767_){
_start:
{
uint64_t v___y_5770_; uint64_t v___y_5771_; uint64_t v___x_5814_; uint64_t v___y_5816_; 
v___x_5814_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_5767_ == 0)
{
uint64_t v___x_5821_; 
v___x_5821_ = 0ULL;
v___y_5816_ = v___x_5821_;
goto v___jp_5815_;
}
else
{
uint64_t v___x_5822_; 
v___x_5822_ = 2ULL;
v___y_5816_ = v___x_5822_;
goto v___jp_5815_;
}
v___jp_5769_:
{
uint64_t v_flags_5772_; uint32_t v___x_5773_; lean_object* v___x_5774_; uint32_t v___x_5775_; lean_object* v___x_5776_; 
v_flags_5772_ = lean_uint64_lor(v___y_5770_, v___y_5771_);
v___x_5773_ = 214;
v___x_5774_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5765_, v_args_5766_);
v___x_5775_ = 0;
v___x_5776_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5773_, v_flags_5772_, v___x_5774_, v___x_5775_);
lean_dec(v___x_5774_);
if (lean_obj_tag(v___x_5776_) == 0)
{
if (lean_obj_tag(v___x_5776_) == 0)
{
lean_object* v_a_5777_; lean_object* v___x_5778_; 
v_a_5777_ = lean_ctor_get(v___x_5776_, 0);
lean_inc(v_a_5777_);
lean_dec_ref_known(v___x_5776_, 1);
v___x_5778_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5777_);
lean_dec(v_a_5777_);
if (lean_obj_tag(v___x_5778_) == 0)
{
lean_object* v_a_5779_; lean_object* v___x_5780_; lean_object* v___x_5781_; 
v_a_5779_ = lean_ctor_get(v___x_5778_, 0);
lean_inc(v_a_5779_);
lean_dec_ref_known(v___x_5778_, 1);
v___x_5780_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5765_);
v___x_5781_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v___x_5780_, v_a_5779_);
lean_dec_ref(v___x_5780_);
return v___x_5781_;
}
else
{
lean_object* v_a_5782_; lean_object* v___x_5784_; uint8_t v_isShared_5785_; uint8_t v_isSharedCheck_5789_; 
v_a_5782_ = lean_ctor_get(v___x_5778_, 0);
v_isSharedCheck_5789_ = !lean_is_exclusive(v___x_5778_);
if (v_isSharedCheck_5789_ == 0)
{
v___x_5784_ = v___x_5778_;
v_isShared_5785_ = v_isSharedCheck_5789_;
goto v_resetjp_5783_;
}
else
{
lean_inc(v_a_5782_);
lean_dec(v___x_5778_);
v___x_5784_ = lean_box(0);
v_isShared_5785_ = v_isSharedCheck_5789_;
goto v_resetjp_5783_;
}
v_resetjp_5783_:
{
lean_object* v___x_5787_; 
if (v_isShared_5785_ == 0)
{
v___x_5787_ = v___x_5784_;
goto v_reusejp_5786_;
}
else
{
lean_object* v_reuseFailAlloc_5788_; 
v_reuseFailAlloc_5788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5788_, 0, v_a_5782_);
v___x_5787_ = v_reuseFailAlloc_5788_;
goto v_reusejp_5786_;
}
v_reusejp_5786_:
{
return v___x_5787_;
}
}
}
}
else
{
lean_object* v_a_5790_; lean_object* v___x_5792_; uint8_t v_isShared_5793_; uint8_t v_isSharedCheck_5797_; 
v_a_5790_ = lean_ctor_get(v___x_5776_, 0);
v_isSharedCheck_5797_ = !lean_is_exclusive(v___x_5776_);
if (v_isSharedCheck_5797_ == 0)
{
v___x_5792_ = v___x_5776_;
v_isShared_5793_ = v_isSharedCheck_5797_;
goto v_resetjp_5791_;
}
else
{
lean_inc(v_a_5790_);
lean_dec(v___x_5776_);
v___x_5792_ = lean_box(0);
v_isShared_5793_ = v_isSharedCheck_5797_;
goto v_resetjp_5791_;
}
v_resetjp_5791_:
{
lean_object* v___x_5795_; 
if (v_isShared_5793_ == 0)
{
lean_ctor_set_tag(v___x_5792_, 1);
v___x_5795_ = v___x_5792_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5796_; 
v_reuseFailAlloc_5796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5796_, 0, v_a_5790_);
v___x_5795_ = v_reuseFailAlloc_5796_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
return v___x_5795_;
}
}
}
}
else
{
lean_object* v_a_5798_; lean_object* v___x_5800_; uint8_t v_isShared_5801_; uint8_t v_isSharedCheck_5813_; 
v_a_5798_ = lean_ctor_get(v___x_5776_, 0);
v_isSharedCheck_5813_ = !lean_is_exclusive(v___x_5776_);
if (v_isSharedCheck_5813_ == 0)
{
v___x_5800_ = v___x_5776_;
v_isShared_5801_ = v_isSharedCheck_5813_;
goto v_resetjp_5799_;
}
else
{
lean_inc(v_a_5798_);
lean_dec(v___x_5776_);
v___x_5800_ = lean_box(0);
v_isShared_5801_ = v_isSharedCheck_5813_;
goto v_resetjp_5799_;
}
v_resetjp_5799_:
{
lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___x_5811_; 
v___x_5802_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5803_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5765_);
v___x_5804_ = lean_string_append(v___x_5802_, v___x_5803_);
lean_dec_ref(v___x_5803_);
v___x_5805_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5806_ = lean_string_append(v___x_5804_, v___x_5805_);
v___x_5807_ = lean_io_error_to_string(v_a_5798_);
v___x_5808_ = lean_string_append(v___x_5806_, v___x_5807_);
lean_dec_ref(v___x_5807_);
v___x_5809_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5809_, 0, v___x_5808_);
if (v_isShared_5801_ == 0)
{
lean_ctor_set(v___x_5800_, 0, v___x_5809_);
v___x_5811_ = v___x_5800_;
goto v_reusejp_5810_;
}
else
{
lean_object* v_reuseFailAlloc_5812_; 
v_reuseFailAlloc_5812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5812_, 0, v___x_5809_);
v___x_5811_ = v_reuseFailAlloc_5812_;
goto v_reusejp_5810_;
}
v_reusejp_5810_:
{
return v___x_5811_;
}
}
}
}
v___jp_5815_:
{
uint8_t v_construct_5817_; uint64_t v___x_5818_; 
v_construct_5817_ = lean_ctor_get_uint8(v_b_5765_, sizeof(void*)*4);
v___x_5818_ = lean_uint64_lor(v___x_5814_, v___y_5816_);
if (v_construct_5817_ == 0)
{
uint64_t v___x_5819_; 
v___x_5819_ = 0ULL;
v___y_5770_ = v___x_5818_;
v___y_5771_ = v___x_5819_;
goto v___jp_5769_;
}
else
{
uint64_t v___x_5820_; 
v___x_5820_ = 4ULL;
v___y_5770_ = v___x_5818_;
v___y_5771_ = v___x_5820_;
goto v___jp_5769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0___boxed(lean_object* v_b_5823_, lean_object* v_args_5824_, lean_object* v_await_5825_, lean_object* v_a_5826_){
_start:
{
uint8_t v_await_boxed_5827_; lean_object* v_res_5828_; 
v_await_boxed_5827_ = lean_unbox(v_await_5825_);
v_res_5828_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v_b_5823_, v_args_5824_, v_await_boxed_5827_);
lean_dec_ref(v_b_5823_);
return v_res_5828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync(lean_object* v_path_5837_){
_start:
{
uint8_t v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___y_5843_; 
v___x_5839_ = 0;
v___x_5840_ = lean_unsigned_to_nat(1u);
v___x_5841_ = ((lean_object*)(l_Lasm_JS_Deno_lstatSync___closed__2));
if (lean_obj_tag(v_path_5837_) == 0)
{
lean_object* v_value_5848_; lean_object* v___x_5850_; uint8_t v_isShared_5851_; uint8_t v_isSharedCheck_5855_; 
v_value_5848_ = lean_ctor_get(v_path_5837_, 0);
v_isSharedCheck_5855_ = !lean_is_exclusive(v_path_5837_);
if (v_isSharedCheck_5855_ == 0)
{
v___x_5850_ = v_path_5837_;
v_isShared_5851_ = v_isSharedCheck_5855_;
goto v_resetjp_5849_;
}
else
{
lean_inc(v_value_5848_);
lean_dec(v_path_5837_);
v___x_5850_ = lean_box(0);
v_isShared_5851_ = v_isSharedCheck_5855_;
goto v_resetjp_5849_;
}
v_resetjp_5849_:
{
lean_object* v___x_5853_; 
if (v_isShared_5851_ == 0)
{
lean_ctor_set_tag(v___x_5850_, 4);
v___x_5853_ = v___x_5850_;
goto v_reusejp_5852_;
}
else
{
lean_object* v_reuseFailAlloc_5854_; 
v_reuseFailAlloc_5854_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5854_, 0, v_value_5848_);
v___x_5853_ = v_reuseFailAlloc_5854_;
goto v_reusejp_5852_;
}
v_reusejp_5852_:
{
v___y_5843_ = v___x_5853_;
goto v___jp_5842_;
}
}
}
else
{
lean_object* v_value_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; 
v_value_5856_ = lean_ctor_get(v_path_5837_, 0);
lean_inc(v_value_5856_);
lean_dec_ref_known(v_path_5837_, 1);
v___x_5857_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5858_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5858_, 0, v_value_5856_);
lean_ctor_set(v___x_5858_, 1, v___x_5857_);
v___y_5843_ = v___x_5858_;
goto v___jp_5842_;
}
v___jp_5842_:
{
lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; 
v___x_5844_ = lean_mk_empty_array_with_capacity(v___x_5840_);
v___x_5845_ = lean_array_push(v___x_5844_, v___y_5843_);
v___x_5846_ = l_Lasm_JS_Web_Support_args(v___x_5845_);
v___x_5847_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5841_, v___x_5846_, v___x_5839_);
return v___x_5847_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync___boxed(lean_object* v_path_5859_, lean_object* v_a_5860_){
_start:
{
lean_object* v_res_5861_; 
v_res_5861_ = l_Lasm_JS_Deno_lstatSync(v_path_5859_);
return v_res_5861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat(lean_object* v_path_5870_){
_start:
{
lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___y_5875_; 
v___x_5872_ = lean_unsigned_to_nat(1u);
v___x_5873_ = ((lean_object*)(l_Lasm_JS_Deno_stat___closed__2));
if (lean_obj_tag(v_path_5870_) == 0)
{
lean_object* v_value_5880_; lean_object* v___x_5882_; uint8_t v_isShared_5883_; uint8_t v_isSharedCheck_5887_; 
v_value_5880_ = lean_ctor_get(v_path_5870_, 0);
v_isSharedCheck_5887_ = !lean_is_exclusive(v_path_5870_);
if (v_isSharedCheck_5887_ == 0)
{
v___x_5882_ = v_path_5870_;
v_isShared_5883_ = v_isSharedCheck_5887_;
goto v_resetjp_5881_;
}
else
{
lean_inc(v_value_5880_);
lean_dec(v_path_5870_);
v___x_5882_ = lean_box(0);
v_isShared_5883_ = v_isSharedCheck_5887_;
goto v_resetjp_5881_;
}
v_resetjp_5881_:
{
lean_object* v___x_5885_; 
if (v_isShared_5883_ == 0)
{
lean_ctor_set_tag(v___x_5882_, 4);
v___x_5885_ = v___x_5882_;
goto v_reusejp_5884_;
}
else
{
lean_object* v_reuseFailAlloc_5886_; 
v_reuseFailAlloc_5886_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5886_, 0, v_value_5880_);
v___x_5885_ = v_reuseFailAlloc_5886_;
goto v_reusejp_5884_;
}
v_reusejp_5884_:
{
v___y_5875_ = v___x_5885_;
goto v___jp_5874_;
}
}
}
else
{
lean_object* v_value_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; 
v_value_5888_ = lean_ctor_get(v_path_5870_, 0);
lean_inc(v_value_5888_);
lean_dec_ref_known(v_path_5870_, 1);
v___x_5889_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5890_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5890_, 0, v_value_5888_);
lean_ctor_set(v___x_5890_, 1, v___x_5889_);
v___y_5875_ = v___x_5890_;
goto v___jp_5874_;
}
v___jp_5874_:
{
lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; 
v___x_5876_ = lean_mk_empty_array_with_capacity(v___x_5872_);
v___x_5877_ = lean_array_push(v___x_5876_, v___y_5875_);
v___x_5878_ = l_Lasm_JS_Web_Support_args(v___x_5877_);
v___x_5879_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5873_, v___x_5878_);
return v___x_5879_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat___boxed(lean_object* v_path_5891_, lean_object* v_a_5892_){
_start:
{
lean_object* v_res_5893_; 
v_res_5893_ = l_Lasm_JS_Deno_stat(v_path_5891_);
return v_res_5893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync(lean_object* v_path_5902_){
_start:
{
uint8_t v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___y_5908_; 
v___x_5904_ = 0;
v___x_5905_ = lean_unsigned_to_nat(1u);
v___x_5906_ = ((lean_object*)(l_Lasm_JS_Deno_statSync___closed__2));
if (lean_obj_tag(v_path_5902_) == 0)
{
lean_object* v_value_5913_; lean_object* v___x_5915_; uint8_t v_isShared_5916_; uint8_t v_isSharedCheck_5920_; 
v_value_5913_ = lean_ctor_get(v_path_5902_, 0);
v_isSharedCheck_5920_ = !lean_is_exclusive(v_path_5902_);
if (v_isSharedCheck_5920_ == 0)
{
v___x_5915_ = v_path_5902_;
v_isShared_5916_ = v_isSharedCheck_5920_;
goto v_resetjp_5914_;
}
else
{
lean_inc(v_value_5913_);
lean_dec(v_path_5902_);
v___x_5915_ = lean_box(0);
v_isShared_5916_ = v_isSharedCheck_5920_;
goto v_resetjp_5914_;
}
v_resetjp_5914_:
{
lean_object* v___x_5918_; 
if (v_isShared_5916_ == 0)
{
lean_ctor_set_tag(v___x_5915_, 4);
v___x_5918_ = v___x_5915_;
goto v_reusejp_5917_;
}
else
{
lean_object* v_reuseFailAlloc_5919_; 
v_reuseFailAlloc_5919_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5919_, 0, v_value_5913_);
v___x_5918_ = v_reuseFailAlloc_5919_;
goto v_reusejp_5917_;
}
v_reusejp_5917_:
{
v___y_5908_ = v___x_5918_;
goto v___jp_5907_;
}
}
}
else
{
lean_object* v_value_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; 
v_value_5921_ = lean_ctor_get(v_path_5902_, 0);
lean_inc(v_value_5921_);
lean_dec_ref_known(v_path_5902_, 1);
v___x_5922_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5923_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5923_, 0, v_value_5921_);
lean_ctor_set(v___x_5923_, 1, v___x_5922_);
v___y_5908_ = v___x_5923_;
goto v___jp_5907_;
}
v___jp_5907_:
{
lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; 
v___x_5909_ = lean_mk_empty_array_with_capacity(v___x_5905_);
v___x_5910_ = lean_array_push(v___x_5909_, v___y_5908_);
v___x_5911_ = l_Lasm_JS_Web_Support_args(v___x_5910_);
v___x_5912_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5906_, v___x_5911_, v___x_5904_);
return v___x_5912_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync___boxed(lean_object* v_path_5924_, lean_object* v_a_5925_){
_start:
{
lean_object* v_res_5926_; 
v_res_5926_ = l_Lasm_JS_Deno_statSync(v_path_5924_);
return v_res_5926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(lean_object* v_x_5927_){
_start:
{
if (lean_obj_tag(v_x_5927_) == 0)
{
lean_object* v___x_5928_; 
v___x_5928_ = lean_box(0);
return v___x_5928_;
}
else
{
lean_object* v_val_5929_; lean_object* v_append_5930_; lean_object* v_create_5931_; lean_object* v_createNew_5932_; lean_object* v_mode_5933_; lean_object* v_signal_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; 
v_val_5929_ = lean_ctor_get(v_x_5927_, 0);
v_append_5930_ = lean_ctor_get(v_val_5929_, 0);
v_create_5931_ = lean_ctor_get(v_val_5929_, 1);
v_createNew_5932_ = lean_ctor_get(v_val_5929_, 2);
v_mode_5933_ = lean_ctor_get(v_val_5929_, 3);
v_signal_5934_ = lean_ctor_get(v_val_5929_, 4);
v___x_5935_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_5936_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_5930_);
v___x_5937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5937_, 0, v___x_5935_);
lean_ctor_set(v___x_5937_, 1, v___x_5936_);
v___x_5938_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_5939_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_5931_);
v___x_5940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5940_, 0, v___x_5938_);
lean_ctor_set(v___x_5940_, 1, v___x_5939_);
v___x_5941_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_5942_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_5932_);
v___x_5943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5943_, 0, v___x_5941_);
lean_ctor_set(v___x_5943_, 1, v___x_5942_);
v___x_5944_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_5945_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_5933_);
v___x_5946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5944_);
lean_ctor_set(v___x_5946_, 1, v___x_5945_);
v___x_5947_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5948_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_5934_);
v___x_5949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5949_, 0, v___x_5947_);
lean_ctor_set(v___x_5949_, 1, v___x_5948_);
v___x_5950_ = lean_unsigned_to_nat(5u);
v___x_5951_ = lean_mk_empty_array_with_capacity(v___x_5950_);
v___x_5952_ = lean_array_push(v___x_5951_, v___x_5937_);
v___x_5953_ = lean_array_push(v___x_5952_, v___x_5940_);
v___x_5954_ = lean_array_push(v___x_5953_, v___x_5943_);
v___x_5955_ = lean_array_push(v___x_5954_, v___x_5946_);
v___x_5956_ = lean_array_push(v___x_5955_, v___x_5949_);
v___x_5957_ = l_Lasm_JS_Web_Support_fields(v___x_5956_);
lean_dec_ref(v___x_5956_);
return v___x_5957_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0___boxed(lean_object* v_x_5958_){
_start:
{
lean_object* v_res_5959_; 
v_res_5959_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_x_5958_);
lean_dec(v_x_5958_);
return v_res_5959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile(lean_object* v_path_5968_, lean_object* v_data_5969_, lean_object* v_options_5970_){
_start:
{
lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___y_5975_; lean_object* v___y_5976_; lean_object* v___y_5985_; 
v___x_5972_ = lean_unsigned_to_nat(3u);
v___x_5973_ = ((lean_object*)(l_Lasm_JS_Deno_writeFile___closed__2));
if (lean_obj_tag(v_path_5968_) == 0)
{
lean_object* v_value_5997_; lean_object* v___x_5999_; uint8_t v_isShared_6000_; uint8_t v_isSharedCheck_6004_; 
v_value_5997_ = lean_ctor_get(v_path_5968_, 0);
v_isSharedCheck_6004_ = !lean_is_exclusive(v_path_5968_);
if (v_isSharedCheck_6004_ == 0)
{
v___x_5999_ = v_path_5968_;
v_isShared_6000_ = v_isSharedCheck_6004_;
goto v_resetjp_5998_;
}
else
{
lean_inc(v_value_5997_);
lean_dec(v_path_5968_);
v___x_5999_ = lean_box(0);
v_isShared_6000_ = v_isSharedCheck_6004_;
goto v_resetjp_5998_;
}
v_resetjp_5998_:
{
lean_object* v___x_6002_; 
if (v_isShared_6000_ == 0)
{
lean_ctor_set_tag(v___x_5999_, 4);
v___x_6002_ = v___x_5999_;
goto v_reusejp_6001_;
}
else
{
lean_object* v_reuseFailAlloc_6003_; 
v_reuseFailAlloc_6003_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6003_, 0, v_value_5997_);
v___x_6002_ = v_reuseFailAlloc_6003_;
goto v_reusejp_6001_;
}
v_reusejp_6001_:
{
v___y_5985_ = v___x_6002_;
goto v___jp_5984_;
}
}
}
else
{
lean_object* v_value_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; 
v_value_6005_ = lean_ctor_get(v_path_5968_, 0);
lean_inc(v_value_6005_);
lean_dec_ref_known(v_path_5968_, 1);
v___x_6006_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6007_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6007_, 0, v_value_6005_);
lean_ctor_set(v___x_6007_, 1, v___x_6006_);
v___y_5985_ = v___x_6007_;
goto v___jp_5984_;
}
v___jp_5974_:
{
lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; 
v___x_5977_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_5970_);
v___x_5978_ = lean_mk_empty_array_with_capacity(v___x_5972_);
v___x_5979_ = lean_array_push(v___x_5978_, v___y_5975_);
v___x_5980_ = lean_array_push(v___x_5979_, v___y_5976_);
v___x_5981_ = lean_array_push(v___x_5980_, v___x_5977_);
v___x_5982_ = l_Lasm_JS_Web_Support_args(v___x_5981_);
v___x_5983_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5973_, v___x_5982_);
return v___x_5983_;
}
v___jp_5984_:
{
if (lean_obj_tag(v_data_5969_) == 0)
{
lean_object* v_value_5986_; lean_object* v___x_5988_; uint8_t v_isShared_5989_; uint8_t v_isSharedCheck_5993_; 
v_value_5986_ = lean_ctor_get(v_data_5969_, 0);
v_isSharedCheck_5993_ = !lean_is_exclusive(v_data_5969_);
if (v_isSharedCheck_5993_ == 0)
{
v___x_5988_ = v_data_5969_;
v_isShared_5989_ = v_isSharedCheck_5993_;
goto v_resetjp_5987_;
}
else
{
lean_inc(v_value_5986_);
lean_dec(v_data_5969_);
v___x_5988_ = lean_box(0);
v_isShared_5989_ = v_isSharedCheck_5993_;
goto v_resetjp_5987_;
}
v_resetjp_5987_:
{
lean_object* v___x_5991_; 
if (v_isShared_5989_ == 0)
{
lean_ctor_set_tag(v___x_5988_, 6);
v___x_5991_ = v___x_5988_;
goto v_reusejp_5990_;
}
else
{
lean_object* v_reuseFailAlloc_5992_; 
v_reuseFailAlloc_5992_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5992_, 0, v_value_5986_);
v___x_5991_ = v_reuseFailAlloc_5992_;
goto v_reusejp_5990_;
}
v_reusejp_5990_:
{
v___y_5975_ = v___y_5985_;
v___y_5976_ = v___x_5991_;
goto v___jp_5974_;
}
}
}
else
{
lean_object* v_value_5994_; lean_object* v___x_5995_; lean_object* v___x_5996_; 
v_value_5994_ = lean_ctor_get(v_data_5969_, 0);
lean_inc(v_value_5994_);
lean_dec_ref_known(v_data_5969_, 1);
v___x_5995_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5996_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5996_, 0, v_value_5994_);
lean_ctor_set(v___x_5996_, 1, v___x_5995_);
v___y_5975_ = v___y_5985_;
v___y_5976_ = v___x_5996_;
goto v___jp_5974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile___boxed(lean_object* v_path_6008_, lean_object* v_data_6009_, lean_object* v_options_6010_, lean_object* v_a_6011_){
_start:
{
lean_object* v_res_6012_; 
v_res_6012_ = l_Lasm_JS_Deno_writeFile(v_path_6008_, v_data_6009_, v_options_6010_);
lean_dec(v_options_6010_);
return v_res_6012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync(lean_object* v_path_6021_, lean_object* v_data_6022_, lean_object* v_options_6023_){
_start:
{
uint8_t v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___y_6029_; 
v___x_6025_ = 0;
v___x_6026_ = lean_unsigned_to_nat(3u);
v___x_6027_ = ((lean_object*)(l_Lasm_JS_Deno_writeFileSync___closed__2));
if (lean_obj_tag(v_path_6021_) == 0)
{
lean_object* v_value_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6045_; 
v_value_6038_ = lean_ctor_get(v_path_6021_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v_path_6021_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_6040_ = v_path_6021_;
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
else
{
lean_inc(v_value_6038_);
lean_dec(v_path_6021_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v___x_6043_; 
if (v_isShared_6041_ == 0)
{
lean_ctor_set_tag(v___x_6040_, 4);
v___x_6043_ = v___x_6040_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6044_, 0, v_value_6038_);
v___x_6043_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
v___y_6029_ = v___x_6043_;
goto v___jp_6028_;
}
}
}
else
{
lean_object* v_value_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; 
v_value_6046_ = lean_ctor_get(v_path_6021_, 0);
lean_inc(v_value_6046_);
lean_dec_ref_known(v_path_6021_, 1);
v___x_6047_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6048_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6048_, 0, v_value_6046_);
lean_ctor_set(v___x_6048_, 1, v___x_6047_);
v___y_6029_ = v___x_6048_;
goto v___jp_6028_;
}
v___jp_6028_:
{
lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; 
v___x_6030_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6030_, 0, v_data_6022_);
v___x_6031_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6023_);
v___x_6032_ = lean_mk_empty_array_with_capacity(v___x_6026_);
v___x_6033_ = lean_array_push(v___x_6032_, v___y_6029_);
v___x_6034_ = lean_array_push(v___x_6033_, v___x_6030_);
v___x_6035_ = lean_array_push(v___x_6034_, v___x_6031_);
v___x_6036_ = l_Lasm_JS_Web_Support_args(v___x_6035_);
v___x_6037_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6027_, v___x_6036_, v___x_6025_);
return v___x_6037_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync___boxed(lean_object* v_path_6049_, lean_object* v_data_6050_, lean_object* v_options_6051_, lean_object* v_a_6052_){
_start:
{
lean_object* v_res_6053_; 
v_res_6053_ = l_Lasm_JS_Deno_writeFileSync(v_path_6049_, v_data_6050_, v_options_6051_);
lean_dec(v_options_6051_);
return v_res_6053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile(lean_object* v_path_6062_, lean_object* v_data_6063_, lean_object* v_options_6064_){
_start:
{
lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___y_6069_; lean_object* v___y_6070_; lean_object* v___y_6079_; 
v___x_6066_ = lean_unsigned_to_nat(3u);
v___x_6067_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFile___closed__2));
if (lean_obj_tag(v_path_6062_) == 0)
{
lean_object* v_value_6091_; lean_object* v___x_6093_; uint8_t v_isShared_6094_; uint8_t v_isSharedCheck_6098_; 
v_value_6091_ = lean_ctor_get(v_path_6062_, 0);
v_isSharedCheck_6098_ = !lean_is_exclusive(v_path_6062_);
if (v_isSharedCheck_6098_ == 0)
{
v___x_6093_ = v_path_6062_;
v_isShared_6094_ = v_isSharedCheck_6098_;
goto v_resetjp_6092_;
}
else
{
lean_inc(v_value_6091_);
lean_dec(v_path_6062_);
v___x_6093_ = lean_box(0);
v_isShared_6094_ = v_isSharedCheck_6098_;
goto v_resetjp_6092_;
}
v_resetjp_6092_:
{
lean_object* v___x_6096_; 
if (v_isShared_6094_ == 0)
{
lean_ctor_set_tag(v___x_6093_, 4);
v___x_6096_ = v___x_6093_;
goto v_reusejp_6095_;
}
else
{
lean_object* v_reuseFailAlloc_6097_; 
v_reuseFailAlloc_6097_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6097_, 0, v_value_6091_);
v___x_6096_ = v_reuseFailAlloc_6097_;
goto v_reusejp_6095_;
}
v_reusejp_6095_:
{
v___y_6079_ = v___x_6096_;
goto v___jp_6078_;
}
}
}
else
{
lean_object* v_value_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; 
v_value_6099_ = lean_ctor_get(v_path_6062_, 0);
lean_inc(v_value_6099_);
lean_dec_ref_known(v_path_6062_, 1);
v___x_6100_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6101_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6101_, 0, v_value_6099_);
lean_ctor_set(v___x_6101_, 1, v___x_6100_);
v___y_6079_ = v___x_6101_;
goto v___jp_6078_;
}
v___jp_6068_:
{
lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; 
v___x_6071_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6064_);
v___x_6072_ = lean_mk_empty_array_with_capacity(v___x_6066_);
v___x_6073_ = lean_array_push(v___x_6072_, v___y_6069_);
v___x_6074_ = lean_array_push(v___x_6073_, v___y_6070_);
v___x_6075_ = lean_array_push(v___x_6074_, v___x_6071_);
v___x_6076_ = l_Lasm_JS_Web_Support_args(v___x_6075_);
v___x_6077_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6067_, v___x_6076_);
return v___x_6077_;
}
v___jp_6078_:
{
if (lean_obj_tag(v_data_6063_) == 0)
{
lean_object* v_value_6080_; lean_object* v___x_6082_; uint8_t v_isShared_6083_; uint8_t v_isSharedCheck_6087_; 
v_value_6080_ = lean_ctor_get(v_data_6063_, 0);
v_isSharedCheck_6087_ = !lean_is_exclusive(v_data_6063_);
if (v_isSharedCheck_6087_ == 0)
{
v___x_6082_ = v_data_6063_;
v_isShared_6083_ = v_isSharedCheck_6087_;
goto v_resetjp_6081_;
}
else
{
lean_inc(v_value_6080_);
lean_dec(v_data_6063_);
v___x_6082_ = lean_box(0);
v_isShared_6083_ = v_isSharedCheck_6087_;
goto v_resetjp_6081_;
}
v_resetjp_6081_:
{
lean_object* v___x_6085_; 
if (v_isShared_6083_ == 0)
{
lean_ctor_set_tag(v___x_6082_, 4);
v___x_6085_ = v___x_6082_;
goto v_reusejp_6084_;
}
else
{
lean_object* v_reuseFailAlloc_6086_; 
v_reuseFailAlloc_6086_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6086_, 0, v_value_6080_);
v___x_6085_ = v_reuseFailAlloc_6086_;
goto v_reusejp_6084_;
}
v_reusejp_6084_:
{
v___y_6069_ = v___y_6079_;
v___y_6070_ = v___x_6085_;
goto v___jp_6068_;
}
}
}
else
{
lean_object* v_value_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; 
v_value_6088_ = lean_ctor_get(v_data_6063_, 0);
lean_inc(v_value_6088_);
lean_dec_ref_known(v_data_6063_, 1);
v___x_6089_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6090_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6090_, 0, v_value_6088_);
lean_ctor_set(v___x_6090_, 1, v___x_6089_);
v___y_6069_ = v___y_6079_;
v___y_6070_ = v___x_6090_;
goto v___jp_6068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile___boxed(lean_object* v_path_6102_, lean_object* v_data_6103_, lean_object* v_options_6104_, lean_object* v_a_6105_){
_start:
{
lean_object* v_res_6106_; 
v_res_6106_ = l_Lasm_JS_Deno_writeTextFile(v_path_6102_, v_data_6103_, v_options_6104_);
lean_dec(v_options_6104_);
return v_res_6106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync(lean_object* v_path_6115_, lean_object* v_data_6116_, lean_object* v_options_6117_){
_start:
{
uint8_t v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___y_6123_; 
v___x_6119_ = 0;
v___x_6120_ = lean_unsigned_to_nat(3u);
v___x_6121_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFileSync___closed__2));
if (lean_obj_tag(v_path_6115_) == 0)
{
lean_object* v_value_6132_; lean_object* v___x_6134_; uint8_t v_isShared_6135_; uint8_t v_isSharedCheck_6139_; 
v_value_6132_ = lean_ctor_get(v_path_6115_, 0);
v_isSharedCheck_6139_ = !lean_is_exclusive(v_path_6115_);
if (v_isSharedCheck_6139_ == 0)
{
v___x_6134_ = v_path_6115_;
v_isShared_6135_ = v_isSharedCheck_6139_;
goto v_resetjp_6133_;
}
else
{
lean_inc(v_value_6132_);
lean_dec(v_path_6115_);
v___x_6134_ = lean_box(0);
v_isShared_6135_ = v_isSharedCheck_6139_;
goto v_resetjp_6133_;
}
v_resetjp_6133_:
{
lean_object* v___x_6137_; 
if (v_isShared_6135_ == 0)
{
lean_ctor_set_tag(v___x_6134_, 4);
v___x_6137_ = v___x_6134_;
goto v_reusejp_6136_;
}
else
{
lean_object* v_reuseFailAlloc_6138_; 
v_reuseFailAlloc_6138_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6138_, 0, v_value_6132_);
v___x_6137_ = v_reuseFailAlloc_6138_;
goto v_reusejp_6136_;
}
v_reusejp_6136_:
{
v___y_6123_ = v___x_6137_;
goto v___jp_6122_;
}
}
}
else
{
lean_object* v_value_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; 
v_value_6140_ = lean_ctor_get(v_path_6115_, 0);
lean_inc(v_value_6140_);
lean_dec_ref_known(v_path_6115_, 1);
v___x_6141_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6142_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6142_, 0, v_value_6140_);
lean_ctor_set(v___x_6142_, 1, v___x_6141_);
v___y_6123_ = v___x_6142_;
goto v___jp_6122_;
}
v___jp_6122_:
{
lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; 
v___x_6124_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6124_, 0, v_data_6116_);
v___x_6125_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6117_);
v___x_6126_ = lean_mk_empty_array_with_capacity(v___x_6120_);
v___x_6127_ = lean_array_push(v___x_6126_, v___y_6123_);
v___x_6128_ = lean_array_push(v___x_6127_, v___x_6124_);
v___x_6129_ = lean_array_push(v___x_6128_, v___x_6125_);
v___x_6130_ = l_Lasm_JS_Web_Support_args(v___x_6129_);
v___x_6131_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6121_, v___x_6130_, v___x_6119_);
return v___x_6131_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync___boxed(lean_object* v_path_6143_, lean_object* v_data_6144_, lean_object* v_options_6145_, lean_object* v_a_6146_){
_start:
{
lean_object* v_res_6147_; 
v_res_6147_ = l_Lasm_JS_Deno_writeTextFileSync(v_path_6143_, v_data_6144_, v_options_6145_);
lean_dec(v_options_6145_);
return v_res_6147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate(lean_object* v_name_6156_, lean_object* v_len_6157_){
_start:
{
lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; 
v___x_6159_ = lean_unsigned_to_nat(2u);
v___x_6160_ = ((lean_object*)(l_Lasm_JS_Deno_truncate___closed__2));
v___x_6161_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6161_, 0, v_name_6156_);
v___x_6162_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6157_);
v___x_6163_ = lean_mk_empty_array_with_capacity(v___x_6159_);
v___x_6164_ = lean_array_push(v___x_6163_, v___x_6161_);
v___x_6165_ = lean_array_push(v___x_6164_, v___x_6162_);
v___x_6166_ = l_Lasm_JS_Web_Support_args(v___x_6165_);
v___x_6167_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6160_, v___x_6166_);
return v___x_6167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate___boxed(lean_object* v_name_6168_, lean_object* v_len_6169_, lean_object* v_a_6170_){
_start:
{
lean_object* v_res_6171_; 
v_res_6171_ = l_Lasm_JS_Deno_truncate(v_name_6168_, v_len_6169_);
lean_dec(v_len_6169_);
return v_res_6171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync(lean_object* v_name_6180_, lean_object* v_len_6181_){
_start:
{
uint8_t v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; 
v___x_6183_ = 0;
v___x_6184_ = lean_unsigned_to_nat(2u);
v___x_6185_ = ((lean_object*)(l_Lasm_JS_Deno_truncateSync___closed__2));
v___x_6186_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6186_, 0, v_name_6180_);
v___x_6187_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6181_);
v___x_6188_ = lean_mk_empty_array_with_capacity(v___x_6184_);
v___x_6189_ = lean_array_push(v___x_6188_, v___x_6186_);
v___x_6190_ = lean_array_push(v___x_6189_, v___x_6187_);
v___x_6191_ = l_Lasm_JS_Web_Support_args(v___x_6190_);
v___x_6192_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6185_, v___x_6191_, v___x_6183_);
return v___x_6192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync___boxed(lean_object* v_name_6193_, lean_object* v_len_6194_, lean_object* v_a_6195_){
_start:
{
lean_object* v_res_6196_; 
v_res_6196_ = l_Lasm_JS_Deno_truncateSync(v_name_6193_, v_len_6194_);
lean_dec(v_len_6194_);
return v_res_6196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(lean_object* v_x_6197_){
_start:
{
if (lean_obj_tag(v_x_6197_) == 0)
{
lean_object* v___x_6198_; 
v___x_6198_ = lean_box(0);
return v___x_6198_;
}
else
{
lean_object* v_val_6199_; 
v_val_6199_ = lean_ctor_get(v_x_6197_, 0);
lean_inc(v_val_6199_);
lean_dec_ref_known(v_x_6197_, 1);
if (lean_obj_tag(v_val_6199_) == 0)
{
lean_object* v_value_6200_; lean_object* v___x_6202_; uint8_t v_isShared_6203_; uint8_t v_isSharedCheck_6207_; 
v_value_6200_ = lean_ctor_get(v_val_6199_, 0);
v_isSharedCheck_6207_ = !lean_is_exclusive(v_val_6199_);
if (v_isSharedCheck_6207_ == 0)
{
v___x_6202_ = v_val_6199_;
v_isShared_6203_ = v_isSharedCheck_6207_;
goto v_resetjp_6201_;
}
else
{
lean_inc(v_value_6200_);
lean_dec(v_val_6199_);
v___x_6202_ = lean_box(0);
v_isShared_6203_ = v_isSharedCheck_6207_;
goto v_resetjp_6201_;
}
v_resetjp_6201_:
{
lean_object* v___x_6205_; 
if (v_isShared_6203_ == 0)
{
lean_ctor_set_tag(v___x_6202_, 4);
v___x_6205_ = v___x_6202_;
goto v_reusejp_6204_;
}
else
{
lean_object* v_reuseFailAlloc_6206_; 
v_reuseFailAlloc_6206_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6206_, 0, v_value_6200_);
v___x_6205_ = v_reuseFailAlloc_6206_;
goto v_reusejp_6204_;
}
v_reusejp_6204_:
{
return v___x_6205_;
}
}
}
else
{
lean_object* v_value_6208_; lean_object* v___x_6210_; uint8_t v_isShared_6211_; uint8_t v_isSharedCheck_6218_; 
v_value_6208_ = lean_ctor_get(v_val_6199_, 0);
v_isSharedCheck_6218_ = !lean_is_exclusive(v_val_6199_);
if (v_isSharedCheck_6218_ == 0)
{
v___x_6210_ = v_val_6199_;
v_isShared_6211_ = v_isSharedCheck_6218_;
goto v_resetjp_6209_;
}
else
{
lean_inc(v_value_6208_);
lean_dec(v_val_6199_);
v___x_6210_ = lean_box(0);
v_isShared_6211_ = v_isSharedCheck_6218_;
goto v_resetjp_6209_;
}
v_resetjp_6209_:
{
size_t v_sz_6212_; size_t v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6216_; 
v_sz_6212_ = lean_array_size(v_value_6208_);
v___x_6213_ = ((size_t)0ULL);
v___x_6214_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6212_, v___x_6213_, v_value_6208_);
if (v_isShared_6211_ == 0)
{
lean_ctor_set_tag(v___x_6210_, 7);
lean_ctor_set(v___x_6210_, 0, v___x_6214_);
v___x_6216_ = v___x_6210_;
goto v_reusejp_6215_;
}
else
{
lean_object* v_reuseFailAlloc_6217_; 
v_reuseFailAlloc_6217_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6217_, 0, v___x_6214_);
v___x_6216_ = v_reuseFailAlloc_6217_;
goto v_reusejp_6215_;
}
v_reusejp_6215_:
{
return v___x_6216_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(lean_object* v_x_6219_){
_start:
{
if (lean_obj_tag(v_x_6219_) == 0)
{
lean_object* v___x_6220_; 
v___x_6220_ = lean_box(0);
return v___x_6220_;
}
else
{
lean_object* v_val_6221_; lean_object* v_recursive_6222_; lean_object* v_ignore_6223_; lean_object* v___x_6225_; uint8_t v_isShared_6226_; uint8_t v_isSharedCheck_6240_; 
v_val_6221_ = lean_ctor_get(v_x_6219_, 0);
lean_inc(v_val_6221_);
lean_dec_ref_known(v_x_6219_, 1);
v_recursive_6222_ = lean_ctor_get(v_val_6221_, 0);
v_ignore_6223_ = lean_ctor_get(v_val_6221_, 1);
v_isSharedCheck_6240_ = !lean_is_exclusive(v_val_6221_);
if (v_isSharedCheck_6240_ == 0)
{
v___x_6225_ = v_val_6221_;
v_isShared_6226_ = v_isSharedCheck_6240_;
goto v_resetjp_6224_;
}
else
{
lean_inc(v_ignore_6223_);
lean_inc(v_recursive_6222_);
lean_dec(v_val_6221_);
v___x_6225_ = lean_box(0);
v_isShared_6226_ = v_isSharedCheck_6240_;
goto v_resetjp_6224_;
}
v_resetjp_6224_:
{
lean_object* v___x_6227_; lean_object* v___x_6228_; lean_object* v___x_6230_; 
v___x_6227_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_6228_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_6222_);
lean_dec(v_recursive_6222_);
if (v_isShared_6226_ == 0)
{
lean_ctor_set(v___x_6225_, 1, v___x_6228_);
lean_ctor_set(v___x_6225_, 0, v___x_6227_);
v___x_6230_ = v___x_6225_;
goto v_reusejp_6229_;
}
else
{
lean_object* v_reuseFailAlloc_6239_; 
v_reuseFailAlloc_6239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6239_, 0, v___x_6227_);
lean_ctor_set(v_reuseFailAlloc_6239_, 1, v___x_6228_);
v___x_6230_ = v_reuseFailAlloc_6239_;
goto v_reusejp_6229_;
}
v_reusejp_6229_:
{
lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; lean_object* v___x_6238_; 
v___x_6231_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0));
v___x_6232_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(v_ignore_6223_);
v___x_6233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6233_, 0, v___x_6231_);
lean_ctor_set(v___x_6233_, 1, v___x_6232_);
v___x_6234_ = lean_unsigned_to_nat(2u);
v___x_6235_ = lean_mk_empty_array_with_capacity(v___x_6234_);
v___x_6236_ = lean_array_push(v___x_6235_, v___x_6230_);
v___x_6237_ = lean_array_push(v___x_6236_, v___x_6233_);
v___x_6238_ = l_Lasm_JS_Web_Support_fields(v___x_6237_);
lean_dec_ref(v___x_6237_);
return v___x_6238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs(lean_object* v_paths_6249_, lean_object* v_options_6250_){
_start:
{
uint8_t v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; lean_object* v___y_6256_; 
v___x_6252_ = 0;
v___x_6253_ = lean_unsigned_to_nat(2u);
v___x_6254_ = ((lean_object*)(l_Lasm_JS_Deno_watchFs___closed__2));
if (lean_obj_tag(v_paths_6249_) == 0)
{
lean_object* v_value_6279_; lean_object* v___x_6281_; uint8_t v_isShared_6282_; uint8_t v_isSharedCheck_6286_; 
v_value_6279_ = lean_ctor_get(v_paths_6249_, 0);
v_isSharedCheck_6286_ = !lean_is_exclusive(v_paths_6249_);
if (v_isSharedCheck_6286_ == 0)
{
v___x_6281_ = v_paths_6249_;
v_isShared_6282_ = v_isSharedCheck_6286_;
goto v_resetjp_6280_;
}
else
{
lean_inc(v_value_6279_);
lean_dec(v_paths_6249_);
v___x_6281_ = lean_box(0);
v_isShared_6282_ = v_isSharedCheck_6286_;
goto v_resetjp_6280_;
}
v_resetjp_6280_:
{
lean_object* v___x_6284_; 
if (v_isShared_6282_ == 0)
{
lean_ctor_set_tag(v___x_6281_, 4);
v___x_6284_ = v___x_6281_;
goto v_reusejp_6283_;
}
else
{
lean_object* v_reuseFailAlloc_6285_; 
v_reuseFailAlloc_6285_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6285_, 0, v_value_6279_);
v___x_6284_ = v_reuseFailAlloc_6285_;
goto v_reusejp_6283_;
}
v_reusejp_6283_:
{
v___y_6256_ = v___x_6284_;
goto v___jp_6255_;
}
}
}
else
{
lean_object* v_value_6287_; lean_object* v___x_6289_; uint8_t v_isShared_6290_; uint8_t v_isSharedCheck_6297_; 
v_value_6287_ = lean_ctor_get(v_paths_6249_, 0);
v_isSharedCheck_6297_ = !lean_is_exclusive(v_paths_6249_);
if (v_isSharedCheck_6297_ == 0)
{
v___x_6289_ = v_paths_6249_;
v_isShared_6290_ = v_isSharedCheck_6297_;
goto v_resetjp_6288_;
}
else
{
lean_inc(v_value_6287_);
lean_dec(v_paths_6249_);
v___x_6289_ = lean_box(0);
v_isShared_6290_ = v_isSharedCheck_6297_;
goto v_resetjp_6288_;
}
v_resetjp_6288_:
{
size_t v_sz_6291_; size_t v___x_6292_; lean_object* v___x_6293_; lean_object* v___x_6295_; 
v_sz_6291_ = lean_array_size(v_value_6287_);
v___x_6292_ = ((size_t)0ULL);
v___x_6293_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6291_, v___x_6292_, v_value_6287_);
if (v_isShared_6290_ == 0)
{
lean_ctor_set_tag(v___x_6289_, 7);
lean_ctor_set(v___x_6289_, 0, v___x_6293_);
v___x_6295_ = v___x_6289_;
goto v_reusejp_6294_;
}
else
{
lean_object* v_reuseFailAlloc_6296_; 
v_reuseFailAlloc_6296_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6296_, 0, v___x_6293_);
v___x_6295_ = v_reuseFailAlloc_6296_;
goto v_reusejp_6294_;
}
v_reusejp_6294_:
{
v___y_6256_ = v___x_6295_;
goto v___jp_6255_;
}
}
}
v___jp_6255_:
{
lean_object* v___x_6257_; lean_object* v___x_6258_; lean_object* v___x_6259_; lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; 
v___x_6257_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(v_options_6250_);
v___x_6258_ = lean_mk_empty_array_with_capacity(v___x_6253_);
v___x_6259_ = lean_array_push(v___x_6258_, v___y_6256_);
v___x_6260_ = lean_array_push(v___x_6259_, v___x_6257_);
v___x_6261_ = l_Lasm_JS_Web_Support_args(v___x_6260_);
v___x_6262_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_6254_, v___x_6261_, v___x_6252_);
if (lean_obj_tag(v___x_6262_) == 0)
{
lean_object* v_a_6263_; lean_object* v___x_6265_; uint8_t v_isShared_6266_; uint8_t v_isSharedCheck_6270_; 
v_a_6263_ = lean_ctor_get(v___x_6262_, 0);
v_isSharedCheck_6270_ = !lean_is_exclusive(v___x_6262_);
if (v_isSharedCheck_6270_ == 0)
{
v___x_6265_ = v___x_6262_;
v_isShared_6266_ = v_isSharedCheck_6270_;
goto v_resetjp_6264_;
}
else
{
lean_inc(v_a_6263_);
lean_dec(v___x_6262_);
v___x_6265_ = lean_box(0);
v_isShared_6266_ = v_isSharedCheck_6270_;
goto v_resetjp_6264_;
}
v_resetjp_6264_:
{
lean_object* v___x_6268_; 
if (v_isShared_6266_ == 0)
{
v___x_6268_ = v___x_6265_;
goto v_reusejp_6267_;
}
else
{
lean_object* v_reuseFailAlloc_6269_; 
v_reuseFailAlloc_6269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6269_, 0, v_a_6263_);
v___x_6268_ = v_reuseFailAlloc_6269_;
goto v_reusejp_6267_;
}
v_reusejp_6267_:
{
return v___x_6268_;
}
}
}
else
{
lean_object* v_a_6271_; lean_object* v___x_6273_; uint8_t v_isShared_6274_; uint8_t v_isSharedCheck_6278_; 
v_a_6271_ = lean_ctor_get(v___x_6262_, 0);
v_isSharedCheck_6278_ = !lean_is_exclusive(v___x_6262_);
if (v_isSharedCheck_6278_ == 0)
{
v___x_6273_ = v___x_6262_;
v_isShared_6274_ = v_isSharedCheck_6278_;
goto v_resetjp_6272_;
}
else
{
lean_inc(v_a_6271_);
lean_dec(v___x_6262_);
v___x_6273_ = lean_box(0);
v_isShared_6274_ = v_isSharedCheck_6278_;
goto v_resetjp_6272_;
}
v_resetjp_6272_:
{
lean_object* v___x_6276_; 
if (v_isShared_6274_ == 0)
{
v___x_6276_ = v___x_6273_;
goto v_reusejp_6275_;
}
else
{
lean_object* v_reuseFailAlloc_6277_; 
v_reuseFailAlloc_6277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6277_, 0, v_a_6271_);
v___x_6276_ = v_reuseFailAlloc_6277_;
goto v_reusejp_6275_;
}
v_reusejp_6275_:
{
return v___x_6276_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs___boxed(lean_object* v_paths_6298_, lean_object* v_options_6299_, lean_object* v_a_6300_){
_start:
{
lean_object* v_res_6301_; 
v_res_6301_ = l_Lasm_JS_Deno_watchFs(v_paths_6298_, v_options_6299_);
return v_res_6301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(lean_object* v_x_6302_){
_start:
{
if (lean_obj_tag(v_x_6302_) == 0)
{
lean_object* v___x_6303_; 
v___x_6303_ = lean_box(0);
return v___x_6303_;
}
else
{
lean_object* v_val_6304_; lean_object* v___x_6305_; lean_object* v___y_6307_; uint8_t v___x_6313_; 
v_val_6304_ = lean_ctor_get(v_x_6302_, 0);
v___x_6305_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0));
v___x_6313_ = lean_unbox(v_val_6304_);
switch(v___x_6313_)
{
case 0:
{
lean_object* v___x_6314_; 
v___x_6314_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
v___y_6307_ = v___x_6314_;
goto v___jp_6306_;
}
case 1:
{
lean_object* v___x_6315_; 
v___x_6315_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
v___y_6307_ = v___x_6315_;
goto v___jp_6306_;
}
default: 
{
lean_object* v___x_6316_; 
v___x_6316_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
v___y_6307_ = v___x_6316_;
goto v___jp_6306_;
}
}
v___jp_6306_:
{
lean_object* v___x_6308_; lean_object* v___x_6309_; lean_object* v___x_6310_; lean_object* v___x_6311_; lean_object* v___x_6312_; 
lean_inc(v___y_6307_);
v___x_6308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6308_, 0, v___x_6305_);
lean_ctor_set(v___x_6308_, 1, v___y_6307_);
v___x_6309_ = lean_unsigned_to_nat(1u);
v___x_6310_ = lean_mk_empty_array_with_capacity(v___x_6309_);
v___x_6311_ = lean_array_push(v___x_6310_, v___x_6308_);
v___x_6312_ = l_Lasm_JS_Web_Support_fields(v___x_6311_);
lean_dec_ref(v___x_6311_);
return v___x_6312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0___boxed(lean_object* v_x_6317_){
_start:
{
lean_object* v_res_6318_; 
v_res_6318_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_x_6317_);
lean_dec(v_x_6317_);
return v_res_6318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink(lean_object* v_oldpath_6327_, lean_object* v_newpath_6328_, lean_object* v_options_6329_){
_start:
{
lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___y_6334_; lean_object* v___y_6335_; lean_object* v___y_6344_; 
v___x_6331_ = lean_unsigned_to_nat(3u);
v___x_6332_ = ((lean_object*)(l_Lasm_JS_Deno_symlink___closed__2));
if (lean_obj_tag(v_oldpath_6327_) == 0)
{
lean_object* v_value_6356_; lean_object* v___x_6358_; uint8_t v_isShared_6359_; uint8_t v_isSharedCheck_6363_; 
v_value_6356_ = lean_ctor_get(v_oldpath_6327_, 0);
v_isSharedCheck_6363_ = !lean_is_exclusive(v_oldpath_6327_);
if (v_isSharedCheck_6363_ == 0)
{
v___x_6358_ = v_oldpath_6327_;
v_isShared_6359_ = v_isSharedCheck_6363_;
goto v_resetjp_6357_;
}
else
{
lean_inc(v_value_6356_);
lean_dec(v_oldpath_6327_);
v___x_6358_ = lean_box(0);
v_isShared_6359_ = v_isSharedCheck_6363_;
goto v_resetjp_6357_;
}
v_resetjp_6357_:
{
lean_object* v___x_6361_; 
if (v_isShared_6359_ == 0)
{
lean_ctor_set_tag(v___x_6358_, 4);
v___x_6361_ = v___x_6358_;
goto v_reusejp_6360_;
}
else
{
lean_object* v_reuseFailAlloc_6362_; 
v_reuseFailAlloc_6362_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6362_, 0, v_value_6356_);
v___x_6361_ = v_reuseFailAlloc_6362_;
goto v_reusejp_6360_;
}
v_reusejp_6360_:
{
v___y_6344_ = v___x_6361_;
goto v___jp_6343_;
}
}
}
else
{
lean_object* v_value_6364_; lean_object* v___x_6365_; lean_object* v___x_6366_; 
v_value_6364_ = lean_ctor_get(v_oldpath_6327_, 0);
lean_inc(v_value_6364_);
lean_dec_ref_known(v_oldpath_6327_, 1);
v___x_6365_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6366_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6366_, 0, v_value_6364_);
lean_ctor_set(v___x_6366_, 1, v___x_6365_);
v___y_6344_ = v___x_6366_;
goto v___jp_6343_;
}
v___jp_6333_:
{
lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; 
v___x_6336_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6329_);
v___x_6337_ = lean_mk_empty_array_with_capacity(v___x_6331_);
v___x_6338_ = lean_array_push(v___x_6337_, v___y_6334_);
v___x_6339_ = lean_array_push(v___x_6338_, v___y_6335_);
v___x_6340_ = lean_array_push(v___x_6339_, v___x_6336_);
v___x_6341_ = l_Lasm_JS_Web_Support_args(v___x_6340_);
v___x_6342_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6332_, v___x_6341_);
return v___x_6342_;
}
v___jp_6343_:
{
if (lean_obj_tag(v_newpath_6328_) == 0)
{
lean_object* v_value_6345_; lean_object* v___x_6347_; uint8_t v_isShared_6348_; uint8_t v_isSharedCheck_6352_; 
v_value_6345_ = lean_ctor_get(v_newpath_6328_, 0);
v_isSharedCheck_6352_ = !lean_is_exclusive(v_newpath_6328_);
if (v_isSharedCheck_6352_ == 0)
{
v___x_6347_ = v_newpath_6328_;
v_isShared_6348_ = v_isSharedCheck_6352_;
goto v_resetjp_6346_;
}
else
{
lean_inc(v_value_6345_);
lean_dec(v_newpath_6328_);
v___x_6347_ = lean_box(0);
v_isShared_6348_ = v_isSharedCheck_6352_;
goto v_resetjp_6346_;
}
v_resetjp_6346_:
{
lean_object* v___x_6350_; 
if (v_isShared_6348_ == 0)
{
lean_ctor_set_tag(v___x_6347_, 4);
v___x_6350_ = v___x_6347_;
goto v_reusejp_6349_;
}
else
{
lean_object* v_reuseFailAlloc_6351_; 
v_reuseFailAlloc_6351_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6351_, 0, v_value_6345_);
v___x_6350_ = v_reuseFailAlloc_6351_;
goto v_reusejp_6349_;
}
v_reusejp_6349_:
{
v___y_6334_ = v___y_6344_;
v___y_6335_ = v___x_6350_;
goto v___jp_6333_;
}
}
}
else
{
lean_object* v_value_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; 
v_value_6353_ = lean_ctor_get(v_newpath_6328_, 0);
lean_inc(v_value_6353_);
lean_dec_ref_known(v_newpath_6328_, 1);
v___x_6354_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6355_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6355_, 0, v_value_6353_);
lean_ctor_set(v___x_6355_, 1, v___x_6354_);
v___y_6334_ = v___y_6344_;
v___y_6335_ = v___x_6355_;
goto v___jp_6333_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink___boxed(lean_object* v_oldpath_6367_, lean_object* v_newpath_6368_, lean_object* v_options_6369_, lean_object* v_a_6370_){
_start:
{
lean_object* v_res_6371_; 
v_res_6371_ = l_Lasm_JS_Deno_symlink(v_oldpath_6367_, v_newpath_6368_, v_options_6369_);
lean_dec(v_options_6369_);
return v_res_6371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync(lean_object* v_oldpath_6380_, lean_object* v_newpath_6381_, lean_object* v_options_6382_){
_start:
{
uint8_t v___x_6384_; lean_object* v___x_6385_; lean_object* v___x_6386_; lean_object* v___y_6388_; lean_object* v___y_6389_; lean_object* v___y_6398_; 
v___x_6384_ = 0;
v___x_6385_ = lean_unsigned_to_nat(3u);
v___x_6386_ = ((lean_object*)(l_Lasm_JS_Deno_symlinkSync___closed__2));
if (lean_obj_tag(v_oldpath_6380_) == 0)
{
lean_object* v_value_6410_; lean_object* v___x_6412_; uint8_t v_isShared_6413_; uint8_t v_isSharedCheck_6417_; 
v_value_6410_ = lean_ctor_get(v_oldpath_6380_, 0);
v_isSharedCheck_6417_ = !lean_is_exclusive(v_oldpath_6380_);
if (v_isSharedCheck_6417_ == 0)
{
v___x_6412_ = v_oldpath_6380_;
v_isShared_6413_ = v_isSharedCheck_6417_;
goto v_resetjp_6411_;
}
else
{
lean_inc(v_value_6410_);
lean_dec(v_oldpath_6380_);
v___x_6412_ = lean_box(0);
v_isShared_6413_ = v_isSharedCheck_6417_;
goto v_resetjp_6411_;
}
v_resetjp_6411_:
{
lean_object* v___x_6415_; 
if (v_isShared_6413_ == 0)
{
lean_ctor_set_tag(v___x_6412_, 4);
v___x_6415_ = v___x_6412_;
goto v_reusejp_6414_;
}
else
{
lean_object* v_reuseFailAlloc_6416_; 
v_reuseFailAlloc_6416_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6416_, 0, v_value_6410_);
v___x_6415_ = v_reuseFailAlloc_6416_;
goto v_reusejp_6414_;
}
v_reusejp_6414_:
{
v___y_6398_ = v___x_6415_;
goto v___jp_6397_;
}
}
}
else
{
lean_object* v_value_6418_; lean_object* v___x_6419_; lean_object* v___x_6420_; 
v_value_6418_ = lean_ctor_get(v_oldpath_6380_, 0);
lean_inc(v_value_6418_);
lean_dec_ref_known(v_oldpath_6380_, 1);
v___x_6419_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6420_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6420_, 0, v_value_6418_);
lean_ctor_set(v___x_6420_, 1, v___x_6419_);
v___y_6398_ = v___x_6420_;
goto v___jp_6397_;
}
v___jp_6387_:
{
lean_object* v___x_6390_; lean_object* v___x_6391_; lean_object* v___x_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; lean_object* v___x_6395_; lean_object* v___x_6396_; 
v___x_6390_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6382_);
v___x_6391_ = lean_mk_empty_array_with_capacity(v___x_6385_);
v___x_6392_ = lean_array_push(v___x_6391_, v___y_6388_);
v___x_6393_ = lean_array_push(v___x_6392_, v___y_6389_);
v___x_6394_ = lean_array_push(v___x_6393_, v___x_6390_);
v___x_6395_ = l_Lasm_JS_Web_Support_args(v___x_6394_);
v___x_6396_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6386_, v___x_6395_, v___x_6384_);
return v___x_6396_;
}
v___jp_6397_:
{
if (lean_obj_tag(v_newpath_6381_) == 0)
{
lean_object* v_value_6399_; lean_object* v___x_6401_; uint8_t v_isShared_6402_; uint8_t v_isSharedCheck_6406_; 
v_value_6399_ = lean_ctor_get(v_newpath_6381_, 0);
v_isSharedCheck_6406_ = !lean_is_exclusive(v_newpath_6381_);
if (v_isSharedCheck_6406_ == 0)
{
v___x_6401_ = v_newpath_6381_;
v_isShared_6402_ = v_isSharedCheck_6406_;
goto v_resetjp_6400_;
}
else
{
lean_inc(v_value_6399_);
lean_dec(v_newpath_6381_);
v___x_6401_ = lean_box(0);
v_isShared_6402_ = v_isSharedCheck_6406_;
goto v_resetjp_6400_;
}
v_resetjp_6400_:
{
lean_object* v___x_6404_; 
if (v_isShared_6402_ == 0)
{
lean_ctor_set_tag(v___x_6401_, 4);
v___x_6404_ = v___x_6401_;
goto v_reusejp_6403_;
}
else
{
lean_object* v_reuseFailAlloc_6405_; 
v_reuseFailAlloc_6405_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6405_, 0, v_value_6399_);
v___x_6404_ = v_reuseFailAlloc_6405_;
goto v_reusejp_6403_;
}
v_reusejp_6403_:
{
v___y_6388_ = v___y_6398_;
v___y_6389_ = v___x_6404_;
goto v___jp_6387_;
}
}
}
else
{
lean_object* v_value_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; 
v_value_6407_ = lean_ctor_get(v_newpath_6381_, 0);
lean_inc(v_value_6407_);
lean_dec_ref_known(v_newpath_6381_, 1);
v___x_6408_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6409_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6409_, 0, v_value_6407_);
lean_ctor_set(v___x_6409_, 1, v___x_6408_);
v___y_6388_ = v___y_6398_;
v___y_6389_ = v___x_6409_;
goto v___jp_6387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync___boxed(lean_object* v_oldpath_6421_, lean_object* v_newpath_6422_, lean_object* v_options_6423_, lean_object* v_a_6424_){
_start:
{
lean_object* v_res_6425_; 
v_res_6425_ = l_Lasm_JS_Deno_symlinkSync(v_oldpath_6421_, v_newpath_6422_, v_options_6423_);
lean_dec(v_options_6423_);
return v_res_6425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync(lean_object* v_path_6434_, lean_object* v_atime_6435_, lean_object* v_mtime_6436_){
_start:
{
uint8_t v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; lean_object* v___y_6442_; lean_object* v___y_6443_; lean_object* v___y_6444_; lean_object* v___y_6452_; lean_object* v___y_6453_; lean_object* v___y_6464_; 
v___x_6438_ = 0;
v___x_6439_ = lean_unsigned_to_nat(3u);
v___x_6440_ = ((lean_object*)(l_Lasm_JS_Deno_utimeSync___closed__2));
if (lean_obj_tag(v_path_6434_) == 0)
{
lean_object* v_value_6474_; lean_object* v___x_6476_; uint8_t v_isShared_6477_; uint8_t v_isSharedCheck_6481_; 
v_value_6474_ = lean_ctor_get(v_path_6434_, 0);
v_isSharedCheck_6481_ = !lean_is_exclusive(v_path_6434_);
if (v_isSharedCheck_6481_ == 0)
{
v___x_6476_ = v_path_6434_;
v_isShared_6477_ = v_isSharedCheck_6481_;
goto v_resetjp_6475_;
}
else
{
lean_inc(v_value_6474_);
lean_dec(v_path_6434_);
v___x_6476_ = lean_box(0);
v_isShared_6477_ = v_isSharedCheck_6481_;
goto v_resetjp_6475_;
}
v_resetjp_6475_:
{
lean_object* v___x_6479_; 
if (v_isShared_6477_ == 0)
{
lean_ctor_set_tag(v___x_6476_, 4);
v___x_6479_ = v___x_6476_;
goto v_reusejp_6478_;
}
else
{
lean_object* v_reuseFailAlloc_6480_; 
v_reuseFailAlloc_6480_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6480_, 0, v_value_6474_);
v___x_6479_ = v_reuseFailAlloc_6480_;
goto v_reusejp_6478_;
}
v_reusejp_6478_:
{
v___y_6464_ = v___x_6479_;
goto v___jp_6463_;
}
}
}
else
{
lean_object* v_value_6482_; lean_object* v___x_6483_; lean_object* v___x_6484_; 
v_value_6482_ = lean_ctor_get(v_path_6434_, 0);
lean_inc(v_value_6482_);
lean_dec_ref_known(v_path_6434_, 1);
v___x_6483_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6484_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6484_, 0, v_value_6482_);
lean_ctor_set(v___x_6484_, 1, v___x_6483_);
v___y_6464_ = v___x_6484_;
goto v___jp_6463_;
}
v___jp_6441_:
{
lean_object* v___x_6445_; lean_object* v___x_6446_; lean_object* v___x_6447_; lean_object* v___x_6448_; lean_object* v___x_6449_; lean_object* v___x_6450_; 
v___x_6445_ = lean_mk_empty_array_with_capacity(v___x_6439_);
v___x_6446_ = lean_array_push(v___x_6445_, v___y_6442_);
v___x_6447_ = lean_array_push(v___x_6446_, v___y_6443_);
v___x_6448_ = lean_array_push(v___x_6447_, v___y_6444_);
v___x_6449_ = l_Lasm_JS_Web_Support_args(v___x_6448_);
v___x_6450_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6440_, v___x_6449_, v___x_6438_);
return v___x_6450_;
}
v___jp_6451_:
{
if (lean_obj_tag(v_mtime_6436_) == 0)
{
double v_value_6454_; lean_object* v___x_6456_; uint8_t v_isShared_6457_; uint8_t v_isSharedCheck_6461_; 
v_value_6454_ = lean_ctor_get_float(v_mtime_6436_, 0);
v_isSharedCheck_6461_ = !lean_is_exclusive(v_mtime_6436_);
if (v_isSharedCheck_6461_ == 0)
{
v___x_6456_ = v_mtime_6436_;
v_isShared_6457_ = v_isSharedCheck_6461_;
goto v_resetjp_6455_;
}
else
{
lean_dec(v_mtime_6436_);
v___x_6456_ = lean_box(0);
v_isShared_6457_ = v_isSharedCheck_6461_;
goto v_resetjp_6455_;
}
v_resetjp_6455_:
{
lean_object* v___x_6459_; 
if (v_isShared_6457_ == 0)
{
lean_ctor_set_tag(v___x_6456_, 3);
v___x_6459_ = v___x_6456_;
goto v_reusejp_6458_;
}
else
{
lean_object* v_reuseFailAlloc_6460_; 
v_reuseFailAlloc_6460_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6460_, 0, v_value_6454_);
v___x_6459_ = v_reuseFailAlloc_6460_;
goto v_reusejp_6458_;
}
v_reusejp_6458_:
{
v___y_6442_ = v___y_6452_;
v___y_6443_ = v___y_6453_;
v___y_6444_ = v___x_6459_;
goto v___jp_6441_;
}
}
}
else
{
lean_object* v_value_6462_; 
v_value_6462_ = lean_ctor_get(v_mtime_6436_, 0);
lean_inc(v_value_6462_);
lean_dec_ref_known(v_mtime_6436_, 1);
v___y_6442_ = v___y_6452_;
v___y_6443_ = v___y_6453_;
v___y_6444_ = v_value_6462_;
goto v___jp_6441_;
}
}
v___jp_6463_:
{
if (lean_obj_tag(v_atime_6435_) == 0)
{
double v_value_6465_; lean_object* v___x_6467_; uint8_t v_isShared_6468_; uint8_t v_isSharedCheck_6472_; 
v_value_6465_ = lean_ctor_get_float(v_atime_6435_, 0);
v_isSharedCheck_6472_ = !lean_is_exclusive(v_atime_6435_);
if (v_isSharedCheck_6472_ == 0)
{
v___x_6467_ = v_atime_6435_;
v_isShared_6468_ = v_isSharedCheck_6472_;
goto v_resetjp_6466_;
}
else
{
lean_dec(v_atime_6435_);
v___x_6467_ = lean_box(0);
v_isShared_6468_ = v_isSharedCheck_6472_;
goto v_resetjp_6466_;
}
v_resetjp_6466_:
{
lean_object* v___x_6470_; 
if (v_isShared_6468_ == 0)
{
lean_ctor_set_tag(v___x_6467_, 3);
v___x_6470_ = v___x_6467_;
goto v_reusejp_6469_;
}
else
{
lean_object* v_reuseFailAlloc_6471_; 
v_reuseFailAlloc_6471_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6471_, 0, v_value_6465_);
v___x_6470_ = v_reuseFailAlloc_6471_;
goto v_reusejp_6469_;
}
v_reusejp_6469_:
{
v___y_6452_ = v___y_6464_;
v___y_6453_ = v___x_6470_;
goto v___jp_6451_;
}
}
}
else
{
lean_object* v_value_6473_; 
v_value_6473_ = lean_ctor_get(v_atime_6435_, 0);
lean_inc(v_value_6473_);
lean_dec_ref_known(v_atime_6435_, 1);
v___y_6452_ = v___y_6464_;
v___y_6453_ = v_value_6473_;
goto v___jp_6451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync___boxed(lean_object* v_path_6485_, lean_object* v_atime_6486_, lean_object* v_mtime_6487_, lean_object* v_a_6488_){
_start:
{
lean_object* v_res_6489_; 
v_res_6489_ = l_Lasm_JS_Deno_utimeSync(v_path_6485_, v_atime_6486_, v_mtime_6487_);
return v_res_6489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime(lean_object* v_path_6498_, lean_object* v_atime_6499_, lean_object* v_mtime_6500_){
_start:
{
lean_object* v___x_6502_; lean_object* v___x_6503_; lean_object* v___y_6505_; lean_object* v___y_6506_; lean_object* v___y_6507_; lean_object* v___y_6515_; lean_object* v___y_6516_; lean_object* v___y_6527_; 
v___x_6502_ = lean_unsigned_to_nat(3u);
v___x_6503_ = ((lean_object*)(l_Lasm_JS_Deno_utime___closed__2));
if (lean_obj_tag(v_path_6498_) == 0)
{
lean_object* v_value_6537_; lean_object* v___x_6539_; uint8_t v_isShared_6540_; uint8_t v_isSharedCheck_6544_; 
v_value_6537_ = lean_ctor_get(v_path_6498_, 0);
v_isSharedCheck_6544_ = !lean_is_exclusive(v_path_6498_);
if (v_isSharedCheck_6544_ == 0)
{
v___x_6539_ = v_path_6498_;
v_isShared_6540_ = v_isSharedCheck_6544_;
goto v_resetjp_6538_;
}
else
{
lean_inc(v_value_6537_);
lean_dec(v_path_6498_);
v___x_6539_ = lean_box(0);
v_isShared_6540_ = v_isSharedCheck_6544_;
goto v_resetjp_6538_;
}
v_resetjp_6538_:
{
lean_object* v___x_6542_; 
if (v_isShared_6540_ == 0)
{
lean_ctor_set_tag(v___x_6539_, 4);
v___x_6542_ = v___x_6539_;
goto v_reusejp_6541_;
}
else
{
lean_object* v_reuseFailAlloc_6543_; 
v_reuseFailAlloc_6543_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6543_, 0, v_value_6537_);
v___x_6542_ = v_reuseFailAlloc_6543_;
goto v_reusejp_6541_;
}
v_reusejp_6541_:
{
v___y_6527_ = v___x_6542_;
goto v___jp_6526_;
}
}
}
else
{
lean_object* v_value_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; 
v_value_6545_ = lean_ctor_get(v_path_6498_, 0);
lean_inc(v_value_6545_);
lean_dec_ref_known(v_path_6498_, 1);
v___x_6546_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6547_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6547_, 0, v_value_6545_);
lean_ctor_set(v___x_6547_, 1, v___x_6546_);
v___y_6527_ = v___x_6547_;
goto v___jp_6526_;
}
v___jp_6504_:
{
lean_object* v___x_6508_; lean_object* v___x_6509_; lean_object* v___x_6510_; lean_object* v___x_6511_; lean_object* v___x_6512_; lean_object* v___x_6513_; 
v___x_6508_ = lean_mk_empty_array_with_capacity(v___x_6502_);
v___x_6509_ = lean_array_push(v___x_6508_, v___y_6506_);
v___x_6510_ = lean_array_push(v___x_6509_, v___y_6505_);
v___x_6511_ = lean_array_push(v___x_6510_, v___y_6507_);
v___x_6512_ = l_Lasm_JS_Web_Support_args(v___x_6511_);
v___x_6513_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6503_, v___x_6512_);
return v___x_6513_;
}
v___jp_6514_:
{
if (lean_obj_tag(v_mtime_6500_) == 0)
{
double v_value_6517_; lean_object* v___x_6519_; uint8_t v_isShared_6520_; uint8_t v_isSharedCheck_6524_; 
v_value_6517_ = lean_ctor_get_float(v_mtime_6500_, 0);
v_isSharedCheck_6524_ = !lean_is_exclusive(v_mtime_6500_);
if (v_isSharedCheck_6524_ == 0)
{
v___x_6519_ = v_mtime_6500_;
v_isShared_6520_ = v_isSharedCheck_6524_;
goto v_resetjp_6518_;
}
else
{
lean_dec(v_mtime_6500_);
v___x_6519_ = lean_box(0);
v_isShared_6520_ = v_isSharedCheck_6524_;
goto v_resetjp_6518_;
}
v_resetjp_6518_:
{
lean_object* v___x_6522_; 
if (v_isShared_6520_ == 0)
{
lean_ctor_set_tag(v___x_6519_, 3);
v___x_6522_ = v___x_6519_;
goto v_reusejp_6521_;
}
else
{
lean_object* v_reuseFailAlloc_6523_; 
v_reuseFailAlloc_6523_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6523_, 0, v_value_6517_);
v___x_6522_ = v_reuseFailAlloc_6523_;
goto v_reusejp_6521_;
}
v_reusejp_6521_:
{
v___y_6505_ = v___y_6516_;
v___y_6506_ = v___y_6515_;
v___y_6507_ = v___x_6522_;
goto v___jp_6504_;
}
}
}
else
{
lean_object* v_value_6525_; 
v_value_6525_ = lean_ctor_get(v_mtime_6500_, 0);
lean_inc(v_value_6525_);
lean_dec_ref_known(v_mtime_6500_, 1);
v___y_6505_ = v___y_6516_;
v___y_6506_ = v___y_6515_;
v___y_6507_ = v_value_6525_;
goto v___jp_6504_;
}
}
v___jp_6526_:
{
if (lean_obj_tag(v_atime_6499_) == 0)
{
double v_value_6528_; lean_object* v___x_6530_; uint8_t v_isShared_6531_; uint8_t v_isSharedCheck_6535_; 
v_value_6528_ = lean_ctor_get_float(v_atime_6499_, 0);
v_isSharedCheck_6535_ = !lean_is_exclusive(v_atime_6499_);
if (v_isSharedCheck_6535_ == 0)
{
v___x_6530_ = v_atime_6499_;
v_isShared_6531_ = v_isSharedCheck_6535_;
goto v_resetjp_6529_;
}
else
{
lean_dec(v_atime_6499_);
v___x_6530_ = lean_box(0);
v_isShared_6531_ = v_isSharedCheck_6535_;
goto v_resetjp_6529_;
}
v_resetjp_6529_:
{
lean_object* v___x_6533_; 
if (v_isShared_6531_ == 0)
{
lean_ctor_set_tag(v___x_6530_, 3);
v___x_6533_ = v___x_6530_;
goto v_reusejp_6532_;
}
else
{
lean_object* v_reuseFailAlloc_6534_; 
v_reuseFailAlloc_6534_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6534_, 0, v_value_6528_);
v___x_6533_ = v_reuseFailAlloc_6534_;
goto v_reusejp_6532_;
}
v_reusejp_6532_:
{
v___y_6515_ = v___y_6527_;
v___y_6516_ = v___x_6533_;
goto v___jp_6514_;
}
}
}
else
{
lean_object* v_value_6536_; 
v_value_6536_ = lean_ctor_get(v_atime_6499_, 0);
lean_inc(v_value_6536_);
lean_dec_ref_known(v_atime_6499_, 1);
v___y_6515_ = v___y_6527_;
v___y_6516_ = v_value_6536_;
goto v___jp_6514_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime___boxed(lean_object* v_path_6548_, lean_object* v_atime_6549_, lean_object* v_mtime_6550_, lean_object* v_a_6551_){
_start:
{
lean_object* v_res_6552_; 
v_res_6552_ = l_Lasm_JS_Deno_utime(v_path_6548_, v_atime_6549_, v_mtime_6550_);
return v_res_6552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask(lean_object* v_mask_6561_){
_start:
{
uint8_t v___x_6563_; lean_object* v___x_6564_; lean_object* v___x_6565_; lean_object* v___x_6566_; lean_object* v___x_6567_; lean_object* v___x_6568_; lean_object* v___x_6569_; lean_object* v___x_6570_; 
v___x_6563_ = 0;
v___x_6564_ = lean_unsigned_to_nat(1u);
v___x_6565_ = ((lean_object*)(l_Lasm_JS_Deno_umask___closed__2));
v___x_6566_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mask_6561_);
v___x_6567_ = lean_mk_empty_array_with_capacity(v___x_6564_);
v___x_6568_ = lean_array_push(v___x_6567_, v___x_6566_);
v___x_6569_ = l_Lasm_JS_Web_Support_args(v___x_6568_);
v___x_6570_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v___x_6565_, v___x_6569_, v___x_6563_);
return v___x_6570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask___boxed(lean_object* v_mask_6571_, lean_object* v_a_6572_){
_start:
{
lean_object* v_res_6573_; 
v_res_6573_ = l_Lasm_JS_Deno_umask(v_mask_6571_);
lean_dec(v_mask_6571_);
return v_res_6573_;
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
