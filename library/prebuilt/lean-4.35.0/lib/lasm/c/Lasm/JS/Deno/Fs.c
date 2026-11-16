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
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2783_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utime___closed__0));
v___x_2784_ = lean_unsigned_to_nat(2u);
v___x_2785_ = lean_mk_empty_array_with_capacity(v___x_2784_);
v___x_2786_ = lean_array_push(v___x_2785_, v_atime_2780_);
v___x_2787_ = lean_array_push(v___x_2786_, v_mtime_2781_);
v___x_2788_ = l_Lasm_JS_Web_Support_args(v___x_2787_);
v___x_2789_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2779_, v___x_2783_, v___x_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime___boxed(lean_object* v_self_2790_, lean_object* v_atime_2791_, lean_object* v_mtime_2792_, lean_object* v_a_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l_Lasm_JS_Deno_FsFile_utime(v_self_2790_, v_atime_2791_, v_mtime_2792_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync(lean_object* v_self_2796_, lean_object* v_atime_2797_, lean_object* v_mtime_2798_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v___x_2800_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utimeSync___closed__0));
v___x_2801_ = lean_unsigned_to_nat(2u);
v___x_2802_ = lean_mk_empty_array_with_capacity(v___x_2801_);
v___x_2803_ = lean_array_push(v___x_2802_, v_atime_2797_);
v___x_2804_ = lean_array_push(v___x_2803_, v_mtime_2798_);
v___x_2805_ = l_Lasm_JS_Web_Support_args(v___x_2804_);
v___x_2806_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2796_, v___x_2800_, v___x_2805_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync___boxed(lean_object* v_self_2807_, lean_object* v_atime_2808_, lean_object* v_mtime_2809_, lean_object* v_a_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lasm_JS_Deno_FsFile_utimeSync(v_self_2807_, v_atime_2808_, v_mtime_2809_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal(lean_object* v_self_2813_){
_start:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2815_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_isTerminal___closed__0));
v___x_2816_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2817_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2813_, v___x_2815_, v___x_2816_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal___boxed(lean_object* v_self_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l_Lasm_JS_Deno_FsFile_isTerminal(v_self_2818_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw(lean_object* v_self_2822_, uint8_t v_mode_2823_, lean_object* v_options_2824_){
_start:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2826_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_setRaw___closed__0));
v___x_2827_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2827_, 0, v_mode_2823_);
v___x_2828_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Stdin_setRaw_spec__0(v_options_2824_);
v___x_2829_ = lean_unsigned_to_nat(2u);
v___x_2830_ = lean_mk_empty_array_with_capacity(v___x_2829_);
v___x_2831_ = lean_array_push(v___x_2830_, v___x_2827_);
v___x_2832_ = lean_array_push(v___x_2831_, v___x_2828_);
v___x_2833_ = l_Lasm_JS_Web_Support_args(v___x_2832_);
v___x_2834_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2822_, v___x_2826_, v___x_2833_);
return v___x_2834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw___boxed(lean_object* v_self_2835_, lean_object* v_mode_2836_, lean_object* v_options_2837_, lean_object* v_a_2838_){
_start:
{
uint8_t v_mode_boxed_2839_; lean_object* v_res_2840_; 
v_mode_boxed_2839_ = lean_unbox(v_mode_2836_);
v_res_2840_ = l_Lasm_JS_Deno_FsFile_setRaw(v_self_2835_, v_mode_boxed_2839_, v_options_2837_);
lean_dec(v_options_2837_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock(lean_object* v_self_2842_, lean_object* v_exclusive_2843_){
_start:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2845_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lock___closed__0));
v___x_2846_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2843_);
v___x_2847_ = lean_unsigned_to_nat(1u);
v___x_2848_ = lean_mk_empty_array_with_capacity(v___x_2847_);
v___x_2849_ = lean_array_push(v___x_2848_, v___x_2846_);
v___x_2850_ = l_Lasm_JS_Web_Support_args(v___x_2849_);
v___x_2851_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2842_, v___x_2845_, v___x_2850_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock___boxed(lean_object* v_self_2852_, lean_object* v_exclusive_2853_, lean_object* v_a_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lasm_JS_Deno_FsFile_lock(v_self_2852_, v_exclusive_2853_);
lean_dec(v_exclusive_2853_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync(lean_object* v_self_2857_, lean_object* v_exclusive_2858_){
_start:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2860_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lockSync___closed__0));
v___x_2861_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2858_);
v___x_2862_ = lean_unsigned_to_nat(1u);
v___x_2863_ = lean_mk_empty_array_with_capacity(v___x_2862_);
v___x_2864_ = lean_array_push(v___x_2863_, v___x_2861_);
v___x_2865_ = l_Lasm_JS_Web_Support_args(v___x_2864_);
v___x_2866_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2857_, v___x_2860_, v___x_2865_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync___boxed(lean_object* v_self_2867_, lean_object* v_exclusive_2868_, lean_object* v_a_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Lasm_JS_Deno_FsFile_lockSync(v_self_2867_, v_exclusive_2868_);
lean_dec(v_exclusive_2868_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(lean_object* v_context_2871_, lean_object* v_x_2872_){
_start:
{
lean_object* v_val_2875_; 
if (lean_obj_tag(v_x_2872_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2885_; 
v_a_2877_ = lean_ctor_get(v_x_2872_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_x_2872_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2879_ = v_x_2872_;
v_isShared_2880_ = v_isSharedCheck_2885_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v_x_2872_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2885_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; 
v___x_2883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
return v___x_2883_;
}
}
}
else
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2899_; 
v_a_2886_ = lean_ctor_get(v_x_2872_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v_x_2872_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2888_ = v_x_2872_;
v_isShared_2889_ = v_isSharedCheck_2899_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v_x_2872_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2899_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2890_; 
v___x_2890_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_2871_, v_a_2886_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v_a_2891_; lean_object* v___x_2893_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2891_);
lean_dec_ref_known(v___x_2890_, 1);
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 0, v_a_2891_);
v___x_2893_ = v___x_2888_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_a_2891_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
v_val_2875_ = v___x_2893_;
goto v___jp_2874_;
}
}
else
{
lean_object* v_a_2895_; lean_object* v___x_2897_; 
v_a_2895_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2895_);
lean_dec_ref_known(v___x_2890_, 1);
if (v_isShared_2889_ == 0)
{
lean_ctor_set_tag(v___x_2888_, 0);
lean_ctor_set(v___x_2888_, 0, v_a_2895_);
v___x_2897_ = v___x_2888_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2895_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
v_val_2875_ = v___x_2897_;
goto v___jp_2874_;
}
}
}
}
v___jp_2874_:
{
lean_object* v___x_2876_; 
v___x_2876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2876_, 0, v_val_2875_);
return v___x_2876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed(lean_object* v_context_2900_, lean_object* v_x_2901_, lean_object* v___y_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(v_context_2900_, v_x_2901_);
lean_dec_ref(v_context_2900_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_2904_, uint32_t v_op_2905_, uint64_t v_flags_2906_, lean_object* v_payload_2907_, lean_object* v___f_2908_, lean_object* v___f_2909_, lean_object* v___f_2910_, lean_object* v_x_2911_){
_start:
{
if (lean_obj_tag(v_x_2911_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2921_; 
lean_dec_ref(v___f_2910_);
lean_dec_ref(v___f_2909_);
lean_dec_ref(v___f_2908_);
lean_dec(v_payload_2907_);
v_a_2913_ = lean_ctor_get(v_x_2911_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v_x_2911_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2915_ = v_x_2911_;
v_isShared_2916_ = v_isSharedCheck_2921_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v_x_2911_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2921_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2918_; 
if (v_isShared_2916_ == 0)
{
v___x_2918_ = v___x_2915_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2913_);
v___x_2918_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
lean_object* v___x_2919_; 
v___x_2919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2918_);
return v___x_2919_;
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2968_; 
v_a_2922_ = lean_ctor_get(v_x_2911_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v_x_2911_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2924_ = v_x_2911_;
v_isShared_2925_ = v_isSharedCheck_2968_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v_x_2911_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2968_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; uint8_t v___x_2928_; 
v___x_2926_ = lean_string_utf8_byte_size(v_failurePrefix_2904_);
v___x_2927_ = lean_unsigned_to_nat(0u);
v___x_2928_ = lean_nat_dec_eq(v___x_2926_, v___x_2927_);
if (v___x_2928_ == 0)
{
lean_object* v___f_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___f_2933_; lean_object* v_val_2935_; lean_object* v___x_2940_; 
lean_dec_ref(v___f_2910_);
lean_inc(v_a_2922_);
v___f_2929_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2929_, 0, v_a_2922_);
v___x_2930_ = lean_box(v___x_2928_);
v___x_2931_ = lean_box_uint32(v_op_2905_);
v___x_2932_ = lean_box_uint64(v_flags_2906_);
lean_inc(v_payload_2907_);
v___f_2933_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2933_, 0, v___x_2927_);
lean_closure_set(v___f_2933_, 1, v___x_2930_);
lean_closure_set(v___f_2933_, 2, v___f_2929_);
lean_closure_set(v___f_2933_, 3, v_a_2922_);
lean_closure_set(v___f_2933_, 4, v___x_2931_);
lean_closure_set(v___f_2933_, 5, v___x_2932_);
lean_closure_set(v___f_2933_, 6, v_payload_2907_);
v___x_2940_ = l_Lasm_JS_Wire_encodeIO(v_payload_2907_);
lean_dec(v_payload_2907_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v___x_2943_; 
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2941_);
lean_dec_ref_known(v___x_2940_, 1);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 0, v_a_2941_);
v___x_2943_ = v___x_2924_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2941_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
v_val_2935_ = v___x_2943_;
goto v___jp_2934_;
}
}
else
{
lean_object* v_a_2945_; lean_object* v___x_2947_; 
v_a_2945_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2945_);
lean_dec_ref_known(v___x_2940_, 1);
if (v_isShared_2925_ == 0)
{
lean_ctor_set_tag(v___x_2924_, 0);
lean_ctor_set(v___x_2924_, 0, v_a_2945_);
v___x_2947_ = v___x_2924_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_a_2945_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
v_val_2935_ = v___x_2947_;
goto v___jp_2934_;
}
}
v___jp_2934_:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2936_, 0, v_val_2935_);
v___x_2937_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2927_, v___x_2928_, v___x_2936_, v___f_2933_);
v___x_2938_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2927_, v___x_2928_, v___x_2937_, v___f_2908_);
v___x_2939_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2927_, v___x_2928_, v___x_2938_, v___f_2909_);
return v___x_2939_;
}
}
else
{
lean_object* v___f_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___f_2952_; uint8_t v___x_2953_; lean_object* v_val_2955_; lean_object* v___x_2959_; 
lean_dec_ref(v___f_2909_);
lean_dec_ref(v___f_2908_);
lean_inc(v_a_2922_);
v___f_2949_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2949_, 0, v_a_2922_);
v___x_2950_ = lean_box_uint32(v_op_2905_);
v___x_2951_ = lean_box_uint64(v_flags_2906_);
lean_inc(v_payload_2907_);
v___f_2952_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2952_, 0, v___f_2949_);
lean_closure_set(v___f_2952_, 1, v_a_2922_);
lean_closure_set(v___f_2952_, 2, v___x_2950_);
lean_closure_set(v___f_2952_, 3, v___x_2951_);
lean_closure_set(v___f_2952_, 4, v_payload_2907_);
v___x_2953_ = 0;
v___x_2959_ = l_Lasm_JS_Wire_encodeIO(v_payload_2907_);
lean_dec(v_payload_2907_);
if (lean_obj_tag(v___x_2959_) == 0)
{
lean_object* v_a_2960_; lean_object* v___x_2962_; 
v_a_2960_ = lean_ctor_get(v___x_2959_, 0);
lean_inc(v_a_2960_);
lean_dec_ref_known(v___x_2959_, 1);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 0, v_a_2960_);
v___x_2962_ = v___x_2924_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_a_2960_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
v_val_2955_ = v___x_2962_;
goto v___jp_2954_;
}
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2966_; 
v_a_2964_ = lean_ctor_get(v___x_2959_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2959_, 1);
if (v_isShared_2925_ == 0)
{
lean_ctor_set_tag(v___x_2924_, 0);
lean_ctor_set(v___x_2924_, 0, v_a_2964_);
v___x_2966_ = v___x_2924_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2964_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
v_val_2955_ = v___x_2966_;
goto v___jp_2954_;
}
}
v___jp_2954_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_val_2955_);
v___x_2957_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2927_, v___x_2953_, v___x_2956_, v___f_2952_);
v___x_2958_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2927_, v___x_2953_, v___x_2957_, v___f_2910_);
return v___x_2958_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_2969_, lean_object* v_op_2970_, lean_object* v_flags_2971_, lean_object* v_payload_2972_, lean_object* v___f_2973_, lean_object* v___f_2974_, lean_object* v___f_2975_, lean_object* v_x_2976_, lean_object* v___y_2977_){
_start:
{
uint32_t v_op_boxed_2978_; uint64_t v_flags_boxed_2979_; lean_object* v_res_2980_; 
v_op_boxed_2978_ = lean_unbox_uint32(v_op_2970_);
lean_dec(v_op_2970_);
v_flags_boxed_2979_ = lean_unbox_uint64(v_flags_2971_);
lean_dec_ref(v_flags_2971_);
v_res_2980_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(v_failurePrefix_2969_, v_op_boxed_2978_, v_flags_boxed_2979_, v_payload_2972_, v___f_2973_, v___f_2974_, v___f_2975_, v_x_2976_);
lean_dec_ref(v_failurePrefix_2969_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(lean_object* v___f_2981_, lean_object* v_x_2982_){
_start:
{
if (lean_obj_tag(v_x_2982_) == 0)
{
lean_object* v_a_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2992_; 
lean_dec_ref(v___f_2981_);
v_a_2984_ = lean_ctor_get(v_x_2982_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v_x_2982_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2986_ = v_x_2982_;
v_isShared_2987_ = v_isSharedCheck_2992_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_a_2984_);
lean_dec(v_x_2982_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2992_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2989_; 
if (v_isShared_2987_ == 0)
{
v___x_2989_ = v___x_2986_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2984_);
v___x_2989_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
lean_object* v___x_2990_; 
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
return v___x_2990_;
}
}
}
else
{
lean_object* v_a_2993_; lean_object* v___x_2994_; 
v_a_2993_ = lean_ctor_get(v_x_2982_, 0);
lean_inc(v_a_2993_);
lean_dec_ref_known(v_x_2982_, 1);
v___x_2994_ = lean_apply_2(v___f_2981_, v_a_2993_, lean_box(0));
return v___x_2994_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed(lean_object* v___f_2995_, lean_object* v_x_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(v___f_2995_, v_x_2996_);
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(lean_object* v___f_2999_, lean_object* v_bytes_3000_){
_start:
{
lean_object* v___x_3002_; uint8_t v___x_3003_; lean_object* v_val_3005_; lean_object* v___x_3008_; 
v___x_3002_ = lean_unsigned_to_nat(0u);
v___x_3003_ = 0;
v___x_3008_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3000_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_3008_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3008_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
lean_ctor_set_tag(v___x_3011_, 1);
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
v_val_3005_ = v___x_3014_;
goto v___jp_3004_;
}
}
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
v_a_3017_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_3008_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_3008_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
lean_ctor_set_tag(v___x_3019_, 0);
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3017_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
v_val_3005_ = v___x_3022_;
goto v___jp_3004_;
}
}
}
v___jp_3004_:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3006_, 0, v_val_3005_);
v___x_3007_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3002_, v___x_3003_, v___x_3006_, v___f_2999_);
return v___x_3007_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed(lean_object* v___f_3025_, lean_object* v_bytes_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(v___f_3025_, v_bytes_3026_);
lean_dec_ref(v_bytes_3026_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(lean_object* v___f_3029_, lean_object* v_x_3030_){
_start:
{
if (lean_obj_tag(v_x_3030_) == 0)
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3040_; 
lean_dec_ref(v___f_3029_);
v_a_3032_ = lean_ctor_get(v_x_3030_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v_x_3030_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3034_ = v_x_3030_;
v_isShared_3035_ = v_isSharedCheck_3040_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v_x_3030_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3040_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3037_; 
if (v_isShared_3035_ == 0)
{
v___x_3037_ = v___x_3034_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3032_);
v___x_3037_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3038_; 
v___x_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
return v___x_3038_;
}
}
}
else
{
lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3052_; 
v_isSharedCheck_3052_ = !lean_is_exclusive(v_x_3030_);
if (v_isSharedCheck_3052_ == 0)
{
lean_object* v_unused_3053_; 
v_unused_3053_ = lean_ctor_get(v_x_3030_, 0);
lean_dec(v_unused_3053_);
v___x_3042_ = v_x_3030_;
v_isShared_3043_ = v_isSharedCheck_3052_;
goto v_resetjp_3041_;
}
else
{
lean_dec(v_x_3030_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3052_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3044_; uint8_t v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3048_; 
v___x_3044_ = lean_unsigned_to_nat(0u);
v___x_3045_ = 0;
v___x_3046_ = lean_io_promise_new();
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 0, v___x_3046_);
v___x_3048_ = v___x_3042_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3046_);
v___x_3048_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3049_, 0, v___x_3048_);
v___x_3050_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3044_, v___x_3045_, v___x_3049_, v___f_3029_);
return v___x_3050_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed(lean_object* v___f_3054_, lean_object* v_x_3055_, lean_object* v___y_3056_){
_start:
{
lean_object* v_res_3057_; 
v_res_3057_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(v___f_3054_, v_x_3055_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(lean_object* v_context_3058_, uint32_t v_op_3059_, uint64_t v_flags_3060_, lean_object* v_payload_3061_, lean_object* v_failurePrefix_3062_){
_start:
{
lean_object* v___f_3064_; lean_object* v___f_3065_; lean_object* v___f_3066_; lean_object* v___f_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___f_3070_; lean_object* v___f_3071_; lean_object* v___x_3072_; uint8_t v___x_3073_; lean_object* v_val_3075_; lean_object* v___x_3078_; 
v___f_3064_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3064_, 0, v_context_3058_);
v___f_3065_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3065_, 0, v___f_3064_);
v___f_3066_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3066_, 0, v___f_3065_);
lean_inc_ref(v_failurePrefix_3062_);
v___f_3067_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3067_, 0, v_failurePrefix_3062_);
v___x_3068_ = lean_box_uint32(v_op_3059_);
v___x_3069_ = lean_box_uint64(v_flags_3060_);
lean_inc_ref(v___f_3066_);
v___f_3070_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3070_, 0, v_failurePrefix_3062_);
lean_closure_set(v___f_3070_, 1, v___x_3068_);
lean_closure_set(v___f_3070_, 2, v___x_3069_);
lean_closure_set(v___f_3070_, 3, v_payload_3061_);
lean_closure_set(v___f_3070_, 4, v___f_3067_);
lean_closure_set(v___f_3070_, 5, v___f_3066_);
lean_closure_set(v___f_3070_, 6, v___f_3066_);
v___f_3071_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3071_, 0, v___f_3070_);
v___x_3072_ = lean_unsigned_to_nat(0u);
v___x_3073_ = 0;
v___x_3078_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___x_3078_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3078_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
lean_ctor_set_tag(v___x_3081_, 1);
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
v_val_3075_ = v___x_3084_;
goto v___jp_3074_;
}
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3094_; 
v_a_3087_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3089_ = v___x_3078_;
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_a_3087_);
lean_dec(v___x_3078_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3092_; 
if (v_isShared_3090_ == 0)
{
lean_ctor_set_tag(v___x_3089_, 0);
v___x_3092_ = v___x_3089_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3087_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
v_val_3075_ = v___x_3092_;
goto v___jp_3074_;
}
}
}
v___jp_3074_:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3076_, 0, v_val_3075_);
v___x_3077_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3072_, v___x_3073_, v___x_3076_, v___f_3071_);
return v___x_3077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___boxed(lean_object* v_context_3095_, lean_object* v_op_3096_, lean_object* v_flags_3097_, lean_object* v_payload_3098_, lean_object* v_failurePrefix_3099_, lean_object* v_a_3100_){
_start:
{
uint32_t v_op_boxed_3101_; uint64_t v_flags_boxed_3102_; lean_object* v_res_3103_; 
v_op_boxed_3101_ = lean_unbox_uint32(v_op_3096_);
lean_dec(v_op_3096_);
v_flags_boxed_3102_ = lean_unbox_uint64(v_flags_3097_);
lean_dec_ref(v_flags_3097_);
v_res_3103_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v_context_3095_, v_op_boxed_3101_, v_flags_boxed_3102_, v_payload_3098_, v_failurePrefix_3099_);
return v_res_3103_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3104_; uint8_t v___x_3105_; uint64_t v___x_3106_; 
v___x_3104_ = 8ULL;
v___x_3105_ = 0;
v___x_3106_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v___x_3105_, v___x_3104_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(lean_object* v_o_3107_, lean_object* v_name_3108_, lean_object* v_args_3109_){
_start:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; uint32_t v___x_3116_; uint64_t v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3111_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3112_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3112_, 0, v_o_3107_);
lean_ctor_set(v___x_3112_, 1, v___x_3111_);
lean_inc_ref(v_name_3108_);
v___x_3113_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3113_, 0, v_name_3108_);
v___x_3114_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_3115_ = lean_string_append(v___x_3114_, v_name_3108_);
lean_dec_ref(v_name_3108_);
v___x_3116_ = 205;
v___x_3117_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0);
v___x_3118_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3118_, 0, v_args_3109_);
v___x_3119_ = lean_unsigned_to_nat(3u);
v___x_3120_ = lean_mk_empty_array_with_capacity(v___x_3119_);
v___x_3121_ = lean_array_push(v___x_3120_, v___x_3112_);
v___x_3122_ = lean_array_push(v___x_3121_, v___x_3113_);
v___x_3123_ = lean_array_push(v___x_3122_, v___x_3118_);
v___x_3124_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
v___x_3125_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v___x_3115_, v___x_3116_, v___x_3117_, v___x_3124_, v___x_3111_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___boxed(lean_object* v_o_3126_, lean_object* v_name_3127_, lean_object* v_args_3128_, lean_object* v___y_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_o_3126_, v_name_3127_, v_args_3128_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock(lean_object* v_self_3132_, lean_object* v_exclusive_3133_){
_start:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3135_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLock___closed__0));
v___x_3136_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3133_);
v___x_3137_ = lean_unsigned_to_nat(1u);
v___x_3138_ = lean_mk_empty_array_with_capacity(v___x_3137_);
v___x_3139_ = lean_array_push(v___x_3138_, v___x_3136_);
v___x_3140_ = l_Lasm_JS_Web_Support_args(v___x_3139_);
v___x_3141_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_self_3132_, v___x_3135_, v___x_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock___boxed(lean_object* v_self_3142_, lean_object* v_exclusive_3143_, lean_object* v_a_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Lasm_JS_Deno_FsFile_tryLock(v_self_3142_, v_exclusive_3143_);
lean_dec(v_exclusive_3143_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync(lean_object* v_self_3147_, lean_object* v_exclusive_3148_){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3150_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLockSync___closed__0));
v___x_3151_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3148_);
v___x_3152_ = lean_unsigned_to_nat(1u);
v___x_3153_ = lean_mk_empty_array_with_capacity(v___x_3152_);
v___x_3154_ = lean_array_push(v___x_3153_, v___x_3151_);
v___x_3155_ = l_Lasm_JS_Web_Support_args(v___x_3154_);
v___x_3156_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_3147_, v___x_3150_, v___x_3155_);
return v___x_3156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync___boxed(lean_object* v_self_3157_, lean_object* v_exclusive_3158_, lean_object* v_a_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lasm_JS_Deno_FsFile_tryLockSync(v_self_3157_, v_exclusive_3158_);
lean_dec(v_exclusive_3158_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock(lean_object* v_self_3162_){
_start:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
v___x_3164_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlock___closed__0));
v___x_3165_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3166_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3162_, v___x_3164_, v___x_3165_);
return v___x_3166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock___boxed(lean_object* v_self_3167_, lean_object* v_a_3168_){
_start:
{
lean_object* v_res_3169_; 
v_res_3169_ = l_Lasm_JS_Deno_FsFile_unlock(v_self_3167_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync(lean_object* v_self_3171_){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3173_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlockSync___closed__0));
v___x_3174_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3175_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3171_, v___x_3173_, v___x_3174_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync___boxed(lean_object* v_self_3176_, lean_object* v_a_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l_Lasm_JS_Deno_FsFile_unlockSync(v_self_3176_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close(lean_object* v_self_3180_){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3183_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3184_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3180_, v___x_3182_, v___x_3183_);
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close___boxed(lean_object* v_self_3185_, lean_object* v_a_3186_){
_start:
{
lean_object* v_res_3187_; 
v_res_3187_ = l_Lasm_JS_Deno_FsFile_close(v_self_3185_);
return v_res_3187_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3188_; uint8_t v___x_3189_; uint64_t v___x_3190_; 
v___x_3188_ = 0ULL;
v___x_3189_ = 0;
v___x_3190_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_3189_, v___x_3188_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(lean_object* v_f_3192_, lean_object* v_args_3193_, lean_object* v_this_3194_){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; uint64_t v___x_3198_; lean_object* v___x_3199_; 
v___x_3196_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3197_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3197_, 0, v_f_3192_);
lean_ctor_set(v___x_3197_, 1, v___x_3196_);
v___x_3198_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0);
v___x_3199_ = l_Lasm_JS_Value_invokeRaw(v___x_3197_, v_this_3194_, v_args_3193_, v___x_3198_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
lean_inc(v_a_3200_);
lean_dec_ref_known(v___x_3199_, 1);
v___x_3201_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__1));
v___x_3202_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3201_, v_a_3200_);
lean_dec(v_a_3200_);
return v___x_3202_;
}
else
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
v_a_3203_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3199_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3199_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
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
return v___x_3208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___boxed(lean_object* v_f_3211_, lean_object* v_args_3212_, lean_object* v_this_3213_, lean_object* v_a_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_f_3211_, v_args_3212_, v_this_3213_);
return v_res_3215_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3216_; uint64_t v___x_3217_; 
v___x_3216_ = 1;
v___x_3217_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3216_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(lean_object* v_o_3219_, lean_object* v_key_3220_){
_start:
{
lean_object* v___x_3222_; lean_object* v_k_3223_; lean_object* v___x_3224_; 
v___x_3222_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_k_3223_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_3223_, 0, v_key_3220_);
lean_ctor_set(v_k_3223_, 1, v___x_3222_);
v___x_3224_ = l_Lasm_JS_Wire_encodeIO(v_k_3223_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3225_; uint32_t v___x_3226_; uint32_t v___x_3227_; uint64_t v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_a_3225_);
lean_dec_ref_known(v___x_3224_, 1);
v___x_3226_ = 203;
v___x_3227_ = lasm_js_value_handle(v_o_3219_);
v___x_3228_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
v___x_3229_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3229_, 0, v_o_3219_);
lean_ctor_set(v___x_3229_, 1, v___x_3222_);
v___x_3230_ = lean_unsigned_to_nat(2u);
v___x_3231_ = lean_mk_empty_array_with_capacity(v___x_3230_);
lean_inc_ref(v_k_3223_);
v___x_3232_ = lean_array_push(v___x_3231_, v_k_3223_);
v___x_3233_ = lean_array_push(v___x_3232_, v___x_3229_);
v___x_3234_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3233_);
v___x_3235_ = lasm_js_call(v___x_3226_, v___x_3227_, v___x_3228_, v_a_3225_, v___x_3234_);
lean_dec_ref_known(v___x_3234_, 1);
lean_dec(v_a_3225_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v___x_3235_, 1);
v___x_3237_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3238_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3223_);
v___x_3239_ = lean_string_append(v___x_3237_, v___x_3238_);
lean_dec_ref(v___x_3238_);
v___x_3240_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3239_, v_a_3236_);
lean_dec(v_a_3236_);
lean_dec_ref(v___x_3239_);
return v___x_3240_;
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3248_; 
lean_dec_ref_known(v_k_3223_, 2);
v_a_3241_ = lean_ctor_get(v___x_3235_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3235_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3243_ = v___x_3235_;
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_3235_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
lean_dec_ref_known(v_k_3223_, 2);
lean_dec(v_o_3219_);
v_a_3249_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3224_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3224_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___boxed(lean_object* v_o_3257_, lean_object* v_key_3258_, lean_object* v_a_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_o_3257_, v_key_3258_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(lean_object* v_self_3263_){
_start:
{
lean_object* v___x_3265_; 
v___x_3265_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
lean_inc(v_a_3266_);
lean_dec_ref_known(v___x_3265_, 1);
v___x_3267_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3268_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3266_, v___x_3267_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_a_3269_);
lean_dec_ref_known(v___x_3268_, 1);
v___x_3270_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3271_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3269_, v___x_3270_);
if (lean_obj_tag(v___x_3271_) == 0)
{
lean_object* v_a_3272_; lean_object* v___x_3273_; 
v_a_3272_ = lean_ctor_get(v___x_3271_, 0);
lean_inc(v_a_3272_);
lean_dec_ref_known(v___x_3271_, 1);
lean_inc(v_self_3263_);
v___x_3273_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3263_, v_a_3272_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v_a_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v_a_3274_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_a_3274_);
lean_dec_ref_known(v___x_3273_, 1);
v___x_3275_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3276_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3277_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3277_, 0, v_self_3263_);
lean_ctor_set(v___x_3277_, 1, v___x_3276_);
v___x_3278_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3274_, v___x_3275_, v___x_3277_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3281_ = v___x_3278_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3278_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
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
return v___x_3284_;
}
}
}
else
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3294_; 
v_a_3287_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3289_ = v___x_3278_;
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3278_);
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
lean_dec(v_self_3263_);
v_a_3295_ = lean_ctor_get(v___x_3273_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3297_ = v___x_3273_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___x_3273_);
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
else
{
lean_object* v_a_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3310_; 
lean_dec(v_self_3263_);
v_a_3303_ = lean_ctor_get(v___x_3271_, 0);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3305_ = v___x_3271_;
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_a_3303_);
lean_dec(v___x_3271_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3308_; 
if (v_isShared_3306_ == 0)
{
v___x_3308_ = v___x_3305_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v_a_3303_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
lean_dec(v_self_3263_);
v_a_3311_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3313_ = v___x_3268_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3268_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3311_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
lean_dec(v_self_3263_);
v_a_3319_ = lean_ctor_get(v___x_3265_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3321_ = v___x_3265_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3265_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___boxed(lean_object* v_self_3327_, lean_object* v_a_3328_){
_start:
{
lean_object* v_res_3329_; 
v_res_3329_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3327_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(lean_object* v_x_3330_){
_start:
{
if (lean_obj_tag(v_x_3330_) == 0)
{
lean_object* v_a_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3340_; 
v_a_3332_ = lean_ctor_get(v_x_3330_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v_x_3330_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3334_ = v_x_3330_;
v_isShared_3335_ = v_isSharedCheck_3340_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_a_3332_);
lean_dec(v_x_3330_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3340_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v___x_3337_; 
if (v_isShared_3335_ == 0)
{
v___x_3337_ = v___x_3334_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3332_);
v___x_3337_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
lean_object* v___x_3338_; 
v___x_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
return v___x_3338_;
}
}
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3350_; 
v_a_3341_ = lean_ctor_get(v_x_3330_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v_x_3330_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3343_ = v_x_3330_;
v_isShared_3344_ = v_isSharedCheck_3350_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v_x_3330_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3350_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3345_; lean_object* v___x_3347_; 
v___x_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3345_, 0, v_a_3341_);
if (v_isShared_3344_ == 0)
{
lean_ctor_set(v___x_3343_, 0, v___x_3345_);
v___x_3347_ = v___x_3343_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v___x_3345_);
v___x_3347_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
lean_object* v___x_3348_; 
v___x_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3347_);
return v___x_3348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0___boxed(lean_object* v_x_3351_, lean_object* v___y_3352_){
_start:
{
lean_object* v_res_3353_; 
v_res_3353_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(v_x_3351_);
return v_res_3353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_3354_, lean_object* v_d_3355_){
_start:
{
lean_object* v___y_3358_; lean_object* v___y_3359_; lean_object* v___y_3364_; lean_object* v_received_3365_; lean_object* v___y_3384_; lean_object* v_a_3387_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3411_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0));
lean_inc(v_d_3355_);
v___x_3412_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3355_, v___x_3411_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_object* v_a_3413_; 
v_a_3413_ = lean_ctor_get(v___x_3412_, 0);
lean_inc(v_a_3413_);
lean_dec_ref_known(v___x_3412_, 1);
v_a_3387_ = v_a_3413_;
goto v___jp_3386_;
}
else
{
lean_object* v_a_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
v_a_3414_ = lean_ctor_get(v___x_3412_, 0);
lean_inc(v_a_3414_);
lean_dec_ref_known(v___x_3412_, 1);
v___x_3415_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc(v_d_3355_);
v___x_3416_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3355_, v___x_3415_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; 
lean_dec(v_a_3414_);
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3416_, 1);
v_a_3387_ = v_a_3417_;
goto v___jp_3386_;
}
else
{
lean_object* v_a_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v_a_3418_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3418_);
lean_dec_ref_known(v___x_3416_, 1);
v___x_3419_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc(v_d_3355_);
v___x_3420_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3355_, v___x_3419_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_object* v_a_3421_; 
lean_dec(v_a_3418_);
lean_dec(v_a_3414_);
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
lean_inc(v_a_3421_);
lean_dec_ref_known(v___x_3420_, 1);
v_a_3387_ = v_a_3421_;
goto v___jp_3386_;
}
else
{
lean_object* v_a_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v_a_3422_ = lean_ctor_get(v___x_3420_, 0);
lean_inc(v_a_3422_);
lean_dec_ref_known(v___x_3420_, 1);
v___x_3423_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
lean_inc(v_d_3355_);
v___x_3424_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3355_, v___x_3423_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v_a_3425_; 
lean_dec(v_a_3422_);
lean_dec(v_a_3418_);
lean_dec(v_a_3414_);
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_a_3425_);
lean_dec_ref_known(v___x_3424_, 1);
v_a_3387_ = v_a_3425_;
goto v___jp_3386_;
}
else
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3437_; 
lean_dec(v_d_3355_);
v_a_3426_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3428_ = v___x_3424_;
v_isShared_3429_ = v_isSharedCheck_3437_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3424_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3437_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3430_; uint8_t v___x_3431_; uint8_t v___x_3432_; uint8_t v___x_3433_; lean_object* v___x_3435_; 
v___x_3430_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3430_, 0, v_a_3414_);
v___x_3431_ = lean_unbox(v_a_3418_);
lean_dec(v_a_3418_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*1, v___x_3431_);
v___x_3432_ = lean_unbox(v_a_3422_);
lean_dec(v_a_3422_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*1 + 1, v___x_3432_);
v___x_3433_ = lean_unbox(v_a_3426_);
lean_dec(v_a_3426_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*1 + 2, v___x_3433_);
if (v_isShared_3429_ == 0)
{
lean_ctor_set_tag(v___x_3428_, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3430_);
v___x_3435_ = v___x_3428_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v___x_3430_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
}
}
}
}
v___jp_3357_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3360_ = lean_string_append(v___y_3358_, v___y_3359_);
lean_dec_ref(v___y_3359_);
v___x_3361_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
v___x_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3361_);
return v___x_3362_;
}
v___jp_3363_:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; uint8_t v___x_3377_; 
v___x_3366_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_3367_ = lean_string_append(v___x_3366_, v_context_3354_);
v___x_3368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_3369_ = lean_string_append(v___x_3367_, v___x_3368_);
v___x_3370_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___closed__1));
v___x_3371_ = lean_string_append(v___x_3369_, v___x_3370_);
v___x_3372_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_3373_ = lean_string_append(v___x_3371_, v___x_3372_);
v___x_3374_ = lean_string_append(v___x_3373_, v_received_3365_);
lean_dec_ref(v_received_3365_);
v___x_3375_ = lean_string_utf8_byte_size(v___y_3364_);
v___x_3376_ = lean_unsigned_to_nat(0u);
v___x_3377_ = lean_nat_dec_eq(v___x_3375_, v___x_3376_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3378_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3379_ = lean_string_append(v___x_3378_, v___y_3364_);
lean_dec_ref(v___y_3364_);
v___x_3380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3381_ = lean_string_append(v___x_3379_, v___x_3380_);
v___y_3358_ = v___x_3374_;
v___y_3359_ = v___x_3381_;
goto v___jp_3357_;
}
else
{
lean_object* v___x_3382_; 
lean_dec_ref(v___y_3364_);
v___x_3382_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_3358_ = v___x_3374_;
v___y_3359_ = v___x_3382_;
goto v___jp_3357_;
}
}
v___jp_3383_:
{
lean_object* v___x_3385_; 
v___x_3385_ = l_Lasm_JS_Data_describe(v_d_3355_);
v___y_3364_ = v___y_3384_;
v_received_3365_ = v___x_3385_;
goto v___jp_3363_;
}
v___jp_3386_:
{
if (lean_obj_tag(v_d_3355_) == 9)
{
lean_object* v_value_3388_; lean_object* v_description_3389_; lean_object* v___x_3390_; uint8_t v___x_3391_; 
v_value_3388_ = lean_ctor_get(v_d_3355_, 0);
v_description_3389_ = lean_ctor_get(v_d_3355_, 1);
v___x_3390_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3391_ = lean_string_dec_eq(v_description_3389_, v___x_3390_);
if (v___x_3391_ == 0)
{
v___y_3384_ = v_a_3387_;
goto v___jp_3383_;
}
else
{
lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3408_; 
lean_inc(v_value_3388_);
v_isSharedCheck_3408_ = !lean_is_exclusive(v_d_3355_);
if (v_isSharedCheck_3408_ == 0)
{
lean_object* v_unused_3409_; lean_object* v_unused_3410_; 
v_unused_3409_ = lean_ctor_get(v_d_3355_, 1);
lean_dec(v_unused_3409_);
v_unused_3410_ = lean_ctor_get(v_d_3355_, 0);
lean_dec(v_unused_3410_);
v___x_3393_ = v_d_3355_;
v_isShared_3394_ = v_isSharedCheck_3408_;
goto v_resetjp_3392_;
}
else
{
lean_dec(v_d_3355_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3408_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
uint32_t v___x_3395_; uint64_t v___x_3396_; lean_object* v___x_3398_; 
v___x_3395_ = 206;
v___x_3396_ = 0ULL;
lean_inc(v_value_3388_);
if (v_isShared_3394_ == 0)
{
lean_ctor_set(v___x_3393_, 1, v___x_3390_);
v___x_3398_ = v___x_3393_;
goto v_reusejp_3397_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_value_3388_);
lean_ctor_set(v_reuseFailAlloc_3407_, 1, v___x_3390_);
v___x_3398_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3397_;
}
v_reusejp_3397_:
{
uint32_t v___x_3399_; lean_object* v___x_3400_; 
v___x_3399_ = lasm_js_value_handle(v_value_3388_);
lean_dec(v_value_3388_);
v___x_3400_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3395_, v___x_3396_, v___x_3398_, v___x_3399_);
lean_dec_ref(v___x_3398_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_a_3401_; uint8_t v___x_3402_; 
v_a_3401_ = lean_ctor_get(v___x_3400_, 0);
lean_inc(v_a_3401_);
lean_dec_ref_known(v___x_3400_, 1);
v___x_3402_ = lean_string_validate_utf8(v_a_3401_);
if (v___x_3402_ == 0)
{
lean_object* v___x_3403_; lean_object* v___x_3404_; 
lean_dec(v_a_3401_);
v___x_3403_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_3404_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3403_);
v___y_3364_ = v_a_3387_;
v_received_3365_ = v___x_3404_;
goto v___jp_3363_;
}
else
{
lean_object* v___x_3405_; 
v___x_3405_ = lean_string_from_utf8_unchecked(v_a_3401_);
v___y_3364_ = v_a_3387_;
v_received_3365_ = v___x_3405_;
goto v___jp_3363_;
}
}
else
{
lean_object* v___x_3406_; 
lean_dec_ref_known(v___x_3400_, 1);
v___x_3406_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_3364_ = v_a_3387_;
v_received_3365_ = v___x_3406_;
goto v___jp_3363_;
}
}
}
}
}
else
{
v___y_3384_ = v_a_3387_;
goto v___jp_3383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3438_, lean_object* v_d_3439_, lean_object* v_a_3440_){
_start:
{
lean_object* v_res_3441_; 
v_res_3441_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3438_, v_d_3439_);
lean_dec_ref(v_context_3438_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(lean_object* v_context_3442_, lean_object* v_bytes_3443_){
_start:
{
lean_object* v___x_3445_; 
v___x_3445_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3443_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; lean_object* v___x_3447_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
v___x_3447_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3442_, v_a_3446_);
return v___x_3447_;
}
else
{
lean_object* v_a_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3455_; 
v_a_3448_ = lean_ctor_get(v___x_3445_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___x_3445_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3450_ = v___x_3445_;
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_a_3448_);
lean_dec(v___x_3445_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_a_3448_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
return v___x_3453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_3456_, lean_object* v_bytes_3457_, lean_object* v_a_3458_){
_start:
{
lean_object* v_res_3459_; 
v_res_3459_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v_context_3456_, v_bytes_3457_);
lean_dec_ref(v_bytes_3457_);
lean_dec_ref(v_context_3456_);
return v_res_3459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(lean_object* v_o_3460_, lean_object* v_key_3461_){
_start:
{
lean_object* v_k_3463_; lean_object* v___x_3464_; 
v_k_3463_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3463_, 0, v_key_3461_);
v___x_3464_ = l_Lasm_JS_Wire_encodeIO(v_k_3463_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; uint32_t v___x_3466_; uint32_t v___x_3467_; uint64_t v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v___x_3466_ = 203;
v___x_3467_ = lasm_js_value_handle(v_o_3460_);
v___x_3468_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_3469_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3470_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3470_, 0, v_o_3460_);
lean_ctor_set(v___x_3470_, 1, v___x_3469_);
v___x_3471_ = lean_unsigned_to_nat(2u);
v___x_3472_ = lean_mk_empty_array_with_capacity(v___x_3471_);
lean_inc_ref(v_k_3463_);
v___x_3473_ = lean_array_push(v___x_3472_, v_k_3463_);
v___x_3474_ = lean_array_push(v___x_3473_, v___x_3470_);
v___x_3475_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
v___x_3476_ = lasm_js_call(v___x_3466_, v___x_3467_, v___x_3468_, v_a_3465_, v___x_3475_);
lean_dec_ref_known(v___x_3475_, 1);
lean_dec(v_a_3465_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
lean_dec_ref_known(v___x_3476_, 1);
v___x_3478_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3479_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3463_);
v___x_3480_ = lean_string_append(v___x_3478_, v___x_3479_);
lean_dec_ref(v___x_3479_);
v___x_3481_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v___x_3480_, v_a_3477_);
lean_dec(v_a_3477_);
lean_dec_ref(v___x_3480_);
return v___x_3481_;
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
lean_dec_ref_known(v_k_3463_, 1);
v_a_3482_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3476_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3476_);
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
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec_ref_known(v_k_3463_, 1);
lean_dec(v_o_3460_);
v_a_3490_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_3464_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3464_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0___boxed(lean_object* v_o_3498_, lean_object* v_key_3499_, lean_object* v_a_3500_){
_start:
{
lean_object* v_res_3501_; 
v_res_3501_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_o_3498_, v_key_3499_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(lean_object* v___f_3507_, lean_object* v_a_3508_, lean_object* v_x_3509_){
_start:
{
if (lean_obj_tag(v_x_3509_) == 0)
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3519_; 
lean_dec(v_a_3508_);
lean_dec_ref(v___f_3507_);
v_a_3511_ = lean_ctor_get(v_x_3509_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v_x_3509_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3513_ = v_x_3509_;
v_isShared_3514_ = v_isSharedCheck_3519_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v_x_3509_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3519_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3516_; 
if (v_isShared_3514_ == 0)
{
v___x_3516_ = v___x_3513_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_a_3511_);
v___x_3516_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
lean_object* v___x_3517_; 
v___x_3517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3516_);
return v___x_3517_;
}
}
}
else
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3542_; 
v_a_3520_ = lean_ctor_get(v_x_3509_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v_x_3509_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3522_ = v_x_3509_;
v_isShared_3523_ = v_isSharedCheck_3542_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v_x_3509_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3542_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
uint8_t v___x_3524_; 
v___x_3524_ = lean_unbox(v_a_3520_);
if (v___x_3524_ == 0)
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v_val_3528_; lean_object* v___x_3532_; 
v___x_3525_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_3526_ = lean_unsigned_to_nat(0u);
v___x_3532_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_a_3508_, v___x_3525_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3535_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3532_, 1);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v_a_3533_);
v___x_3535_ = v___x_3522_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3533_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
v_val_3528_ = v___x_3535_;
goto v___jp_3527_;
}
}
else
{
lean_object* v_a_3537_; lean_object* v___x_3539_; 
v_a_3537_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3537_);
lean_dec_ref_known(v___x_3532_, 1);
if (v_isShared_3523_ == 0)
{
lean_ctor_set_tag(v___x_3522_, 0);
lean_ctor_set(v___x_3522_, 0, v_a_3537_);
v___x_3539_ = v___x_3522_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3537_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
v_val_3528_ = v___x_3539_;
goto v___jp_3527_;
}
}
v___jp_3527_:
{
lean_object* v___x_3529_; uint8_t v___x_3530_; lean_object* v___x_3531_; 
v___x_3529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3529_, 0, v_val_3528_);
v___x_3530_ = lean_unbox(v_a_3520_);
lean_dec(v_a_3520_);
v___x_3531_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3526_, v___x_3530_, v___x_3529_, v___f_3507_);
return v___x_3531_;
}
}
else
{
lean_object* v___x_3541_; 
lean_del_object(v___x_3522_);
lean_dec(v_a_3520_);
lean_dec(v_a_3508_);
lean_dec_ref(v___f_3507_);
v___x_3541_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__2));
return v___x_3541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed(lean_object* v___f_3543_, lean_object* v_a_3544_, lean_object* v_x_3545_, lean_object* v___y_3546_){
_start:
{
lean_object* v_res_3547_; 
v_res_3547_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(v___f_3543_, v_a_3544_, v_x_3545_);
return v_res_3547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(lean_object* v___f_3549_, lean_object* v_x_3550_){
_start:
{
if (lean_obj_tag(v_x_3550_) == 0)
{
lean_object* v_a_3552_; lean_object* v___x_3554_; uint8_t v_isShared_3555_; uint8_t v_isSharedCheck_3560_; 
lean_dec_ref(v___f_3549_);
v_a_3552_ = lean_ctor_get(v_x_3550_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_x_3550_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3554_ = v_x_3550_;
v_isShared_3555_ = v_isSharedCheck_3560_;
goto v_resetjp_3553_;
}
else
{
lean_inc(v_a_3552_);
lean_dec(v_x_3550_);
v___x_3554_ = lean_box(0);
v_isShared_3555_ = v_isSharedCheck_3560_;
goto v_resetjp_3553_;
}
v_resetjp_3553_:
{
lean_object* v___x_3557_; 
if (v_isShared_3555_ == 0)
{
v___x_3557_ = v___x_3554_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_a_3552_);
v___x_3557_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
lean_object* v___x_3558_; 
v___x_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
return v___x_3558_;
}
}
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3582_; 
v_a_3561_ = lean_ctor_get(v_x_3550_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_x_3550_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3563_ = v_x_3550_;
v_isShared_3564_ = v_isSharedCheck_3582_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v_x_3550_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3582_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___f_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; uint8_t v___x_3568_; lean_object* v_val_3570_; lean_object* v___x_3573_; 
lean_inc(v_a_3561_);
v___f_3565_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3565_, 0, v___f_3549_);
lean_closure_set(v___f_3565_, 1, v_a_3561_);
v___x_3566_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_3567_ = lean_unsigned_to_nat(0u);
v___x_3568_ = 0;
v___x_3573_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_3561_, v___x_3566_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; lean_object* v___x_3576_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
lean_inc(v_a_3574_);
lean_dec_ref_known(v___x_3573_, 1);
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 0, v_a_3574_);
v___x_3576_ = v___x_3563_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_a_3574_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
v_val_3570_ = v___x_3576_;
goto v___jp_3569_;
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; 
v_a_3578_ = lean_ctor_get(v___x_3573_, 0);
lean_inc(v_a_3578_);
lean_dec_ref_known(v___x_3573_, 1);
if (v_isShared_3564_ == 0)
{
lean_ctor_set_tag(v___x_3563_, 0);
lean_ctor_set(v___x_3563_, 0, v_a_3578_);
v___x_3580_ = v___x_3563_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3578_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
v_val_3570_ = v___x_3580_;
goto v___jp_3569_;
}
}
v___jp_3569_:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3571_, 0, v_val_3570_);
v___x_3572_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3567_, v___x_3568_, v___x_3571_, v___f_3565_);
return v___x_3572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___boxed(lean_object* v___f_3583_, lean_object* v_x_3584_, lean_object* v___y_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(v___f_3583_, v_x_3584_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(lean_object* v_it_3591_){
_start:
{
lean_object* v___f_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; uint8_t v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; 
v___f_3593_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__1));
v___x_3594_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_3595_ = lean_unsigned_to_nat(0u);
v___x_3596_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3597_ = 0;
v___x_3598_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_3591_, v___x_3594_, v___x_3596_);
v___x_3599_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3595_, v___x_3597_, v___x_3598_, v___f_3593_);
return v___x_3599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___boxed(lean_object* v_it_3600_, lean_object* v_a_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3600_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(lean_object* v_acc_3603_, lean_object* v_it_3604_, lean_object* v_x_3605_){
_start:
{
if (lean_obj_tag(v_x_3605_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3615_; 
lean_dec(v_it_3604_);
lean_dec_ref(v_acc_3603_);
v_a_3607_ = lean_ctor_get(v_x_3605_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v_x_3605_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3609_ = v_x_3605_;
v_isShared_3610_ = v_isSharedCheck_3615_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v_x_3605_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3615_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3612_; 
if (v_isShared_3610_ == 0)
{
v___x_3612_ = v___x_3609_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_a_3607_);
v___x_3612_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
lean_object* v___x_3613_; 
v___x_3613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3612_);
return v___x_3613_;
}
}
}
else
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3627_; 
v_a_3616_ = lean_ctor_get(v_x_3605_, 0);
v_isSharedCheck_3627_ = !lean_is_exclusive(v_x_3605_);
if (v_isSharedCheck_3627_ == 0)
{
v___x_3618_ = v_x_3605_;
v_isShared_3619_ = v_isSharedCheck_3627_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v_x_3605_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3627_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
if (lean_obj_tag(v_a_3616_) == 0)
{
lean_object* v___x_3621_; 
lean_dec(v_it_3604_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 0, v_acc_3603_);
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_acc_3603_);
v___x_3621_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
lean_object* v___x_3622_; 
v___x_3622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3621_);
return v___x_3622_;
}
}
else
{
lean_object* v_val_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; 
lean_del_object(v___x_3618_);
v_val_3624_ = lean_ctor_get(v_a_3616_, 0);
lean_inc(v_val_3624_);
lean_dec_ref_known(v_a_3616_, 1);
v___x_3625_ = lean_array_push(v_acc_3603_, v_val_3624_);
v___x_3626_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3604_, v___x_3625_);
return v___x_3626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed(lean_object* v_acc_3628_, lean_object* v_it_3629_, lean_object* v_x_3630_, lean_object* v___y_3631_){
_start:
{
lean_object* v_res_3632_; 
v_res_3632_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(v_acc_3628_, v_it_3629_, v_x_3630_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(lean_object* v_it_3633_, lean_object* v_acc_3634_){
_start:
{
lean_object* v___f_3636_; lean_object* v___x_3637_; uint8_t v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
lean_inc(v_it_3633_);
v___f_3636_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3636_, 0, v_acc_3634_);
lean_closure_set(v___f_3636_, 1, v_it_3633_);
v___x_3637_ = lean_unsigned_to_nat(0u);
v___x_3638_ = 0;
v___x_3639_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3633_);
v___x_3640_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3637_, v___x_3638_, v___x_3639_, v___f_3636_);
return v___x_3640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___boxed(lean_object* v_it_3641_, lean_object* v_acc_3642_, lean_object* v_a_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3641_, v_acc_3642_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(lean_object* v_x_3647_){
_start:
{
if (lean_obj_tag(v_x_3647_) == 0)
{
lean_object* v_a_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3657_; 
v_a_3649_ = lean_ctor_get(v_x_3647_, 0);
v_isSharedCheck_3657_ = !lean_is_exclusive(v_x_3647_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3651_ = v_x_3647_;
v_isShared_3652_ = v_isSharedCheck_3657_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_a_3649_);
lean_dec(v_x_3647_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3657_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
lean_object* v___x_3654_; 
if (v_isShared_3652_ == 0)
{
v___x_3654_ = v___x_3651_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v_a_3649_);
v___x_3654_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
lean_object* v___x_3655_; 
v___x_3655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3654_);
return v___x_3655_;
}
}
}
else
{
lean_object* v_a_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; 
v_a_3658_ = lean_ctor_get(v_x_3647_, 0);
lean_inc(v_a_3658_);
lean_dec_ref_known(v_x_3647_, 1);
v___x_3659_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___closed__0));
v___x_3660_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_a_3658_, v___x_3659_);
return v___x_3660_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___boxed(lean_object* v_x_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(v_x_3661_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values(lean_object* v_self_3665_){
_start:
{
lean_object* v___f_3667_; lean_object* v___x_3668_; uint8_t v___x_3669_; lean_object* v_val_3671_; lean_object* v___x_3674_; 
v___f_3667_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___closed__0));
v___x_3668_ = lean_unsigned_to_nat(0u);
v___x_3669_ = 0;
v___x_3674_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3665_);
if (lean_obj_tag(v___x_3674_) == 0)
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
v_a_3675_ = lean_ctor_get(v___x_3674_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3674_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3674_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3674_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
lean_ctor_set_tag(v___x_3677_, 1);
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
v_val_3671_ = v___x_3680_;
goto v___jp_3670_;
}
}
}
else
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
v_a_3683_ = lean_ctor_get(v___x_3674_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3674_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3674_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3674_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
lean_ctor_set_tag(v___x_3685_, 0);
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
v_val_3671_ = v___x_3688_;
goto v___jp_3670_;
}
}
}
v___jp_3670_:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3672_, 0, v_val_3671_);
v___x_3673_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3668_, v___x_3669_, v___x_3672_, v___f_3667_);
return v___x_3673_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___boxed(lean_object* v_self_3691_, lean_object* v_a_3692_){
_start:
{
lean_object* v_res_3693_; 
v_res_3693_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values(v_self_3691_);
return v_res_3693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close(lean_object* v_self_3694_){
_start:
{
lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3696_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3697_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3698_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3694_, v___x_3696_, v___x_3697_);
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close___boxed(lean_object* v_self_3699_, lean_object* v_a_3700_){
_start:
{
lean_object* v_res_3701_; 
v_res_3701_ = l_Lasm_JS_Deno_FsWatcher_close(v_self_3699_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator(lean_object* v_self_3702_){
_start:
{
lean_object* v___x_3704_; 
v___x_3704_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
lean_inc(v_a_3705_);
lean_dec_ref_known(v___x_3704_, 1);
v___x_3706_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3707_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3705_, v___x_3706_);
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; 
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v___x_3707_, 1);
v___x_3709_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3710_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3708_, v___x_3709_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v_a_3711_; lean_object* v___x_3712_; 
v_a_3711_ = lean_ctor_get(v___x_3710_, 0);
lean_inc(v_a_3711_);
lean_dec_ref_known(v___x_3710_, 1);
lean_inc(v_self_3702_);
v___x_3712_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3702_, v_a_3711_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3713_);
lean_dec_ref_known(v___x_3712_, 1);
v___x_3714_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3715_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3716_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3716_, 0, v_self_3702_);
lean_ctor_set(v___x_3716_, 1, v___x_3715_);
v___x_3717_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3713_, v___x_3714_, v___x_3716_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3717_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3717_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
v_a_3726_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3717_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3717_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
lean_dec(v_self_3702_);
v_a_3734_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3712_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3712_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_a_3734_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
lean_dec(v_self_3702_);
v_a_3742_ = lean_ctor_get(v___x_3710_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3710_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3710_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_dec(v_self_3702_);
v_a_3750_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3707_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3707_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec(v_self_3702_);
v_a_3758_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3704_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3704_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator___boxed(lean_object* v_self_3766_, lean_object* v_a_3767_){
_start:
{
lean_object* v_res_3768_; 
v_res_3768_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_3766_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(lean_object* v_x_3769_){
_start:
{
if (lean_obj_tag(v_x_3769_) == 0)
{
lean_object* v_a_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3779_; 
v_a_3771_ = lean_ctor_get(v_x_3769_, 0);
v_isSharedCheck_3779_ = !lean_is_exclusive(v_x_3769_);
if (v_isSharedCheck_3779_ == 0)
{
v___x_3773_ = v_x_3769_;
v_isShared_3774_ = v_isSharedCheck_3779_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_a_3771_);
lean_dec(v_x_3769_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3779_;
goto v_resetjp_3772_;
}
v_resetjp_3772_:
{
lean_object* v___x_3776_; 
if (v_isShared_3774_ == 0)
{
v___x_3776_ = v___x_3773_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v_a_3771_);
v___x_3776_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
lean_object* v___x_3777_; 
v___x_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3776_);
return v___x_3777_;
}
}
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3789_; 
v_a_3780_ = lean_ctor_get(v_x_3769_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v_x_3769_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3782_ = v_x_3769_;
v_isShared_3783_ = v_isSharedCheck_3789_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v_x_3769_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3789_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___x_3784_; lean_object* v___x_3786_; 
v___x_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3784_, 0, v_a_3780_);
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 0, v___x_3784_);
v___x_3786_ = v___x_3782_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v___x_3784_);
v___x_3786_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
lean_object* v___x_3787_; 
v___x_3787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3786_);
return v___x_3787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0___boxed(lean_object* v_x_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v_res_3792_; 
v_res_3792_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(v_x_3790_);
return v_res_3792_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3793_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0));
v___x_3794_ = lean_string_utf8_byte_size(v___x_3793_);
return v___x_3794_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; uint8_t v___x_3797_; 
v___x_3795_ = lean_unsigned_to_nat(0u);
v___x_3796_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_3797_ = lean_nat_dec_eq(v___x_3796_, v___x_3795_);
return v___x_3797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3801_, lean_object* v_key_3802_){
_start:
{
if (lean_obj_tag(v_d_3801_) == 8)
{
lean_object* v___x_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3849_; 
v___x_3803_ = l_Lasm_JS_Data_field(v_d_3801_, v_key_3802_);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_d_3801_);
if (v_isSharedCheck_3849_ == 0)
{
lean_object* v_unused_3850_; 
v_unused_3850_ = lean_ctor_get(v_d_3801_, 0);
lean_dec(v_unused_3850_);
v___x_3805_ = v_d_3801_;
v_isShared_3806_ = v_isSharedCheck_3849_;
goto v_resetjp_3804_;
}
else
{
lean_dec(v_d_3801_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3849_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
if (lean_obj_tag(v___x_3803_) == 4)
{
lean_object* v_s_3827_; lean_object* v___x_3828_; uint8_t v___x_3829_; 
v_s_3827_ = lean_ctor_get(v___x_3803_, 0);
lean_inc_ref(v_s_3827_);
v___x_3828_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0));
v___x_3829_ = lean_string_dec_eq(v_s_3827_, v___x_3828_);
if (v___x_3829_ == 0)
{
lean_object* v___x_3830_; uint8_t v___x_3831_; 
v___x_3830_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2));
v___x_3831_ = lean_string_dec_eq(v_s_3827_, v___x_3830_);
if (v___x_3831_ == 0)
{
lean_object* v___x_3832_; uint8_t v___x_3833_; 
v___x_3832_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_3833_ = lean_string_dec_eq(v_s_3827_, v___x_3832_);
if (v___x_3833_ == 0)
{
lean_object* v___x_3834_; uint8_t v___x_3835_; 
v___x_3834_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6));
v___x_3835_ = lean_string_dec_eq(v_s_3827_, v___x_3834_);
if (v___x_3835_ == 0)
{
lean_object* v___x_3836_; uint8_t v___x_3837_; 
v___x_3836_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8));
v___x_3837_ = lean_string_dec_eq(v_s_3827_, v___x_3836_);
if (v___x_3837_ == 0)
{
lean_object* v___x_3838_; uint8_t v___x_3839_; 
v___x_3838_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10));
v___x_3839_ = lean_string_dec_eq(v_s_3827_, v___x_3838_);
if (v___x_3839_ == 0)
{
lean_object* v___x_3840_; uint8_t v___x_3841_; 
v___x_3840_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12));
v___x_3841_ = lean_string_dec_eq(v_s_3827_, v___x_3840_);
lean_dec_ref(v_s_3827_);
if (v___x_3841_ == 0)
{
goto v___jp_3807_;
}
else
{
lean_object* v___x_3842_; 
lean_dec_ref_known(v___x_3803_, 1);
lean_del_object(v___x_3805_);
v___x_3842_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2));
return v___x_3842_;
}
}
else
{
lean_object* v___x_3843_; 
lean_dec_ref_known(v___x_3803_, 1);
lean_dec_ref(v_s_3827_);
lean_del_object(v___x_3805_);
v___x_3843_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3));
return v___x_3843_;
}
}
else
{
lean_object* v___x_3844_; 
lean_dec_ref_known(v___x_3803_, 1);
lean_dec_ref(v_s_3827_);
lean_del_object(v___x_3805_);
v___x_3844_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4));
return v___x_3844_;
}
}
else
{
lean_object* v___x_3845_; 
lean_dec_ref_known(v___x_3803_, 1);
lean_dec_ref(v_s_3827_);
lean_del_object(v___x_3805_);
v___x_3845_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5));
return v___x_3845_;
}
}
else
{
lean_object* v___x_3846_; 
lean_dec_ref_known(v___x_3803_, 1);
lean_dec_ref(v_s_3827_);
lean_del_object(v___x_3805_);
v___x_3846_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6));
return v___x_3846_;
}
}
else
{
lean_object* v___x_3847_; 
lean_dec_ref_known(v___x_3803_, 1);
lean_dec_ref(v_s_3827_);
lean_del_object(v___x_3805_);
v___x_3847_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7));
return v___x_3847_;
}
}
else
{
lean_object* v___x_3848_; 
lean_dec_ref_known(v___x_3803_, 1);
lean_dec_ref(v_s_3827_);
lean_del_object(v___x_3805_);
v___x_3848_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8));
return v___x_3848_;
}
}
else
{
goto v___jp_3807_;
}
v___jp_3807_:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; uint8_t v___x_3818_; 
v___x_3808_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3809_ = lean_string_append(v___x_3808_, v_key_3802_);
v___x_3810_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3811_ = lean_string_append(v___x_3809_, v___x_3810_);
v___x_3812_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1));
v___x_3813_ = lean_string_append(v___x_3811_, v___x_3812_);
v___x_3814_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3815_ = lean_string_append(v___x_3813_, v___x_3814_);
v___x_3816_ = l_Lasm_JS_Data_describe(v___x_3803_);
v___x_3817_ = lean_string_append(v___x_3815_, v___x_3816_);
lean_dec_ref(v___x_3816_);
v___x_3818_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3818_ == 0)
{
lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3822_; 
v___x_3819_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3820_ = lean_string_append(v___x_3817_, v___x_3819_);
if (v_isShared_3806_ == 0)
{
lean_ctor_set_tag(v___x_3805_, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3820_);
v___x_3822_ = v___x_3805_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
else
{
lean_object* v___x_3825_; 
if (v_isShared_3806_ == 0)
{
lean_ctor_set_tag(v___x_3805_, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3817_);
v___x_3825_ = v___x_3805_;
goto v_reusejp_3824_;
}
else
{
lean_object* v_reuseFailAlloc_3826_; 
v_reuseFailAlloc_3826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3826_, 0, v___x_3817_);
v___x_3825_ = v_reuseFailAlloc_3826_;
goto v_reusejp_3824_;
}
v_reusejp_3824_:
{
return v___x_3825_;
}
}
}
}
}
else
{
lean_object* v___x_3851_; 
lean_dec(v_d_3801_);
v___x_3851_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_3851_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3852_, lean_object* v_key_3853_){
_start:
{
lean_object* v_res_3854_; 
v_res_3854_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_3852_, v_key_3853_);
lean_dec_ref(v_key_3853_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3860_, lean_object* v_key_3861_){
_start:
{
if (lean_obj_tag(v_d_3860_) == 8)
{
lean_object* v___x_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3906_; 
v___x_3862_ = l_Lasm_JS_Data_field(v_d_3860_, v_key_3861_);
v_isSharedCheck_3906_ = !lean_is_exclusive(v_d_3860_);
if (v_isSharedCheck_3906_ == 0)
{
lean_object* v_unused_3907_; 
v_unused_3907_ = lean_ctor_get(v_d_3860_, 0);
lean_dec(v_unused_3907_);
v___x_3864_ = v_d_3860_;
v_isShared_3865_ = v_isSharedCheck_3906_;
goto v_resetjp_3863_;
}
else
{
lean_dec(v_d_3860_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3906_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v_a_3867_; 
if (lean_obj_tag(v___x_3862_) == 7)
{
lean_object* v_items_3892_; size_t v_sz_3893_; size_t v___x_3894_; lean_object* v___x_3895_; 
v_items_3892_ = lean_ctor_get(v___x_3862_, 0);
lean_inc_ref(v_items_3892_);
v_sz_3893_ = lean_array_size(v_items_3892_);
v___x_3894_ = ((size_t)0ULL);
v___x_3895_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_3893_, v___x_3894_, v_items_3892_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; uint8_t v___x_3900_; 
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
lean_inc(v_a_3896_);
lean_dec_ref_known(v___x_3895_, 1);
v___x_3897_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3898_ = lean_string_utf8_byte_size(v_a_3896_);
v___x_3899_ = lean_unsigned_to_nat(0u);
v___x_3900_ = lean_nat_dec_eq(v___x_3898_, v___x_3899_);
if (v___x_3900_ == 0)
{
lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3901_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_3902_ = lean_string_append(v___x_3901_, v_a_3896_);
lean_dec(v_a_3896_);
v___x_3903_ = lean_string_append(v___x_3897_, v___x_3902_);
lean_dec_ref(v___x_3902_);
v_a_3867_ = v___x_3903_;
goto v___jp_3866_;
}
else
{
lean_dec(v_a_3896_);
v_a_3867_ = v___x_3897_;
goto v___jp_3866_;
}
}
else
{
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3904_; 
v_a_3904_ = lean_ctor_get(v___x_3895_, 0);
lean_inc(v_a_3904_);
lean_dec_ref_known(v___x_3895_, 1);
v_a_3867_ = v_a_3904_;
goto v___jp_3866_;
}
else
{
lean_dec_ref_known(v___x_3862_, 1);
lean_del_object(v___x_3864_);
return v___x_3895_;
}
}
}
else
{
lean_object* v___x_3905_; 
v___x_3905_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_a_3867_ = v___x_3905_;
goto v___jp_3866_;
}
v___jp_3866_:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; uint8_t v___x_3880_; 
v___x_3868_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3869_ = lean_string_append(v___x_3868_, v_key_3861_);
v___x_3870_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3871_ = lean_string_append(v___x_3869_, v___x_3870_);
v___x_3872_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0));
v___x_3873_ = lean_string_append(v___x_3871_, v___x_3872_);
v___x_3874_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3875_ = lean_string_append(v___x_3873_, v___x_3874_);
v___x_3876_ = l_Lasm_JS_Data_describe(v___x_3862_);
v___x_3877_ = lean_string_append(v___x_3875_, v___x_3876_);
lean_dec_ref(v___x_3876_);
v___x_3878_ = lean_string_utf8_byte_size(v_a_3867_);
v___x_3879_ = lean_unsigned_to_nat(0u);
v___x_3880_ = lean_nat_dec_eq(v___x_3878_, v___x_3879_);
if (v___x_3880_ == 0)
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3887_; 
v___x_3881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3882_ = lean_string_append(v___x_3881_, v_a_3867_);
lean_dec_ref(v_a_3867_);
v___x_3883_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3884_ = lean_string_append(v___x_3882_, v___x_3883_);
v___x_3885_ = lean_string_append(v___x_3877_, v___x_3884_);
lean_dec_ref(v___x_3884_);
if (v_isShared_3865_ == 0)
{
lean_ctor_set_tag(v___x_3864_, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3885_);
v___x_3887_ = v___x_3864_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v___x_3885_);
v___x_3887_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
return v___x_3887_;
}
}
else
{
lean_object* v___x_3890_; 
lean_dec_ref(v_a_3867_);
if (v_isShared_3865_ == 0)
{
lean_ctor_set_tag(v___x_3864_, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3877_);
v___x_3890_ = v___x_3864_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v___x_3877_);
v___x_3890_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
return v___x_3890_;
}
}
}
}
}
else
{
lean_object* v___x_3908_; 
lean_dec(v_d_3860_);
v___x_3908_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3));
return v___x_3908_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3909_, lean_object* v_key_3910_){
_start:
{
lean_object* v_res_3911_; 
v_res_3911_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_3909_, v_key_3910_);
lean_dec_ref(v_key_3910_);
return v_res_3911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_3921_, lean_object* v_key_3922_){
_start:
{
if (lean_obj_tag(v_d_3921_) == 8)
{
lean_object* v___x_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3953_; 
v___x_3925_ = l_Lasm_JS_Data_field(v_d_3921_, v_key_3922_);
v_isSharedCheck_3953_ = !lean_is_exclusive(v_d_3921_);
if (v_isSharedCheck_3953_ == 0)
{
lean_object* v_unused_3954_; 
v_unused_3954_ = lean_ctor_get(v_d_3921_, 0);
lean_dec(v_unused_3954_);
v___x_3927_ = v_d_3921_;
v_isShared_3928_ = v_isSharedCheck_3953_;
goto v_resetjp_3926_;
}
else
{
lean_dec(v_d_3921_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3953_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
switch(lean_obj_tag(v___x_3925_))
{
case 1:
{
lean_del_object(v___x_3927_);
goto v___jp_3923_;
}
case 0:
{
lean_del_object(v___x_3927_);
goto v___jp_3923_;
}
default: 
{
if (lean_obj_tag(v___x_3925_) == 4)
{
lean_object* v_s_3949_; lean_object* v___x_3950_; uint8_t v___x_3951_; 
v_s_3949_ = lean_ctor_get(v___x_3925_, 0);
lean_inc_ref(v_s_3949_);
v___x_3950_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0));
v___x_3951_ = lean_string_dec_eq(v_s_3949_, v___x_3950_);
lean_dec_ref(v_s_3949_);
if (v___x_3951_ == 0)
{
goto v___jp_3929_;
}
else
{
lean_object* v___x_3952_; 
lean_dec_ref_known(v___x_3925_, 1);
lean_del_object(v___x_3927_);
v___x_3952_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
return v___x_3952_;
}
}
else
{
goto v___jp_3929_;
}
}
}
v___jp_3929_:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; uint8_t v___x_3940_; 
v___x_3930_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3931_ = lean_string_append(v___x_3930_, v_key_3922_);
v___x_3932_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3933_ = lean_string_append(v___x_3931_, v___x_3932_);
v___x_3934_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_3935_ = lean_string_append(v___x_3933_, v___x_3934_);
v___x_3936_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3937_ = lean_string_append(v___x_3935_, v___x_3936_);
v___x_3938_ = l_Lasm_JS_Data_describe(v___x_3925_);
v___x_3939_ = lean_string_append(v___x_3937_, v___x_3938_);
lean_dec_ref(v___x_3938_);
v___x_3940_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3940_ == 0)
{
lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3944_; 
v___x_3941_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3942_ = lean_string_append(v___x_3939_, v___x_3941_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set_tag(v___x_3927_, 0);
lean_ctor_set(v___x_3927_, 0, v___x_3942_);
v___x_3944_ = v___x_3927_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3942_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
else
{
lean_object* v___x_3947_; 
if (v_isShared_3928_ == 0)
{
lean_ctor_set_tag(v___x_3927_, 0);
lean_ctor_set(v___x_3927_, 0, v___x_3939_);
v___x_3947_ = v___x_3927_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v___x_3939_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
}
}
else
{
lean_object* v___x_3955_; 
lean_dec(v_d_3921_);
v___x_3955_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4));
return v___x_3955_;
}
v___jp_3923_:
{
lean_object* v___x_3924_; 
v___x_3924_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
return v___x_3924_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_3956_, lean_object* v_key_3957_){
_start:
{
lean_object* v_res_3958_; 
v_res_3958_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_3956_, v_key_3957_);
lean_dec_ref(v_key_3957_);
return v_res_3958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_3959_, lean_object* v_d_3960_){
_start:
{
lean_object* v___y_3963_; lean_object* v___y_3964_; lean_object* v___y_3969_; lean_object* v_received_3970_; lean_object* v___y_3989_; lean_object* v_a_3992_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4016_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0));
lean_inc(v_d_3960_);
v___x_4017_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_3960_, v___x_4016_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_object* v_a_4018_; 
v_a_4018_ = lean_ctor_get(v___x_4017_, 0);
lean_inc(v_a_4018_);
lean_dec_ref_known(v___x_4017_, 1);
v_a_3992_ = v_a_4018_;
goto v___jp_3991_;
}
else
{
lean_object* v_a_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v_a_4019_ = lean_ctor_get(v___x_4017_, 0);
lean_inc(v_a_4019_);
lean_dec_ref_known(v___x_4017_, 1);
v___x_4020_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1));
lean_inc(v_d_3960_);
v___x_4021_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_3960_, v___x_4020_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; 
lean_dec(v_a_4019_);
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v___x_4021_, 1);
v_a_3992_ = v_a_4022_;
goto v___jp_3991_;
}
else
{
lean_object* v_a_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; 
v_a_4023_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v___x_4021_, 1);
v___x_4024_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2));
lean_inc(v_d_3960_);
v___x_4025_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_3960_, v___x_4024_);
if (lean_obj_tag(v___x_4025_) == 0)
{
lean_object* v_a_4026_; 
lean_dec(v_a_4023_);
lean_dec(v_a_4019_);
v_a_4026_ = lean_ctor_get(v___x_4025_, 0);
lean_inc(v_a_4026_);
lean_dec_ref_known(v___x_4025_, 1);
v_a_3992_ = v_a_4026_;
goto v___jp_3991_;
}
else
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4036_; 
lean_dec(v_d_3960_);
v_a_4027_ = lean_ctor_get(v___x_4025_, 0);
v_isSharedCheck_4036_ = !lean_is_exclusive(v___x_4025_);
if (v_isSharedCheck_4036_ == 0)
{
v___x_4029_ = v___x_4025_;
v_isShared_4030_ = v_isSharedCheck_4036_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v___x_4025_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4036_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4031_; uint8_t v___x_4032_; lean_object* v___x_4034_; 
v___x_4031_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4031_, 0, v_a_4023_);
lean_ctor_set(v___x_4031_, 1, v_a_4027_);
v___x_4032_ = lean_unbox(v_a_4019_);
lean_dec(v_a_4019_);
lean_ctor_set_uint8(v___x_4031_, sizeof(void*)*2, v___x_4032_);
if (v_isShared_4030_ == 0)
{
lean_ctor_set_tag(v___x_4029_, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4031_);
v___x_4034_ = v___x_4029_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v___x_4031_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
return v___x_4034_;
}
}
}
}
}
v___jp_3962_:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3965_ = lean_string_append(v___y_3963_, v___y_3964_);
lean_dec_ref(v___y_3964_);
v___x_3966_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
v___x_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3966_);
return v___x_3967_;
}
v___jp_3968_:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; uint8_t v___x_3982_; 
v___x_3971_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_3972_ = lean_string_append(v___x_3971_, v_context_3959_);
v___x_3973_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_3974_ = lean_string_append(v___x_3972_, v___x_3973_);
v___x_3975_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___closed__3));
v___x_3976_ = lean_string_append(v___x_3974_, v___x_3975_);
v___x_3977_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_3978_ = lean_string_append(v___x_3976_, v___x_3977_);
v___x_3979_ = lean_string_append(v___x_3978_, v_received_3970_);
lean_dec_ref(v_received_3970_);
v___x_3980_ = lean_string_utf8_byte_size(v___y_3969_);
v___x_3981_ = lean_unsigned_to_nat(0u);
v___x_3982_ = lean_nat_dec_eq(v___x_3980_, v___x_3981_);
if (v___x_3982_ == 0)
{
lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; 
v___x_3983_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_3984_ = lean_string_append(v___x_3983_, v___y_3969_);
lean_dec_ref(v___y_3969_);
v___x_3985_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_3986_ = lean_string_append(v___x_3984_, v___x_3985_);
v___y_3963_ = v___x_3979_;
v___y_3964_ = v___x_3986_;
goto v___jp_3962_;
}
else
{
lean_object* v___x_3987_; 
lean_dec_ref(v___y_3969_);
v___x_3987_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_3963_ = v___x_3979_;
v___y_3964_ = v___x_3987_;
goto v___jp_3962_;
}
}
v___jp_3988_:
{
lean_object* v___x_3990_; 
v___x_3990_ = l_Lasm_JS_Data_describe(v_d_3960_);
v___y_3969_ = v___y_3989_;
v_received_3970_ = v___x_3990_;
goto v___jp_3968_;
}
v___jp_3991_:
{
if (lean_obj_tag(v_d_3960_) == 9)
{
lean_object* v_value_3993_; lean_object* v_description_3994_; lean_object* v___x_3995_; uint8_t v___x_3996_; 
v_value_3993_ = lean_ctor_get(v_d_3960_, 0);
v_description_3994_ = lean_ctor_get(v_d_3960_, 1);
v___x_3995_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3996_ = lean_string_dec_eq(v_description_3994_, v___x_3995_);
if (v___x_3996_ == 0)
{
v___y_3989_ = v_a_3992_;
goto v___jp_3988_;
}
else
{
lean_object* v___x_3998_; uint8_t v_isShared_3999_; uint8_t v_isSharedCheck_4013_; 
lean_inc(v_value_3993_);
v_isSharedCheck_4013_ = !lean_is_exclusive(v_d_3960_);
if (v_isSharedCheck_4013_ == 0)
{
lean_object* v_unused_4014_; lean_object* v_unused_4015_; 
v_unused_4014_ = lean_ctor_get(v_d_3960_, 1);
lean_dec(v_unused_4014_);
v_unused_4015_ = lean_ctor_get(v_d_3960_, 0);
lean_dec(v_unused_4015_);
v___x_3998_ = v_d_3960_;
v_isShared_3999_ = v_isSharedCheck_4013_;
goto v_resetjp_3997_;
}
else
{
lean_dec(v_d_3960_);
v___x_3998_ = lean_box(0);
v_isShared_3999_ = v_isSharedCheck_4013_;
goto v_resetjp_3997_;
}
v_resetjp_3997_:
{
uint32_t v___x_4000_; uint64_t v___x_4001_; lean_object* v___x_4003_; 
v___x_4000_ = 206;
v___x_4001_ = 0ULL;
lean_inc(v_value_3993_);
if (v_isShared_3999_ == 0)
{
lean_ctor_set(v___x_3998_, 1, v___x_3995_);
v___x_4003_ = v___x_3998_;
goto v_reusejp_4002_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v_value_3993_);
lean_ctor_set(v_reuseFailAlloc_4012_, 1, v___x_3995_);
v___x_4003_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4002_;
}
v_reusejp_4002_:
{
uint32_t v___x_4004_; lean_object* v___x_4005_; 
v___x_4004_ = lasm_js_value_handle(v_value_3993_);
lean_dec(v_value_3993_);
v___x_4005_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4000_, v___x_4001_, v___x_4003_, v___x_4004_);
lean_dec_ref(v___x_4003_);
if (lean_obj_tag(v___x_4005_) == 0)
{
lean_object* v_a_4006_; uint8_t v___x_4007_; 
v_a_4006_ = lean_ctor_get(v___x_4005_, 0);
lean_inc(v_a_4006_);
lean_dec_ref_known(v___x_4005_, 1);
v___x_4007_ = lean_string_validate_utf8(v_a_4006_);
if (v___x_4007_ == 0)
{
lean_object* v___x_4008_; lean_object* v___x_4009_; 
lean_dec(v_a_4006_);
v___x_4008_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__8);
v___x_4009_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4008_);
v___y_3969_ = v_a_3992_;
v_received_3970_ = v___x_4009_;
goto v___jp_3968_;
}
else
{
lean_object* v___x_4010_; 
v___x_4010_ = lean_string_from_utf8_unchecked(v_a_4006_);
v___y_3969_ = v_a_3992_;
v_received_3970_ = v___x_4010_;
goto v___jp_3968_;
}
}
else
{
lean_object* v___x_4011_; 
lean_dec_ref_known(v___x_4005_, 1);
v___x_4011_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__9));
v___y_3969_ = v_a_3992_;
v_received_3970_ = v___x_4011_;
goto v___jp_3968_;
}
}
}
}
}
else
{
v___y_3989_ = v_a_3992_;
goto v___jp_3988_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4037_, lean_object* v_d_4038_, lean_object* v_a_4039_){
_start:
{
lean_object* v_res_4040_; 
v_res_4040_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4037_, v_d_4038_);
lean_dec_ref(v_context_4037_);
return v_res_4040_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(lean_object* v_context_4041_, lean_object* v_bytes_4042_){
_start:
{
lean_object* v___x_4044_; 
v___x_4044_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4042_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_a_4045_; lean_object* v___x_4046_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
lean_inc(v_a_4045_);
lean_dec_ref_known(v___x_4044_, 1);
v___x_4046_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4041_, v_a_4045_);
return v___x_4046_;
}
else
{
lean_object* v_a_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4054_; 
v_a_4047_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4054_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_4049_ = v___x_4044_;
v_isShared_4050_ = v_isSharedCheck_4054_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_a_4047_);
lean_dec(v___x_4044_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4054_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4052_; 
if (v_isShared_4050_ == 0)
{
v___x_4052_ = v___x_4049_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4053_, 0, v_a_4047_);
v___x_4052_ = v_reuseFailAlloc_4053_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
return v___x_4052_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_4055_, lean_object* v_bytes_4056_, lean_object* v_a_4057_){
_start:
{
lean_object* v_res_4058_; 
v_res_4058_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v_context_4055_, v_bytes_4056_);
lean_dec_ref(v_bytes_4056_);
lean_dec_ref(v_context_4055_);
return v_res_4058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(lean_object* v_o_4059_, lean_object* v_key_4060_){
_start:
{
lean_object* v_k_4062_; lean_object* v___x_4063_; 
v_k_4062_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4062_, 0, v_key_4060_);
v___x_4063_ = l_Lasm_JS_Wire_encodeIO(v_k_4062_);
if (lean_obj_tag(v___x_4063_) == 0)
{
lean_object* v_a_4064_; uint32_t v___x_4065_; uint32_t v___x_4066_; uint64_t v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
v_a_4064_ = lean_ctor_get(v___x_4063_, 0);
lean_inc(v_a_4064_);
lean_dec_ref_known(v___x_4063_, 1);
v___x_4065_ = 203;
v___x_4066_ = lasm_js_value_handle(v_o_4059_);
v___x_4067_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_4068_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4069_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4069_, 0, v_o_4059_);
lean_ctor_set(v___x_4069_, 1, v___x_4068_);
v___x_4070_ = lean_unsigned_to_nat(2u);
v___x_4071_ = lean_mk_empty_array_with_capacity(v___x_4070_);
lean_inc_ref(v_k_4062_);
v___x_4072_ = lean_array_push(v___x_4071_, v_k_4062_);
v___x_4073_ = lean_array_push(v___x_4072_, v___x_4069_);
v___x_4074_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4073_);
v___x_4075_ = lasm_js_call(v___x_4065_, v___x_4066_, v___x_4067_, v_a_4064_, v___x_4074_);
lean_dec_ref_known(v___x_4074_, 1);
lean_dec(v_a_4064_);
if (lean_obj_tag(v___x_4075_) == 0)
{
lean_object* v_a_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
lean_inc(v_a_4076_);
lean_dec_ref_known(v___x_4075_, 1);
v___x_4077_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_4078_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4062_);
v___x_4079_ = lean_string_append(v___x_4077_, v___x_4078_);
lean_dec_ref(v___x_4078_);
v___x_4080_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v___x_4079_, v_a_4076_);
lean_dec(v_a_4076_);
lean_dec_ref(v___x_4079_);
return v___x_4080_;
}
else
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4088_; 
lean_dec_ref_known(v_k_4062_, 1);
v_a_4081_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4083_ = v___x_4075_;
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4075_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4086_; 
if (v_isShared_4084_ == 0)
{
v___x_4086_ = v___x_4083_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_a_4081_);
v___x_4086_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
return v___x_4086_;
}
}
}
}
else
{
lean_object* v_a_4089_; lean_object* v___x_4091_; uint8_t v_isShared_4092_; uint8_t v_isSharedCheck_4096_; 
lean_dec_ref_known(v_k_4062_, 1);
lean_dec(v_o_4059_);
v_a_4089_ = lean_ctor_get(v___x_4063_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v___x_4063_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4091_ = v___x_4063_;
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
else
{
lean_inc(v_a_4089_);
lean_dec(v___x_4063_);
v___x_4091_ = lean_box(0);
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
v_resetjp_4090_:
{
lean_object* v___x_4094_; 
if (v_isShared_4092_ == 0)
{
v___x_4094_ = v___x_4091_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_a_4089_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0___boxed(lean_object* v_o_4097_, lean_object* v_key_4098_, lean_object* v_a_4099_){
_start:
{
lean_object* v_res_4100_; 
v_res_4100_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_o_4097_, v_key_4098_);
return v_res_4100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(lean_object* v___f_4105_, lean_object* v_a_4106_, lean_object* v_x_4107_){
_start:
{
if (lean_obj_tag(v_x_4107_) == 0)
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4117_; 
lean_dec(v_a_4106_);
lean_dec_ref(v___f_4105_);
v_a_4109_ = lean_ctor_get(v_x_4107_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v_x_4107_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4111_ = v_x_4107_;
v_isShared_4112_ = v_isSharedCheck_4117_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v_x_4107_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4117_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
lean_object* v___x_4115_; 
v___x_4115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
return v___x_4115_;
}
}
}
else
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4140_; 
v_a_4118_ = lean_ctor_get(v_x_4107_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v_x_4107_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4120_ = v_x_4107_;
v_isShared_4121_ = v_isSharedCheck_4140_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v_x_4107_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4140_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
uint8_t v___x_4122_; 
v___x_4122_ = lean_unbox(v_a_4118_);
if (v___x_4122_ == 0)
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v_val_4126_; lean_object* v___x_4130_; 
v___x_4123_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_4124_ = lean_unsigned_to_nat(0u);
v___x_4130_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_a_4106_, v___x_4123_);
if (lean_obj_tag(v___x_4130_) == 0)
{
lean_object* v_a_4131_; lean_object* v___x_4133_; 
v_a_4131_ = lean_ctor_get(v___x_4130_, 0);
lean_inc(v_a_4131_);
lean_dec_ref_known(v___x_4130_, 1);
if (v_isShared_4121_ == 0)
{
lean_ctor_set(v___x_4120_, 0, v_a_4131_);
v___x_4133_ = v___x_4120_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4134_; 
v_reuseFailAlloc_4134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4134_, 0, v_a_4131_);
v___x_4133_ = v_reuseFailAlloc_4134_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
v_val_4126_ = v___x_4133_;
goto v___jp_4125_;
}
}
else
{
lean_object* v_a_4135_; lean_object* v___x_4137_; 
v_a_4135_ = lean_ctor_get(v___x_4130_, 0);
lean_inc(v_a_4135_);
lean_dec_ref_known(v___x_4130_, 1);
if (v_isShared_4121_ == 0)
{
lean_ctor_set_tag(v___x_4120_, 0);
lean_ctor_set(v___x_4120_, 0, v_a_4135_);
v___x_4137_ = v___x_4120_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4135_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
v_val_4126_ = v___x_4137_;
goto v___jp_4125_;
}
}
v___jp_4125_:
{
lean_object* v___x_4127_; uint8_t v___x_4128_; lean_object* v___x_4129_; 
v___x_4127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4127_, 0, v_val_4126_);
v___x_4128_ = lean_unbox(v_a_4118_);
lean_dec(v_a_4118_);
v___x_4129_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4124_, v___x_4128_, v___x_4127_, v___f_4105_);
return v___x_4129_;
}
}
else
{
lean_object* v___x_4139_; 
lean_del_object(v___x_4120_);
lean_dec(v_a_4118_);
lean_dec(v_a_4106_);
lean_dec_ref(v___f_4105_);
v___x_4139_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__1));
return v___x_4139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed(lean_object* v___f_4141_, lean_object* v_a_4142_, lean_object* v_x_4143_, lean_object* v___y_4144_){
_start:
{
lean_object* v_res_4145_; 
v_res_4145_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(v___f_4141_, v_a_4142_, v_x_4143_);
return v_res_4145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(lean_object* v___f_4146_, lean_object* v_x_4147_){
_start:
{
if (lean_obj_tag(v_x_4147_) == 0)
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4157_; 
lean_dec_ref(v___f_4146_);
v_a_4149_ = lean_ctor_get(v_x_4147_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v_x_4147_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4151_ = v_x_4147_;
v_isShared_4152_ = v_isSharedCheck_4157_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v_x_4147_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4157_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4154_; 
if (v_isShared_4152_ == 0)
{
v___x_4154_ = v___x_4151_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4149_);
v___x_4154_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
lean_object* v___x_4155_; 
v___x_4155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4154_);
return v___x_4155_;
}
}
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4179_; 
v_a_4158_ = lean_ctor_get(v_x_4147_, 0);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_x_4147_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4160_ = v_x_4147_;
v_isShared_4161_ = v_isSharedCheck_4179_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v_x_4147_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4179_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___f_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; uint8_t v___x_4165_; lean_object* v_val_4167_; lean_object* v___x_4170_; 
lean_inc(v_a_4158_);
v___f_4162_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4162_, 0, v___f_4146_);
lean_closure_set(v___f_4162_, 1, v_a_4158_);
v___x_4163_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_4164_ = lean_unsigned_to_nat(0u);
v___x_4165_ = 0;
v___x_4170_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_4158_, v___x_4163_);
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_object* v_a_4171_; lean_object* v___x_4173_; 
v_a_4171_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4171_);
lean_dec_ref_known(v___x_4170_, 1);
if (v_isShared_4161_ == 0)
{
lean_ctor_set(v___x_4160_, 0, v_a_4171_);
v___x_4173_ = v___x_4160_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_a_4171_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
v_val_4167_ = v___x_4173_;
goto v___jp_4166_;
}
}
else
{
lean_object* v_a_4175_; lean_object* v___x_4177_; 
v_a_4175_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4175_);
lean_dec_ref_known(v___x_4170_, 1);
if (v_isShared_4161_ == 0)
{
lean_ctor_set_tag(v___x_4160_, 0);
lean_ctor_set(v___x_4160_, 0, v_a_4175_);
v___x_4177_ = v___x_4160_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_a_4175_);
v___x_4177_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
v_val_4167_ = v___x_4177_;
goto v___jp_4166_;
}
}
v___jp_4166_:
{
lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4168_, 0, v_val_4167_);
v___x_4169_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4164_, v___x_4165_, v___x_4168_, v___f_4162_);
return v___x_4169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2___boxed(lean_object* v___f_4180_, lean_object* v_x_4181_, lean_object* v___y_4182_){
_start:
{
lean_object* v_res_4183_; 
v_res_4183_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(v___f_4180_, v_x_4181_);
return v_res_4183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next(lean_object* v_it_4187_){
_start:
{
lean_object* v___f_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; uint8_t v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___f_4189_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__1));
v___x_4190_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_4191_ = lean_unsigned_to_nat(0u);
v___x_4192_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_4193_ = 0;
v___x_4194_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_4187_, v___x_4190_, v___x_4192_);
v___x_4195_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4191_, v___x_4193_, v___x_4194_, v___f_4189_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___boxed(lean_object* v_it_4196_, lean_object* v_a_4197_){
_start:
{
lean_object* v_res_4198_; 
v_res_4198_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4196_);
return v_res_4198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(lean_object* v_acc_4199_, lean_object* v_it_4200_, lean_object* v_x_4201_){
_start:
{
if (lean_obj_tag(v_x_4201_) == 0)
{
lean_object* v_a_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4211_; 
lean_dec(v_it_4200_);
lean_dec_ref(v_acc_4199_);
v_a_4203_ = lean_ctor_get(v_x_4201_, 0);
v_isSharedCheck_4211_ = !lean_is_exclusive(v_x_4201_);
if (v_isSharedCheck_4211_ == 0)
{
v___x_4205_ = v_x_4201_;
v_isShared_4206_ = v_isSharedCheck_4211_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_a_4203_);
lean_dec(v_x_4201_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4211_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v___x_4208_; 
if (v_isShared_4206_ == 0)
{
v___x_4208_ = v___x_4205_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_a_4203_);
v___x_4208_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
lean_object* v___x_4209_; 
v___x_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
return v___x_4209_;
}
}
}
else
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4223_; 
v_a_4212_ = lean_ctor_get(v_x_4201_, 0);
v_isSharedCheck_4223_ = !lean_is_exclusive(v_x_4201_);
if (v_isSharedCheck_4223_ == 0)
{
v___x_4214_ = v_x_4201_;
v_isShared_4215_ = v_isSharedCheck_4223_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v_x_4201_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4223_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
if (lean_obj_tag(v_a_4212_) == 0)
{
lean_object* v___x_4217_; 
lean_dec(v_it_4200_);
if (v_isShared_4215_ == 0)
{
lean_ctor_set(v___x_4214_, 0, v_acc_4199_);
v___x_4217_ = v___x_4214_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v_acc_4199_);
v___x_4217_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
lean_object* v___x_4218_; 
v___x_4218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4217_);
return v___x_4218_;
}
}
else
{
lean_object* v_val_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; 
lean_del_object(v___x_4214_);
v_val_4220_ = lean_ctor_get(v_a_4212_, 0);
lean_inc(v_val_4220_);
lean_dec_ref_known(v_a_4212_, 1);
v___x_4221_ = lean_array_push(v_acc_4199_, v_val_4220_);
v___x_4222_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4200_, v___x_4221_);
return v___x_4222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed(lean_object* v_acc_4224_, lean_object* v_it_4225_, lean_object* v_x_4226_, lean_object* v___y_4227_){
_start:
{
lean_object* v_res_4228_; 
v_res_4228_ = l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(v_acc_4224_, v_it_4225_, v_x_4226_);
return v_res_4228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop(lean_object* v_it_4229_, lean_object* v_acc_4230_){
_start:
{
lean_object* v___f_4232_; lean_object* v___x_4233_; uint8_t v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
lean_inc(v_it_4229_);
v___f_4232_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4232_, 0, v_acc_4230_);
lean_closure_set(v___f_4232_, 1, v_it_4229_);
v___x_4233_ = lean_unsigned_to_nat(0u);
v___x_4234_ = 0;
v___x_4235_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4229_);
v___x_4236_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4233_, v___x_4234_, v___x_4235_, v___f_4232_);
return v___x_4236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___boxed(lean_object* v_it_4237_, lean_object* v_acc_4238_, lean_object* v_a_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4237_, v_acc_4238_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0(lean_object* v_x_4243_){
_start:
{
if (lean_obj_tag(v_x_4243_) == 0)
{
lean_object* v_a_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4253_; 
v_a_4245_ = lean_ctor_get(v_x_4243_, 0);
v_isSharedCheck_4253_ = !lean_is_exclusive(v_x_4243_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4247_ = v_x_4243_;
v_isShared_4248_ = v_isSharedCheck_4253_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_a_4245_);
lean_dec(v_x_4243_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4253_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4250_; 
if (v_isShared_4248_ == 0)
{
v___x_4250_ = v___x_4247_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v_a_4245_);
v___x_4250_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
lean_object* v___x_4251_; 
v___x_4251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4251_, 0, v___x_4250_);
return v___x_4251_;
}
}
}
else
{
lean_object* v_a_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; 
v_a_4254_ = lean_ctor_get(v_x_4243_, 0);
lean_inc(v_a_4254_);
lean_dec_ref_known(v_x_4243_, 1);
v___x_4255_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___lam__0___closed__0));
v___x_4256_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_a_4254_, v___x_4255_);
return v___x_4256_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0___boxed(lean_object* v_x_4257_, lean_object* v___y_4258_){
_start:
{
lean_object* v_res_4259_; 
v_res_4259_ = l_Lasm_JS_Deno_FsWatcher_values___lam__0(v_x_4257_);
return v_res_4259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values(lean_object* v_self_4261_){
_start:
{
lean_object* v___f_4263_; lean_object* v___x_4264_; uint8_t v___x_4265_; lean_object* v_val_4267_; lean_object* v___x_4270_; 
v___f_4263_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___closed__0));
v___x_4264_ = lean_unsigned_to_nat(0u);
v___x_4265_ = 0;
v___x_4270_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_4261_);
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
lean_ctor_set_tag(v___x_4273_, 1);
v___x_4276_ = v___x_4273_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4271_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
v_val_4267_ = v___x_4276_;
goto v___jp_4266_;
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
lean_ctor_set_tag(v___x_4281_, 0);
v___x_4284_ = v___x_4281_;
goto v_reusejp_4283_;
}
else
{
lean_object* v_reuseFailAlloc_4285_; 
v_reuseFailAlloc_4285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4285_, 0, v_a_4279_);
v___x_4284_ = v_reuseFailAlloc_4285_;
goto v_reusejp_4283_;
}
v_reusejp_4283_:
{
v_val_4267_ = v___x_4284_;
goto v___jp_4266_;
}
}
}
v___jp_4266_:
{
lean_object* v___x_4268_; lean_object* v___x_4269_; 
v___x_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4268_, 0, v_val_4267_);
v___x_4269_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4264_, v___x_4265_, v___x_4268_, v___f_4263_);
return v___x_4269_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___boxed(lean_object* v_self_4287_, lean_object* v_a_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l_Lasm_JS_Deno_FsWatcher_values(v_self_4287_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(lean_object* v_b_4290_, lean_object* v_args_4291_){
_start:
{
uint8_t v_construct_4293_; lean_object* v___x_4294_; uint32_t v___x_4295_; uint64_t v___x_4296_; uint64_t v___y_4298_; 
v_construct_4293_ = lean_ctor_get_uint8(v_b_4290_, sizeof(void*)*4);
v___x_4294_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4290_);
v___x_4295_ = 214;
v___x_4296_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4293_ == 0)
{
uint64_t v___x_4306_; 
v___x_4306_ = 0ULL;
v___y_4298_ = v___x_4306_;
goto v___jp_4297_;
}
else
{
uint64_t v___x_4307_; 
v___x_4307_ = 4ULL;
v___y_4298_ = v___x_4307_;
goto v___jp_4297_;
}
v___jp_4297_:
{
uint64_t v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v___x_4299_ = lean_uint64_lor(v___x_4296_, v___y_4298_);
v___x_4300_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4290_, v_args_4291_);
v___x_4301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4302_ = lean_string_append(v___x_4301_, v___x_4294_);
lean_dec_ref(v___x_4294_);
v___x_4303_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4304_ = lean_string_append(v___x_4302_, v___x_4303_);
v___x_4305_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_4295_, v___x_4299_, v___x_4300_, v___x_4304_);
return v___x_4305_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0___boxed(lean_object* v_b_4308_, lean_object* v_args_4309_, lean_object* v_a_4310_){
_start:
{
lean_object* v_res_4311_; 
v_res_4311_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v_b_4308_, v_args_4309_);
lean_dec_ref(v_b_4308_);
return v_res_4311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link(lean_object* v_oldpath_4321_, lean_object* v_newpath_4322_){
_start:
{
lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4324_ = lean_unsigned_to_nat(2u);
v___x_4325_ = ((lean_object*)(l_Lasm_JS_Deno_link___closed__3));
v___x_4326_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4326_, 0, v_oldpath_4321_);
v___x_4327_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4327_, 0, v_newpath_4322_);
v___x_4328_ = lean_mk_empty_array_with_capacity(v___x_4324_);
v___x_4329_ = lean_array_push(v___x_4328_, v___x_4326_);
v___x_4330_ = lean_array_push(v___x_4329_, v___x_4327_);
v___x_4331_ = l_Lasm_JS_Web_Support_args(v___x_4330_);
v___x_4332_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4325_, v___x_4331_);
return v___x_4332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link___boxed(lean_object* v_oldpath_4333_, lean_object* v_newpath_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l_Lasm_JS_Deno_link(v_oldpath_4333_, v_newpath_4334_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync(lean_object* v_oldpath_4345_, lean_object* v_newpath_4346_){
_start:
{
uint8_t v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
v___x_4348_ = 0;
v___x_4349_ = lean_unsigned_to_nat(2u);
v___x_4350_ = ((lean_object*)(l_Lasm_JS_Deno_linkSync___closed__2));
v___x_4351_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4351_, 0, v_oldpath_4345_);
v___x_4352_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4352_, 0, v_newpath_4346_);
v___x_4353_ = lean_mk_empty_array_with_capacity(v___x_4349_);
v___x_4354_ = lean_array_push(v___x_4353_, v___x_4351_);
v___x_4355_ = lean_array_push(v___x_4354_, v___x_4352_);
v___x_4356_ = l_Lasm_JS_Web_Support_args(v___x_4355_);
v___x_4357_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4350_, v___x_4356_, v___x_4348_);
return v___x_4357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync___boxed(lean_object* v_oldpath_4358_, lean_object* v_newpath_4359_, lean_object* v_a_4360_){
_start:
{
lean_object* v_res_4361_; 
v_res_4361_ = l_Lasm_JS_Deno_linkSync(v_oldpath_4358_, v_newpath_4359_);
return v_res_4361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0(lean_object* v_x_4362_){
_start:
{
if (lean_obj_tag(v_x_4362_) == 0)
{
lean_object* v_a_4364_; lean_object* v___x_4366_; uint8_t v_isShared_4367_; uint8_t v_isSharedCheck_4372_; 
v_a_4364_ = lean_ctor_get(v_x_4362_, 0);
v_isSharedCheck_4372_ = !lean_is_exclusive(v_x_4362_);
if (v_isSharedCheck_4372_ == 0)
{
v___x_4366_ = v_x_4362_;
v_isShared_4367_ = v_isSharedCheck_4372_;
goto v_resetjp_4365_;
}
else
{
lean_inc(v_a_4364_);
lean_dec(v_x_4362_);
v___x_4366_ = lean_box(0);
v_isShared_4367_ = v_isSharedCheck_4372_;
goto v_resetjp_4365_;
}
v_resetjp_4365_:
{
lean_object* v___x_4369_; 
if (v_isShared_4367_ == 0)
{
v___x_4369_ = v___x_4366_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4371_; 
v_reuseFailAlloc_4371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4371_, 0, v_a_4364_);
v___x_4369_ = v_reuseFailAlloc_4371_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
lean_object* v___x_4370_; 
v___x_4370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4370_, 0, v___x_4369_);
return v___x_4370_;
}
}
}
else
{
lean_object* v_a_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4381_; 
v_a_4373_ = lean_ctor_get(v_x_4362_, 0);
v_isSharedCheck_4381_ = !lean_is_exclusive(v_x_4362_);
if (v_isSharedCheck_4381_ == 0)
{
v___x_4375_ = v_x_4362_;
v_isShared_4376_ = v_isSharedCheck_4381_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_a_4373_);
lean_dec(v_x_4362_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4381_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v___x_4378_; 
if (v_isShared_4376_ == 0)
{
v___x_4378_ = v___x_4375_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v_a_4373_);
v___x_4378_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
lean_object* v___x_4379_; 
v___x_4379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4378_);
return v___x_4379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0___boxed(lean_object* v_x_4382_, lean_object* v___y_4383_){
_start:
{
lean_object* v_res_4384_; 
v_res_4384_ = l_Lasm_JS_Deno_open___lam__0(v_x_4382_);
return v_res_4384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(lean_object* v_x_4385_){
_start:
{
if (lean_obj_tag(v_x_4385_) == 0)
{
lean_object* v___x_4386_; 
v___x_4386_ = lean_box(0);
return v___x_4386_;
}
else
{
lean_object* v_val_4387_; lean_object* v_read_4388_; lean_object* v_write_4389_; lean_object* v_append_4390_; lean_object* v_truncate_4391_; lean_object* v_create_4392_; lean_object* v_createNew_4393_; lean_object* v_mode_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; 
v_val_4387_ = lean_ctor_get(v_x_4385_, 0);
v_read_4388_ = lean_ctor_get(v_val_4387_, 0);
v_write_4389_ = lean_ctor_get(v_val_4387_, 1);
v_append_4390_ = lean_ctor_get(v_val_4387_, 2);
v_truncate_4391_ = lean_ctor_get(v_val_4387_, 3);
v_create_4392_ = lean_ctor_get(v_val_4387_, 4);
v_createNew_4393_ = lean_ctor_get(v_val_4387_, 5);
v_mode_4394_ = lean_ctor_get(v_val_4387_, 6);
v___x_4395_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0));
v___x_4396_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_read_4388_);
v___x_4397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4397_, 0, v___x_4395_);
lean_ctor_set(v___x_4397_, 1, v___x_4396_);
v___x_4398_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1));
v___x_4399_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_write_4389_);
v___x_4400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4400_, 0, v___x_4398_);
lean_ctor_set(v___x_4400_, 1, v___x_4399_);
v___x_4401_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_4402_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_4390_);
v___x_4403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4401_);
lean_ctor_set(v___x_4403_, 1, v___x_4402_);
v___x_4404_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_4405_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_truncate_4391_);
v___x_4406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4406_, 0, v___x_4404_);
lean_ctor_set(v___x_4406_, 1, v___x_4405_);
v___x_4407_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_4408_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_4392_);
v___x_4409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4409_, 0, v___x_4407_);
lean_ctor_set(v___x_4409_, 1, v___x_4408_);
v___x_4410_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_4411_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_4393_);
v___x_4412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4412_, 0, v___x_4410_);
lean_ctor_set(v___x_4412_, 1, v___x_4411_);
v___x_4413_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4414_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4394_);
v___x_4415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4415_, 0, v___x_4413_);
lean_ctor_set(v___x_4415_, 1, v___x_4414_);
v___x_4416_ = lean_unsigned_to_nat(7u);
v___x_4417_ = lean_mk_empty_array_with_capacity(v___x_4416_);
v___x_4418_ = lean_array_push(v___x_4417_, v___x_4397_);
v___x_4419_ = lean_array_push(v___x_4418_, v___x_4400_);
v___x_4420_ = lean_array_push(v___x_4419_, v___x_4403_);
v___x_4421_ = lean_array_push(v___x_4420_, v___x_4406_);
v___x_4422_ = lean_array_push(v___x_4421_, v___x_4409_);
v___x_4423_ = lean_array_push(v___x_4422_, v___x_4412_);
v___x_4424_ = lean_array_push(v___x_4423_, v___x_4415_);
v___x_4425_ = l_Lasm_JS_Web_Support_fields(v___x_4424_);
lean_dec_ref(v___x_4424_);
return v___x_4425_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0___boxed(lean_object* v_x_4426_){
_start:
{
lean_object* v_res_4427_; 
v_res_4427_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_x_4426_);
lean_dec(v_x_4426_);
return v_res_4427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(lean_object* v_b_4428_, lean_object* v_args_4429_){
_start:
{
uint8_t v_construct_4431_; lean_object* v___x_4432_; uint32_t v___x_4433_; uint64_t v___x_4434_; uint64_t v___y_4436_; 
v_construct_4431_ = lean_ctor_get_uint8(v_b_4428_, sizeof(void*)*4);
v___x_4432_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4428_);
v___x_4433_ = 214;
v___x_4434_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
if (v_construct_4431_ == 0)
{
uint64_t v___x_4444_; 
v___x_4444_ = 0ULL;
v___y_4436_ = v___x_4444_;
goto v___jp_4435_;
}
else
{
uint64_t v___x_4445_; 
v___x_4445_ = 4ULL;
v___y_4436_ = v___x_4445_;
goto v___jp_4435_;
}
v___jp_4435_:
{
uint64_t v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v___x_4437_ = lean_uint64_lor(v___x_4434_, v___y_4436_);
v___x_4438_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4428_, v_args_4429_);
v___x_4439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4440_ = lean_string_append(v___x_4439_, v___x_4432_);
v___x_4441_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4442_ = lean_string_append(v___x_4440_, v___x_4441_);
v___x_4443_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_4432_, v___x_4433_, v___x_4437_, v___x_4438_, v___x_4442_);
return v___x_4443_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1___boxed(lean_object* v_b_4446_, lean_object* v_args_4447_, lean_object* v_a_4448_){
_start:
{
lean_object* v_res_4449_; 
v_res_4449_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v_b_4446_, v_args_4447_);
lean_dec_ref(v_b_4446_);
return v_res_4449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open(lean_object* v_path_4459_, lean_object* v_options_4460_){
_start:
{
lean_object* v___f_4462_; uint8_t v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___y_4467_; 
v___f_4462_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4463_ = 0;
v___x_4464_ = lean_unsigned_to_nat(2u);
v___x_4465_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__3));
if (lean_obj_tag(v_path_4459_) == 0)
{
lean_object* v_value_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4483_; 
v_value_4476_ = lean_ctor_get(v_path_4459_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v_path_4459_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4478_ = v_path_4459_;
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_value_4476_);
lean_dec(v_path_4459_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v___x_4481_; 
if (v_isShared_4479_ == 0)
{
lean_ctor_set_tag(v___x_4478_, 4);
v___x_4481_ = v___x_4478_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_value_4476_);
v___x_4481_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
v___y_4467_ = v___x_4481_;
goto v___jp_4466_;
}
}
}
else
{
lean_object* v_value_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v_value_4484_ = lean_ctor_get(v_path_4459_, 0);
lean_inc(v_value_4484_);
lean_dec_ref_known(v_path_4459_, 1);
v___x_4485_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4486_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4486_, 0, v_value_4484_);
lean_ctor_set(v___x_4486_, 1, v___x_4485_);
v___y_4467_ = v___x_4486_;
goto v___jp_4466_;
}
v___jp_4466_:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; 
v___x_4468_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4460_);
v___x_4469_ = lean_mk_empty_array_with_capacity(v___x_4464_);
v___x_4470_ = lean_array_push(v___x_4469_, v___y_4467_);
v___x_4471_ = lean_array_push(v___x_4470_, v___x_4468_);
v___x_4472_ = l_Lasm_JS_Web_Support_args(v___x_4471_);
v___x_4473_ = lean_unsigned_to_nat(0u);
v___x_4474_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4465_, v___x_4472_);
v___x_4475_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4473_, v___x_4463_, v___x_4474_, v___f_4462_);
return v___x_4475_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___boxed(lean_object* v_path_4487_, lean_object* v_options_4488_, lean_object* v_a_4489_){
_start:
{
lean_object* v_res_4490_; 
v_res_4490_ = l_Lasm_JS_Deno_open(v_path_4487_, v_options_4488_);
lean_dec(v_options_4488_);
return v_res_4490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync(lean_object* v_path_4499_, lean_object* v_options_4500_){
_start:
{
uint8_t v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___y_4506_; 
v___x_4502_ = 0;
v___x_4503_ = lean_unsigned_to_nat(2u);
v___x_4504_ = ((lean_object*)(l_Lasm_JS_Deno_openSync___closed__2));
if (lean_obj_tag(v_path_4499_) == 0)
{
lean_object* v_value_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4536_; 
v_value_4529_ = lean_ctor_get(v_path_4499_, 0);
v_isSharedCheck_4536_ = !lean_is_exclusive(v_path_4499_);
if (v_isSharedCheck_4536_ == 0)
{
v___x_4531_ = v_path_4499_;
v_isShared_4532_ = v_isSharedCheck_4536_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_value_4529_);
lean_dec(v_path_4499_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4536_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4534_; 
if (v_isShared_4532_ == 0)
{
lean_ctor_set_tag(v___x_4531_, 4);
v___x_4534_ = v___x_4531_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v_value_4529_);
v___x_4534_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
v___y_4506_ = v___x_4534_;
goto v___jp_4505_;
}
}
}
else
{
lean_object* v_value_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
v_value_4537_ = lean_ctor_get(v_path_4499_, 0);
lean_inc(v_value_4537_);
lean_dec_ref_known(v_path_4499_, 1);
v___x_4538_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4539_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4539_, 0, v_value_4537_);
lean_ctor_set(v___x_4539_, 1, v___x_4538_);
v___y_4506_ = v___x_4539_;
goto v___jp_4505_;
}
v___jp_4505_:
{
lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; 
v___x_4507_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4500_);
v___x_4508_ = lean_mk_empty_array_with_capacity(v___x_4503_);
v___x_4509_ = lean_array_push(v___x_4508_, v___y_4506_);
v___x_4510_ = lean_array_push(v___x_4509_, v___x_4507_);
v___x_4511_ = l_Lasm_JS_Web_Support_args(v___x_4510_);
v___x_4512_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4504_, v___x_4511_, v___x_4502_);
if (lean_obj_tag(v___x_4512_) == 0)
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
v_a_4513_ = lean_ctor_get(v___x_4512_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4512_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4512_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4512_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
else
{
lean_object* v_a_4521_; lean_object* v___x_4523_; uint8_t v_isShared_4524_; uint8_t v_isSharedCheck_4528_; 
v_a_4521_ = lean_ctor_get(v___x_4512_, 0);
v_isSharedCheck_4528_ = !lean_is_exclusive(v___x_4512_);
if (v_isSharedCheck_4528_ == 0)
{
v___x_4523_ = v___x_4512_;
v_isShared_4524_ = v_isSharedCheck_4528_;
goto v_resetjp_4522_;
}
else
{
lean_inc(v_a_4521_);
lean_dec(v___x_4512_);
v___x_4523_ = lean_box(0);
v_isShared_4524_ = v_isSharedCheck_4528_;
goto v_resetjp_4522_;
}
v_resetjp_4522_:
{
lean_object* v___x_4526_; 
if (v_isShared_4524_ == 0)
{
v___x_4526_ = v___x_4523_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v_a_4521_);
v___x_4526_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
return v___x_4526_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync___boxed(lean_object* v_path_4540_, lean_object* v_options_4541_, lean_object* v_a_4542_){
_start:
{
lean_object* v_res_4543_; 
v_res_4543_ = l_Lasm_JS_Deno_openSync(v_path_4540_, v_options_4541_);
lean_dec(v_options_4541_);
return v_res_4543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create(lean_object* v_path_4552_){
_start:
{
lean_object* v___f_4554_; uint8_t v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___y_4559_; 
v___f_4554_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4555_ = 0;
v___x_4556_ = lean_unsigned_to_nat(1u);
v___x_4557_ = ((lean_object*)(l_Lasm_JS_Deno_create___closed__2));
if (lean_obj_tag(v_path_4552_) == 0)
{
lean_object* v_value_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4573_; 
v_value_4566_ = lean_ctor_get(v_path_4552_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v_path_4552_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4568_ = v_path_4552_;
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_value_4566_);
lean_dec(v_path_4552_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v___x_4571_; 
if (v_isShared_4569_ == 0)
{
lean_ctor_set_tag(v___x_4568_, 4);
v___x_4571_ = v___x_4568_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v_value_4566_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
v___y_4559_ = v___x_4571_;
goto v___jp_4558_;
}
}
}
else
{
lean_object* v_value_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; 
v_value_4574_ = lean_ctor_get(v_path_4552_, 0);
lean_inc(v_value_4574_);
lean_dec_ref_known(v_path_4552_, 1);
v___x_4575_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4576_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4576_, 0, v_value_4574_);
lean_ctor_set(v___x_4576_, 1, v___x_4575_);
v___y_4559_ = v___x_4576_;
goto v___jp_4558_;
}
v___jp_4558_:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; 
v___x_4560_ = lean_mk_empty_array_with_capacity(v___x_4556_);
v___x_4561_ = lean_array_push(v___x_4560_, v___y_4559_);
v___x_4562_ = l_Lasm_JS_Web_Support_args(v___x_4561_);
v___x_4563_ = lean_unsigned_to_nat(0u);
v___x_4564_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4557_, v___x_4562_);
v___x_4565_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4563_, v___x_4555_, v___x_4564_, v___f_4554_);
return v___x_4565_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create___boxed(lean_object* v_path_4577_, lean_object* v_a_4578_){
_start:
{
lean_object* v_res_4579_; 
v_res_4579_ = l_Lasm_JS_Deno_create(v_path_4577_);
return v_res_4579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync(lean_object* v_path_4588_){
_start:
{
uint8_t v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___y_4594_; 
v___x_4590_ = 0;
v___x_4591_ = lean_unsigned_to_nat(1u);
v___x_4592_ = ((lean_object*)(l_Lasm_JS_Deno_createSync___closed__2));
if (lean_obj_tag(v_path_4588_) == 0)
{
lean_object* v_value_4615_; lean_object* v___x_4617_; uint8_t v_isShared_4618_; uint8_t v_isSharedCheck_4622_; 
v_value_4615_ = lean_ctor_get(v_path_4588_, 0);
v_isSharedCheck_4622_ = !lean_is_exclusive(v_path_4588_);
if (v_isSharedCheck_4622_ == 0)
{
v___x_4617_ = v_path_4588_;
v_isShared_4618_ = v_isSharedCheck_4622_;
goto v_resetjp_4616_;
}
else
{
lean_inc(v_value_4615_);
lean_dec(v_path_4588_);
v___x_4617_ = lean_box(0);
v_isShared_4618_ = v_isSharedCheck_4622_;
goto v_resetjp_4616_;
}
v_resetjp_4616_:
{
lean_object* v___x_4620_; 
if (v_isShared_4618_ == 0)
{
lean_ctor_set_tag(v___x_4617_, 4);
v___x_4620_ = v___x_4617_;
goto v_reusejp_4619_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v_value_4615_);
v___x_4620_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4619_;
}
v_reusejp_4619_:
{
v___y_4594_ = v___x_4620_;
goto v___jp_4593_;
}
}
}
else
{
lean_object* v_value_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; 
v_value_4623_ = lean_ctor_get(v_path_4588_, 0);
lean_inc(v_value_4623_);
lean_dec_ref_known(v_path_4588_, 1);
v___x_4624_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4625_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4625_, 0, v_value_4623_);
lean_ctor_set(v___x_4625_, 1, v___x_4624_);
v___y_4594_ = v___x_4625_;
goto v___jp_4593_;
}
v___jp_4593_:
{
lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; 
v___x_4595_ = lean_mk_empty_array_with_capacity(v___x_4591_);
v___x_4596_ = lean_array_push(v___x_4595_, v___y_4594_);
v___x_4597_ = l_Lasm_JS_Web_Support_args(v___x_4596_);
v___x_4598_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4592_, v___x_4597_, v___x_4590_);
if (lean_obj_tag(v___x_4598_) == 0)
{
lean_object* v_a_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4606_; 
v_a_4599_ = lean_ctor_get(v___x_4598_, 0);
v_isSharedCheck_4606_ = !lean_is_exclusive(v___x_4598_);
if (v_isSharedCheck_4606_ == 0)
{
v___x_4601_ = v___x_4598_;
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
else
{
lean_inc(v_a_4599_);
lean_dec(v___x_4598_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
lean_object* v___x_4604_; 
if (v_isShared_4602_ == 0)
{
v___x_4604_ = v___x_4601_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v_a_4599_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
return v___x_4604_;
}
}
}
else
{
lean_object* v_a_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4614_; 
v_a_4607_ = lean_ctor_get(v___x_4598_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4598_);
if (v_isSharedCheck_4614_ == 0)
{
v___x_4609_ = v___x_4598_;
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_a_4607_);
lean_dec(v___x_4598_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4612_; 
if (v_isShared_4610_ == 0)
{
v___x_4612_ = v___x_4609_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_a_4607_);
v___x_4612_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
return v___x_4612_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync___boxed(lean_object* v_path_4626_, lean_object* v_a_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l_Lasm_JS_Deno_createSync(v_path_4626_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(lean_object* v_x_4629_){
_start:
{
if (lean_obj_tag(v_x_4629_) == 0)
{
lean_object* v___x_4630_; 
v___x_4630_ = lean_box(0);
return v___x_4630_;
}
else
{
lean_object* v_val_4631_; lean_object* v_recursive_4632_; lean_object* v_mode_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4650_; 
v_val_4631_ = lean_ctor_get(v_x_4629_, 0);
lean_inc(v_val_4631_);
lean_dec_ref_known(v_x_4629_, 1);
v_recursive_4632_ = lean_ctor_get(v_val_4631_, 0);
v_mode_4633_ = lean_ctor_get(v_val_4631_, 1);
v_isSharedCheck_4650_ = !lean_is_exclusive(v_val_4631_);
if (v_isSharedCheck_4650_ == 0)
{
v___x_4635_ = v_val_4631_;
v_isShared_4636_ = v_isSharedCheck_4650_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_mode_4633_);
lean_inc(v_recursive_4632_);
lean_dec(v_val_4631_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4650_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4640_; 
v___x_4637_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_4638_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_4632_);
lean_dec(v_recursive_4632_);
if (v_isShared_4636_ == 0)
{
lean_ctor_set(v___x_4635_, 1, v___x_4638_);
lean_ctor_set(v___x_4635_, 0, v___x_4637_);
v___x_4640_ = v___x_4635_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4649_; 
v_reuseFailAlloc_4649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4649_, 0, v___x_4637_);
lean_ctor_set(v_reuseFailAlloc_4649_, 1, v___x_4638_);
v___x_4640_ = v_reuseFailAlloc_4649_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4641_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4642_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4633_);
lean_dec(v_mode_4633_);
v___x_4643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4643_, 0, v___x_4641_);
lean_ctor_set(v___x_4643_, 1, v___x_4642_);
v___x_4644_ = lean_unsigned_to_nat(2u);
v___x_4645_ = lean_mk_empty_array_with_capacity(v___x_4644_);
v___x_4646_ = lean_array_push(v___x_4645_, v___x_4640_);
v___x_4647_ = lean_array_push(v___x_4646_, v___x_4643_);
v___x_4648_ = l_Lasm_JS_Web_Support_fields(v___x_4647_);
lean_dec_ref(v___x_4647_);
return v___x_4648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir(lean_object* v_path_4659_, lean_object* v_options_4660_){
_start:
{
lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___y_4665_; 
v___x_4662_ = lean_unsigned_to_nat(2u);
v___x_4663_ = ((lean_object*)(l_Lasm_JS_Deno_mkdir___closed__2));
if (lean_obj_tag(v_path_4659_) == 0)
{
lean_object* v_value_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4679_; 
v_value_4672_ = lean_ctor_get(v_path_4659_, 0);
v_isSharedCheck_4679_ = !lean_is_exclusive(v_path_4659_);
if (v_isSharedCheck_4679_ == 0)
{
v___x_4674_ = v_path_4659_;
v_isShared_4675_ = v_isSharedCheck_4679_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_value_4672_);
lean_dec(v_path_4659_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4679_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v___x_4677_; 
if (v_isShared_4675_ == 0)
{
lean_ctor_set_tag(v___x_4674_, 4);
v___x_4677_ = v___x_4674_;
goto v_reusejp_4676_;
}
else
{
lean_object* v_reuseFailAlloc_4678_; 
v_reuseFailAlloc_4678_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4678_, 0, v_value_4672_);
v___x_4677_ = v_reuseFailAlloc_4678_;
goto v_reusejp_4676_;
}
v_reusejp_4676_:
{
v___y_4665_ = v___x_4677_;
goto v___jp_4664_;
}
}
}
else
{
lean_object* v_value_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; 
v_value_4680_ = lean_ctor_get(v_path_4659_, 0);
lean_inc(v_value_4680_);
lean_dec_ref_known(v_path_4659_, 1);
v___x_4681_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4682_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4682_, 0, v_value_4680_);
lean_ctor_set(v___x_4682_, 1, v___x_4681_);
v___y_4665_ = v___x_4682_;
goto v___jp_4664_;
}
v___jp_4664_:
{
lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v___x_4666_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4660_);
v___x_4667_ = lean_mk_empty_array_with_capacity(v___x_4662_);
v___x_4668_ = lean_array_push(v___x_4667_, v___y_4665_);
v___x_4669_ = lean_array_push(v___x_4668_, v___x_4666_);
v___x_4670_ = l_Lasm_JS_Web_Support_args(v___x_4669_);
v___x_4671_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4663_, v___x_4670_);
return v___x_4671_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir___boxed(lean_object* v_path_4683_, lean_object* v_options_4684_, lean_object* v_a_4685_){
_start:
{
lean_object* v_res_4686_; 
v_res_4686_ = l_Lasm_JS_Deno_mkdir(v_path_4683_, v_options_4684_);
return v_res_4686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync(lean_object* v_path_4695_, lean_object* v_options_4696_){
_start:
{
uint8_t v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___y_4702_; 
v___x_4698_ = 0;
v___x_4699_ = lean_unsigned_to_nat(2u);
v___x_4700_ = ((lean_object*)(l_Lasm_JS_Deno_mkdirSync___closed__2));
if (lean_obj_tag(v_path_4695_) == 0)
{
lean_object* v_value_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4716_; 
v_value_4709_ = lean_ctor_get(v_path_4695_, 0);
v_isSharedCheck_4716_ = !lean_is_exclusive(v_path_4695_);
if (v_isSharedCheck_4716_ == 0)
{
v___x_4711_ = v_path_4695_;
v_isShared_4712_ = v_isSharedCheck_4716_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_value_4709_);
lean_dec(v_path_4695_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4716_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v___x_4714_; 
if (v_isShared_4712_ == 0)
{
lean_ctor_set_tag(v___x_4711_, 4);
v___x_4714_ = v___x_4711_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4715_; 
v_reuseFailAlloc_4715_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4715_, 0, v_value_4709_);
v___x_4714_ = v_reuseFailAlloc_4715_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
v___y_4702_ = v___x_4714_;
goto v___jp_4701_;
}
}
}
else
{
lean_object* v_value_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v_value_4717_ = lean_ctor_get(v_path_4695_, 0);
lean_inc(v_value_4717_);
lean_dec_ref_known(v_path_4695_, 1);
v___x_4718_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4719_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4719_, 0, v_value_4717_);
lean_ctor_set(v___x_4719_, 1, v___x_4718_);
v___y_4702_ = v___x_4719_;
goto v___jp_4701_;
}
v___jp_4701_:
{
lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; 
v___x_4703_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4696_);
v___x_4704_ = lean_mk_empty_array_with_capacity(v___x_4699_);
v___x_4705_ = lean_array_push(v___x_4704_, v___y_4702_);
v___x_4706_ = lean_array_push(v___x_4705_, v___x_4703_);
v___x_4707_ = l_Lasm_JS_Web_Support_args(v___x_4706_);
v___x_4708_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4700_, v___x_4707_, v___x_4698_);
return v___x_4708_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync___boxed(lean_object* v_path_4720_, lean_object* v_options_4721_, lean_object* v_a_4722_){
_start:
{
lean_object* v_res_4723_; 
v_res_4723_ = l_Lasm_JS_Deno_mkdirSync(v_path_4720_, v_options_4721_);
return v_res_4723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(lean_object* v_x_4724_){
_start:
{
if (lean_obj_tag(v_x_4724_) == 0)
{
lean_object* v___x_4725_; 
v___x_4725_ = lean_box(0);
return v___x_4725_;
}
else
{
lean_object* v_val_4726_; lean_object* v_dir_4727_; lean_object* v_prefix_4728_; lean_object* v_suffix_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; 
v_val_4726_ = lean_ctor_get(v_x_4724_, 0);
lean_inc(v_val_4726_);
lean_dec_ref_known(v_x_4724_, 1);
v_dir_4727_ = lean_ctor_get(v_val_4726_, 0);
lean_inc(v_dir_4727_);
v_prefix_4728_ = lean_ctor_get(v_val_4726_, 1);
lean_inc(v_prefix_4728_);
v_suffix_4729_ = lean_ctor_get(v_val_4726_, 2);
lean_inc(v_suffix_4729_);
lean_dec(v_val_4726_);
v___x_4730_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
v___x_4731_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dir_4727_);
v___x_4732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4732_, 0, v___x_4730_);
lean_ctor_set(v___x_4732_, 1, v___x_4731_);
v___x_4733_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0));
v___x_4734_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_4728_);
v___x_4735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4735_, 0, v___x_4733_);
lean_ctor_set(v___x_4735_, 1, v___x_4734_);
v___x_4736_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1));
v___x_4737_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_suffix_4729_);
v___x_4738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4738_, 0, v___x_4736_);
lean_ctor_set(v___x_4738_, 1, v___x_4737_);
v___x_4739_ = lean_unsigned_to_nat(3u);
v___x_4740_ = lean_mk_empty_array_with_capacity(v___x_4739_);
v___x_4741_ = lean_array_push(v___x_4740_, v___x_4732_);
v___x_4742_ = lean_array_push(v___x_4741_, v___x_4735_);
v___x_4743_ = lean_array_push(v___x_4742_, v___x_4738_);
v___x_4744_ = l_Lasm_JS_Web_Support_fields(v___x_4743_);
lean_dec_ref(v___x_4743_);
return v___x_4744_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(lean_object* v_b_4745_, lean_object* v_args_4746_){
_start:
{
uint8_t v_construct_4748_; lean_object* v___x_4749_; uint32_t v___x_4750_; uint64_t v___x_4751_; uint64_t v___y_4753_; 
v_construct_4748_ = lean_ctor_get_uint8(v_b_4745_, sizeof(void*)*4);
v___x_4749_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4745_);
v___x_4750_ = 214;
v___x_4751_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4748_ == 0)
{
uint64_t v___x_4761_; 
v___x_4761_ = 0ULL;
v___y_4753_ = v___x_4761_;
goto v___jp_4752_;
}
else
{
uint64_t v___x_4762_; 
v___x_4762_ = 4ULL;
v___y_4753_ = v___x_4762_;
goto v___jp_4752_;
}
v___jp_4752_:
{
uint64_t v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v___x_4754_ = lean_uint64_lor(v___x_4751_, v___y_4753_);
v___x_4755_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4745_, v_args_4746_);
v___x_4756_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4757_ = lean_string_append(v___x_4756_, v___x_4749_);
v___x_4758_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4759_ = lean_string_append(v___x_4757_, v___x_4758_);
v___x_4760_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_4749_, v___x_4750_, v___x_4754_, v___x_4755_, v___x_4759_);
return v___x_4760_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1___boxed(lean_object* v_b_4763_, lean_object* v_args_4764_, lean_object* v_a_4765_){
_start:
{
lean_object* v_res_4766_; 
v_res_4766_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v_b_4763_, v_args_4764_);
lean_dec_ref(v_b_4763_);
return v_res_4766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir(lean_object* v_options_4775_){
_start:
{
lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; 
v___x_4777_ = lean_unsigned_to_nat(1u);
v___x_4778_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDir___closed__2));
v___x_4779_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4775_);
v___x_4780_ = lean_mk_empty_array_with_capacity(v___x_4777_);
v___x_4781_ = lean_array_push(v___x_4780_, v___x_4779_);
v___x_4782_ = l_Lasm_JS_Web_Support_args(v___x_4781_);
v___x_4783_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4778_, v___x_4782_);
return v___x_4783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir___boxed(lean_object* v_options_4784_, lean_object* v_a_4785_){
_start:
{
lean_object* v_res_4786_; 
v_res_4786_ = l_Lasm_JS_Deno_makeTempDir(v_options_4784_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync(lean_object* v_options_4795_){
_start:
{
uint8_t v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; 
v___x_4797_ = 0;
v___x_4798_ = lean_unsigned_to_nat(1u);
v___x_4799_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDirSync___closed__2));
v___x_4800_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4795_);
v___x_4801_ = lean_mk_empty_array_with_capacity(v___x_4798_);
v___x_4802_ = lean_array_push(v___x_4801_, v___x_4800_);
v___x_4803_ = l_Lasm_JS_Web_Support_args(v___x_4802_);
v___x_4804_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4799_, v___x_4803_, v___x_4797_);
return v___x_4804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync___boxed(lean_object* v_options_4805_, lean_object* v_a_4806_){
_start:
{
lean_object* v_res_4807_; 
v_res_4807_ = l_Lasm_JS_Deno_makeTempDirSync(v_options_4805_);
return v_res_4807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile(lean_object* v_options_4816_){
_start:
{
lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; 
v___x_4818_ = lean_unsigned_to_nat(1u);
v___x_4819_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFile___closed__2));
v___x_4820_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4816_);
v___x_4821_ = lean_mk_empty_array_with_capacity(v___x_4818_);
v___x_4822_ = lean_array_push(v___x_4821_, v___x_4820_);
v___x_4823_ = l_Lasm_JS_Web_Support_args(v___x_4822_);
v___x_4824_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4819_, v___x_4823_);
return v___x_4824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile___boxed(lean_object* v_options_4825_, lean_object* v_a_4826_){
_start:
{
lean_object* v_res_4827_; 
v_res_4827_ = l_Lasm_JS_Deno_makeTempFile(v_options_4825_);
return v_res_4827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync(lean_object* v_options_4836_){
_start:
{
uint8_t v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; 
v___x_4838_ = 0;
v___x_4839_ = lean_unsigned_to_nat(1u);
v___x_4840_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFileSync___closed__2));
v___x_4841_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4836_);
v___x_4842_ = lean_mk_empty_array_with_capacity(v___x_4839_);
v___x_4843_ = lean_array_push(v___x_4842_, v___x_4841_);
v___x_4844_ = l_Lasm_JS_Web_Support_args(v___x_4843_);
v___x_4845_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4840_, v___x_4844_, v___x_4838_);
return v___x_4845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync___boxed(lean_object* v_options_4846_, lean_object* v_a_4847_){
_start:
{
lean_object* v_res_4848_; 
v_res_4848_ = l_Lasm_JS_Deno_makeTempFileSync(v_options_4846_);
return v_res_4848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod(lean_object* v_path_4857_, double v_mode_4858_){
_start:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___y_4863_; 
v___x_4860_ = lean_unsigned_to_nat(2u);
v___x_4861_ = ((lean_object*)(l_Lasm_JS_Deno_chmod___closed__2));
if (lean_obj_tag(v_path_4857_) == 0)
{
lean_object* v_value_4870_; lean_object* v___x_4872_; uint8_t v_isShared_4873_; uint8_t v_isSharedCheck_4877_; 
v_value_4870_ = lean_ctor_get(v_path_4857_, 0);
v_isSharedCheck_4877_ = !lean_is_exclusive(v_path_4857_);
if (v_isSharedCheck_4877_ == 0)
{
v___x_4872_ = v_path_4857_;
v_isShared_4873_ = v_isSharedCheck_4877_;
goto v_resetjp_4871_;
}
else
{
lean_inc(v_value_4870_);
lean_dec(v_path_4857_);
v___x_4872_ = lean_box(0);
v_isShared_4873_ = v_isSharedCheck_4877_;
goto v_resetjp_4871_;
}
v_resetjp_4871_:
{
lean_object* v___x_4875_; 
if (v_isShared_4873_ == 0)
{
lean_ctor_set_tag(v___x_4872_, 4);
v___x_4875_ = v___x_4872_;
goto v_reusejp_4874_;
}
else
{
lean_object* v_reuseFailAlloc_4876_; 
v_reuseFailAlloc_4876_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4876_, 0, v_value_4870_);
v___x_4875_ = v_reuseFailAlloc_4876_;
goto v_reusejp_4874_;
}
v_reusejp_4874_:
{
v___y_4863_ = v___x_4875_;
goto v___jp_4862_;
}
}
}
else
{
lean_object* v_value_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; 
v_value_4878_ = lean_ctor_get(v_path_4857_, 0);
lean_inc(v_value_4878_);
lean_dec_ref_known(v_path_4857_, 1);
v___x_4879_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4880_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4880_, 0, v_value_4878_);
lean_ctor_set(v___x_4880_, 1, v___x_4879_);
v___y_4863_ = v___x_4880_;
goto v___jp_4862_;
}
v___jp_4862_:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4864_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4864_, 0, v_mode_4858_);
v___x_4865_ = lean_mk_empty_array_with_capacity(v___x_4860_);
v___x_4866_ = lean_array_push(v___x_4865_, v___y_4863_);
v___x_4867_ = lean_array_push(v___x_4866_, v___x_4864_);
v___x_4868_ = l_Lasm_JS_Web_Support_args(v___x_4867_);
v___x_4869_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4861_, v___x_4868_);
return v___x_4869_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod___boxed(lean_object* v_path_4881_, lean_object* v_mode_4882_, lean_object* v_a_4883_){
_start:
{
double v_mode_boxed_4884_; lean_object* v_res_4885_; 
v_mode_boxed_4884_ = lean_unbox_float(v_mode_4882_);
lean_dec_ref(v_mode_4882_);
v_res_4885_ = l_Lasm_JS_Deno_chmod(v_path_4881_, v_mode_boxed_4884_);
return v_res_4885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync(lean_object* v_path_4894_, double v_mode_4895_){
_start:
{
uint8_t v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___y_4901_; 
v___x_4897_ = 0;
v___x_4898_ = lean_unsigned_to_nat(2u);
v___x_4899_ = ((lean_object*)(l_Lasm_JS_Deno_chmodSync___closed__2));
if (lean_obj_tag(v_path_4894_) == 0)
{
lean_object* v_value_4908_; lean_object* v___x_4910_; uint8_t v_isShared_4911_; uint8_t v_isSharedCheck_4915_; 
v_value_4908_ = lean_ctor_get(v_path_4894_, 0);
v_isSharedCheck_4915_ = !lean_is_exclusive(v_path_4894_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4910_ = v_path_4894_;
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
else
{
lean_inc(v_value_4908_);
lean_dec(v_path_4894_);
v___x_4910_ = lean_box(0);
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
v_resetjp_4909_:
{
lean_object* v___x_4913_; 
if (v_isShared_4911_ == 0)
{
lean_ctor_set_tag(v___x_4910_, 4);
v___x_4913_ = v___x_4910_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v_value_4908_);
v___x_4913_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
v___y_4901_ = v___x_4913_;
goto v___jp_4900_;
}
}
}
else
{
lean_object* v_value_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; 
v_value_4916_ = lean_ctor_get(v_path_4894_, 0);
lean_inc(v_value_4916_);
lean_dec_ref_known(v_path_4894_, 1);
v___x_4917_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4918_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4918_, 0, v_value_4916_);
lean_ctor_set(v___x_4918_, 1, v___x_4917_);
v___y_4901_ = v___x_4918_;
goto v___jp_4900_;
}
v___jp_4900_:
{
lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; 
v___x_4902_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4902_, 0, v_mode_4895_);
v___x_4903_ = lean_mk_empty_array_with_capacity(v___x_4898_);
v___x_4904_ = lean_array_push(v___x_4903_, v___y_4901_);
v___x_4905_ = lean_array_push(v___x_4904_, v___x_4902_);
v___x_4906_ = l_Lasm_JS_Web_Support_args(v___x_4905_);
v___x_4907_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4899_, v___x_4906_, v___x_4897_);
return v___x_4907_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync___boxed(lean_object* v_path_4919_, lean_object* v_mode_4920_, lean_object* v_a_4921_){
_start:
{
double v_mode_boxed_4922_; lean_object* v_res_4923_; 
v_mode_boxed_4922_ = lean_unbox_float(v_mode_4920_);
lean_dec_ref(v_mode_4920_);
v_res_4923_ = l_Lasm_JS_Deno_chmodSync(v_path_4919_, v_mode_boxed_4922_);
return v_res_4923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown(lean_object* v_path_4932_, lean_object* v_uid_4933_, lean_object* v_gid_4934_){
_start:
{
lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___y_4939_; lean_object* v___y_4940_; lean_object* v___y_4941_; lean_object* v___y_4949_; lean_object* v___y_4950_; lean_object* v___y_4956_; 
v___x_4936_ = lean_unsigned_to_nat(3u);
v___x_4937_ = ((lean_object*)(l_Lasm_JS_Deno_chown___closed__2));
if (lean_obj_tag(v_path_4932_) == 0)
{
lean_object* v_value_4961_; lean_object* v___x_4963_; uint8_t v_isShared_4964_; uint8_t v_isSharedCheck_4968_; 
v_value_4961_ = lean_ctor_get(v_path_4932_, 0);
v_isSharedCheck_4968_ = !lean_is_exclusive(v_path_4932_);
if (v_isSharedCheck_4968_ == 0)
{
v___x_4963_ = v_path_4932_;
v_isShared_4964_ = v_isSharedCheck_4968_;
goto v_resetjp_4962_;
}
else
{
lean_inc(v_value_4961_);
lean_dec(v_path_4932_);
v___x_4963_ = lean_box(0);
v_isShared_4964_ = v_isSharedCheck_4968_;
goto v_resetjp_4962_;
}
v_resetjp_4962_:
{
lean_object* v___x_4966_; 
if (v_isShared_4964_ == 0)
{
lean_ctor_set_tag(v___x_4963_, 4);
v___x_4966_ = v___x_4963_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4967_; 
v_reuseFailAlloc_4967_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4967_, 0, v_value_4961_);
v___x_4966_ = v_reuseFailAlloc_4967_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
v___y_4956_ = v___x_4966_;
goto v___jp_4955_;
}
}
}
else
{
lean_object* v_value_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; 
v_value_4969_ = lean_ctor_get(v_path_4932_, 0);
lean_inc(v_value_4969_);
lean_dec_ref_known(v_path_4932_, 1);
v___x_4970_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4971_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4971_, 0, v_value_4969_);
lean_ctor_set(v___x_4971_, 1, v___x_4970_);
v___y_4956_ = v___x_4971_;
goto v___jp_4955_;
}
v___jp_4938_:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; 
v___x_4942_ = lean_mk_empty_array_with_capacity(v___x_4936_);
v___x_4943_ = lean_array_push(v___x_4942_, v___y_4940_);
v___x_4944_ = lean_array_push(v___x_4943_, v___y_4939_);
v___x_4945_ = lean_array_push(v___x_4944_, v___y_4941_);
v___x_4946_ = l_Lasm_JS_Web_Support_args(v___x_4945_);
v___x_4947_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4937_, v___x_4946_);
return v___x_4947_;
}
v___jp_4948_:
{
if (lean_obj_tag(v_gid_4934_) == 0)
{
lean_object* v___x_4951_; 
v___x_4951_ = lean_box(1);
v___y_4939_ = v___y_4950_;
v___y_4940_ = v___y_4949_;
v___y_4941_ = v___x_4951_;
goto v___jp_4938_;
}
else
{
lean_object* v_val_4952_; lean_object* v___x_4953_; double v___x_4954_; 
v_val_4952_ = lean_ctor_get(v_gid_4934_, 0);
v___x_4953_ = lean_alloc_ctor(3, 0, 8);
v___x_4954_ = lean_unbox_float(v_val_4952_);
lean_ctor_set_float(v___x_4953_, 0, v___x_4954_);
v___y_4939_ = v___y_4950_;
v___y_4940_ = v___y_4949_;
v___y_4941_ = v___x_4953_;
goto v___jp_4938_;
}
}
v___jp_4955_:
{
if (lean_obj_tag(v_uid_4933_) == 0)
{
lean_object* v___x_4957_; 
v___x_4957_ = lean_box(1);
v___y_4949_ = v___y_4956_;
v___y_4950_ = v___x_4957_;
goto v___jp_4948_;
}
else
{
lean_object* v_val_4958_; lean_object* v___x_4959_; double v___x_4960_; 
v_val_4958_ = lean_ctor_get(v_uid_4933_, 0);
v___x_4959_ = lean_alloc_ctor(3, 0, 8);
v___x_4960_ = lean_unbox_float(v_val_4958_);
lean_ctor_set_float(v___x_4959_, 0, v___x_4960_);
v___y_4949_ = v___y_4956_;
v___y_4950_ = v___x_4959_;
goto v___jp_4948_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown___boxed(lean_object* v_path_4972_, lean_object* v_uid_4973_, lean_object* v_gid_4974_, lean_object* v_a_4975_){
_start:
{
lean_object* v_res_4976_; 
v_res_4976_ = l_Lasm_JS_Deno_chown(v_path_4972_, v_uid_4973_, v_gid_4974_);
lean_dec(v_gid_4974_);
lean_dec(v_uid_4973_);
return v_res_4976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync(lean_object* v_path_4985_, lean_object* v_uid_4986_, lean_object* v_gid_4987_){
_start:
{
uint8_t v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___y_4993_; lean_object* v___y_4994_; lean_object* v___y_4995_; lean_object* v___y_5003_; lean_object* v___y_5004_; lean_object* v___y_5010_; 
v___x_4989_ = 0;
v___x_4990_ = lean_unsigned_to_nat(3u);
v___x_4991_ = ((lean_object*)(l_Lasm_JS_Deno_chownSync___closed__2));
if (lean_obj_tag(v_path_4985_) == 0)
{
lean_object* v_value_5015_; lean_object* v___x_5017_; uint8_t v_isShared_5018_; uint8_t v_isSharedCheck_5022_; 
v_value_5015_ = lean_ctor_get(v_path_4985_, 0);
v_isSharedCheck_5022_ = !lean_is_exclusive(v_path_4985_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_5017_ = v_path_4985_;
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
else
{
lean_inc(v_value_5015_);
lean_dec(v_path_4985_);
v___x_5017_ = lean_box(0);
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
v_resetjp_5016_:
{
lean_object* v___x_5020_; 
if (v_isShared_5018_ == 0)
{
lean_ctor_set_tag(v___x_5017_, 4);
v___x_5020_ = v___x_5017_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v_value_5015_);
v___x_5020_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
v___y_5010_ = v___x_5020_;
goto v___jp_5009_;
}
}
}
else
{
lean_object* v_value_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; 
v_value_5023_ = lean_ctor_get(v_path_4985_, 0);
lean_inc(v_value_5023_);
lean_dec_ref_known(v_path_4985_, 1);
v___x_5024_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5025_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5025_, 0, v_value_5023_);
lean_ctor_set(v___x_5025_, 1, v___x_5024_);
v___y_5010_ = v___x_5025_;
goto v___jp_5009_;
}
v___jp_4992_:
{
lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; 
v___x_4996_ = lean_mk_empty_array_with_capacity(v___x_4990_);
v___x_4997_ = lean_array_push(v___x_4996_, v___y_4993_);
v___x_4998_ = lean_array_push(v___x_4997_, v___y_4994_);
v___x_4999_ = lean_array_push(v___x_4998_, v___y_4995_);
v___x_5000_ = l_Lasm_JS_Web_Support_args(v___x_4999_);
v___x_5001_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4991_, v___x_5000_, v___x_4989_);
return v___x_5001_;
}
v___jp_5002_:
{
if (lean_obj_tag(v_gid_4987_) == 0)
{
lean_object* v___x_5005_; 
v___x_5005_ = lean_box(1);
v___y_4993_ = v___y_5003_;
v___y_4994_ = v___y_5004_;
v___y_4995_ = v___x_5005_;
goto v___jp_4992_;
}
else
{
lean_object* v_val_5006_; lean_object* v___x_5007_; double v___x_5008_; 
v_val_5006_ = lean_ctor_get(v_gid_4987_, 0);
v___x_5007_ = lean_alloc_ctor(3, 0, 8);
v___x_5008_ = lean_unbox_float(v_val_5006_);
lean_ctor_set_float(v___x_5007_, 0, v___x_5008_);
v___y_4993_ = v___y_5003_;
v___y_4994_ = v___y_5004_;
v___y_4995_ = v___x_5007_;
goto v___jp_4992_;
}
}
v___jp_5009_:
{
if (lean_obj_tag(v_uid_4986_) == 0)
{
lean_object* v___x_5011_; 
v___x_5011_ = lean_box(1);
v___y_5003_ = v___y_5010_;
v___y_5004_ = v___x_5011_;
goto v___jp_5002_;
}
else
{
lean_object* v_val_5012_; lean_object* v___x_5013_; double v___x_5014_; 
v_val_5012_ = lean_ctor_get(v_uid_4986_, 0);
v___x_5013_ = lean_alloc_ctor(3, 0, 8);
v___x_5014_ = lean_unbox_float(v_val_5012_);
lean_ctor_set_float(v___x_5013_, 0, v___x_5014_);
v___y_5003_ = v___y_5010_;
v___y_5004_ = v___x_5013_;
goto v___jp_5002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync___boxed(lean_object* v_path_5026_, lean_object* v_uid_5027_, lean_object* v_gid_5028_, lean_object* v_a_5029_){
_start:
{
lean_object* v_res_5030_; 
v_res_5030_ = l_Lasm_JS_Deno_chownSync(v_path_5026_, v_uid_5027_, v_gid_5028_);
lean_dec(v_gid_5028_);
lean_dec(v_uid_5027_);
return v_res_5030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(lean_object* v_x_5031_){
_start:
{
if (lean_obj_tag(v_x_5031_) == 0)
{
lean_object* v___x_5032_; 
v___x_5032_ = lean_box(0);
return v___x_5032_;
}
else
{
lean_object* v_val_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; 
v_val_5033_ = lean_ctor_get(v_x_5031_, 0);
v___x_5034_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_5035_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_5033_);
v___x_5036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5036_, 0, v___x_5034_);
lean_ctor_set(v___x_5036_, 1, v___x_5035_);
v___x_5037_ = lean_unsigned_to_nat(1u);
v___x_5038_ = lean_mk_empty_array_with_capacity(v___x_5037_);
v___x_5039_ = lean_array_push(v___x_5038_, v___x_5036_);
v___x_5040_ = l_Lasm_JS_Web_Support_fields(v___x_5039_);
lean_dec_ref(v___x_5039_);
return v___x_5040_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0___boxed(lean_object* v_x_5041_){
_start:
{
lean_object* v_res_5042_; 
v_res_5042_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_x_5041_);
lean_dec(v_x_5041_);
return v_res_5042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove(lean_object* v_path_5051_, lean_object* v_options_5052_){
_start:
{
lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___y_5057_; 
v___x_5054_ = lean_unsigned_to_nat(2u);
v___x_5055_ = ((lean_object*)(l_Lasm_JS_Deno_remove___closed__2));
if (lean_obj_tag(v_path_5051_) == 0)
{
lean_object* v_value_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5071_; 
v_value_5064_ = lean_ctor_get(v_path_5051_, 0);
v_isSharedCheck_5071_ = !lean_is_exclusive(v_path_5051_);
if (v_isSharedCheck_5071_ == 0)
{
v___x_5066_ = v_path_5051_;
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_value_5064_);
lean_dec(v_path_5051_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v___x_5069_; 
if (v_isShared_5067_ == 0)
{
lean_ctor_set_tag(v___x_5066_, 4);
v___x_5069_ = v___x_5066_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5070_; 
v_reuseFailAlloc_5070_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5070_, 0, v_value_5064_);
v___x_5069_ = v_reuseFailAlloc_5070_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
v___y_5057_ = v___x_5069_;
goto v___jp_5056_;
}
}
}
else
{
lean_object* v_value_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; 
v_value_5072_ = lean_ctor_get(v_path_5051_, 0);
lean_inc(v_value_5072_);
lean_dec_ref_known(v_path_5051_, 1);
v___x_5073_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5074_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5074_, 0, v_value_5072_);
lean_ctor_set(v___x_5074_, 1, v___x_5073_);
v___y_5057_ = v___x_5074_;
goto v___jp_5056_;
}
v___jp_5056_:
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; 
v___x_5058_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5052_);
v___x_5059_ = lean_mk_empty_array_with_capacity(v___x_5054_);
v___x_5060_ = lean_array_push(v___x_5059_, v___y_5057_);
v___x_5061_ = lean_array_push(v___x_5060_, v___x_5058_);
v___x_5062_ = l_Lasm_JS_Web_Support_args(v___x_5061_);
v___x_5063_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5055_, v___x_5062_);
return v___x_5063_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove___boxed(lean_object* v_path_5075_, lean_object* v_options_5076_, lean_object* v_a_5077_){
_start:
{
lean_object* v_res_5078_; 
v_res_5078_ = l_Lasm_JS_Deno_remove(v_path_5075_, v_options_5076_);
lean_dec(v_options_5076_);
return v_res_5078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync(lean_object* v_path_5087_, lean_object* v_options_5088_){
_start:
{
uint8_t v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___y_5094_; 
v___x_5090_ = 0;
v___x_5091_ = lean_unsigned_to_nat(2u);
v___x_5092_ = ((lean_object*)(l_Lasm_JS_Deno_removeSync___closed__2));
if (lean_obj_tag(v_path_5087_) == 0)
{
lean_object* v_value_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5108_; 
v_value_5101_ = lean_ctor_get(v_path_5087_, 0);
v_isSharedCheck_5108_ = !lean_is_exclusive(v_path_5087_);
if (v_isSharedCheck_5108_ == 0)
{
v___x_5103_ = v_path_5087_;
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_value_5101_);
lean_dec(v_path_5087_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
lean_object* v___x_5106_; 
if (v_isShared_5104_ == 0)
{
lean_ctor_set_tag(v___x_5103_, 4);
v___x_5106_ = v___x_5103_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v_value_5101_);
v___x_5106_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
v___y_5094_ = v___x_5106_;
goto v___jp_5093_;
}
}
}
else
{
lean_object* v_value_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; 
v_value_5109_ = lean_ctor_get(v_path_5087_, 0);
lean_inc(v_value_5109_);
lean_dec_ref_known(v_path_5087_, 1);
v___x_5110_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5111_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5111_, 0, v_value_5109_);
lean_ctor_set(v___x_5111_, 1, v___x_5110_);
v___y_5094_ = v___x_5111_;
goto v___jp_5093_;
}
v___jp_5093_:
{
lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5095_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5088_);
v___x_5096_ = lean_mk_empty_array_with_capacity(v___x_5091_);
v___x_5097_ = lean_array_push(v___x_5096_, v___y_5094_);
v___x_5098_ = lean_array_push(v___x_5097_, v___x_5095_);
v___x_5099_ = l_Lasm_JS_Web_Support_args(v___x_5098_);
v___x_5100_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5092_, v___x_5099_, v___x_5090_);
return v___x_5100_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync___boxed(lean_object* v_path_5112_, lean_object* v_options_5113_, lean_object* v_a_5114_){
_start:
{
lean_object* v_res_5115_; 
v_res_5115_ = l_Lasm_JS_Deno_removeSync(v_path_5112_, v_options_5113_);
lean_dec(v_options_5113_);
return v_res_5115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync(lean_object* v_oldpath_5124_, lean_object* v_newpath_5125_){
_start:
{
uint8_t v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___y_5131_; lean_object* v___y_5132_; lean_object* v___y_5139_; 
v___x_5127_ = 0;
v___x_5128_ = lean_unsigned_to_nat(2u);
v___x_5129_ = ((lean_object*)(l_Lasm_JS_Deno_renameSync___closed__2));
if (lean_obj_tag(v_oldpath_5124_) == 0)
{
lean_object* v_value_5151_; lean_object* v___x_5153_; uint8_t v_isShared_5154_; uint8_t v_isSharedCheck_5158_; 
v_value_5151_ = lean_ctor_get(v_oldpath_5124_, 0);
v_isSharedCheck_5158_ = !lean_is_exclusive(v_oldpath_5124_);
if (v_isSharedCheck_5158_ == 0)
{
v___x_5153_ = v_oldpath_5124_;
v_isShared_5154_ = v_isSharedCheck_5158_;
goto v_resetjp_5152_;
}
else
{
lean_inc(v_value_5151_);
lean_dec(v_oldpath_5124_);
v___x_5153_ = lean_box(0);
v_isShared_5154_ = v_isSharedCheck_5158_;
goto v_resetjp_5152_;
}
v_resetjp_5152_:
{
lean_object* v___x_5156_; 
if (v_isShared_5154_ == 0)
{
lean_ctor_set_tag(v___x_5153_, 4);
v___x_5156_ = v___x_5153_;
goto v_reusejp_5155_;
}
else
{
lean_object* v_reuseFailAlloc_5157_; 
v_reuseFailAlloc_5157_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5157_, 0, v_value_5151_);
v___x_5156_ = v_reuseFailAlloc_5157_;
goto v_reusejp_5155_;
}
v_reusejp_5155_:
{
v___y_5139_ = v___x_5156_;
goto v___jp_5138_;
}
}
}
else
{
lean_object* v_value_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; 
v_value_5159_ = lean_ctor_get(v_oldpath_5124_, 0);
lean_inc(v_value_5159_);
lean_dec_ref_known(v_oldpath_5124_, 1);
v___x_5160_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5161_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5161_, 0, v_value_5159_);
lean_ctor_set(v___x_5161_, 1, v___x_5160_);
v___y_5139_ = v___x_5161_;
goto v___jp_5138_;
}
v___jp_5130_:
{
lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; 
v___x_5133_ = lean_mk_empty_array_with_capacity(v___x_5128_);
v___x_5134_ = lean_array_push(v___x_5133_, v___y_5131_);
v___x_5135_ = lean_array_push(v___x_5134_, v___y_5132_);
v___x_5136_ = l_Lasm_JS_Web_Support_args(v___x_5135_);
v___x_5137_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5129_, v___x_5136_, v___x_5127_);
return v___x_5137_;
}
v___jp_5138_:
{
if (lean_obj_tag(v_newpath_5125_) == 0)
{
lean_object* v_value_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5147_; 
v_value_5140_ = lean_ctor_get(v_newpath_5125_, 0);
v_isSharedCheck_5147_ = !lean_is_exclusive(v_newpath_5125_);
if (v_isSharedCheck_5147_ == 0)
{
v___x_5142_ = v_newpath_5125_;
v_isShared_5143_ = v_isSharedCheck_5147_;
goto v_resetjp_5141_;
}
else
{
lean_inc(v_value_5140_);
lean_dec(v_newpath_5125_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5147_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5145_; 
if (v_isShared_5143_ == 0)
{
lean_ctor_set_tag(v___x_5142_, 4);
v___x_5145_ = v___x_5142_;
goto v_reusejp_5144_;
}
else
{
lean_object* v_reuseFailAlloc_5146_; 
v_reuseFailAlloc_5146_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5146_, 0, v_value_5140_);
v___x_5145_ = v_reuseFailAlloc_5146_;
goto v_reusejp_5144_;
}
v_reusejp_5144_:
{
v___y_5131_ = v___y_5139_;
v___y_5132_ = v___x_5145_;
goto v___jp_5130_;
}
}
}
else
{
lean_object* v_value_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; 
v_value_5148_ = lean_ctor_get(v_newpath_5125_, 0);
lean_inc(v_value_5148_);
lean_dec_ref_known(v_newpath_5125_, 1);
v___x_5149_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5150_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5150_, 0, v_value_5148_);
lean_ctor_set(v___x_5150_, 1, v___x_5149_);
v___y_5131_ = v___y_5139_;
v___y_5132_ = v___x_5150_;
goto v___jp_5130_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync___boxed(lean_object* v_oldpath_5162_, lean_object* v_newpath_5163_, lean_object* v_a_5164_){
_start:
{
lean_object* v_res_5165_; 
v_res_5165_ = l_Lasm_JS_Deno_renameSync(v_oldpath_5162_, v_newpath_5163_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename(lean_object* v_oldpath_5174_, lean_object* v_newpath_5175_){
_start:
{
lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___y_5180_; lean_object* v___y_5181_; lean_object* v___y_5188_; 
v___x_5177_ = lean_unsigned_to_nat(2u);
v___x_5178_ = ((lean_object*)(l_Lasm_JS_Deno_rename___closed__2));
if (lean_obj_tag(v_oldpath_5174_) == 0)
{
lean_object* v_value_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5207_; 
v_value_5200_ = lean_ctor_get(v_oldpath_5174_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v_oldpath_5174_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5202_ = v_oldpath_5174_;
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_value_5200_);
lean_dec(v_oldpath_5174_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___x_5205_; 
if (v_isShared_5203_ == 0)
{
lean_ctor_set_tag(v___x_5202_, 4);
v___x_5205_ = v___x_5202_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_value_5200_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
v___y_5188_ = v___x_5205_;
goto v___jp_5187_;
}
}
}
else
{
lean_object* v_value_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; 
v_value_5208_ = lean_ctor_get(v_oldpath_5174_, 0);
lean_inc(v_value_5208_);
lean_dec_ref_known(v_oldpath_5174_, 1);
v___x_5209_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5210_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5210_, 0, v_value_5208_);
lean_ctor_set(v___x_5210_, 1, v___x_5209_);
v___y_5188_ = v___x_5210_;
goto v___jp_5187_;
}
v___jp_5179_:
{
lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5182_ = lean_mk_empty_array_with_capacity(v___x_5177_);
v___x_5183_ = lean_array_push(v___x_5182_, v___y_5180_);
v___x_5184_ = lean_array_push(v___x_5183_, v___y_5181_);
v___x_5185_ = l_Lasm_JS_Web_Support_args(v___x_5184_);
v___x_5186_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5178_, v___x_5185_);
return v___x_5186_;
}
v___jp_5187_:
{
if (lean_obj_tag(v_newpath_5175_) == 0)
{
lean_object* v_value_5189_; lean_object* v___x_5191_; uint8_t v_isShared_5192_; uint8_t v_isSharedCheck_5196_; 
v_value_5189_ = lean_ctor_get(v_newpath_5175_, 0);
v_isSharedCheck_5196_ = !lean_is_exclusive(v_newpath_5175_);
if (v_isSharedCheck_5196_ == 0)
{
v___x_5191_ = v_newpath_5175_;
v_isShared_5192_ = v_isSharedCheck_5196_;
goto v_resetjp_5190_;
}
else
{
lean_inc(v_value_5189_);
lean_dec(v_newpath_5175_);
v___x_5191_ = lean_box(0);
v_isShared_5192_ = v_isSharedCheck_5196_;
goto v_resetjp_5190_;
}
v_resetjp_5190_:
{
lean_object* v___x_5194_; 
if (v_isShared_5192_ == 0)
{
lean_ctor_set_tag(v___x_5191_, 4);
v___x_5194_ = v___x_5191_;
goto v_reusejp_5193_;
}
else
{
lean_object* v_reuseFailAlloc_5195_; 
v_reuseFailAlloc_5195_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5195_, 0, v_value_5189_);
v___x_5194_ = v_reuseFailAlloc_5195_;
goto v_reusejp_5193_;
}
v_reusejp_5193_:
{
v___y_5180_ = v___y_5188_;
v___y_5181_ = v___x_5194_;
goto v___jp_5179_;
}
}
}
else
{
lean_object* v_value_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; 
v_value_5197_ = lean_ctor_get(v_newpath_5175_, 0);
lean_inc(v_value_5197_);
lean_dec_ref_known(v_newpath_5175_, 1);
v___x_5198_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5199_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5199_, 0, v_value_5197_);
lean_ctor_set(v___x_5199_, 1, v___x_5198_);
v___y_5180_ = v___y_5188_;
v___y_5181_ = v___x_5199_;
goto v___jp_5179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename___boxed(lean_object* v_oldpath_5211_, lean_object* v_newpath_5212_, lean_object* v_a_5213_){
_start:
{
lean_object* v_res_5214_; 
v_res_5214_ = l_Lasm_JS_Deno_rename(v_oldpath_5211_, v_newpath_5212_);
return v_res_5214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(lean_object* v_x_5215_){
_start:
{
if (lean_obj_tag(v_x_5215_) == 0)
{
lean_object* v___x_5216_; 
v___x_5216_ = lean_box(0);
return v___x_5216_;
}
else
{
lean_object* v_val_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; 
v_val_5217_ = lean_ctor_get(v_x_5215_, 0);
v___x_5218_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5219_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_5217_);
v___x_5220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5220_, 0, v___x_5218_);
lean_ctor_set(v___x_5220_, 1, v___x_5219_);
v___x_5221_ = lean_unsigned_to_nat(1u);
v___x_5222_ = lean_mk_empty_array_with_capacity(v___x_5221_);
v___x_5223_ = lean_array_push(v___x_5222_, v___x_5220_);
v___x_5224_ = l_Lasm_JS_Web_Support_fields(v___x_5223_);
lean_dec_ref(v___x_5223_);
return v___x_5224_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0___boxed(lean_object* v_x_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_x_5225_);
lean_dec(v_x_5225_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile(lean_object* v_path_5235_, lean_object* v_options_5236_){
_start:
{
lean_object* v___x_5238_; lean_object* v___x_5239_; lean_object* v___y_5241_; 
v___x_5238_ = lean_unsigned_to_nat(2u);
v___x_5239_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFile___closed__2));
if (lean_obj_tag(v_path_5235_) == 0)
{
lean_object* v_value_5248_; lean_object* v___x_5250_; uint8_t v_isShared_5251_; uint8_t v_isSharedCheck_5255_; 
v_value_5248_ = lean_ctor_get(v_path_5235_, 0);
v_isSharedCheck_5255_ = !lean_is_exclusive(v_path_5235_);
if (v_isSharedCheck_5255_ == 0)
{
v___x_5250_ = v_path_5235_;
v_isShared_5251_ = v_isSharedCheck_5255_;
goto v_resetjp_5249_;
}
else
{
lean_inc(v_value_5248_);
lean_dec(v_path_5235_);
v___x_5250_ = lean_box(0);
v_isShared_5251_ = v_isSharedCheck_5255_;
goto v_resetjp_5249_;
}
v_resetjp_5249_:
{
lean_object* v___x_5253_; 
if (v_isShared_5251_ == 0)
{
lean_ctor_set_tag(v___x_5250_, 4);
v___x_5253_ = v___x_5250_;
goto v_reusejp_5252_;
}
else
{
lean_object* v_reuseFailAlloc_5254_; 
v_reuseFailAlloc_5254_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5254_, 0, v_value_5248_);
v___x_5253_ = v_reuseFailAlloc_5254_;
goto v_reusejp_5252_;
}
v_reusejp_5252_:
{
v___y_5241_ = v___x_5253_;
goto v___jp_5240_;
}
}
}
else
{
lean_object* v_value_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; 
v_value_5256_ = lean_ctor_get(v_path_5235_, 0);
lean_inc(v_value_5256_);
lean_dec_ref_known(v_path_5235_, 1);
v___x_5257_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5258_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5258_, 0, v_value_5256_);
lean_ctor_set(v___x_5258_, 1, v___x_5257_);
v___y_5241_ = v___x_5258_;
goto v___jp_5240_;
}
v___jp_5240_:
{
lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; 
v___x_5242_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5236_);
v___x_5243_ = lean_mk_empty_array_with_capacity(v___x_5238_);
v___x_5244_ = lean_array_push(v___x_5243_, v___y_5241_);
v___x_5245_ = lean_array_push(v___x_5244_, v___x_5242_);
v___x_5246_ = l_Lasm_JS_Web_Support_args(v___x_5245_);
v___x_5247_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5239_, v___x_5246_);
return v___x_5247_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile___boxed(lean_object* v_path_5259_, lean_object* v_options_5260_, lean_object* v_a_5261_){
_start:
{
lean_object* v_res_5262_; 
v_res_5262_ = l_Lasm_JS_Deno_readTextFile(v_path_5259_, v_options_5260_);
lean_dec(v_options_5260_);
return v_res_5262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync(lean_object* v_path_5271_){
_start:
{
uint8_t v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___y_5277_; 
v___x_5273_ = 0;
v___x_5274_ = lean_unsigned_to_nat(1u);
v___x_5275_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFileSync___closed__2));
if (lean_obj_tag(v_path_5271_) == 0)
{
lean_object* v_value_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5289_; 
v_value_5282_ = lean_ctor_get(v_path_5271_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v_path_5271_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5284_ = v_path_5271_;
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_value_5282_);
lean_dec(v_path_5271_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5287_; 
if (v_isShared_5285_ == 0)
{
lean_ctor_set_tag(v___x_5284_, 4);
v___x_5287_ = v___x_5284_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v_value_5282_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
v___y_5277_ = v___x_5287_;
goto v___jp_5276_;
}
}
}
else
{
lean_object* v_value_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; 
v_value_5290_ = lean_ctor_get(v_path_5271_, 0);
lean_inc(v_value_5290_);
lean_dec_ref_known(v_path_5271_, 1);
v___x_5291_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5292_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5292_, 0, v_value_5290_);
lean_ctor_set(v___x_5292_, 1, v___x_5291_);
v___y_5277_ = v___x_5292_;
goto v___jp_5276_;
}
v___jp_5276_:
{
lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5278_ = lean_mk_empty_array_with_capacity(v___x_5274_);
v___x_5279_ = lean_array_push(v___x_5278_, v___y_5277_);
v___x_5280_ = l_Lasm_JS_Web_Support_args(v___x_5279_);
v___x_5281_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5275_, v___x_5280_, v___x_5273_);
return v___x_5281_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync___boxed(lean_object* v_path_5293_, lean_object* v_a_5294_){
_start:
{
lean_object* v_res_5295_; 
v_res_5295_ = l_Lasm_JS_Deno_readTextFileSync(v_path_5293_);
return v_res_5295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(lean_object* v_b_5296_, lean_object* v_args_5297_){
_start:
{
uint8_t v_construct_5299_; lean_object* v___x_5300_; uint32_t v___x_5301_; uint64_t v___x_5302_; uint64_t v___y_5304_; 
v_construct_5299_ = lean_ctor_get_uint8(v_b_5296_, sizeof(void*)*4);
v___x_5300_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5296_);
v___x_5301_ = 214;
v___x_5302_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5299_ == 0)
{
uint64_t v___x_5312_; 
v___x_5312_ = 0ULL;
v___y_5304_ = v___x_5312_;
goto v___jp_5303_;
}
else
{
uint64_t v___x_5313_; 
v___x_5313_ = 4ULL;
v___y_5304_ = v___x_5313_;
goto v___jp_5303_;
}
v___jp_5303_:
{
uint64_t v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; 
v___x_5305_ = lean_uint64_lor(v___x_5302_, v___y_5304_);
v___x_5306_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5296_, v_args_5297_);
v___x_5307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5308_ = lean_string_append(v___x_5307_, v___x_5300_);
v___x_5309_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5310_ = lean_string_append(v___x_5308_, v___x_5309_);
v___x_5311_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_5300_, v___x_5301_, v___x_5305_, v___x_5306_, v___x_5310_);
return v___x_5311_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0___boxed(lean_object* v_b_5314_, lean_object* v_args_5315_, lean_object* v_a_5316_){
_start:
{
lean_object* v_res_5317_; 
v_res_5317_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v_b_5314_, v_args_5315_);
lean_dec_ref(v_b_5314_);
return v_res_5317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile(lean_object* v_path_5326_, lean_object* v_options_5327_){
_start:
{
lean_object* v___x_5329_; lean_object* v___x_5330_; lean_object* v___y_5332_; 
v___x_5329_ = lean_unsigned_to_nat(2u);
v___x_5330_ = ((lean_object*)(l_Lasm_JS_Deno_readFile___closed__2));
if (lean_obj_tag(v_path_5326_) == 0)
{
lean_object* v_value_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5346_; 
v_value_5339_ = lean_ctor_get(v_path_5326_, 0);
v_isSharedCheck_5346_ = !lean_is_exclusive(v_path_5326_);
if (v_isSharedCheck_5346_ == 0)
{
v___x_5341_ = v_path_5326_;
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_value_5339_);
lean_dec(v_path_5326_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___x_5344_; 
if (v_isShared_5342_ == 0)
{
lean_ctor_set_tag(v___x_5341_, 4);
v___x_5344_ = v___x_5341_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v_value_5339_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
v___y_5332_ = v___x_5344_;
goto v___jp_5331_;
}
}
}
else
{
lean_object* v_value_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; 
v_value_5347_ = lean_ctor_get(v_path_5326_, 0);
lean_inc(v_value_5347_);
lean_dec_ref_known(v_path_5326_, 1);
v___x_5348_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5349_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5349_, 0, v_value_5347_);
lean_ctor_set(v___x_5349_, 1, v___x_5348_);
v___y_5332_ = v___x_5349_;
goto v___jp_5331_;
}
v___jp_5331_:
{
lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; 
v___x_5333_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5327_);
v___x_5334_ = lean_mk_empty_array_with_capacity(v___x_5329_);
v___x_5335_ = lean_array_push(v___x_5334_, v___y_5332_);
v___x_5336_ = lean_array_push(v___x_5335_, v___x_5333_);
v___x_5337_ = l_Lasm_JS_Web_Support_args(v___x_5336_);
v___x_5338_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v___x_5330_, v___x_5337_);
return v___x_5338_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile___boxed(lean_object* v_path_5350_, lean_object* v_options_5351_, lean_object* v_a_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l_Lasm_JS_Deno_readFile(v_path_5350_, v_options_5351_);
lean_dec(v_options_5351_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync(lean_object* v_path_5362_){
_start:
{
uint8_t v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___y_5368_; 
v___x_5364_ = 0;
v___x_5365_ = lean_unsigned_to_nat(1u);
v___x_5366_ = ((lean_object*)(l_Lasm_JS_Deno_readFileSync___closed__2));
if (lean_obj_tag(v_path_5362_) == 0)
{
lean_object* v_value_5373_; lean_object* v___x_5375_; uint8_t v_isShared_5376_; uint8_t v_isSharedCheck_5380_; 
v_value_5373_ = lean_ctor_get(v_path_5362_, 0);
v_isSharedCheck_5380_ = !lean_is_exclusive(v_path_5362_);
if (v_isSharedCheck_5380_ == 0)
{
v___x_5375_ = v_path_5362_;
v_isShared_5376_ = v_isSharedCheck_5380_;
goto v_resetjp_5374_;
}
else
{
lean_inc(v_value_5373_);
lean_dec(v_path_5362_);
v___x_5375_ = lean_box(0);
v_isShared_5376_ = v_isSharedCheck_5380_;
goto v_resetjp_5374_;
}
v_resetjp_5374_:
{
lean_object* v___x_5378_; 
if (v_isShared_5376_ == 0)
{
lean_ctor_set_tag(v___x_5375_, 4);
v___x_5378_ = v___x_5375_;
goto v_reusejp_5377_;
}
else
{
lean_object* v_reuseFailAlloc_5379_; 
v_reuseFailAlloc_5379_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5379_, 0, v_value_5373_);
v___x_5378_ = v_reuseFailAlloc_5379_;
goto v_reusejp_5377_;
}
v_reusejp_5377_:
{
v___y_5368_ = v___x_5378_;
goto v___jp_5367_;
}
}
}
else
{
lean_object* v_value_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; 
v_value_5381_ = lean_ctor_get(v_path_5362_, 0);
lean_inc(v_value_5381_);
lean_dec_ref_known(v_path_5362_, 1);
v___x_5382_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5383_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5383_, 0, v_value_5381_);
lean_ctor_set(v___x_5383_, 1, v___x_5382_);
v___y_5368_ = v___x_5383_;
goto v___jp_5367_;
}
v___jp_5367_:
{
lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; 
v___x_5369_ = lean_mk_empty_array_with_capacity(v___x_5365_);
v___x_5370_ = lean_array_push(v___x_5369_, v___y_5368_);
v___x_5371_ = l_Lasm_JS_Web_Support_args(v___x_5370_);
v___x_5372_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_5366_, v___x_5371_, v___x_5364_);
return v___x_5372_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync___boxed(lean_object* v_path_5384_, lean_object* v_a_5385_){
_start:
{
lean_object* v_res_5386_; 
v_res_5386_ = l_Lasm_JS_Deno_readFileSync(v_path_5384_);
return v_res_5386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath(lean_object* v_path_5395_){
_start:
{
lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___y_5400_; 
v___x_5397_ = lean_unsigned_to_nat(1u);
v___x_5398_ = ((lean_object*)(l_Lasm_JS_Deno_realPath___closed__2));
if (lean_obj_tag(v_path_5395_) == 0)
{
lean_object* v_value_5405_; lean_object* v___x_5407_; uint8_t v_isShared_5408_; uint8_t v_isSharedCheck_5412_; 
v_value_5405_ = lean_ctor_get(v_path_5395_, 0);
v_isSharedCheck_5412_ = !lean_is_exclusive(v_path_5395_);
if (v_isSharedCheck_5412_ == 0)
{
v___x_5407_ = v_path_5395_;
v_isShared_5408_ = v_isSharedCheck_5412_;
goto v_resetjp_5406_;
}
else
{
lean_inc(v_value_5405_);
lean_dec(v_path_5395_);
v___x_5407_ = lean_box(0);
v_isShared_5408_ = v_isSharedCheck_5412_;
goto v_resetjp_5406_;
}
v_resetjp_5406_:
{
lean_object* v___x_5410_; 
if (v_isShared_5408_ == 0)
{
lean_ctor_set_tag(v___x_5407_, 4);
v___x_5410_ = v___x_5407_;
goto v_reusejp_5409_;
}
else
{
lean_object* v_reuseFailAlloc_5411_; 
v_reuseFailAlloc_5411_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5411_, 0, v_value_5405_);
v___x_5410_ = v_reuseFailAlloc_5411_;
goto v_reusejp_5409_;
}
v_reusejp_5409_:
{
v___y_5400_ = v___x_5410_;
goto v___jp_5399_;
}
}
}
else
{
lean_object* v_value_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; 
v_value_5413_ = lean_ctor_get(v_path_5395_, 0);
lean_inc(v_value_5413_);
lean_dec_ref_known(v_path_5395_, 1);
v___x_5414_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5415_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5415_, 0, v_value_5413_);
lean_ctor_set(v___x_5415_, 1, v___x_5414_);
v___y_5400_ = v___x_5415_;
goto v___jp_5399_;
}
v___jp_5399_:
{
lean_object* v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; 
v___x_5401_ = lean_mk_empty_array_with_capacity(v___x_5397_);
v___x_5402_ = lean_array_push(v___x_5401_, v___y_5400_);
v___x_5403_ = l_Lasm_JS_Web_Support_args(v___x_5402_);
v___x_5404_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5398_, v___x_5403_);
return v___x_5404_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath___boxed(lean_object* v_path_5416_, lean_object* v_a_5417_){
_start:
{
lean_object* v_res_5418_; 
v_res_5418_ = l_Lasm_JS_Deno_realPath(v_path_5416_);
return v_res_5418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync(lean_object* v_path_5427_){
_start:
{
uint8_t v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___y_5433_; 
v___x_5429_ = 0;
v___x_5430_ = lean_unsigned_to_nat(1u);
v___x_5431_ = ((lean_object*)(l_Lasm_JS_Deno_realPathSync___closed__2));
if (lean_obj_tag(v_path_5427_) == 0)
{
lean_object* v_value_5438_; lean_object* v___x_5440_; uint8_t v_isShared_5441_; uint8_t v_isSharedCheck_5445_; 
v_value_5438_ = lean_ctor_get(v_path_5427_, 0);
v_isSharedCheck_5445_ = !lean_is_exclusive(v_path_5427_);
if (v_isSharedCheck_5445_ == 0)
{
v___x_5440_ = v_path_5427_;
v_isShared_5441_ = v_isSharedCheck_5445_;
goto v_resetjp_5439_;
}
else
{
lean_inc(v_value_5438_);
lean_dec(v_path_5427_);
v___x_5440_ = lean_box(0);
v_isShared_5441_ = v_isSharedCheck_5445_;
goto v_resetjp_5439_;
}
v_resetjp_5439_:
{
lean_object* v___x_5443_; 
if (v_isShared_5441_ == 0)
{
lean_ctor_set_tag(v___x_5440_, 4);
v___x_5443_ = v___x_5440_;
goto v_reusejp_5442_;
}
else
{
lean_object* v_reuseFailAlloc_5444_; 
v_reuseFailAlloc_5444_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5444_, 0, v_value_5438_);
v___x_5443_ = v_reuseFailAlloc_5444_;
goto v_reusejp_5442_;
}
v_reusejp_5442_:
{
v___y_5433_ = v___x_5443_;
goto v___jp_5432_;
}
}
}
else
{
lean_object* v_value_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; 
v_value_5446_ = lean_ctor_get(v_path_5427_, 0);
lean_inc(v_value_5446_);
lean_dec_ref_known(v_path_5427_, 1);
v___x_5447_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5448_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5448_, 0, v_value_5446_);
lean_ctor_set(v___x_5448_, 1, v___x_5447_);
v___y_5433_ = v___x_5448_;
goto v___jp_5432_;
}
v___jp_5432_:
{
lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; 
v___x_5434_ = lean_mk_empty_array_with_capacity(v___x_5430_);
v___x_5435_ = lean_array_push(v___x_5434_, v___y_5433_);
v___x_5436_ = l_Lasm_JS_Web_Support_args(v___x_5435_);
v___x_5437_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5431_, v___x_5436_, v___x_5429_);
return v___x_5437_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync___boxed(lean_object* v_path_5449_, lean_object* v_a_5450_){
_start:
{
lean_object* v_res_5451_; 
v_res_5451_ = l_Lasm_JS_Deno_realPathSync(v_path_5449_);
return v_res_5451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir(lean_object* v_path_5460_){
_start:
{
uint8_t v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___y_5466_; 
v___x_5462_ = 0;
v___x_5463_ = lean_unsigned_to_nat(1u);
v___x_5464_ = ((lean_object*)(l_Lasm_JS_Deno_readDir___closed__2));
if (lean_obj_tag(v_path_5460_) == 0)
{
lean_object* v_value_5487_; lean_object* v___x_5489_; uint8_t v_isShared_5490_; uint8_t v_isSharedCheck_5494_; 
v_value_5487_ = lean_ctor_get(v_path_5460_, 0);
v_isSharedCheck_5494_ = !lean_is_exclusive(v_path_5460_);
if (v_isSharedCheck_5494_ == 0)
{
v___x_5489_ = v_path_5460_;
v_isShared_5490_ = v_isSharedCheck_5494_;
goto v_resetjp_5488_;
}
else
{
lean_inc(v_value_5487_);
lean_dec(v_path_5460_);
v___x_5489_ = lean_box(0);
v_isShared_5490_ = v_isSharedCheck_5494_;
goto v_resetjp_5488_;
}
v_resetjp_5488_:
{
lean_object* v___x_5492_; 
if (v_isShared_5490_ == 0)
{
lean_ctor_set_tag(v___x_5489_, 4);
v___x_5492_ = v___x_5489_;
goto v_reusejp_5491_;
}
else
{
lean_object* v_reuseFailAlloc_5493_; 
v_reuseFailAlloc_5493_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5493_, 0, v_value_5487_);
v___x_5492_ = v_reuseFailAlloc_5493_;
goto v_reusejp_5491_;
}
v_reusejp_5491_:
{
v___y_5466_ = v___x_5492_;
goto v___jp_5465_;
}
}
}
else
{
lean_object* v_value_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; 
v_value_5495_ = lean_ctor_get(v_path_5460_, 0);
lean_inc(v_value_5495_);
lean_dec_ref_known(v_path_5460_, 1);
v___x_5496_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5497_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5497_, 0, v_value_5495_);
lean_ctor_set(v___x_5497_, 1, v___x_5496_);
v___y_5466_ = v___x_5497_;
goto v___jp_5465_;
}
v___jp_5465_:
{
lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; 
v___x_5467_ = lean_mk_empty_array_with_capacity(v___x_5463_);
v___x_5468_ = lean_array_push(v___x_5467_, v___y_5466_);
v___x_5469_ = l_Lasm_JS_Web_Support_args(v___x_5468_);
v___x_5470_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_5464_, v___x_5469_, v___x_5462_);
if (lean_obj_tag(v___x_5470_) == 0)
{
lean_object* v_a_5471_; lean_object* v___x_5473_; uint8_t v_isShared_5474_; uint8_t v_isSharedCheck_5478_; 
v_a_5471_ = lean_ctor_get(v___x_5470_, 0);
v_isSharedCheck_5478_ = !lean_is_exclusive(v___x_5470_);
if (v_isSharedCheck_5478_ == 0)
{
v___x_5473_ = v___x_5470_;
v_isShared_5474_ = v_isSharedCheck_5478_;
goto v_resetjp_5472_;
}
else
{
lean_inc(v_a_5471_);
lean_dec(v___x_5470_);
v___x_5473_ = lean_box(0);
v_isShared_5474_ = v_isSharedCheck_5478_;
goto v_resetjp_5472_;
}
v_resetjp_5472_:
{
lean_object* v___x_5476_; 
if (v_isShared_5474_ == 0)
{
v___x_5476_ = v___x_5473_;
goto v_reusejp_5475_;
}
else
{
lean_object* v_reuseFailAlloc_5477_; 
v_reuseFailAlloc_5477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5477_, 0, v_a_5471_);
v___x_5476_ = v_reuseFailAlloc_5477_;
goto v_reusejp_5475_;
}
v_reusejp_5475_:
{
return v___x_5476_;
}
}
}
else
{
lean_object* v_a_5479_; lean_object* v___x_5481_; uint8_t v_isShared_5482_; uint8_t v_isSharedCheck_5486_; 
v_a_5479_ = lean_ctor_get(v___x_5470_, 0);
v_isSharedCheck_5486_ = !lean_is_exclusive(v___x_5470_);
if (v_isSharedCheck_5486_ == 0)
{
v___x_5481_ = v___x_5470_;
v_isShared_5482_ = v_isSharedCheck_5486_;
goto v_resetjp_5480_;
}
else
{
lean_inc(v_a_5479_);
lean_dec(v___x_5470_);
v___x_5481_ = lean_box(0);
v_isShared_5482_ = v_isSharedCheck_5486_;
goto v_resetjp_5480_;
}
v_resetjp_5480_:
{
lean_object* v___x_5484_; 
if (v_isShared_5482_ == 0)
{
v___x_5484_ = v___x_5481_;
goto v_reusejp_5483_;
}
else
{
lean_object* v_reuseFailAlloc_5485_; 
v_reuseFailAlloc_5485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5485_, 0, v_a_5479_);
v___x_5484_ = v_reuseFailAlloc_5485_;
goto v_reusejp_5483_;
}
v_reusejp_5483_:
{
return v___x_5484_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir___boxed(lean_object* v_path_5498_, lean_object* v_a_5499_){
_start:
{
lean_object* v_res_5500_; 
v_res_5500_ = l_Lasm_JS_Deno_readDir(v_path_5498_);
return v_res_5500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile(lean_object* v_fromPath_5509_, lean_object* v_toPath_5510_){
_start:
{
lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___y_5515_; lean_object* v___y_5516_; lean_object* v___y_5523_; 
v___x_5512_ = lean_unsigned_to_nat(2u);
v___x_5513_ = ((lean_object*)(l_Lasm_JS_Deno_copyFile___closed__2));
if (lean_obj_tag(v_fromPath_5509_) == 0)
{
lean_object* v_value_5535_; lean_object* v___x_5537_; uint8_t v_isShared_5538_; uint8_t v_isSharedCheck_5542_; 
v_value_5535_ = lean_ctor_get(v_fromPath_5509_, 0);
v_isSharedCheck_5542_ = !lean_is_exclusive(v_fromPath_5509_);
if (v_isSharedCheck_5542_ == 0)
{
v___x_5537_ = v_fromPath_5509_;
v_isShared_5538_ = v_isSharedCheck_5542_;
goto v_resetjp_5536_;
}
else
{
lean_inc(v_value_5535_);
lean_dec(v_fromPath_5509_);
v___x_5537_ = lean_box(0);
v_isShared_5538_ = v_isSharedCheck_5542_;
goto v_resetjp_5536_;
}
v_resetjp_5536_:
{
lean_object* v___x_5540_; 
if (v_isShared_5538_ == 0)
{
lean_ctor_set_tag(v___x_5537_, 4);
v___x_5540_ = v___x_5537_;
goto v_reusejp_5539_;
}
else
{
lean_object* v_reuseFailAlloc_5541_; 
v_reuseFailAlloc_5541_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5541_, 0, v_value_5535_);
v___x_5540_ = v_reuseFailAlloc_5541_;
goto v_reusejp_5539_;
}
v_reusejp_5539_:
{
v___y_5523_ = v___x_5540_;
goto v___jp_5522_;
}
}
}
else
{
lean_object* v_value_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; 
v_value_5543_ = lean_ctor_get(v_fromPath_5509_, 0);
lean_inc(v_value_5543_);
lean_dec_ref_known(v_fromPath_5509_, 1);
v___x_5544_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5545_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5545_, 0, v_value_5543_);
lean_ctor_set(v___x_5545_, 1, v___x_5544_);
v___y_5523_ = v___x_5545_;
goto v___jp_5522_;
}
v___jp_5514_:
{
lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; 
v___x_5517_ = lean_mk_empty_array_with_capacity(v___x_5512_);
v___x_5518_ = lean_array_push(v___x_5517_, v___y_5515_);
v___x_5519_ = lean_array_push(v___x_5518_, v___y_5516_);
v___x_5520_ = l_Lasm_JS_Web_Support_args(v___x_5519_);
v___x_5521_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5513_, v___x_5520_);
return v___x_5521_;
}
v___jp_5522_:
{
if (lean_obj_tag(v_toPath_5510_) == 0)
{
lean_object* v_value_5524_; lean_object* v___x_5526_; uint8_t v_isShared_5527_; uint8_t v_isSharedCheck_5531_; 
v_value_5524_ = lean_ctor_get(v_toPath_5510_, 0);
v_isSharedCheck_5531_ = !lean_is_exclusive(v_toPath_5510_);
if (v_isSharedCheck_5531_ == 0)
{
v___x_5526_ = v_toPath_5510_;
v_isShared_5527_ = v_isSharedCheck_5531_;
goto v_resetjp_5525_;
}
else
{
lean_inc(v_value_5524_);
lean_dec(v_toPath_5510_);
v___x_5526_ = lean_box(0);
v_isShared_5527_ = v_isSharedCheck_5531_;
goto v_resetjp_5525_;
}
v_resetjp_5525_:
{
lean_object* v___x_5529_; 
if (v_isShared_5527_ == 0)
{
lean_ctor_set_tag(v___x_5526_, 4);
v___x_5529_ = v___x_5526_;
goto v_reusejp_5528_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v_value_5524_);
v___x_5529_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5528_;
}
v_reusejp_5528_:
{
v___y_5515_ = v___y_5523_;
v___y_5516_ = v___x_5529_;
goto v___jp_5514_;
}
}
}
else
{
lean_object* v_value_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; 
v_value_5532_ = lean_ctor_get(v_toPath_5510_, 0);
lean_inc(v_value_5532_);
lean_dec_ref_known(v_toPath_5510_, 1);
v___x_5533_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5534_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5534_, 0, v_value_5532_);
lean_ctor_set(v___x_5534_, 1, v___x_5533_);
v___y_5515_ = v___y_5523_;
v___y_5516_ = v___x_5534_;
goto v___jp_5514_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile___boxed(lean_object* v_fromPath_5546_, lean_object* v_toPath_5547_, lean_object* v_a_5548_){
_start:
{
lean_object* v_res_5549_; 
v_res_5549_ = l_Lasm_JS_Deno_copyFile(v_fromPath_5546_, v_toPath_5547_);
return v_res_5549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync(lean_object* v_fromPath_5558_, lean_object* v_toPath_5559_){
_start:
{
uint8_t v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___y_5565_; lean_object* v___y_5566_; lean_object* v___y_5573_; 
v___x_5561_ = 0;
v___x_5562_ = lean_unsigned_to_nat(2u);
v___x_5563_ = ((lean_object*)(l_Lasm_JS_Deno_copyFileSync___closed__2));
if (lean_obj_tag(v_fromPath_5558_) == 0)
{
lean_object* v_value_5585_; lean_object* v___x_5587_; uint8_t v_isShared_5588_; uint8_t v_isSharedCheck_5592_; 
v_value_5585_ = lean_ctor_get(v_fromPath_5558_, 0);
v_isSharedCheck_5592_ = !lean_is_exclusive(v_fromPath_5558_);
if (v_isSharedCheck_5592_ == 0)
{
v___x_5587_ = v_fromPath_5558_;
v_isShared_5588_ = v_isSharedCheck_5592_;
goto v_resetjp_5586_;
}
else
{
lean_inc(v_value_5585_);
lean_dec(v_fromPath_5558_);
v___x_5587_ = lean_box(0);
v_isShared_5588_ = v_isSharedCheck_5592_;
goto v_resetjp_5586_;
}
v_resetjp_5586_:
{
lean_object* v___x_5590_; 
if (v_isShared_5588_ == 0)
{
lean_ctor_set_tag(v___x_5587_, 4);
v___x_5590_ = v___x_5587_;
goto v_reusejp_5589_;
}
else
{
lean_object* v_reuseFailAlloc_5591_; 
v_reuseFailAlloc_5591_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5591_, 0, v_value_5585_);
v___x_5590_ = v_reuseFailAlloc_5591_;
goto v_reusejp_5589_;
}
v_reusejp_5589_:
{
v___y_5573_ = v___x_5590_;
goto v___jp_5572_;
}
}
}
else
{
lean_object* v_value_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; 
v_value_5593_ = lean_ctor_get(v_fromPath_5558_, 0);
lean_inc(v_value_5593_);
lean_dec_ref_known(v_fromPath_5558_, 1);
v___x_5594_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5595_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5595_, 0, v_value_5593_);
lean_ctor_set(v___x_5595_, 1, v___x_5594_);
v___y_5573_ = v___x_5595_;
goto v___jp_5572_;
}
v___jp_5564_:
{
lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; 
v___x_5567_ = lean_mk_empty_array_with_capacity(v___x_5562_);
v___x_5568_ = lean_array_push(v___x_5567_, v___y_5565_);
v___x_5569_ = lean_array_push(v___x_5568_, v___y_5566_);
v___x_5570_ = l_Lasm_JS_Web_Support_args(v___x_5569_);
v___x_5571_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5563_, v___x_5570_, v___x_5561_);
return v___x_5571_;
}
v___jp_5572_:
{
if (lean_obj_tag(v_toPath_5559_) == 0)
{
lean_object* v_value_5574_; lean_object* v___x_5576_; uint8_t v_isShared_5577_; uint8_t v_isSharedCheck_5581_; 
v_value_5574_ = lean_ctor_get(v_toPath_5559_, 0);
v_isSharedCheck_5581_ = !lean_is_exclusive(v_toPath_5559_);
if (v_isSharedCheck_5581_ == 0)
{
v___x_5576_ = v_toPath_5559_;
v_isShared_5577_ = v_isSharedCheck_5581_;
goto v_resetjp_5575_;
}
else
{
lean_inc(v_value_5574_);
lean_dec(v_toPath_5559_);
v___x_5576_ = lean_box(0);
v_isShared_5577_ = v_isSharedCheck_5581_;
goto v_resetjp_5575_;
}
v_resetjp_5575_:
{
lean_object* v___x_5579_; 
if (v_isShared_5577_ == 0)
{
lean_ctor_set_tag(v___x_5576_, 4);
v___x_5579_ = v___x_5576_;
goto v_reusejp_5578_;
}
else
{
lean_object* v_reuseFailAlloc_5580_; 
v_reuseFailAlloc_5580_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5580_, 0, v_value_5574_);
v___x_5579_ = v_reuseFailAlloc_5580_;
goto v_reusejp_5578_;
}
v_reusejp_5578_:
{
v___y_5565_ = v___y_5573_;
v___y_5566_ = v___x_5579_;
goto v___jp_5564_;
}
}
}
else
{
lean_object* v_value_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; 
v_value_5582_ = lean_ctor_get(v_toPath_5559_, 0);
lean_inc(v_value_5582_);
lean_dec_ref_known(v_toPath_5559_, 1);
v___x_5583_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5584_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5584_, 0, v_value_5582_);
lean_ctor_set(v___x_5584_, 1, v___x_5583_);
v___y_5565_ = v___y_5573_;
v___y_5566_ = v___x_5584_;
goto v___jp_5564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync___boxed(lean_object* v_fromPath_5596_, lean_object* v_toPath_5597_, lean_object* v_a_5598_){
_start:
{
lean_object* v_res_5599_; 
v_res_5599_ = l_Lasm_JS_Deno_copyFileSync(v_fromPath_5596_, v_toPath_5597_);
return v_res_5599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink(lean_object* v_path_5608_){
_start:
{
lean_object* v___x_5610_; lean_object* v___x_5611_; lean_object* v___y_5613_; 
v___x_5610_ = lean_unsigned_to_nat(1u);
v___x_5611_ = ((lean_object*)(l_Lasm_JS_Deno_readLink___closed__2));
if (lean_obj_tag(v_path_5608_) == 0)
{
lean_object* v_value_5618_; lean_object* v___x_5620_; uint8_t v_isShared_5621_; uint8_t v_isSharedCheck_5625_; 
v_value_5618_ = lean_ctor_get(v_path_5608_, 0);
v_isSharedCheck_5625_ = !lean_is_exclusive(v_path_5608_);
if (v_isSharedCheck_5625_ == 0)
{
v___x_5620_ = v_path_5608_;
v_isShared_5621_ = v_isSharedCheck_5625_;
goto v_resetjp_5619_;
}
else
{
lean_inc(v_value_5618_);
lean_dec(v_path_5608_);
v___x_5620_ = lean_box(0);
v_isShared_5621_ = v_isSharedCheck_5625_;
goto v_resetjp_5619_;
}
v_resetjp_5619_:
{
lean_object* v___x_5623_; 
if (v_isShared_5621_ == 0)
{
lean_ctor_set_tag(v___x_5620_, 4);
v___x_5623_ = v___x_5620_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v_value_5618_);
v___x_5623_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
v___y_5613_ = v___x_5623_;
goto v___jp_5612_;
}
}
}
else
{
lean_object* v_value_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; 
v_value_5626_ = lean_ctor_get(v_path_5608_, 0);
lean_inc(v_value_5626_);
lean_dec_ref_known(v_path_5608_, 1);
v___x_5627_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5628_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5628_, 0, v_value_5626_);
lean_ctor_set(v___x_5628_, 1, v___x_5627_);
v___y_5613_ = v___x_5628_;
goto v___jp_5612_;
}
v___jp_5612_:
{
lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; 
v___x_5614_ = lean_mk_empty_array_with_capacity(v___x_5610_);
v___x_5615_ = lean_array_push(v___x_5614_, v___y_5613_);
v___x_5616_ = l_Lasm_JS_Web_Support_args(v___x_5615_);
v___x_5617_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5611_, v___x_5616_);
return v___x_5617_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink___boxed(lean_object* v_path_5629_, lean_object* v_a_5630_){
_start:
{
lean_object* v_res_5631_; 
v_res_5631_ = l_Lasm_JS_Deno_readLink(v_path_5629_);
return v_res_5631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync(lean_object* v_path_5640_){
_start:
{
uint8_t v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___y_5646_; 
v___x_5642_ = 0;
v___x_5643_ = lean_unsigned_to_nat(1u);
v___x_5644_ = ((lean_object*)(l_Lasm_JS_Deno_readLinkSync___closed__2));
if (lean_obj_tag(v_path_5640_) == 0)
{
lean_object* v_value_5651_; lean_object* v___x_5653_; uint8_t v_isShared_5654_; uint8_t v_isSharedCheck_5658_; 
v_value_5651_ = lean_ctor_get(v_path_5640_, 0);
v_isSharedCheck_5658_ = !lean_is_exclusive(v_path_5640_);
if (v_isSharedCheck_5658_ == 0)
{
v___x_5653_ = v_path_5640_;
v_isShared_5654_ = v_isSharedCheck_5658_;
goto v_resetjp_5652_;
}
else
{
lean_inc(v_value_5651_);
lean_dec(v_path_5640_);
v___x_5653_ = lean_box(0);
v_isShared_5654_ = v_isSharedCheck_5658_;
goto v_resetjp_5652_;
}
v_resetjp_5652_:
{
lean_object* v___x_5656_; 
if (v_isShared_5654_ == 0)
{
lean_ctor_set_tag(v___x_5653_, 4);
v___x_5656_ = v___x_5653_;
goto v_reusejp_5655_;
}
else
{
lean_object* v_reuseFailAlloc_5657_; 
v_reuseFailAlloc_5657_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5657_, 0, v_value_5651_);
v___x_5656_ = v_reuseFailAlloc_5657_;
goto v_reusejp_5655_;
}
v_reusejp_5655_:
{
v___y_5646_ = v___x_5656_;
goto v___jp_5645_;
}
}
}
else
{
lean_object* v_value_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; 
v_value_5659_ = lean_ctor_get(v_path_5640_, 0);
lean_inc(v_value_5659_);
lean_dec_ref_known(v_path_5640_, 1);
v___x_5660_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5661_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5661_, 0, v_value_5659_);
lean_ctor_set(v___x_5661_, 1, v___x_5660_);
v___y_5646_ = v___x_5661_;
goto v___jp_5645_;
}
v___jp_5645_:
{
lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; 
v___x_5647_ = lean_mk_empty_array_with_capacity(v___x_5643_);
v___x_5648_ = lean_array_push(v___x_5647_, v___y_5646_);
v___x_5649_ = l_Lasm_JS_Web_Support_args(v___x_5648_);
v___x_5650_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5644_, v___x_5649_, v___x_5642_);
return v___x_5650_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync___boxed(lean_object* v_path_5662_, lean_object* v_a_5663_){
_start:
{
lean_object* v_res_5664_; 
v_res_5664_ = l_Lasm_JS_Deno_readLinkSync(v_path_5662_);
return v_res_5664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(lean_object* v_b_5665_, lean_object* v_args_5666_){
_start:
{
uint8_t v_construct_5668_; lean_object* v___x_5669_; uint32_t v___x_5670_; uint64_t v___x_5671_; uint64_t v___y_5673_; 
v_construct_5668_ = lean_ctor_get_uint8(v_b_5665_, sizeof(void*)*4);
v___x_5669_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5665_);
v___x_5670_ = 214;
v___x_5671_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5668_ == 0)
{
uint64_t v___x_5681_; 
v___x_5681_ = 0ULL;
v___y_5673_ = v___x_5681_;
goto v___jp_5672_;
}
else
{
uint64_t v___x_5682_; 
v___x_5682_ = 4ULL;
v___y_5673_ = v___x_5682_;
goto v___jp_5672_;
}
v___jp_5672_:
{
uint64_t v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; 
v___x_5674_ = lean_uint64_lor(v___x_5671_, v___y_5673_);
v___x_5675_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5665_, v_args_5666_);
v___x_5676_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5677_ = lean_string_append(v___x_5676_, v___x_5669_);
v___x_5678_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5679_ = lean_string_append(v___x_5677_, v___x_5678_);
v___x_5680_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v___x_5669_, v___x_5670_, v___x_5674_, v___x_5675_, v___x_5679_);
return v___x_5680_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0___boxed(lean_object* v_b_5683_, lean_object* v_args_5684_, lean_object* v_a_5685_){
_start:
{
lean_object* v_res_5686_; 
v_res_5686_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v_b_5683_, v_args_5684_);
lean_dec_ref(v_b_5683_);
return v_res_5686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat(lean_object* v_path_5695_){
_start:
{
lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v___y_5700_; 
v___x_5697_ = lean_unsigned_to_nat(1u);
v___x_5698_ = ((lean_object*)(l_Lasm_JS_Deno_lstat___closed__2));
if (lean_obj_tag(v_path_5695_) == 0)
{
lean_object* v_value_5705_; lean_object* v___x_5707_; uint8_t v_isShared_5708_; uint8_t v_isSharedCheck_5712_; 
v_value_5705_ = lean_ctor_get(v_path_5695_, 0);
v_isSharedCheck_5712_ = !lean_is_exclusive(v_path_5695_);
if (v_isSharedCheck_5712_ == 0)
{
v___x_5707_ = v_path_5695_;
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
else
{
lean_inc(v_value_5705_);
lean_dec(v_path_5695_);
v___x_5707_ = lean_box(0);
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
v_resetjp_5706_:
{
lean_object* v___x_5710_; 
if (v_isShared_5708_ == 0)
{
lean_ctor_set_tag(v___x_5707_, 4);
v___x_5710_ = v___x_5707_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5711_; 
v_reuseFailAlloc_5711_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5711_, 0, v_value_5705_);
v___x_5710_ = v_reuseFailAlloc_5711_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
v___y_5700_ = v___x_5710_;
goto v___jp_5699_;
}
}
}
else
{
lean_object* v_value_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; 
v_value_5713_ = lean_ctor_get(v_path_5695_, 0);
lean_inc(v_value_5713_);
lean_dec_ref_known(v_path_5695_, 1);
v___x_5714_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5715_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5715_, 0, v_value_5713_);
lean_ctor_set(v___x_5715_, 1, v___x_5714_);
v___y_5700_ = v___x_5715_;
goto v___jp_5699_;
}
v___jp_5699_:
{
lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; 
v___x_5701_ = lean_mk_empty_array_with_capacity(v___x_5697_);
v___x_5702_ = lean_array_push(v___x_5701_, v___y_5700_);
v___x_5703_ = l_Lasm_JS_Web_Support_args(v___x_5702_);
v___x_5704_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5698_, v___x_5703_);
return v___x_5704_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat___boxed(lean_object* v_path_5716_, lean_object* v_a_5717_){
_start:
{
lean_object* v_res_5718_; 
v_res_5718_ = l_Lasm_JS_Deno_lstat(v_path_5716_);
return v_res_5718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(lean_object* v_b_5719_, lean_object* v_args_5720_, uint8_t v_await_5721_){
_start:
{
uint64_t v___y_5724_; uint64_t v___y_5725_; uint64_t v___x_5768_; uint64_t v___y_5770_; 
v___x_5768_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_5721_ == 0)
{
uint64_t v___x_5775_; 
v___x_5775_ = 0ULL;
v___y_5770_ = v___x_5775_;
goto v___jp_5769_;
}
else
{
uint64_t v___x_5776_; 
v___x_5776_ = 2ULL;
v___y_5770_ = v___x_5776_;
goto v___jp_5769_;
}
v___jp_5723_:
{
uint64_t v_flags_5726_; uint32_t v___x_5727_; lean_object* v___x_5728_; uint32_t v___x_5729_; lean_object* v___x_5730_; 
v_flags_5726_ = lean_uint64_lor(v___y_5724_, v___y_5725_);
v___x_5727_ = 214;
v___x_5728_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5719_, v_args_5720_);
v___x_5729_ = 0;
v___x_5730_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5727_, v_flags_5726_, v___x_5728_, v___x_5729_);
lean_dec(v___x_5728_);
if (lean_obj_tag(v___x_5730_) == 0)
{
if (lean_obj_tag(v___x_5730_) == 0)
{
lean_object* v_a_5731_; lean_object* v___x_5732_; 
v_a_5731_ = lean_ctor_get(v___x_5730_, 0);
lean_inc(v_a_5731_);
lean_dec_ref_known(v___x_5730_, 1);
v___x_5732_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5731_);
lean_dec(v_a_5731_);
if (lean_obj_tag(v___x_5732_) == 0)
{
lean_object* v_a_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; 
v_a_5733_ = lean_ctor_get(v___x_5732_, 0);
lean_inc(v_a_5733_);
lean_dec_ref_known(v___x_5732_, 1);
v___x_5734_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5719_);
v___x_5735_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v___x_5734_, v_a_5733_);
lean_dec_ref(v___x_5734_);
return v___x_5735_;
}
else
{
lean_object* v_a_5736_; lean_object* v___x_5738_; uint8_t v_isShared_5739_; uint8_t v_isSharedCheck_5743_; 
v_a_5736_ = lean_ctor_get(v___x_5732_, 0);
v_isSharedCheck_5743_ = !lean_is_exclusive(v___x_5732_);
if (v_isSharedCheck_5743_ == 0)
{
v___x_5738_ = v___x_5732_;
v_isShared_5739_ = v_isSharedCheck_5743_;
goto v_resetjp_5737_;
}
else
{
lean_inc(v_a_5736_);
lean_dec(v___x_5732_);
v___x_5738_ = lean_box(0);
v_isShared_5739_ = v_isSharedCheck_5743_;
goto v_resetjp_5737_;
}
v_resetjp_5737_:
{
lean_object* v___x_5741_; 
if (v_isShared_5739_ == 0)
{
v___x_5741_ = v___x_5738_;
goto v_reusejp_5740_;
}
else
{
lean_object* v_reuseFailAlloc_5742_; 
v_reuseFailAlloc_5742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5742_, 0, v_a_5736_);
v___x_5741_ = v_reuseFailAlloc_5742_;
goto v_reusejp_5740_;
}
v_reusejp_5740_:
{
return v___x_5741_;
}
}
}
}
else
{
lean_object* v_a_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5751_; 
v_a_5744_ = lean_ctor_get(v___x_5730_, 0);
v_isSharedCheck_5751_ = !lean_is_exclusive(v___x_5730_);
if (v_isSharedCheck_5751_ == 0)
{
v___x_5746_ = v___x_5730_;
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_a_5744_);
lean_dec(v___x_5730_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___x_5749_; 
if (v_isShared_5747_ == 0)
{
lean_ctor_set_tag(v___x_5746_, 1);
v___x_5749_ = v___x_5746_;
goto v_reusejp_5748_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_a_5744_);
v___x_5749_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5748_;
}
v_reusejp_5748_:
{
return v___x_5749_;
}
}
}
}
else
{
lean_object* v_a_5752_; lean_object* v___x_5754_; uint8_t v_isShared_5755_; uint8_t v_isSharedCheck_5767_; 
v_a_5752_ = lean_ctor_get(v___x_5730_, 0);
v_isSharedCheck_5767_ = !lean_is_exclusive(v___x_5730_);
if (v_isSharedCheck_5767_ == 0)
{
v___x_5754_ = v___x_5730_;
v_isShared_5755_ = v_isSharedCheck_5767_;
goto v_resetjp_5753_;
}
else
{
lean_inc(v_a_5752_);
lean_dec(v___x_5730_);
v___x_5754_ = lean_box(0);
v_isShared_5755_ = v_isSharedCheck_5767_;
goto v_resetjp_5753_;
}
v_resetjp_5753_:
{
lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5765_; 
v___x_5756_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5757_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5719_);
v___x_5758_ = lean_string_append(v___x_5756_, v___x_5757_);
lean_dec_ref(v___x_5757_);
v___x_5759_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5760_ = lean_string_append(v___x_5758_, v___x_5759_);
v___x_5761_ = lean_io_error_to_string(v_a_5752_);
v___x_5762_ = lean_string_append(v___x_5760_, v___x_5761_);
lean_dec_ref(v___x_5761_);
v___x_5763_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5763_, 0, v___x_5762_);
if (v_isShared_5755_ == 0)
{
lean_ctor_set(v___x_5754_, 0, v___x_5763_);
v___x_5765_ = v___x_5754_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5766_; 
v_reuseFailAlloc_5766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5766_, 0, v___x_5763_);
v___x_5765_ = v_reuseFailAlloc_5766_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
return v___x_5765_;
}
}
}
}
v___jp_5769_:
{
uint8_t v_construct_5771_; uint64_t v___x_5772_; 
v_construct_5771_ = lean_ctor_get_uint8(v_b_5719_, sizeof(void*)*4);
v___x_5772_ = lean_uint64_lor(v___x_5768_, v___y_5770_);
if (v_construct_5771_ == 0)
{
uint64_t v___x_5773_; 
v___x_5773_ = 0ULL;
v___y_5724_ = v___x_5772_;
v___y_5725_ = v___x_5773_;
goto v___jp_5723_;
}
else
{
uint64_t v___x_5774_; 
v___x_5774_ = 4ULL;
v___y_5724_ = v___x_5772_;
v___y_5725_ = v___x_5774_;
goto v___jp_5723_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0___boxed(lean_object* v_b_5777_, lean_object* v_args_5778_, lean_object* v_await_5779_, lean_object* v_a_5780_){
_start:
{
uint8_t v_await_boxed_5781_; lean_object* v_res_5782_; 
v_await_boxed_5781_ = lean_unbox(v_await_5779_);
v_res_5782_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v_b_5777_, v_args_5778_, v_await_boxed_5781_);
lean_dec_ref(v_b_5777_);
return v_res_5782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync(lean_object* v_path_5791_){
_start:
{
uint8_t v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___y_5797_; 
v___x_5793_ = 0;
v___x_5794_ = lean_unsigned_to_nat(1u);
v___x_5795_ = ((lean_object*)(l_Lasm_JS_Deno_lstatSync___closed__2));
if (lean_obj_tag(v_path_5791_) == 0)
{
lean_object* v_value_5802_; lean_object* v___x_5804_; uint8_t v_isShared_5805_; uint8_t v_isSharedCheck_5809_; 
v_value_5802_ = lean_ctor_get(v_path_5791_, 0);
v_isSharedCheck_5809_ = !lean_is_exclusive(v_path_5791_);
if (v_isSharedCheck_5809_ == 0)
{
v___x_5804_ = v_path_5791_;
v_isShared_5805_ = v_isSharedCheck_5809_;
goto v_resetjp_5803_;
}
else
{
lean_inc(v_value_5802_);
lean_dec(v_path_5791_);
v___x_5804_ = lean_box(0);
v_isShared_5805_ = v_isSharedCheck_5809_;
goto v_resetjp_5803_;
}
v_resetjp_5803_:
{
lean_object* v___x_5807_; 
if (v_isShared_5805_ == 0)
{
lean_ctor_set_tag(v___x_5804_, 4);
v___x_5807_ = v___x_5804_;
goto v_reusejp_5806_;
}
else
{
lean_object* v_reuseFailAlloc_5808_; 
v_reuseFailAlloc_5808_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5808_, 0, v_value_5802_);
v___x_5807_ = v_reuseFailAlloc_5808_;
goto v_reusejp_5806_;
}
v_reusejp_5806_:
{
v___y_5797_ = v___x_5807_;
goto v___jp_5796_;
}
}
}
else
{
lean_object* v_value_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; 
v_value_5810_ = lean_ctor_get(v_path_5791_, 0);
lean_inc(v_value_5810_);
lean_dec_ref_known(v_path_5791_, 1);
v___x_5811_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5812_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5812_, 0, v_value_5810_);
lean_ctor_set(v___x_5812_, 1, v___x_5811_);
v___y_5797_ = v___x_5812_;
goto v___jp_5796_;
}
v___jp_5796_:
{
lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; 
v___x_5798_ = lean_mk_empty_array_with_capacity(v___x_5794_);
v___x_5799_ = lean_array_push(v___x_5798_, v___y_5797_);
v___x_5800_ = l_Lasm_JS_Web_Support_args(v___x_5799_);
v___x_5801_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5795_, v___x_5800_, v___x_5793_);
return v___x_5801_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync___boxed(lean_object* v_path_5813_, lean_object* v_a_5814_){
_start:
{
lean_object* v_res_5815_; 
v_res_5815_ = l_Lasm_JS_Deno_lstatSync(v_path_5813_);
return v_res_5815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat(lean_object* v_path_5824_){
_start:
{
lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___y_5829_; 
v___x_5826_ = lean_unsigned_to_nat(1u);
v___x_5827_ = ((lean_object*)(l_Lasm_JS_Deno_stat___closed__2));
if (lean_obj_tag(v_path_5824_) == 0)
{
lean_object* v_value_5834_; lean_object* v___x_5836_; uint8_t v_isShared_5837_; uint8_t v_isSharedCheck_5841_; 
v_value_5834_ = lean_ctor_get(v_path_5824_, 0);
v_isSharedCheck_5841_ = !lean_is_exclusive(v_path_5824_);
if (v_isSharedCheck_5841_ == 0)
{
v___x_5836_ = v_path_5824_;
v_isShared_5837_ = v_isSharedCheck_5841_;
goto v_resetjp_5835_;
}
else
{
lean_inc(v_value_5834_);
lean_dec(v_path_5824_);
v___x_5836_ = lean_box(0);
v_isShared_5837_ = v_isSharedCheck_5841_;
goto v_resetjp_5835_;
}
v_resetjp_5835_:
{
lean_object* v___x_5839_; 
if (v_isShared_5837_ == 0)
{
lean_ctor_set_tag(v___x_5836_, 4);
v___x_5839_ = v___x_5836_;
goto v_reusejp_5838_;
}
else
{
lean_object* v_reuseFailAlloc_5840_; 
v_reuseFailAlloc_5840_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5840_, 0, v_value_5834_);
v___x_5839_ = v_reuseFailAlloc_5840_;
goto v_reusejp_5838_;
}
v_reusejp_5838_:
{
v___y_5829_ = v___x_5839_;
goto v___jp_5828_;
}
}
}
else
{
lean_object* v_value_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; 
v_value_5842_ = lean_ctor_get(v_path_5824_, 0);
lean_inc(v_value_5842_);
lean_dec_ref_known(v_path_5824_, 1);
v___x_5843_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5844_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5844_, 0, v_value_5842_);
lean_ctor_set(v___x_5844_, 1, v___x_5843_);
v___y_5829_ = v___x_5844_;
goto v___jp_5828_;
}
v___jp_5828_:
{
lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; 
v___x_5830_ = lean_mk_empty_array_with_capacity(v___x_5826_);
v___x_5831_ = lean_array_push(v___x_5830_, v___y_5829_);
v___x_5832_ = l_Lasm_JS_Web_Support_args(v___x_5831_);
v___x_5833_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5827_, v___x_5832_);
return v___x_5833_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat___boxed(lean_object* v_path_5845_, lean_object* v_a_5846_){
_start:
{
lean_object* v_res_5847_; 
v_res_5847_ = l_Lasm_JS_Deno_stat(v_path_5845_);
return v_res_5847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync(lean_object* v_path_5856_){
_start:
{
uint8_t v___x_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___y_5862_; 
v___x_5858_ = 0;
v___x_5859_ = lean_unsigned_to_nat(1u);
v___x_5860_ = ((lean_object*)(l_Lasm_JS_Deno_statSync___closed__2));
if (lean_obj_tag(v_path_5856_) == 0)
{
lean_object* v_value_5867_; lean_object* v___x_5869_; uint8_t v_isShared_5870_; uint8_t v_isSharedCheck_5874_; 
v_value_5867_ = lean_ctor_get(v_path_5856_, 0);
v_isSharedCheck_5874_ = !lean_is_exclusive(v_path_5856_);
if (v_isSharedCheck_5874_ == 0)
{
v___x_5869_ = v_path_5856_;
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
else
{
lean_inc(v_value_5867_);
lean_dec(v_path_5856_);
v___x_5869_ = lean_box(0);
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
v_resetjp_5868_:
{
lean_object* v___x_5872_; 
if (v_isShared_5870_ == 0)
{
lean_ctor_set_tag(v___x_5869_, 4);
v___x_5872_ = v___x_5869_;
goto v_reusejp_5871_;
}
else
{
lean_object* v_reuseFailAlloc_5873_; 
v_reuseFailAlloc_5873_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5873_, 0, v_value_5867_);
v___x_5872_ = v_reuseFailAlloc_5873_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
v___y_5862_ = v___x_5872_;
goto v___jp_5861_;
}
}
}
else
{
lean_object* v_value_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; 
v_value_5875_ = lean_ctor_get(v_path_5856_, 0);
lean_inc(v_value_5875_);
lean_dec_ref_known(v_path_5856_, 1);
v___x_5876_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5877_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5877_, 0, v_value_5875_);
lean_ctor_set(v___x_5877_, 1, v___x_5876_);
v___y_5862_ = v___x_5877_;
goto v___jp_5861_;
}
v___jp_5861_:
{
lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; lean_object* v___x_5866_; 
v___x_5863_ = lean_mk_empty_array_with_capacity(v___x_5859_);
v___x_5864_ = lean_array_push(v___x_5863_, v___y_5862_);
v___x_5865_ = l_Lasm_JS_Web_Support_args(v___x_5864_);
v___x_5866_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5860_, v___x_5865_, v___x_5858_);
return v___x_5866_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync___boxed(lean_object* v_path_5878_, lean_object* v_a_5879_){
_start:
{
lean_object* v_res_5880_; 
v_res_5880_ = l_Lasm_JS_Deno_statSync(v_path_5878_);
return v_res_5880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(lean_object* v_x_5881_){
_start:
{
if (lean_obj_tag(v_x_5881_) == 0)
{
lean_object* v___x_5882_; 
v___x_5882_ = lean_box(0);
return v___x_5882_;
}
else
{
lean_object* v_val_5883_; lean_object* v_append_5884_; lean_object* v_create_5885_; lean_object* v_createNew_5886_; lean_object* v_mode_5887_; lean_object* v_signal_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; 
v_val_5883_ = lean_ctor_get(v_x_5881_, 0);
v_append_5884_ = lean_ctor_get(v_val_5883_, 0);
v_create_5885_ = lean_ctor_get(v_val_5883_, 1);
v_createNew_5886_ = lean_ctor_get(v_val_5883_, 2);
v_mode_5887_ = lean_ctor_get(v_val_5883_, 3);
v_signal_5888_ = lean_ctor_get(v_val_5883_, 4);
v___x_5889_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_5890_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_5884_);
v___x_5891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5891_, 0, v___x_5889_);
lean_ctor_set(v___x_5891_, 1, v___x_5890_);
v___x_5892_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_5893_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_5885_);
v___x_5894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5892_);
lean_ctor_set(v___x_5894_, 1, v___x_5893_);
v___x_5895_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_5896_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_5886_);
v___x_5897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5897_, 0, v___x_5895_);
lean_ctor_set(v___x_5897_, 1, v___x_5896_);
v___x_5898_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_5899_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_5887_);
v___x_5900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5900_, 0, v___x_5898_);
lean_ctor_set(v___x_5900_, 1, v___x_5899_);
v___x_5901_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5902_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_5888_);
v___x_5903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5903_, 0, v___x_5901_);
lean_ctor_set(v___x_5903_, 1, v___x_5902_);
v___x_5904_ = lean_unsigned_to_nat(5u);
v___x_5905_ = lean_mk_empty_array_with_capacity(v___x_5904_);
v___x_5906_ = lean_array_push(v___x_5905_, v___x_5891_);
v___x_5907_ = lean_array_push(v___x_5906_, v___x_5894_);
v___x_5908_ = lean_array_push(v___x_5907_, v___x_5897_);
v___x_5909_ = lean_array_push(v___x_5908_, v___x_5900_);
v___x_5910_ = lean_array_push(v___x_5909_, v___x_5903_);
v___x_5911_ = l_Lasm_JS_Web_Support_fields(v___x_5910_);
lean_dec_ref(v___x_5910_);
return v___x_5911_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0___boxed(lean_object* v_x_5912_){
_start:
{
lean_object* v_res_5913_; 
v_res_5913_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_x_5912_);
lean_dec(v_x_5912_);
return v_res_5913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile(lean_object* v_path_5922_, lean_object* v_data_5923_, lean_object* v_options_5924_){
_start:
{
lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___y_5929_; lean_object* v___y_5930_; lean_object* v___y_5939_; 
v___x_5926_ = lean_unsigned_to_nat(3u);
v___x_5927_ = ((lean_object*)(l_Lasm_JS_Deno_writeFile___closed__2));
if (lean_obj_tag(v_path_5922_) == 0)
{
lean_object* v_value_5951_; lean_object* v___x_5953_; uint8_t v_isShared_5954_; uint8_t v_isSharedCheck_5958_; 
v_value_5951_ = lean_ctor_get(v_path_5922_, 0);
v_isSharedCheck_5958_ = !lean_is_exclusive(v_path_5922_);
if (v_isSharedCheck_5958_ == 0)
{
v___x_5953_ = v_path_5922_;
v_isShared_5954_ = v_isSharedCheck_5958_;
goto v_resetjp_5952_;
}
else
{
lean_inc(v_value_5951_);
lean_dec(v_path_5922_);
v___x_5953_ = lean_box(0);
v_isShared_5954_ = v_isSharedCheck_5958_;
goto v_resetjp_5952_;
}
v_resetjp_5952_:
{
lean_object* v___x_5956_; 
if (v_isShared_5954_ == 0)
{
lean_ctor_set_tag(v___x_5953_, 4);
v___x_5956_ = v___x_5953_;
goto v_reusejp_5955_;
}
else
{
lean_object* v_reuseFailAlloc_5957_; 
v_reuseFailAlloc_5957_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5957_, 0, v_value_5951_);
v___x_5956_ = v_reuseFailAlloc_5957_;
goto v_reusejp_5955_;
}
v_reusejp_5955_:
{
v___y_5939_ = v___x_5956_;
goto v___jp_5938_;
}
}
}
else
{
lean_object* v_value_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; 
v_value_5959_ = lean_ctor_get(v_path_5922_, 0);
lean_inc(v_value_5959_);
lean_dec_ref_known(v_path_5922_, 1);
v___x_5960_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5961_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5961_, 0, v_value_5959_);
lean_ctor_set(v___x_5961_, 1, v___x_5960_);
v___y_5939_ = v___x_5961_;
goto v___jp_5938_;
}
v___jp_5928_:
{
lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; 
v___x_5931_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_5924_);
v___x_5932_ = lean_mk_empty_array_with_capacity(v___x_5926_);
v___x_5933_ = lean_array_push(v___x_5932_, v___y_5929_);
v___x_5934_ = lean_array_push(v___x_5933_, v___y_5930_);
v___x_5935_ = lean_array_push(v___x_5934_, v___x_5931_);
v___x_5936_ = l_Lasm_JS_Web_Support_args(v___x_5935_);
v___x_5937_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5927_, v___x_5936_);
return v___x_5937_;
}
v___jp_5938_:
{
if (lean_obj_tag(v_data_5923_) == 0)
{
lean_object* v_value_5940_; lean_object* v___x_5942_; uint8_t v_isShared_5943_; uint8_t v_isSharedCheck_5947_; 
v_value_5940_ = lean_ctor_get(v_data_5923_, 0);
v_isSharedCheck_5947_ = !lean_is_exclusive(v_data_5923_);
if (v_isSharedCheck_5947_ == 0)
{
v___x_5942_ = v_data_5923_;
v_isShared_5943_ = v_isSharedCheck_5947_;
goto v_resetjp_5941_;
}
else
{
lean_inc(v_value_5940_);
lean_dec(v_data_5923_);
v___x_5942_ = lean_box(0);
v_isShared_5943_ = v_isSharedCheck_5947_;
goto v_resetjp_5941_;
}
v_resetjp_5941_:
{
lean_object* v___x_5945_; 
if (v_isShared_5943_ == 0)
{
lean_ctor_set_tag(v___x_5942_, 6);
v___x_5945_ = v___x_5942_;
goto v_reusejp_5944_;
}
else
{
lean_object* v_reuseFailAlloc_5946_; 
v_reuseFailAlloc_5946_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5946_, 0, v_value_5940_);
v___x_5945_ = v_reuseFailAlloc_5946_;
goto v_reusejp_5944_;
}
v_reusejp_5944_:
{
v___y_5929_ = v___y_5939_;
v___y_5930_ = v___x_5945_;
goto v___jp_5928_;
}
}
}
else
{
lean_object* v_value_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; 
v_value_5948_ = lean_ctor_get(v_data_5923_, 0);
lean_inc(v_value_5948_);
lean_dec_ref_known(v_data_5923_, 1);
v___x_5949_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5950_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5950_, 0, v_value_5948_);
lean_ctor_set(v___x_5950_, 1, v___x_5949_);
v___y_5929_ = v___y_5939_;
v___y_5930_ = v___x_5950_;
goto v___jp_5928_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile___boxed(lean_object* v_path_5962_, lean_object* v_data_5963_, lean_object* v_options_5964_, lean_object* v_a_5965_){
_start:
{
lean_object* v_res_5966_; 
v_res_5966_ = l_Lasm_JS_Deno_writeFile(v_path_5962_, v_data_5963_, v_options_5964_);
lean_dec(v_options_5964_);
return v_res_5966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync(lean_object* v_path_5975_, lean_object* v_data_5976_, lean_object* v_options_5977_){
_start:
{
uint8_t v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___y_5983_; 
v___x_5979_ = 0;
v___x_5980_ = lean_unsigned_to_nat(3u);
v___x_5981_ = ((lean_object*)(l_Lasm_JS_Deno_writeFileSync___closed__2));
if (lean_obj_tag(v_path_5975_) == 0)
{
lean_object* v_value_5992_; lean_object* v___x_5994_; uint8_t v_isShared_5995_; uint8_t v_isSharedCheck_5999_; 
v_value_5992_ = lean_ctor_get(v_path_5975_, 0);
v_isSharedCheck_5999_ = !lean_is_exclusive(v_path_5975_);
if (v_isSharedCheck_5999_ == 0)
{
v___x_5994_ = v_path_5975_;
v_isShared_5995_ = v_isSharedCheck_5999_;
goto v_resetjp_5993_;
}
else
{
lean_inc(v_value_5992_);
lean_dec(v_path_5975_);
v___x_5994_ = lean_box(0);
v_isShared_5995_ = v_isSharedCheck_5999_;
goto v_resetjp_5993_;
}
v_resetjp_5993_:
{
lean_object* v___x_5997_; 
if (v_isShared_5995_ == 0)
{
lean_ctor_set_tag(v___x_5994_, 4);
v___x_5997_ = v___x_5994_;
goto v_reusejp_5996_;
}
else
{
lean_object* v_reuseFailAlloc_5998_; 
v_reuseFailAlloc_5998_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5998_, 0, v_value_5992_);
v___x_5997_ = v_reuseFailAlloc_5998_;
goto v_reusejp_5996_;
}
v_reusejp_5996_:
{
v___y_5983_ = v___x_5997_;
goto v___jp_5982_;
}
}
}
else
{
lean_object* v_value_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; 
v_value_6000_ = lean_ctor_get(v_path_5975_, 0);
lean_inc(v_value_6000_);
lean_dec_ref_known(v_path_5975_, 1);
v___x_6001_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6002_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6002_, 0, v_value_6000_);
lean_ctor_set(v___x_6002_, 1, v___x_6001_);
v___y_5983_ = v___x_6002_;
goto v___jp_5982_;
}
v___jp_5982_:
{
lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; 
v___x_5984_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5984_, 0, v_data_5976_);
v___x_5985_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_5977_);
v___x_5986_ = lean_mk_empty_array_with_capacity(v___x_5980_);
v___x_5987_ = lean_array_push(v___x_5986_, v___y_5983_);
v___x_5988_ = lean_array_push(v___x_5987_, v___x_5984_);
v___x_5989_ = lean_array_push(v___x_5988_, v___x_5985_);
v___x_5990_ = l_Lasm_JS_Web_Support_args(v___x_5989_);
v___x_5991_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5981_, v___x_5990_, v___x_5979_);
return v___x_5991_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync___boxed(lean_object* v_path_6003_, lean_object* v_data_6004_, lean_object* v_options_6005_, lean_object* v_a_6006_){
_start:
{
lean_object* v_res_6007_; 
v_res_6007_ = l_Lasm_JS_Deno_writeFileSync(v_path_6003_, v_data_6004_, v_options_6005_);
lean_dec(v_options_6005_);
return v_res_6007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile(lean_object* v_path_6016_, lean_object* v_data_6017_, lean_object* v_options_6018_){
_start:
{
lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___y_6023_; lean_object* v___y_6024_; lean_object* v___y_6033_; 
v___x_6020_ = lean_unsigned_to_nat(3u);
v___x_6021_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFile___closed__2));
if (lean_obj_tag(v_path_6016_) == 0)
{
lean_object* v_value_6045_; lean_object* v___x_6047_; uint8_t v_isShared_6048_; uint8_t v_isSharedCheck_6052_; 
v_value_6045_ = lean_ctor_get(v_path_6016_, 0);
v_isSharedCheck_6052_ = !lean_is_exclusive(v_path_6016_);
if (v_isSharedCheck_6052_ == 0)
{
v___x_6047_ = v_path_6016_;
v_isShared_6048_ = v_isSharedCheck_6052_;
goto v_resetjp_6046_;
}
else
{
lean_inc(v_value_6045_);
lean_dec(v_path_6016_);
v___x_6047_ = lean_box(0);
v_isShared_6048_ = v_isSharedCheck_6052_;
goto v_resetjp_6046_;
}
v_resetjp_6046_:
{
lean_object* v___x_6050_; 
if (v_isShared_6048_ == 0)
{
lean_ctor_set_tag(v___x_6047_, 4);
v___x_6050_ = v___x_6047_;
goto v_reusejp_6049_;
}
else
{
lean_object* v_reuseFailAlloc_6051_; 
v_reuseFailAlloc_6051_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6051_, 0, v_value_6045_);
v___x_6050_ = v_reuseFailAlloc_6051_;
goto v_reusejp_6049_;
}
v_reusejp_6049_:
{
v___y_6033_ = v___x_6050_;
goto v___jp_6032_;
}
}
}
else
{
lean_object* v_value_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; 
v_value_6053_ = lean_ctor_get(v_path_6016_, 0);
lean_inc(v_value_6053_);
lean_dec_ref_known(v_path_6016_, 1);
v___x_6054_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6055_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6055_, 0, v_value_6053_);
lean_ctor_set(v___x_6055_, 1, v___x_6054_);
v___y_6033_ = v___x_6055_;
goto v___jp_6032_;
}
v___jp_6022_:
{
lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; 
v___x_6025_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6018_);
v___x_6026_ = lean_mk_empty_array_with_capacity(v___x_6020_);
v___x_6027_ = lean_array_push(v___x_6026_, v___y_6023_);
v___x_6028_ = lean_array_push(v___x_6027_, v___y_6024_);
v___x_6029_ = lean_array_push(v___x_6028_, v___x_6025_);
v___x_6030_ = l_Lasm_JS_Web_Support_args(v___x_6029_);
v___x_6031_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6021_, v___x_6030_);
return v___x_6031_;
}
v___jp_6032_:
{
if (lean_obj_tag(v_data_6017_) == 0)
{
lean_object* v_value_6034_; lean_object* v___x_6036_; uint8_t v_isShared_6037_; uint8_t v_isSharedCheck_6041_; 
v_value_6034_ = lean_ctor_get(v_data_6017_, 0);
v_isSharedCheck_6041_ = !lean_is_exclusive(v_data_6017_);
if (v_isSharedCheck_6041_ == 0)
{
v___x_6036_ = v_data_6017_;
v_isShared_6037_ = v_isSharedCheck_6041_;
goto v_resetjp_6035_;
}
else
{
lean_inc(v_value_6034_);
lean_dec(v_data_6017_);
v___x_6036_ = lean_box(0);
v_isShared_6037_ = v_isSharedCheck_6041_;
goto v_resetjp_6035_;
}
v_resetjp_6035_:
{
lean_object* v___x_6039_; 
if (v_isShared_6037_ == 0)
{
lean_ctor_set_tag(v___x_6036_, 4);
v___x_6039_ = v___x_6036_;
goto v_reusejp_6038_;
}
else
{
lean_object* v_reuseFailAlloc_6040_; 
v_reuseFailAlloc_6040_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6040_, 0, v_value_6034_);
v___x_6039_ = v_reuseFailAlloc_6040_;
goto v_reusejp_6038_;
}
v_reusejp_6038_:
{
v___y_6023_ = v___y_6033_;
v___y_6024_ = v___x_6039_;
goto v___jp_6022_;
}
}
}
else
{
lean_object* v_value_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; 
v_value_6042_ = lean_ctor_get(v_data_6017_, 0);
lean_inc(v_value_6042_);
lean_dec_ref_known(v_data_6017_, 1);
v___x_6043_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6044_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6044_, 0, v_value_6042_);
lean_ctor_set(v___x_6044_, 1, v___x_6043_);
v___y_6023_ = v___y_6033_;
v___y_6024_ = v___x_6044_;
goto v___jp_6022_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile___boxed(lean_object* v_path_6056_, lean_object* v_data_6057_, lean_object* v_options_6058_, lean_object* v_a_6059_){
_start:
{
lean_object* v_res_6060_; 
v_res_6060_ = l_Lasm_JS_Deno_writeTextFile(v_path_6056_, v_data_6057_, v_options_6058_);
lean_dec(v_options_6058_);
return v_res_6060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync(lean_object* v_path_6069_, lean_object* v_data_6070_, lean_object* v_options_6071_){
_start:
{
uint8_t v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___y_6077_; 
v___x_6073_ = 0;
v___x_6074_ = lean_unsigned_to_nat(3u);
v___x_6075_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFileSync___closed__2));
if (lean_obj_tag(v_path_6069_) == 0)
{
lean_object* v_value_6086_; lean_object* v___x_6088_; uint8_t v_isShared_6089_; uint8_t v_isSharedCheck_6093_; 
v_value_6086_ = lean_ctor_get(v_path_6069_, 0);
v_isSharedCheck_6093_ = !lean_is_exclusive(v_path_6069_);
if (v_isSharedCheck_6093_ == 0)
{
v___x_6088_ = v_path_6069_;
v_isShared_6089_ = v_isSharedCheck_6093_;
goto v_resetjp_6087_;
}
else
{
lean_inc(v_value_6086_);
lean_dec(v_path_6069_);
v___x_6088_ = lean_box(0);
v_isShared_6089_ = v_isSharedCheck_6093_;
goto v_resetjp_6087_;
}
v_resetjp_6087_:
{
lean_object* v___x_6091_; 
if (v_isShared_6089_ == 0)
{
lean_ctor_set_tag(v___x_6088_, 4);
v___x_6091_ = v___x_6088_;
goto v_reusejp_6090_;
}
else
{
lean_object* v_reuseFailAlloc_6092_; 
v_reuseFailAlloc_6092_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6092_, 0, v_value_6086_);
v___x_6091_ = v_reuseFailAlloc_6092_;
goto v_reusejp_6090_;
}
v_reusejp_6090_:
{
v___y_6077_ = v___x_6091_;
goto v___jp_6076_;
}
}
}
else
{
lean_object* v_value_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; 
v_value_6094_ = lean_ctor_get(v_path_6069_, 0);
lean_inc(v_value_6094_);
lean_dec_ref_known(v_path_6069_, 1);
v___x_6095_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6096_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6096_, 0, v_value_6094_);
lean_ctor_set(v___x_6096_, 1, v___x_6095_);
v___y_6077_ = v___x_6096_;
goto v___jp_6076_;
}
v___jp_6076_:
{
lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; 
v___x_6078_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6078_, 0, v_data_6070_);
v___x_6079_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6071_);
v___x_6080_ = lean_mk_empty_array_with_capacity(v___x_6074_);
v___x_6081_ = lean_array_push(v___x_6080_, v___y_6077_);
v___x_6082_ = lean_array_push(v___x_6081_, v___x_6078_);
v___x_6083_ = lean_array_push(v___x_6082_, v___x_6079_);
v___x_6084_ = l_Lasm_JS_Web_Support_args(v___x_6083_);
v___x_6085_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6075_, v___x_6084_, v___x_6073_);
return v___x_6085_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync___boxed(lean_object* v_path_6097_, lean_object* v_data_6098_, lean_object* v_options_6099_, lean_object* v_a_6100_){
_start:
{
lean_object* v_res_6101_; 
v_res_6101_ = l_Lasm_JS_Deno_writeTextFileSync(v_path_6097_, v_data_6098_, v_options_6099_);
lean_dec(v_options_6099_);
return v_res_6101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate(lean_object* v_name_6110_, lean_object* v_len_6111_){
_start:
{
lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; 
v___x_6113_ = lean_unsigned_to_nat(2u);
v___x_6114_ = ((lean_object*)(l_Lasm_JS_Deno_truncate___closed__2));
v___x_6115_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6115_, 0, v_name_6110_);
v___x_6116_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6111_);
v___x_6117_ = lean_mk_empty_array_with_capacity(v___x_6113_);
v___x_6118_ = lean_array_push(v___x_6117_, v___x_6115_);
v___x_6119_ = lean_array_push(v___x_6118_, v___x_6116_);
v___x_6120_ = l_Lasm_JS_Web_Support_args(v___x_6119_);
v___x_6121_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6114_, v___x_6120_);
return v___x_6121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate___boxed(lean_object* v_name_6122_, lean_object* v_len_6123_, lean_object* v_a_6124_){
_start:
{
lean_object* v_res_6125_; 
v_res_6125_ = l_Lasm_JS_Deno_truncate(v_name_6122_, v_len_6123_);
lean_dec(v_len_6123_);
return v_res_6125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync(lean_object* v_name_6134_, lean_object* v_len_6135_){
_start:
{
uint8_t v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; 
v___x_6137_ = 0;
v___x_6138_ = lean_unsigned_to_nat(2u);
v___x_6139_ = ((lean_object*)(l_Lasm_JS_Deno_truncateSync___closed__2));
v___x_6140_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6140_, 0, v_name_6134_);
v___x_6141_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6135_);
v___x_6142_ = lean_mk_empty_array_with_capacity(v___x_6138_);
v___x_6143_ = lean_array_push(v___x_6142_, v___x_6140_);
v___x_6144_ = lean_array_push(v___x_6143_, v___x_6141_);
v___x_6145_ = l_Lasm_JS_Web_Support_args(v___x_6144_);
v___x_6146_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6139_, v___x_6145_, v___x_6137_);
return v___x_6146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync___boxed(lean_object* v_name_6147_, lean_object* v_len_6148_, lean_object* v_a_6149_){
_start:
{
lean_object* v_res_6150_; 
v_res_6150_ = l_Lasm_JS_Deno_truncateSync(v_name_6147_, v_len_6148_);
lean_dec(v_len_6148_);
return v_res_6150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(lean_object* v_x_6151_){
_start:
{
if (lean_obj_tag(v_x_6151_) == 0)
{
lean_object* v___x_6152_; 
v___x_6152_ = lean_box(0);
return v___x_6152_;
}
else
{
lean_object* v_val_6153_; 
v_val_6153_ = lean_ctor_get(v_x_6151_, 0);
lean_inc(v_val_6153_);
lean_dec_ref_known(v_x_6151_, 1);
if (lean_obj_tag(v_val_6153_) == 0)
{
lean_object* v_value_6154_; lean_object* v___x_6156_; uint8_t v_isShared_6157_; uint8_t v_isSharedCheck_6161_; 
v_value_6154_ = lean_ctor_get(v_val_6153_, 0);
v_isSharedCheck_6161_ = !lean_is_exclusive(v_val_6153_);
if (v_isSharedCheck_6161_ == 0)
{
v___x_6156_ = v_val_6153_;
v_isShared_6157_ = v_isSharedCheck_6161_;
goto v_resetjp_6155_;
}
else
{
lean_inc(v_value_6154_);
lean_dec(v_val_6153_);
v___x_6156_ = lean_box(0);
v_isShared_6157_ = v_isSharedCheck_6161_;
goto v_resetjp_6155_;
}
v_resetjp_6155_:
{
lean_object* v___x_6159_; 
if (v_isShared_6157_ == 0)
{
lean_ctor_set_tag(v___x_6156_, 4);
v___x_6159_ = v___x_6156_;
goto v_reusejp_6158_;
}
else
{
lean_object* v_reuseFailAlloc_6160_; 
v_reuseFailAlloc_6160_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6160_, 0, v_value_6154_);
v___x_6159_ = v_reuseFailAlloc_6160_;
goto v_reusejp_6158_;
}
v_reusejp_6158_:
{
return v___x_6159_;
}
}
}
else
{
lean_object* v_value_6162_; lean_object* v___x_6164_; uint8_t v_isShared_6165_; uint8_t v_isSharedCheck_6172_; 
v_value_6162_ = lean_ctor_get(v_val_6153_, 0);
v_isSharedCheck_6172_ = !lean_is_exclusive(v_val_6153_);
if (v_isSharedCheck_6172_ == 0)
{
v___x_6164_ = v_val_6153_;
v_isShared_6165_ = v_isSharedCheck_6172_;
goto v_resetjp_6163_;
}
else
{
lean_inc(v_value_6162_);
lean_dec(v_val_6153_);
v___x_6164_ = lean_box(0);
v_isShared_6165_ = v_isSharedCheck_6172_;
goto v_resetjp_6163_;
}
v_resetjp_6163_:
{
size_t v_sz_6166_; size_t v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6170_; 
v_sz_6166_ = lean_array_size(v_value_6162_);
v___x_6167_ = ((size_t)0ULL);
v___x_6168_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6166_, v___x_6167_, v_value_6162_);
if (v_isShared_6165_ == 0)
{
lean_ctor_set_tag(v___x_6164_, 7);
lean_ctor_set(v___x_6164_, 0, v___x_6168_);
v___x_6170_ = v___x_6164_;
goto v_reusejp_6169_;
}
else
{
lean_object* v_reuseFailAlloc_6171_; 
v_reuseFailAlloc_6171_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6171_, 0, v___x_6168_);
v___x_6170_ = v_reuseFailAlloc_6171_;
goto v_reusejp_6169_;
}
v_reusejp_6169_:
{
return v___x_6170_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(lean_object* v_x_6173_){
_start:
{
if (lean_obj_tag(v_x_6173_) == 0)
{
lean_object* v___x_6174_; 
v___x_6174_ = lean_box(0);
return v___x_6174_;
}
else
{
lean_object* v_val_6175_; lean_object* v_recursive_6176_; lean_object* v_ignore_6177_; lean_object* v___x_6179_; uint8_t v_isShared_6180_; uint8_t v_isSharedCheck_6194_; 
v_val_6175_ = lean_ctor_get(v_x_6173_, 0);
lean_inc(v_val_6175_);
lean_dec_ref_known(v_x_6173_, 1);
v_recursive_6176_ = lean_ctor_get(v_val_6175_, 0);
v_ignore_6177_ = lean_ctor_get(v_val_6175_, 1);
v_isSharedCheck_6194_ = !lean_is_exclusive(v_val_6175_);
if (v_isSharedCheck_6194_ == 0)
{
v___x_6179_ = v_val_6175_;
v_isShared_6180_ = v_isSharedCheck_6194_;
goto v_resetjp_6178_;
}
else
{
lean_inc(v_ignore_6177_);
lean_inc(v_recursive_6176_);
lean_dec(v_val_6175_);
v___x_6179_ = lean_box(0);
v_isShared_6180_ = v_isSharedCheck_6194_;
goto v_resetjp_6178_;
}
v_resetjp_6178_:
{
lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6184_; 
v___x_6181_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_6182_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_6176_);
lean_dec(v_recursive_6176_);
if (v_isShared_6180_ == 0)
{
lean_ctor_set(v___x_6179_, 1, v___x_6182_);
lean_ctor_set(v___x_6179_, 0, v___x_6181_);
v___x_6184_ = v___x_6179_;
goto v_reusejp_6183_;
}
else
{
lean_object* v_reuseFailAlloc_6193_; 
v_reuseFailAlloc_6193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6193_, 0, v___x_6181_);
lean_ctor_set(v_reuseFailAlloc_6193_, 1, v___x_6182_);
v___x_6184_ = v_reuseFailAlloc_6193_;
goto v_reusejp_6183_;
}
v_reusejp_6183_:
{
lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; 
v___x_6185_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0));
v___x_6186_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(v_ignore_6177_);
v___x_6187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6187_, 0, v___x_6185_);
lean_ctor_set(v___x_6187_, 1, v___x_6186_);
v___x_6188_ = lean_unsigned_to_nat(2u);
v___x_6189_ = lean_mk_empty_array_with_capacity(v___x_6188_);
v___x_6190_ = lean_array_push(v___x_6189_, v___x_6184_);
v___x_6191_ = lean_array_push(v___x_6190_, v___x_6187_);
v___x_6192_ = l_Lasm_JS_Web_Support_fields(v___x_6191_);
lean_dec_ref(v___x_6191_);
return v___x_6192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs(lean_object* v_paths_6203_, lean_object* v_options_6204_){
_start:
{
uint8_t v___x_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; lean_object* v___y_6210_; 
v___x_6206_ = 0;
v___x_6207_ = lean_unsigned_to_nat(2u);
v___x_6208_ = ((lean_object*)(l_Lasm_JS_Deno_watchFs___closed__2));
if (lean_obj_tag(v_paths_6203_) == 0)
{
lean_object* v_value_6233_; lean_object* v___x_6235_; uint8_t v_isShared_6236_; uint8_t v_isSharedCheck_6240_; 
v_value_6233_ = lean_ctor_get(v_paths_6203_, 0);
v_isSharedCheck_6240_ = !lean_is_exclusive(v_paths_6203_);
if (v_isSharedCheck_6240_ == 0)
{
v___x_6235_ = v_paths_6203_;
v_isShared_6236_ = v_isSharedCheck_6240_;
goto v_resetjp_6234_;
}
else
{
lean_inc(v_value_6233_);
lean_dec(v_paths_6203_);
v___x_6235_ = lean_box(0);
v_isShared_6236_ = v_isSharedCheck_6240_;
goto v_resetjp_6234_;
}
v_resetjp_6234_:
{
lean_object* v___x_6238_; 
if (v_isShared_6236_ == 0)
{
lean_ctor_set_tag(v___x_6235_, 4);
v___x_6238_ = v___x_6235_;
goto v_reusejp_6237_;
}
else
{
lean_object* v_reuseFailAlloc_6239_; 
v_reuseFailAlloc_6239_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6239_, 0, v_value_6233_);
v___x_6238_ = v_reuseFailAlloc_6239_;
goto v_reusejp_6237_;
}
v_reusejp_6237_:
{
v___y_6210_ = v___x_6238_;
goto v___jp_6209_;
}
}
}
else
{
lean_object* v_value_6241_; lean_object* v___x_6243_; uint8_t v_isShared_6244_; uint8_t v_isSharedCheck_6251_; 
v_value_6241_ = lean_ctor_get(v_paths_6203_, 0);
v_isSharedCheck_6251_ = !lean_is_exclusive(v_paths_6203_);
if (v_isSharedCheck_6251_ == 0)
{
v___x_6243_ = v_paths_6203_;
v_isShared_6244_ = v_isSharedCheck_6251_;
goto v_resetjp_6242_;
}
else
{
lean_inc(v_value_6241_);
lean_dec(v_paths_6203_);
v___x_6243_ = lean_box(0);
v_isShared_6244_ = v_isSharedCheck_6251_;
goto v_resetjp_6242_;
}
v_resetjp_6242_:
{
size_t v_sz_6245_; size_t v___x_6246_; lean_object* v___x_6247_; lean_object* v___x_6249_; 
v_sz_6245_ = lean_array_size(v_value_6241_);
v___x_6246_ = ((size_t)0ULL);
v___x_6247_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6245_, v___x_6246_, v_value_6241_);
if (v_isShared_6244_ == 0)
{
lean_ctor_set_tag(v___x_6243_, 7);
lean_ctor_set(v___x_6243_, 0, v___x_6247_);
v___x_6249_ = v___x_6243_;
goto v_reusejp_6248_;
}
else
{
lean_object* v_reuseFailAlloc_6250_; 
v_reuseFailAlloc_6250_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6250_, 0, v___x_6247_);
v___x_6249_ = v_reuseFailAlloc_6250_;
goto v_reusejp_6248_;
}
v_reusejp_6248_:
{
v___y_6210_ = v___x_6249_;
goto v___jp_6209_;
}
}
}
v___jp_6209_:
{
lean_object* v___x_6211_; lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; 
v___x_6211_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(v_options_6204_);
v___x_6212_ = lean_mk_empty_array_with_capacity(v___x_6207_);
v___x_6213_ = lean_array_push(v___x_6212_, v___y_6210_);
v___x_6214_ = lean_array_push(v___x_6213_, v___x_6211_);
v___x_6215_ = l_Lasm_JS_Web_Support_args(v___x_6214_);
v___x_6216_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_6208_, v___x_6215_, v___x_6206_);
if (lean_obj_tag(v___x_6216_) == 0)
{
lean_object* v_a_6217_; lean_object* v___x_6219_; uint8_t v_isShared_6220_; uint8_t v_isSharedCheck_6224_; 
v_a_6217_ = lean_ctor_get(v___x_6216_, 0);
v_isSharedCheck_6224_ = !lean_is_exclusive(v___x_6216_);
if (v_isSharedCheck_6224_ == 0)
{
v___x_6219_ = v___x_6216_;
v_isShared_6220_ = v_isSharedCheck_6224_;
goto v_resetjp_6218_;
}
else
{
lean_inc(v_a_6217_);
lean_dec(v___x_6216_);
v___x_6219_ = lean_box(0);
v_isShared_6220_ = v_isSharedCheck_6224_;
goto v_resetjp_6218_;
}
v_resetjp_6218_:
{
lean_object* v___x_6222_; 
if (v_isShared_6220_ == 0)
{
v___x_6222_ = v___x_6219_;
goto v_reusejp_6221_;
}
else
{
lean_object* v_reuseFailAlloc_6223_; 
v_reuseFailAlloc_6223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6223_, 0, v_a_6217_);
v___x_6222_ = v_reuseFailAlloc_6223_;
goto v_reusejp_6221_;
}
v_reusejp_6221_:
{
return v___x_6222_;
}
}
}
else
{
lean_object* v_a_6225_; lean_object* v___x_6227_; uint8_t v_isShared_6228_; uint8_t v_isSharedCheck_6232_; 
v_a_6225_ = lean_ctor_get(v___x_6216_, 0);
v_isSharedCheck_6232_ = !lean_is_exclusive(v___x_6216_);
if (v_isSharedCheck_6232_ == 0)
{
v___x_6227_ = v___x_6216_;
v_isShared_6228_ = v_isSharedCheck_6232_;
goto v_resetjp_6226_;
}
else
{
lean_inc(v_a_6225_);
lean_dec(v___x_6216_);
v___x_6227_ = lean_box(0);
v_isShared_6228_ = v_isSharedCheck_6232_;
goto v_resetjp_6226_;
}
v_resetjp_6226_:
{
lean_object* v___x_6230_; 
if (v_isShared_6228_ == 0)
{
v___x_6230_ = v___x_6227_;
goto v_reusejp_6229_;
}
else
{
lean_object* v_reuseFailAlloc_6231_; 
v_reuseFailAlloc_6231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6231_, 0, v_a_6225_);
v___x_6230_ = v_reuseFailAlloc_6231_;
goto v_reusejp_6229_;
}
v_reusejp_6229_:
{
return v___x_6230_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs___boxed(lean_object* v_paths_6252_, lean_object* v_options_6253_, lean_object* v_a_6254_){
_start:
{
lean_object* v_res_6255_; 
v_res_6255_ = l_Lasm_JS_Deno_watchFs(v_paths_6252_, v_options_6253_);
return v_res_6255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(lean_object* v_x_6256_){
_start:
{
if (lean_obj_tag(v_x_6256_) == 0)
{
lean_object* v___x_6257_; 
v___x_6257_ = lean_box(0);
return v___x_6257_;
}
else
{
lean_object* v_val_6258_; lean_object* v___x_6259_; lean_object* v___y_6261_; uint8_t v___x_6267_; 
v_val_6258_ = lean_ctor_get(v_x_6256_, 0);
v___x_6259_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0));
v___x_6267_ = lean_unbox(v_val_6258_);
switch(v___x_6267_)
{
case 0:
{
lean_object* v___x_6268_; 
v___x_6268_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
v___y_6261_ = v___x_6268_;
goto v___jp_6260_;
}
case 1:
{
lean_object* v___x_6269_; 
v___x_6269_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
v___y_6261_ = v___x_6269_;
goto v___jp_6260_;
}
default: 
{
lean_object* v___x_6270_; 
v___x_6270_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
v___y_6261_ = v___x_6270_;
goto v___jp_6260_;
}
}
v___jp_6260_:
{
lean_object* v___x_6262_; lean_object* v___x_6263_; lean_object* v___x_6264_; lean_object* v___x_6265_; lean_object* v___x_6266_; 
lean_inc(v___y_6261_);
v___x_6262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6262_, 0, v___x_6259_);
lean_ctor_set(v___x_6262_, 1, v___y_6261_);
v___x_6263_ = lean_unsigned_to_nat(1u);
v___x_6264_ = lean_mk_empty_array_with_capacity(v___x_6263_);
v___x_6265_ = lean_array_push(v___x_6264_, v___x_6262_);
v___x_6266_ = l_Lasm_JS_Web_Support_fields(v___x_6265_);
lean_dec_ref(v___x_6265_);
return v___x_6266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0___boxed(lean_object* v_x_6271_){
_start:
{
lean_object* v_res_6272_; 
v_res_6272_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_x_6271_);
lean_dec(v_x_6271_);
return v_res_6272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink(lean_object* v_oldpath_6281_, lean_object* v_newpath_6282_, lean_object* v_options_6283_){
_start:
{
lean_object* v___x_6285_; lean_object* v___x_6286_; lean_object* v___y_6288_; lean_object* v___y_6289_; lean_object* v___y_6298_; 
v___x_6285_ = lean_unsigned_to_nat(3u);
v___x_6286_ = ((lean_object*)(l_Lasm_JS_Deno_symlink___closed__2));
if (lean_obj_tag(v_oldpath_6281_) == 0)
{
lean_object* v_value_6310_; lean_object* v___x_6312_; uint8_t v_isShared_6313_; uint8_t v_isSharedCheck_6317_; 
v_value_6310_ = lean_ctor_get(v_oldpath_6281_, 0);
v_isSharedCheck_6317_ = !lean_is_exclusive(v_oldpath_6281_);
if (v_isSharedCheck_6317_ == 0)
{
v___x_6312_ = v_oldpath_6281_;
v_isShared_6313_ = v_isSharedCheck_6317_;
goto v_resetjp_6311_;
}
else
{
lean_inc(v_value_6310_);
lean_dec(v_oldpath_6281_);
v___x_6312_ = lean_box(0);
v_isShared_6313_ = v_isSharedCheck_6317_;
goto v_resetjp_6311_;
}
v_resetjp_6311_:
{
lean_object* v___x_6315_; 
if (v_isShared_6313_ == 0)
{
lean_ctor_set_tag(v___x_6312_, 4);
v___x_6315_ = v___x_6312_;
goto v_reusejp_6314_;
}
else
{
lean_object* v_reuseFailAlloc_6316_; 
v_reuseFailAlloc_6316_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6316_, 0, v_value_6310_);
v___x_6315_ = v_reuseFailAlloc_6316_;
goto v_reusejp_6314_;
}
v_reusejp_6314_:
{
v___y_6298_ = v___x_6315_;
goto v___jp_6297_;
}
}
}
else
{
lean_object* v_value_6318_; lean_object* v___x_6319_; lean_object* v___x_6320_; 
v_value_6318_ = lean_ctor_get(v_oldpath_6281_, 0);
lean_inc(v_value_6318_);
lean_dec_ref_known(v_oldpath_6281_, 1);
v___x_6319_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6320_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6320_, 0, v_value_6318_);
lean_ctor_set(v___x_6320_, 1, v___x_6319_);
v___y_6298_ = v___x_6320_;
goto v___jp_6297_;
}
v___jp_6287_:
{
lean_object* v___x_6290_; lean_object* v___x_6291_; lean_object* v___x_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; 
v___x_6290_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6283_);
v___x_6291_ = lean_mk_empty_array_with_capacity(v___x_6285_);
v___x_6292_ = lean_array_push(v___x_6291_, v___y_6288_);
v___x_6293_ = lean_array_push(v___x_6292_, v___y_6289_);
v___x_6294_ = lean_array_push(v___x_6293_, v___x_6290_);
v___x_6295_ = l_Lasm_JS_Web_Support_args(v___x_6294_);
v___x_6296_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6286_, v___x_6295_);
return v___x_6296_;
}
v___jp_6297_:
{
if (lean_obj_tag(v_newpath_6282_) == 0)
{
lean_object* v_value_6299_; lean_object* v___x_6301_; uint8_t v_isShared_6302_; uint8_t v_isSharedCheck_6306_; 
v_value_6299_ = lean_ctor_get(v_newpath_6282_, 0);
v_isSharedCheck_6306_ = !lean_is_exclusive(v_newpath_6282_);
if (v_isSharedCheck_6306_ == 0)
{
v___x_6301_ = v_newpath_6282_;
v_isShared_6302_ = v_isSharedCheck_6306_;
goto v_resetjp_6300_;
}
else
{
lean_inc(v_value_6299_);
lean_dec(v_newpath_6282_);
v___x_6301_ = lean_box(0);
v_isShared_6302_ = v_isSharedCheck_6306_;
goto v_resetjp_6300_;
}
v_resetjp_6300_:
{
lean_object* v___x_6304_; 
if (v_isShared_6302_ == 0)
{
lean_ctor_set_tag(v___x_6301_, 4);
v___x_6304_ = v___x_6301_;
goto v_reusejp_6303_;
}
else
{
lean_object* v_reuseFailAlloc_6305_; 
v_reuseFailAlloc_6305_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6305_, 0, v_value_6299_);
v___x_6304_ = v_reuseFailAlloc_6305_;
goto v_reusejp_6303_;
}
v_reusejp_6303_:
{
v___y_6288_ = v___y_6298_;
v___y_6289_ = v___x_6304_;
goto v___jp_6287_;
}
}
}
else
{
lean_object* v_value_6307_; lean_object* v___x_6308_; lean_object* v___x_6309_; 
v_value_6307_ = lean_ctor_get(v_newpath_6282_, 0);
lean_inc(v_value_6307_);
lean_dec_ref_known(v_newpath_6282_, 1);
v___x_6308_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6309_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6309_, 0, v_value_6307_);
lean_ctor_set(v___x_6309_, 1, v___x_6308_);
v___y_6288_ = v___y_6298_;
v___y_6289_ = v___x_6309_;
goto v___jp_6287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink___boxed(lean_object* v_oldpath_6321_, lean_object* v_newpath_6322_, lean_object* v_options_6323_, lean_object* v_a_6324_){
_start:
{
lean_object* v_res_6325_; 
v_res_6325_ = l_Lasm_JS_Deno_symlink(v_oldpath_6321_, v_newpath_6322_, v_options_6323_);
lean_dec(v_options_6323_);
return v_res_6325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync(lean_object* v_oldpath_6334_, lean_object* v_newpath_6335_, lean_object* v_options_6336_){
_start:
{
uint8_t v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___y_6342_; lean_object* v___y_6343_; lean_object* v___y_6352_; 
v___x_6338_ = 0;
v___x_6339_ = lean_unsigned_to_nat(3u);
v___x_6340_ = ((lean_object*)(l_Lasm_JS_Deno_symlinkSync___closed__2));
if (lean_obj_tag(v_oldpath_6334_) == 0)
{
lean_object* v_value_6364_; lean_object* v___x_6366_; uint8_t v_isShared_6367_; uint8_t v_isSharedCheck_6371_; 
v_value_6364_ = lean_ctor_get(v_oldpath_6334_, 0);
v_isSharedCheck_6371_ = !lean_is_exclusive(v_oldpath_6334_);
if (v_isSharedCheck_6371_ == 0)
{
v___x_6366_ = v_oldpath_6334_;
v_isShared_6367_ = v_isSharedCheck_6371_;
goto v_resetjp_6365_;
}
else
{
lean_inc(v_value_6364_);
lean_dec(v_oldpath_6334_);
v___x_6366_ = lean_box(0);
v_isShared_6367_ = v_isSharedCheck_6371_;
goto v_resetjp_6365_;
}
v_resetjp_6365_:
{
lean_object* v___x_6369_; 
if (v_isShared_6367_ == 0)
{
lean_ctor_set_tag(v___x_6366_, 4);
v___x_6369_ = v___x_6366_;
goto v_reusejp_6368_;
}
else
{
lean_object* v_reuseFailAlloc_6370_; 
v_reuseFailAlloc_6370_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6370_, 0, v_value_6364_);
v___x_6369_ = v_reuseFailAlloc_6370_;
goto v_reusejp_6368_;
}
v_reusejp_6368_:
{
v___y_6352_ = v___x_6369_;
goto v___jp_6351_;
}
}
}
else
{
lean_object* v_value_6372_; lean_object* v___x_6373_; lean_object* v___x_6374_; 
v_value_6372_ = lean_ctor_get(v_oldpath_6334_, 0);
lean_inc(v_value_6372_);
lean_dec_ref_known(v_oldpath_6334_, 1);
v___x_6373_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6374_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6374_, 0, v_value_6372_);
lean_ctor_set(v___x_6374_, 1, v___x_6373_);
v___y_6352_ = v___x_6374_;
goto v___jp_6351_;
}
v___jp_6341_:
{
lean_object* v___x_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; lean_object* v___x_6347_; lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; 
v___x_6344_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6336_);
v___x_6345_ = lean_mk_empty_array_with_capacity(v___x_6339_);
v___x_6346_ = lean_array_push(v___x_6345_, v___y_6342_);
v___x_6347_ = lean_array_push(v___x_6346_, v___y_6343_);
v___x_6348_ = lean_array_push(v___x_6347_, v___x_6344_);
v___x_6349_ = l_Lasm_JS_Web_Support_args(v___x_6348_);
v___x_6350_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6340_, v___x_6349_, v___x_6338_);
return v___x_6350_;
}
v___jp_6351_:
{
if (lean_obj_tag(v_newpath_6335_) == 0)
{
lean_object* v_value_6353_; lean_object* v___x_6355_; uint8_t v_isShared_6356_; uint8_t v_isSharedCheck_6360_; 
v_value_6353_ = lean_ctor_get(v_newpath_6335_, 0);
v_isSharedCheck_6360_ = !lean_is_exclusive(v_newpath_6335_);
if (v_isSharedCheck_6360_ == 0)
{
v___x_6355_ = v_newpath_6335_;
v_isShared_6356_ = v_isSharedCheck_6360_;
goto v_resetjp_6354_;
}
else
{
lean_inc(v_value_6353_);
lean_dec(v_newpath_6335_);
v___x_6355_ = lean_box(0);
v_isShared_6356_ = v_isSharedCheck_6360_;
goto v_resetjp_6354_;
}
v_resetjp_6354_:
{
lean_object* v___x_6358_; 
if (v_isShared_6356_ == 0)
{
lean_ctor_set_tag(v___x_6355_, 4);
v___x_6358_ = v___x_6355_;
goto v_reusejp_6357_;
}
else
{
lean_object* v_reuseFailAlloc_6359_; 
v_reuseFailAlloc_6359_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6359_, 0, v_value_6353_);
v___x_6358_ = v_reuseFailAlloc_6359_;
goto v_reusejp_6357_;
}
v_reusejp_6357_:
{
v___y_6342_ = v___y_6352_;
v___y_6343_ = v___x_6358_;
goto v___jp_6341_;
}
}
}
else
{
lean_object* v_value_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; 
v_value_6361_ = lean_ctor_get(v_newpath_6335_, 0);
lean_inc(v_value_6361_);
lean_dec_ref_known(v_newpath_6335_, 1);
v___x_6362_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6363_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6363_, 0, v_value_6361_);
lean_ctor_set(v___x_6363_, 1, v___x_6362_);
v___y_6342_ = v___y_6352_;
v___y_6343_ = v___x_6363_;
goto v___jp_6341_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync___boxed(lean_object* v_oldpath_6375_, lean_object* v_newpath_6376_, lean_object* v_options_6377_, lean_object* v_a_6378_){
_start:
{
lean_object* v_res_6379_; 
v_res_6379_ = l_Lasm_JS_Deno_symlinkSync(v_oldpath_6375_, v_newpath_6376_, v_options_6377_);
lean_dec(v_options_6377_);
return v_res_6379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync(lean_object* v_path_6388_, lean_object* v_atime_6389_, lean_object* v_mtime_6390_){
_start:
{
uint8_t v___x_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; lean_object* v___y_6396_; 
v___x_6392_ = 0;
v___x_6393_ = lean_unsigned_to_nat(3u);
v___x_6394_ = ((lean_object*)(l_Lasm_JS_Deno_utimeSync___closed__2));
if (lean_obj_tag(v_path_6388_) == 0)
{
lean_object* v_value_6403_; lean_object* v___x_6405_; uint8_t v_isShared_6406_; uint8_t v_isSharedCheck_6410_; 
v_value_6403_ = lean_ctor_get(v_path_6388_, 0);
v_isSharedCheck_6410_ = !lean_is_exclusive(v_path_6388_);
if (v_isSharedCheck_6410_ == 0)
{
v___x_6405_ = v_path_6388_;
v_isShared_6406_ = v_isSharedCheck_6410_;
goto v_resetjp_6404_;
}
else
{
lean_inc(v_value_6403_);
lean_dec(v_path_6388_);
v___x_6405_ = lean_box(0);
v_isShared_6406_ = v_isSharedCheck_6410_;
goto v_resetjp_6404_;
}
v_resetjp_6404_:
{
lean_object* v___x_6408_; 
if (v_isShared_6406_ == 0)
{
lean_ctor_set_tag(v___x_6405_, 4);
v___x_6408_ = v___x_6405_;
goto v_reusejp_6407_;
}
else
{
lean_object* v_reuseFailAlloc_6409_; 
v_reuseFailAlloc_6409_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6409_, 0, v_value_6403_);
v___x_6408_ = v_reuseFailAlloc_6409_;
goto v_reusejp_6407_;
}
v_reusejp_6407_:
{
v___y_6396_ = v___x_6408_;
goto v___jp_6395_;
}
}
}
else
{
lean_object* v_value_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; 
v_value_6411_ = lean_ctor_get(v_path_6388_, 0);
lean_inc(v_value_6411_);
lean_dec_ref_known(v_path_6388_, 1);
v___x_6412_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6413_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6413_, 0, v_value_6411_);
lean_ctor_set(v___x_6413_, 1, v___x_6412_);
v___y_6396_ = v___x_6413_;
goto v___jp_6395_;
}
v___jp_6395_:
{
lean_object* v___x_6397_; lean_object* v___x_6398_; lean_object* v___x_6399_; lean_object* v___x_6400_; lean_object* v___x_6401_; lean_object* v___x_6402_; 
v___x_6397_ = lean_mk_empty_array_with_capacity(v___x_6393_);
v___x_6398_ = lean_array_push(v___x_6397_, v___y_6396_);
v___x_6399_ = lean_array_push(v___x_6398_, v_atime_6389_);
v___x_6400_ = lean_array_push(v___x_6399_, v_mtime_6390_);
v___x_6401_ = l_Lasm_JS_Web_Support_args(v___x_6400_);
v___x_6402_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6394_, v___x_6401_, v___x_6392_);
return v___x_6402_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync___boxed(lean_object* v_path_6414_, lean_object* v_atime_6415_, lean_object* v_mtime_6416_, lean_object* v_a_6417_){
_start:
{
lean_object* v_res_6418_; 
v_res_6418_ = l_Lasm_JS_Deno_utimeSync(v_path_6414_, v_atime_6415_, v_mtime_6416_);
return v_res_6418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime(lean_object* v_path_6427_, lean_object* v_atime_6428_, lean_object* v_mtime_6429_){
_start:
{
lean_object* v___x_6431_; lean_object* v___x_6432_; lean_object* v___y_6434_; 
v___x_6431_ = lean_unsigned_to_nat(3u);
v___x_6432_ = ((lean_object*)(l_Lasm_JS_Deno_utime___closed__2));
if (lean_obj_tag(v_path_6427_) == 0)
{
lean_object* v_value_6441_; lean_object* v___x_6443_; uint8_t v_isShared_6444_; uint8_t v_isSharedCheck_6448_; 
v_value_6441_ = lean_ctor_get(v_path_6427_, 0);
v_isSharedCheck_6448_ = !lean_is_exclusive(v_path_6427_);
if (v_isSharedCheck_6448_ == 0)
{
v___x_6443_ = v_path_6427_;
v_isShared_6444_ = v_isSharedCheck_6448_;
goto v_resetjp_6442_;
}
else
{
lean_inc(v_value_6441_);
lean_dec(v_path_6427_);
v___x_6443_ = lean_box(0);
v_isShared_6444_ = v_isSharedCheck_6448_;
goto v_resetjp_6442_;
}
v_resetjp_6442_:
{
lean_object* v___x_6446_; 
if (v_isShared_6444_ == 0)
{
lean_ctor_set_tag(v___x_6443_, 4);
v___x_6446_ = v___x_6443_;
goto v_reusejp_6445_;
}
else
{
lean_object* v_reuseFailAlloc_6447_; 
v_reuseFailAlloc_6447_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6447_, 0, v_value_6441_);
v___x_6446_ = v_reuseFailAlloc_6447_;
goto v_reusejp_6445_;
}
v_reusejp_6445_:
{
v___y_6434_ = v___x_6446_;
goto v___jp_6433_;
}
}
}
else
{
lean_object* v_value_6449_; lean_object* v___x_6450_; lean_object* v___x_6451_; 
v_value_6449_ = lean_ctor_get(v_path_6427_, 0);
lean_inc(v_value_6449_);
lean_dec_ref_known(v_path_6427_, 1);
v___x_6450_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6451_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6451_, 0, v_value_6449_);
lean_ctor_set(v___x_6451_, 1, v___x_6450_);
v___y_6434_ = v___x_6451_;
goto v___jp_6433_;
}
v___jp_6433_:
{
lean_object* v___x_6435_; lean_object* v___x_6436_; lean_object* v___x_6437_; lean_object* v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; 
v___x_6435_ = lean_mk_empty_array_with_capacity(v___x_6431_);
v___x_6436_ = lean_array_push(v___x_6435_, v___y_6434_);
v___x_6437_ = lean_array_push(v___x_6436_, v_atime_6428_);
v___x_6438_ = lean_array_push(v___x_6437_, v_mtime_6429_);
v___x_6439_ = l_Lasm_JS_Web_Support_args(v___x_6438_);
v___x_6440_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6432_, v___x_6439_);
return v___x_6440_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime___boxed(lean_object* v_path_6452_, lean_object* v_atime_6453_, lean_object* v_mtime_6454_, lean_object* v_a_6455_){
_start:
{
lean_object* v_res_6456_; 
v_res_6456_ = l_Lasm_JS_Deno_utime(v_path_6452_, v_atime_6453_, v_mtime_6454_);
return v_res_6456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask(lean_object* v_mask_6465_){
_start:
{
uint8_t v___x_6467_; lean_object* v___x_6468_; lean_object* v___x_6469_; lean_object* v___x_6470_; lean_object* v___x_6471_; lean_object* v___x_6472_; lean_object* v___x_6473_; lean_object* v___x_6474_; 
v___x_6467_ = 0;
v___x_6468_ = lean_unsigned_to_nat(1u);
v___x_6469_ = ((lean_object*)(l_Lasm_JS_Deno_umask___closed__2));
v___x_6470_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mask_6465_);
v___x_6471_ = lean_mk_empty_array_with_capacity(v___x_6468_);
v___x_6472_ = lean_array_push(v___x_6471_, v___x_6470_);
v___x_6473_ = l_Lasm_JS_Web_Support_args(v___x_6472_);
v___x_6474_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v___x_6469_, v___x_6473_, v___x_6467_);
return v___x_6474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask___boxed(lean_object* v_mask_6475_, lean_object* v_a_6476_){
_start:
{
lean_object* v_res_6477_; 
v_res_6477_ = l_Lasm_JS_Deno_umask(v_mask_6475_);
lean_dec(v_mask_6475_);
return v_res_6477_;
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
