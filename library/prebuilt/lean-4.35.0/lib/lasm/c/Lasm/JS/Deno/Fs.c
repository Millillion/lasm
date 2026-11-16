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
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_consoleSize_spec__0_spec__0_spec__1(lean_object*, lean_object*);
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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
extern lean_object* l_Lasm_JS_instFromJSData;
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
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
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Stdin_setRaw_spec__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__1;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__2;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__3;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__4;
static const lean_string_object l_Lasm_JS_Deno_instFromJSFileInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.FileInfo"};
static const lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSFileInfo___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSFileInfo___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___closed__6;
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
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Option (Float)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__5;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__6;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__7_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Nat)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7_value;
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
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Array (String)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "an element is not String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value)}};
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
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__1_value)}};
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0(lean_object* v___x_706_, lean_object* v___x_707_, lean_object* v___x_708_, lean_object* v___x_709_, lean_object* v___x_710_, lean_object* v___x_711_, lean_object* v___x_712_, lean_object* v_d_713_){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc_ref(v___x_706_);
v___x_715_ = l_Lasm_JS_readField___redArg(v___x_706_, v_d_713_, v___x_714_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
lean_dec_ref(v___x_706_);
v_a_716_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_715_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_715_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_a_724_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_715_, 1);
v___x_725_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc_ref(v___x_706_);
v___x_726_ = l_Lasm_JS_readField___redArg(v___x_706_, v_d_713_, v___x_725_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
lean_dec_ref(v___x_706_);
v_a_727_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_726_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_726_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_a_735_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_726_, 1);
v___x_736_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
v___x_737_ = l_Lasm_JS_readField___redArg(v___x_706_, v_d_713_, v___x_736_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
v_a_738_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_737_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_737_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
else
{
lean_object* v_a_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_a_746_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v___x_737_, 1);
v___x_747_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3));
v___x_748_ = l_Lasm_JS_readField___redArg(v___x_707_, v_d_713_, v___x_747_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v_a_757_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___x_748_, 1);
v___x_758_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4));
lean_inc_ref(v___x_708_);
v___x_759_ = l_Lasm_JS_readField___redArg(v___x_708_, v_d_713_, v___x_758_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
v_a_760_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_759_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_759_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_a_768_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_759_, 1);
v___x_769_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5));
lean_inc_ref(v___x_708_);
v___x_770_ = l_Lasm_JS_readField___redArg(v___x_708_, v_d_713_, v___x_769_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v_a_779_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_770_, 1);
v___x_780_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6));
lean_inc_ref(v___x_708_);
v___x_781_ = l_Lasm_JS_readField___redArg(v___x_708_, v_d_713_, v___x_780_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
lean_dec_ref(v___x_708_);
v_a_782_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_781_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v_a_790_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_790_);
lean_dec_ref_known(v___x_781_, 1);
v___x_791_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7));
v___x_792_ = l_Lasm_JS_readField___redArg(v___x_708_, v_d_713_, v___x_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_709_);
v_a_793_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_792_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_792_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
else
{
lean_object* v_a_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v_a_801_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_801_);
lean_dec_ref_known(v___x_792_, 1);
v___x_802_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8));
v___x_803_ = l_Lasm_JS_readField___redArg(v___x_709_, v_d_713_, v___x_802_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_a_812_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_a_812_);
lean_dec_ref_known(v___x_803_, 1);
v___x_813_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9));
lean_inc_ref(v___x_710_);
v___x_814_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_713_, v___x_813_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
v_a_815_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_814_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_814_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v_a_823_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_814_, 1);
v___x_824_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
lean_inc_ref(v___x_710_);
v___x_825_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_713_, v___x_824_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
v_a_826_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_825_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_825_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
else
{
lean_object* v_a_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v_a_834_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_a_834_);
lean_dec_ref_known(v___x_825_, 1);
v___x_835_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11));
lean_inc_ref(v___x_710_);
v___x_836_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_713_, v___x_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
v_a_837_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_836_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_836_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
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
lean_object* v_a_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_a_845_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_845_);
lean_dec_ref_known(v___x_836_, 1);
v___x_846_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12));
lean_inc_ref(v___x_711_);
v___x_847_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_713_, v___x_846_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v___x_710_);
v_a_848_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_847_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_847_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v_a_856_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_847_, 1);
v___x_857_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13));
v___x_858_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_713_, v___x_857_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_dec(v_a_856_);
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_710_);
v_a_859_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_858_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_858_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_a_867_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_858_, 1);
v___x_868_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14));
lean_inc_ref(v___x_710_);
v___x_869_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_713_, v___x_868_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
lean_dec(v_a_867_);
lean_dec(v_a_856_);
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_710_);
v_a_870_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_869_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_869_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v_a_878_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_869_, 1);
v___x_879_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15));
lean_inc_ref(v___x_710_);
v___x_880_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_713_, v___x_879_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_dec(v_a_878_);
lean_dec(v_a_867_);
lean_dec(v_a_856_);
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_710_);
v_a_881_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_880_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_880_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
else
{
lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_a_889_ = lean_ctor_get(v___x_880_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_880_, 1);
v___x_890_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16));
v___x_891_ = l_Lasm_JS_readField___redArg(v___x_710_, v_d_713_, v___x_890_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_dec(v_a_889_);
lean_dec(v_a_878_);
lean_dec(v_a_867_);
lean_dec(v_a_856_);
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
v_a_892_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_891_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_891_);
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
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_a_900_ = lean_ctor_get(v___x_891_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_891_, 1);
v___x_901_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17));
lean_inc_ref(v___x_712_);
v___x_902_ = l_Lasm_JS_readField___redArg(v___x_712_, v_d_713_, v___x_901_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec(v_a_878_);
lean_dec(v_a_867_);
lean_dec(v_a_856_);
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
v_a_903_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_902_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_902_);
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
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_a_911_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_902_, 1);
v___x_912_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18));
lean_inc_ref(v___x_712_);
v___x_913_ = l_Lasm_JS_readField___redArg(v___x_712_, v_d_713_, v___x_912_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec(v_a_878_);
lean_dec(v_a_867_);
lean_dec(v_a_856_);
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_913_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_a_922_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_922_);
lean_dec_ref_known(v___x_913_, 1);
v___x_923_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19));
lean_inc_ref(v___x_712_);
v___x_924_ = l_Lasm_JS_readField___redArg(v___x_712_, v_d_713_, v___x_923_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec(v_a_878_);
lean_dec(v_a_867_);
lean_dec(v_a_856_);
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
v_a_925_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_924_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_924_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v_a_933_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_924_, 1);
v___x_934_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20));
v___x_935_ = l_Lasm_JS_readField___redArg(v___x_712_, v_d_713_, v___x_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec(v_a_878_);
lean_dec(v_a_867_);
lean_dec(v_a_856_);
lean_dec(v_a_845_);
lean_dec(v_a_834_);
lean_dec(v_a_823_);
lean_dec(v_a_812_);
lean_dec(v_a_801_);
lean_dec(v_a_790_);
lean_dec(v_a_779_);
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
v_a_936_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_935_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_935_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_956_; 
v_a_944_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_956_ == 0)
{
v___x_946_ = v___x_935_;
v_isShared_947_ = v_isSharedCheck_956_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_935_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_956_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; uint8_t v___x_949_; uint8_t v___x_950_; uint8_t v___x_951_; double v___x_952_; lean_object* v___x_954_; 
v___x_948_ = lean_alloc_ctor(0, 17, 11);
lean_ctor_set(v___x_948_, 0, v_a_757_);
lean_ctor_set(v___x_948_, 1, v_a_768_);
lean_ctor_set(v___x_948_, 2, v_a_779_);
lean_ctor_set(v___x_948_, 3, v_a_790_);
lean_ctor_set(v___x_948_, 4, v_a_801_);
lean_ctor_set(v___x_948_, 5, v_a_823_);
lean_ctor_set(v___x_948_, 6, v_a_834_);
lean_ctor_set(v___x_948_, 7, v_a_845_);
lean_ctor_set(v___x_948_, 8, v_a_856_);
lean_ctor_set(v___x_948_, 9, v_a_867_);
lean_ctor_set(v___x_948_, 10, v_a_878_);
lean_ctor_set(v___x_948_, 11, v_a_889_);
lean_ctor_set(v___x_948_, 12, v_a_900_);
lean_ctor_set(v___x_948_, 13, v_a_911_);
lean_ctor_set(v___x_948_, 14, v_a_922_);
lean_ctor_set(v___x_948_, 15, v_a_933_);
lean_ctor_set(v___x_948_, 16, v_a_944_);
v___x_949_ = lean_unbox(v_a_724_);
lean_dec(v_a_724_);
lean_ctor_set_uint8(v___x_948_, sizeof(void*)*17 + 8, v___x_949_);
v___x_950_ = lean_unbox(v_a_735_);
lean_dec(v_a_735_);
lean_ctor_set_uint8(v___x_948_, sizeof(void*)*17 + 9, v___x_950_);
v___x_951_ = lean_unbox(v_a_746_);
lean_dec(v_a_746_);
lean_ctor_set_uint8(v___x_948_, sizeof(void*)*17 + 10, v___x_951_);
v___x_952_ = lean_unbox_float(v_a_812_);
lean_dec(v_a_812_);
lean_ctor_set_float(v___x_948_, sizeof(void*)*17, v___x_952_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_948_);
v___x_954_ = v___x_946_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_948_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___boxed(lean_object* v___x_957_, lean_object* v___x_958_, lean_object* v___x_959_, lean_object* v___x_960_, lean_object* v___x_961_, lean_object* v___x_962_, lean_object* v___x_963_, lean_object* v_d_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lasm_JS_Deno_instFromJSFileInfo___lam__0(v___x_957_, v___x_958_, v___x_959_, v___x_960_, v___x_961_, v___x_962_, v___x_963_, v_d_964_);
lean_dec(v_d_964_);
return v_res_965_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__0(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = l_Lasm_JS_instFromJSData;
v___x_967_ = l_Lasm_JS_instFromJSOption___redArg(v___x_966_);
return v___x_967_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__1(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = l_Lasm_JS_instFromJSFloat;
v___x_969_ = l_Lasm_JS_instFromJSOption___redArg(v___x_968_);
return v___x_969_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__2(void){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = l_Lasm_JS_instFromJSNat;
v___x_971_ = l_Lasm_JS_instFromJSOption___redArg(v___x_970_);
return v___x_971_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__3(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = l_Lasm_JS_instFromJSBool;
v___x_973_ = l_Lasm_JS_instFromJSOption___redArg(v___x_972_);
return v___x_973_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__4(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___f_981_; 
v___x_974_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__3, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__3);
v___x_975_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__2, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__2);
v___x_976_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__1, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__1);
v___x_977_ = l_Lasm_JS_instFromJSFloat;
v___x_978_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__0, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__0);
v___x_979_ = l_Lasm_JS_instFromJSNat;
v___x_980_ = l_Lasm_JS_instFromJSBool;
v___f_981_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___boxed), 8, 7);
lean_closure_set(v___f_981_, 0, v___x_980_);
lean_closure_set(v___f_981_, 1, v___x_979_);
lean_closure_set(v___f_981_, 2, v___x_978_);
lean_closure_set(v___f_981_, 3, v___x_977_);
lean_closure_set(v___f_981_, 4, v___x_976_);
lean_closure_set(v___f_981_, 5, v___x_975_);
lean_closure_set(v___f_981_, 6, v___x_974_);
return v___f_981_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__6(void){
_start:
{
uint8_t v___x_983_; lean_object* v___x_984_; lean_object* v___f_985_; lean_object* v___x_986_; 
v___x_983_ = 0;
v___x_984_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___closed__5));
v___f_985_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__4, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__4_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__4);
v___x_986_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_986_, 0, v___f_985_);
lean_ctor_set(v___x_986_, 1, v___x_984_);
lean_ctor_set_uint8(v___x_986_, sizeof(void*)*2, v___x_983_);
return v___x_986_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFileInfo(void){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFileInfo___closed__6, &l_Lasm_JS_Deno_instFromJSFileInfo___closed__6_once, _init_l_Lasm_JS_Deno_instFromJSFileInfo___closed__6);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0(lean_object* v___x_989_, lean_object* v___x_990_, lean_object* v_d_991_){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0));
v___x_993_ = l_Lasm_JS_readField___redArg(v___x_989_, v_d_991_, v___x_992_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_dec_ref(v___x_990_);
v_a_994_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_993_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_993_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v_a_1002_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_1002_);
lean_dec_ref_known(v___x_993_, 1);
v___x_1003_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc_ref(v___x_990_);
v___x_1004_ = l_Lasm_JS_readField___redArg(v___x_990_, v_d_991_, v___x_1003_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1012_; 
lean_dec(v_a_1002_);
lean_dec_ref(v___x_990_);
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
lean_object* v_a_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_a_1013_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1014_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc_ref(v___x_990_);
v___x_1015_ = l_Lasm_JS_readField___redArg(v___x_990_, v_d_991_, v___x_1014_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec(v_a_1013_);
lean_dec(v_a_1002_);
lean_dec_ref(v___x_990_);
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1015_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1015_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_a_1024_ = lean_ctor_get(v___x_1015_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1015_, 1);
v___x_1025_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
v___x_1026_ = l_Lasm_JS_readField___redArg(v___x_990_, v_d_991_, v___x_1025_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec(v_a_1024_);
lean_dec(v_a_1013_);
lean_dec(v_a_1002_);
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1026_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1026_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1046_; 
v_a_1035_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1037_ = v___x_1026_;
v_isShared_1038_ = v_isSharedCheck_1046_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1026_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1046_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; uint8_t v___x_1040_; uint8_t v___x_1041_; uint8_t v___x_1042_; lean_object* v___x_1044_; 
v___x_1039_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1039_, 0, v_a_1002_);
v___x_1040_ = lean_unbox(v_a_1013_);
lean_dec(v_a_1013_);
lean_ctor_set_uint8(v___x_1039_, sizeof(void*)*1, v___x_1040_);
v___x_1041_ = lean_unbox(v_a_1024_);
lean_dec(v_a_1024_);
lean_ctor_set_uint8(v___x_1039_, sizeof(void*)*1 + 1, v___x_1041_);
v___x_1042_ = lean_unbox(v_a_1035_);
lean_dec(v_a_1035_);
lean_ctor_set_uint8(v___x_1039_, sizeof(void*)*1 + 2, v___x_1042_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1039_);
v___x_1044_ = v___x_1037_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___boxed(lean_object* v___x_1047_, lean_object* v___x_1048_, lean_object* v_d_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lasm_JS_Deno_instFromJSDirEntry___lam__0(v___x_1047_, v___x_1048_, v_d_1049_);
lean_dec(v_d_1049_);
return v_res_1050_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__0(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___f_1053_; 
v___x_1051_ = l_Lasm_JS_instFromJSBool;
v___x_1052_ = l_Lasm_JS_instFromJSString;
v___f_1053_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1053_, 0, v___x_1052_);
lean_closure_set(v___f_1053_, 1, v___x_1051_);
return v___f_1053_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__2(void){
_start:
{
uint8_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___f_1057_; lean_object* v___x_1058_; 
v___x_1055_ = 0;
v___x_1056_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___closed__1));
v___f_1057_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSDirEntry___closed__0, &l_Lasm_JS_Deno_instFromJSDirEntry___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__0);
v___x_1058_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1058_, 0, v___f_1057_);
lean_ctor_set(v___x_1058_, 1, v___x_1056_);
lean_ctor_set_uint8(v___x_1058_, sizeof(void*)*2, v___x_1055_);
return v___x_1058_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSDirEntry(void){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSDirEntry___closed__2, &l_Lasm_JS_Deno_instFromJSDirEntry___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSDirEntry___closed__2);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0(lean_object* v___x_1063_, lean_object* v___x_1064_, lean_object* v___x_1065_, lean_object* v_d_1066_){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0));
v___x_1068_ = l_Lasm_JS_readField___redArg(v___x_1063_, v_d_1066_, v___x_1067_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
lean_dec_ref(v___x_1065_);
lean_dec_ref(v___x_1064_);
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1068_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1068_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v_a_1077_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1078_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1));
v___x_1079_ = l_Lasm_JS_readField___redArg(v___x_1064_, v_d_1066_, v___x_1078_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec(v_a_1077_);
lean_dec_ref(v___x_1065_);
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1079_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1079_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v_a_1088_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1079_, 1);
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2));
v___x_1090_ = l_Lasm_JS_readField___redArg(v___x_1065_, v_d_1066_, v___x_1089_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec(v_a_1088_);
lean_dec(v_a_1077_);
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
else
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1108_; 
v_a_1099_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1101_ = v___x_1090_;
v_isShared_1102_ = v_isSharedCheck_1108_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1090_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1108_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1103_; uint8_t v___x_1104_; lean_object* v___x_1106_; 
v___x_1103_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1103_, 0, v_a_1088_);
lean_ctor_set(v___x_1103_, 1, v_a_1099_);
v___x_1104_ = lean_unbox(v_a_1077_);
lean_dec(v_a_1077_);
lean_ctor_set_uint8(v___x_1103_, sizeof(void*)*2, v___x_1104_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1103_);
v___x_1106_ = v___x_1101_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1103_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___boxed(lean_object* v___x_1109_, lean_object* v___x_1110_, lean_object* v___x_1111_, lean_object* v_d_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lasm_JS_Deno_instFromJSFsEvent___lam__0(v___x_1109_, v___x_1110_, v___x_1111_, v_d_1112_);
lean_dec(v_d_1112_);
return v_res_1113_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__0(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = l_Lasm_JS_instFromJSString;
v___x_1115_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__1(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventFlag));
v___x_1117_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1116_);
return v___x_1117_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__2(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___f_1121_; 
v___x_1118_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__1, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__1);
v___x_1119_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__0, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__0);
v___x_1120_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind));
v___f_1121_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1121_, 0, v___x_1120_);
lean_closure_set(v___f_1121_, 1, v___x_1119_);
lean_closure_set(v___f_1121_, 2, v___x_1118_);
return v___f_1121_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__4(void){
_start:
{
uint8_t v___x_1123_; lean_object* v___x_1124_; lean_object* v___f_1125_; lean_object* v___x_1126_; 
v___x_1123_ = 0;
v___x_1124_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___closed__3));
v___f_1125_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__2, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__2);
v___x_1126_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1126_, 0, v___f_1125_);
lean_ctor_set(v___x_1126_, 1, v___x_1124_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*2, v___x_1123_);
return v___x_1126_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSFsEvent(void){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSFsEvent___closed__4, &l_Lasm_JS_Deno_instFromJSFsEvent___closed__4_once, _init_l_Lasm_JS_Deno_instFromJSFsEvent___closed__4);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSOpenOptions___lam__0(lean_object* v___f_1133_, lean_object* v___f_1134_, lean_object* v_d_1135_){
_start:
{
lean_object* v_read_1136_; lean_object* v_write_1137_; lean_object* v_append_1138_; lean_object* v_truncate_1139_; lean_object* v_create_1140_; lean_object* v_createNew_1141_; lean_object* v_mode_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v_read_1136_ = lean_ctor_get(v_d_1135_, 0);
lean_inc(v_read_1136_);
v_write_1137_ = lean_ctor_get(v_d_1135_, 1);
lean_inc(v_write_1137_);
v_append_1138_ = lean_ctor_get(v_d_1135_, 2);
lean_inc(v_append_1138_);
v_truncate_1139_ = lean_ctor_get(v_d_1135_, 3);
lean_inc(v_truncate_1139_);
v_create_1140_ = lean_ctor_get(v_d_1135_, 4);
lean_inc(v_create_1140_);
v_createNew_1141_ = lean_ctor_get(v_d_1135_, 5);
lean_inc(v_createNew_1141_);
v_mode_1142_ = lean_ctor_get(v_d_1135_, 6);
lean_inc(v_mode_1142_);
lean_dec_ref(v_d_1135_);
v___x_1143_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1133_, 5);
v___x_1144_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_read_1136_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1143_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1));
v___x_1147_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_write_1137_);
v___x_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1146_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_1150_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_append_1138_);
v___x_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_1153_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_truncate_1139_);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_1156_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_create_1140_);
v___x_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_1159_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_createNew_1141_);
v___x_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1158_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1162_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1134_, v_mode_1142_);
v___x_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1161_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
v___x_1164_ = lean_unsigned_to_nat(7u);
v___x_1165_ = lean_mk_empty_array_with_capacity(v___x_1164_);
v___x_1166_ = lean_array_push(v___x_1165_, v___x_1145_);
v___x_1167_ = lean_array_push(v___x_1166_, v___x_1148_);
v___x_1168_ = lean_array_push(v___x_1167_, v___x_1151_);
v___x_1169_ = lean_array_push(v___x_1168_, v___x_1154_);
v___x_1170_ = lean_array_push(v___x_1169_, v___x_1157_);
v___x_1171_ = lean_array_push(v___x_1170_, v___x_1160_);
v___x_1172_ = lean_array_push(v___x_1171_, v___x_1163_);
v___x_1173_ = l_Lasm_JS_Web_Support_fields(v___x_1172_);
lean_dec_ref(v___x_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0(lean_object* v___f_1181_, lean_object* v___f_1182_, lean_object* v_d_1183_){
_start:
{
lean_object* v_recursive_1184_; lean_object* v_mode_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1202_; 
v_recursive_1184_ = lean_ctor_get(v_d_1183_, 0);
v_mode_1185_ = lean_ctor_get(v_d_1183_, 1);
v_isSharedCheck_1202_ = !lean_is_exclusive(v_d_1183_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1187_ = v_d_1183_;
v_isShared_1188_ = v_isSharedCheck_1202_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_mode_1185_);
lean_inc(v_recursive_1184_);
lean_dec(v_d_1183_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1202_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1192_; 
v___x_1189_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1190_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1181_, v_recursive_1184_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 1, v___x_1190_);
lean_ctor_set(v___x_1187_, 0, v___x_1189_);
v___x_1192_ = v___x_1187_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1189_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v___x_1190_);
v___x_1192_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1193_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1194_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1182_, v_mode_1185_);
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1193_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
v___x_1196_ = lean_unsigned_to_nat(2u);
v___x_1197_ = lean_mk_empty_array_with_capacity(v___x_1196_);
v___x_1198_ = lean_array_push(v___x_1197_, v___x_1192_);
v___x_1199_ = lean_array_push(v___x_1198_, v___x_1195_);
v___x_1200_ = l_Lasm_JS_Web_Support_fields(v___x_1199_);
lean_dec_ref(v___x_1199_);
return v___x_1200_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0(lean_object* v___f_1209_, lean_object* v_d_1210_){
_start:
{
lean_object* v_dir_1211_; lean_object* v_prefix_1212_; lean_object* v_suffix_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v_dir_1211_ = lean_ctor_get(v_d_1210_, 0);
lean_inc(v_dir_1211_);
v_prefix_1212_ = lean_ctor_get(v_d_1210_, 1);
lean_inc(v_prefix_1212_);
v_suffix_1213_ = lean_ctor_get(v_d_1210_, 2);
lean_inc(v_suffix_1213_);
lean_dec_ref(v_d_1210_);
v___x_1214_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
lean_inc_ref_n(v___f_1209_, 2);
v___x_1215_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1209_, v_dir_1211_);
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1214_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v___x_1217_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0));
v___x_1218_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1209_, v_prefix_1212_);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1217_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___x_1220_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1));
v___x_1221_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1209_, v_suffix_1213_);
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1220_);
lean_ctor_set(v___x_1222_, 1, v___x_1221_);
v___x_1223_ = lean_unsigned_to_nat(3u);
v___x_1224_ = lean_mk_empty_array_with_capacity(v___x_1223_);
v___x_1225_ = lean_array_push(v___x_1224_, v___x_1216_);
v___x_1226_ = lean_array_push(v___x_1225_, v___x_1219_);
v___x_1227_ = lean_array_push(v___x_1226_, v___x_1222_);
v___x_1228_ = l_Lasm_JS_Web_Support_fields(v___x_1227_);
lean_dec_ref(v___x_1227_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSRemoveOptions___lam__0(lean_object* v___f_1233_, lean_object* v_d_1234_){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1235_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1236_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1233_, v_d_1234_);
v___x_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = lean_unsigned_to_nat(1u);
v___x_1239_ = lean_mk_empty_array_with_capacity(v___x_1238_);
v___x_1240_ = lean_array_push(v___x_1239_, v___x_1237_);
v___x_1241_ = l_Lasm_JS_Web_Support_fields(v___x_1240_);
lean_dec_ref(v___x_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0(lean_object* v___f_1246_, lean_object* v_d_1247_){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1248_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_1249_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1246_, v_d_1247_);
v___x_1250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
v___x_1251_ = lean_unsigned_to_nat(1u);
v___x_1252_ = lean_mk_empty_array_with_capacity(v___x_1251_);
v___x_1253_ = lean_array_push(v___x_1252_, v___x_1250_);
v___x_1254_ = l_Lasm_JS_Web_Support_fields(v___x_1253_);
lean_dec_ref(v___x_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx(lean_object* v_x_1259_){
_start:
{
if (lean_obj_tag(v_x_1259_) == 0)
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_unsigned_to_nat(0u);
return v___x_1260_;
}
else
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_unsigned_to_nat(1u);
return v___x_1261_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx___boxed(lean_object* v_x_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorIdx(v_x_1262_);
lean_dec_ref(v_x_1262_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(lean_object* v_t_1264_, lean_object* v_k_1265_){
_start:
{
if (lean_obj_tag(v_t_1264_) == 0)
{
lean_object* v_value_1266_; lean_object* v___x_1267_; 
v_value_1266_ = lean_ctor_get(v_t_1264_, 0);
lean_inc_ref(v_value_1266_);
lean_dec_ref_known(v_t_1264_, 1);
v___x_1267_ = lean_apply_1(v_k_1265_, v_value_1266_);
return v___x_1267_;
}
else
{
lean_object* v_value_1268_; lean_object* v___x_1269_; 
v_value_1268_ = lean_ctor_get(v_t_1264_, 0);
lean_inc(v_value_1268_);
lean_dec_ref_known(v_t_1264_, 1);
v___x_1269_ = lean_apply_1(v_k_1265_, v_value_1268_);
return v___x_1269_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim(lean_object* v_motive_1270_, lean_object* v_ctorIdx_1271_, lean_object* v_t_1272_, lean_object* v_h_1273_, lean_object* v_k_1274_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1272_, v_k_1274_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___boxed(lean_object* v_motive_1276_, lean_object* v_ctorIdx_1277_, lean_object* v_t_1278_, lean_object* v_h_1279_, lean_object* v_k_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim(v_motive_1276_, v_ctorIdx_1277_, v_t_1278_, v_h_1279_, v_k_1280_);
lean_dec(v_ctorIdx_1277_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_uint8Array_elim___redArg(lean_object* v_t_1282_, lean_object* v_uint8Array_1283_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1282_, v_uint8Array_1283_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_uint8Array_elim(lean_object* v_motive_1285_, lean_object* v_t_1286_, lean_object* v_h_1287_, lean_object* v_uint8Array_1288_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1286_, v_uint8Array_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1290_, lean_object* v_readableStream_1291_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1290_, v_readableStream_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_readableStream_elim(lean_object* v_motive_1293_, lean_object* v_t_1294_, lean_object* v_h_1295_, lean_object* v_readableStream_1296_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lasm_JS_Deno_Uint8ArrayOrReadableStream_ctorElim___redArg(v_t_1294_, v_readableStream_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSUint8ArrayOrReadableStream___lam__0(lean_object* v_x_1298_){
_start:
{
if (lean_obj_tag(v_x_1298_) == 0)
{
lean_object* v_value_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1306_; 
v_value_1299_ = lean_ctor_get(v_x_1298_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v_x_1298_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1301_ = v_x_1298_;
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_value_1299_);
lean_dec(v_x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1304_; 
if (v_isShared_1302_ == 0)
{
lean_ctor_set_tag(v___x_1301_, 6);
v___x_1304_ = v___x_1301_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_value_1299_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
else
{
lean_object* v_value_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v_value_1307_ = lean_ctor_get(v_x_1298_, 0);
lean_inc(v_value_1307_);
lean_dec_ref_known(v_x_1298_, 1);
v___x_1308_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_1309_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1309_, 0, v_value_1307_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
return v___x_1309_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayUint8ArrayOrReadableStream___lam__0(lean_object* v_value_1312_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1313_, 0, v_value_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeReadableStreamUint8ArrayOrReadableStream___lam__0(lean_object* v_value_1316_){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1317_, 0, v_value_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSWriteFileOptions___lam__0(lean_object* v___f_1320_, lean_object* v___f_1321_, lean_object* v___f_1322_, lean_object* v_d_1323_){
_start:
{
lean_object* v_append_1324_; lean_object* v_create_1325_; lean_object* v_createNew_1326_; lean_object* v_mode_1327_; lean_object* v_signal_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_append_1324_ = lean_ctor_get(v_d_1323_, 0);
lean_inc(v_append_1324_);
v_create_1325_ = lean_ctor_get(v_d_1323_, 1);
lean_inc(v_create_1325_);
v_createNew_1326_ = lean_ctor_get(v_d_1323_, 2);
lean_inc(v_createNew_1326_);
v_mode_1327_ = lean_ctor_get(v_d_1323_, 3);
lean_inc(v_mode_1327_);
v_signal_1328_ = lean_ctor_get(v_d_1323_, 4);
lean_inc(v_signal_1328_);
lean_dec_ref(v_d_1323_);
v___x_1329_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_1320_, 2);
v___x_1330_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1320_, v_append_1324_);
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1329_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
v___x_1332_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_1333_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1320_, v_create_1325_);
v___x_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_1336_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1320_, v_createNew_1326_);
v___x_1337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1335_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_1339_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1321_, v_mode_1327_);
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_1342_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1322_, v_signal_1328_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_unsigned_to_nat(5u);
v___x_1345_ = lean_mk_empty_array_with_capacity(v___x_1344_);
v___x_1346_ = lean_array_push(v___x_1345_, v___x_1331_);
v___x_1347_ = lean_array_push(v___x_1346_, v___x_1334_);
v___x_1348_ = lean_array_push(v___x_1347_, v___x_1337_);
v___x_1349_ = lean_array_push(v___x_1348_, v___x_1340_);
v___x_1350_ = lean_array_push(v___x_1349_, v___x_1343_);
v___x_1351_ = l_Lasm_JS_Web_Support_fields(v___x_1350_);
lean_dec_ref(v___x_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx(lean_object* v_x_1357_){
_start:
{
if (lean_obj_tag(v_x_1357_) == 0)
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_unsigned_to_nat(0u);
return v___x_1358_;
}
else
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_unsigned_to_nat(1u);
return v___x_1359_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx___boxed(lean_object* v_x_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorIdx(v_x_1360_);
lean_dec_ref(v_x_1360_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(lean_object* v_t_1362_, lean_object* v_k_1363_){
_start:
{
if (lean_obj_tag(v_t_1362_) == 0)
{
lean_object* v_value_1364_; lean_object* v___x_1365_; 
v_value_1364_ = lean_ctor_get(v_t_1362_, 0);
lean_inc_ref(v_value_1364_);
lean_dec_ref_known(v_t_1362_, 1);
v___x_1365_ = lean_apply_1(v_k_1363_, v_value_1364_);
return v___x_1365_;
}
else
{
lean_object* v_value_1366_; lean_object* v___x_1367_; 
v_value_1366_ = lean_ctor_get(v_t_1362_, 0);
lean_inc(v_value_1366_);
lean_dec_ref_known(v_t_1362_, 1);
v___x_1367_ = lean_apply_1(v_k_1363_, v_value_1366_);
return v___x_1367_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim(lean_object* v_motive_1368_, lean_object* v_ctorIdx_1369_, lean_object* v_t_1370_, lean_object* v_h_1371_, lean_object* v_k_1372_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1370_, v_k_1372_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___boxed(lean_object* v_motive_1374_, lean_object* v_ctorIdx_1375_, lean_object* v_t_1376_, lean_object* v_h_1377_, lean_object* v_k_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim(v_motive_1374_, v_ctorIdx_1375_, v_t_1376_, v_h_1377_, v_k_1378_);
lean_dec(v_ctorIdx_1375_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_domString_elim___redArg(lean_object* v_t_1380_, lean_object* v_domString_1381_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1380_, v_domString_1381_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_domString_elim(lean_object* v_motive_1383_, lean_object* v_t_1384_, lean_object* v_h_1385_, lean_object* v_domString_1386_){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1384_, v_domString_1386_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1388_, lean_object* v_readableStream_1389_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1388_, v_readableStream_1389_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrReadableStream_readableStream_elim(lean_object* v_motive_1391_, lean_object* v_t_1392_, lean_object* v_h_1393_, lean_object* v_readableStream_1394_){
_start:
{
lean_object* v___x_1395_; 
v___x_1395_ = l_Lasm_JS_Deno_DOMStringOrReadableStream_ctorElim___redArg(v_t_1392_, v_readableStream_1394_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrReadableStream___lam__0(lean_object* v_x_1396_){
_start:
{
if (lean_obj_tag(v_x_1396_) == 0)
{
lean_object* v_value_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
v_value_1397_ = lean_ctor_get(v_x_1396_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v_x_1396_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v_x_1396_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_value_1397_);
lean_dec(v_x_1396_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
lean_ctor_set_tag(v___x_1399_, 4);
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_value_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
else
{
lean_object* v_value_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_value_1405_ = lean_ctor_get(v_x_1396_, 0);
lean_inc(v_value_1405_);
lean_dec_ref_known(v_x_1396_, 1);
v___x_1406_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_1407_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1407_, 0, v_value_1405_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
return v___x_1407_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrReadableStream___lam__0(lean_object* v_value_1410_){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1411_, 0, v_value_1410_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeReadableStreamDOMStringOrReadableStream___lam__0(lean_object* v_value_1414_){
_start:
{
lean_object* v___x_1415_; 
v___x_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1415_, 0, v_value_1414_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object* v_x_1418_){
_start:
{
if (lean_obj_tag(v_x_1418_) == 0)
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_unsigned_to_nat(0u);
return v___x_1419_;
}
else
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_unsigned_to_nat(1u);
return v___x_1420_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object* v_x_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorIdx(v_x_1421_);
lean_dec_ref(v_x_1421_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object* v_t_1423_, lean_object* v_k_1424_){
_start:
{
lean_object* v_value_1425_; lean_object* v___x_1426_; 
v_value_1425_ = lean_ctor_get(v_t_1423_, 0);
lean_inc_ref(v_value_1425_);
lean_dec_ref(v_t_1423_);
v___x_1426_ = lean_apply_1(v_k_1424_, v_value_1425_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim(lean_object* v_motive_1427_, lean_object* v_ctorIdx_1428_, lean_object* v_t_1429_, lean_object* v_h_1430_, lean_object* v_k_1431_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1429_, v_k_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object* v_motive_1433_, lean_object* v_ctorIdx_1434_, lean_object* v_t_1435_, lean_object* v_h_1436_, lean_object* v_k_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim(v_motive_1433_, v_ctorIdx_1434_, v_t_1435_, v_h_1436_, v_k_1437_);
lean_dec(v_ctorIdx_1434_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object* v_t_1439_, lean_object* v_domString_1440_){
_start:
{
lean_object* v___x_1441_; 
v___x_1441_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1439_, v_domString_1440_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_domString_elim(lean_object* v_motive_1442_, lean_object* v_t_1443_, lean_object* v_h_1444_, lean_object* v_domString_1445_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1443_, v_domString_1445_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object* v_t_1447_, lean_object* v_sequence_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1447_, v_sequence_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object* v_motive_1450_, lean_object* v_t_1451_, lean_object* v_h_1452_, lean_object* v_sequence_1453_){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = l_Lasm_JS_Deno_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1451_, v_sequence_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_x_1455_){
_start:
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1456_, 0, v_x_1455_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object* v___f_1476_, lean_object* v_x_1477_){
_start:
{
if (lean_obj_tag(v_x_1477_) == 0)
{
lean_object* v_value_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec_ref(v___f_1476_);
v_value_1478_ = lean_ctor_get(v_x_1477_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_x_1477_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v_x_1477_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_value_1478_);
lean_dec(v_x_1477_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
lean_ctor_set_tag(v___x_1480_, 4);
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_value_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
else
{
lean_object* v_value_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1497_; 
v_value_1486_ = lean_ctor_get(v_x_1477_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_x_1477_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1488_ = v_x_1477_;
v_isShared_1489_ = v_isSharedCheck_1497_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_value_1486_);
lean_dec(v_x_1477_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1497_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; size_t v_sz_1491_; size_t v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1495_; 
v___x_1490_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9));
v_sz_1491_ = lean_array_size(v_value_1486_);
v___x_1492_ = ((size_t)0ULL);
v___x_1493_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1490_, v___f_1476_, v_sz_1491_, v___x_1492_, v_value_1486_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set_tag(v___x_1488_, 7);
lean_ctor_set(v___x_1488_, 0, v___x_1493_);
v___x_1495_ = v___x_1488_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1503_, 0, v_value_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1506_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1507_, 0, v_value_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0(lean_object* v___f_1511_, lean_object* v___x_1512_, lean_object* v_d_1513_){
_start:
{
lean_object* v_recursive_1514_; lean_object* v_ignore_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1532_; 
v_recursive_1514_ = lean_ctor_get(v_d_1513_, 0);
v_ignore_1515_ = lean_ctor_get(v_d_1513_, 1);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_d_1513_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1517_ = v_d_1513_;
v_isShared_1518_ = v_isSharedCheck_1532_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_ignore_1515_);
lean_inc(v_recursive_1514_);
lean_dec(v_d_1513_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1532_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1522_; 
v___x_1519_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_1520_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1511_, v_recursive_1514_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 1, v___x_1520_);
lean_ctor_set(v___x_1517_, 0, v___x_1519_);
v___x_1522_ = v___x_1517_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1531_, 1, v___x_1520_);
v___x_1522_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1523_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0));
v___x_1524_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1512_, v_ignore_1515_);
v___x_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1523_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = lean_unsigned_to_nat(2u);
v___x_1527_ = lean_mk_empty_array_with_capacity(v___x_1526_);
v___x_1528_ = lean_array_push(v___x_1527_, v___x_1522_);
v___x_1529_ = lean_array_push(v___x_1528_, v___x_1525_);
v___x_1530_ = l_Lasm_JS_Web_Support_fields(v___x_1529_);
lean_dec_ref(v___x_1529_);
return v___x_1530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0(uint8_t v_d_1538_){
_start:
{
lean_object* v___x_1539_; lean_object* v___y_1541_; 
v___x_1539_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0));
switch(v_d_1538_)
{
case 0:
{
lean_object* v___x_1547_; 
v___x_1547_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
v___y_1541_ = v___x_1547_;
goto v___jp_1540_;
}
case 1:
{
lean_object* v___x_1548_; 
v___x_1548_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
v___y_1541_ = v___x_1548_;
goto v___jp_1540_;
}
default: 
{
lean_object* v___x_1549_; 
v___x_1549_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
v___y_1541_ = v___x_1549_;
goto v___jp_1540_;
}
}
v___jp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
lean_inc(v___y_1541_);
v___x_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1539_);
lean_ctor_set(v___x_1542_, 1, v___y_1541_);
v___x_1543_ = lean_unsigned_to_nat(1u);
v___x_1544_ = lean_mk_empty_array_with_capacity(v___x_1543_);
v___x_1545_ = lean_array_push(v___x_1544_, v___x_1542_);
v___x_1546_ = l_Lasm_JS_Web_Support_fields(v___x_1545_);
lean_dec_ref(v___x_1545_);
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___boxed(lean_object* v_d_1550_){
_start:
{
uint8_t v_d_boxed_1551_; lean_object* v_res_1552_; 
v_d_boxed_1551_ = lean_unbox(v_d_1550_);
v_res_1552_ = l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0(v_d_boxed_1551_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_readable(lean_object* v_self_1556_){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1558_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_readable___closed__0));
v___x_1559_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1556_, v___x_1558_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1567_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1562_ = v___x_1559_;
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1559_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
v_a_1568_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1559_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1559_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_readable___boxed(lean_object* v_self_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lasm_JS_Deno_FsFile_readable(v_self_1576_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_writable(lean_object* v_self_1580_){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_writable___closed__0));
v___x_1583_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1580_, v___x_1582_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1583_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1583_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
v_a_1592_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1583_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1583_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_writable___boxed(lean_object* v_self_1600_, lean_object* v_a_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l_Lasm_JS_Deno_FsFile_writable(v_self_1600_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncate(lean_object* v_self_1603_, lean_object* v_len_1604_){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1606_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_1607_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_1604_);
v___x_1608_ = lean_unsigned_to_nat(1u);
v___x_1609_ = lean_mk_empty_array_with_capacity(v___x_1608_);
v___x_1610_ = lean_array_push(v___x_1609_, v___x_1607_);
v___x_1611_ = l_Lasm_JS_Web_Support_args(v___x_1610_);
v___x_1612_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1603_, v___x_1606_, v___x_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncate___boxed(lean_object* v_self_1613_, lean_object* v_len_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lasm_JS_Deno_FsFile_truncate(v_self_1613_, v_len_1614_);
lean_dec(v_len_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncateSync(lean_object* v_self_1618_, lean_object* v_len_1619_){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1621_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_truncateSync___closed__0));
v___x_1622_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_1619_);
v___x_1623_ = lean_unsigned_to_nat(1u);
v___x_1624_ = lean_mk_empty_array_with_capacity(v___x_1623_);
v___x_1625_ = lean_array_push(v___x_1624_, v___x_1622_);
v___x_1626_ = l_Lasm_JS_Web_Support_args(v___x_1625_);
v___x_1627_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1618_, v___x_1621_, v___x_1626_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_truncateSync___boxed(lean_object* v_self_1628_, lean_object* v_len_1629_, lean_object* v_a_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lasm_JS_Deno_FsFile_truncateSync(v_self_1628_, v_len_1629_);
lean_dec(v_len_1629_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2(lean_object* v___f_1632_, lean_object* v_x_1633_){
_start:
{
if (lean_obj_tag(v_x_1633_) == 0)
{
lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1643_; 
lean_dec_ref(v___f_1632_);
v_a_1635_ = lean_ctor_get(v_x_1633_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v_x_1633_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1637_ = v_x_1633_;
v_isShared_1638_ = v_isSharedCheck_1643_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v_x_1633_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1643_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1635_);
v___x_1640_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
return v___x_1641_;
}
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1645_; 
v_a_1644_ = lean_ctor_get(v_x_1633_, 0);
lean_inc(v_a_1644_);
lean_dec_ref_known(v_x_1633_, 1);
v___x_1645_ = lean_apply_2(v___f_1632_, v_a_1644_, lean_box(0));
return v___x_1645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1646_, lean_object* v_x_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2(v___f_1646_, v_x_1647_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8(lean_object* v___f_1650_, lean_object* v_x_1651_){
_start:
{
if (lean_obj_tag(v_x_1651_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1661_; 
lean_dec_ref(v___f_1650_);
v_a_1653_ = lean_ctor_get(v_x_1651_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_x_1651_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1655_ = v_x_1651_;
v_isShared_1656_ = v_isSharedCheck_1661_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v_x_1651_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1661_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
}
}
else
{
lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1673_; 
v_isSharedCheck_1673_ = !lean_is_exclusive(v_x_1651_);
if (v_isSharedCheck_1673_ == 0)
{
lean_object* v_unused_1674_; 
v_unused_1674_ = lean_ctor_get(v_x_1651_, 0);
lean_dec(v_unused_1674_);
v___x_1663_ = v_x_1651_;
v_isShared_1664_ = v_isSharedCheck_1673_;
goto v_resetjp_1662_;
}
else
{
lean_dec(v_x_1651_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1673_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1665_; uint8_t v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1669_; 
v___x_1665_ = lean_unsigned_to_nat(0u);
v___x_1666_ = 0;
v___x_1667_ = lean_io_promise_new();
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 0, v___x_1667_);
v___x_1669_ = v___x_1663_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1667_);
v___x_1669_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1669_);
v___x_1671_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1665_, v___x_1666_, v___x_1670_, v___f_1650_);
return v___x_1671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8___boxed(lean_object* v___f_1675_, lean_object* v_x_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8(v___f_1675_, v_x_1676_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1(lean_object* v___f_1679_, lean_object* v_bytes_1680_){
_start:
{
lean_object* v___x_1682_; uint8_t v___x_1683_; lean_object* v_val_1685_; lean_object* v___x_1688_; 
v___x_1682_ = lean_unsigned_to_nat(0u);
v___x_1683_ = 0;
v___x_1688_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1680_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1691_ = v___x_1688_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1688_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
lean_ctor_set_tag(v___x_1691_, 1);
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_a_1689_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
v_val_1685_ = v___x_1694_;
goto v___jp_1684_;
}
}
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
v_a_1697_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1688_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1688_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
lean_ctor_set_tag(v___x_1699_, 0);
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
v_val_1685_ = v___x_1702_;
goto v___jp_1684_;
}
}
}
v___jp_1684_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_val_1685_);
v___x_1687_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1682_, v___x_1683_, v___x_1686_, v___f_1679_);
return v___x_1687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1705_, lean_object* v_bytes_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1(v___f_1705_, v_bytes_1706_);
lean_dec_ref(v_bytes_1706_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_1709_, lean_object* v_x_1710_){
_start:
{
if (lean_obj_tag(v_x_1710_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1723_; 
v_a_1712_ = lean_ctor_get(v_x_1710_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v_x_1710_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1714_ = v_x_1710_;
v_isShared_1715_ = v_isSharedCheck_1723_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v_x_1710_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1723_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1716_ = lean_io_error_to_string(v_a_1712_);
v___x_1717_ = lean_string_append(v_failurePrefix_1709_, v___x_1716_);
lean_dec_ref(v___x_1716_);
v___x_1718_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 0, v___x_1718_);
v___x_1720_ = v___x_1714_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1718_);
v___x_1720_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
lean_object* v___x_1721_; 
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
return v___x_1721_;
}
}
}
else
{
lean_object* v___x_1724_; 
lean_dec_ref(v_failurePrefix_1709_);
v___x_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1724_, 0, v_x_1710_);
return v___x_1724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1725_, lean_object* v_x_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4(v_failurePrefix_1725_, v_x_1726_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0(lean_object* v_context_1729_, lean_object* v_x_1730_){
_start:
{
lean_object* v_val_1733_; 
if (lean_obj_tag(v_x_1730_) == 0)
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1743_; 
v_a_1735_ = lean_ctor_get(v_x_1730_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_x_1730_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1737_ = v_x_1730_;
v_isShared_1738_ = v_isSharedCheck_1743_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v_x_1730_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1743_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1735_);
v___x_1740_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
return v___x_1741_;
}
}
}
else
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1757_; 
v_a_1744_ = lean_ctor_get(v_x_1730_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v_x_1730_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1746_ = v_x_1730_;
v_isShared_1747_ = v_isSharedCheck_1757_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v_x_1730_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1757_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_1729_, v_a_1744_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v_a_1749_);
v___x_1751_ = v___x_1746_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1749_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
v_val_1733_ = v___x_1751_;
goto v___jp_1732_;
}
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; 
v_a_1753_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1748_, 1);
if (v_isShared_1747_ == 0)
{
lean_ctor_set_tag(v___x_1746_, 0);
lean_ctor_set(v___x_1746_, 0, v_a_1753_);
v___x_1755_ = v___x_1746_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1753_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
v_val_1733_ = v___x_1755_;
goto v___jp_1732_;
}
}
}
}
v___jp_1732_:
{
lean_object* v___x_1734_; 
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v_val_1733_);
return v___x_1734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1758_, lean_object* v_x_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0(v_context_1758_, v_x_1759_);
lean_dec_ref(v_context_1758_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5(lean_object* v___x_1762_, uint8_t v___x_1763_, lean_object* v___f_1764_, lean_object* v_a_1765_, uint32_t v_op_1766_, uint64_t v_flags_1767_, lean_object* v_payload_1768_, lean_object* v_x_1769_){
_start:
{
lean_object* v_val_1772_; 
if (lean_obj_tag(v_x_1769_) == 0)
{
lean_object* v___x_1775_; 
lean_dec_ref(v___f_1764_);
lean_dec(v___x_1762_);
v___x_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1775_, 0, v_x_1769_);
return v___x_1775_;
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1790_; 
v_a_1776_ = lean_ctor_get(v_x_1769_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v_x_1769_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1778_ = v_x_1769_;
v_isShared_1779_ = v_isSharedCheck_1790_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v_x_1769_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1790_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
uint32_t v___x_1780_; lean_object* v___x_1781_; 
v___x_1780_ = 0;
v___x_1781_ = lasm_js_call_into(v_a_1765_, v_op_1766_, v___x_1780_, v_flags_1767_, v_a_1776_, v_payload_1768_);
lean_dec(v_a_1776_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v_a_1782_; lean_object* v___x_1784_; 
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_a_1782_);
lean_dec_ref_known(v___x_1781_, 1);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v_a_1782_);
v___x_1784_ = v___x_1778_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
v_val_1772_ = v___x_1784_;
goto v___jp_1771_;
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; 
v_a_1786_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1781_, 1);
if (v_isShared_1779_ == 0)
{
lean_ctor_set_tag(v___x_1778_, 0);
lean_ctor_set(v___x_1778_, 0, v_a_1786_);
v___x_1788_ = v___x_1778_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1786_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
v_val_1772_ = v___x_1788_;
goto v___jp_1771_;
}
}
}
}
v___jp_1771_:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v_val_1772_);
v___x_1774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1762_, v___x_1763_, v___x_1773_, v___f_1764_);
return v___x_1774_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed(lean_object* v___x_1791_, lean_object* v___x_1792_, lean_object* v___f_1793_, lean_object* v_a_1794_, lean_object* v_op_1795_, lean_object* v_flags_1796_, lean_object* v_payload_1797_, lean_object* v_x_1798_, lean_object* v___y_1799_){
_start:
{
uint8_t v___x_1014__boxed_1800_; uint32_t v_op_boxed_1801_; uint64_t v_flags_boxed_1802_; lean_object* v_res_1803_; 
v___x_1014__boxed_1800_ = lean_unbox(v___x_1792_);
v_op_boxed_1801_ = lean_unbox_uint32(v_op_1795_);
lean_dec(v_op_1795_);
v_flags_boxed_1802_ = lean_unbox_uint64(v_flags_1796_);
lean_dec_ref(v_flags_1796_);
v_res_1803_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5(v___x_1791_, v___x_1014__boxed_1800_, v___f_1793_, v_a_1794_, v_op_boxed_1801_, v_flags_boxed_1802_, v_payload_1797_, v_x_1798_);
lean_dec(v_payload_1797_);
lean_dec(v_a_1794_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7(lean_object* v___f_1804_, lean_object* v_a_1805_, uint32_t v_op_1806_, uint64_t v_flags_1807_, lean_object* v_payload_1808_, lean_object* v_x_1809_){
_start:
{
if (lean_obj_tag(v_x_1809_) == 0)
{
lean_object* v___x_1811_; 
lean_dec_ref(v___f_1804_);
v___x_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1811_, 0, v_x_1809_);
return v___x_1811_;
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1832_; 
v_a_1812_ = lean_ctor_get(v_x_1809_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_x_1809_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1814_ = v_x_1809_;
v_isShared_1815_ = v_isSharedCheck_1832_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v_x_1809_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1832_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
uint32_t v___x_1816_; lean_object* v___x_1817_; uint8_t v___x_1818_; lean_object* v_val_1820_; lean_object* v___x_1823_; 
v___x_1816_ = 0;
v___x_1817_ = lean_unsigned_to_nat(0u);
v___x_1818_ = 0;
v___x_1823_ = lasm_js_call_into(v_a_1805_, v_op_1806_, v___x_1816_, v_flags_1807_, v_a_1812_, v_payload_1808_);
lean_dec(v_a_1812_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v_a_1824_);
v___x_1826_ = v___x_1814_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1824_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
v_val_1820_ = v___x_1826_;
goto v___jp_1819_;
}
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1830_; 
v_a_1828_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1823_, 1);
if (v_isShared_1815_ == 0)
{
lean_ctor_set_tag(v___x_1814_, 0);
lean_ctor_set(v___x_1814_, 0, v_a_1828_);
v___x_1830_ = v___x_1814_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_a_1828_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
v_val_1820_ = v___x_1830_;
goto v___jp_1819_;
}
}
v___jp_1819_:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1821_, 0, v_val_1820_);
v___x_1822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1817_, v___x_1818_, v___x_1821_, v___f_1804_);
return v___x_1822_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed(lean_object* v___f_1833_, lean_object* v_a_1834_, lean_object* v_op_1835_, lean_object* v_flags_1836_, lean_object* v_payload_1837_, lean_object* v_x_1838_, lean_object* v___y_1839_){
_start:
{
uint32_t v_op_boxed_1840_; uint64_t v_flags_boxed_1841_; lean_object* v_res_1842_; 
v_op_boxed_1840_ = lean_unbox_uint32(v_op_1835_);
lean_dec(v_op_1835_);
v_flags_boxed_1841_ = lean_unbox_uint64(v_flags_1836_);
lean_dec_ref(v_flags_1836_);
v_res_1842_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7(v___f_1833_, v_a_1834_, v_op_boxed_1840_, v_flags_boxed_1841_, v_payload_1837_, v_x_1838_);
lean_dec(v_payload_1837_);
lean_dec(v_a_1834_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3(lean_object* v_a_1843_, lean_object* v_x_1844_){
_start:
{
if (lean_obj_tag(v_x_1844_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1854_; 
v_a_1846_ = lean_ctor_get(v_x_1844_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v_x_1844_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1848_ = v_x_1844_;
v_isShared_1849_ = v_isSharedCheck_1854_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v_x_1844_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1854_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_object* v___x_1852_; 
v___x_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
return v___x_1852_;
}
}
}
else
{
lean_object* v___x_1855_; 
lean_dec_ref_known(v_x_1844_, 1);
v___x_1855_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1843_);
return v___x_1855_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed(lean_object* v_a_1856_, lean_object* v_x_1857_, lean_object* v___y_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3(v_a_1856_, v_x_1857_);
lean_dec(v_a_1856_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_1860_, uint32_t v_op_1861_, uint64_t v_flags_1862_, lean_object* v_payload_1863_, lean_object* v___f_1864_, lean_object* v___f_1865_, lean_object* v___f_1866_, lean_object* v_x_1867_){
_start:
{
if (lean_obj_tag(v_x_1867_) == 0)
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1877_; 
lean_dec_ref(v___f_1866_);
lean_dec_ref(v___f_1865_);
lean_dec_ref(v___f_1864_);
lean_dec(v_payload_1863_);
v_a_1869_ = lean_ctor_get(v_x_1867_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v_x_1867_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1871_ = v_x_1867_;
v_isShared_1872_ = v_isSharedCheck_1877_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v_x_1867_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1877_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1874_; 
if (v_isShared_1872_ == 0)
{
v___x_1874_ = v___x_1871_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1869_);
v___x_1874_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
lean_object* v___x_1875_; 
v___x_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
return v___x_1875_;
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1924_; 
v_a_1878_ = lean_ctor_get(v_x_1867_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_x_1867_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1880_ = v_x_1867_;
v_isShared_1881_ = v_isSharedCheck_1924_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v_x_1867_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1924_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; 
v___x_1882_ = lean_string_utf8_byte_size(v_failurePrefix_1860_);
v___x_1883_ = lean_unsigned_to_nat(0u);
v___x_1884_ = lean_nat_dec_eq(v___x_1882_, v___x_1883_);
if (v___x_1884_ == 0)
{
lean_object* v___f_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___f_1889_; lean_object* v_val_1891_; lean_object* v___x_1896_; 
lean_dec_ref(v___f_1866_);
lean_inc(v_a_1878_);
v___f_1885_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1885_, 0, v_a_1878_);
v___x_1886_ = lean_box(v___x_1884_);
v___x_1887_ = lean_box_uint32(v_op_1861_);
v___x_1888_ = lean_box_uint64(v_flags_1862_);
lean_inc(v_payload_1863_);
v___f_1889_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1889_, 0, v___x_1883_);
lean_closure_set(v___f_1889_, 1, v___x_1886_);
lean_closure_set(v___f_1889_, 2, v___f_1885_);
lean_closure_set(v___f_1889_, 3, v_a_1878_);
lean_closure_set(v___f_1889_, 4, v___x_1887_);
lean_closure_set(v___f_1889_, 5, v___x_1888_);
lean_closure_set(v___f_1889_, 6, v_payload_1863_);
v___x_1896_ = l_Lasm_JS_Wire_encodeIO(v_payload_1863_);
lean_dec(v_payload_1863_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1899_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v_a_1897_);
v___x_1899_ = v___x_1880_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1897_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
v_val_1891_ = v___x_1899_;
goto v___jp_1890_;
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; 
v_a_1901_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1896_, 1);
if (v_isShared_1881_ == 0)
{
lean_ctor_set_tag(v___x_1880_, 0);
lean_ctor_set(v___x_1880_, 0, v_a_1901_);
v___x_1903_ = v___x_1880_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
v_val_1891_ = v___x_1903_;
goto v___jp_1890_;
}
}
v___jp_1890_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v_val_1891_);
v___x_1893_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1883_, v___x_1884_, v___x_1892_, v___f_1889_);
v___x_1894_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1883_, v___x_1884_, v___x_1893_, v___f_1864_);
v___x_1895_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1883_, v___x_1884_, v___x_1894_, v___f_1865_);
return v___x_1895_;
}
}
else
{
lean_object* v___f_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___f_1908_; uint8_t v___x_1909_; lean_object* v_val_1911_; lean_object* v___x_1915_; 
lean_dec_ref(v___f_1865_);
lean_dec_ref(v___f_1864_);
lean_inc(v_a_1878_);
v___f_1905_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1905_, 0, v_a_1878_);
v___x_1906_ = lean_box_uint32(v_op_1861_);
v___x_1907_ = lean_box_uint64(v_flags_1862_);
lean_inc(v_payload_1863_);
v___f_1908_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1908_, 0, v___f_1905_);
lean_closure_set(v___f_1908_, 1, v_a_1878_);
lean_closure_set(v___f_1908_, 2, v___x_1906_);
lean_closure_set(v___f_1908_, 3, v___x_1907_);
lean_closure_set(v___f_1908_, 4, v_payload_1863_);
v___x_1909_ = 0;
v___x_1915_ = l_Lasm_JS_Wire_encodeIO(v_payload_1863_);
lean_dec(v_payload_1863_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1918_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v_a_1916_);
v___x_1918_ = v___x_1880_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1916_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
v_val_1911_ = v___x_1918_;
goto v___jp_1910_;
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; 
v_a_1920_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1915_, 1);
if (v_isShared_1881_ == 0)
{
lean_ctor_set_tag(v___x_1880_, 0);
lean_ctor_set(v___x_1880_, 0, v_a_1920_);
v___x_1922_ = v___x_1880_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1920_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
v_val_1911_ = v___x_1922_;
goto v___jp_1910_;
}
}
v___jp_1910_:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1912_, 0, v_val_1911_);
v___x_1913_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1883_, v___x_1909_, v___x_1912_, v___f_1908_);
v___x_1914_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1883_, v___x_1909_, v___x_1913_, v___f_1866_);
return v___x_1914_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_1925_, lean_object* v_op_1926_, lean_object* v_flags_1927_, lean_object* v_payload_1928_, lean_object* v___f_1929_, lean_object* v___f_1930_, lean_object* v___f_1931_, lean_object* v_x_1932_, lean_object* v___y_1933_){
_start:
{
uint32_t v_op_boxed_1934_; uint64_t v_flags_boxed_1935_; lean_object* v_res_1936_; 
v_op_boxed_1934_ = lean_unbox_uint32(v_op_1926_);
lean_dec(v_op_1926_);
v_flags_boxed_1935_ = lean_unbox_uint64(v_flags_1927_);
lean_dec_ref(v_flags_1927_);
v_res_1936_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6(v_failurePrefix_1925_, v_op_boxed_1934_, v_flags_boxed_1935_, v_payload_1928_, v___f_1929_, v___f_1930_, v___f_1931_, v_x_1932_);
lean_dec_ref(v_failurePrefix_1925_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(lean_object* v_context_1937_, uint32_t v_op_1938_, uint64_t v_flags_1939_, lean_object* v_payload_1940_, lean_object* v_failurePrefix_1941_){
_start:
{
lean_object* v___f_1943_; lean_object* v___f_1944_; lean_object* v___f_1945_; lean_object* v___f_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___f_1949_; lean_object* v___f_1950_; lean_object* v___x_1951_; uint8_t v___x_1952_; lean_object* v_val_1954_; lean_object* v___x_1957_; 
v___f_1943_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1943_, 0, v_context_1937_);
v___f_1944_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1944_, 0, v___f_1943_);
v___f_1945_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1945_, 0, v___f_1944_);
lean_inc_ref(v_failurePrefix_1941_);
v___f_1946_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1946_, 0, v_failurePrefix_1941_);
v___x_1947_ = lean_box_uint32(v_op_1938_);
v___x_1948_ = lean_box_uint64(v_flags_1939_);
lean_inc_ref(v___f_1945_);
v___f_1949_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1949_, 0, v_failurePrefix_1941_);
lean_closure_set(v___f_1949_, 1, v___x_1947_);
lean_closure_set(v___f_1949_, 2, v___x_1948_);
lean_closure_set(v___f_1949_, 3, v_payload_1940_);
lean_closure_set(v___f_1949_, 4, v___f_1946_);
lean_closure_set(v___f_1949_, 5, v___f_1945_);
lean_closure_set(v___f_1949_, 6, v___f_1945_);
v___f_1950_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1950_, 0, v___f_1949_);
v___x_1951_ = lean_unsigned_to_nat(0u);
v___x_1952_ = 0;
v___x_1957_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1957_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1957_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
lean_ctor_set_tag(v___x_1960_, 1);
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
v_val_1954_ = v___x_1963_;
goto v___jp_1953_;
}
}
}
else
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
v_a_1966_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___x_1957_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1957_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set_tag(v___x_1968_, 0);
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1966_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
v_val_1954_ = v___x_1971_;
goto v___jp_1953_;
}
}
}
v___jp_1953_:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1955_, 0, v_val_1954_);
v___x_1956_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1951_, v___x_1952_, v___x_1955_, v___f_1950_);
return v___x_1956_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___boxed(lean_object* v_context_1974_, lean_object* v_op_1975_, lean_object* v_flags_1976_, lean_object* v_payload_1977_, lean_object* v_failurePrefix_1978_, lean_object* v_a_1979_){
_start:
{
uint32_t v_op_boxed_1980_; uint64_t v_flags_boxed_1981_; lean_object* v_res_1982_; 
v_op_boxed_1980_ = lean_unbox_uint32(v_op_1975_);
lean_dec(v_op_1975_);
v_flags_boxed_1981_ = lean_unbox_uint64(v_flags_1976_);
lean_dec_ref(v_flags_1976_);
v_res_1982_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(v_context_1974_, v_op_boxed_1980_, v_flags_boxed_1981_, v_payload_1977_, v_failurePrefix_1978_);
return v_res_1982_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1983_; uint64_t v___x_1984_; 
v___x_1983_ = 0;
v___x_1984_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(uint8_t v_await_1985_, uint64_t v_extra_1986_){
_start:
{
uint64_t v___x_1987_; uint64_t v___y_1989_; 
v___x_1987_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_1985_ == 0)
{
uint64_t v___x_1992_; 
v___x_1992_ = 0ULL;
v___y_1989_ = v___x_1992_;
goto v___jp_1988_;
}
else
{
uint64_t v___x_1993_; 
v___x_1993_ = 2ULL;
v___y_1989_ = v___x_1993_;
goto v___jp_1988_;
}
v___jp_1988_:
{
uint64_t v___x_1990_; uint64_t v___x_1991_; 
v___x_1990_ = lean_uint64_lor(v___x_1987_, v___y_1989_);
v___x_1991_ = lean_uint64_lor(v___x_1990_, v_extra_1986_);
return v___x_1991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___boxed(lean_object* v_await_1994_, lean_object* v_extra_1995_){
_start:
{
uint8_t v_await_boxed_1996_; uint64_t v_extra_boxed_1997_; uint64_t v_res_1998_; lean_object* v_r_1999_; 
v_await_boxed_1996_ = lean_unbox(v_await_1994_);
v_extra_boxed_1997_ = lean_unbox_uint64(v_extra_1995_);
lean_dec_ref(v_extra_1995_);
v_res_1998_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(v_await_boxed_1996_, v_extra_boxed_1997_);
v_r_1999_ = lean_box_uint64(v_res_1998_);
return v_r_1999_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1(void){
_start:
{
uint64_t v___x_2001_; uint8_t v___x_2002_; uint64_t v___x_2003_; 
v___x_2001_ = 8ULL;
v___x_2002_ = 0;
v___x_2003_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0(v___x_2002_, v___x_2001_);
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(lean_object* v_o_2004_, lean_object* v_name_2005_, lean_object* v_args_2006_){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; uint32_t v___x_2013_; uint64_t v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2008_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2009_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2009_, 0, v_o_2004_);
lean_ctor_set(v___x_2009_, 1, v___x_2008_);
lean_inc_ref(v_name_2005_);
v___x_2010_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2010_, 0, v_name_2005_);
v___x_2011_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2012_ = lean_string_append(v___x_2011_, v_name_2005_);
lean_dec_ref(v_name_2005_);
v___x_2013_ = 205;
v___x_2014_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1);
v___x_2015_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2015_, 0, v_args_2006_);
v___x_2016_ = lean_unsigned_to_nat(3u);
v___x_2017_ = lean_mk_empty_array_with_capacity(v___x_2016_);
v___x_2018_ = lean_array_push(v___x_2017_, v___x_2009_);
v___x_2019_ = lean_array_push(v___x_2018_, v___x_2010_);
v___x_2020_ = lean_array_push(v___x_2019_, v___x_2015_);
v___x_2021_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
v___x_2022_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1(v___x_2012_, v___x_2013_, v___x_2014_, v___x_2021_, v___x_2008_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___boxed(lean_object* v_o_2023_, lean_object* v_name_2024_, lean_object* v_args_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(v_o_2023_, v_name_2024_, v_args_2025_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seek(lean_object* v_self_2029_, lean_object* v_offset_2030_, lean_object* v_whence_2031_){
_start:
{
lean_object* v___x_2033_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2044_; 
v___x_2033_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_seek___closed__0));
if (lean_obj_tag(v_offset_2030_) == 0)
{
double v_value_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2059_; 
v_value_2052_ = lean_ctor_get_float(v_offset_2030_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_offset_2030_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2054_ = v_offset_2030_;
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
else
{
lean_dec(v_offset_2030_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_2055_ == 0)
{
lean_ctor_set_tag(v___x_2054_, 3);
v___x_2057_ = v___x_2054_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2058_, 0, v_value_2052_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
v___y_2044_ = v___x_2057_;
goto v___jp_2043_;
}
}
}
else
{
lean_object* v_value_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
v_value_2060_ = lean_ctor_get(v_offset_2030_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v_offset_2030_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v_offset_2030_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_value_2060_);
lean_dec(v_offset_2030_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
lean_ctor_set_tag(v___x_2062_, 5);
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_value_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
v___y_2044_ = v___x_2065_;
goto v___jp_2043_;
}
}
}
v___jp_2034_:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2037_ = lean_unsigned_to_nat(2u);
v___x_2038_ = lean_mk_empty_array_with_capacity(v___x_2037_);
v___x_2039_ = lean_array_push(v___x_2038_, v___y_2035_);
v___x_2040_ = lean_array_push(v___x_2039_, v___y_2036_);
v___x_2041_ = l_Lasm_JS_Web_Support_args(v___x_2040_);
v___x_2042_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0(v_self_2029_, v___x_2033_, v___x_2041_);
return v___x_2042_;
}
v___jp_2043_:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; 
v___x_2045_ = lean_nat_to_int(v_whence_2031_);
v___x_2046_ = lean_nat_abs(v___x_2045_);
v___x_2047_ = lean_cstr_to_nat("9007199254740991");
v___x_2048_ = lean_nat_dec_le(v___x_2046_, v___x_2047_);
lean_dec(v___x_2046_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2045_);
v___y_2035_ = v___y_2044_;
v___y_2036_ = v___x_2049_;
goto v___jp_2034_;
}
else
{
double v___x_2050_; lean_object* v___x_2051_; 
v___x_2050_ = l_Float_ofInt(v___x_2045_);
lean_dec(v___x_2045_);
v___x_2051_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2051_, 0, v___x_2050_);
v___y_2035_ = v___y_2044_;
v___y_2036_ = v___x_2051_;
goto v___jp_2034_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seek___boxed(lean_object* v_self_2068_, lean_object* v_offset_2069_, lean_object* v_whence_2070_, lean_object* v_a_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l_Lasm_JS_Deno_FsFile_seek(v_self_2068_, v_offset_2069_, v_whence_2070_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(lean_object* v_o_2073_, lean_object* v_name_2074_, lean_object* v_args_2075_){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; uint64_t v___x_2080_; lean_object* v___x_2081_; 
v___x_2077_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2078_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2078_, 0, v_o_2073_);
lean_ctor_set(v___x_2078_, 1, v___x_2077_);
lean_inc_ref(v_name_2074_);
v___x_2079_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2079_, 0, v_name_2074_);
v___x_2080_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__1);
v___x_2081_ = l_Lasm_JS_Value_invokeRaw(v___x_2078_, v___x_2079_, v_args_2075_, v___x_2080_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
lean_inc(v_a_2082_);
lean_dec_ref_known(v___x_2081_, 1);
v___x_2083_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2084_ = lean_string_append(v___x_2083_, v_name_2074_);
lean_dec_ref(v_name_2074_);
v___x_2085_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v___x_2084_, v_a_2082_);
lean_dec(v_a_2082_);
lean_dec_ref(v___x_2084_);
return v___x_2085_;
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec_ref(v_name_2074_);
v_a_2086_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2081_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2081_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0___boxed(lean_object* v_o_2094_, lean_object* v_name_2095_, lean_object* v_args_2096_, lean_object* v_a_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(v_o_2094_, v_name_2095_, v_args_2096_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seekSync(lean_object* v_self_2100_, lean_object* v_offset_2101_, lean_object* v_whence_2102_){
_start:
{
lean_object* v___x_2104_; lean_object* v___y_2106_; lean_object* v___y_2107_; lean_object* v___y_2115_; 
v___x_2104_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_seekSync___closed__0));
if (lean_obj_tag(v_offset_2101_) == 0)
{
double v_value_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2130_; 
v_value_2123_ = lean_ctor_get_float(v_offset_2101_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_offset_2101_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2125_ = v_offset_2101_;
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
else
{
lean_dec(v_offset_2101_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2128_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set_tag(v___x_2125_, 3);
v___x_2128_ = v___x_2125_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2129_, 0, v_value_2123_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
v___y_2115_ = v___x_2128_;
goto v___jp_2114_;
}
}
}
else
{
lean_object* v_value_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2138_; 
v_value_2131_ = lean_ctor_get(v_offset_2101_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v_offset_2101_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2133_ = v_offset_2101_;
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_value_2131_);
lean_dec(v_offset_2101_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
lean_ctor_set_tag(v___x_2133_, 5);
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v_value_2131_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
v___y_2115_ = v___x_2136_;
goto v___jp_2114_;
}
}
}
v___jp_2105_:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2108_ = lean_unsigned_to_nat(2u);
v___x_2109_ = lean_mk_empty_array_with_capacity(v___x_2108_);
v___x_2110_ = lean_array_push(v___x_2109_, v___y_2106_);
v___x_2111_ = lean_array_push(v___x_2110_, v___y_2107_);
v___x_2112_ = l_Lasm_JS_Web_Support_args(v___x_2111_);
v___x_2113_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_seekSync_spec__0(v_self_2100_, v___x_2104_, v___x_2112_);
return v___x_2113_;
}
v___jp_2114_:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; uint8_t v___x_2119_; 
v___x_2116_ = lean_nat_to_int(v_whence_2102_);
v___x_2117_ = lean_nat_abs(v___x_2116_);
v___x_2118_ = lean_cstr_to_nat("9007199254740991");
v___x_2119_ = lean_nat_dec_le(v___x_2117_, v___x_2118_);
lean_dec(v___x_2117_);
if (v___x_2119_ == 0)
{
lean_object* v___x_2120_; 
v___x_2120_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2116_);
v___y_2106_ = v___y_2115_;
v___y_2107_ = v___x_2120_;
goto v___jp_2105_;
}
else
{
double v___x_2121_; lean_object* v___x_2122_; 
v___x_2121_ = l_Float_ofInt(v___x_2116_);
lean_dec(v___x_2116_);
v___x_2122_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2122_, 0, v___x_2121_);
v___y_2106_ = v___y_2115_;
v___y_2107_ = v___x_2122_;
goto v___jp_2105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_seekSync___boxed(lean_object* v_self_2139_, lean_object* v_offset_2140_, lean_object* v_whence_2141_, lean_object* v_a_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l_Lasm_JS_Deno_FsFile_seekSync(v_self_2139_, v_offset_2140_, v_whence_2141_);
return v_res_2143_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(uint8_t v_await_2144_, uint64_t v_extra_2145_){
_start:
{
uint64_t v___x_2146_; uint64_t v___y_2148_; 
v___x_2146_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_2144_ == 0)
{
uint64_t v___x_2151_; 
v___x_2151_ = 0ULL;
v___y_2148_ = v___x_2151_;
goto v___jp_2147_;
}
else
{
uint64_t v___x_2152_; 
v___x_2152_ = 2ULL;
v___y_2148_ = v___x_2152_;
goto v___jp_2147_;
}
v___jp_2147_:
{
uint64_t v___x_2149_; uint64_t v___x_2150_; 
v___x_2149_ = lean_uint64_lor(v___x_2146_, v___y_2148_);
v___x_2150_ = lean_uint64_lor(v___x_2149_, v_extra_2145_);
return v___x_2150_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0___boxed(lean_object* v_await_2153_, lean_object* v_extra_2154_){
_start:
{
uint8_t v_await_boxed_2155_; uint64_t v_extra_boxed_2156_; uint64_t v_res_2157_; lean_object* v_r_2158_; 
v_await_boxed_2155_ = lean_unbox(v_await_2153_);
v_extra_boxed_2156_ = lean_unbox_uint64(v_extra_2154_);
lean_dec_ref(v_extra_2154_);
v_res_2157_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(v_await_boxed_2155_, v_extra_boxed_2156_);
v_r_2158_ = lean_box_uint64(v_res_2157_);
return v_r_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2(lean_object* v___f_2159_, lean_object* v_x_2160_){
_start:
{
if (lean_obj_tag(v_x_2160_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2170_; 
lean_dec_ref(v___f_2159_);
v_a_2162_ = lean_ctor_get(v_x_2160_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v_x_2160_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2164_ = v_x_2160_;
v_isShared_2165_ = v_isSharedCheck_2170_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v_x_2160_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2170_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2168_; 
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
return v___x_2168_;
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2172_; 
v_a_2171_ = lean_ctor_get(v_x_2160_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v_x_2160_, 1);
v___x_2172_ = lean_apply_2(v___f_2159_, v_a_2171_, lean_box(0));
return v___x_2172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2___boxed(lean_object* v___f_2173_, lean_object* v_x_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2(v___f_2173_, v_x_2174_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1(lean_object* v___f_2177_, lean_object* v_bytes_2178_){
_start:
{
lean_object* v___x_2180_; uint8_t v___x_2181_; lean_object* v_val_2183_; lean_object* v___x_2186_; 
v___x_2180_ = lean_unsigned_to_nat(0u);
v___x_2181_ = 0;
v___x_2186_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2178_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2194_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2189_ = v___x_2186_;
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2186_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
lean_ctor_set_tag(v___x_2189_, 1);
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2187_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
v_val_2183_ = v___x_2192_;
goto v___jp_2182_;
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
v_a_2195_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2186_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2186_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
lean_ctor_set_tag(v___x_2197_, 0);
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
v_val_2183_ = v___x_2200_;
goto v___jp_2182_;
}
}
}
v___jp_2182_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2184_, 0, v_val_2183_);
v___x_2185_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2180_, v___x_2181_, v___x_2184_, v___f_2177_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1___boxed(lean_object* v___f_2203_, lean_object* v_bytes_2204_, lean_object* v___y_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1(v___f_2203_, v_bytes_2204_);
lean_dec_ref(v_bytes_2204_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3(lean_object* v___f_2207_, lean_object* v_x_2208_){
_start:
{
if (lean_obj_tag(v_x_2208_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2218_; 
lean_dec_ref(v___f_2207_);
v_a_2210_ = lean_ctor_get(v_x_2208_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v_x_2208_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2212_ = v_x_2208_;
v_isShared_2213_ = v_isSharedCheck_2218_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v_x_2208_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2218_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
lean_object* v___x_2216_; 
v___x_2216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
return v___x_2216_;
}
}
}
else
{
lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2230_; 
v_isSharedCheck_2230_ = !lean_is_exclusive(v_x_2208_);
if (v_isSharedCheck_2230_ == 0)
{
lean_object* v_unused_2231_; 
v_unused_2231_ = lean_ctor_get(v_x_2208_, 0);
lean_dec(v_unused_2231_);
v___x_2220_ = v_x_2208_;
v_isShared_2221_ = v_isSharedCheck_2230_;
goto v_resetjp_2219_;
}
else
{
lean_dec(v_x_2208_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2230_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2222_; uint8_t v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2222_ = lean_unsigned_to_nat(0u);
v___x_2223_ = 0;
v___x_2224_ = lean_io_promise_new();
if (v_isShared_2221_ == 0)
{
lean_ctor_set(v___x_2220_, 0, v___x_2224_);
v___x_2226_ = v___x_2220_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
v___x_2228_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2222_, v___x_2223_, v___x_2227_, v___f_2207_);
return v___x_2228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3___boxed(lean_object* v___f_2232_, lean_object* v_x_2233_, lean_object* v___y_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3(v___f_2232_, v_x_2233_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_2236_, uint32_t v_op_2237_, uint64_t v_flags_2238_, lean_object* v_payload_2239_, lean_object* v___f_2240_, lean_object* v___f_2241_, lean_object* v___f_2242_, lean_object* v_x_2243_){
_start:
{
if (lean_obj_tag(v_x_2243_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2253_; 
lean_dec_ref(v___f_2242_);
lean_dec_ref(v___f_2241_);
lean_dec_ref(v___f_2240_);
lean_dec(v_payload_2239_);
v_a_2245_ = lean_ctor_get(v_x_2243_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v_x_2243_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2247_ = v_x_2243_;
v_isShared_2248_ = v_isSharedCheck_2253_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v_x_2243_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2253_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
lean_object* v___x_2251_; 
v___x_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
return v___x_2251_;
}
}
}
else
{
lean_object* v_a_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2300_; 
v_a_2254_ = lean_ctor_get(v_x_2243_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v_x_2243_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2256_ = v_x_2243_;
v_isShared_2257_ = v_isSharedCheck_2300_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_a_2254_);
lean_dec(v_x_2243_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2300_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; uint8_t v___x_2260_; 
v___x_2258_ = lean_string_utf8_byte_size(v_failurePrefix_2236_);
v___x_2259_ = lean_unsigned_to_nat(0u);
v___x_2260_ = lean_nat_dec_eq(v___x_2258_, v___x_2259_);
if (v___x_2260_ == 0)
{
lean_object* v___f_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___f_2265_; lean_object* v_val_2267_; lean_object* v___x_2272_; 
lean_dec_ref(v___f_2242_);
lean_inc(v_a_2254_);
v___f_2261_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2261_, 0, v_a_2254_);
v___x_2262_ = lean_box(v___x_2260_);
v___x_2263_ = lean_box_uint32(v_op_2237_);
v___x_2264_ = lean_box_uint64(v_flags_2238_);
lean_inc(v_payload_2239_);
v___f_2265_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2265_, 0, v___x_2259_);
lean_closure_set(v___f_2265_, 1, v___x_2262_);
lean_closure_set(v___f_2265_, 2, v___f_2261_);
lean_closure_set(v___f_2265_, 3, v_a_2254_);
lean_closure_set(v___f_2265_, 4, v___x_2263_);
lean_closure_set(v___f_2265_, 5, v___x_2264_);
lean_closure_set(v___f_2265_, 6, v_payload_2239_);
v___x_2272_ = l_Lasm_JS_Wire_encodeIO(v_payload_2239_);
lean_dec(v_payload_2239_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; lean_object* v___x_2275_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2272_, 1);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 0, v_a_2273_);
v___x_2275_ = v___x_2256_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_a_2273_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
v_val_2267_ = v___x_2275_;
goto v___jp_2266_;
}
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; 
v_a_2277_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v___x_2272_, 1);
if (v_isShared_2257_ == 0)
{
lean_ctor_set_tag(v___x_2256_, 0);
lean_ctor_set(v___x_2256_, 0, v_a_2277_);
v___x_2279_ = v___x_2256_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2277_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
v_val_2267_ = v___x_2279_;
goto v___jp_2266_;
}
}
v___jp_2266_:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2268_, 0, v_val_2267_);
v___x_2269_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2259_, v___x_2260_, v___x_2268_, v___f_2265_);
v___x_2270_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2259_, v___x_2260_, v___x_2269_, v___f_2240_);
v___x_2271_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2259_, v___x_2260_, v___x_2270_, v___f_2241_);
return v___x_2271_;
}
}
else
{
lean_object* v___f_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___f_2284_; uint8_t v___x_2285_; lean_object* v_val_2287_; lean_object* v___x_2291_; 
lean_dec_ref(v___f_2241_);
lean_dec_ref(v___f_2240_);
lean_inc(v_a_2254_);
v___f_2281_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2281_, 0, v_a_2254_);
v___x_2282_ = lean_box_uint32(v_op_2237_);
v___x_2283_ = lean_box_uint64(v_flags_2238_);
lean_inc(v_payload_2239_);
v___f_2284_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2284_, 0, v___f_2281_);
lean_closure_set(v___f_2284_, 1, v_a_2254_);
lean_closure_set(v___f_2284_, 2, v___x_2282_);
lean_closure_set(v___f_2284_, 3, v___x_2283_);
lean_closure_set(v___f_2284_, 4, v_payload_2239_);
v___x_2285_ = 0;
v___x_2291_ = l_Lasm_JS_Wire_encodeIO(v_payload_2239_);
lean_dec(v_payload_2239_);
if (lean_obj_tag(v___x_2291_) == 0)
{
lean_object* v_a_2292_; lean_object* v___x_2294_; 
v_a_2292_ = lean_ctor_get(v___x_2291_, 0);
lean_inc(v_a_2292_);
lean_dec_ref_known(v___x_2291_, 1);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 0, v_a_2292_);
v___x_2294_ = v___x_2256_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2292_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
v_val_2287_ = v___x_2294_;
goto v___jp_2286_;
}
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; 
v_a_2296_ = lean_ctor_get(v___x_2291_, 0);
lean_inc(v_a_2296_);
lean_dec_ref_known(v___x_2291_, 1);
if (v_isShared_2257_ == 0)
{
lean_ctor_set_tag(v___x_2256_, 0);
lean_ctor_set(v___x_2256_, 0, v_a_2296_);
v___x_2298_ = v___x_2256_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2296_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
v_val_2287_ = v___x_2298_;
goto v___jp_2286_;
}
}
v___jp_2286_:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2288_, 0, v_val_2287_);
v___x_2289_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2259_, v___x_2285_, v___x_2288_, v___f_2284_);
v___x_2290_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2259_, v___x_2285_, v___x_2289_, v___f_2242_);
return v___x_2290_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_2301_, lean_object* v_op_2302_, lean_object* v_flags_2303_, lean_object* v_payload_2304_, lean_object* v___f_2305_, lean_object* v___f_2306_, lean_object* v___f_2307_, lean_object* v_x_2308_, lean_object* v___y_2309_){
_start:
{
uint32_t v_op_boxed_2310_; uint64_t v_flags_boxed_2311_; lean_object* v_res_2312_; 
v_op_boxed_2310_ = lean_unbox_uint32(v_op_2302_);
lean_dec(v_op_2302_);
v_flags_boxed_2311_ = lean_unbox_uint64(v_flags_2303_);
lean_dec_ref(v_flags_2303_);
v_res_2312_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9(v_failurePrefix_2301_, v_op_boxed_2310_, v_flags_boxed_2311_, v_payload_2304_, v___f_2305_, v___f_2306_, v___f_2307_, v_x_2308_);
lean_dec_ref(v_failurePrefix_2301_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_2318_, lean_object* v_key_2319_){
_start:
{
if (lean_obj_tag(v_d_2318_) == 8)
{
lean_object* v___x_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2330_; 
v___x_2322_ = l_Lasm_JS_Data_field(v_d_2318_, v_key_2319_);
v_isSharedCheck_2330_ = !lean_is_exclusive(v_d_2318_);
if (v_isSharedCheck_2330_ == 0)
{
lean_object* v_unused_2331_; 
v_unused_2331_ = lean_ctor_get(v_d_2318_, 0);
lean_dec(v_unused_2331_);
v___x_2324_ = v_d_2318_;
v_isShared_2325_ = v_isSharedCheck_2330_;
goto v_resetjp_2323_;
}
else
{
lean_dec(v_d_2318_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2330_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
switch(lean_obj_tag(v___x_2322_))
{
case 1:
{
lean_del_object(v___x_2324_);
goto v___jp_2320_;
}
case 0:
{
lean_del_object(v___x_2324_);
goto v___jp_2320_;
}
default: 
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
lean_ctor_set_tag(v___x_2324_, 1);
lean_ctor_set(v___x_2324_, 0, v___x_2322_);
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v___x_2322_);
v___x_2327_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2328_; 
v___x_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2327_);
return v___x_2328_;
}
}
}
}
}
else
{
lean_object* v___x_2332_; 
lean_dec(v_d_2318_);
v___x_2332_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__2));
return v___x_2332_;
}
v___jp_2320_:
{
lean_object* v___x_2321_; 
v___x_2321_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_2321_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_2333_, lean_object* v_key_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2333_, v_key_2334_);
lean_dec_ref(v_key_2334_);
return v_res_2335_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__5(void){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2343_ = lean_string_utf8_byte_size(v___x_2342_);
return v___x_2343_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__6(void){
_start:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; uint8_t v___x_2346_; 
v___x_2344_ = lean_unsigned_to_nat(0u);
v___x_2345_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__5);
v___x_2346_ = lean_nat_dec_eq(v___x_2345_, v___x_2344_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(lean_object* v_d_2350_, lean_object* v_key_2351_){
_start:
{
if (lean_obj_tag(v_d_2350_) == 8)
{
lean_object* v___x_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2383_; 
v___x_2354_ = l_Lasm_JS_Data_field(v_d_2350_, v_key_2351_);
v_isSharedCheck_2383_ = !lean_is_exclusive(v_d_2350_);
if (v_isSharedCheck_2383_ == 0)
{
lean_object* v_unused_2384_; 
v_unused_2384_ = lean_ctor_get(v_d_2350_, 0);
lean_dec(v_unused_2384_);
v___x_2356_ = v_d_2350_;
v_isShared_2357_ = v_isSharedCheck_2383_;
goto v_resetjp_2355_;
}
else
{
lean_dec(v_d_2350_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2383_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
switch(lean_obj_tag(v___x_2354_))
{
case 1:
{
lean_del_object(v___x_2356_);
goto v___jp_2352_;
}
case 0:
{
lean_del_object(v___x_2356_);
goto v___jp_2352_;
}
default: 
{
if (lean_obj_tag(v___x_2354_) == 3)
{
double v_n_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; 
v_n_2358_ = lean_ctor_get_float(v___x_2354_, 0);
lean_dec_ref_known(v___x_2354_, 0);
v___x_2359_ = lean_box_float(v_n_2358_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 1);
lean_ctor_set(v___x_2356_, 0, v___x_2359_);
v___x_2361_ = v___x_2356_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2359_);
v___x_2361_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2362_; 
v___x_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
return v___x_2362_;
}
}
else
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; uint8_t v___x_2374_; 
v___x_2364_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_2365_ = lean_string_append(v___x_2364_, v_key_2351_);
v___x_2366_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_2367_ = lean_string_append(v___x_2365_, v___x_2366_);
v___x_2368_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__3));
v___x_2369_ = lean_string_append(v___x_2367_, v___x_2368_);
v___x_2370_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4));
v___x_2371_ = lean_string_append(v___x_2369_, v___x_2370_);
v___x_2372_ = l_Lasm_JS_Data_describe(v___x_2354_);
v___x_2373_ = lean_string_append(v___x_2371_, v___x_2372_);
lean_dec_ref(v___x_2372_);
v___x_2374_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__6);
if (v___x_2374_ == 0)
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2378_; 
v___x_2375_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__7));
v___x_2376_ = lean_string_append(v___x_2373_, v___x_2375_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2376_);
v___x_2378_ = v___x_2356_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
else
{
lean_object* v___x_2381_; 
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2373_);
v___x_2381_ = v___x_2356_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2373_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2385_; 
lean_dec(v_d_2350_);
v___x_2385_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__8));
return v___x_2385_;
}
v___jp_2352_:
{
lean_object* v___x_2353_; 
v___x_2353_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__0));
return v___x_2353_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_d_2386_, lean_object* v_key_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(v_d_2386_, v_key_2387_);
lean_dec_ref(v_key_2387_);
return v_res_2388_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = lean_unsigned_to_nat(0u);
v___x_2393_ = lean_nat_to_int(v___x_2392_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_2398_, lean_object* v_key_2399_){
_start:
{
if (lean_obj_tag(v_d_2398_) == 8)
{
lean_object* v___x_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2443_; 
v___x_2400_ = l_Lasm_JS_Data_field(v_d_2398_, v_key_2399_);
v_isSharedCheck_2443_ = !lean_is_exclusive(v_d_2398_);
if (v_isSharedCheck_2443_ == 0)
{
lean_object* v_unused_2444_; 
v_unused_2444_ = lean_ctor_get(v_d_2398_, 0);
lean_dec(v_unused_2444_);
v___x_2402_ = v_d_2398_;
v_isShared_2403_ = v_isSharedCheck_2443_;
goto v_resetjp_2401_;
}
else
{
lean_dec(v_d_2398_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2443_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v_a_2405_; lean_object* v_a_2431_; 
switch(lean_obj_tag(v___x_2400_))
{
case 3:
{
double v_n_2437_; lean_object* v___x_2438_; 
v_n_2437_ = lean_ctor_get_float(v___x_2400_, 0);
v___x_2438_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2437_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v___x_2439_; 
v___x_2439_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__5));
v_a_2405_ = v___x_2439_;
goto v___jp_2404_;
}
else
{
lean_object* v_val_2440_; 
v_val_2440_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_val_2440_);
lean_dec_ref_known(v___x_2438_, 1);
v_a_2431_ = v_val_2440_;
goto v___jp_2430_;
}
}
case 5:
{
lean_object* v_i_2441_; 
v_i_2441_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_i_2441_);
v_a_2431_ = v_i_2441_;
goto v___jp_2430_;
}
default: 
{
lean_object* v___x_2442_; 
v___x_2442_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_a_2405_ = v___x_2442_;
goto v___jp_2404_;
}
}
v___jp_2404_:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; uint8_t v___x_2418_; 
v___x_2406_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_2407_ = lean_string_append(v___x_2406_, v_key_2399_);
v___x_2408_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_2409_ = lean_string_append(v___x_2407_, v___x_2408_);
v___x_2410_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_2411_ = lean_string_append(v___x_2409_, v___x_2410_);
v___x_2412_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4));
v___x_2413_ = lean_string_append(v___x_2411_, v___x_2412_);
v___x_2414_ = l_Lasm_JS_Data_describe(v___x_2400_);
v___x_2415_ = lean_string_append(v___x_2413_, v___x_2414_);
lean_dec_ref(v___x_2414_);
v___x_2416_ = lean_string_utf8_byte_size(v_a_2405_);
v___x_2417_ = lean_unsigned_to_nat(0u);
v___x_2418_ = lean_nat_dec_eq(v___x_2416_, v___x_2417_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2425_; 
v___x_2419_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_2420_ = lean_string_append(v___x_2419_, v_a_2405_);
v___x_2421_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_2422_ = lean_string_append(v___x_2420_, v___x_2421_);
v___x_2423_ = lean_string_append(v___x_2415_, v___x_2422_);
lean_dec_ref(v___x_2422_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set_tag(v___x_2402_, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2423_);
v___x_2425_ = v___x_2402_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
else
{
lean_object* v___x_2428_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set_tag(v___x_2402_, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2415_);
v___x_2428_ = v___x_2402_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v___x_2415_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
v___jp_2430_:
{
lean_object* v___x_2432_; uint8_t v___x_2433_; 
v___x_2432_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3);
v___x_2433_ = lean_int_dec_le(v___x_2432_, v_a_2431_);
if (v___x_2433_ == 0)
{
lean_object* v___x_2434_; 
lean_dec(v_a_2431_);
v___x_2434_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__4));
v_a_2405_ = v___x_2434_;
goto v___jp_2404_;
}
else
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
lean_del_object(v___x_2402_);
lean_dec(v___x_2400_);
v___x_2435_ = l_Int_toNat(v_a_2431_);
lean_dec(v_a_2431_);
v___x_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
return v___x_2436_;
}
}
}
}
else
{
lean_object* v___x_2445_; 
lean_dec(v_d_2398_);
v___x_2445_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__6));
return v___x_2445_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_2446_, lean_object* v_key_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2446_, v_key_2447_);
lean_dec_ref(v_key_2447_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6(lean_object* v_d_2454_, lean_object* v_key_2455_){
_start:
{
if (lean_obj_tag(v_d_2454_) == 8)
{
lean_object* v___x_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2502_; 
v___x_2458_ = l_Lasm_JS_Data_field(v_d_2454_, v_key_2455_);
v_isSharedCheck_2502_ = !lean_is_exclusive(v_d_2454_);
if (v_isSharedCheck_2502_ == 0)
{
lean_object* v_unused_2503_; 
v_unused_2503_ = lean_ctor_get(v_d_2454_, 0);
lean_dec(v_unused_2503_);
v___x_2460_ = v_d_2454_;
v_isShared_2461_ = v_isSharedCheck_2502_;
goto v_resetjp_2459_;
}
else
{
lean_dec(v_d_2454_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2502_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v_a_2463_; lean_object* v_a_2489_; 
switch(lean_obj_tag(v___x_2458_))
{
case 1:
{
lean_del_object(v___x_2460_);
goto v___jp_2456_;
}
case 0:
{
lean_del_object(v___x_2460_);
goto v___jp_2456_;
}
default: 
{
switch(lean_obj_tag(v___x_2458_))
{
case 3:
{
double v_n_2496_; lean_object* v___x_2497_; 
v_n_2496_ = lean_ctor_get_float(v___x_2458_, 0);
v___x_2497_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2496_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v___x_2498_; 
v___x_2498_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__5));
v_a_2463_ = v___x_2498_;
goto v___jp_2462_;
}
else
{
lean_object* v_val_2499_; 
v_val_2499_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_val_2499_);
lean_dec_ref_known(v___x_2497_, 1);
v_a_2489_ = v_val_2499_;
goto v___jp_2488_;
}
}
case 5:
{
lean_object* v_i_2500_; 
v_i_2500_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_i_2500_);
v_a_2489_ = v_i_2500_;
goto v___jp_2488_;
}
default: 
{
lean_object* v___x_2501_; 
v___x_2501_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_a_2463_ = v___x_2501_;
goto v___jp_2462_;
}
}
}
}
v___jp_2462_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; uint8_t v___x_2476_; 
v___x_2464_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_2465_ = lean_string_append(v___x_2464_, v_key_2455_);
v___x_2466_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_2467_ = lean_string_append(v___x_2465_, v___x_2466_);
v___x_2468_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__1));
v___x_2469_ = lean_string_append(v___x_2467_, v___x_2468_);
v___x_2470_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4));
v___x_2471_ = lean_string_append(v___x_2469_, v___x_2470_);
v___x_2472_ = l_Lasm_JS_Data_describe(v___x_2458_);
v___x_2473_ = lean_string_append(v___x_2471_, v___x_2472_);
lean_dec_ref(v___x_2472_);
v___x_2474_ = lean_string_utf8_byte_size(v_a_2463_);
v___x_2475_ = lean_unsigned_to_nat(0u);
v___x_2476_ = lean_nat_dec_eq(v___x_2474_, v___x_2475_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2483_; 
v___x_2477_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_2478_ = lean_string_append(v___x_2477_, v_a_2463_);
v___x_2479_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_2480_ = lean_string_append(v___x_2478_, v___x_2479_);
v___x_2481_ = lean_string_append(v___x_2473_, v___x_2480_);
lean_dec_ref(v___x_2480_);
if (v_isShared_2461_ == 0)
{
lean_ctor_set_tag(v___x_2460_, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2481_);
v___x_2483_ = v___x_2460_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v___x_2481_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
else
{
lean_object* v___x_2486_; 
if (v_isShared_2461_ == 0)
{
lean_ctor_set_tag(v___x_2460_, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2473_);
v___x_2486_ = v___x_2460_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2473_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
v___jp_2488_:
{
lean_object* v___x_2490_; uint8_t v___x_2491_; 
v___x_2490_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__3);
v___x_2491_ = lean_int_dec_le(v___x_2490_, v_a_2489_);
if (v___x_2491_ == 0)
{
lean_object* v___x_2492_; 
lean_dec(v_a_2489_);
v___x_2492_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__4));
v_a_2463_ = v___x_2492_;
goto v___jp_2462_;
}
else
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_del_object(v___x_2460_);
lean_dec(v___x_2458_);
v___x_2493_ = l_Int_toNat(v_a_2489_);
lean_dec(v_a_2489_);
v___x_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2493_);
v___x_2495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2494_);
return v___x_2495_;
}
}
}
}
else
{
lean_object* v___x_2504_; 
lean_dec(v_d_2454_);
v___x_2504_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__2));
return v___x_2504_;
}
v___jp_2456_:
{
lean_object* v___x_2457_; 
v___x_2457_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___closed__0));
return v___x_2457_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6___boxed(lean_object* v_d_2505_, lean_object* v_key_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6(v_d_2505_, v_key_2506_);
lean_dec_ref(v_key_2506_);
return v_res_2507_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6(void){
_start:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__5));
v___x_2515_ = lean_unsigned_to_nat(46u);
v___x_2516_ = lean_unsigned_to_nat(193u);
v___x_2517_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__4));
v___x_2518_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__3));
v___x_2519_ = l_mkPanicMessageWithDecl(v___x_2518_, v___x_2517_, v___x_2516_, v___x_2515_, v___x_2514_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(lean_object* v_context_2521_, lean_object* v_d_2522_){
_start:
{
lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2531_; lean_object* v_received_2532_; lean_object* v___y_2551_; lean_object* v_a_2554_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc(v_d_2522_);
v___x_2579_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2522_, v___x_2578_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref_known(v___x_2579_, 1);
v_a_2554_ = v_a_2580_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v_a_2581_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2581_);
lean_dec_ref_known(v___x_2579_, 1);
v___x_2582_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc(v_d_2522_);
v___x_2583_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2522_, v___x_2582_);
if (lean_obj_tag(v___x_2583_) == 0)
{
lean_object* v_a_2584_; 
lean_dec(v_a_2581_);
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_a_2584_);
lean_dec_ref_known(v___x_2583_, 1);
v_a_2554_ = v_a_2584_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v_a_2585_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_a_2585_);
lean_dec_ref_known(v___x_2583_, 1);
v___x_2586_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
lean_inc(v_d_2522_);
v___x_2587_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_2522_, v___x_2586_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2588_; 
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2588_);
lean_dec_ref_known(v___x_2587_, 1);
v_a_2554_ = v_a_2588_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v_a_2589_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2587_, 1);
v___x_2590_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__3));
lean_inc(v_d_2522_);
v___x_2591_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3(v_d_2522_, v___x_2590_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_a_2592_; 
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_a_2592_);
lean_dec_ref_known(v___x_2591_, 1);
v_a_2554_ = v_a_2592_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v_a_2593_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_a_2593_);
lean_dec_ref_known(v___x_2591_, 1);
v___x_2594_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__4));
lean_inc(v_d_2522_);
v___x_2595_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2522_, v___x_2594_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v_a_2596_; 
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2595_, 1);
v_a_2554_ = v_a_2596_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
v_a_2597_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2597_);
lean_dec_ref_known(v___x_2595_, 1);
v___x_2598_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__5));
lean_inc(v_d_2522_);
v___x_2599_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2522_, v___x_2598_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; 
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_a_2600_);
lean_dec_ref_known(v___x_2599_, 1);
v_a_2554_ = v_a_2600_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v_a_2601_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___x_2599_, 1);
v___x_2602_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__6));
lean_inc(v_d_2522_);
v___x_2603_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2522_, v___x_2602_);
if (lean_obj_tag(v___x_2603_) == 0)
{
lean_object* v_a_2604_; 
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2604_ = lean_ctor_get(v___x_2603_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v___x_2603_, 1);
v_a_2554_ = v_a_2604_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v_a_2605_ = lean_ctor_get(v___x_2603_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v___x_2603_, 1);
v___x_2606_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__7));
lean_inc(v_d_2522_);
v___x_2607_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__4(v_d_2522_, v___x_2606_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v_a_2608_; 
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2608_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_a_2608_);
lean_dec_ref_known(v___x_2607_, 1);
v_a_2554_ = v_a_2608_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v_a_2609_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_a_2609_);
lean_dec_ref_known(v___x_2607_, 1);
v___x_2610_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__8));
lean_inc(v_d_2522_);
v___x_2611_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_consoleSize_spec__0_spec__0_spec__1(v_d_2522_, v___x_2610_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v_a_2612_; 
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2612_ = lean_ctor_get(v___x_2611_, 0);
lean_inc(v_a_2612_);
lean_dec_ref_known(v___x_2611_, 1);
v_a_2554_ = v_a_2612_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v_a_2613_ = lean_ctor_get(v___x_2611_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2611_, 1);
v___x_2614_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__9));
lean_inc(v_d_2522_);
v___x_2615_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(v_d_2522_, v___x_2614_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; 
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
v_a_2554_ = v_a_2616_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v_a_2617_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2617_);
lean_dec_ref_known(v___x_2615_, 1);
v___x_2618_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
lean_inc(v_d_2522_);
v___x_2619_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(v_d_2522_, v___x_2618_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_object* v_a_2620_; 
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2620_);
lean_dec_ref_known(v___x_2619_, 1);
v_a_2554_ = v_a_2620_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v_a_2621_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2619_, 1);
v___x_2622_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__11));
lean_inc(v_d_2522_);
v___x_2623_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(v_d_2522_, v___x_2622_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; 
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2624_);
lean_dec_ref_known(v___x_2623_, 1);
v_a_2554_ = v_a_2624_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v_a_2625_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2625_);
lean_dec_ref_known(v___x_2623_, 1);
v___x_2626_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__12));
lean_inc(v_d_2522_);
v___x_2627_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6(v_d_2522_, v___x_2626_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; 
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___x_2627_, 1);
v_a_2554_ = v_a_2628_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v_a_2629_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2627_, 1);
v___x_2630_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__13));
lean_inc(v_d_2522_);
v___x_2631_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__6(v_d_2522_, v___x_2630_);
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_object* v_a_2632_; 
lean_dec(v_a_2629_);
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_a_2632_);
lean_dec_ref_known(v___x_2631_, 1);
v_a_2554_ = v_a_2632_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v_a_2633_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_a_2633_);
lean_dec_ref_known(v___x_2631_, 1);
v___x_2634_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__14));
lean_inc(v_d_2522_);
v___x_2635_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(v_d_2522_, v___x_2634_);
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_object* v_a_2636_; 
lean_dec(v_a_2633_);
lean_dec(v_a_2629_);
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2636_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_a_2636_);
lean_dec_ref_known(v___x_2635_, 1);
v_a_2554_ = v_a_2636_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v_a_2637_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_a_2637_);
lean_dec_ref_known(v___x_2635_, 1);
v___x_2638_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__15));
lean_inc(v_d_2522_);
v___x_2639_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(v_d_2522_, v___x_2638_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; 
lean_dec(v_a_2637_);
lean_dec(v_a_2633_);
lean_dec(v_a_2629_);
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2640_);
lean_dec_ref_known(v___x_2639_, 1);
v_a_2554_ = v_a_2640_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v_a_2641_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2639_, 1);
v___x_2642_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__16));
lean_inc(v_d_2522_);
v___x_2643_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5(v_d_2522_, v___x_2642_);
if (lean_obj_tag(v___x_2643_) == 0)
{
lean_object* v_a_2644_; 
lean_dec(v_a_2641_);
lean_dec(v_a_2637_);
lean_dec(v_a_2633_);
lean_dec(v_a_2629_);
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2644_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2644_);
lean_dec_ref_known(v___x_2643_, 1);
v_a_2554_ = v_a_2644_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v_a_2645_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___x_2643_, 1);
v___x_2646_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__17));
lean_inc(v_d_2522_);
v___x_2647_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2522_, v___x_2646_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; 
lean_dec(v_a_2645_);
lean_dec(v_a_2641_);
lean_dec(v_a_2637_);
lean_dec(v_a_2633_);
lean_dec(v_a_2629_);
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2647_, 1);
v_a_2554_ = v_a_2648_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v_a_2649_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2649_);
lean_dec_ref_known(v___x_2647_, 1);
v___x_2650_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__18));
lean_inc(v_d_2522_);
v___x_2651_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2522_, v___x_2650_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v_a_2652_; 
lean_dec(v_a_2649_);
lean_dec(v_a_2645_);
lean_dec(v_a_2641_);
lean_dec(v_a_2637_);
lean_dec(v_a_2633_);
lean_dec(v_a_2629_);
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2652_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_a_2652_);
lean_dec_ref_known(v___x_2651_, 1);
v_a_2554_ = v_a_2652_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v_a_2653_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_a_2653_);
lean_dec_ref_known(v___x_2651_, 1);
v___x_2654_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__19));
lean_inc(v_d_2522_);
v___x_2655_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2522_, v___x_2654_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; 
lean_dec(v_a_2653_);
lean_dec(v_a_2649_);
lean_dec(v_a_2645_);
lean_dec(v_a_2641_);
lean_dec(v_a_2637_);
lean_dec(v_a_2633_);
lean_dec(v_a_2629_);
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v___x_2655_, 1);
v_a_2554_ = v_a_2656_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v_a_2657_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2657_);
lean_dec_ref_known(v___x_2655_, 1);
v___x_2658_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__20));
lean_inc(v_d_2522_);
v___x_2659_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_2522_, v___x_2658_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; 
lean_dec(v_a_2657_);
lean_dec(v_a_2653_);
lean_dec(v_a_2649_);
lean_dec(v_a_2645_);
lean_dec(v_a_2641_);
lean_dec(v_a_2637_);
lean_dec(v_a_2633_);
lean_dec(v_a_2629_);
lean_dec(v_a_2625_);
lean_dec(v_a_2621_);
lean_dec(v_a_2617_);
lean_dec(v_a_2613_);
lean_dec(v_a_2609_);
lean_dec(v_a_2605_);
lean_dec(v_a_2601_);
lean_dec(v_a_2597_);
lean_dec(v_a_2593_);
lean_dec(v_a_2589_);
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref_known(v___x_2659_, 1);
v_a_2554_ = v_a_2660_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2673_; 
lean_dec(v_d_2522_);
v_a_2661_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2663_ = v___x_2659_;
v_isShared_2664_ = v_isSharedCheck_2673_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2659_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2673_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; uint8_t v___x_2666_; uint8_t v___x_2667_; uint8_t v___x_2668_; double v___x_2669_; lean_object* v___x_2671_; 
v___x_2665_ = lean_alloc_ctor(0, 17, 11);
lean_ctor_set(v___x_2665_, 0, v_a_2593_);
lean_ctor_set(v___x_2665_, 1, v_a_2597_);
lean_ctor_set(v___x_2665_, 2, v_a_2601_);
lean_ctor_set(v___x_2665_, 3, v_a_2605_);
lean_ctor_set(v___x_2665_, 4, v_a_2609_);
lean_ctor_set(v___x_2665_, 5, v_a_2617_);
lean_ctor_set(v___x_2665_, 6, v_a_2621_);
lean_ctor_set(v___x_2665_, 7, v_a_2625_);
lean_ctor_set(v___x_2665_, 8, v_a_2629_);
lean_ctor_set(v___x_2665_, 9, v_a_2633_);
lean_ctor_set(v___x_2665_, 10, v_a_2637_);
lean_ctor_set(v___x_2665_, 11, v_a_2641_);
lean_ctor_set(v___x_2665_, 12, v_a_2645_);
lean_ctor_set(v___x_2665_, 13, v_a_2649_);
lean_ctor_set(v___x_2665_, 14, v_a_2653_);
lean_ctor_set(v___x_2665_, 15, v_a_2657_);
lean_ctor_set(v___x_2665_, 16, v_a_2661_);
v___x_2666_ = lean_unbox(v_a_2581_);
lean_dec(v_a_2581_);
lean_ctor_set_uint8(v___x_2665_, sizeof(void*)*17 + 8, v___x_2666_);
v___x_2667_ = lean_unbox(v_a_2585_);
lean_dec(v_a_2585_);
lean_ctor_set_uint8(v___x_2665_, sizeof(void*)*17 + 9, v___x_2667_);
v___x_2668_ = lean_unbox(v_a_2589_);
lean_dec(v_a_2589_);
lean_ctor_set_uint8(v___x_2665_, sizeof(void*)*17 + 10, v___x_2668_);
v___x_2669_ = lean_unbox_float(v_a_2613_);
lean_dec(v_a_2613_);
lean_ctor_set_float(v___x_2665_, sizeof(void*)*17, v___x_2669_);
if (v_isShared_2664_ == 0)
{
lean_ctor_set_tag(v___x_2663_, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2665_);
v___x_2671_ = v___x_2663_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v___x_2665_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
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
v___jp_2524_:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2527_ = lean_string_append(v___y_2525_, v___y_2526_);
lean_dec_ref(v___y_2526_);
v___x_2528_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2528_, 0, v___x_2527_);
v___x_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2528_);
return v___x_2529_;
}
v___jp_2530_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; uint8_t v___x_2544_; 
v___x_2533_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_2534_ = lean_string_append(v___x_2533_, v_context_2521_);
v___x_2535_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_2536_ = lean_string_append(v___x_2534_, v___x_2535_);
v___x_2537_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___closed__5));
v___x_2538_ = lean_string_append(v___x_2536_, v___x_2537_);
v___x_2539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_2540_ = lean_string_append(v___x_2538_, v___x_2539_);
v___x_2541_ = lean_string_append(v___x_2540_, v_received_2532_);
lean_dec_ref(v_received_2532_);
v___x_2542_ = lean_string_utf8_byte_size(v___y_2531_);
v___x_2543_ = lean_unsigned_to_nat(0u);
v___x_2544_ = lean_nat_dec_eq(v___x_2542_, v___x_2543_);
if (v___x_2544_ == 0)
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2545_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_2546_ = lean_string_append(v___x_2545_, v___y_2531_);
lean_dec_ref(v___y_2531_);
v___x_2547_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_2548_ = lean_string_append(v___x_2546_, v___x_2547_);
v___y_2525_ = v___x_2541_;
v___y_2526_ = v___x_2548_;
goto v___jp_2524_;
}
else
{
lean_object* v___x_2549_; 
lean_dec_ref(v___y_2531_);
v___x_2549_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_2525_ = v___x_2541_;
v___y_2526_ = v___x_2549_;
goto v___jp_2524_;
}
}
v___jp_2550_:
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lasm_JS_Data_describe(v_d_2522_);
v___y_2531_ = v___y_2551_;
v_received_2532_ = v___x_2552_;
goto v___jp_2530_;
}
v___jp_2553_:
{
if (lean_obj_tag(v_d_2522_) == 9)
{
lean_object* v_value_2555_; lean_object* v_description_2556_; lean_object* v___x_2557_; uint8_t v___x_2558_; 
v_value_2555_ = lean_ctor_get(v_d_2522_, 0);
v_description_2556_ = lean_ctor_get(v_d_2522_, 1);
v___x_2557_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2558_ = lean_string_dec_eq(v_description_2556_, v___x_2557_);
if (v___x_2558_ == 0)
{
v___y_2551_ = v_a_2554_;
goto v___jp_2550_;
}
else
{
lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2575_; 
lean_inc(v_value_2555_);
v_isSharedCheck_2575_ = !lean_is_exclusive(v_d_2522_);
if (v_isSharedCheck_2575_ == 0)
{
lean_object* v_unused_2576_; lean_object* v_unused_2577_; 
v_unused_2576_ = lean_ctor_get(v_d_2522_, 1);
lean_dec(v_unused_2576_);
v_unused_2577_ = lean_ctor_get(v_d_2522_, 0);
lean_dec(v_unused_2577_);
v___x_2560_ = v_d_2522_;
v_isShared_2561_ = v_isSharedCheck_2575_;
goto v_resetjp_2559_;
}
else
{
lean_dec(v_d_2522_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2575_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
uint32_t v___x_2562_; uint64_t v___x_2563_; lean_object* v___x_2565_; 
v___x_2562_ = 206;
v___x_2563_ = 0ULL;
lean_inc(v_value_2555_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 1, v___x_2557_);
v___x_2565_ = v___x_2560_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_value_2555_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v___x_2557_);
v___x_2565_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
uint32_t v___x_2566_; lean_object* v___x_2567_; 
v___x_2566_ = lasm_js_value_handle(v_value_2555_);
lean_dec(v_value_2555_);
v___x_2567_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2562_, v___x_2563_, v___x_2565_, v___x_2566_);
lean_dec_ref(v___x_2565_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; uint8_t v___x_2569_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref_known(v___x_2567_, 1);
v___x_2569_ = lean_string_validate_utf8(v_a_2568_);
if (v___x_2569_ == 0)
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
lean_dec(v_a_2568_);
v___x_2570_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6);
v___x_2571_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2570_);
v___y_2531_ = v_a_2554_;
v_received_2532_ = v___x_2571_;
goto v___jp_2530_;
}
else
{
lean_object* v___x_2572_; 
v___x_2572_ = lean_string_from_utf8_unchecked(v_a_2568_);
v___y_2531_ = v_a_2554_;
v_received_2532_ = v___x_2572_;
goto v___jp_2530_;
}
}
else
{
lean_object* v___x_2573_; 
lean_dec_ref_known(v___x_2567_, 1);
v___x_2573_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7));
v___y_2531_ = v_a_2554_;
v_received_2532_ = v___x_2573_;
goto v___jp_2530_;
}
}
}
}
}
else
{
v___y_2551_ = v_a_2554_;
goto v___jp_2550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2674_, lean_object* v_d_2675_, lean_object* v_a_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2674_, v_d_2675_);
lean_dec_ref(v_context_2674_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0(lean_object* v_context_2678_, lean_object* v_x_2679_){
_start:
{
lean_object* v_val_2682_; 
if (lean_obj_tag(v_x_2679_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2692_; 
v_a_2684_ = lean_ctor_get(v_x_2679_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v_x_2679_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2686_ = v_x_2679_;
v_isShared_2687_ = v_isSharedCheck_2692_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v_x_2679_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2692_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2689_; 
if (v_isShared_2687_ == 0)
{
v___x_2689_ = v___x_2686_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v_a_2684_);
v___x_2689_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
lean_object* v___x_2690_; 
v___x_2690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
return v___x_2690_;
}
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2706_; 
v_a_2693_ = lean_ctor_get(v_x_2679_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v_x_2679_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2695_ = v_x_2679_;
v_isShared_2696_ = v_isSharedCheck_2706_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_a_2693_);
lean_dec(v_x_2679_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2706_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; 
v___x_2697_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2678_, v_a_2693_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_a_2698_; lean_object* v___x_2700_; 
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_a_2698_);
lean_dec_ref_known(v___x_2697_, 1);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 0, v_a_2698_);
v___x_2700_ = v___x_2695_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2698_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
v_val_2682_ = v___x_2700_;
goto v___jp_2681_;
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; 
v_a_2702_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_a_2702_);
lean_dec_ref_known(v___x_2697_, 1);
if (v_isShared_2696_ == 0)
{
lean_ctor_set_tag(v___x_2695_, 0);
lean_ctor_set(v___x_2695_, 0, v_a_2702_);
v___x_2704_ = v___x_2695_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2702_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
v_val_2682_ = v___x_2704_;
goto v___jp_2681_;
}
}
}
}
v___jp_2681_:
{
lean_object* v___x_2683_; 
v___x_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2683_, 0, v_val_2682_);
return v___x_2683_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0___boxed(lean_object* v_context_2707_, lean_object* v_x_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0(v_context_2707_, v_x_2708_);
lean_dec_ref(v_context_2707_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(lean_object* v_context_2711_, uint32_t v_op_2712_, uint64_t v_flags_2713_, lean_object* v_payload_2714_, lean_object* v_failurePrefix_2715_){
_start:
{
lean_object* v___f_2717_; lean_object* v___f_2718_; lean_object* v___f_2719_; lean_object* v___f_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___f_2723_; lean_object* v___f_2724_; lean_object* v___x_2725_; uint8_t v___x_2726_; lean_object* v_val_2728_; lean_object* v___x_2731_; 
v___f_2717_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2717_, 0, v_context_2711_);
v___f_2718_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2718_, 0, v___f_2717_);
v___f_2719_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2719_, 0, v___f_2718_);
lean_inc_ref(v_failurePrefix_2715_);
v___f_2720_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2720_, 0, v_failurePrefix_2715_);
v___x_2721_ = lean_box_uint32(v_op_2712_);
v___x_2722_ = lean_box_uint64(v_flags_2713_);
lean_inc_ref(v___f_2719_);
v___f_2723_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2723_, 0, v_failurePrefix_2715_);
lean_closure_set(v___f_2723_, 1, v___x_2721_);
lean_closure_set(v___f_2723_, 2, v___x_2722_);
lean_closure_set(v___f_2723_, 3, v_payload_2714_);
lean_closure_set(v___f_2723_, 4, v___f_2720_);
lean_closure_set(v___f_2723_, 5, v___f_2719_);
lean_closure_set(v___f_2723_, 6, v___f_2719_);
v___f_2724_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2724_, 0, v___f_2723_);
v___x_2725_ = lean_unsigned_to_nat(0u);
v___x_2726_ = 0;
v___x_2731_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2739_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2737_; 
if (v_isShared_2735_ == 0)
{
lean_ctor_set_tag(v___x_2734_, 1);
v___x_2737_ = v___x_2734_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_a_2732_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
v_val_2728_ = v___x_2737_;
goto v___jp_2727_;
}
}
}
else
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
v_a_2740_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v___x_2731_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v___x_2731_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
lean_ctor_set_tag(v___x_2742_, 0);
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
v_val_2728_ = v___x_2745_;
goto v___jp_2727_;
}
}
}
v___jp_2727_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2729_, 0, v_val_2728_);
v___x_2730_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2725_, v___x_2726_, v___x_2729_, v___f_2724_);
return v___x_2730_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1___boxed(lean_object* v_context_2748_, lean_object* v_op_2749_, lean_object* v_flags_2750_, lean_object* v_payload_2751_, lean_object* v_failurePrefix_2752_, lean_object* v_a_2753_){
_start:
{
uint32_t v_op_boxed_2754_; uint64_t v_flags_boxed_2755_; lean_object* v_res_2756_; 
v_op_boxed_2754_ = lean_unbox_uint32(v_op_2749_);
lean_dec(v_op_2749_);
v_flags_boxed_2755_ = lean_unbox_uint64(v_flags_2750_);
lean_dec_ref(v_flags_2750_);
v_res_2756_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v_context_2748_, v_op_boxed_2754_, v_flags_boxed_2755_, v_payload_2751_, v_failurePrefix_2752_);
return v_res_2756_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2757_; uint8_t v___x_2758_; uint64_t v___x_2759_; 
v___x_2757_ = 8ULL;
v___x_2758_ = 0;
v___x_2759_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__0(v___x_2758_, v___x_2757_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(lean_object* v_o_2760_, lean_object* v_name_2761_, lean_object* v_args_2762_){
_start:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; uint32_t v___x_2769_; uint64_t v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2764_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2765_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2765_, 0, v_o_2760_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
lean_inc_ref(v_name_2761_);
v___x_2766_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2766_, 0, v_name_2761_);
v___x_2767_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2768_ = lean_string_append(v___x_2767_, v_name_2761_);
lean_dec_ref(v_name_2761_);
v___x_2769_ = 205;
v___x_2770_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0);
v___x_2771_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2771_, 0, v_args_2762_);
v___x_2772_ = lean_unsigned_to_nat(3u);
v___x_2773_ = lean_mk_empty_array_with_capacity(v___x_2772_);
v___x_2774_ = lean_array_push(v___x_2773_, v___x_2765_);
v___x_2775_ = lean_array_push(v___x_2774_, v___x_2766_);
v___x_2776_ = lean_array_push(v___x_2775_, v___x_2771_);
v___x_2777_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
v___x_2778_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v___x_2768_, v___x_2769_, v___x_2770_, v___x_2777_, v___x_2764_);
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___boxed(lean_object* v_o_2779_, lean_object* v_name_2780_, lean_object* v_args_2781_, lean_object* v___y_2782_){
_start:
{
lean_object* v_res_2783_; 
v_res_2783_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(v_o_2779_, v_name_2780_, v_args_2781_);
return v_res_2783_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_FsFile_stat___closed__2(void){
_start:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2787_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_2788_ = l_Lasm_JS_Web_Support_args(v___x_2787_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_stat(lean_object* v_self_2789_){
_start:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2791_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__0));
v___x_2792_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2793_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0(v_self_2789_, v___x_2791_, v___x_2792_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_stat___boxed(lean_object* v_self_2794_, lean_object* v_a_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Lasm_JS_Deno_FsFile_stat(v_self_2794_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(lean_object* v_context_2797_, lean_object* v_bytes_2798_){
_start:
{
lean_object* v___x_2800_; 
v___x_2800_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2798_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2802_; 
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_a_2801_);
lean_dec_ref_known(v___x_2800_, 1);
v___x_2802_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v_context_2797_, v_a_2801_);
return v___x_2802_;
}
else
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
v_a_2803_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v___x_2800_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2800_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_a_2803_);
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
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0___boxed(lean_object* v_context_2811_, lean_object* v_bytes_2812_, lean_object* v_a_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(v_context_2811_, v_bytes_2812_);
lean_dec_ref(v_bytes_2812_);
lean_dec_ref(v_context_2811_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(lean_object* v_o_2815_, lean_object* v_name_2816_, lean_object* v_args_2817_){
_start:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; uint64_t v___x_2822_; lean_object* v___x_2823_; 
v___x_2819_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_2820_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2820_, 0, v_o_2815_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
lean_inc_ref(v_name_2816_);
v___x_2821_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2821_, 0, v_name_2816_);
v___x_2822_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0___closed__0);
v___x_2823_ = l_Lasm_JS_Value_invokeRaw(v___x_2820_, v___x_2821_, v_args_2817_, v___x_2822_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v_a_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; 
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
lean_inc(v_a_2824_);
lean_dec_ref_known(v___x_2823_, 1);
v___x_2825_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_2826_ = lean_string_append(v___x_2825_, v_name_2816_);
lean_dec_ref(v_name_2816_);
v___x_2827_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0_spec__0(v___x_2826_, v_a_2824_);
lean_dec(v_a_2824_);
lean_dec_ref(v___x_2826_);
return v___x_2827_;
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
lean_dec_ref(v_name_2816_);
v_a_2828_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2823_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2823_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0___boxed(lean_object* v_o_2836_, lean_object* v_name_2837_, lean_object* v_args_2838_, lean_object* v_a_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(v_o_2836_, v_name_2837_, v_args_2838_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_statSync(lean_object* v_self_2842_){
_start:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2844_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_statSync___closed__0));
v___x_2845_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2846_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_FsFile_statSync_spec__0(v_self_2842_, v___x_2844_, v___x_2845_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_statSync___boxed(lean_object* v_self_2847_, lean_object* v_a_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lasm_JS_Deno_FsFile_statSync(v_self_2847_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_sync(lean_object* v_self_2851_){
_start:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2853_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_sync___closed__0));
v___x_2854_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2855_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2851_, v___x_2853_, v___x_2854_);
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_sync___boxed(lean_object* v_self_2856_, lean_object* v_a_2857_){
_start:
{
lean_object* v_res_2858_; 
v_res_2858_ = l_Lasm_JS_Deno_FsFile_sync(v_self_2856_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncSync(lean_object* v_self_2860_){
_start:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2862_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncSync___closed__0));
v___x_2863_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2864_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2860_, v___x_2862_, v___x_2863_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncSync___boxed(lean_object* v_self_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Lasm_JS_Deno_FsFile_syncSync(v_self_2865_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncData(lean_object* v_self_2869_){
_start:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2871_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncData___closed__0));
v___x_2872_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2873_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2869_, v___x_2871_, v___x_2872_);
return v___x_2873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncData___boxed(lean_object* v_self_2874_, lean_object* v_a_2875_){
_start:
{
lean_object* v_res_2876_; 
v_res_2876_ = l_Lasm_JS_Deno_FsFile_syncData(v_self_2874_);
return v_res_2876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync(lean_object* v_self_2878_){
_start:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2880_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_syncDataSync___closed__0));
v___x_2881_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2882_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2878_, v___x_2880_, v___x_2881_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_syncDataSync___boxed(lean_object* v_self_2883_, lean_object* v_a_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lasm_JS_Deno_FsFile_syncDataSync(v_self_2883_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime(lean_object* v_self_2887_, lean_object* v_atime_2888_, lean_object* v_mtime_2889_){
_start:
{
lean_object* v___x_2891_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2902_; 
v___x_2891_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utime___closed__0));
if (lean_obj_tag(v_atime_2888_) == 0)
{
double v_value_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
v_value_2912_ = lean_ctor_get_float(v_atime_2888_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v_atime_2888_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v_atime_2888_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_dec(v_atime_2888_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
lean_ctor_set_tag(v___x_2914_, 3);
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2918_, 0, v_value_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
v___y_2902_ = v___x_2917_;
goto v___jp_2901_;
}
}
}
else
{
lean_object* v_value_2920_; 
v_value_2920_ = lean_ctor_get(v_atime_2888_, 0);
lean_inc(v_value_2920_);
lean_dec_ref_known(v_atime_2888_, 1);
v___y_2902_ = v_value_2920_;
goto v___jp_2901_;
}
v___jp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2895_ = lean_unsigned_to_nat(2u);
v___x_2896_ = lean_mk_empty_array_with_capacity(v___x_2895_);
v___x_2897_ = lean_array_push(v___x_2896_, v___y_2893_);
v___x_2898_ = lean_array_push(v___x_2897_, v___y_2894_);
v___x_2899_ = l_Lasm_JS_Web_Support_args(v___x_2898_);
v___x_2900_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2887_, v___x_2891_, v___x_2899_);
return v___x_2900_;
}
v___jp_2901_:
{
if (lean_obj_tag(v_mtime_2889_) == 0)
{
double v_value_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
v_value_2903_ = lean_ctor_get_float(v_mtime_2889_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v_mtime_2889_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v_mtime_2889_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_dec(v_mtime_2889_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
lean_ctor_set_tag(v___x_2905_, 3);
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2909_, 0, v_value_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
v___y_2893_ = v___y_2902_;
v___y_2894_ = v___x_2908_;
goto v___jp_2892_;
}
}
}
else
{
lean_object* v_value_2911_; 
v_value_2911_ = lean_ctor_get(v_mtime_2889_, 0);
lean_inc(v_value_2911_);
lean_dec_ref_known(v_mtime_2889_, 1);
v___y_2893_ = v___y_2902_;
v___y_2894_ = v_value_2911_;
goto v___jp_2892_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utime___boxed(lean_object* v_self_2921_, lean_object* v_atime_2922_, lean_object* v_mtime_2923_, lean_object* v_a_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l_Lasm_JS_Deno_FsFile_utime(v_self_2921_, v_atime_2922_, v_mtime_2923_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync(lean_object* v_self_2927_, lean_object* v_atime_2928_, lean_object* v_mtime_2929_){
_start:
{
lean_object* v___x_2931_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2942_; 
v___x_2931_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_utimeSync___closed__0));
if (lean_obj_tag(v_atime_2928_) == 0)
{
double v_value_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
v_value_2952_ = lean_ctor_get_float(v_atime_2928_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v_atime_2928_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v_atime_2928_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_dec(v_atime_2928_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
lean_ctor_set_tag(v___x_2954_, 3);
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2958_, 0, v_value_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
v___y_2942_ = v___x_2957_;
goto v___jp_2941_;
}
}
}
else
{
lean_object* v_value_2960_; 
v_value_2960_ = lean_ctor_get(v_atime_2928_, 0);
lean_inc(v_value_2960_);
lean_dec_ref_known(v_atime_2928_, 1);
v___y_2942_ = v_value_2960_;
goto v___jp_2941_;
}
v___jp_2932_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v___x_2935_ = lean_unsigned_to_nat(2u);
v___x_2936_ = lean_mk_empty_array_with_capacity(v___x_2935_);
v___x_2937_ = lean_array_push(v___x_2936_, v___y_2933_);
v___x_2938_ = lean_array_push(v___x_2937_, v___y_2934_);
v___x_2939_ = l_Lasm_JS_Web_Support_args(v___x_2938_);
v___x_2940_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2927_, v___x_2931_, v___x_2939_);
return v___x_2940_;
}
v___jp_2941_:
{
if (lean_obj_tag(v_mtime_2929_) == 0)
{
double v_value_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
v_value_2943_ = lean_ctor_get_float(v_mtime_2929_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v_mtime_2929_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v_mtime_2929_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_dec(v_mtime_2929_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
lean_ctor_set_tag(v___x_2945_, 3);
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2949_, 0, v_value_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
v___y_2933_ = v___y_2942_;
v___y_2934_ = v___x_2948_;
goto v___jp_2932_;
}
}
}
else
{
lean_object* v_value_2951_; 
v_value_2951_ = lean_ctor_get(v_mtime_2929_, 0);
lean_inc(v_value_2951_);
lean_dec_ref_known(v_mtime_2929_, 1);
v___y_2933_ = v___y_2942_;
v___y_2934_ = v_value_2951_;
goto v___jp_2932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_utimeSync___boxed(lean_object* v_self_2961_, lean_object* v_atime_2962_, lean_object* v_mtime_2963_, lean_object* v_a_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Lasm_JS_Deno_FsFile_utimeSync(v_self_2961_, v_atime_2962_, v_mtime_2963_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal(lean_object* v_self_2967_){
_start:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2969_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_isTerminal___closed__0));
v___x_2970_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_2971_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2967_, v___x_2969_, v___x_2970_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_isTerminal___boxed(lean_object* v_self_2972_, lean_object* v_a_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l_Lasm_JS_Deno_FsFile_isTerminal(v_self_2972_);
return v_res_2974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw(lean_object* v_self_2976_, uint8_t v_mode_2977_, lean_object* v_options_2978_){
_start:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2980_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_setRaw___closed__0));
v___x_2981_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2981_, 0, v_mode_2977_);
v___x_2982_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Stdin_setRaw_spec__0(v_options_2978_);
v___x_2983_ = lean_unsigned_to_nat(2u);
v___x_2984_ = lean_mk_empty_array_with_capacity(v___x_2983_);
v___x_2985_ = lean_array_push(v___x_2984_, v___x_2981_);
v___x_2986_ = lean_array_push(v___x_2985_, v___x_2982_);
v___x_2987_ = l_Lasm_JS_Web_Support_args(v___x_2986_);
v___x_2988_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2976_, v___x_2980_, v___x_2987_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_setRaw___boxed(lean_object* v_self_2989_, lean_object* v_mode_2990_, lean_object* v_options_2991_, lean_object* v_a_2992_){
_start:
{
uint8_t v_mode_boxed_2993_; lean_object* v_res_2994_; 
v_mode_boxed_2993_ = lean_unbox(v_mode_2990_);
v_res_2994_ = l_Lasm_JS_Deno_FsFile_setRaw(v_self_2989_, v_mode_boxed_2993_, v_options_2991_);
lean_dec(v_options_2991_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock(lean_object* v_self_2996_, lean_object* v_exclusive_2997_){
_start:
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_2999_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lock___closed__0));
v___x_3000_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_2997_);
v___x_3001_ = lean_unsigned_to_nat(1u);
v___x_3002_ = lean_mk_empty_array_with_capacity(v___x_3001_);
v___x_3003_ = lean_array_push(v___x_3002_, v___x_3000_);
v___x_3004_ = l_Lasm_JS_Web_Support_args(v___x_3003_);
v___x_3005_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2996_, v___x_2999_, v___x_3004_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lock___boxed(lean_object* v_self_3006_, lean_object* v_exclusive_3007_, lean_object* v_a_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l_Lasm_JS_Deno_FsFile_lock(v_self_3006_, v_exclusive_3007_);
lean_dec(v_exclusive_3007_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync(lean_object* v_self_3011_, lean_object* v_exclusive_3012_){
_start:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3014_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_lockSync___closed__0));
v___x_3015_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3012_);
v___x_3016_ = lean_unsigned_to_nat(1u);
v___x_3017_ = lean_mk_empty_array_with_capacity(v___x_3016_);
v___x_3018_ = lean_array_push(v___x_3017_, v___x_3015_);
v___x_3019_ = l_Lasm_JS_Web_Support_args(v___x_3018_);
v___x_3020_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3011_, v___x_3014_, v___x_3019_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_lockSync___boxed(lean_object* v_self_3021_, lean_object* v_exclusive_3022_, lean_object* v_a_3023_){
_start:
{
lean_object* v_res_3024_; 
v_res_3024_ = l_Lasm_JS_Deno_FsFile_lockSync(v_self_3021_, v_exclusive_3022_);
lean_dec(v_exclusive_3022_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(lean_object* v_context_3025_, lean_object* v_x_3026_){
_start:
{
lean_object* v_val_3029_; 
if (lean_obj_tag(v_x_3026_) == 0)
{
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3039_; 
v_a_3031_ = lean_ctor_get(v_x_3026_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v_x_3026_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3033_ = v_x_3026_;
v_isShared_3034_ = v_isSharedCheck_3039_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v_x_3026_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3039_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3031_);
v___x_3036_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
lean_object* v___x_3037_; 
v___x_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3037_, 0, v___x_3036_);
return v___x_3037_;
}
}
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3053_; 
v_a_3040_ = lean_ctor_get(v_x_3026_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v_x_3026_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3042_ = v_x_3026_;
v_isShared_3043_ = v_isSharedCheck_3053_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v_x_3026_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3053_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3044_; 
v___x_3044_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(v_context_3025_, v_a_3040_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; lean_object* v___x_3047_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
lean_inc(v_a_3045_);
lean_dec_ref_known(v___x_3044_, 1);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 0, v_a_3045_);
v___x_3047_ = v___x_3042_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3045_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
v_val_3029_ = v___x_3047_;
goto v___jp_3028_;
}
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; 
v_a_3049_ = lean_ctor_get(v___x_3044_, 0);
lean_inc(v_a_3049_);
lean_dec_ref_known(v___x_3044_, 1);
if (v_isShared_3043_ == 0)
{
lean_ctor_set_tag(v___x_3042_, 0);
lean_ctor_set(v___x_3042_, 0, v_a_3049_);
v___x_3051_ = v___x_3042_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3049_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
v_val_3029_ = v___x_3051_;
goto v___jp_3028_;
}
}
}
}
v___jp_3028_:
{
lean_object* v___x_3030_; 
v___x_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3030_, 0, v_val_3029_);
return v___x_3030_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed(lean_object* v_context_3054_, lean_object* v_x_3055_, lean_object* v___y_3056_){
_start:
{
lean_object* v_res_3057_; 
v_res_3057_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0(v_context_3054_, v_x_3055_);
lean_dec_ref(v_context_3054_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_3058_, uint32_t v_op_3059_, uint64_t v_flags_3060_, lean_object* v_payload_3061_, lean_object* v___f_3062_, lean_object* v___f_3063_, lean_object* v___f_3064_, lean_object* v_x_3065_){
_start:
{
if (lean_obj_tag(v_x_3065_) == 0)
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3075_; 
lean_dec_ref(v___f_3064_);
lean_dec_ref(v___f_3063_);
lean_dec_ref(v___f_3062_);
lean_dec(v_payload_3061_);
v_a_3067_ = lean_ctor_get(v_x_3065_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v_x_3065_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3069_ = v_x_3065_;
v_isShared_3070_ = v_isSharedCheck_3075_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v_x_3065_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3075_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
lean_object* v___x_3073_; 
v___x_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3072_);
return v___x_3073_;
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3122_; 
v_a_3076_ = lean_ctor_get(v_x_3065_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v_x_3065_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3078_ = v_x_3065_;
v_isShared_3079_ = v_isSharedCheck_3122_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v_x_3065_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3122_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; uint8_t v___x_3082_; 
v___x_3080_ = lean_string_utf8_byte_size(v_failurePrefix_3058_);
v___x_3081_ = lean_unsigned_to_nat(0u);
v___x_3082_ = lean_nat_dec_eq(v___x_3080_, v___x_3081_);
if (v___x_3082_ == 0)
{
lean_object* v___f_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___f_3087_; lean_object* v_val_3089_; lean_object* v___x_3094_; 
lean_dec_ref(v___f_3064_);
lean_inc(v_a_3076_);
v___f_3083_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3083_, 0, v_a_3076_);
v___x_3084_ = lean_box(v___x_3082_);
v___x_3085_ = lean_box_uint32(v_op_3059_);
v___x_3086_ = lean_box_uint64(v_flags_3060_);
lean_inc(v_payload_3061_);
v___f_3087_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3087_, 0, v___x_3081_);
lean_closure_set(v___f_3087_, 1, v___x_3084_);
lean_closure_set(v___f_3087_, 2, v___f_3083_);
lean_closure_set(v___f_3087_, 3, v_a_3076_);
lean_closure_set(v___f_3087_, 4, v___x_3085_);
lean_closure_set(v___f_3087_, 5, v___x_3086_);
lean_closure_set(v___f_3087_, 6, v_payload_3061_);
v___x_3094_ = l_Lasm_JS_Wire_encodeIO(v_payload_3061_);
lean_dec(v_payload_3061_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; lean_object* v___x_3097_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3095_);
lean_dec_ref_known(v___x_3094_, 1);
if (v_isShared_3079_ == 0)
{
lean_ctor_set(v___x_3078_, 0, v_a_3095_);
v___x_3097_ = v___x_3078_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3095_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
v_val_3089_ = v___x_3097_;
goto v___jp_3088_;
}
}
else
{
lean_object* v_a_3099_; lean_object* v___x_3101_; 
v_a_3099_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3094_, 1);
if (v_isShared_3079_ == 0)
{
lean_ctor_set_tag(v___x_3078_, 0);
lean_ctor_set(v___x_3078_, 0, v_a_3099_);
v___x_3101_ = v___x_3078_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v_a_3099_);
v___x_3101_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
v_val_3089_ = v___x_3101_;
goto v___jp_3088_;
}
}
v___jp_3088_:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3090_, 0, v_val_3089_);
v___x_3091_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3081_, v___x_3082_, v___x_3090_, v___f_3087_);
v___x_3092_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3081_, v___x_3082_, v___x_3091_, v___f_3062_);
v___x_3093_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3081_, v___x_3082_, v___x_3092_, v___f_3063_);
return v___x_3093_;
}
}
else
{
lean_object* v___f_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___f_3106_; uint8_t v___x_3107_; lean_object* v_val_3109_; lean_object* v___x_3113_; 
lean_dec_ref(v___f_3063_);
lean_dec_ref(v___f_3062_);
lean_inc(v_a_3076_);
v___f_3103_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3103_, 0, v_a_3076_);
v___x_3104_ = lean_box_uint32(v_op_3059_);
v___x_3105_ = lean_box_uint64(v_flags_3060_);
lean_inc(v_payload_3061_);
v___f_3106_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3106_, 0, v___f_3103_);
lean_closure_set(v___f_3106_, 1, v_a_3076_);
lean_closure_set(v___f_3106_, 2, v___x_3104_);
lean_closure_set(v___f_3106_, 3, v___x_3105_);
lean_closure_set(v___f_3106_, 4, v_payload_3061_);
v___x_3107_ = 0;
v___x_3113_ = l_Lasm_JS_Wire_encodeIO(v_payload_3061_);
lean_dec(v_payload_3061_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v___x_3116_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3114_);
lean_dec_ref_known(v___x_3113_, 1);
if (v_isShared_3079_ == 0)
{
lean_ctor_set(v___x_3078_, 0, v_a_3114_);
v___x_3116_ = v___x_3078_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v_a_3114_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
v_val_3109_ = v___x_3116_;
goto v___jp_3108_;
}
}
else
{
lean_object* v_a_3118_; lean_object* v___x_3120_; 
v_a_3118_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3118_);
lean_dec_ref_known(v___x_3113_, 1);
if (v_isShared_3079_ == 0)
{
lean_ctor_set_tag(v___x_3078_, 0);
lean_ctor_set(v___x_3078_, 0, v_a_3118_);
v___x_3120_ = v___x_3078_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3118_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
v_val_3109_ = v___x_3120_;
goto v___jp_3108_;
}
}
v___jp_3108_:
{
lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3110_, 0, v_val_3109_);
v___x_3111_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3081_, v___x_3107_, v___x_3110_, v___f_3106_);
v___x_3112_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3081_, v___x_3107_, v___x_3111_, v___f_3064_);
return v___x_3112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_3123_, lean_object* v_op_3124_, lean_object* v_flags_3125_, lean_object* v_payload_3126_, lean_object* v___f_3127_, lean_object* v___f_3128_, lean_object* v___f_3129_, lean_object* v_x_3130_, lean_object* v___y_3131_){
_start:
{
uint32_t v_op_boxed_3132_; uint64_t v_flags_boxed_3133_; lean_object* v_res_3134_; 
v_op_boxed_3132_ = lean_unbox_uint32(v_op_3124_);
lean_dec(v_op_3124_);
v_flags_boxed_3133_ = lean_unbox_uint64(v_flags_3125_);
lean_dec_ref(v_flags_3125_);
v_res_3134_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9(v_failurePrefix_3123_, v_op_boxed_3132_, v_flags_boxed_3133_, v_payload_3126_, v___f_3127_, v___f_3128_, v___f_3129_, v_x_3130_);
lean_dec_ref(v_failurePrefix_3123_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(lean_object* v___f_3135_, lean_object* v_x_3136_){
_start:
{
if (lean_obj_tag(v_x_3136_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3146_; 
lean_dec_ref(v___f_3135_);
v_a_3138_ = lean_ctor_get(v_x_3136_, 0);
v_isSharedCheck_3146_ = !lean_is_exclusive(v_x_3136_);
if (v_isSharedCheck_3146_ == 0)
{
v___x_3140_ = v_x_3136_;
v_isShared_3141_ = v_isSharedCheck_3146_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v_x_3136_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3146_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_a_3138_);
v___x_3143_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
lean_object* v___x_3144_; 
v___x_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
return v___x_3144_;
}
}
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3148_; 
v_a_3147_ = lean_ctor_get(v_x_3136_, 0);
lean_inc(v_a_3147_);
lean_dec_ref_known(v_x_3136_, 1);
v___x_3148_ = lean_apply_2(v___f_3135_, v_a_3147_, lean_box(0));
return v___x_3148_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed(lean_object* v___f_3149_, lean_object* v_x_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2(v___f_3149_, v_x_3150_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(lean_object* v___f_3153_, lean_object* v_bytes_3154_){
_start:
{
lean_object* v___x_3156_; uint8_t v___x_3157_; lean_object* v_val_3159_; lean_object* v___x_3162_; 
v___x_3156_ = lean_unsigned_to_nat(0u);
v___x_3157_ = 0;
v___x_3162_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3154_);
if (lean_obj_tag(v___x_3162_) == 0)
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3170_; 
v_a_3163_ = lean_ctor_get(v___x_3162_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3162_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3165_ = v___x_3162_;
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v___x_3162_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3168_; 
if (v_isShared_3166_ == 0)
{
lean_ctor_set_tag(v___x_3165_, 1);
v___x_3168_ = v___x_3165_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
v_val_3159_ = v___x_3168_;
goto v___jp_3158_;
}
}
}
else
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
v_a_3171_ = lean_ctor_get(v___x_3162_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3162_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3162_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___x_3162_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
lean_ctor_set_tag(v___x_3173_, 0);
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
v_val_3159_ = v___x_3176_;
goto v___jp_3158_;
}
}
}
v___jp_3158_:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3160_, 0, v_val_3159_);
v___x_3161_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3156_, v___x_3157_, v___x_3160_, v___f_3153_);
return v___x_3161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed(lean_object* v___f_3179_, lean_object* v_bytes_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1(v___f_3179_, v_bytes_3180_);
lean_dec_ref(v_bytes_3180_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(lean_object* v___f_3183_, lean_object* v_x_3184_){
_start:
{
if (lean_obj_tag(v_x_3184_) == 0)
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3194_; 
lean_dec_ref(v___f_3183_);
v_a_3186_ = lean_ctor_get(v_x_3184_, 0);
v_isSharedCheck_3194_ = !lean_is_exclusive(v_x_3184_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3188_ = v_x_3184_;
v_isShared_3189_ = v_isSharedCheck_3194_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v_x_3184_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3194_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3191_; 
if (v_isShared_3189_ == 0)
{
v___x_3191_ = v___x_3188_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_a_3186_);
v___x_3191_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
lean_object* v___x_3192_; 
v___x_3192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3191_);
return v___x_3192_;
}
}
}
else
{
lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3206_; 
v_isSharedCheck_3206_ = !lean_is_exclusive(v_x_3184_);
if (v_isSharedCheck_3206_ == 0)
{
lean_object* v_unused_3207_; 
v_unused_3207_ = lean_ctor_get(v_x_3184_, 0);
lean_dec(v_unused_3207_);
v___x_3196_ = v_x_3184_;
v_isShared_3197_ = v_isSharedCheck_3206_;
goto v_resetjp_3195_;
}
else
{
lean_dec(v_x_3184_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3206_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3198_; uint8_t v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3202_; 
v___x_3198_ = lean_unsigned_to_nat(0u);
v___x_3199_ = 0;
v___x_3200_ = lean_io_promise_new();
if (v_isShared_3197_ == 0)
{
lean_ctor_set(v___x_3196_, 0, v___x_3200_);
v___x_3202_ = v___x_3196_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v___x_3200_);
v___x_3202_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
v___x_3204_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3198_, v___x_3199_, v___x_3203_, v___f_3183_);
return v___x_3204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed(lean_object* v___f_3208_, lean_object* v_x_3209_, lean_object* v___y_3210_){
_start:
{
lean_object* v_res_3211_; 
v_res_3211_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3(v___f_3208_, v_x_3209_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(lean_object* v_context_3212_, uint32_t v_op_3213_, uint64_t v_flags_3214_, lean_object* v_payload_3215_, lean_object* v_failurePrefix_3216_){
_start:
{
lean_object* v___f_3218_; lean_object* v___f_3219_; lean_object* v___f_3220_; lean_object* v___f_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___f_3224_; lean_object* v___f_3225_; lean_object* v___x_3226_; uint8_t v___x_3227_; lean_object* v_val_3229_; lean_object* v___x_3232_; 
v___f_3218_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3218_, 0, v_context_3212_);
v___f_3219_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3219_, 0, v___f_3218_);
v___f_3220_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3220_, 0, v___f_3219_);
lean_inc_ref(v_failurePrefix_3216_);
v___f_3221_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3221_, 0, v_failurePrefix_3216_);
v___x_3222_ = lean_box_uint32(v_op_3213_);
v___x_3223_ = lean_box_uint64(v_flags_3214_);
lean_inc_ref(v___f_3220_);
v___f_3224_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3224_, 0, v_failurePrefix_3216_);
lean_closure_set(v___f_3224_, 1, v___x_3222_);
lean_closure_set(v___f_3224_, 2, v___x_3223_);
lean_closure_set(v___f_3224_, 3, v_payload_3215_);
lean_closure_set(v___f_3224_, 4, v___f_3221_);
lean_closure_set(v___f_3224_, 5, v___f_3220_);
lean_closure_set(v___f_3224_, 6, v___f_3220_);
v___f_3225_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3225_, 0, v___f_3224_);
v___x_3226_ = lean_unsigned_to_nat(0u);
v___x_3227_ = 0;
v___x_3232_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3232_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3232_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
lean_ctor_set_tag(v___x_3235_, 1);
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
v_val_3229_ = v___x_3238_;
goto v___jp_3228_;
}
}
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3248_; 
v_a_3241_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3243_ = v___x_3232_;
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_3232_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
lean_ctor_set_tag(v___x_3243_, 0);
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
v_val_3229_ = v___x_3246_;
goto v___jp_3228_;
}
}
}
v___jp_3228_:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3230_, 0, v_val_3229_);
v___x_3231_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3226_, v___x_3227_, v___x_3230_, v___f_3225_);
return v___x_3231_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0___boxed(lean_object* v_context_3249_, lean_object* v_op_3250_, lean_object* v_flags_3251_, lean_object* v_payload_3252_, lean_object* v_failurePrefix_3253_, lean_object* v_a_3254_){
_start:
{
uint32_t v_op_boxed_3255_; uint64_t v_flags_boxed_3256_; lean_object* v_res_3257_; 
v_op_boxed_3255_ = lean_unbox_uint32(v_op_3250_);
lean_dec(v_op_3250_);
v_flags_boxed_3256_ = lean_unbox_uint64(v_flags_3251_);
lean_dec_ref(v_flags_3251_);
v_res_3257_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v_context_3249_, v_op_boxed_3255_, v_flags_boxed_3256_, v_payload_3252_, v_failurePrefix_3253_);
return v_res_3257_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3258_; uint8_t v___x_3259_; uint64_t v___x_3260_; 
v___x_3258_ = 8ULL;
v___x_3259_ = 0;
v___x_3260_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__0(v___x_3259_, v___x_3258_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(lean_object* v_o_3261_, lean_object* v_name_3262_, lean_object* v_args_3263_){
_start:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; uint32_t v___x_3270_; uint64_t v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3265_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3266_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3266_, 0, v_o_3261_);
lean_ctor_set(v___x_3266_, 1, v___x_3265_);
lean_inc_ref(v_name_3262_);
v___x_3267_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3267_, 0, v_name_3262_);
v___x_3268_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0___closed__0));
v___x_3269_ = lean_string_append(v___x_3268_, v_name_3262_);
lean_dec_ref(v_name_3262_);
v___x_3270_ = 205;
v___x_3271_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___closed__0);
v___x_3272_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3272_, 0, v_args_3263_);
v___x_3273_ = lean_unsigned_to_nat(3u);
v___x_3274_ = lean_mk_empty_array_with_capacity(v___x_3273_);
v___x_3275_ = lean_array_push(v___x_3274_, v___x_3266_);
v___x_3276_ = lean_array_push(v___x_3275_, v___x_3267_);
v___x_3277_ = lean_array_push(v___x_3276_, v___x_3272_);
v___x_3278_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
v___x_3279_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0_spec__0(v___x_3269_, v___x_3270_, v___x_3271_, v___x_3278_, v___x_3265_);
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0___boxed(lean_object* v_o_3280_, lean_object* v_name_3281_, lean_object* v_args_3282_, lean_object* v___y_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_o_3280_, v_name_3281_, v_args_3282_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock(lean_object* v_self_3286_, lean_object* v_exclusive_3287_){
_start:
{
lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3289_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLock___closed__0));
v___x_3290_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3287_);
v___x_3291_ = lean_unsigned_to_nat(1u);
v___x_3292_ = lean_mk_empty_array_with_capacity(v___x_3291_);
v___x_3293_ = lean_array_push(v___x_3292_, v___x_3290_);
v___x_3294_ = l_Lasm_JS_Web_Support_args(v___x_3293_);
v___x_3295_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_tryLock_spec__0(v_self_3286_, v___x_3289_, v___x_3294_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLock___boxed(lean_object* v_self_3296_, lean_object* v_exclusive_3297_, lean_object* v_a_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l_Lasm_JS_Deno_FsFile_tryLock(v_self_3296_, v_exclusive_3297_);
lean_dec(v_exclusive_3297_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync(lean_object* v_self_3301_, lean_object* v_exclusive_3302_){
_start:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3304_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_tryLockSync___closed__0));
v___x_3305_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_exclusive_3302_);
v___x_3306_ = lean_unsigned_to_nat(1u);
v___x_3307_ = lean_mk_empty_array_with_capacity(v___x_3306_);
v___x_3308_ = lean_array_push(v___x_3307_, v___x_3305_);
v___x_3309_ = l_Lasm_JS_Web_Support_args(v___x_3308_);
v___x_3310_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_3301_, v___x_3304_, v___x_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_tryLockSync___boxed(lean_object* v_self_3311_, lean_object* v_exclusive_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lasm_JS_Deno_FsFile_tryLockSync(v_self_3311_, v_exclusive_3312_);
lean_dec(v_exclusive_3312_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock(lean_object* v_self_3316_){
_start:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3318_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlock___closed__0));
v___x_3319_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3320_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3316_, v___x_3318_, v___x_3319_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlock___boxed(lean_object* v_self_3321_, lean_object* v_a_3322_){
_start:
{
lean_object* v_res_3323_; 
v_res_3323_ = l_Lasm_JS_Deno_FsFile_unlock(v_self_3321_);
return v_res_3323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync(lean_object* v_self_3325_){
_start:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3327_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_unlockSync___closed__0));
v___x_3328_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3329_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3325_, v___x_3327_, v___x_3328_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_unlockSync___boxed(lean_object* v_self_3330_, lean_object* v_a_3331_){
_start:
{
lean_object* v_res_3332_; 
v_res_3332_ = l_Lasm_JS_Deno_FsFile_unlockSync(v_self_3330_);
return v_res_3332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close(lean_object* v_self_3334_){
_start:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3336_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3337_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3338_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3334_, v___x_3336_, v___x_3337_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsFile_close___boxed(lean_object* v_self_3339_, lean_object* v_a_3340_){
_start:
{
lean_object* v_res_3341_; 
v_res_3341_ = l_Lasm_JS_Deno_FsFile_close(v_self_3339_);
return v_res_3341_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3342_; uint8_t v___x_3343_; uint64_t v___x_3344_; 
v___x_3342_ = 0ULL;
v___x_3343_ = 0;
v___x_3344_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_3343_, v___x_3342_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(lean_object* v_f_3346_, lean_object* v_args_3347_, lean_object* v_this_3348_){
_start:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; uint64_t v___x_3352_; lean_object* v___x_3353_; 
v___x_3350_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3351_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3351_, 0, v_f_3346_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
v___x_3352_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__0);
v___x_3353_ = l_Lasm_JS_Value_invokeRaw(v___x_3351_, v_this_3348_, v_args_3347_, v___x_3352_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3354_);
lean_dec_ref_known(v___x_3353_, 1);
v___x_3355_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___closed__1));
v___x_3356_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3355_, v_a_3354_);
lean_dec(v_a_3354_);
return v___x_3356_;
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
v_a_3357_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3353_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3353_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1___boxed(lean_object* v_f_3365_, lean_object* v_args_3366_, lean_object* v_this_3367_, lean_object* v_a_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_f_3365_, v_args_3366_, v_this_3367_);
return v_res_3369_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3370_; uint64_t v___x_3371_; 
v___x_3370_ = 1;
v___x_3371_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3370_);
return v___x_3371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(lean_object* v_o_3373_, lean_object* v_key_3374_){
_start:
{
lean_object* v___x_3376_; lean_object* v_k_3377_; lean_object* v___x_3378_; 
v___x_3376_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_k_3377_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_3377_, 0, v_key_3374_);
lean_ctor_set(v_k_3377_, 1, v___x_3376_);
v___x_3378_ = l_Lasm_JS_Wire_encodeIO(v_k_3377_);
if (lean_obj_tag(v___x_3378_) == 0)
{
lean_object* v_a_3379_; uint32_t v___x_3380_; uint32_t v___x_3381_; uint64_t v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
lean_inc(v_a_3379_);
lean_dec_ref_known(v___x_3378_, 1);
v___x_3380_ = 203;
v___x_3381_ = lasm_js_value_handle(v_o_3373_);
v___x_3382_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
v___x_3383_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3383_, 0, v_o_3373_);
lean_ctor_set(v___x_3383_, 1, v___x_3376_);
v___x_3384_ = lean_unsigned_to_nat(2u);
v___x_3385_ = lean_mk_empty_array_with_capacity(v___x_3384_);
lean_inc_ref(v_k_3377_);
v___x_3386_ = lean_array_push(v___x_3385_, v_k_3377_);
v___x_3387_ = lean_array_push(v___x_3386_, v___x_3383_);
v___x_3388_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
v___x_3389_ = lasm_js_call(v___x_3380_, v___x_3381_, v___x_3382_, v_a_3379_, v___x_3388_);
lean_dec_ref_known(v___x_3388_, 1);
lean_dec(v_a_3379_);
if (lean_obj_tag(v___x_3389_) == 0)
{
lean_object* v_a_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; 
v_a_3390_ = lean_ctor_get(v___x_3389_, 0);
lean_inc(v_a_3390_);
lean_dec_ref_known(v___x_3389_, 1);
v___x_3391_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3392_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3377_);
v___x_3393_ = lean_string_append(v___x_3391_, v___x_3392_);
lean_dec_ref(v___x_3392_);
v___x_3394_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3393_, v_a_3390_);
lean_dec(v_a_3390_);
lean_dec_ref(v___x_3393_);
return v___x_3394_;
}
else
{
lean_object* v_a_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3402_; 
lean_dec_ref_known(v_k_3377_, 2);
v_a_3395_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3397_ = v___x_3389_;
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_a_3395_);
lean_dec(v___x_3389_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3400_; 
if (v_isShared_3398_ == 0)
{
v___x_3400_ = v___x_3397_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_a_3395_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec_ref_known(v_k_3377_, 2);
lean_dec(v_o_3373_);
v_a_3403_ = lean_ctor_get(v___x_3378_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3378_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3378_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3378_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___boxed(lean_object* v_o_3411_, lean_object* v_key_3412_, lean_object* v_a_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_o_3411_, v_key_3412_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(lean_object* v_self_3417_){
_start:
{
lean_object* v___x_3419_; 
v___x_3419_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc(v_a_3420_);
lean_dec_ref_known(v___x_3419_, 1);
v___x_3421_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3422_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3420_, v___x_3421_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_a_3423_);
lean_dec_ref_known(v___x_3422_, 1);
v___x_3424_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3425_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3423_, v___x_3424_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v_a_3426_; lean_object* v___x_3427_; 
v_a_3426_ = lean_ctor_get(v___x_3425_, 0);
lean_inc(v_a_3426_);
lean_dec_ref_known(v___x_3425_, 1);
lean_inc(v_self_3417_);
v___x_3427_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3417_, v_a_3426_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v_a_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v_a_3428_ = lean_ctor_get(v___x_3427_, 0);
lean_inc(v_a_3428_);
lean_dec_ref_known(v___x_3427_, 1);
v___x_3429_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3430_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3431_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3431_, 0, v_self_3417_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
v___x_3432_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3428_, v___x_3429_, v___x_3431_);
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
v_a_3433_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3432_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3432_);
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
v_reuseFailAlloc_3439_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3441_; lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3448_; 
v_a_3441_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3443_ = v___x_3432_;
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
else
{
lean_inc(v_a_3441_);
lean_dec(v___x_3432_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3446_; 
if (v_isShared_3444_ == 0)
{
v___x_3446_ = v___x_3443_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_a_3441_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
return v___x_3446_;
}
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
lean_dec(v_self_3417_);
v_a_3449_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3427_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3427_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
else
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3464_; 
lean_dec(v_self_3417_);
v_a_3457_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3459_ = v___x_3425_;
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3425_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3462_; 
if (v_isShared_3460_ == 0)
{
v___x_3462_ = v___x_3459_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_a_3457_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
}
else
{
lean_object* v_a_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3472_; 
lean_dec(v_self_3417_);
v_a_3465_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3467_ = v___x_3422_;
v_isShared_3468_ = v_isSharedCheck_3472_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_a_3465_);
lean_dec(v___x_3422_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3472_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___x_3470_; 
if (v_isShared_3468_ == 0)
{
v___x_3470_ = v___x_3467_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_a_3465_);
v___x_3470_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
return v___x_3470_;
}
}
}
}
else
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3480_; 
lean_dec(v_self_3417_);
v_a_3473_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3475_ = v___x_3419_;
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3419_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3478_; 
if (v_isShared_3476_ == 0)
{
v___x_3478_ = v___x_3475_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v_a_3473_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___boxed(lean_object* v_self_3481_, lean_object* v_a_3482_){
_start:
{
lean_object* v_res_3483_; 
v_res_3483_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3481_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(lean_object* v_x_3484_){
_start:
{
if (lean_obj_tag(v_x_3484_) == 0)
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3494_; 
v_a_3486_ = lean_ctor_get(v_x_3484_, 0);
v_isSharedCheck_3494_ = !lean_is_exclusive(v_x_3484_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3488_ = v_x_3484_;
v_isShared_3489_ = v_isSharedCheck_3494_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v_x_3484_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3494_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3491_; 
if (v_isShared_3489_ == 0)
{
v___x_3491_ = v___x_3488_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v_a_3486_);
v___x_3491_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
lean_object* v___x_3492_; 
v___x_3492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3491_);
return v___x_3492_;
}
}
}
else
{
lean_object* v_a_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3504_; 
v_a_3495_ = lean_ctor_get(v_x_3484_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v_x_3484_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3497_ = v_x_3484_;
v_isShared_3498_ = v_isSharedCheck_3504_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_a_3495_);
lean_dec(v_x_3484_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3504_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v___x_3499_; lean_object* v___x_3501_; 
v___x_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3499_, 0, v_a_3495_);
if (v_isShared_3498_ == 0)
{
lean_ctor_set(v___x_3497_, 0, v___x_3499_);
v___x_3501_ = v___x_3497_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v___x_3499_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0___boxed(lean_object* v_x_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__0(v_x_3505_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_3508_, lean_object* v_d_3509_){
_start:
{
lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3518_; lean_object* v_received_3519_; lean_object* v___y_3538_; lean_object* v_a_3541_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___lam__0___closed__0));
lean_inc(v_d_3509_);
v___x_3566_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3509_, v___x_3565_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3567_);
lean_dec_ref_known(v___x_3566_, 1);
v_a_3541_ = v_a_3567_;
goto v___jp_3540_;
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v_a_3568_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3568_);
lean_dec_ref_known(v___x_3566_, 1);
v___x_3569_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__0));
lean_inc(v_d_3509_);
v___x_3570_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3509_, v___x_3569_);
if (lean_obj_tag(v___x_3570_) == 0)
{
lean_object* v_a_3571_; 
lean_dec(v_a_3568_);
v_a_3571_ = lean_ctor_get(v___x_3570_, 0);
lean_inc(v_a_3571_);
lean_dec_ref_known(v___x_3570_, 1);
v_a_3541_ = v_a_3571_;
goto v___jp_3540_;
}
else
{
lean_object* v_a_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v_a_3572_ = lean_ctor_get(v___x_3570_, 0);
lean_inc(v_a_3572_);
lean_dec_ref_known(v___x_3570_, 1);
v___x_3573_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__1));
lean_inc(v_d_3509_);
v___x_3574_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3509_, v___x_3573_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; 
lean_dec(v_a_3572_);
lean_dec(v_a_3568_);
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref_known(v___x_3574_, 1);
v_a_3541_ = v_a_3575_;
goto v___jp_3540_;
}
else
{
lean_object* v_a_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v_a_3576_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3576_);
lean_dec_ref_known(v___x_3574_, 1);
v___x_3577_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__2));
lean_inc(v_d_3509_);
v___x_3578_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3509_, v___x_3577_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; 
lean_dec(v_a_3576_);
lean_dec(v_a_3572_);
lean_dec(v_a_3568_);
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3579_);
lean_dec_ref_known(v___x_3578_, 1);
v_a_3541_ = v_a_3579_;
goto v___jp_3540_;
}
else
{
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3591_; 
lean_dec(v_d_3509_);
v_a_3580_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3582_ = v___x_3578_;
v_isShared_3583_ = v_isSharedCheck_3591_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3578_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3591_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3584_; uint8_t v___x_3585_; uint8_t v___x_3586_; uint8_t v___x_3587_; lean_object* v___x_3589_; 
v___x_3584_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3584_, 0, v_a_3568_);
v___x_3585_ = lean_unbox(v_a_3572_);
lean_dec(v_a_3572_);
lean_ctor_set_uint8(v___x_3584_, sizeof(void*)*1, v___x_3585_);
v___x_3586_ = lean_unbox(v_a_3576_);
lean_dec(v_a_3576_);
lean_ctor_set_uint8(v___x_3584_, sizeof(void*)*1 + 1, v___x_3586_);
v___x_3587_ = lean_unbox(v_a_3580_);
lean_dec(v_a_3580_);
lean_ctor_set_uint8(v___x_3584_, sizeof(void*)*1 + 2, v___x_3587_);
if (v_isShared_3583_ == 0)
{
lean_ctor_set_tag(v___x_3582_, 0);
lean_ctor_set(v___x_3582_, 0, v___x_3584_);
v___x_3589_ = v___x_3582_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v___x_3584_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
}
}
}
}
v___jp_3511_:
{
lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3514_ = lean_string_append(v___y_3512_, v___y_3513_);
lean_dec_ref(v___y_3513_);
v___x_3515_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
v___x_3516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3516_, 0, v___x_3515_);
return v___x_3516_;
}
v___jp_3517_:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; 
v___x_3520_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_3521_ = lean_string_append(v___x_3520_, v_context_3508_);
v___x_3522_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_3523_ = lean_string_append(v___x_3521_, v___x_3522_);
v___x_3524_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSDirEntry___closed__1));
v___x_3525_ = lean_string_append(v___x_3523_, v___x_3524_);
v___x_3526_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_3527_ = lean_string_append(v___x_3525_, v___x_3526_);
v___x_3528_ = lean_string_append(v___x_3527_, v_received_3519_);
lean_dec_ref(v_received_3519_);
v___x_3529_ = lean_string_utf8_byte_size(v___y_3518_);
v___x_3530_ = lean_unsigned_to_nat(0u);
v___x_3531_ = lean_nat_dec_eq(v___x_3529_, v___x_3530_);
if (v___x_3531_ == 0)
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3532_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_3533_ = lean_string_append(v___x_3532_, v___y_3518_);
lean_dec_ref(v___y_3518_);
v___x_3534_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_3535_ = lean_string_append(v___x_3533_, v___x_3534_);
v___y_3512_ = v___x_3528_;
v___y_3513_ = v___x_3535_;
goto v___jp_3511_;
}
else
{
lean_object* v___x_3536_; 
lean_dec_ref(v___y_3518_);
v___x_3536_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_3512_ = v___x_3528_;
v___y_3513_ = v___x_3536_;
goto v___jp_3511_;
}
}
v___jp_3537_:
{
lean_object* v___x_3539_; 
v___x_3539_ = l_Lasm_JS_Data_describe(v_d_3509_);
v___y_3518_ = v___y_3538_;
v_received_3519_ = v___x_3539_;
goto v___jp_3517_;
}
v___jp_3540_:
{
if (lean_obj_tag(v_d_3509_) == 9)
{
lean_object* v_value_3542_; lean_object* v_description_3543_; lean_object* v___x_3544_; uint8_t v___x_3545_; 
v_value_3542_ = lean_ctor_get(v_d_3509_, 0);
v_description_3543_ = lean_ctor_get(v_d_3509_, 1);
v___x_3544_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3545_ = lean_string_dec_eq(v_description_3543_, v___x_3544_);
if (v___x_3545_ == 0)
{
v___y_3538_ = v_a_3541_;
goto v___jp_3537_;
}
else
{
lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3562_; 
lean_inc(v_value_3542_);
v_isSharedCheck_3562_ = !lean_is_exclusive(v_d_3509_);
if (v_isSharedCheck_3562_ == 0)
{
lean_object* v_unused_3563_; lean_object* v_unused_3564_; 
v_unused_3563_ = lean_ctor_get(v_d_3509_, 1);
lean_dec(v_unused_3563_);
v_unused_3564_ = lean_ctor_get(v_d_3509_, 0);
lean_dec(v_unused_3564_);
v___x_3547_ = v_d_3509_;
v_isShared_3548_ = v_isSharedCheck_3562_;
goto v_resetjp_3546_;
}
else
{
lean_dec(v_d_3509_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3562_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
uint32_t v___x_3549_; uint64_t v___x_3550_; lean_object* v___x_3552_; 
v___x_3549_ = 206;
v___x_3550_ = 0ULL;
lean_inc(v_value_3542_);
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 1, v___x_3544_);
v___x_3552_ = v___x_3547_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v_value_3542_);
lean_ctor_set(v_reuseFailAlloc_3561_, 1, v___x_3544_);
v___x_3552_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
uint32_t v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lasm_js_value_handle(v_value_3542_);
lean_dec(v_value_3542_);
v___x_3554_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3549_, v___x_3550_, v___x_3552_, v___x_3553_);
lean_dec_ref(v___x_3552_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; uint8_t v___x_3556_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v___x_3554_, 1);
v___x_3556_ = lean_string_validate_utf8(v_a_3555_);
if (v___x_3556_ == 0)
{
lean_object* v___x_3557_; lean_object* v___x_3558_; 
lean_dec(v_a_3555_);
v___x_3557_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6);
v___x_3558_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3557_);
v___y_3518_ = v_a_3541_;
v_received_3519_ = v___x_3558_;
goto v___jp_3517_;
}
else
{
lean_object* v___x_3559_; 
v___x_3559_ = lean_string_from_utf8_unchecked(v_a_3555_);
v___y_3518_ = v_a_3541_;
v_received_3519_ = v___x_3559_;
goto v___jp_3517_;
}
}
else
{
lean_object* v___x_3560_; 
lean_dec_ref_known(v___x_3554_, 1);
v___x_3560_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7));
v___y_3518_ = v_a_3541_;
v_received_3519_ = v___x_3560_;
goto v___jp_3517_;
}
}
}
}
}
else
{
v___y_3538_ = v_a_3541_;
goto v___jp_3537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3592_, lean_object* v_d_3593_, lean_object* v_a_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3592_, v_d_3593_);
lean_dec_ref(v_context_3592_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(lean_object* v_context_3596_, lean_object* v_bytes_3597_){
_start:
{
lean_object* v___x_3599_; 
v___x_3599_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3597_);
if (lean_obj_tag(v___x_3599_) == 0)
{
lean_object* v_a_3600_; lean_object* v___x_3601_; 
v_a_3600_ = lean_ctor_get(v___x_3599_, 0);
lean_inc(v_a_3600_);
lean_dec_ref_known(v___x_3599_, 1);
v___x_3601_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0_spec__1(v_context_3596_, v_a_3600_);
return v___x_3601_;
}
else
{
lean_object* v_a_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3609_; 
v_a_3602_ = lean_ctor_get(v___x_3599_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3604_ = v___x_3599_;
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_a_3602_);
lean_dec(v___x_3599_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3607_; 
if (v_isShared_3605_ == 0)
{
v___x_3607_ = v___x_3604_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3602_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_3610_, lean_object* v_bytes_3611_, lean_object* v_a_3612_){
_start:
{
lean_object* v_res_3613_; 
v_res_3613_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v_context_3610_, v_bytes_3611_);
lean_dec_ref(v_bytes_3611_);
lean_dec_ref(v_context_3610_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(lean_object* v_o_3614_, lean_object* v_key_3615_){
_start:
{
lean_object* v_k_3617_; lean_object* v___x_3618_; 
v_k_3617_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3617_, 0, v_key_3615_);
v___x_3618_ = l_Lasm_JS_Wire_encodeIO(v_k_3617_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_a_3619_; uint32_t v___x_3620_; uint32_t v___x_3621_; uint64_t v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v_a_3619_ = lean_ctor_get(v___x_3618_, 0);
lean_inc(v_a_3619_);
lean_dec_ref_known(v___x_3618_, 1);
v___x_3620_ = 203;
v___x_3621_ = lasm_js_value_handle(v_o_3614_);
v___x_3622_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_3623_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3624_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3624_, 0, v_o_3614_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = lean_unsigned_to_nat(2u);
v___x_3626_ = lean_mk_empty_array_with_capacity(v___x_3625_);
lean_inc_ref(v_k_3617_);
v___x_3627_ = lean_array_push(v___x_3626_, v_k_3617_);
v___x_3628_ = lean_array_push(v___x_3627_, v___x_3624_);
v___x_3629_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3628_);
v___x_3630_ = lasm_js_call(v___x_3620_, v___x_3621_, v___x_3622_, v_a_3619_, v___x_3629_);
lean_dec_ref_known(v___x_3629_, 1);
lean_dec(v_a_3619_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_a_3631_);
lean_dec_ref_known(v___x_3630_, 1);
v___x_3632_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_3633_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3617_);
v___x_3634_ = lean_string_append(v___x_3632_, v___x_3633_);
lean_dec_ref(v___x_3633_);
v___x_3635_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0_spec__0(v___x_3634_, v_a_3631_);
lean_dec(v_a_3631_);
lean_dec_ref(v___x_3634_);
return v___x_3635_;
}
else
{
lean_object* v_a_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3643_; 
lean_dec_ref_known(v_k_3617_, 1);
v_a_3636_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3638_ = v___x_3630_;
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_a_3636_);
lean_dec(v___x_3630_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v___x_3641_; 
if (v_isShared_3639_ == 0)
{
v___x_3641_ = v___x_3638_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v_a_3636_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
return v___x_3641_;
}
}
}
}
else
{
lean_object* v_a_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3651_; 
lean_dec_ref_known(v_k_3617_, 1);
lean_dec(v_o_3614_);
v_a_3644_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3646_ = v___x_3618_;
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_a_3644_);
lean_dec(v___x_3618_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3649_; 
if (v_isShared_3647_ == 0)
{
v___x_3649_ = v___x_3646_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_a_3644_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0___boxed(lean_object* v_o_3652_, lean_object* v_key_3653_, lean_object* v_a_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_o_3652_, v_key_3653_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(lean_object* v___f_3661_, lean_object* v_a_3662_, lean_object* v_x_3663_){
_start:
{
if (lean_obj_tag(v_x_3663_) == 0)
{
lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3673_; 
lean_dec(v_a_3662_);
lean_dec_ref(v___f_3661_);
v_a_3665_ = lean_ctor_get(v_x_3663_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v_x_3663_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3667_ = v_x_3663_;
v_isShared_3668_ = v_isSharedCheck_3673_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_dec(v_x_3663_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3673_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3668_ == 0)
{
v___x_3670_ = v___x_3667_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
lean_object* v___x_3671_; 
v___x_3671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3670_);
return v___x_3671_;
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3696_; 
v_a_3674_ = lean_ctor_get(v_x_3663_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v_x_3663_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3676_ = v_x_3663_;
v_isShared_3677_ = v_isSharedCheck_3696_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v_x_3663_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3696_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
uint8_t v___x_3678_; 
v___x_3678_ = lean_unbox(v_a_3674_);
if (v___x_3678_ == 0)
{
lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v_val_3682_; lean_object* v___x_3686_; 
v___x_3679_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_3680_ = lean_unsigned_to_nat(0u);
v___x_3686_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next_spec__0(v_a_3662_, v___x_3679_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v_a_3687_; lean_object* v___x_3689_; 
v_a_3687_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_a_3687_);
lean_dec_ref_known(v___x_3686_, 1);
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 0, v_a_3687_);
v___x_3689_ = v___x_3676_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_a_3687_);
v___x_3689_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
v_val_3682_ = v___x_3689_;
goto v___jp_3681_;
}
}
else
{
lean_object* v_a_3691_; lean_object* v___x_3693_; 
v_a_3691_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_a_3691_);
lean_dec_ref_known(v___x_3686_, 1);
if (v_isShared_3677_ == 0)
{
lean_ctor_set_tag(v___x_3676_, 0);
lean_ctor_set(v___x_3676_, 0, v_a_3691_);
v___x_3693_ = v___x_3676_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_a_3691_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
v_val_3682_ = v___x_3693_;
goto v___jp_3681_;
}
}
v___jp_3681_:
{
lean_object* v___x_3683_; uint8_t v___x_3684_; lean_object* v___x_3685_; 
v___x_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3683_, 0, v_val_3682_);
v___x_3684_ = lean_unbox(v_a_3674_);
lean_dec(v_a_3674_);
v___x_3685_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3680_, v___x_3684_, v___x_3683_, v___f_3661_);
return v___x_3685_;
}
}
else
{
lean_object* v___x_3695_; 
lean_del_object(v___x_3676_);
lean_dec(v_a_3674_);
lean_dec(v_a_3662_);
lean_dec_ref(v___f_3661_);
v___x_3695_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__2));
return v___x_3695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed(lean_object* v___f_3697_, lean_object* v_a_3698_, lean_object* v_x_3699_, lean_object* v___y_3700_){
_start:
{
lean_object* v_res_3701_; 
v_res_3701_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1(v___f_3697_, v_a_3698_, v_x_3699_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(lean_object* v___f_3703_, lean_object* v_x_3704_){
_start:
{
if (lean_obj_tag(v_x_3704_) == 0)
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3714_; 
lean_dec_ref(v___f_3703_);
v_a_3706_ = lean_ctor_get(v_x_3704_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v_x_3704_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3708_ = v_x_3704_;
v_isShared_3709_ = v_isSharedCheck_3714_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v_x_3704_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3714_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3711_; 
if (v_isShared_3709_ == 0)
{
v___x_3711_ = v___x_3708_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_a_3706_);
v___x_3711_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
lean_object* v___x_3712_; 
v___x_3712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
return v___x_3712_;
}
}
}
else
{
lean_object* v_a_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3736_; 
v_a_3715_ = lean_ctor_get(v_x_3704_, 0);
v_isSharedCheck_3736_ = !lean_is_exclusive(v_x_3704_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3717_ = v_x_3704_;
v_isShared_3718_ = v_isSharedCheck_3736_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_a_3715_);
lean_dec(v_x_3704_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3736_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___f_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; uint8_t v___x_3722_; lean_object* v_val_3724_; lean_object* v___x_3727_; 
lean_inc(v_a_3715_);
v___f_3719_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3719_, 0, v___f_3703_);
lean_closure_set(v___f_3719_, 1, v_a_3715_);
v___x_3720_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_3721_ = lean_unsigned_to_nat(0u);
v___x_3722_ = 0;
v___x_3727_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_3715_, v___x_3720_);
if (lean_obj_tag(v___x_3727_) == 0)
{
lean_object* v_a_3728_; lean_object* v___x_3730_; 
v_a_3728_ = lean_ctor_get(v___x_3727_, 0);
lean_inc(v_a_3728_);
lean_dec_ref_known(v___x_3727_, 1);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 0, v_a_3728_);
v___x_3730_ = v___x_3717_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v_a_3728_);
v___x_3730_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
v_val_3724_ = v___x_3730_;
goto v___jp_3723_;
}
}
else
{
lean_object* v_a_3732_; lean_object* v___x_3734_; 
v_a_3732_ = lean_ctor_get(v___x_3727_, 0);
lean_inc(v_a_3732_);
lean_dec_ref_known(v___x_3727_, 1);
if (v_isShared_3718_ == 0)
{
lean_ctor_set_tag(v___x_3717_, 0);
lean_ctor_set(v___x_3717_, 0, v_a_3732_);
v___x_3734_ = v___x_3717_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v_a_3732_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
v_val_3724_ = v___x_3734_;
goto v___jp_3723_;
}
}
v___jp_3723_:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___x_3725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3725_, 0, v_val_3724_);
v___x_3726_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3721_, v___x_3722_, v___x_3725_, v___f_3719_);
return v___x_3726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___boxed(lean_object* v___f_3737_, lean_object* v_x_3738_, lean_object* v___y_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2(v___f_3737_, v_x_3738_);
return v_res_3740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(lean_object* v_it_3745_){
_start:
{
lean_object* v___f_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; uint8_t v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___f_3747_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__1));
v___x_3748_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_3749_ = lean_unsigned_to_nat(0u);
v___x_3750_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3751_ = 0;
v___x_3752_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_3745_, v___x_3748_, v___x_3750_);
v___x_3753_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3749_, v___x_3751_, v___x_3752_, v___f_3747_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___boxed(lean_object* v_it_3754_, lean_object* v_a_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3754_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(lean_object* v_acc_3757_, lean_object* v_it_3758_, lean_object* v_x_3759_){
_start:
{
if (lean_obj_tag(v_x_3759_) == 0)
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3769_; 
lean_dec(v_it_3758_);
lean_dec_ref(v_acc_3757_);
v_a_3761_ = lean_ctor_get(v_x_3759_, 0);
v_isSharedCheck_3769_ = !lean_is_exclusive(v_x_3759_);
if (v_isSharedCheck_3769_ == 0)
{
v___x_3763_ = v_x_3759_;
v_isShared_3764_ = v_isSharedCheck_3769_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v_x_3759_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3769_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3766_; 
if (v_isShared_3764_ == 0)
{
v___x_3766_ = v___x_3763_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v_a_3761_);
v___x_3766_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
lean_object* v___x_3767_; 
v___x_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3766_);
return v___x_3767_;
}
}
}
else
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3781_; 
v_a_3770_ = lean_ctor_get(v_x_3759_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v_x_3759_);
if (v_isSharedCheck_3781_ == 0)
{
v___x_3772_ = v_x_3759_;
v_isShared_3773_ = v_isSharedCheck_3781_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v_x_3759_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3781_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
if (lean_obj_tag(v_a_3770_) == 0)
{
lean_object* v___x_3775_; 
lean_dec(v_it_3758_);
if (v_isShared_3773_ == 0)
{
lean_ctor_set(v___x_3772_, 0, v_acc_3757_);
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v_acc_3757_);
v___x_3775_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; 
v___x_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3775_);
return v___x_3776_;
}
}
else
{
lean_object* v_val_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; 
lean_del_object(v___x_3772_);
v_val_3778_ = lean_ctor_get(v_a_3770_, 0);
lean_inc(v_val_3778_);
lean_dec_ref_known(v_a_3770_, 1);
v___x_3779_ = lean_array_push(v_acc_3757_, v_val_3778_);
v___x_3780_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3758_, v___x_3779_);
return v___x_3780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed(lean_object* v_acc_3782_, lean_object* v_it_3783_, lean_object* v_x_3784_, lean_object* v___y_3785_){
_start:
{
lean_object* v_res_3786_; 
v_res_3786_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0(v_acc_3782_, v_it_3783_, v_x_3784_);
return v_res_3786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(lean_object* v_it_3787_, lean_object* v_acc_3788_){
_start:
{
lean_object* v___f_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
lean_inc(v_it_3787_);
v___f_3790_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3790_, 0, v_acc_3788_);
lean_closure_set(v___f_3790_, 1, v_it_3787_);
v___x_3791_ = lean_unsigned_to_nat(0u);
v___x_3792_ = 0;
v___x_3793_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next(v_it_3787_);
v___x_3794_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3791_, v___x_3792_, v___x_3793_, v___f_3790_);
return v___x_3794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop___boxed(lean_object* v_it_3795_, lean_object* v_acc_3796_, lean_object* v_a_3797_){
_start:
{
lean_object* v_res_3798_; 
v_res_3798_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_it_3795_, v_acc_3796_);
return v_res_3798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(lean_object* v_x_3801_){
_start:
{
if (lean_obj_tag(v_x_3801_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3811_; 
v_a_3803_ = lean_ctor_get(v_x_3801_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v_x_3801_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3805_ = v_x_3801_;
v_isShared_3806_ = v_isSharedCheck_3811_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v_x_3801_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3811_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
lean_object* v___x_3809_; 
v___x_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3808_);
return v___x_3809_;
}
}
}
else
{
lean_object* v_a_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v_a_3812_ = lean_ctor_get(v_x_3801_, 0);
lean_inc(v_a_3812_);
lean_dec_ref_known(v_x_3801_, 1);
v___x_3813_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___closed__0));
v___x_3814_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values_loop(v_a_3812_, v___x_3813_);
return v___x_3814_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0___boxed(lean_object* v_x_3815_, lean_object* v___y_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values___lam__0(v_x_3815_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values(lean_object* v_self_3819_){
_start:
{
lean_object* v___f_3821_; lean_object* v___x_3822_; uint8_t v___x_3823_; lean_object* v_val_3825_; lean_object* v___x_3828_; 
v___f_3821_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_values___closed__0));
v___x_3822_ = lean_unsigned_to_nat(0u);
v___x_3823_ = 0;
v___x_3828_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator(v_self_3819_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3836_; 
v_a_3829_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3831_ = v___x_3828_;
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3828_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3834_; 
if (v_isShared_3832_ == 0)
{
lean_ctor_set_tag(v___x_3831_, 1);
v___x_3834_ = v___x_3831_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_a_3829_);
v___x_3834_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
v_val_3825_ = v___x_3834_;
goto v___jp_3824_;
}
}
}
else
{
lean_object* v_a_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3844_; 
v_a_3837_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3839_ = v___x_3828_;
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_a_3837_);
lean_dec(v___x_3828_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v___x_3842_; 
if (v_isShared_3840_ == 0)
{
lean_ctor_set_tag(v___x_3839_, 0);
v___x_3842_ = v___x_3839_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_a_3837_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
v_val_3825_ = v___x_3842_;
goto v___jp_3824_;
}
}
}
v___jp_3824_:
{
lean_object* v___x_3826_; lean_object* v___x_3827_; 
v___x_3826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3826_, 0, v_val_3825_);
v___x_3827_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3822_, v___x_3823_, v___x_3826_, v___f_3821_);
return v___x_3827_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DirEntryAsyncIterable_values___boxed(lean_object* v_self_3845_, lean_object* v_a_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l_Lasm_JS_Deno_DirEntryAsyncIterable_values(v_self_3845_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close(lean_object* v_self_3848_){
_start:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; 
v___x_3850_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_close___closed__0));
v___x_3851_ = lean_obj_once(&l_Lasm_JS_Deno_FsFile_stat___closed__2, &l_Lasm_JS_Deno_FsFile_stat___closed__2_once, _init_l_Lasm_JS_Deno_FsFile_stat___closed__2);
v___x_3852_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3848_, v___x_3850_, v___x_3851_);
return v___x_3852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_close___boxed(lean_object* v_self_3853_, lean_object* v_a_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l_Lasm_JS_Deno_FsWatcher_close(v_self_3853_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator(lean_object* v_self_3856_){
_start:
{
lean_object* v___x_3858_; 
v___x_3858_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3858_) == 0)
{
lean_object* v_a_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v_a_3859_ = lean_ctor_get(v___x_3858_, 0);
lean_inc(v_a_3859_);
lean_dec_ref_known(v___x_3858_, 1);
v___x_3860_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__0));
v___x_3861_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3859_, v___x_3860_);
if (lean_obj_tag(v___x_3861_) == 0)
{
lean_object* v_a_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v_a_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc(v_a_3862_);
lean_dec_ref_known(v___x_3861_, 1);
v___x_3863_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_iterator___closed__1));
v___x_3864_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3862_, v___x_3863_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; lean_object* v___x_3866_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
lean_inc(v_a_3865_);
lean_dec_ref_known(v___x_3864_, 1);
lean_inc(v_self_3856_);
v___x_3866_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0(v_self_3856_, v_a_3865_);
if (lean_obj_tag(v___x_3866_) == 0)
{
lean_object* v_a_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
lean_inc(v_a_3867_);
lean_dec_ref_known(v___x_3866_, 1);
v___x_3868_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_3869_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_3870_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3870_, 0, v_self_3856_);
lean_ctor_set(v___x_3870_, 1, v___x_3869_);
v___x_3871_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__1(v_a_3867_, v___x_3868_, v___x_3870_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3879_; 
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3874_ = v___x_3871_;
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3871_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3877_; 
if (v_isShared_3875_ == 0)
{
v___x_3877_ = v___x_3874_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v_a_3872_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
else
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
v_a_3880_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3882_ = v___x_3871_;
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v___x_3871_);
v___x_3882_ = lean_box(0);
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
v_resetjp_3881_:
{
lean_object* v___x_3885_; 
if (v_isShared_3883_ == 0)
{
v___x_3885_ = v___x_3882_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_a_3880_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
}
else
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
lean_dec(v_self_3856_);
v_a_3888_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v___x_3866_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___x_3866_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
}
else
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3903_; 
lean_dec(v_self_3856_);
v_a_3896_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3903_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3898_ = v___x_3864_;
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v___x_3864_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3901_; 
if (v_isShared_3899_ == 0)
{
v___x_3901_ = v___x_3898_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v_a_3896_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
}
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3911_; 
lean_dec(v_self_3856_);
v_a_3904_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3906_ = v___x_3861_;
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3861_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3909_; 
if (v_isShared_3907_ == 0)
{
v___x_3909_ = v___x_3906_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3904_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
else
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
lean_dec(v_self_3856_);
v_a_3912_ = lean_ctor_get(v___x_3858_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v___x_3858_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3914_ = v___x_3858_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3858_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3912_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_iterator___boxed(lean_object* v_self_3920_, lean_object* v_a_3921_){
_start:
{
lean_object* v_res_3922_; 
v_res_3922_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_3920_);
return v_res_3922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(lean_object* v_x_3923_){
_start:
{
if (lean_obj_tag(v_x_3923_) == 0)
{
lean_object* v_a_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3933_; 
v_a_3925_ = lean_ctor_get(v_x_3923_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v_x_3923_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3927_ = v_x_3923_;
v_isShared_3928_ = v_isSharedCheck_3933_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_a_3925_);
lean_dec(v_x_3923_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3933_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_a_3925_);
v___x_3930_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
lean_object* v___x_3931_; 
v___x_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
return v___x_3931_;
}
}
}
else
{
lean_object* v_a_3934_; lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3943_; 
v_a_3934_ = lean_ctor_get(v_x_3923_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v_x_3923_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3936_ = v_x_3923_;
v_isShared_3937_ = v_isSharedCheck_3943_;
goto v_resetjp_3935_;
}
else
{
lean_inc(v_a_3934_);
lean_dec(v_x_3923_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3943_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3938_; lean_object* v___x_3940_; 
v___x_3938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3938_, 0, v_a_3934_);
if (v_isShared_3937_ == 0)
{
lean_ctor_set(v___x_3936_, 0, v___x_3938_);
v___x_3940_ = v___x_3936_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v___x_3938_);
v___x_3940_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
lean_object* v___x_3941_; 
v___x_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
return v___x_3941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0___boxed(lean_object* v_x_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__0(v_x_3944_);
return v_res_3946_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3947_; lean_object* v___x_3948_; 
v___x_3947_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__0));
v___x_3948_ = lean_string_utf8_byte_size(v___x_3947_);
return v___x_3948_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; uint8_t v___x_3951_; 
v___x_3949_ = lean_unsigned_to_nat(0u);
v___x_3950_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_3951_ = lean_nat_dec_eq(v___x_3950_, v___x_3949_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3955_, lean_object* v_key_3956_){
_start:
{
if (lean_obj_tag(v_d_3955_) == 8)
{
lean_object* v___x_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_4003_; 
v___x_3957_ = l_Lasm_JS_Data_field(v_d_3955_, v_key_3956_);
v_isSharedCheck_4003_ = !lean_is_exclusive(v_d_3955_);
if (v_isSharedCheck_4003_ == 0)
{
lean_object* v_unused_4004_; 
v_unused_4004_ = lean_ctor_get(v_d_3955_, 0);
lean_dec(v_unused_4004_);
v___x_3959_ = v_d_3955_;
v_isShared_3960_ = v_isSharedCheck_4003_;
goto v_resetjp_3958_;
}
else
{
lean_dec(v_d_3955_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_4003_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
if (lean_obj_tag(v___x_3957_) == 4)
{
lean_object* v_s_3981_; lean_object* v___x_3982_; uint8_t v___x_3983_; 
v_s_3981_ = lean_ctor_get(v___x_3957_, 0);
lean_inc_ref(v_s_3981_);
v___x_3982_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__0));
v___x_3983_ = lean_string_dec_eq(v_s_3981_, v___x_3982_);
if (v___x_3983_ == 0)
{
lean_object* v___x_3984_; uint8_t v___x_3985_; 
v___x_3984_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__2));
v___x_3985_ = lean_string_dec_eq(v_s_3981_, v___x_3984_);
if (v___x_3985_ == 0)
{
lean_object* v___x_3986_; uint8_t v___x_3987_; 
v___x_3986_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_3987_ = lean_string_dec_eq(v_s_3981_, v___x_3986_);
if (v___x_3987_ == 0)
{
lean_object* v___x_3988_; uint8_t v___x_3989_; 
v___x_3988_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__6));
v___x_3989_ = lean_string_dec_eq(v_s_3981_, v___x_3988_);
if (v___x_3989_ == 0)
{
lean_object* v___x_3990_; uint8_t v___x_3991_; 
v___x_3990_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__8));
v___x_3991_ = lean_string_dec_eq(v_s_3981_, v___x_3990_);
if (v___x_3991_ == 0)
{
lean_object* v___x_3992_; uint8_t v___x_3993_; 
v___x_3992_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__10));
v___x_3993_ = lean_string_dec_eq(v_s_3981_, v___x_3992_);
if (v___x_3993_ == 0)
{
lean_object* v___x_3994_; uint8_t v___x_3995_; 
v___x_3994_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__12));
v___x_3995_ = lean_string_dec_eq(v_s_3981_, v___x_3994_);
lean_dec_ref(v_s_3981_);
if (v___x_3995_ == 0)
{
goto v___jp_3961_;
}
else
{
lean_object* v___x_3996_; 
lean_dec_ref_known(v___x_3957_, 1);
lean_del_object(v___x_3959_);
v___x_3996_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__2));
return v___x_3996_;
}
}
else
{
lean_object* v___x_3997_; 
lean_dec_ref_known(v___x_3957_, 1);
lean_dec_ref(v_s_3981_);
lean_del_object(v___x_3959_);
v___x_3997_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__3));
return v___x_3997_;
}
}
else
{
lean_object* v___x_3998_; 
lean_dec_ref_known(v___x_3957_, 1);
lean_dec_ref(v_s_3981_);
lean_del_object(v___x_3959_);
v___x_3998_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__4));
return v___x_3998_;
}
}
else
{
lean_object* v___x_3999_; 
lean_dec_ref_known(v___x_3957_, 1);
lean_dec_ref(v_s_3981_);
lean_del_object(v___x_3959_);
v___x_3999_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__5));
return v___x_3999_;
}
}
else
{
lean_object* v___x_4000_; 
lean_dec_ref_known(v___x_3957_, 1);
lean_dec_ref(v_s_3981_);
lean_del_object(v___x_3959_);
v___x_4000_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__6));
return v___x_4000_;
}
}
else
{
lean_object* v___x_4001_; 
lean_dec_ref_known(v___x_3957_, 1);
lean_dec_ref(v_s_3981_);
lean_del_object(v___x_3959_);
v___x_4001_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__7));
return v___x_4001_;
}
}
else
{
lean_object* v___x_4002_; 
lean_dec_ref_known(v___x_3957_, 1);
lean_dec_ref(v_s_3981_);
lean_del_object(v___x_3959_);
v___x_4002_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___lam__0___closed__8));
return v___x_4002_;
}
}
else
{
goto v___jp_3961_;
}
v___jp_3961_:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; uint8_t v___x_3972_; 
v___x_3962_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_3963_ = lean_string_append(v___x_3962_, v_key_3956_);
v___x_3964_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_3965_ = lean_string_append(v___x_3963_, v___x_3964_);
v___x_3966_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEventKind___closed__1));
v___x_3967_ = lean_string_append(v___x_3965_, v___x_3966_);
v___x_3968_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4));
v___x_3969_ = lean_string_append(v___x_3967_, v___x_3968_);
v___x_3970_ = l_Lasm_JS_Data_describe(v___x_3957_);
v___x_3971_ = lean_string_append(v___x_3969_, v___x_3970_);
lean_dec_ref(v___x_3970_);
v___x_3972_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_3972_ == 0)
{
lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3976_; 
v___x_3973_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_3974_ = lean_string_append(v___x_3971_, v___x_3973_);
if (v_isShared_3960_ == 0)
{
lean_ctor_set_tag(v___x_3959_, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3974_);
v___x_3976_ = v___x_3959_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v___x_3974_);
v___x_3976_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
return v___x_3976_;
}
}
else
{
lean_object* v___x_3979_; 
if (v_isShared_3960_ == 0)
{
lean_ctor_set_tag(v___x_3959_, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3971_);
v___x_3979_ = v___x_3959_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v___x_3971_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
}
}
}
else
{
lean_object* v___x_4005_; 
lean_dec(v_d_3955_);
v___x_4005_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__3));
return v___x_4005_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_4006_, lean_object* v_key_4007_){
_start:
{
lean_object* v_res_4008_; 
v_res_4008_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_4006_, v_key_4007_);
lean_dec_ref(v_key_4007_);
return v_res_4008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_4014_, lean_object* v_key_4015_){
_start:
{
if (lean_obj_tag(v_d_4014_) == 8)
{
lean_object* v___x_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4060_; 
v___x_4016_ = l_Lasm_JS_Data_field(v_d_4014_, v_key_4015_);
v_isSharedCheck_4060_ = !lean_is_exclusive(v_d_4014_);
if (v_isSharedCheck_4060_ == 0)
{
lean_object* v_unused_4061_; 
v_unused_4061_ = lean_ctor_get(v_d_4014_, 0);
lean_dec(v_unused_4061_);
v___x_4018_ = v_d_4014_;
v_isShared_4019_ = v_isSharedCheck_4060_;
goto v_resetjp_4017_;
}
else
{
lean_dec(v_d_4014_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4060_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v_a_4021_; 
if (lean_obj_tag(v___x_4016_) == 7)
{
lean_object* v_items_4046_; size_t v_sz_4047_; size_t v___x_4048_; lean_object* v___x_4049_; 
v_items_4046_ = lean_ctor_get(v___x_4016_, 0);
lean_inc_ref(v_items_4046_);
v_sz_4047_ = lean_array_size(v_items_4046_);
v___x_4048_ = ((size_t)0ULL);
v___x_4049_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_4047_, v___x_4048_, v_items_4046_);
if (lean_obj_tag(v___x_4049_) == 0)
{
lean_object* v_a_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; uint8_t v___x_4054_; 
v_a_4050_ = lean_ctor_get(v___x_4049_, 0);
lean_inc(v_a_4050_);
lean_dec_ref_known(v___x_4049_, 1);
v___x_4051_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_4052_ = lean_string_utf8_byte_size(v_a_4050_);
v___x_4053_ = lean_unsigned_to_nat(0u);
v___x_4054_ = lean_nat_dec_eq(v___x_4052_, v___x_4053_);
if (v___x_4054_ == 0)
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; 
v___x_4055_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4056_ = lean_string_append(v___x_4055_, v_a_4050_);
lean_dec(v_a_4050_);
v___x_4057_ = lean_string_append(v___x_4051_, v___x_4056_);
lean_dec_ref(v___x_4056_);
v_a_4021_ = v___x_4057_;
goto v___jp_4020_;
}
else
{
lean_dec(v_a_4050_);
v_a_4021_ = v___x_4051_;
goto v___jp_4020_;
}
}
else
{
if (lean_obj_tag(v___x_4049_) == 0)
{
lean_object* v_a_4058_; 
v_a_4058_ = lean_ctor_get(v___x_4049_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v___x_4049_, 1);
v_a_4021_ = v_a_4058_;
goto v___jp_4020_;
}
else
{
lean_dec_ref_known(v___x_4016_, 1);
lean_del_object(v___x_4018_);
return v___x_4049_;
}
}
}
else
{
lean_object* v___x_4059_; 
v___x_4059_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v_a_4021_ = v___x_4059_;
goto v___jp_4020_;
}
v___jp_4020_:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; uint8_t v___x_4034_; 
v___x_4022_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_4023_ = lean_string_append(v___x_4022_, v_key_4015_);
v___x_4024_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_4025_ = lean_string_append(v___x_4023_, v___x_4024_);
v___x_4026_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0));
v___x_4027_ = lean_string_append(v___x_4025_, v___x_4026_);
v___x_4028_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4));
v___x_4029_ = lean_string_append(v___x_4027_, v___x_4028_);
v___x_4030_ = l_Lasm_JS_Data_describe(v___x_4016_);
v___x_4031_ = lean_string_append(v___x_4029_, v___x_4030_);
lean_dec_ref(v___x_4030_);
v___x_4032_ = lean_string_utf8_byte_size(v_a_4021_);
v___x_4033_ = lean_unsigned_to_nat(0u);
v___x_4034_ = lean_nat_dec_eq(v___x_4032_, v___x_4033_);
if (v___x_4034_ == 0)
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4041_; 
v___x_4035_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4036_ = lean_string_append(v___x_4035_, v_a_4021_);
lean_dec_ref(v_a_4021_);
v___x_4037_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_4038_ = lean_string_append(v___x_4036_, v___x_4037_);
v___x_4039_ = lean_string_append(v___x_4031_, v___x_4038_);
lean_dec_ref(v___x_4038_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set_tag(v___x_4018_, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4039_);
v___x_4041_ = v___x_4018_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v___x_4039_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
else
{
lean_object* v___x_4044_; 
lean_dec_ref(v_a_4021_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set_tag(v___x_4018_, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4031_);
v___x_4044_ = v___x_4018_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v___x_4031_);
v___x_4044_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
return v___x_4044_;
}
}
}
}
}
else
{
lean_object* v___x_4062_; 
lean_dec(v_d_4014_);
v___x_4062_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3));
return v___x_4062_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_4063_, lean_object* v_key_4064_){
_start:
{
lean_object* v_res_4065_; 
v_res_4065_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_4063_, v_key_4064_);
lean_dec_ref(v_key_4064_);
return v_res_4065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_4075_, lean_object* v_key_4076_){
_start:
{
if (lean_obj_tag(v_d_4075_) == 8)
{
lean_object* v___x_4079_; lean_object* v___x_4081_; uint8_t v_isShared_4082_; uint8_t v_isSharedCheck_4107_; 
v___x_4079_ = l_Lasm_JS_Data_field(v_d_4075_, v_key_4076_);
v_isSharedCheck_4107_ = !lean_is_exclusive(v_d_4075_);
if (v_isSharedCheck_4107_ == 0)
{
lean_object* v_unused_4108_; 
v_unused_4108_ = lean_ctor_get(v_d_4075_, 0);
lean_dec(v_unused_4108_);
v___x_4081_ = v_d_4075_;
v_isShared_4082_ = v_isSharedCheck_4107_;
goto v_resetjp_4080_;
}
else
{
lean_dec(v_d_4075_);
v___x_4081_ = lean_box(0);
v_isShared_4082_ = v_isSharedCheck_4107_;
goto v_resetjp_4080_;
}
v_resetjp_4080_:
{
switch(lean_obj_tag(v___x_4079_))
{
case 1:
{
lean_del_object(v___x_4081_);
goto v___jp_4077_;
}
case 0:
{
lean_del_object(v___x_4081_);
goto v___jp_4077_;
}
default: 
{
if (lean_obj_tag(v___x_4079_) == 4)
{
lean_object* v_s_4103_; lean_object* v___x_4104_; uint8_t v___x_4105_; 
v_s_4103_ = lean_ctor_get(v___x_4079_, 0);
lean_inc_ref(v_s_4103_);
v___x_4104_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventFlag___lam__0___closed__0));
v___x_4105_ = lean_string_dec_eq(v_s_4103_, v___x_4104_);
lean_dec_ref(v_s_4103_);
if (v___x_4105_ == 0)
{
goto v___jp_4083_;
}
else
{
lean_object* v___x_4106_; 
lean_dec_ref_known(v___x_4079_, 1);
lean_del_object(v___x_4081_);
v___x_4106_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
return v___x_4106_;
}
}
else
{
goto v___jp_4083_;
}
}
}
v___jp_4083_:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; uint8_t v___x_4094_; 
v___x_4084_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_4085_ = lean_string_append(v___x_4084_, v_key_4076_);
v___x_4086_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_4087_ = lean_string_append(v___x_4085_, v___x_4086_);
v___x_4088_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_4089_ = lean_string_append(v___x_4087_, v___x_4088_);
v___x_4090_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__5___closed__4));
v___x_4091_ = lean_string_append(v___x_4089_, v___x_4090_);
v___x_4092_ = l_Lasm_JS_Data_describe(v___x_4079_);
v___x_4093_ = lean_string_append(v___x_4091_, v___x_4092_);
lean_dec_ref(v___x_4092_);
v___x_4094_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__1);
if (v___x_4094_ == 0)
{
lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4098_; 
v___x_4095_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2___closed__2));
v___x_4096_ = lean_string_append(v___x_4093_, v___x_4095_);
if (v_isShared_4082_ == 0)
{
lean_ctor_set_tag(v___x_4081_, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4096_);
v___x_4098_ = v___x_4081_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v___x_4096_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
else
{
lean_object* v___x_4101_; 
if (v_isShared_4082_ == 0)
{
lean_ctor_set_tag(v___x_4081_, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4093_);
v___x_4101_ = v___x_4081_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v___x_4093_);
v___x_4101_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
return v___x_4101_;
}
}
}
}
}
else
{
lean_object* v___x_4109_; 
lean_dec(v_d_4075_);
v___x_4109_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4));
return v___x_4109_;
}
v___jp_4077_:
{
lean_object* v___x_4078_; 
v___x_4078_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
return v___x_4078_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_4110_, lean_object* v_key_4111_){
_start:
{
lean_object* v_res_4112_; 
v_res_4112_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_4110_, v_key_4111_);
lean_dec_ref(v_key_4111_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_4113_, lean_object* v_d_4114_){
_start:
{
lean_object* v___y_4117_; lean_object* v___y_4118_; lean_object* v___y_4123_; lean_object* v_received_4124_; lean_object* v___y_4143_; lean_object* v_a_4146_; lean_object* v___x_4170_; lean_object* v___x_4171_; 
v___x_4170_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__0));
lean_inc(v_d_4114_);
v___x_4171_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__2(v_d_4114_, v___x_4170_);
if (lean_obj_tag(v___x_4171_) == 0)
{
lean_object* v_a_4172_; 
v_a_4172_ = lean_ctor_get(v___x_4171_, 0);
lean_inc(v_a_4172_);
lean_dec_ref_known(v___x_4171_, 1);
v_a_4146_ = v_a_4172_;
goto v___jp_4145_;
}
else
{
lean_object* v_a_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
v_a_4173_ = lean_ctor_get(v___x_4171_, 0);
lean_inc(v_a_4173_);
lean_dec_ref_known(v___x_4171_, 1);
v___x_4174_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__1));
lean_inc(v_d_4114_);
v___x_4175_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_4114_, v___x_4174_);
if (lean_obj_tag(v___x_4175_) == 0)
{
lean_object* v_a_4176_; 
lean_dec(v_a_4173_);
v_a_4176_ = lean_ctor_get(v___x_4175_, 0);
lean_inc(v_a_4176_);
lean_dec_ref_known(v___x_4175_, 1);
v_a_4146_ = v_a_4176_;
goto v___jp_4145_;
}
else
{
lean_object* v_a_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; 
v_a_4177_ = lean_ctor_get(v___x_4175_, 0);
lean_inc(v_a_4177_);
lean_dec_ref_known(v___x_4175_, 1);
v___x_4178_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___lam__0___closed__2));
lean_inc(v_d_4114_);
v___x_4179_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_4114_, v___x_4178_);
if (lean_obj_tag(v___x_4179_) == 0)
{
lean_object* v_a_4180_; 
lean_dec(v_a_4177_);
lean_dec(v_a_4173_);
v_a_4180_ = lean_ctor_get(v___x_4179_, 0);
lean_inc(v_a_4180_);
lean_dec_ref_known(v___x_4179_, 1);
v_a_4146_ = v_a_4180_;
goto v___jp_4145_;
}
else
{
lean_object* v_a_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4190_; 
lean_dec(v_d_4114_);
v_a_4181_ = lean_ctor_get(v___x_4179_, 0);
v_isSharedCheck_4190_ = !lean_is_exclusive(v___x_4179_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4183_ = v___x_4179_;
v_isShared_4184_ = v_isSharedCheck_4190_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_a_4181_);
lean_dec(v___x_4179_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4190_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v___x_4185_; uint8_t v___x_4186_; lean_object* v___x_4188_; 
v___x_4185_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4185_, 0, v_a_4177_);
lean_ctor_set(v___x_4185_, 1, v_a_4181_);
v___x_4186_ = lean_unbox(v_a_4173_);
lean_dec(v_a_4173_);
lean_ctor_set_uint8(v___x_4185_, sizeof(void*)*2, v___x_4186_);
if (v_isShared_4184_ == 0)
{
lean_ctor_set_tag(v___x_4183_, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4185_);
v___x_4188_ = v___x_4183_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v___x_4185_);
v___x_4188_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
return v___x_4188_;
}
}
}
}
}
v___jp_4116_:
{
lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; 
v___x_4119_ = lean_string_append(v___y_4117_, v___y_4118_);
lean_dec_ref(v___y_4118_);
v___x_4120_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4119_);
v___x_4121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4121_, 0, v___x_4120_);
return v___x_4121_;
}
v___jp_4122_:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; uint8_t v___x_4136_; 
v___x_4125_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4126_ = lean_string_append(v___x_4125_, v_context_4113_);
v___x_4127_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__1));
v___x_4128_ = lean_string_append(v___x_4126_, v___x_4127_);
v___x_4129_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFsEvent___closed__3));
v___x_4130_ = lean_string_append(v___x_4128_, v___x_4129_);
v___x_4131_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__2));
v___x_4132_ = lean_string_append(v___x_4130_, v___x_4131_);
v___x_4133_ = lean_string_append(v___x_4132_, v_received_4124_);
lean_dec_ref(v_received_4124_);
v___x_4134_ = lean_string_utf8_byte_size(v___y_4123_);
v___x_4135_ = lean_unsigned_to_nat(0u);
v___x_4136_ = lean_nat_dec_eq(v___x_4134_, v___x_4135_);
if (v___x_4136_ == 0)
{
lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; 
v___x_4137_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4138_ = lean_string_append(v___x_4137_, v___y_4123_);
lean_dec_ref(v___y_4123_);
v___x_4139_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_4140_ = lean_string_append(v___x_4138_, v___x_4139_);
v___y_4117_ = v___x_4133_;
v___y_4118_ = v___x_4140_;
goto v___jp_4116_;
}
else
{
lean_object* v___x_4141_; 
lean_dec_ref(v___y_4123_);
v___x_4141_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___y_4117_ = v___x_4133_;
v___y_4118_ = v___x_4141_;
goto v___jp_4116_;
}
}
v___jp_4142_:
{
lean_object* v___x_4144_; 
v___x_4144_ = l_Lasm_JS_Data_describe(v_d_4114_);
v___y_4123_ = v___y_4143_;
v_received_4124_ = v___x_4144_;
goto v___jp_4122_;
}
v___jp_4145_:
{
if (lean_obj_tag(v_d_4114_) == 9)
{
lean_object* v_value_4147_; lean_object* v_description_4148_; lean_object* v___x_4149_; uint8_t v___x_4150_; 
v_value_4147_ = lean_ctor_get(v_d_4114_, 0);
v_description_4148_ = lean_ctor_get(v_d_4114_, 1);
v___x_4149_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4150_ = lean_string_dec_eq(v_description_4148_, v___x_4149_);
if (v___x_4150_ == 0)
{
v___y_4143_ = v_a_4146_;
goto v___jp_4142_;
}
else
{
lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4167_; 
lean_inc(v_value_4147_);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_d_4114_);
if (v_isSharedCheck_4167_ == 0)
{
lean_object* v_unused_4168_; lean_object* v_unused_4169_; 
v_unused_4168_ = lean_ctor_get(v_d_4114_, 1);
lean_dec(v_unused_4168_);
v_unused_4169_ = lean_ctor_get(v_d_4114_, 0);
lean_dec(v_unused_4169_);
v___x_4152_ = v_d_4114_;
v_isShared_4153_ = v_isSharedCheck_4167_;
goto v_resetjp_4151_;
}
else
{
lean_dec(v_d_4114_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4167_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
uint32_t v___x_4154_; uint64_t v___x_4155_; lean_object* v___x_4157_; 
v___x_4154_ = 206;
v___x_4155_ = 0ULL;
lean_inc(v_value_4147_);
if (v_isShared_4153_ == 0)
{
lean_ctor_set(v___x_4152_, 1, v___x_4149_);
v___x_4157_ = v___x_4152_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_value_4147_);
lean_ctor_set(v_reuseFailAlloc_4166_, 1, v___x_4149_);
v___x_4157_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
uint32_t v___x_4158_; lean_object* v___x_4159_; 
v___x_4158_ = lasm_js_value_handle(v_value_4147_);
lean_dec(v_value_4147_);
v___x_4159_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4154_, v___x_4155_, v___x_4157_, v___x_4158_);
lean_dec_ref(v___x_4157_);
if (lean_obj_tag(v___x_4159_) == 0)
{
lean_object* v_a_4160_; uint8_t v___x_4161_; 
v_a_4160_ = lean_ctor_get(v___x_4159_, 0);
lean_inc(v_a_4160_);
lean_dec_ref_known(v___x_4159_, 1);
v___x_4161_ = lean_string_validate_utf8(v_a_4160_);
if (v___x_4161_ == 0)
{
lean_object* v___x_4162_; lean_object* v___x_4163_; 
lean_dec(v_a_4160_);
v___x_4162_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__6);
v___x_4163_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4162_);
v___y_4123_ = v_a_4146_;
v_received_4124_ = v___x_4163_;
goto v___jp_4122_;
}
else
{
lean_object* v___x_4164_; 
v___x_4164_ = lean_string_from_utf8_unchecked(v_a_4160_);
v___y_4123_ = v_a_4146_;
v_received_4124_ = v___x_4164_;
goto v___jp_4122_;
}
}
else
{
lean_object* v___x_4165_; 
lean_dec_ref_known(v___x_4159_, 1);
v___x_4165_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__7));
v___y_4123_ = v_a_4146_;
v_received_4124_ = v___x_4165_;
goto v___jp_4122_;
}
}
}
}
}
else
{
v___y_4143_ = v_a_4146_;
goto v___jp_4142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4191_, lean_object* v_d_4192_, lean_object* v_a_4193_){
_start:
{
lean_object* v_res_4194_; 
v_res_4194_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4191_, v_d_4192_);
lean_dec_ref(v_context_4191_);
return v_res_4194_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(lean_object* v_context_4195_, lean_object* v_bytes_4196_){
_start:
{
lean_object* v___x_4198_; 
v___x_4198_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4196_);
if (lean_obj_tag(v___x_4198_) == 0)
{
lean_object* v_a_4199_; lean_object* v___x_4200_; 
v_a_4199_ = lean_ctor_get(v___x_4198_, 0);
lean_inc(v_a_4199_);
lean_dec_ref_known(v___x_4198_, 1);
v___x_4200_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1(v_context_4195_, v_a_4199_);
return v___x_4200_;
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4208_; 
v_a_4201_ = lean_ctor_get(v___x_4198_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_4198_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4203_ = v___x_4198_;
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4198_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4206_; 
if (v_isShared_4204_ == 0)
{
v___x_4206_ = v___x_4203_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_a_4201_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_4209_, lean_object* v_bytes_4210_, lean_object* v_a_4211_){
_start:
{
lean_object* v_res_4212_; 
v_res_4212_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v_context_4209_, v_bytes_4210_);
lean_dec_ref(v_bytes_4210_);
lean_dec_ref(v_context_4209_);
return v_res_4212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(lean_object* v_o_4213_, lean_object* v_key_4214_){
_start:
{
lean_object* v_k_4216_; lean_object* v___x_4217_; 
v_k_4216_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4216_, 0, v_key_4214_);
v___x_4217_ = l_Lasm_JS_Wire_encodeIO(v_k_4216_);
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_a_4218_; uint32_t v___x_4219_; uint32_t v___x_4220_; uint64_t v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; 
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
lean_inc(v_a_4218_);
lean_dec_ref_known(v___x_4217_, 1);
v___x_4219_ = 203;
v___x_4220_ = lasm_js_value_handle(v_o_4213_);
v___x_4221_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
v___x_4222_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4223_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4223_, 0, v_o_4213_);
lean_ctor_set(v___x_4223_, 1, v___x_4222_);
v___x_4224_ = lean_unsigned_to_nat(2u);
v___x_4225_ = lean_mk_empty_array_with_capacity(v___x_4224_);
lean_inc_ref(v_k_4216_);
v___x_4226_ = lean_array_push(v___x_4225_, v_k_4216_);
v___x_4227_ = lean_array_push(v___x_4226_, v___x_4223_);
v___x_4228_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4228_, 0, v___x_4227_);
v___x_4229_ = lasm_js_call(v___x_4219_, v___x_4220_, v___x_4221_, v_a_4218_, v___x_4228_);
lean_dec_ref_known(v___x_4228_, 1);
lean_dec(v_a_4218_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v_a_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; 
v_a_4230_ = lean_ctor_get(v___x_4229_, 0);
lean_inc(v_a_4230_);
lean_dec_ref_known(v___x_4229_, 1);
v___x_4231_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__1));
v___x_4232_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4216_);
v___x_4233_ = lean_string_append(v___x_4231_, v___x_4232_);
lean_dec_ref(v___x_4232_);
v___x_4234_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0(v___x_4233_, v_a_4230_);
lean_dec(v_a_4230_);
lean_dec_ref(v___x_4233_);
return v___x_4234_;
}
else
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4242_; 
lean_dec_ref_known(v_k_4216_, 1);
v_a_4235_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4242_ == 0)
{
v___x_4237_ = v___x_4229_;
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v___x_4229_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4240_; 
if (v_isShared_4238_ == 0)
{
v___x_4240_ = v___x_4237_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_a_4235_);
v___x_4240_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
return v___x_4240_;
}
}
}
}
else
{
lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4250_; 
lean_dec_ref_known(v_k_4216_, 1);
lean_dec(v_o_4213_);
v_a_4243_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4245_ = v___x_4217_;
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v___x_4217_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4248_; 
if (v_isShared_4246_ == 0)
{
v___x_4248_ = v___x_4245_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4249_; 
v_reuseFailAlloc_4249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4249_, 0, v_a_4243_);
v___x_4248_ = v_reuseFailAlloc_4249_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
return v___x_4248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0___boxed(lean_object* v_o_4251_, lean_object* v_key_4252_, lean_object* v_a_4253_){
_start:
{
lean_object* v_res_4254_; 
v_res_4254_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_o_4251_, v_key_4252_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(lean_object* v___f_4259_, lean_object* v_a_4260_, lean_object* v_x_4261_){
_start:
{
if (lean_obj_tag(v_x_4261_) == 0)
{
lean_object* v_a_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4271_; 
lean_dec(v_a_4260_);
lean_dec_ref(v___f_4259_);
v_a_4263_ = lean_ctor_get(v_x_4261_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v_x_4261_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4265_ = v_x_4261_;
v_isShared_4266_ = v_isSharedCheck_4271_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_a_4263_);
lean_dec(v_x_4261_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4271_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
lean_object* v___x_4268_; 
if (v_isShared_4266_ == 0)
{
v___x_4268_ = v___x_4265_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v_a_4263_);
v___x_4268_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
lean_object* v___x_4269_; 
v___x_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4268_);
return v___x_4269_;
}
}
}
else
{
lean_object* v_a_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4294_; 
v_a_4272_ = lean_ctor_get(v_x_4261_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v_x_4261_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4274_ = v_x_4261_;
v_isShared_4275_ = v_isSharedCheck_4294_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_a_4272_);
lean_dec(v_x_4261_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4294_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
uint8_t v___x_4276_; 
v___x_4276_ = lean_unbox(v_a_4272_);
if (v___x_4276_ == 0)
{
lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v_val_4280_; lean_object* v___x_4284_; 
v___x_4277_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__1___closed__0));
v___x_4278_ = lean_unsigned_to_nat(0u);
v___x_4284_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0(v_a_4260_, v___x_4277_);
if (lean_obj_tag(v___x_4284_) == 0)
{
lean_object* v_a_4285_; lean_object* v___x_4287_; 
v_a_4285_ = lean_ctor_get(v___x_4284_, 0);
lean_inc(v_a_4285_);
lean_dec_ref_known(v___x_4284_, 1);
if (v_isShared_4275_ == 0)
{
lean_ctor_set(v___x_4274_, 0, v_a_4285_);
v___x_4287_ = v___x_4274_;
goto v_reusejp_4286_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_a_4285_);
v___x_4287_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4286_;
}
v_reusejp_4286_:
{
v_val_4280_ = v___x_4287_;
goto v___jp_4279_;
}
}
else
{
lean_object* v_a_4289_; lean_object* v___x_4291_; 
v_a_4289_ = lean_ctor_get(v___x_4284_, 0);
lean_inc(v_a_4289_);
lean_dec_ref_known(v___x_4284_, 1);
if (v_isShared_4275_ == 0)
{
lean_ctor_set_tag(v___x_4274_, 0);
lean_ctor_set(v___x_4274_, 0, v_a_4289_);
v___x_4291_ = v___x_4274_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v_a_4289_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
v_val_4280_ = v___x_4291_;
goto v___jp_4279_;
}
}
v___jp_4279_:
{
lean_object* v___x_4281_; uint8_t v___x_4282_; lean_object* v___x_4283_; 
v___x_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4281_, 0, v_val_4280_);
v___x_4282_ = lean_unbox(v_a_4272_);
lean_dec(v_a_4272_);
v___x_4283_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4278_, v___x_4282_, v___x_4281_, v___f_4259_);
return v___x_4283_;
}
}
else
{
lean_object* v___x_4293_; 
lean_del_object(v___x_4274_);
lean_dec(v_a_4272_);
lean_dec(v_a_4260_);
lean_dec_ref(v___f_4259_);
v___x_4293_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___closed__1));
return v___x_4293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed(lean_object* v___f_4295_, lean_object* v_a_4296_, lean_object* v_x_4297_, lean_object* v___y_4298_){
_start:
{
lean_object* v_res_4299_; 
v_res_4299_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1(v___f_4295_, v_a_4296_, v_x_4297_);
return v_res_4299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(lean_object* v___f_4300_, lean_object* v_x_4301_){
_start:
{
if (lean_obj_tag(v_x_4301_) == 0)
{
lean_object* v_a_4303_; lean_object* v___x_4305_; uint8_t v_isShared_4306_; uint8_t v_isSharedCheck_4311_; 
lean_dec_ref(v___f_4300_);
v_a_4303_ = lean_ctor_get(v_x_4301_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v_x_4301_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4305_ = v_x_4301_;
v_isShared_4306_ = v_isSharedCheck_4311_;
goto v_resetjp_4304_;
}
else
{
lean_inc(v_a_4303_);
lean_dec(v_x_4301_);
v___x_4305_ = lean_box(0);
v_isShared_4306_ = v_isSharedCheck_4311_;
goto v_resetjp_4304_;
}
v_resetjp_4304_:
{
lean_object* v___x_4308_; 
if (v_isShared_4306_ == 0)
{
v___x_4308_ = v___x_4305_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_a_4303_);
v___x_4308_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
lean_object* v___x_4309_; 
v___x_4309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4309_, 0, v___x_4308_);
return v___x_4309_;
}
}
}
else
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4333_; 
v_a_4312_ = lean_ctor_get(v_x_4301_, 0);
v_isSharedCheck_4333_ = !lean_is_exclusive(v_x_4301_);
if (v_isSharedCheck_4333_ == 0)
{
v___x_4314_ = v_x_4301_;
v_isShared_4315_ = v_isSharedCheck_4333_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v_x_4301_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4333_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___f_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; uint8_t v___x_4319_; lean_object* v_val_4321_; lean_object* v___x_4324_; 
lean_inc(v_a_4312_);
v___f_4316_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4316_, 0, v___f_4300_);
lean_closure_set(v___f_4316_, 1, v_a_4312_);
v___x_4317_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___lam__2___closed__0));
v___x_4318_ = lean_unsigned_to_nat(0u);
v___x_4319_ = 0;
v___x_4324_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_4312_, v___x_4317_);
if (lean_obj_tag(v___x_4324_) == 0)
{
lean_object* v_a_4325_; lean_object* v___x_4327_; 
v_a_4325_ = lean_ctor_get(v___x_4324_, 0);
lean_inc(v_a_4325_);
lean_dec_ref_known(v___x_4324_, 1);
if (v_isShared_4315_ == 0)
{
lean_ctor_set(v___x_4314_, 0, v_a_4325_);
v___x_4327_ = v___x_4314_;
goto v_reusejp_4326_;
}
else
{
lean_object* v_reuseFailAlloc_4328_; 
v_reuseFailAlloc_4328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4328_, 0, v_a_4325_);
v___x_4327_ = v_reuseFailAlloc_4328_;
goto v_reusejp_4326_;
}
v_reusejp_4326_:
{
v_val_4321_ = v___x_4327_;
goto v___jp_4320_;
}
}
else
{
lean_object* v_a_4329_; lean_object* v___x_4331_; 
v_a_4329_ = lean_ctor_get(v___x_4324_, 0);
lean_inc(v_a_4329_);
lean_dec_ref_known(v___x_4324_, 1);
if (v_isShared_4315_ == 0)
{
lean_ctor_set_tag(v___x_4314_, 0);
lean_ctor_set(v___x_4314_, 0, v_a_4329_);
v___x_4331_ = v___x_4314_;
goto v_reusejp_4330_;
}
else
{
lean_object* v_reuseFailAlloc_4332_; 
v_reuseFailAlloc_4332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4332_, 0, v_a_4329_);
v___x_4331_ = v_reuseFailAlloc_4332_;
goto v_reusejp_4330_;
}
v_reusejp_4330_:
{
v_val_4321_ = v___x_4331_;
goto v___jp_4320_;
}
}
v___jp_4320_:
{
lean_object* v___x_4322_; lean_object* v___x_4323_; 
v___x_4322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4322_, 0, v_val_4321_);
v___x_4323_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4318_, v___x_4319_, v___x_4322_, v___f_4316_);
return v___x_4323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2___boxed(lean_object* v___f_4334_, lean_object* v_x_4335_, lean_object* v___y_4336_){
_start:
{
lean_object* v_res_4337_; 
v_res_4337_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next___lam__2(v___f_4334_, v_x_4335_);
return v_res_4337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next(lean_object* v_it_4341_){
_start:
{
lean_object* v___f_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; uint8_t v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
v___f_4343_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_Iterator_next___closed__1));
v___x_4344_ = ((lean_object*)(l_Lasm_JS_Deno_DirEntryAsyncIterable_Iterator_next___closed__2));
v___x_4345_ = lean_unsigned_to_nat(0u);
v___x_4346_ = ((lean_object*)(l_Lasm_JS_Deno_FsFile_stat___closed__1));
v___x_4347_ = 0;
v___x_4348_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_it_4341_, v___x_4344_, v___x_4346_);
v___x_4349_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4345_, v___x_4347_, v___x_4348_, v___f_4343_);
return v___x_4349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_Iterator_next___boxed(lean_object* v_it_4350_, lean_object* v_a_4351_){
_start:
{
lean_object* v_res_4352_; 
v_res_4352_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4350_);
return v_res_4352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(lean_object* v_acc_4353_, lean_object* v_it_4354_, lean_object* v_x_4355_){
_start:
{
if (lean_obj_tag(v_x_4355_) == 0)
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4365_; 
lean_dec(v_it_4354_);
lean_dec_ref(v_acc_4353_);
v_a_4357_ = lean_ctor_get(v_x_4355_, 0);
v_isSharedCheck_4365_ = !lean_is_exclusive(v_x_4355_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4359_ = v_x_4355_;
v_isShared_4360_ = v_isSharedCheck_4365_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v_x_4355_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4365_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v_a_4357_);
v___x_4362_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
lean_object* v___x_4363_; 
v___x_4363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4362_);
return v___x_4363_;
}
}
}
else
{
lean_object* v_a_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4377_; 
v_a_4366_ = lean_ctor_get(v_x_4355_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v_x_4355_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4368_ = v_x_4355_;
v_isShared_4369_ = v_isSharedCheck_4377_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_a_4366_);
lean_dec(v_x_4355_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4377_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
if (lean_obj_tag(v_a_4366_) == 0)
{
lean_object* v___x_4371_; 
lean_dec(v_it_4354_);
if (v_isShared_4369_ == 0)
{
lean_ctor_set(v___x_4368_, 0, v_acc_4353_);
v___x_4371_ = v___x_4368_;
goto v_reusejp_4370_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v_acc_4353_);
v___x_4371_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4370_;
}
v_reusejp_4370_:
{
lean_object* v___x_4372_; 
v___x_4372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4372_, 0, v___x_4371_);
return v___x_4372_;
}
}
else
{
lean_object* v_val_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; 
lean_del_object(v___x_4368_);
v_val_4374_ = lean_ctor_get(v_a_4366_, 0);
lean_inc(v_val_4374_);
lean_dec_ref_known(v_a_4366_, 1);
v___x_4375_ = lean_array_push(v_acc_4353_, v_val_4374_);
v___x_4376_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4354_, v___x_4375_);
return v___x_4376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed(lean_object* v_acc_4378_, lean_object* v_it_4379_, lean_object* v_x_4380_, lean_object* v___y_4381_){
_start:
{
lean_object* v_res_4382_; 
v_res_4382_ = l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0(v_acc_4378_, v_it_4379_, v_x_4380_);
return v_res_4382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop(lean_object* v_it_4383_, lean_object* v_acc_4384_){
_start:
{
lean_object* v___f_4386_; lean_object* v___x_4387_; uint8_t v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; 
lean_inc(v_it_4383_);
v___f_4386_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_FsWatcher_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4386_, 0, v_acc_4384_);
lean_closure_set(v___f_4386_, 1, v_it_4383_);
v___x_4387_ = lean_unsigned_to_nat(0u);
v___x_4388_ = 0;
v___x_4389_ = l_Lasm_JS_Deno_FsWatcher_Iterator_next(v_it_4383_);
v___x_4390_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4387_, v___x_4388_, v___x_4389_, v___f_4386_);
return v___x_4390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values_loop___boxed(lean_object* v_it_4391_, lean_object* v_acc_4392_, lean_object* v_a_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_it_4391_, v_acc_4392_);
return v_res_4394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0(lean_object* v_x_4397_){
_start:
{
if (lean_obj_tag(v_x_4397_) == 0)
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4407_; 
v_a_4399_ = lean_ctor_get(v_x_4397_, 0);
v_isSharedCheck_4407_ = !lean_is_exclusive(v_x_4397_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4401_ = v_x_4397_;
v_isShared_4402_ = v_isSharedCheck_4407_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v_x_4397_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4407_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4406_; 
v_reuseFailAlloc_4406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4406_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4406_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
lean_object* v___x_4405_; 
v___x_4405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4405_, 0, v___x_4404_);
return v___x_4405_;
}
}
}
else
{
lean_object* v_a_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; 
v_a_4408_ = lean_ctor_get(v_x_4397_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v_x_4397_, 1);
v___x_4409_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___lam__0___closed__0));
v___x_4410_ = l_Lasm_JS_Deno_FsWatcher_values_loop(v_a_4408_, v___x_4409_);
return v___x_4410_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___lam__0___boxed(lean_object* v_x_4411_, lean_object* v___y_4412_){
_start:
{
lean_object* v_res_4413_; 
v_res_4413_ = l_Lasm_JS_Deno_FsWatcher_values___lam__0(v_x_4411_);
return v_res_4413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values(lean_object* v_self_4415_){
_start:
{
lean_object* v___f_4417_; lean_object* v___x_4418_; uint8_t v___x_4419_; lean_object* v_val_4421_; lean_object* v___x_4424_; 
v___f_4417_ = ((lean_object*)(l_Lasm_JS_Deno_FsWatcher_values___closed__0));
v___x_4418_ = lean_unsigned_to_nat(0u);
v___x_4419_ = 0;
v___x_4424_ = l_Lasm_JS_Deno_FsWatcher_iterator(v_self_4415_);
if (lean_obj_tag(v___x_4424_) == 0)
{
lean_object* v_a_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4432_; 
v_a_4425_ = lean_ctor_get(v___x_4424_, 0);
v_isSharedCheck_4432_ = !lean_is_exclusive(v___x_4424_);
if (v_isSharedCheck_4432_ == 0)
{
v___x_4427_ = v___x_4424_;
v_isShared_4428_ = v_isSharedCheck_4432_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_a_4425_);
lean_dec(v___x_4424_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4432_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4430_; 
if (v_isShared_4428_ == 0)
{
lean_ctor_set_tag(v___x_4427_, 1);
v___x_4430_ = v___x_4427_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v_a_4425_);
v___x_4430_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
v_val_4421_ = v___x_4430_;
goto v___jp_4420_;
}
}
}
else
{
lean_object* v_a_4433_; lean_object* v___x_4435_; uint8_t v_isShared_4436_; uint8_t v_isSharedCheck_4440_; 
v_a_4433_ = lean_ctor_get(v___x_4424_, 0);
v_isSharedCheck_4440_ = !lean_is_exclusive(v___x_4424_);
if (v_isSharedCheck_4440_ == 0)
{
v___x_4435_ = v___x_4424_;
v_isShared_4436_ = v_isSharedCheck_4440_;
goto v_resetjp_4434_;
}
else
{
lean_inc(v_a_4433_);
lean_dec(v___x_4424_);
v___x_4435_ = lean_box(0);
v_isShared_4436_ = v_isSharedCheck_4440_;
goto v_resetjp_4434_;
}
v_resetjp_4434_:
{
lean_object* v___x_4438_; 
if (v_isShared_4436_ == 0)
{
lean_ctor_set_tag(v___x_4435_, 0);
v___x_4438_ = v___x_4435_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4439_; 
v_reuseFailAlloc_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4439_, 0, v_a_4433_);
v___x_4438_ = v_reuseFailAlloc_4439_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
v_val_4421_ = v___x_4438_;
goto v___jp_4420_;
}
}
}
v___jp_4420_:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; 
v___x_4422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4422_, 0, v_val_4421_);
v___x_4423_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4418_, v___x_4419_, v___x_4422_, v___f_4417_);
return v___x_4423_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_FsWatcher_values___boxed(lean_object* v_self_4441_, lean_object* v_a_4442_){
_start:
{
lean_object* v_res_4443_; 
v_res_4443_ = l_Lasm_JS_Deno_FsWatcher_values(v_self_4441_);
return v_res_4443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(lean_object* v_b_4444_, lean_object* v_args_4445_){
_start:
{
uint8_t v_construct_4447_; lean_object* v___x_4448_; uint32_t v___x_4449_; uint64_t v___x_4450_; uint64_t v___y_4452_; 
v_construct_4447_ = lean_ctor_get_uint8(v_b_4444_, sizeof(void*)*4);
v___x_4448_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4444_);
v___x_4449_ = 214;
v___x_4450_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4447_ == 0)
{
uint64_t v___x_4460_; 
v___x_4460_ = 0ULL;
v___y_4452_ = v___x_4460_;
goto v___jp_4451_;
}
else
{
uint64_t v___x_4461_; 
v___x_4461_ = 4ULL;
v___y_4452_ = v___x_4461_;
goto v___jp_4451_;
}
v___jp_4451_:
{
uint64_t v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4453_ = lean_uint64_lor(v___x_4450_, v___y_4452_);
v___x_4454_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4444_, v_args_4445_);
v___x_4455_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4456_ = lean_string_append(v___x_4455_, v___x_4448_);
lean_dec_ref(v___x_4448_);
v___x_4457_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4458_ = lean_string_append(v___x_4456_, v___x_4457_);
v___x_4459_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_4449_, v___x_4453_, v___x_4454_, v___x_4458_);
return v___x_4459_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0___boxed(lean_object* v_b_4462_, lean_object* v_args_4463_, lean_object* v_a_4464_){
_start:
{
lean_object* v_res_4465_; 
v_res_4465_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v_b_4462_, v_args_4463_);
lean_dec_ref(v_b_4462_);
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link(lean_object* v_oldpath_4475_, lean_object* v_newpath_4476_){
_start:
{
lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v___x_4478_ = lean_unsigned_to_nat(2u);
v___x_4479_ = ((lean_object*)(l_Lasm_JS_Deno_link___closed__3));
v___x_4480_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4480_, 0, v_oldpath_4475_);
v___x_4481_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4481_, 0, v_newpath_4476_);
v___x_4482_ = lean_mk_empty_array_with_capacity(v___x_4478_);
v___x_4483_ = lean_array_push(v___x_4482_, v___x_4480_);
v___x_4484_ = lean_array_push(v___x_4483_, v___x_4481_);
v___x_4485_ = l_Lasm_JS_Web_Support_args(v___x_4484_);
v___x_4486_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4479_, v___x_4485_);
return v___x_4486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_link___boxed(lean_object* v_oldpath_4487_, lean_object* v_newpath_4488_, lean_object* v_a_4489_){
_start:
{
lean_object* v_res_4490_; 
v_res_4490_ = l_Lasm_JS_Deno_link(v_oldpath_4487_, v_newpath_4488_);
return v_res_4490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync(lean_object* v_oldpath_4499_, lean_object* v_newpath_4500_){
_start:
{
uint8_t v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4502_ = 0;
v___x_4503_ = lean_unsigned_to_nat(2u);
v___x_4504_ = ((lean_object*)(l_Lasm_JS_Deno_linkSync___closed__2));
v___x_4505_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4505_, 0, v_oldpath_4499_);
v___x_4506_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4506_, 0, v_newpath_4500_);
v___x_4507_ = lean_mk_empty_array_with_capacity(v___x_4503_);
v___x_4508_ = lean_array_push(v___x_4507_, v___x_4505_);
v___x_4509_ = lean_array_push(v___x_4508_, v___x_4506_);
v___x_4510_ = l_Lasm_JS_Web_Support_args(v___x_4509_);
v___x_4511_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4504_, v___x_4510_, v___x_4502_);
return v___x_4511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_linkSync___boxed(lean_object* v_oldpath_4512_, lean_object* v_newpath_4513_, lean_object* v_a_4514_){
_start:
{
lean_object* v_res_4515_; 
v_res_4515_ = l_Lasm_JS_Deno_linkSync(v_oldpath_4512_, v_newpath_4513_);
return v_res_4515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0(lean_object* v_x_4516_){
_start:
{
if (lean_obj_tag(v_x_4516_) == 0)
{
lean_object* v_a_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4526_; 
v_a_4518_ = lean_ctor_get(v_x_4516_, 0);
v_isSharedCheck_4526_ = !lean_is_exclusive(v_x_4516_);
if (v_isSharedCheck_4526_ == 0)
{
v___x_4520_ = v_x_4516_;
v_isShared_4521_ = v_isSharedCheck_4526_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_a_4518_);
lean_dec(v_x_4516_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4526_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
lean_object* v___x_4523_; 
if (v_isShared_4521_ == 0)
{
v___x_4523_ = v___x_4520_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4525_; 
v_reuseFailAlloc_4525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4525_, 0, v_a_4518_);
v___x_4523_ = v_reuseFailAlloc_4525_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
lean_object* v___x_4524_; 
v___x_4524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4523_);
return v___x_4524_;
}
}
}
else
{
lean_object* v_a_4527_; lean_object* v___x_4529_; uint8_t v_isShared_4530_; uint8_t v_isSharedCheck_4535_; 
v_a_4527_ = lean_ctor_get(v_x_4516_, 0);
v_isSharedCheck_4535_ = !lean_is_exclusive(v_x_4516_);
if (v_isSharedCheck_4535_ == 0)
{
v___x_4529_ = v_x_4516_;
v_isShared_4530_ = v_isSharedCheck_4535_;
goto v_resetjp_4528_;
}
else
{
lean_inc(v_a_4527_);
lean_dec(v_x_4516_);
v___x_4529_ = lean_box(0);
v_isShared_4530_ = v_isSharedCheck_4535_;
goto v_resetjp_4528_;
}
v_resetjp_4528_:
{
lean_object* v___x_4532_; 
if (v_isShared_4530_ == 0)
{
v___x_4532_ = v___x_4529_;
goto v_reusejp_4531_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v_a_4527_);
v___x_4532_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4531_;
}
v_reusejp_4531_:
{
lean_object* v___x_4533_; 
v___x_4533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4533_, 0, v___x_4532_);
return v___x_4533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___lam__0___boxed(lean_object* v_x_4536_, lean_object* v___y_4537_){
_start:
{
lean_object* v_res_4538_; 
v_res_4538_ = l_Lasm_JS_Deno_open___lam__0(v_x_4536_);
return v_res_4538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(lean_object* v_x_4539_){
_start:
{
if (lean_obj_tag(v_x_4539_) == 0)
{
lean_object* v___x_4540_; 
v___x_4540_ = lean_box(0);
return v___x_4540_;
}
else
{
lean_object* v_val_4541_; lean_object* v_read_4542_; lean_object* v_write_4543_; lean_object* v_append_4544_; lean_object* v_truncate_4545_; lean_object* v_create_4546_; lean_object* v_createNew_4547_; lean_object* v_mode_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v_val_4541_ = lean_ctor_get(v_x_4539_, 0);
v_read_4542_ = lean_ctor_get(v_val_4541_, 0);
v_write_4543_ = lean_ctor_get(v_val_4541_, 1);
v_append_4544_ = lean_ctor_get(v_val_4541_, 2);
v_truncate_4545_ = lean_ctor_get(v_val_4541_, 3);
v_create_4546_ = lean_ctor_get(v_val_4541_, 4);
v_createNew_4547_ = lean_ctor_get(v_val_4541_, 5);
v_mode_4548_ = lean_ctor_get(v_val_4541_, 6);
v___x_4549_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__0));
v___x_4550_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_read_4542_);
v___x_4551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4551_, 0, v___x_4549_);
lean_ctor_set(v___x_4551_, 1, v___x_4550_);
v___x_4552_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__1));
v___x_4553_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_write_4543_);
v___x_4554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4554_, 0, v___x_4552_);
lean_ctor_set(v___x_4554_, 1, v___x_4553_);
v___x_4555_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_4556_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_4544_);
v___x_4557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4555_);
lean_ctor_set(v___x_4557_, 1, v___x_4556_);
v___x_4558_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__3));
v___x_4559_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_truncate_4545_);
v___x_4560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4560_, 0, v___x_4558_);
lean_ctor_set(v___x_4560_, 1, v___x_4559_);
v___x_4561_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_4562_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_4546_);
v___x_4563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4563_, 0, v___x_4561_);
lean_ctor_set(v___x_4563_, 1, v___x_4562_);
v___x_4564_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_4565_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_4547_);
v___x_4566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4566_, 0, v___x_4564_);
lean_ctor_set(v___x_4566_, 1, v___x_4565_);
v___x_4567_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4568_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4548_);
v___x_4569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4569_, 0, v___x_4567_);
lean_ctor_set(v___x_4569_, 1, v___x_4568_);
v___x_4570_ = lean_unsigned_to_nat(7u);
v___x_4571_ = lean_mk_empty_array_with_capacity(v___x_4570_);
v___x_4572_ = lean_array_push(v___x_4571_, v___x_4551_);
v___x_4573_ = lean_array_push(v___x_4572_, v___x_4554_);
v___x_4574_ = lean_array_push(v___x_4573_, v___x_4557_);
v___x_4575_ = lean_array_push(v___x_4574_, v___x_4560_);
v___x_4576_ = lean_array_push(v___x_4575_, v___x_4563_);
v___x_4577_ = lean_array_push(v___x_4576_, v___x_4566_);
v___x_4578_ = lean_array_push(v___x_4577_, v___x_4569_);
v___x_4579_ = l_Lasm_JS_Web_Support_fields(v___x_4578_);
lean_dec_ref(v___x_4578_);
return v___x_4579_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0___boxed(lean_object* v_x_4580_){
_start:
{
lean_object* v_res_4581_; 
v_res_4581_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_x_4580_);
lean_dec(v_x_4580_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(lean_object* v_b_4582_, lean_object* v_args_4583_){
_start:
{
uint8_t v_construct_4585_; lean_object* v___x_4586_; uint32_t v___x_4587_; uint64_t v___x_4588_; uint64_t v___y_4590_; 
v_construct_4585_ = lean_ctor_get_uint8(v_b_4582_, sizeof(void*)*4);
v___x_4586_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4582_);
v___x_4587_ = 214;
v___x_4588_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_DirEntryAsyncIterable_iterator_spec__0___closed__0);
if (v_construct_4585_ == 0)
{
uint64_t v___x_4598_; 
v___x_4598_ = 0ULL;
v___y_4590_ = v___x_4598_;
goto v___jp_4589_;
}
else
{
uint64_t v___x_4599_; 
v___x_4599_ = 4ULL;
v___y_4590_ = v___x_4599_;
goto v___jp_4589_;
}
v___jp_4589_:
{
uint64_t v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4591_ = lean_uint64_lor(v___x_4588_, v___y_4590_);
v___x_4592_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4582_, v_args_4583_);
v___x_4593_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4594_ = lean_string_append(v___x_4593_, v___x_4586_);
v___x_4595_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4596_ = lean_string_append(v___x_4594_, v___x_4595_);
v___x_4597_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_4586_, v___x_4587_, v___x_4591_, v___x_4592_, v___x_4596_);
return v___x_4597_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1___boxed(lean_object* v_b_4600_, lean_object* v_args_4601_, lean_object* v_a_4602_){
_start:
{
lean_object* v_res_4603_; 
v_res_4603_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v_b_4600_, v_args_4601_);
lean_dec_ref(v_b_4600_);
return v_res_4603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open(lean_object* v_path_4613_, lean_object* v_options_4614_){
_start:
{
lean_object* v___f_4616_; uint8_t v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___y_4621_; 
v___f_4616_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4617_ = 0;
v___x_4618_ = lean_unsigned_to_nat(2u);
v___x_4619_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__3));
if (lean_obj_tag(v_path_4613_) == 0)
{
lean_object* v_value_4630_; lean_object* v___x_4632_; uint8_t v_isShared_4633_; uint8_t v_isSharedCheck_4637_; 
v_value_4630_ = lean_ctor_get(v_path_4613_, 0);
v_isSharedCheck_4637_ = !lean_is_exclusive(v_path_4613_);
if (v_isSharedCheck_4637_ == 0)
{
v___x_4632_ = v_path_4613_;
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
else
{
lean_inc(v_value_4630_);
lean_dec(v_path_4613_);
v___x_4632_ = lean_box(0);
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
v_resetjp_4631_:
{
lean_object* v___x_4635_; 
if (v_isShared_4633_ == 0)
{
lean_ctor_set_tag(v___x_4632_, 4);
v___x_4635_ = v___x_4632_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4636_; 
v_reuseFailAlloc_4636_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4636_, 0, v_value_4630_);
v___x_4635_ = v_reuseFailAlloc_4636_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
v___y_4621_ = v___x_4635_;
goto v___jp_4620_;
}
}
}
else
{
lean_object* v_value_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; 
v_value_4638_ = lean_ctor_get(v_path_4613_, 0);
lean_inc(v_value_4638_);
lean_dec_ref_known(v_path_4613_, 1);
v___x_4639_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4640_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4640_, 0, v_value_4638_);
lean_ctor_set(v___x_4640_, 1, v___x_4639_);
v___y_4621_ = v___x_4640_;
goto v___jp_4620_;
}
v___jp_4620_:
{
lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4622_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4614_);
v___x_4623_ = lean_mk_empty_array_with_capacity(v___x_4618_);
v___x_4624_ = lean_array_push(v___x_4623_, v___y_4621_);
v___x_4625_ = lean_array_push(v___x_4624_, v___x_4622_);
v___x_4626_ = l_Lasm_JS_Web_Support_args(v___x_4625_);
v___x_4627_ = lean_unsigned_to_nat(0u);
v___x_4628_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4619_, v___x_4626_);
v___x_4629_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4627_, v___x_4617_, v___x_4628_, v___f_4616_);
return v___x_4629_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_open___boxed(lean_object* v_path_4641_, lean_object* v_options_4642_, lean_object* v_a_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l_Lasm_JS_Deno_open(v_path_4641_, v_options_4642_);
lean_dec(v_options_4642_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync(lean_object* v_path_4653_, lean_object* v_options_4654_){
_start:
{
uint8_t v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___y_4660_; 
v___x_4656_ = 0;
v___x_4657_ = lean_unsigned_to_nat(2u);
v___x_4658_ = ((lean_object*)(l_Lasm_JS_Deno_openSync___closed__2));
if (lean_obj_tag(v_path_4653_) == 0)
{
lean_object* v_value_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4690_; 
v_value_4683_ = lean_ctor_get(v_path_4653_, 0);
v_isSharedCheck_4690_ = !lean_is_exclusive(v_path_4653_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4685_ = v_path_4653_;
v_isShared_4686_ = v_isSharedCheck_4690_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_value_4683_);
lean_dec(v_path_4653_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4690_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v___x_4688_; 
if (v_isShared_4686_ == 0)
{
lean_ctor_set_tag(v___x_4685_, 4);
v___x_4688_ = v___x_4685_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v_value_4683_);
v___x_4688_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
v___y_4660_ = v___x_4688_;
goto v___jp_4659_;
}
}
}
else
{
lean_object* v_value_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; 
v_value_4691_ = lean_ctor_get(v_path_4653_, 0);
lean_inc(v_value_4691_);
lean_dec_ref_known(v_path_4653_, 1);
v___x_4692_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4693_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4693_, 0, v_value_4691_);
lean_ctor_set(v___x_4693_, 1, v___x_4692_);
v___y_4660_ = v___x_4693_;
goto v___jp_4659_;
}
v___jp_4659_:
{
lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; 
v___x_4661_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_open_spec__0(v_options_4654_);
v___x_4662_ = lean_mk_empty_array_with_capacity(v___x_4657_);
v___x_4663_ = lean_array_push(v___x_4662_, v___y_4660_);
v___x_4664_ = lean_array_push(v___x_4663_, v___x_4661_);
v___x_4665_ = l_Lasm_JS_Web_Support_args(v___x_4664_);
v___x_4666_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4658_, v___x_4665_, v___x_4656_);
if (lean_obj_tag(v___x_4666_) == 0)
{
lean_object* v_a_4667_; lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4674_; 
v_a_4667_ = lean_ctor_get(v___x_4666_, 0);
v_isSharedCheck_4674_ = !lean_is_exclusive(v___x_4666_);
if (v_isSharedCheck_4674_ == 0)
{
v___x_4669_ = v___x_4666_;
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
else
{
lean_inc(v_a_4667_);
lean_dec(v___x_4666_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
lean_object* v___x_4672_; 
if (v_isShared_4670_ == 0)
{
v___x_4672_ = v___x_4669_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v_a_4667_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
return v___x_4672_;
}
}
}
else
{
lean_object* v_a_4675_; lean_object* v___x_4677_; uint8_t v_isShared_4678_; uint8_t v_isSharedCheck_4682_; 
v_a_4675_ = lean_ctor_get(v___x_4666_, 0);
v_isSharedCheck_4682_ = !lean_is_exclusive(v___x_4666_);
if (v_isSharedCheck_4682_ == 0)
{
v___x_4677_ = v___x_4666_;
v_isShared_4678_ = v_isSharedCheck_4682_;
goto v_resetjp_4676_;
}
else
{
lean_inc(v_a_4675_);
lean_dec(v___x_4666_);
v___x_4677_ = lean_box(0);
v_isShared_4678_ = v_isSharedCheck_4682_;
goto v_resetjp_4676_;
}
v_resetjp_4676_:
{
lean_object* v___x_4680_; 
if (v_isShared_4678_ == 0)
{
v___x_4680_ = v___x_4677_;
goto v_reusejp_4679_;
}
else
{
lean_object* v_reuseFailAlloc_4681_; 
v_reuseFailAlloc_4681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4681_, 0, v_a_4675_);
v___x_4680_ = v_reuseFailAlloc_4681_;
goto v_reusejp_4679_;
}
v_reusejp_4679_:
{
return v___x_4680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openSync___boxed(lean_object* v_path_4694_, lean_object* v_options_4695_, lean_object* v_a_4696_){
_start:
{
lean_object* v_res_4697_; 
v_res_4697_ = l_Lasm_JS_Deno_openSync(v_path_4694_, v_options_4695_);
lean_dec(v_options_4695_);
return v_res_4697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create(lean_object* v_path_4706_){
_start:
{
lean_object* v___f_4708_; uint8_t v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___y_4713_; 
v___f_4708_ = ((lean_object*)(l_Lasm_JS_Deno_open___closed__0));
v___x_4709_ = 0;
v___x_4710_ = lean_unsigned_to_nat(1u);
v___x_4711_ = ((lean_object*)(l_Lasm_JS_Deno_create___closed__2));
if (lean_obj_tag(v_path_4706_) == 0)
{
lean_object* v_value_4720_; lean_object* v___x_4722_; uint8_t v_isShared_4723_; uint8_t v_isSharedCheck_4727_; 
v_value_4720_ = lean_ctor_get(v_path_4706_, 0);
v_isSharedCheck_4727_ = !lean_is_exclusive(v_path_4706_);
if (v_isSharedCheck_4727_ == 0)
{
v___x_4722_ = v_path_4706_;
v_isShared_4723_ = v_isSharedCheck_4727_;
goto v_resetjp_4721_;
}
else
{
lean_inc(v_value_4720_);
lean_dec(v_path_4706_);
v___x_4722_ = lean_box(0);
v_isShared_4723_ = v_isSharedCheck_4727_;
goto v_resetjp_4721_;
}
v_resetjp_4721_:
{
lean_object* v___x_4725_; 
if (v_isShared_4723_ == 0)
{
lean_ctor_set_tag(v___x_4722_, 4);
v___x_4725_ = v___x_4722_;
goto v_reusejp_4724_;
}
else
{
lean_object* v_reuseFailAlloc_4726_; 
v_reuseFailAlloc_4726_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4726_, 0, v_value_4720_);
v___x_4725_ = v_reuseFailAlloc_4726_;
goto v_reusejp_4724_;
}
v_reusejp_4724_:
{
v___y_4713_ = v___x_4725_;
goto v___jp_4712_;
}
}
}
else
{
lean_object* v_value_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; 
v_value_4728_ = lean_ctor_get(v_path_4706_, 0);
lean_inc(v_value_4728_);
lean_dec_ref_known(v_path_4706_, 1);
v___x_4729_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4730_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4730_, 0, v_value_4728_);
lean_ctor_set(v___x_4730_, 1, v___x_4729_);
v___y_4713_ = v___x_4730_;
goto v___jp_4712_;
}
v___jp_4712_:
{
lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4714_ = lean_mk_empty_array_with_capacity(v___x_4710_);
v___x_4715_ = lean_array_push(v___x_4714_, v___y_4713_);
v___x_4716_ = l_Lasm_JS_Web_Support_args(v___x_4715_);
v___x_4717_ = lean_unsigned_to_nat(0u);
v___x_4718_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_open_spec__1(v___x_4711_, v___x_4716_);
v___x_4719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4717_, v___x_4709_, v___x_4718_, v___f_4708_);
return v___x_4719_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_create___boxed(lean_object* v_path_4731_, lean_object* v_a_4732_){
_start:
{
lean_object* v_res_4733_; 
v_res_4733_ = l_Lasm_JS_Deno_create(v_path_4731_);
return v_res_4733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync(lean_object* v_path_4742_){
_start:
{
uint8_t v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___y_4748_; 
v___x_4744_ = 0;
v___x_4745_ = lean_unsigned_to_nat(1u);
v___x_4746_ = ((lean_object*)(l_Lasm_JS_Deno_createSync___closed__2));
if (lean_obj_tag(v_path_4742_) == 0)
{
lean_object* v_value_4769_; lean_object* v___x_4771_; uint8_t v_isShared_4772_; uint8_t v_isSharedCheck_4776_; 
v_value_4769_ = lean_ctor_get(v_path_4742_, 0);
v_isSharedCheck_4776_ = !lean_is_exclusive(v_path_4742_);
if (v_isSharedCheck_4776_ == 0)
{
v___x_4771_ = v_path_4742_;
v_isShared_4772_ = v_isSharedCheck_4776_;
goto v_resetjp_4770_;
}
else
{
lean_inc(v_value_4769_);
lean_dec(v_path_4742_);
v___x_4771_ = lean_box(0);
v_isShared_4772_ = v_isSharedCheck_4776_;
goto v_resetjp_4770_;
}
v_resetjp_4770_:
{
lean_object* v___x_4774_; 
if (v_isShared_4772_ == 0)
{
lean_ctor_set_tag(v___x_4771_, 4);
v___x_4774_ = v___x_4771_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v_value_4769_);
v___x_4774_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
v___y_4748_ = v___x_4774_;
goto v___jp_4747_;
}
}
}
else
{
lean_object* v_value_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; 
v_value_4777_ = lean_ctor_get(v_path_4742_, 0);
lean_inc(v_value_4777_);
lean_dec_ref_known(v_path_4742_, 1);
v___x_4778_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4779_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4779_, 0, v_value_4777_);
lean_ctor_set(v___x_4779_, 1, v___x_4778_);
v___y_4748_ = v___x_4779_;
goto v___jp_4747_;
}
v___jp_4747_:
{
lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; 
v___x_4749_ = lean_mk_empty_array_with_capacity(v___x_4745_);
v___x_4750_ = lean_array_push(v___x_4749_, v___y_4748_);
v___x_4751_ = l_Lasm_JS_Web_Support_args(v___x_4750_);
v___x_4752_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_4746_, v___x_4751_, v___x_4744_);
if (lean_obj_tag(v___x_4752_) == 0)
{
lean_object* v_a_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4760_; 
v_a_4753_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4760_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4760_ == 0)
{
v___x_4755_ = v___x_4752_;
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_a_4753_);
lean_dec(v___x_4752_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v___x_4758_; 
if (v_isShared_4756_ == 0)
{
v___x_4758_ = v___x_4755_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4759_; 
v_reuseFailAlloc_4759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4759_, 0, v_a_4753_);
v___x_4758_ = v_reuseFailAlloc_4759_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
return v___x_4758_;
}
}
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4768_; 
v_a_4761_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4768_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4768_ == 0)
{
v___x_4763_ = v___x_4752_;
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4752_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4766_; 
if (v_isShared_4764_ == 0)
{
v___x_4766_ = v___x_4763_;
goto v_reusejp_4765_;
}
else
{
lean_object* v_reuseFailAlloc_4767_; 
v_reuseFailAlloc_4767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4767_, 0, v_a_4761_);
v___x_4766_ = v_reuseFailAlloc_4767_;
goto v_reusejp_4765_;
}
v_reusejp_4765_:
{
return v___x_4766_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createSync___boxed(lean_object* v_path_4780_, lean_object* v_a_4781_){
_start:
{
lean_object* v_res_4782_; 
v_res_4782_ = l_Lasm_JS_Deno_createSync(v_path_4780_);
return v_res_4782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(lean_object* v_x_4783_){
_start:
{
if (lean_obj_tag(v_x_4783_) == 0)
{
lean_object* v___x_4784_; 
v___x_4784_ = lean_box(0);
return v___x_4784_;
}
else
{
lean_object* v_val_4785_; lean_object* v_recursive_4786_; lean_object* v_mode_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4804_; 
v_val_4785_ = lean_ctor_get(v_x_4783_, 0);
lean_inc(v_val_4785_);
lean_dec_ref_known(v_x_4783_, 1);
v_recursive_4786_ = lean_ctor_get(v_val_4785_, 0);
v_mode_4787_ = lean_ctor_get(v_val_4785_, 1);
v_isSharedCheck_4804_ = !lean_is_exclusive(v_val_4785_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4789_ = v_val_4785_;
v_isShared_4790_ = v_isSharedCheck_4804_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_mode_4787_);
lean_inc(v_recursive_4786_);
lean_dec(v_val_4785_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4804_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4794_; 
v___x_4791_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_4792_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_4786_);
lean_dec(v_recursive_4786_);
if (v_isShared_4790_ == 0)
{
lean_ctor_set(v___x_4789_, 1, v___x_4792_);
lean_ctor_set(v___x_4789_, 0, v___x_4791_);
v___x_4794_ = v___x_4789_;
goto v_reusejp_4793_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v___x_4791_);
lean_ctor_set(v_reuseFailAlloc_4803_, 1, v___x_4792_);
v___x_4794_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4793_;
}
v_reusejp_4793_:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; 
v___x_4795_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_4796_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_4787_);
lean_dec(v_mode_4787_);
v___x_4797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4797_, 0, v___x_4795_);
lean_ctor_set(v___x_4797_, 1, v___x_4796_);
v___x_4798_ = lean_unsigned_to_nat(2u);
v___x_4799_ = lean_mk_empty_array_with_capacity(v___x_4798_);
v___x_4800_ = lean_array_push(v___x_4799_, v___x_4794_);
v___x_4801_ = lean_array_push(v___x_4800_, v___x_4797_);
v___x_4802_ = l_Lasm_JS_Web_Support_fields(v___x_4801_);
lean_dec_ref(v___x_4801_);
return v___x_4802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir(lean_object* v_path_4813_, lean_object* v_options_4814_){
_start:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___y_4819_; 
v___x_4816_ = lean_unsigned_to_nat(2u);
v___x_4817_ = ((lean_object*)(l_Lasm_JS_Deno_mkdir___closed__2));
if (lean_obj_tag(v_path_4813_) == 0)
{
lean_object* v_value_4826_; lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4833_; 
v_value_4826_ = lean_ctor_get(v_path_4813_, 0);
v_isSharedCheck_4833_ = !lean_is_exclusive(v_path_4813_);
if (v_isSharedCheck_4833_ == 0)
{
v___x_4828_ = v_path_4813_;
v_isShared_4829_ = v_isSharedCheck_4833_;
goto v_resetjp_4827_;
}
else
{
lean_inc(v_value_4826_);
lean_dec(v_path_4813_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4833_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
lean_object* v___x_4831_; 
if (v_isShared_4829_ == 0)
{
lean_ctor_set_tag(v___x_4828_, 4);
v___x_4831_ = v___x_4828_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4832_; 
v_reuseFailAlloc_4832_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4832_, 0, v_value_4826_);
v___x_4831_ = v_reuseFailAlloc_4832_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
v___y_4819_ = v___x_4831_;
goto v___jp_4818_;
}
}
}
else
{
lean_object* v_value_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; 
v_value_4834_ = lean_ctor_get(v_path_4813_, 0);
lean_inc(v_value_4834_);
lean_dec_ref_known(v_path_4813_, 1);
v___x_4835_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4836_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4836_, 0, v_value_4834_);
lean_ctor_set(v___x_4836_, 1, v___x_4835_);
v___y_4819_ = v___x_4836_;
goto v___jp_4818_;
}
v___jp_4818_:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; 
v___x_4820_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4814_);
v___x_4821_ = lean_mk_empty_array_with_capacity(v___x_4816_);
v___x_4822_ = lean_array_push(v___x_4821_, v___y_4819_);
v___x_4823_ = lean_array_push(v___x_4822_, v___x_4820_);
v___x_4824_ = l_Lasm_JS_Web_Support_args(v___x_4823_);
v___x_4825_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_4817_, v___x_4824_);
return v___x_4825_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdir___boxed(lean_object* v_path_4837_, lean_object* v_options_4838_, lean_object* v_a_4839_){
_start:
{
lean_object* v_res_4840_; 
v_res_4840_ = l_Lasm_JS_Deno_mkdir(v_path_4837_, v_options_4838_);
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync(lean_object* v_path_4849_, lean_object* v_options_4850_){
_start:
{
uint8_t v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___y_4856_; 
v___x_4852_ = 0;
v___x_4853_ = lean_unsigned_to_nat(2u);
v___x_4854_ = ((lean_object*)(l_Lasm_JS_Deno_mkdirSync___closed__2));
if (lean_obj_tag(v_path_4849_) == 0)
{
lean_object* v_value_4863_; lean_object* v___x_4865_; uint8_t v_isShared_4866_; uint8_t v_isSharedCheck_4870_; 
v_value_4863_ = lean_ctor_get(v_path_4849_, 0);
v_isSharedCheck_4870_ = !lean_is_exclusive(v_path_4849_);
if (v_isSharedCheck_4870_ == 0)
{
v___x_4865_ = v_path_4849_;
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
else
{
lean_inc(v_value_4863_);
lean_dec(v_path_4849_);
v___x_4865_ = lean_box(0);
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
v_resetjp_4864_:
{
lean_object* v___x_4868_; 
if (v_isShared_4866_ == 0)
{
lean_ctor_set_tag(v___x_4865_, 4);
v___x_4868_ = v___x_4865_;
goto v_reusejp_4867_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v_value_4863_);
v___x_4868_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4867_;
}
v_reusejp_4867_:
{
v___y_4856_ = v___x_4868_;
goto v___jp_4855_;
}
}
}
else
{
lean_object* v_value_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; 
v_value_4871_ = lean_ctor_get(v_path_4849_, 0);
lean_inc(v_value_4871_);
lean_dec_ref_known(v_path_4849_, 1);
v___x_4872_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_4873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4873_, 0, v_value_4871_);
lean_ctor_set(v___x_4873_, 1, v___x_4872_);
v___y_4856_ = v___x_4873_;
goto v___jp_4855_;
}
v___jp_4855_:
{
lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; 
v___x_4857_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_mkdir_spec__0(v_options_4850_);
v___x_4858_ = lean_mk_empty_array_with_capacity(v___x_4853_);
v___x_4859_ = lean_array_push(v___x_4858_, v___y_4856_);
v___x_4860_ = lean_array_push(v___x_4859_, v___x_4857_);
v___x_4861_ = l_Lasm_JS_Web_Support_args(v___x_4860_);
v___x_4862_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4854_, v___x_4861_, v___x_4852_);
return v___x_4862_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mkdirSync___boxed(lean_object* v_path_4874_, lean_object* v_options_4875_, lean_object* v_a_4876_){
_start:
{
lean_object* v_res_4877_; 
v_res_4877_ = l_Lasm_JS_Deno_mkdirSync(v_path_4874_, v_options_4875_);
return v_res_4877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(lean_object* v_x_4878_){
_start:
{
if (lean_obj_tag(v_x_4878_) == 0)
{
lean_object* v___x_4879_; 
v___x_4879_ = lean_box(0);
return v___x_4879_;
}
else
{
lean_object* v_val_4880_; lean_object* v_dir_4881_; lean_object* v_prefix_4882_; lean_object* v_suffix_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; 
v_val_4880_ = lean_ctor_get(v_x_4878_, 0);
lean_inc(v_val_4880_);
lean_dec_ref_known(v_x_4878_, 1);
v_dir_4881_ = lean_ctor_get(v_val_4880_, 0);
lean_inc(v_dir_4881_);
v_prefix_4882_ = lean_ctor_get(v_val_4880_, 1);
lean_inc(v_prefix_4882_);
v_suffix_4883_ = lean_ctor_get(v_val_4880_, 2);
lean_inc(v_suffix_4883_);
lean_dec(v_val_4880_);
v___x_4884_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__2));
v___x_4885_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dir_4881_);
v___x_4886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4886_, 0, v___x_4884_);
lean_ctor_set(v___x_4886_, 1, v___x_4885_);
v___x_4887_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__0));
v___x_4888_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_4882_);
v___x_4889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4889_, 0, v___x_4887_);
lean_ctor_set(v___x_4889_, 1, v___x_4888_);
v___x_4890_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMakeTempOptions___lam__0___closed__1));
v___x_4891_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_suffix_4883_);
v___x_4892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4892_, 0, v___x_4890_);
lean_ctor_set(v___x_4892_, 1, v___x_4891_);
v___x_4893_ = lean_unsigned_to_nat(3u);
v___x_4894_ = lean_mk_empty_array_with_capacity(v___x_4893_);
v___x_4895_ = lean_array_push(v___x_4894_, v___x_4886_);
v___x_4896_ = lean_array_push(v___x_4895_, v___x_4889_);
v___x_4897_ = lean_array_push(v___x_4896_, v___x_4892_);
v___x_4898_ = l_Lasm_JS_Web_Support_fields(v___x_4897_);
lean_dec_ref(v___x_4897_);
return v___x_4898_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(lean_object* v_b_4899_, lean_object* v_args_4900_){
_start:
{
uint8_t v_construct_4902_; lean_object* v___x_4903_; uint32_t v___x_4904_; uint64_t v___x_4905_; uint64_t v___y_4907_; 
v_construct_4902_ = lean_ctor_get_uint8(v_b_4899_, sizeof(void*)*4);
v___x_4903_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4899_);
v___x_4904_ = 214;
v___x_4905_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_4902_ == 0)
{
uint64_t v___x_4915_; 
v___x_4915_ = 0ULL;
v___y_4907_ = v___x_4915_;
goto v___jp_4906_;
}
else
{
uint64_t v___x_4916_; 
v___x_4916_ = 4ULL;
v___y_4907_ = v___x_4916_;
goto v___jp_4906_;
}
v___jp_4906_:
{
uint64_t v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; 
v___x_4908_ = lean_uint64_lor(v___x_4905_, v___y_4907_);
v___x_4909_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4899_, v_args_4900_);
v___x_4910_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_4911_ = lean_string_append(v___x_4910_, v___x_4903_);
v___x_4912_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4913_ = lean_string_append(v___x_4911_, v___x_4912_);
v___x_4914_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_4903_, v___x_4904_, v___x_4908_, v___x_4909_, v___x_4913_);
return v___x_4914_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1___boxed(lean_object* v_b_4917_, lean_object* v_args_4918_, lean_object* v_a_4919_){
_start:
{
lean_object* v_res_4920_; 
v_res_4920_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v_b_4917_, v_args_4918_);
lean_dec_ref(v_b_4917_);
return v_res_4920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir(lean_object* v_options_4929_){
_start:
{
lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; 
v___x_4931_ = lean_unsigned_to_nat(1u);
v___x_4932_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDir___closed__2));
v___x_4933_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4929_);
v___x_4934_ = lean_mk_empty_array_with_capacity(v___x_4931_);
v___x_4935_ = lean_array_push(v___x_4934_, v___x_4933_);
v___x_4936_ = l_Lasm_JS_Web_Support_args(v___x_4935_);
v___x_4937_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4932_, v___x_4936_);
return v___x_4937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDir___boxed(lean_object* v_options_4938_, lean_object* v_a_4939_){
_start:
{
lean_object* v_res_4940_; 
v_res_4940_ = l_Lasm_JS_Deno_makeTempDir(v_options_4938_);
return v_res_4940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync(lean_object* v_options_4949_){
_start:
{
uint8_t v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; 
v___x_4951_ = 0;
v___x_4952_ = lean_unsigned_to_nat(1u);
v___x_4953_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempDirSync___closed__2));
v___x_4954_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4949_);
v___x_4955_ = lean_mk_empty_array_with_capacity(v___x_4952_);
v___x_4956_ = lean_array_push(v___x_4955_, v___x_4954_);
v___x_4957_ = l_Lasm_JS_Web_Support_args(v___x_4956_);
v___x_4958_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4953_, v___x_4957_, v___x_4951_);
return v___x_4958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempDirSync___boxed(lean_object* v_options_4959_, lean_object* v_a_4960_){
_start:
{
lean_object* v_res_4961_; 
v_res_4961_ = l_Lasm_JS_Deno_makeTempDirSync(v_options_4959_);
return v_res_4961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile(lean_object* v_options_4970_){
_start:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___x_4972_ = lean_unsigned_to_nat(1u);
v___x_4973_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFile___closed__2));
v___x_4974_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4970_);
v___x_4975_ = lean_mk_empty_array_with_capacity(v___x_4972_);
v___x_4976_ = lean_array_push(v___x_4975_, v___x_4974_);
v___x_4977_ = l_Lasm_JS_Web_Support_args(v___x_4976_);
v___x_4978_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_4973_, v___x_4977_);
return v___x_4978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFile___boxed(lean_object* v_options_4979_, lean_object* v_a_4980_){
_start:
{
lean_object* v_res_4981_; 
v_res_4981_ = l_Lasm_JS_Deno_makeTempFile(v_options_4979_);
return v_res_4981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync(lean_object* v_options_4990_){
_start:
{
uint8_t v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; 
v___x_4992_ = 0;
v___x_4993_ = lean_unsigned_to_nat(1u);
v___x_4994_ = ((lean_object*)(l_Lasm_JS_Deno_makeTempFileSync___closed__2));
v___x_4995_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_makeTempDir_spec__0(v_options_4990_);
v___x_4996_ = lean_mk_empty_array_with_capacity(v___x_4993_);
v___x_4997_ = lean_array_push(v___x_4996_, v___x_4995_);
v___x_4998_ = l_Lasm_JS_Web_Support_args(v___x_4997_);
v___x_4999_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_4994_, v___x_4998_, v___x_4992_);
return v___x_4999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_makeTempFileSync___boxed(lean_object* v_options_5000_, lean_object* v_a_5001_){
_start:
{
lean_object* v_res_5002_; 
v_res_5002_ = l_Lasm_JS_Deno_makeTempFileSync(v_options_5000_);
return v_res_5002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod(lean_object* v_path_5011_, double v_mode_5012_){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___y_5017_; 
v___x_5014_ = lean_unsigned_to_nat(2u);
v___x_5015_ = ((lean_object*)(l_Lasm_JS_Deno_chmod___closed__2));
if (lean_obj_tag(v_path_5011_) == 0)
{
lean_object* v_value_5024_; lean_object* v___x_5026_; uint8_t v_isShared_5027_; uint8_t v_isSharedCheck_5031_; 
v_value_5024_ = lean_ctor_get(v_path_5011_, 0);
v_isSharedCheck_5031_ = !lean_is_exclusive(v_path_5011_);
if (v_isSharedCheck_5031_ == 0)
{
v___x_5026_ = v_path_5011_;
v_isShared_5027_ = v_isSharedCheck_5031_;
goto v_resetjp_5025_;
}
else
{
lean_inc(v_value_5024_);
lean_dec(v_path_5011_);
v___x_5026_ = lean_box(0);
v_isShared_5027_ = v_isSharedCheck_5031_;
goto v_resetjp_5025_;
}
v_resetjp_5025_:
{
lean_object* v___x_5029_; 
if (v_isShared_5027_ == 0)
{
lean_ctor_set_tag(v___x_5026_, 4);
v___x_5029_ = v___x_5026_;
goto v_reusejp_5028_;
}
else
{
lean_object* v_reuseFailAlloc_5030_; 
v_reuseFailAlloc_5030_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5030_, 0, v_value_5024_);
v___x_5029_ = v_reuseFailAlloc_5030_;
goto v_reusejp_5028_;
}
v_reusejp_5028_:
{
v___y_5017_ = v___x_5029_;
goto v___jp_5016_;
}
}
}
else
{
lean_object* v_value_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; 
v_value_5032_ = lean_ctor_get(v_path_5011_, 0);
lean_inc(v_value_5032_);
lean_dec_ref_known(v_path_5011_, 1);
v___x_5033_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5034_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5034_, 0, v_value_5032_);
lean_ctor_set(v___x_5034_, 1, v___x_5033_);
v___y_5017_ = v___x_5034_;
goto v___jp_5016_;
}
v___jp_5016_:
{
lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; 
v___x_5018_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5018_, 0, v_mode_5012_);
v___x_5019_ = lean_mk_empty_array_with_capacity(v___x_5014_);
v___x_5020_ = lean_array_push(v___x_5019_, v___y_5017_);
v___x_5021_ = lean_array_push(v___x_5020_, v___x_5018_);
v___x_5022_ = l_Lasm_JS_Web_Support_args(v___x_5021_);
v___x_5023_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5015_, v___x_5022_);
return v___x_5023_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmod___boxed(lean_object* v_path_5035_, lean_object* v_mode_5036_, lean_object* v_a_5037_){
_start:
{
double v_mode_boxed_5038_; lean_object* v_res_5039_; 
v_mode_boxed_5038_ = lean_unbox_float(v_mode_5036_);
lean_dec_ref(v_mode_5036_);
v_res_5039_ = l_Lasm_JS_Deno_chmod(v_path_5035_, v_mode_boxed_5038_);
return v_res_5039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync(lean_object* v_path_5048_, double v_mode_5049_){
_start:
{
uint8_t v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___y_5055_; 
v___x_5051_ = 0;
v___x_5052_ = lean_unsigned_to_nat(2u);
v___x_5053_ = ((lean_object*)(l_Lasm_JS_Deno_chmodSync___closed__2));
if (lean_obj_tag(v_path_5048_) == 0)
{
lean_object* v_value_5062_; lean_object* v___x_5064_; uint8_t v_isShared_5065_; uint8_t v_isSharedCheck_5069_; 
v_value_5062_ = lean_ctor_get(v_path_5048_, 0);
v_isSharedCheck_5069_ = !lean_is_exclusive(v_path_5048_);
if (v_isSharedCheck_5069_ == 0)
{
v___x_5064_ = v_path_5048_;
v_isShared_5065_ = v_isSharedCheck_5069_;
goto v_resetjp_5063_;
}
else
{
lean_inc(v_value_5062_);
lean_dec(v_path_5048_);
v___x_5064_ = lean_box(0);
v_isShared_5065_ = v_isSharedCheck_5069_;
goto v_resetjp_5063_;
}
v_resetjp_5063_:
{
lean_object* v___x_5067_; 
if (v_isShared_5065_ == 0)
{
lean_ctor_set_tag(v___x_5064_, 4);
v___x_5067_ = v___x_5064_;
goto v_reusejp_5066_;
}
else
{
lean_object* v_reuseFailAlloc_5068_; 
v_reuseFailAlloc_5068_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5068_, 0, v_value_5062_);
v___x_5067_ = v_reuseFailAlloc_5068_;
goto v_reusejp_5066_;
}
v_reusejp_5066_:
{
v___y_5055_ = v___x_5067_;
goto v___jp_5054_;
}
}
}
else
{
lean_object* v_value_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; 
v_value_5070_ = lean_ctor_get(v_path_5048_, 0);
lean_inc(v_value_5070_);
lean_dec_ref_known(v_path_5048_, 1);
v___x_5071_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5072_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5072_, 0, v_value_5070_);
lean_ctor_set(v___x_5072_, 1, v___x_5071_);
v___y_5055_ = v___x_5072_;
goto v___jp_5054_;
}
v___jp_5054_:
{
lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
v___x_5056_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5056_, 0, v_mode_5049_);
v___x_5057_ = lean_mk_empty_array_with_capacity(v___x_5052_);
v___x_5058_ = lean_array_push(v___x_5057_, v___y_5055_);
v___x_5059_ = lean_array_push(v___x_5058_, v___x_5056_);
v___x_5060_ = l_Lasm_JS_Web_Support_args(v___x_5059_);
v___x_5061_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5053_, v___x_5060_, v___x_5051_);
return v___x_5061_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chmodSync___boxed(lean_object* v_path_5073_, lean_object* v_mode_5074_, lean_object* v_a_5075_){
_start:
{
double v_mode_boxed_5076_; lean_object* v_res_5077_; 
v_mode_boxed_5076_ = lean_unbox_float(v_mode_5074_);
lean_dec_ref(v_mode_5074_);
v_res_5077_ = l_Lasm_JS_Deno_chmodSync(v_path_5073_, v_mode_boxed_5076_);
return v_res_5077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown(lean_object* v_path_5086_, lean_object* v_uid_5087_, lean_object* v_gid_5088_){
_start:
{
lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___y_5093_; lean_object* v___y_5094_; lean_object* v___y_5095_; lean_object* v___y_5103_; lean_object* v___y_5104_; lean_object* v___y_5121_; 
v___x_5090_ = lean_unsigned_to_nat(3u);
v___x_5091_ = ((lean_object*)(l_Lasm_JS_Deno_chown___closed__2));
if (lean_obj_tag(v_path_5086_) == 0)
{
lean_object* v_value_5137_; lean_object* v___x_5139_; uint8_t v_isShared_5140_; uint8_t v_isSharedCheck_5144_; 
v_value_5137_ = lean_ctor_get(v_path_5086_, 0);
v_isSharedCheck_5144_ = !lean_is_exclusive(v_path_5086_);
if (v_isSharedCheck_5144_ == 0)
{
v___x_5139_ = v_path_5086_;
v_isShared_5140_ = v_isSharedCheck_5144_;
goto v_resetjp_5138_;
}
else
{
lean_inc(v_value_5137_);
lean_dec(v_path_5086_);
v___x_5139_ = lean_box(0);
v_isShared_5140_ = v_isSharedCheck_5144_;
goto v_resetjp_5138_;
}
v_resetjp_5138_:
{
lean_object* v___x_5142_; 
if (v_isShared_5140_ == 0)
{
lean_ctor_set_tag(v___x_5139_, 4);
v___x_5142_ = v___x_5139_;
goto v_reusejp_5141_;
}
else
{
lean_object* v_reuseFailAlloc_5143_; 
v_reuseFailAlloc_5143_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5143_, 0, v_value_5137_);
v___x_5142_ = v_reuseFailAlloc_5143_;
goto v_reusejp_5141_;
}
v_reusejp_5141_:
{
v___y_5121_ = v___x_5142_;
goto v___jp_5120_;
}
}
}
else
{
lean_object* v_value_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; 
v_value_5145_ = lean_ctor_get(v_path_5086_, 0);
lean_inc(v_value_5145_);
lean_dec_ref_known(v_path_5086_, 1);
v___x_5146_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5147_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5147_, 0, v_value_5145_);
lean_ctor_set(v___x_5147_, 1, v___x_5146_);
v___y_5121_ = v___x_5147_;
goto v___jp_5120_;
}
v___jp_5092_:
{
lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; 
v___x_5096_ = lean_mk_empty_array_with_capacity(v___x_5090_);
v___x_5097_ = lean_array_push(v___x_5096_, v___y_5093_);
v___x_5098_ = lean_array_push(v___x_5097_, v___y_5094_);
v___x_5099_ = lean_array_push(v___x_5098_, v___y_5095_);
v___x_5100_ = l_Lasm_JS_Web_Support_args(v___x_5099_);
v___x_5101_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5091_, v___x_5100_);
return v___x_5101_;
}
v___jp_5102_:
{
if (lean_obj_tag(v_gid_5088_) == 0)
{
lean_object* v___x_5105_; 
v___x_5105_ = lean_box(1);
v___y_5093_ = v___y_5103_;
v___y_5094_ = v___y_5104_;
v___y_5095_ = v___x_5105_;
goto v___jp_5092_;
}
else
{
lean_object* v_val_5106_; lean_object* v___x_5108_; uint8_t v_isShared_5109_; uint8_t v_isSharedCheck_5119_; 
v_val_5106_ = lean_ctor_get(v_gid_5088_, 0);
v_isSharedCheck_5119_ = !lean_is_exclusive(v_gid_5088_);
if (v_isSharedCheck_5119_ == 0)
{
v___x_5108_ = v_gid_5088_;
v_isShared_5109_ = v_isSharedCheck_5119_;
goto v_resetjp_5107_;
}
else
{
lean_inc(v_val_5106_);
lean_dec(v_gid_5088_);
v___x_5108_ = lean_box(0);
v_isShared_5109_ = v_isSharedCheck_5119_;
goto v_resetjp_5107_;
}
v_resetjp_5107_:
{
lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; uint8_t v___x_5113_; 
v___x_5110_ = lean_nat_to_int(v_val_5106_);
v___x_5111_ = lean_nat_abs(v___x_5110_);
v___x_5112_ = lean_cstr_to_nat("9007199254740991");
v___x_5113_ = lean_nat_dec_le(v___x_5111_, v___x_5112_);
lean_dec(v___x_5111_);
if (v___x_5113_ == 0)
{
lean_object* v___x_5115_; 
if (v_isShared_5109_ == 0)
{
lean_ctor_set_tag(v___x_5108_, 5);
lean_ctor_set(v___x_5108_, 0, v___x_5110_);
v___x_5115_ = v___x_5108_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v___x_5110_);
v___x_5115_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
v___y_5093_ = v___y_5103_;
v___y_5094_ = v___y_5104_;
v___y_5095_ = v___x_5115_;
goto v___jp_5092_;
}
}
else
{
double v___x_5117_; lean_object* v___x_5118_; 
lean_del_object(v___x_5108_);
v___x_5117_ = l_Float_ofInt(v___x_5110_);
lean_dec(v___x_5110_);
v___x_5118_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5118_, 0, v___x_5117_);
v___y_5093_ = v___y_5103_;
v___y_5094_ = v___y_5104_;
v___y_5095_ = v___x_5118_;
goto v___jp_5092_;
}
}
}
}
v___jp_5120_:
{
if (lean_obj_tag(v_uid_5087_) == 0)
{
lean_object* v___x_5122_; 
v___x_5122_ = lean_box(1);
v___y_5103_ = v___y_5121_;
v___y_5104_ = v___x_5122_;
goto v___jp_5102_;
}
else
{
lean_object* v_val_5123_; lean_object* v___x_5125_; uint8_t v_isShared_5126_; uint8_t v_isSharedCheck_5136_; 
v_val_5123_ = lean_ctor_get(v_uid_5087_, 0);
v_isSharedCheck_5136_ = !lean_is_exclusive(v_uid_5087_);
if (v_isSharedCheck_5136_ == 0)
{
v___x_5125_ = v_uid_5087_;
v_isShared_5126_ = v_isSharedCheck_5136_;
goto v_resetjp_5124_;
}
else
{
lean_inc(v_val_5123_);
lean_dec(v_uid_5087_);
v___x_5125_ = lean_box(0);
v_isShared_5126_ = v_isSharedCheck_5136_;
goto v_resetjp_5124_;
}
v_resetjp_5124_:
{
lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; uint8_t v___x_5130_; 
v___x_5127_ = lean_nat_to_int(v_val_5123_);
v___x_5128_ = lean_nat_abs(v___x_5127_);
v___x_5129_ = lean_cstr_to_nat("9007199254740991");
v___x_5130_ = lean_nat_dec_le(v___x_5128_, v___x_5129_);
lean_dec(v___x_5128_);
if (v___x_5130_ == 0)
{
lean_object* v___x_5132_; 
if (v_isShared_5126_ == 0)
{
lean_ctor_set_tag(v___x_5125_, 5);
lean_ctor_set(v___x_5125_, 0, v___x_5127_);
v___x_5132_ = v___x_5125_;
goto v_reusejp_5131_;
}
else
{
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v___x_5127_);
v___x_5132_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5131_;
}
v_reusejp_5131_:
{
v___y_5103_ = v___y_5121_;
v___y_5104_ = v___x_5132_;
goto v___jp_5102_;
}
}
else
{
double v___x_5134_; lean_object* v___x_5135_; 
lean_del_object(v___x_5125_);
v___x_5134_ = l_Float_ofInt(v___x_5127_);
lean_dec(v___x_5127_);
v___x_5135_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5135_, 0, v___x_5134_);
v___y_5103_ = v___y_5121_;
v___y_5104_ = v___x_5135_;
goto v___jp_5102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chown___boxed(lean_object* v_path_5148_, lean_object* v_uid_5149_, lean_object* v_gid_5150_, lean_object* v_a_5151_){
_start:
{
lean_object* v_res_5152_; 
v_res_5152_ = l_Lasm_JS_Deno_chown(v_path_5148_, v_uid_5149_, v_gid_5150_);
return v_res_5152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync(lean_object* v_path_5161_, lean_object* v_uid_5162_, lean_object* v_gid_5163_){
_start:
{
uint8_t v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___y_5169_; lean_object* v___y_5170_; lean_object* v___y_5171_; lean_object* v___y_5179_; lean_object* v___y_5180_; lean_object* v___y_5197_; 
v___x_5165_ = 0;
v___x_5166_ = lean_unsigned_to_nat(3u);
v___x_5167_ = ((lean_object*)(l_Lasm_JS_Deno_chownSync___closed__2));
if (lean_obj_tag(v_path_5161_) == 0)
{
lean_object* v_value_5213_; lean_object* v___x_5215_; uint8_t v_isShared_5216_; uint8_t v_isSharedCheck_5220_; 
v_value_5213_ = lean_ctor_get(v_path_5161_, 0);
v_isSharedCheck_5220_ = !lean_is_exclusive(v_path_5161_);
if (v_isSharedCheck_5220_ == 0)
{
v___x_5215_ = v_path_5161_;
v_isShared_5216_ = v_isSharedCheck_5220_;
goto v_resetjp_5214_;
}
else
{
lean_inc(v_value_5213_);
lean_dec(v_path_5161_);
v___x_5215_ = lean_box(0);
v_isShared_5216_ = v_isSharedCheck_5220_;
goto v_resetjp_5214_;
}
v_resetjp_5214_:
{
lean_object* v___x_5218_; 
if (v_isShared_5216_ == 0)
{
lean_ctor_set_tag(v___x_5215_, 4);
v___x_5218_ = v___x_5215_;
goto v_reusejp_5217_;
}
else
{
lean_object* v_reuseFailAlloc_5219_; 
v_reuseFailAlloc_5219_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5219_, 0, v_value_5213_);
v___x_5218_ = v_reuseFailAlloc_5219_;
goto v_reusejp_5217_;
}
v_reusejp_5217_:
{
v___y_5197_ = v___x_5218_;
goto v___jp_5196_;
}
}
}
else
{
lean_object* v_value_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; 
v_value_5221_ = lean_ctor_get(v_path_5161_, 0);
lean_inc(v_value_5221_);
lean_dec_ref_known(v_path_5161_, 1);
v___x_5222_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5223_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5223_, 0, v_value_5221_);
lean_ctor_set(v___x_5223_, 1, v___x_5222_);
v___y_5197_ = v___x_5223_;
goto v___jp_5196_;
}
v___jp_5168_:
{
lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; 
v___x_5172_ = lean_mk_empty_array_with_capacity(v___x_5166_);
v___x_5173_ = lean_array_push(v___x_5172_, v___y_5170_);
v___x_5174_ = lean_array_push(v___x_5173_, v___y_5169_);
v___x_5175_ = lean_array_push(v___x_5174_, v___y_5171_);
v___x_5176_ = l_Lasm_JS_Web_Support_args(v___x_5175_);
v___x_5177_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5167_, v___x_5176_, v___x_5165_);
return v___x_5177_;
}
v___jp_5178_:
{
if (lean_obj_tag(v_gid_5163_) == 0)
{
lean_object* v___x_5181_; 
v___x_5181_ = lean_box(1);
v___y_5169_ = v___y_5180_;
v___y_5170_ = v___y_5179_;
v___y_5171_ = v___x_5181_;
goto v___jp_5168_;
}
else
{
lean_object* v_val_5182_; lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5195_; 
v_val_5182_ = lean_ctor_get(v_gid_5163_, 0);
v_isSharedCheck_5195_ = !lean_is_exclusive(v_gid_5163_);
if (v_isSharedCheck_5195_ == 0)
{
v___x_5184_ = v_gid_5163_;
v_isShared_5185_ = v_isSharedCheck_5195_;
goto v_resetjp_5183_;
}
else
{
lean_inc(v_val_5182_);
lean_dec(v_gid_5163_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5195_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; uint8_t v___x_5189_; 
v___x_5186_ = lean_nat_to_int(v_val_5182_);
v___x_5187_ = lean_nat_abs(v___x_5186_);
v___x_5188_ = lean_cstr_to_nat("9007199254740991");
v___x_5189_ = lean_nat_dec_le(v___x_5187_, v___x_5188_);
lean_dec(v___x_5187_);
if (v___x_5189_ == 0)
{
lean_object* v___x_5191_; 
if (v_isShared_5185_ == 0)
{
lean_ctor_set_tag(v___x_5184_, 5);
lean_ctor_set(v___x_5184_, 0, v___x_5186_);
v___x_5191_ = v___x_5184_;
goto v_reusejp_5190_;
}
else
{
lean_object* v_reuseFailAlloc_5192_; 
v_reuseFailAlloc_5192_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5192_, 0, v___x_5186_);
v___x_5191_ = v_reuseFailAlloc_5192_;
goto v_reusejp_5190_;
}
v_reusejp_5190_:
{
v___y_5169_ = v___y_5180_;
v___y_5170_ = v___y_5179_;
v___y_5171_ = v___x_5191_;
goto v___jp_5168_;
}
}
else
{
double v___x_5193_; lean_object* v___x_5194_; 
lean_del_object(v___x_5184_);
v___x_5193_ = l_Float_ofInt(v___x_5186_);
lean_dec(v___x_5186_);
v___x_5194_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5194_, 0, v___x_5193_);
v___y_5169_ = v___y_5180_;
v___y_5170_ = v___y_5179_;
v___y_5171_ = v___x_5194_;
goto v___jp_5168_;
}
}
}
}
v___jp_5196_:
{
if (lean_obj_tag(v_uid_5162_) == 0)
{
lean_object* v___x_5198_; 
v___x_5198_ = lean_box(1);
v___y_5179_ = v___y_5197_;
v___y_5180_ = v___x_5198_;
goto v___jp_5178_;
}
else
{
lean_object* v_val_5199_; lean_object* v___x_5201_; uint8_t v_isShared_5202_; uint8_t v_isSharedCheck_5212_; 
v_val_5199_ = lean_ctor_get(v_uid_5162_, 0);
v_isSharedCheck_5212_ = !lean_is_exclusive(v_uid_5162_);
if (v_isSharedCheck_5212_ == 0)
{
v___x_5201_ = v_uid_5162_;
v_isShared_5202_ = v_isSharedCheck_5212_;
goto v_resetjp_5200_;
}
else
{
lean_inc(v_val_5199_);
lean_dec(v_uid_5162_);
v___x_5201_ = lean_box(0);
v_isShared_5202_ = v_isSharedCheck_5212_;
goto v_resetjp_5200_;
}
v_resetjp_5200_:
{
lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; uint8_t v___x_5206_; 
v___x_5203_ = lean_nat_to_int(v_val_5199_);
v___x_5204_ = lean_nat_abs(v___x_5203_);
v___x_5205_ = lean_cstr_to_nat("9007199254740991");
v___x_5206_ = lean_nat_dec_le(v___x_5204_, v___x_5205_);
lean_dec(v___x_5204_);
if (v___x_5206_ == 0)
{
lean_object* v___x_5208_; 
if (v_isShared_5202_ == 0)
{
lean_ctor_set_tag(v___x_5201_, 5);
lean_ctor_set(v___x_5201_, 0, v___x_5203_);
v___x_5208_ = v___x_5201_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5209_; 
v_reuseFailAlloc_5209_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5209_, 0, v___x_5203_);
v___x_5208_ = v_reuseFailAlloc_5209_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
v___y_5179_ = v___y_5197_;
v___y_5180_ = v___x_5208_;
goto v___jp_5178_;
}
}
else
{
double v___x_5210_; lean_object* v___x_5211_; 
lean_del_object(v___x_5201_);
v___x_5210_ = l_Float_ofInt(v___x_5203_);
lean_dec(v___x_5203_);
v___x_5211_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5211_, 0, v___x_5210_);
v___y_5179_ = v___y_5197_;
v___y_5180_ = v___x_5211_;
goto v___jp_5178_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chownSync___boxed(lean_object* v_path_5224_, lean_object* v_uid_5225_, lean_object* v_gid_5226_, lean_object* v_a_5227_){
_start:
{
lean_object* v_res_5228_; 
v_res_5228_ = l_Lasm_JS_Deno_chownSync(v_path_5224_, v_uid_5225_, v_gid_5226_);
return v_res_5228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(lean_object* v_x_5229_){
_start:
{
if (lean_obj_tag(v_x_5229_) == 0)
{
lean_object* v___x_5230_; 
v___x_5230_ = lean_box(0);
return v___x_5230_;
}
else
{
lean_object* v_val_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; 
v_val_5231_ = lean_ctor_get(v_x_5229_, 0);
v___x_5232_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_5233_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_5231_);
v___x_5234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5234_, 0, v___x_5232_);
lean_ctor_set(v___x_5234_, 1, v___x_5233_);
v___x_5235_ = lean_unsigned_to_nat(1u);
v___x_5236_ = lean_mk_empty_array_with_capacity(v___x_5235_);
v___x_5237_ = lean_array_push(v___x_5236_, v___x_5234_);
v___x_5238_ = l_Lasm_JS_Web_Support_fields(v___x_5237_);
lean_dec_ref(v___x_5237_);
return v___x_5238_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0___boxed(lean_object* v_x_5239_){
_start:
{
lean_object* v_res_5240_; 
v_res_5240_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_x_5239_);
lean_dec(v_x_5239_);
return v_res_5240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove(lean_object* v_path_5249_, lean_object* v_options_5250_){
_start:
{
lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___y_5255_; 
v___x_5252_ = lean_unsigned_to_nat(2u);
v___x_5253_ = ((lean_object*)(l_Lasm_JS_Deno_remove___closed__2));
if (lean_obj_tag(v_path_5249_) == 0)
{
lean_object* v_value_5262_; lean_object* v___x_5264_; uint8_t v_isShared_5265_; uint8_t v_isSharedCheck_5269_; 
v_value_5262_ = lean_ctor_get(v_path_5249_, 0);
v_isSharedCheck_5269_ = !lean_is_exclusive(v_path_5249_);
if (v_isSharedCheck_5269_ == 0)
{
v___x_5264_ = v_path_5249_;
v_isShared_5265_ = v_isSharedCheck_5269_;
goto v_resetjp_5263_;
}
else
{
lean_inc(v_value_5262_);
lean_dec(v_path_5249_);
v___x_5264_ = lean_box(0);
v_isShared_5265_ = v_isSharedCheck_5269_;
goto v_resetjp_5263_;
}
v_resetjp_5263_:
{
lean_object* v___x_5267_; 
if (v_isShared_5265_ == 0)
{
lean_ctor_set_tag(v___x_5264_, 4);
v___x_5267_ = v___x_5264_;
goto v_reusejp_5266_;
}
else
{
lean_object* v_reuseFailAlloc_5268_; 
v_reuseFailAlloc_5268_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5268_, 0, v_value_5262_);
v___x_5267_ = v_reuseFailAlloc_5268_;
goto v_reusejp_5266_;
}
v_reusejp_5266_:
{
v___y_5255_ = v___x_5267_;
goto v___jp_5254_;
}
}
}
else
{
lean_object* v_value_5270_; lean_object* v___x_5271_; lean_object* v___x_5272_; 
v_value_5270_ = lean_ctor_get(v_path_5249_, 0);
lean_inc(v_value_5270_);
lean_dec_ref_known(v_path_5249_, 1);
v___x_5271_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5272_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5272_, 0, v_value_5270_);
lean_ctor_set(v___x_5272_, 1, v___x_5271_);
v___y_5255_ = v___x_5272_;
goto v___jp_5254_;
}
v___jp_5254_:
{
lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; 
v___x_5256_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5250_);
v___x_5257_ = lean_mk_empty_array_with_capacity(v___x_5252_);
v___x_5258_ = lean_array_push(v___x_5257_, v___y_5255_);
v___x_5259_ = lean_array_push(v___x_5258_, v___x_5256_);
v___x_5260_ = l_Lasm_JS_Web_Support_args(v___x_5259_);
v___x_5261_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5253_, v___x_5260_);
return v___x_5261_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_remove___boxed(lean_object* v_path_5273_, lean_object* v_options_5274_, lean_object* v_a_5275_){
_start:
{
lean_object* v_res_5276_; 
v_res_5276_ = l_Lasm_JS_Deno_remove(v_path_5273_, v_options_5274_);
lean_dec(v_options_5274_);
return v_res_5276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync(lean_object* v_path_5285_, lean_object* v_options_5286_){
_start:
{
uint8_t v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___y_5292_; 
v___x_5288_ = 0;
v___x_5289_ = lean_unsigned_to_nat(2u);
v___x_5290_ = ((lean_object*)(l_Lasm_JS_Deno_removeSync___closed__2));
if (lean_obj_tag(v_path_5285_) == 0)
{
lean_object* v_value_5299_; lean_object* v___x_5301_; uint8_t v_isShared_5302_; uint8_t v_isSharedCheck_5306_; 
v_value_5299_ = lean_ctor_get(v_path_5285_, 0);
v_isSharedCheck_5306_ = !lean_is_exclusive(v_path_5285_);
if (v_isSharedCheck_5306_ == 0)
{
v___x_5301_ = v_path_5285_;
v_isShared_5302_ = v_isSharedCheck_5306_;
goto v_resetjp_5300_;
}
else
{
lean_inc(v_value_5299_);
lean_dec(v_path_5285_);
v___x_5301_ = lean_box(0);
v_isShared_5302_ = v_isSharedCheck_5306_;
goto v_resetjp_5300_;
}
v_resetjp_5300_:
{
lean_object* v___x_5304_; 
if (v_isShared_5302_ == 0)
{
lean_ctor_set_tag(v___x_5301_, 4);
v___x_5304_ = v___x_5301_;
goto v_reusejp_5303_;
}
else
{
lean_object* v_reuseFailAlloc_5305_; 
v_reuseFailAlloc_5305_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5305_, 0, v_value_5299_);
v___x_5304_ = v_reuseFailAlloc_5305_;
goto v_reusejp_5303_;
}
v_reusejp_5303_:
{
v___y_5292_ = v___x_5304_;
goto v___jp_5291_;
}
}
}
else
{
lean_object* v_value_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; 
v_value_5307_ = lean_ctor_get(v_path_5285_, 0);
lean_inc(v_value_5307_);
lean_dec_ref_known(v_path_5285_, 1);
v___x_5308_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5309_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5309_, 0, v_value_5307_);
lean_ctor_set(v___x_5309_, 1, v___x_5308_);
v___y_5292_ = v___x_5309_;
goto v___jp_5291_;
}
v___jp_5291_:
{
lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; 
v___x_5293_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_remove_spec__0(v_options_5286_);
v___x_5294_ = lean_mk_empty_array_with_capacity(v___x_5289_);
v___x_5295_ = lean_array_push(v___x_5294_, v___y_5292_);
v___x_5296_ = lean_array_push(v___x_5295_, v___x_5293_);
v___x_5297_ = l_Lasm_JS_Web_Support_args(v___x_5296_);
v___x_5298_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5290_, v___x_5297_, v___x_5288_);
return v___x_5298_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSync___boxed(lean_object* v_path_5310_, lean_object* v_options_5311_, lean_object* v_a_5312_){
_start:
{
lean_object* v_res_5313_; 
v_res_5313_ = l_Lasm_JS_Deno_removeSync(v_path_5310_, v_options_5311_);
lean_dec(v_options_5311_);
return v_res_5313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync(lean_object* v_oldpath_5322_, lean_object* v_newpath_5323_){
_start:
{
uint8_t v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___y_5329_; lean_object* v___y_5330_; lean_object* v___y_5337_; 
v___x_5325_ = 0;
v___x_5326_ = lean_unsigned_to_nat(2u);
v___x_5327_ = ((lean_object*)(l_Lasm_JS_Deno_renameSync___closed__2));
if (lean_obj_tag(v_oldpath_5322_) == 0)
{
lean_object* v_value_5349_; lean_object* v___x_5351_; uint8_t v_isShared_5352_; uint8_t v_isSharedCheck_5356_; 
v_value_5349_ = lean_ctor_get(v_oldpath_5322_, 0);
v_isSharedCheck_5356_ = !lean_is_exclusive(v_oldpath_5322_);
if (v_isSharedCheck_5356_ == 0)
{
v___x_5351_ = v_oldpath_5322_;
v_isShared_5352_ = v_isSharedCheck_5356_;
goto v_resetjp_5350_;
}
else
{
lean_inc(v_value_5349_);
lean_dec(v_oldpath_5322_);
v___x_5351_ = lean_box(0);
v_isShared_5352_ = v_isSharedCheck_5356_;
goto v_resetjp_5350_;
}
v_resetjp_5350_:
{
lean_object* v___x_5354_; 
if (v_isShared_5352_ == 0)
{
lean_ctor_set_tag(v___x_5351_, 4);
v___x_5354_ = v___x_5351_;
goto v_reusejp_5353_;
}
else
{
lean_object* v_reuseFailAlloc_5355_; 
v_reuseFailAlloc_5355_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5355_, 0, v_value_5349_);
v___x_5354_ = v_reuseFailAlloc_5355_;
goto v_reusejp_5353_;
}
v_reusejp_5353_:
{
v___y_5337_ = v___x_5354_;
goto v___jp_5336_;
}
}
}
else
{
lean_object* v_value_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; 
v_value_5357_ = lean_ctor_get(v_oldpath_5322_, 0);
lean_inc(v_value_5357_);
lean_dec_ref_known(v_oldpath_5322_, 1);
v___x_5358_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5359_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5359_, 0, v_value_5357_);
lean_ctor_set(v___x_5359_, 1, v___x_5358_);
v___y_5337_ = v___x_5359_;
goto v___jp_5336_;
}
v___jp_5328_:
{
lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; 
v___x_5331_ = lean_mk_empty_array_with_capacity(v___x_5326_);
v___x_5332_ = lean_array_push(v___x_5331_, v___y_5329_);
v___x_5333_ = lean_array_push(v___x_5332_, v___y_5330_);
v___x_5334_ = l_Lasm_JS_Web_Support_args(v___x_5333_);
v___x_5335_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5327_, v___x_5334_, v___x_5325_);
return v___x_5335_;
}
v___jp_5336_:
{
if (lean_obj_tag(v_newpath_5323_) == 0)
{
lean_object* v_value_5338_; lean_object* v___x_5340_; uint8_t v_isShared_5341_; uint8_t v_isSharedCheck_5345_; 
v_value_5338_ = lean_ctor_get(v_newpath_5323_, 0);
v_isSharedCheck_5345_ = !lean_is_exclusive(v_newpath_5323_);
if (v_isSharedCheck_5345_ == 0)
{
v___x_5340_ = v_newpath_5323_;
v_isShared_5341_ = v_isSharedCheck_5345_;
goto v_resetjp_5339_;
}
else
{
lean_inc(v_value_5338_);
lean_dec(v_newpath_5323_);
v___x_5340_ = lean_box(0);
v_isShared_5341_ = v_isSharedCheck_5345_;
goto v_resetjp_5339_;
}
v_resetjp_5339_:
{
lean_object* v___x_5343_; 
if (v_isShared_5341_ == 0)
{
lean_ctor_set_tag(v___x_5340_, 4);
v___x_5343_ = v___x_5340_;
goto v_reusejp_5342_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v_value_5338_);
v___x_5343_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5342_;
}
v_reusejp_5342_:
{
v___y_5329_ = v___y_5337_;
v___y_5330_ = v___x_5343_;
goto v___jp_5328_;
}
}
}
else
{
lean_object* v_value_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; 
v_value_5346_ = lean_ctor_get(v_newpath_5323_, 0);
lean_inc(v_value_5346_);
lean_dec_ref_known(v_newpath_5323_, 1);
v___x_5347_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5348_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5348_, 0, v_value_5346_);
lean_ctor_set(v___x_5348_, 1, v___x_5347_);
v___y_5329_ = v___y_5337_;
v___y_5330_ = v___x_5348_;
goto v___jp_5328_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_renameSync___boxed(lean_object* v_oldpath_5360_, lean_object* v_newpath_5361_, lean_object* v_a_5362_){
_start:
{
lean_object* v_res_5363_; 
v_res_5363_ = l_Lasm_JS_Deno_renameSync(v_oldpath_5360_, v_newpath_5361_);
return v_res_5363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename(lean_object* v_oldpath_5372_, lean_object* v_newpath_5373_){
_start:
{
lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___y_5378_; lean_object* v___y_5379_; lean_object* v___y_5386_; 
v___x_5375_ = lean_unsigned_to_nat(2u);
v___x_5376_ = ((lean_object*)(l_Lasm_JS_Deno_rename___closed__2));
if (lean_obj_tag(v_oldpath_5372_) == 0)
{
lean_object* v_value_5398_; lean_object* v___x_5400_; uint8_t v_isShared_5401_; uint8_t v_isSharedCheck_5405_; 
v_value_5398_ = lean_ctor_get(v_oldpath_5372_, 0);
v_isSharedCheck_5405_ = !lean_is_exclusive(v_oldpath_5372_);
if (v_isSharedCheck_5405_ == 0)
{
v___x_5400_ = v_oldpath_5372_;
v_isShared_5401_ = v_isSharedCheck_5405_;
goto v_resetjp_5399_;
}
else
{
lean_inc(v_value_5398_);
lean_dec(v_oldpath_5372_);
v___x_5400_ = lean_box(0);
v_isShared_5401_ = v_isSharedCheck_5405_;
goto v_resetjp_5399_;
}
v_resetjp_5399_:
{
lean_object* v___x_5403_; 
if (v_isShared_5401_ == 0)
{
lean_ctor_set_tag(v___x_5400_, 4);
v___x_5403_ = v___x_5400_;
goto v_reusejp_5402_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v_value_5398_);
v___x_5403_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5402_;
}
v_reusejp_5402_:
{
v___y_5386_ = v___x_5403_;
goto v___jp_5385_;
}
}
}
else
{
lean_object* v_value_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; 
v_value_5406_ = lean_ctor_get(v_oldpath_5372_, 0);
lean_inc(v_value_5406_);
lean_dec_ref_known(v_oldpath_5372_, 1);
v___x_5407_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5408_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5408_, 0, v_value_5406_);
lean_ctor_set(v___x_5408_, 1, v___x_5407_);
v___y_5386_ = v___x_5408_;
goto v___jp_5385_;
}
v___jp_5377_:
{
lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; 
v___x_5380_ = lean_mk_empty_array_with_capacity(v___x_5375_);
v___x_5381_ = lean_array_push(v___x_5380_, v___y_5378_);
v___x_5382_ = lean_array_push(v___x_5381_, v___y_5379_);
v___x_5383_ = l_Lasm_JS_Web_Support_args(v___x_5382_);
v___x_5384_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5376_, v___x_5383_);
return v___x_5384_;
}
v___jp_5385_:
{
if (lean_obj_tag(v_newpath_5373_) == 0)
{
lean_object* v_value_5387_; lean_object* v___x_5389_; uint8_t v_isShared_5390_; uint8_t v_isSharedCheck_5394_; 
v_value_5387_ = lean_ctor_get(v_newpath_5373_, 0);
v_isSharedCheck_5394_ = !lean_is_exclusive(v_newpath_5373_);
if (v_isSharedCheck_5394_ == 0)
{
v___x_5389_ = v_newpath_5373_;
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
else
{
lean_inc(v_value_5387_);
lean_dec(v_newpath_5373_);
v___x_5389_ = lean_box(0);
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
v_resetjp_5388_:
{
lean_object* v___x_5392_; 
if (v_isShared_5390_ == 0)
{
lean_ctor_set_tag(v___x_5389_, 4);
v___x_5392_ = v___x_5389_;
goto v_reusejp_5391_;
}
else
{
lean_object* v_reuseFailAlloc_5393_; 
v_reuseFailAlloc_5393_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5393_, 0, v_value_5387_);
v___x_5392_ = v_reuseFailAlloc_5393_;
goto v_reusejp_5391_;
}
v_reusejp_5391_:
{
v___y_5378_ = v___y_5386_;
v___y_5379_ = v___x_5392_;
goto v___jp_5377_;
}
}
}
else
{
lean_object* v_value_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; 
v_value_5395_ = lean_ctor_get(v_newpath_5373_, 0);
lean_inc(v_value_5395_);
lean_dec_ref_known(v_newpath_5373_, 1);
v___x_5396_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5397_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5397_, 0, v_value_5395_);
lean_ctor_set(v___x_5397_, 1, v___x_5396_);
v___y_5378_ = v___y_5386_;
v___y_5379_ = v___x_5397_;
goto v___jp_5377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_rename___boxed(lean_object* v_oldpath_5409_, lean_object* v_newpath_5410_, lean_object* v_a_5411_){
_start:
{
lean_object* v_res_5412_; 
v_res_5412_ = l_Lasm_JS_Deno_rename(v_oldpath_5409_, v_newpath_5410_);
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(lean_object* v_x_5413_){
_start:
{
if (lean_obj_tag(v_x_5413_) == 0)
{
lean_object* v___x_5414_; 
v___x_5414_ = lean_box(0);
return v___x_5414_;
}
else
{
lean_object* v_val_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; 
v_val_5415_ = lean_ctor_get(v_x_5413_, 0);
v___x_5416_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_5417_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_5415_);
v___x_5418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5418_, 0, v___x_5416_);
lean_ctor_set(v___x_5418_, 1, v___x_5417_);
v___x_5419_ = lean_unsigned_to_nat(1u);
v___x_5420_ = lean_mk_empty_array_with_capacity(v___x_5419_);
v___x_5421_ = lean_array_push(v___x_5420_, v___x_5418_);
v___x_5422_ = l_Lasm_JS_Web_Support_fields(v___x_5421_);
lean_dec_ref(v___x_5421_);
return v___x_5422_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0___boxed(lean_object* v_x_5423_){
_start:
{
lean_object* v_res_5424_; 
v_res_5424_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_x_5423_);
lean_dec(v_x_5423_);
return v_res_5424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile(lean_object* v_path_5433_, lean_object* v_options_5434_){
_start:
{
lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___y_5439_; 
v___x_5436_ = lean_unsigned_to_nat(2u);
v___x_5437_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFile___closed__2));
if (lean_obj_tag(v_path_5433_) == 0)
{
lean_object* v_value_5446_; lean_object* v___x_5448_; uint8_t v_isShared_5449_; uint8_t v_isSharedCheck_5453_; 
v_value_5446_ = lean_ctor_get(v_path_5433_, 0);
v_isSharedCheck_5453_ = !lean_is_exclusive(v_path_5433_);
if (v_isSharedCheck_5453_ == 0)
{
v___x_5448_ = v_path_5433_;
v_isShared_5449_ = v_isSharedCheck_5453_;
goto v_resetjp_5447_;
}
else
{
lean_inc(v_value_5446_);
lean_dec(v_path_5433_);
v___x_5448_ = lean_box(0);
v_isShared_5449_ = v_isSharedCheck_5453_;
goto v_resetjp_5447_;
}
v_resetjp_5447_:
{
lean_object* v___x_5451_; 
if (v_isShared_5449_ == 0)
{
lean_ctor_set_tag(v___x_5448_, 4);
v___x_5451_ = v___x_5448_;
goto v_reusejp_5450_;
}
else
{
lean_object* v_reuseFailAlloc_5452_; 
v_reuseFailAlloc_5452_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5452_, 0, v_value_5446_);
v___x_5451_ = v_reuseFailAlloc_5452_;
goto v_reusejp_5450_;
}
v_reusejp_5450_:
{
v___y_5439_ = v___x_5451_;
goto v___jp_5438_;
}
}
}
else
{
lean_object* v_value_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; 
v_value_5454_ = lean_ctor_get(v_path_5433_, 0);
lean_inc(v_value_5454_);
lean_dec_ref_known(v_path_5433_, 1);
v___x_5455_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5456_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5456_, 0, v_value_5454_);
lean_ctor_set(v___x_5456_, 1, v___x_5455_);
v___y_5439_ = v___x_5456_;
goto v___jp_5438_;
}
v___jp_5438_:
{
lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; 
v___x_5440_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5434_);
v___x_5441_ = lean_mk_empty_array_with_capacity(v___x_5436_);
v___x_5442_ = lean_array_push(v___x_5441_, v___y_5439_);
v___x_5443_ = lean_array_push(v___x_5442_, v___x_5440_);
v___x_5444_ = l_Lasm_JS_Web_Support_args(v___x_5443_);
v___x_5445_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5437_, v___x_5444_);
return v___x_5445_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFile___boxed(lean_object* v_path_5457_, lean_object* v_options_5458_, lean_object* v_a_5459_){
_start:
{
lean_object* v_res_5460_; 
v_res_5460_ = l_Lasm_JS_Deno_readTextFile(v_path_5457_, v_options_5458_);
lean_dec(v_options_5458_);
return v_res_5460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync(lean_object* v_path_5469_){
_start:
{
uint8_t v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___y_5475_; 
v___x_5471_ = 0;
v___x_5472_ = lean_unsigned_to_nat(1u);
v___x_5473_ = ((lean_object*)(l_Lasm_JS_Deno_readTextFileSync___closed__2));
if (lean_obj_tag(v_path_5469_) == 0)
{
lean_object* v_value_5480_; lean_object* v___x_5482_; uint8_t v_isShared_5483_; uint8_t v_isSharedCheck_5487_; 
v_value_5480_ = lean_ctor_get(v_path_5469_, 0);
v_isSharedCheck_5487_ = !lean_is_exclusive(v_path_5469_);
if (v_isSharedCheck_5487_ == 0)
{
v___x_5482_ = v_path_5469_;
v_isShared_5483_ = v_isSharedCheck_5487_;
goto v_resetjp_5481_;
}
else
{
lean_inc(v_value_5480_);
lean_dec(v_path_5469_);
v___x_5482_ = lean_box(0);
v_isShared_5483_ = v_isSharedCheck_5487_;
goto v_resetjp_5481_;
}
v_resetjp_5481_:
{
lean_object* v___x_5485_; 
if (v_isShared_5483_ == 0)
{
lean_ctor_set_tag(v___x_5482_, 4);
v___x_5485_ = v___x_5482_;
goto v_reusejp_5484_;
}
else
{
lean_object* v_reuseFailAlloc_5486_; 
v_reuseFailAlloc_5486_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5486_, 0, v_value_5480_);
v___x_5485_ = v_reuseFailAlloc_5486_;
goto v_reusejp_5484_;
}
v_reusejp_5484_:
{
v___y_5475_ = v___x_5485_;
goto v___jp_5474_;
}
}
}
else
{
lean_object* v_value_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; 
v_value_5488_ = lean_ctor_get(v_path_5469_, 0);
lean_inc(v_value_5488_);
lean_dec_ref_known(v_path_5469_, 1);
v___x_5489_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5490_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5490_, 0, v_value_5488_);
lean_ctor_set(v___x_5490_, 1, v___x_5489_);
v___y_5475_ = v___x_5490_;
goto v___jp_5474_;
}
v___jp_5474_:
{
lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; 
v___x_5476_ = lean_mk_empty_array_with_capacity(v___x_5472_);
v___x_5477_ = lean_array_push(v___x_5476_, v___y_5475_);
v___x_5478_ = l_Lasm_JS_Web_Support_args(v___x_5477_);
v___x_5479_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5473_, v___x_5478_, v___x_5471_);
return v___x_5479_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readTextFileSync___boxed(lean_object* v_path_5491_, lean_object* v_a_5492_){
_start:
{
lean_object* v_res_5493_; 
v_res_5493_ = l_Lasm_JS_Deno_readTextFileSync(v_path_5491_);
return v_res_5493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(lean_object* v_b_5494_, lean_object* v_args_5495_){
_start:
{
uint8_t v_construct_5497_; lean_object* v___x_5498_; uint32_t v___x_5499_; uint64_t v___x_5500_; uint64_t v___y_5502_; 
v_construct_5497_ = lean_ctor_get_uint8(v_b_5494_, sizeof(void*)*4);
v___x_5498_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5494_);
v___x_5499_ = 214;
v___x_5500_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5497_ == 0)
{
uint64_t v___x_5510_; 
v___x_5510_ = 0ULL;
v___y_5502_ = v___x_5510_;
goto v___jp_5501_;
}
else
{
uint64_t v___x_5511_; 
v___x_5511_ = 4ULL;
v___y_5502_ = v___x_5511_;
goto v___jp_5501_;
}
v___jp_5501_:
{
uint64_t v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; 
v___x_5503_ = lean_uint64_lor(v___x_5500_, v___y_5502_);
v___x_5504_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5494_, v_args_5495_);
v___x_5505_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5506_ = lean_string_append(v___x_5505_, v___x_5498_);
v___x_5507_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5508_ = lean_string_append(v___x_5506_, v___x_5507_);
v___x_5509_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_5498_, v___x_5499_, v___x_5503_, v___x_5504_, v___x_5508_);
return v___x_5509_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0___boxed(lean_object* v_b_5512_, lean_object* v_args_5513_, lean_object* v_a_5514_){
_start:
{
lean_object* v_res_5515_; 
v_res_5515_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v_b_5512_, v_args_5513_);
lean_dec_ref(v_b_5512_);
return v_res_5515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile(lean_object* v_path_5524_, lean_object* v_options_5525_){
_start:
{
lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v___y_5530_; 
v___x_5527_ = lean_unsigned_to_nat(2u);
v___x_5528_ = ((lean_object*)(l_Lasm_JS_Deno_readFile___closed__2));
if (lean_obj_tag(v_path_5524_) == 0)
{
lean_object* v_value_5537_; lean_object* v___x_5539_; uint8_t v_isShared_5540_; uint8_t v_isSharedCheck_5544_; 
v_value_5537_ = lean_ctor_get(v_path_5524_, 0);
v_isSharedCheck_5544_ = !lean_is_exclusive(v_path_5524_);
if (v_isSharedCheck_5544_ == 0)
{
v___x_5539_ = v_path_5524_;
v_isShared_5540_ = v_isSharedCheck_5544_;
goto v_resetjp_5538_;
}
else
{
lean_inc(v_value_5537_);
lean_dec(v_path_5524_);
v___x_5539_ = lean_box(0);
v_isShared_5540_ = v_isSharedCheck_5544_;
goto v_resetjp_5538_;
}
v_resetjp_5538_:
{
lean_object* v___x_5542_; 
if (v_isShared_5540_ == 0)
{
lean_ctor_set_tag(v___x_5539_, 4);
v___x_5542_ = v___x_5539_;
goto v_reusejp_5541_;
}
else
{
lean_object* v_reuseFailAlloc_5543_; 
v_reuseFailAlloc_5543_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5543_, 0, v_value_5537_);
v___x_5542_ = v_reuseFailAlloc_5543_;
goto v_reusejp_5541_;
}
v_reusejp_5541_:
{
v___y_5530_ = v___x_5542_;
goto v___jp_5529_;
}
}
}
else
{
lean_object* v_value_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; 
v_value_5545_ = lean_ctor_get(v_path_5524_, 0);
lean_inc(v_value_5545_);
lean_dec_ref_known(v_path_5524_, 1);
v___x_5546_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5547_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5547_, 0, v_value_5545_);
lean_ctor_set(v___x_5547_, 1, v___x_5546_);
v___y_5530_ = v___x_5547_;
goto v___jp_5529_;
}
v___jp_5529_:
{
lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; 
v___x_5531_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_readTextFile_spec__0(v_options_5525_);
v___x_5532_ = lean_mk_empty_array_with_capacity(v___x_5527_);
v___x_5533_ = lean_array_push(v___x_5532_, v___y_5530_);
v___x_5534_ = lean_array_push(v___x_5533_, v___x_5531_);
v___x_5535_ = l_Lasm_JS_Web_Support_args(v___x_5534_);
v___x_5536_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_readFile_spec__0(v___x_5528_, v___x_5535_);
return v___x_5536_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFile___boxed(lean_object* v_path_5548_, lean_object* v_options_5549_, lean_object* v_a_5550_){
_start:
{
lean_object* v_res_5551_; 
v_res_5551_ = l_Lasm_JS_Deno_readFile(v_path_5548_, v_options_5549_);
lean_dec(v_options_5549_);
return v_res_5551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync(lean_object* v_path_5560_){
_start:
{
uint8_t v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___y_5566_; 
v___x_5562_ = 0;
v___x_5563_ = lean_unsigned_to_nat(1u);
v___x_5564_ = ((lean_object*)(l_Lasm_JS_Deno_readFileSync___closed__2));
if (lean_obj_tag(v_path_5560_) == 0)
{
lean_object* v_value_5571_; lean_object* v___x_5573_; uint8_t v_isShared_5574_; uint8_t v_isSharedCheck_5578_; 
v_value_5571_ = lean_ctor_get(v_path_5560_, 0);
v_isSharedCheck_5578_ = !lean_is_exclusive(v_path_5560_);
if (v_isSharedCheck_5578_ == 0)
{
v___x_5573_ = v_path_5560_;
v_isShared_5574_ = v_isSharedCheck_5578_;
goto v_resetjp_5572_;
}
else
{
lean_inc(v_value_5571_);
lean_dec(v_path_5560_);
v___x_5573_ = lean_box(0);
v_isShared_5574_ = v_isSharedCheck_5578_;
goto v_resetjp_5572_;
}
v_resetjp_5572_:
{
lean_object* v___x_5576_; 
if (v_isShared_5574_ == 0)
{
lean_ctor_set_tag(v___x_5573_, 4);
v___x_5576_ = v___x_5573_;
goto v_reusejp_5575_;
}
else
{
lean_object* v_reuseFailAlloc_5577_; 
v_reuseFailAlloc_5577_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5577_, 0, v_value_5571_);
v___x_5576_ = v_reuseFailAlloc_5577_;
goto v_reusejp_5575_;
}
v_reusejp_5575_:
{
v___y_5566_ = v___x_5576_;
goto v___jp_5565_;
}
}
}
else
{
lean_object* v_value_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; 
v_value_5579_ = lean_ctor_get(v_path_5560_, 0);
lean_inc(v_value_5579_);
lean_dec_ref_known(v_path_5560_, 1);
v___x_5580_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5581_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5581_, 0, v_value_5579_);
lean_ctor_set(v___x_5581_, 1, v___x_5580_);
v___y_5566_ = v___x_5581_;
goto v___jp_5565_;
}
v___jp_5565_:
{
lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; 
v___x_5567_ = lean_mk_empty_array_with_capacity(v___x_5563_);
v___x_5568_ = lean_array_push(v___x_5567_, v___y_5566_);
v___x_5569_ = l_Lasm_JS_Web_Support_args(v___x_5568_);
v___x_5570_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_5564_, v___x_5569_, v___x_5562_);
return v___x_5570_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readFileSync___boxed(lean_object* v_path_5582_, lean_object* v_a_5583_){
_start:
{
lean_object* v_res_5584_; 
v_res_5584_ = l_Lasm_JS_Deno_readFileSync(v_path_5582_);
return v_res_5584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath(lean_object* v_path_5593_){
_start:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___y_5598_; 
v___x_5595_ = lean_unsigned_to_nat(1u);
v___x_5596_ = ((lean_object*)(l_Lasm_JS_Deno_realPath___closed__2));
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPath___boxed(lean_object* v_path_5614_, lean_object* v_a_5615_){
_start:
{
lean_object* v_res_5616_; 
v_res_5616_ = l_Lasm_JS_Deno_realPath(v_path_5614_);
return v_res_5616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync(lean_object* v_path_5625_){
_start:
{
uint8_t v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___y_5631_; 
v___x_5627_ = 0;
v___x_5628_ = lean_unsigned_to_nat(1u);
v___x_5629_ = ((lean_object*)(l_Lasm_JS_Deno_realPathSync___closed__2));
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_realPathSync___boxed(lean_object* v_path_5647_, lean_object* v_a_5648_){
_start:
{
lean_object* v_res_5649_; 
v_res_5649_ = l_Lasm_JS_Deno_realPathSync(v_path_5647_);
return v_res_5649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir(lean_object* v_path_5658_){
_start:
{
uint8_t v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___y_5664_; 
v___x_5660_ = 0;
v___x_5661_ = lean_unsigned_to_nat(1u);
v___x_5662_ = ((lean_object*)(l_Lasm_JS_Deno_readDir___closed__2));
if (lean_obj_tag(v_path_5658_) == 0)
{
lean_object* v_value_5685_; lean_object* v___x_5687_; uint8_t v_isShared_5688_; uint8_t v_isSharedCheck_5692_; 
v_value_5685_ = lean_ctor_get(v_path_5658_, 0);
v_isSharedCheck_5692_ = !lean_is_exclusive(v_path_5658_);
if (v_isSharedCheck_5692_ == 0)
{
v___x_5687_ = v_path_5658_;
v_isShared_5688_ = v_isSharedCheck_5692_;
goto v_resetjp_5686_;
}
else
{
lean_inc(v_value_5685_);
lean_dec(v_path_5658_);
v___x_5687_ = lean_box(0);
v_isShared_5688_ = v_isSharedCheck_5692_;
goto v_resetjp_5686_;
}
v_resetjp_5686_:
{
lean_object* v___x_5690_; 
if (v_isShared_5688_ == 0)
{
lean_ctor_set_tag(v___x_5687_, 4);
v___x_5690_ = v___x_5687_;
goto v_reusejp_5689_;
}
else
{
lean_object* v_reuseFailAlloc_5691_; 
v_reuseFailAlloc_5691_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5691_, 0, v_value_5685_);
v___x_5690_ = v_reuseFailAlloc_5691_;
goto v_reusejp_5689_;
}
v_reusejp_5689_:
{
v___y_5664_ = v___x_5690_;
goto v___jp_5663_;
}
}
}
else
{
lean_object* v_value_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; 
v_value_5693_ = lean_ctor_get(v_path_5658_, 0);
lean_inc(v_value_5693_);
lean_dec_ref_known(v_path_5658_, 1);
v___x_5694_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5695_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5695_, 0, v_value_5693_);
lean_ctor_set(v___x_5695_, 1, v___x_5694_);
v___y_5664_ = v___x_5695_;
goto v___jp_5663_;
}
v___jp_5663_:
{
lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; 
v___x_5665_ = lean_mk_empty_array_with_capacity(v___x_5661_);
v___x_5666_ = lean_array_push(v___x_5665_, v___y_5664_);
v___x_5667_ = l_Lasm_JS_Web_Support_args(v___x_5666_);
v___x_5668_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_5662_, v___x_5667_, v___x_5660_);
if (lean_obj_tag(v___x_5668_) == 0)
{
lean_object* v_a_5669_; lean_object* v___x_5671_; uint8_t v_isShared_5672_; uint8_t v_isSharedCheck_5676_; 
v_a_5669_ = lean_ctor_get(v___x_5668_, 0);
v_isSharedCheck_5676_ = !lean_is_exclusive(v___x_5668_);
if (v_isSharedCheck_5676_ == 0)
{
v___x_5671_ = v___x_5668_;
v_isShared_5672_ = v_isSharedCheck_5676_;
goto v_resetjp_5670_;
}
else
{
lean_inc(v_a_5669_);
lean_dec(v___x_5668_);
v___x_5671_ = lean_box(0);
v_isShared_5672_ = v_isSharedCheck_5676_;
goto v_resetjp_5670_;
}
v_resetjp_5670_:
{
lean_object* v___x_5674_; 
if (v_isShared_5672_ == 0)
{
v___x_5674_ = v___x_5671_;
goto v_reusejp_5673_;
}
else
{
lean_object* v_reuseFailAlloc_5675_; 
v_reuseFailAlloc_5675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5675_, 0, v_a_5669_);
v___x_5674_ = v_reuseFailAlloc_5675_;
goto v_reusejp_5673_;
}
v_reusejp_5673_:
{
return v___x_5674_;
}
}
}
else
{
lean_object* v_a_5677_; lean_object* v___x_5679_; uint8_t v_isShared_5680_; uint8_t v_isSharedCheck_5684_; 
v_a_5677_ = lean_ctor_get(v___x_5668_, 0);
v_isSharedCheck_5684_ = !lean_is_exclusive(v___x_5668_);
if (v_isSharedCheck_5684_ == 0)
{
v___x_5679_ = v___x_5668_;
v_isShared_5680_ = v_isSharedCheck_5684_;
goto v_resetjp_5678_;
}
else
{
lean_inc(v_a_5677_);
lean_dec(v___x_5668_);
v___x_5679_ = lean_box(0);
v_isShared_5680_ = v_isSharedCheck_5684_;
goto v_resetjp_5678_;
}
v_resetjp_5678_:
{
lean_object* v___x_5682_; 
if (v_isShared_5680_ == 0)
{
v___x_5682_ = v___x_5679_;
goto v_reusejp_5681_;
}
else
{
lean_object* v_reuseFailAlloc_5683_; 
v_reuseFailAlloc_5683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5683_, 0, v_a_5677_);
v___x_5682_ = v_reuseFailAlloc_5683_;
goto v_reusejp_5681_;
}
v_reusejp_5681_:
{
return v___x_5682_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readDir___boxed(lean_object* v_path_5696_, lean_object* v_a_5697_){
_start:
{
lean_object* v_res_5698_; 
v_res_5698_ = l_Lasm_JS_Deno_readDir(v_path_5696_);
return v_res_5698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile(lean_object* v_fromPath_5707_, lean_object* v_toPath_5708_){
_start:
{
lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___y_5713_; lean_object* v___y_5714_; lean_object* v___y_5721_; 
v___x_5710_ = lean_unsigned_to_nat(2u);
v___x_5711_ = ((lean_object*)(l_Lasm_JS_Deno_copyFile___closed__2));
if (lean_obj_tag(v_fromPath_5707_) == 0)
{
lean_object* v_value_5733_; lean_object* v___x_5735_; uint8_t v_isShared_5736_; uint8_t v_isSharedCheck_5740_; 
v_value_5733_ = lean_ctor_get(v_fromPath_5707_, 0);
v_isSharedCheck_5740_ = !lean_is_exclusive(v_fromPath_5707_);
if (v_isSharedCheck_5740_ == 0)
{
v___x_5735_ = v_fromPath_5707_;
v_isShared_5736_ = v_isSharedCheck_5740_;
goto v_resetjp_5734_;
}
else
{
lean_inc(v_value_5733_);
lean_dec(v_fromPath_5707_);
v___x_5735_ = lean_box(0);
v_isShared_5736_ = v_isSharedCheck_5740_;
goto v_resetjp_5734_;
}
v_resetjp_5734_:
{
lean_object* v___x_5738_; 
if (v_isShared_5736_ == 0)
{
lean_ctor_set_tag(v___x_5735_, 4);
v___x_5738_ = v___x_5735_;
goto v_reusejp_5737_;
}
else
{
lean_object* v_reuseFailAlloc_5739_; 
v_reuseFailAlloc_5739_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5739_, 0, v_value_5733_);
v___x_5738_ = v_reuseFailAlloc_5739_;
goto v_reusejp_5737_;
}
v_reusejp_5737_:
{
v___y_5721_ = v___x_5738_;
goto v___jp_5720_;
}
}
}
else
{
lean_object* v_value_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; 
v_value_5741_ = lean_ctor_get(v_fromPath_5707_, 0);
lean_inc(v_value_5741_);
lean_dec_ref_known(v_fromPath_5707_, 1);
v___x_5742_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5743_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5743_, 0, v_value_5741_);
lean_ctor_set(v___x_5743_, 1, v___x_5742_);
v___y_5721_ = v___x_5743_;
goto v___jp_5720_;
}
v___jp_5712_:
{
lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; 
v___x_5715_ = lean_mk_empty_array_with_capacity(v___x_5710_);
v___x_5716_ = lean_array_push(v___x_5715_, v___y_5713_);
v___x_5717_ = lean_array_push(v___x_5716_, v___y_5714_);
v___x_5718_ = l_Lasm_JS_Web_Support_args(v___x_5717_);
v___x_5719_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_5711_, v___x_5718_);
return v___x_5719_;
}
v___jp_5720_:
{
if (lean_obj_tag(v_toPath_5708_) == 0)
{
lean_object* v_value_5722_; lean_object* v___x_5724_; uint8_t v_isShared_5725_; uint8_t v_isSharedCheck_5729_; 
v_value_5722_ = lean_ctor_get(v_toPath_5708_, 0);
v_isSharedCheck_5729_ = !lean_is_exclusive(v_toPath_5708_);
if (v_isSharedCheck_5729_ == 0)
{
v___x_5724_ = v_toPath_5708_;
v_isShared_5725_ = v_isSharedCheck_5729_;
goto v_resetjp_5723_;
}
else
{
lean_inc(v_value_5722_);
lean_dec(v_toPath_5708_);
v___x_5724_ = lean_box(0);
v_isShared_5725_ = v_isSharedCheck_5729_;
goto v_resetjp_5723_;
}
v_resetjp_5723_:
{
lean_object* v___x_5727_; 
if (v_isShared_5725_ == 0)
{
lean_ctor_set_tag(v___x_5724_, 4);
v___x_5727_ = v___x_5724_;
goto v_reusejp_5726_;
}
else
{
lean_object* v_reuseFailAlloc_5728_; 
v_reuseFailAlloc_5728_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5728_, 0, v_value_5722_);
v___x_5727_ = v_reuseFailAlloc_5728_;
goto v_reusejp_5726_;
}
v_reusejp_5726_:
{
v___y_5713_ = v___y_5721_;
v___y_5714_ = v___x_5727_;
goto v___jp_5712_;
}
}
}
else
{
lean_object* v_value_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; 
v_value_5730_ = lean_ctor_get(v_toPath_5708_, 0);
lean_inc(v_value_5730_);
lean_dec_ref_known(v_toPath_5708_, 1);
v___x_5731_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5732_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5732_, 0, v_value_5730_);
lean_ctor_set(v___x_5732_, 1, v___x_5731_);
v___y_5713_ = v___y_5721_;
v___y_5714_ = v___x_5732_;
goto v___jp_5712_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFile___boxed(lean_object* v_fromPath_5744_, lean_object* v_toPath_5745_, lean_object* v_a_5746_){
_start:
{
lean_object* v_res_5747_; 
v_res_5747_ = l_Lasm_JS_Deno_copyFile(v_fromPath_5744_, v_toPath_5745_);
return v_res_5747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync(lean_object* v_fromPath_5756_, lean_object* v_toPath_5757_){
_start:
{
uint8_t v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___y_5763_; lean_object* v___y_5764_; lean_object* v___y_5771_; 
v___x_5759_ = 0;
v___x_5760_ = lean_unsigned_to_nat(2u);
v___x_5761_ = ((lean_object*)(l_Lasm_JS_Deno_copyFileSync___closed__2));
if (lean_obj_tag(v_fromPath_5756_) == 0)
{
lean_object* v_value_5783_; lean_object* v___x_5785_; uint8_t v_isShared_5786_; uint8_t v_isSharedCheck_5790_; 
v_value_5783_ = lean_ctor_get(v_fromPath_5756_, 0);
v_isSharedCheck_5790_ = !lean_is_exclusive(v_fromPath_5756_);
if (v_isSharedCheck_5790_ == 0)
{
v___x_5785_ = v_fromPath_5756_;
v_isShared_5786_ = v_isSharedCheck_5790_;
goto v_resetjp_5784_;
}
else
{
lean_inc(v_value_5783_);
lean_dec(v_fromPath_5756_);
v___x_5785_ = lean_box(0);
v_isShared_5786_ = v_isSharedCheck_5790_;
goto v_resetjp_5784_;
}
v_resetjp_5784_:
{
lean_object* v___x_5788_; 
if (v_isShared_5786_ == 0)
{
lean_ctor_set_tag(v___x_5785_, 4);
v___x_5788_ = v___x_5785_;
goto v_reusejp_5787_;
}
else
{
lean_object* v_reuseFailAlloc_5789_; 
v_reuseFailAlloc_5789_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5789_, 0, v_value_5783_);
v___x_5788_ = v_reuseFailAlloc_5789_;
goto v_reusejp_5787_;
}
v_reusejp_5787_:
{
v___y_5771_ = v___x_5788_;
goto v___jp_5770_;
}
}
}
else
{
lean_object* v_value_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; 
v_value_5791_ = lean_ctor_get(v_fromPath_5756_, 0);
lean_inc(v_value_5791_);
lean_dec_ref_known(v_fromPath_5756_, 1);
v___x_5792_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5793_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5793_, 0, v_value_5791_);
lean_ctor_set(v___x_5793_, 1, v___x_5792_);
v___y_5771_ = v___x_5793_;
goto v___jp_5770_;
}
v___jp_5762_:
{
lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; 
v___x_5765_ = lean_mk_empty_array_with_capacity(v___x_5760_);
v___x_5766_ = lean_array_push(v___x_5765_, v___y_5763_);
v___x_5767_ = lean_array_push(v___x_5766_, v___y_5764_);
v___x_5768_ = l_Lasm_JS_Web_Support_args(v___x_5767_);
v___x_5769_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5761_, v___x_5768_, v___x_5759_);
return v___x_5769_;
}
v___jp_5770_:
{
if (lean_obj_tag(v_toPath_5757_) == 0)
{
lean_object* v_value_5772_; lean_object* v___x_5774_; uint8_t v_isShared_5775_; uint8_t v_isSharedCheck_5779_; 
v_value_5772_ = lean_ctor_get(v_toPath_5757_, 0);
v_isSharedCheck_5779_ = !lean_is_exclusive(v_toPath_5757_);
if (v_isSharedCheck_5779_ == 0)
{
v___x_5774_ = v_toPath_5757_;
v_isShared_5775_ = v_isSharedCheck_5779_;
goto v_resetjp_5773_;
}
else
{
lean_inc(v_value_5772_);
lean_dec(v_toPath_5757_);
v___x_5774_ = lean_box(0);
v_isShared_5775_ = v_isSharedCheck_5779_;
goto v_resetjp_5773_;
}
v_resetjp_5773_:
{
lean_object* v___x_5777_; 
if (v_isShared_5775_ == 0)
{
lean_ctor_set_tag(v___x_5774_, 4);
v___x_5777_ = v___x_5774_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5778_; 
v_reuseFailAlloc_5778_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5778_, 0, v_value_5772_);
v___x_5777_ = v_reuseFailAlloc_5778_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
v___y_5763_ = v___y_5771_;
v___y_5764_ = v___x_5777_;
goto v___jp_5762_;
}
}
}
else
{
lean_object* v_value_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; 
v_value_5780_ = lean_ctor_get(v_toPath_5757_, 0);
lean_inc(v_value_5780_);
lean_dec_ref_known(v_toPath_5757_, 1);
v___x_5781_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5782_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5782_, 0, v_value_5780_);
lean_ctor_set(v___x_5782_, 1, v___x_5781_);
v___y_5763_ = v___y_5771_;
v___y_5764_ = v___x_5782_;
goto v___jp_5762_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_copyFileSync___boxed(lean_object* v_fromPath_5794_, lean_object* v_toPath_5795_, lean_object* v_a_5796_){
_start:
{
lean_object* v_res_5797_; 
v_res_5797_ = l_Lasm_JS_Deno_copyFileSync(v_fromPath_5794_, v_toPath_5795_);
return v_res_5797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink(lean_object* v_path_5806_){
_start:
{
lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___y_5811_; 
v___x_5808_ = lean_unsigned_to_nat(1u);
v___x_5809_ = ((lean_object*)(l_Lasm_JS_Deno_readLink___closed__2));
if (lean_obj_tag(v_path_5806_) == 0)
{
lean_object* v_value_5816_; lean_object* v___x_5818_; uint8_t v_isShared_5819_; uint8_t v_isSharedCheck_5823_; 
v_value_5816_ = lean_ctor_get(v_path_5806_, 0);
v_isSharedCheck_5823_ = !lean_is_exclusive(v_path_5806_);
if (v_isSharedCheck_5823_ == 0)
{
v___x_5818_ = v_path_5806_;
v_isShared_5819_ = v_isSharedCheck_5823_;
goto v_resetjp_5817_;
}
else
{
lean_inc(v_value_5816_);
lean_dec(v_path_5806_);
v___x_5818_ = lean_box(0);
v_isShared_5819_ = v_isSharedCheck_5823_;
goto v_resetjp_5817_;
}
v_resetjp_5817_:
{
lean_object* v___x_5821_; 
if (v_isShared_5819_ == 0)
{
lean_ctor_set_tag(v___x_5818_, 4);
v___x_5821_ = v___x_5818_;
goto v_reusejp_5820_;
}
else
{
lean_object* v_reuseFailAlloc_5822_; 
v_reuseFailAlloc_5822_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5822_, 0, v_value_5816_);
v___x_5821_ = v_reuseFailAlloc_5822_;
goto v_reusejp_5820_;
}
v_reusejp_5820_:
{
v___y_5811_ = v___x_5821_;
goto v___jp_5810_;
}
}
}
else
{
lean_object* v_value_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; 
v_value_5824_ = lean_ctor_get(v_path_5806_, 0);
lean_inc(v_value_5824_);
lean_dec_ref_known(v_path_5806_, 1);
v___x_5825_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5826_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5826_, 0, v_value_5824_);
lean_ctor_set(v___x_5826_, 1, v___x_5825_);
v___y_5811_ = v___x_5826_;
goto v___jp_5810_;
}
v___jp_5810_:
{
lean_object* v___x_5812_; lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5815_; 
v___x_5812_ = lean_mk_empty_array_with_capacity(v___x_5808_);
v___x_5813_ = lean_array_push(v___x_5812_, v___y_5811_);
v___x_5814_ = l_Lasm_JS_Web_Support_args(v___x_5813_);
v___x_5815_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_makeTempDir_spec__1(v___x_5809_, v___x_5814_);
return v___x_5815_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLink___boxed(lean_object* v_path_5827_, lean_object* v_a_5828_){
_start:
{
lean_object* v_res_5829_; 
v_res_5829_ = l_Lasm_JS_Deno_readLink(v_path_5827_);
return v_res_5829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync(lean_object* v_path_5838_){
_start:
{
uint8_t v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___y_5844_; 
v___x_5840_ = 0;
v___x_5841_ = lean_unsigned_to_nat(1u);
v___x_5842_ = ((lean_object*)(l_Lasm_JS_Deno_readLinkSync___closed__2));
if (lean_obj_tag(v_path_5838_) == 0)
{
lean_object* v_value_5849_; lean_object* v___x_5851_; uint8_t v_isShared_5852_; uint8_t v_isSharedCheck_5856_; 
v_value_5849_ = lean_ctor_get(v_path_5838_, 0);
v_isSharedCheck_5856_ = !lean_is_exclusive(v_path_5838_);
if (v_isSharedCheck_5856_ == 0)
{
v___x_5851_ = v_path_5838_;
v_isShared_5852_ = v_isSharedCheck_5856_;
goto v_resetjp_5850_;
}
else
{
lean_inc(v_value_5849_);
lean_dec(v_path_5838_);
v___x_5851_ = lean_box(0);
v_isShared_5852_ = v_isSharedCheck_5856_;
goto v_resetjp_5850_;
}
v_resetjp_5850_:
{
lean_object* v___x_5854_; 
if (v_isShared_5852_ == 0)
{
lean_ctor_set_tag(v___x_5851_, 4);
v___x_5854_ = v___x_5851_;
goto v_reusejp_5853_;
}
else
{
lean_object* v_reuseFailAlloc_5855_; 
v_reuseFailAlloc_5855_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5855_, 0, v_value_5849_);
v___x_5854_ = v_reuseFailAlloc_5855_;
goto v_reusejp_5853_;
}
v_reusejp_5853_:
{
v___y_5844_ = v___x_5854_;
goto v___jp_5843_;
}
}
}
else
{
lean_object* v_value_5857_; lean_object* v___x_5858_; lean_object* v___x_5859_; 
v_value_5857_ = lean_ctor_get(v_path_5838_, 0);
lean_inc(v_value_5857_);
lean_dec_ref_known(v_path_5838_, 1);
v___x_5858_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5859_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5859_, 0, v_value_5857_);
lean_ctor_set(v___x_5859_, 1, v___x_5858_);
v___y_5844_ = v___x_5859_;
goto v___jp_5843_;
}
v___jp_5843_:
{
lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; 
v___x_5845_ = lean_mk_empty_array_with_capacity(v___x_5841_);
v___x_5846_ = lean_array_push(v___x_5845_, v___y_5844_);
v___x_5847_ = l_Lasm_JS_Web_Support_args(v___x_5846_);
v___x_5848_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_inspect_spec__1(v___x_5842_, v___x_5847_, v___x_5840_);
return v___x_5848_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_readLinkSync___boxed(lean_object* v_path_5860_, lean_object* v_a_5861_){
_start:
{
lean_object* v_res_5862_; 
v_res_5862_ = l_Lasm_JS_Deno_readLinkSync(v_path_5860_);
return v_res_5862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(lean_object* v_b_5863_, lean_object* v_args_5864_){
_start:
{
uint8_t v_construct_5866_; lean_object* v___x_5867_; uint32_t v___x_5868_; uint64_t v___x_5869_; uint64_t v___y_5871_; 
v_construct_5866_ = lean_ctor_get_uint8(v_b_5863_, sizeof(void*)*4);
v___x_5867_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5863_);
v___x_5868_ = 214;
v___x_5869_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_construct_5866_ == 0)
{
uint64_t v___x_5879_; 
v___x_5879_ = 0ULL;
v___y_5871_ = v___x_5879_;
goto v___jp_5870_;
}
else
{
uint64_t v___x_5880_; 
v___x_5880_ = 4ULL;
v___y_5871_ = v___x_5880_;
goto v___jp_5870_;
}
v___jp_5870_:
{
uint64_t v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; 
v___x_5872_ = lean_uint64_lor(v___x_5869_, v___y_5871_);
v___x_5873_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5863_, v_args_5864_);
v___x_5874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5875_ = lean_string_append(v___x_5874_, v___x_5867_);
v___x_5876_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5877_ = lean_string_append(v___x_5875_, v___x_5876_);
v___x_5878_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1(v___x_5867_, v___x_5868_, v___x_5872_, v___x_5873_, v___x_5877_);
return v___x_5878_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0___boxed(lean_object* v_b_5881_, lean_object* v_args_5882_, lean_object* v_a_5883_){
_start:
{
lean_object* v_res_5884_; 
v_res_5884_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v_b_5881_, v_args_5882_);
lean_dec_ref(v_b_5881_);
return v_res_5884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat(lean_object* v_path_5893_){
_start:
{
lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___y_5898_; 
v___x_5895_ = lean_unsigned_to_nat(1u);
v___x_5896_ = ((lean_object*)(l_Lasm_JS_Deno_lstat___closed__2));
if (lean_obj_tag(v_path_5893_) == 0)
{
lean_object* v_value_5903_; lean_object* v___x_5905_; uint8_t v_isShared_5906_; uint8_t v_isSharedCheck_5910_; 
v_value_5903_ = lean_ctor_get(v_path_5893_, 0);
v_isSharedCheck_5910_ = !lean_is_exclusive(v_path_5893_);
if (v_isSharedCheck_5910_ == 0)
{
v___x_5905_ = v_path_5893_;
v_isShared_5906_ = v_isSharedCheck_5910_;
goto v_resetjp_5904_;
}
else
{
lean_inc(v_value_5903_);
lean_dec(v_path_5893_);
v___x_5905_ = lean_box(0);
v_isShared_5906_ = v_isSharedCheck_5910_;
goto v_resetjp_5904_;
}
v_resetjp_5904_:
{
lean_object* v___x_5908_; 
if (v_isShared_5906_ == 0)
{
lean_ctor_set_tag(v___x_5905_, 4);
v___x_5908_ = v___x_5905_;
goto v_reusejp_5907_;
}
else
{
lean_object* v_reuseFailAlloc_5909_; 
v_reuseFailAlloc_5909_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5909_, 0, v_value_5903_);
v___x_5908_ = v_reuseFailAlloc_5909_;
goto v_reusejp_5907_;
}
v_reusejp_5907_:
{
v___y_5898_ = v___x_5908_;
goto v___jp_5897_;
}
}
}
else
{
lean_object* v_value_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; 
v_value_5911_ = lean_ctor_get(v_path_5893_, 0);
lean_inc(v_value_5911_);
lean_dec_ref_known(v_path_5893_, 1);
v___x_5912_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_5913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5913_, 0, v_value_5911_);
lean_ctor_set(v___x_5913_, 1, v___x_5912_);
v___y_5898_ = v___x_5913_;
goto v___jp_5897_;
}
v___jp_5897_:
{
lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; 
v___x_5899_ = lean_mk_empty_array_with_capacity(v___x_5895_);
v___x_5900_ = lean_array_push(v___x_5899_, v___y_5898_);
v___x_5901_ = l_Lasm_JS_Web_Support_args(v___x_5900_);
v___x_5902_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_5896_, v___x_5901_);
return v___x_5902_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstat___boxed(lean_object* v_path_5914_, lean_object* v_a_5915_){
_start:
{
lean_object* v_res_5916_; 
v_res_5916_ = l_Lasm_JS_Deno_lstat(v_path_5914_);
return v_res_5916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(lean_object* v_b_5917_, lean_object* v_args_5918_, uint8_t v_await_5919_){
_start:
{
uint64_t v___y_5922_; uint64_t v___y_5923_; uint64_t v___x_5966_; uint64_t v___y_5968_; 
v___x_5966_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_seek_spec__0_spec__0___closed__0);
if (v_await_5919_ == 0)
{
uint64_t v___x_5973_; 
v___x_5973_ = 0ULL;
v___y_5968_ = v___x_5973_;
goto v___jp_5967_;
}
else
{
uint64_t v___x_5974_; 
v___x_5974_ = 2ULL;
v___y_5968_ = v___x_5974_;
goto v___jp_5967_;
}
v___jp_5921_:
{
uint64_t v_flags_5924_; uint32_t v___x_5925_; lean_object* v___x_5926_; uint32_t v___x_5927_; lean_object* v___x_5928_; 
v_flags_5924_ = lean_uint64_lor(v___y_5922_, v___y_5923_);
v___x_5925_ = 214;
v___x_5926_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5917_, v_args_5918_);
v___x_5927_ = 0;
v___x_5928_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5925_, v_flags_5924_, v___x_5926_, v___x_5927_);
lean_dec(v___x_5926_);
if (lean_obj_tag(v___x_5928_) == 0)
{
if (lean_obj_tag(v___x_5928_) == 0)
{
lean_object* v_a_5929_; lean_object* v___x_5930_; 
v_a_5929_ = lean_ctor_get(v___x_5928_, 0);
lean_inc(v_a_5929_);
lean_dec_ref_known(v___x_5928_, 1);
v___x_5930_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5929_);
lean_dec(v_a_5929_);
if (lean_obj_tag(v___x_5930_) == 0)
{
lean_object* v_a_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; 
v_a_5931_ = lean_ctor_get(v___x_5930_, 0);
lean_inc(v_a_5931_);
lean_dec_ref_known(v___x_5930_, 1);
v___x_5932_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5917_);
v___x_5933_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2(v___x_5932_, v_a_5931_);
lean_dec_ref(v___x_5932_);
return v___x_5933_;
}
else
{
lean_object* v_a_5934_; lean_object* v___x_5936_; uint8_t v_isShared_5937_; uint8_t v_isSharedCheck_5941_; 
v_a_5934_ = lean_ctor_get(v___x_5930_, 0);
v_isSharedCheck_5941_ = !lean_is_exclusive(v___x_5930_);
if (v_isSharedCheck_5941_ == 0)
{
v___x_5936_ = v___x_5930_;
v_isShared_5937_ = v_isSharedCheck_5941_;
goto v_resetjp_5935_;
}
else
{
lean_inc(v_a_5934_);
lean_dec(v___x_5930_);
v___x_5936_ = lean_box(0);
v_isShared_5937_ = v_isSharedCheck_5941_;
goto v_resetjp_5935_;
}
v_resetjp_5935_:
{
lean_object* v___x_5939_; 
if (v_isShared_5937_ == 0)
{
v___x_5939_ = v___x_5936_;
goto v_reusejp_5938_;
}
else
{
lean_object* v_reuseFailAlloc_5940_; 
v_reuseFailAlloc_5940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5940_, 0, v_a_5934_);
v___x_5939_ = v_reuseFailAlloc_5940_;
goto v_reusejp_5938_;
}
v_reusejp_5938_:
{
return v___x_5939_;
}
}
}
}
else
{
lean_object* v_a_5942_; lean_object* v___x_5944_; uint8_t v_isShared_5945_; uint8_t v_isSharedCheck_5949_; 
v_a_5942_ = lean_ctor_get(v___x_5928_, 0);
v_isSharedCheck_5949_ = !lean_is_exclusive(v___x_5928_);
if (v_isSharedCheck_5949_ == 0)
{
v___x_5944_ = v___x_5928_;
v_isShared_5945_ = v_isSharedCheck_5949_;
goto v_resetjp_5943_;
}
else
{
lean_inc(v_a_5942_);
lean_dec(v___x_5928_);
v___x_5944_ = lean_box(0);
v_isShared_5945_ = v_isSharedCheck_5949_;
goto v_resetjp_5943_;
}
v_resetjp_5943_:
{
lean_object* v___x_5947_; 
if (v_isShared_5945_ == 0)
{
lean_ctor_set_tag(v___x_5944_, 1);
v___x_5947_ = v___x_5944_;
goto v_reusejp_5946_;
}
else
{
lean_object* v_reuseFailAlloc_5948_; 
v_reuseFailAlloc_5948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5948_, 0, v_a_5942_);
v___x_5947_ = v_reuseFailAlloc_5948_;
goto v_reusejp_5946_;
}
v_reusejp_5946_:
{
return v___x_5947_;
}
}
}
}
else
{
lean_object* v_a_5950_; lean_object* v___x_5952_; uint8_t v_isShared_5953_; uint8_t v_isSharedCheck_5965_; 
v_a_5950_ = lean_ctor_get(v___x_5928_, 0);
v_isSharedCheck_5965_ = !lean_is_exclusive(v___x_5928_);
if (v_isSharedCheck_5965_ == 0)
{
v___x_5952_ = v___x_5928_;
v_isShared_5953_ = v_isSharedCheck_5965_;
goto v_resetjp_5951_;
}
else
{
lean_inc(v_a_5950_);
lean_dec(v___x_5928_);
v___x_5952_ = lean_box(0);
v_isShared_5953_ = v_isSharedCheck_5965_;
goto v_resetjp_5951_;
}
v_resetjp_5951_:
{
lean_object* v___x_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5963_; 
v___x_5954_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_FsFile_stat_spec__0_spec__1_spec__2___closed__0));
v___x_5955_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5917_);
v___x_5956_ = lean_string_append(v___x_5954_, v___x_5955_);
lean_dec_ref(v___x_5955_);
v___x_5957_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_FsWatcher_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5958_ = lean_string_append(v___x_5956_, v___x_5957_);
v___x_5959_ = lean_io_error_to_string(v_a_5950_);
v___x_5960_ = lean_string_append(v___x_5958_, v___x_5959_);
lean_dec_ref(v___x_5959_);
v___x_5961_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5961_, 0, v___x_5960_);
if (v_isShared_5953_ == 0)
{
lean_ctor_set(v___x_5952_, 0, v___x_5961_);
v___x_5963_ = v___x_5952_;
goto v_reusejp_5962_;
}
else
{
lean_object* v_reuseFailAlloc_5964_; 
v_reuseFailAlloc_5964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5964_, 0, v___x_5961_);
v___x_5963_ = v_reuseFailAlloc_5964_;
goto v_reusejp_5962_;
}
v_reusejp_5962_:
{
return v___x_5963_;
}
}
}
}
v___jp_5967_:
{
uint8_t v_construct_5969_; uint64_t v___x_5970_; 
v_construct_5969_ = lean_ctor_get_uint8(v_b_5917_, sizeof(void*)*4);
v___x_5970_ = lean_uint64_lor(v___x_5966_, v___y_5968_);
if (v_construct_5969_ == 0)
{
uint64_t v___x_5971_; 
v___x_5971_ = 0ULL;
v___y_5922_ = v___x_5970_;
v___y_5923_ = v___x_5971_;
goto v___jp_5921_;
}
else
{
uint64_t v___x_5972_; 
v___x_5972_ = 4ULL;
v___y_5922_ = v___x_5970_;
v___y_5923_ = v___x_5972_;
goto v___jp_5921_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0___boxed(lean_object* v_b_5975_, lean_object* v_args_5976_, lean_object* v_await_5977_, lean_object* v_a_5978_){
_start:
{
uint8_t v_await_boxed_5979_; lean_object* v_res_5980_; 
v_await_boxed_5979_ = lean_unbox(v_await_5977_);
v_res_5980_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v_b_5975_, v_args_5976_, v_await_boxed_5979_);
lean_dec_ref(v_b_5975_);
return v_res_5980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync(lean_object* v_path_5989_){
_start:
{
uint8_t v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___y_5995_; 
v___x_5991_ = 0;
v___x_5992_ = lean_unsigned_to_nat(1u);
v___x_5993_ = ((lean_object*)(l_Lasm_JS_Deno_lstatSync___closed__2));
if (lean_obj_tag(v_path_5989_) == 0)
{
lean_object* v_value_6000_; lean_object* v___x_6002_; uint8_t v_isShared_6003_; uint8_t v_isSharedCheck_6007_; 
v_value_6000_ = lean_ctor_get(v_path_5989_, 0);
v_isSharedCheck_6007_ = !lean_is_exclusive(v_path_5989_);
if (v_isSharedCheck_6007_ == 0)
{
v___x_6002_ = v_path_5989_;
v_isShared_6003_ = v_isSharedCheck_6007_;
goto v_resetjp_6001_;
}
else
{
lean_inc(v_value_6000_);
lean_dec(v_path_5989_);
v___x_6002_ = lean_box(0);
v_isShared_6003_ = v_isSharedCheck_6007_;
goto v_resetjp_6001_;
}
v_resetjp_6001_:
{
lean_object* v___x_6005_; 
if (v_isShared_6003_ == 0)
{
lean_ctor_set_tag(v___x_6002_, 4);
v___x_6005_ = v___x_6002_;
goto v_reusejp_6004_;
}
else
{
lean_object* v_reuseFailAlloc_6006_; 
v_reuseFailAlloc_6006_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6006_, 0, v_value_6000_);
v___x_6005_ = v_reuseFailAlloc_6006_;
goto v_reusejp_6004_;
}
v_reusejp_6004_:
{
v___y_5995_ = v___x_6005_;
goto v___jp_5994_;
}
}
}
else
{
lean_object* v_value_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; 
v_value_6008_ = lean_ctor_get(v_path_5989_, 0);
lean_inc(v_value_6008_);
lean_dec_ref_known(v_path_5989_, 1);
v___x_6009_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6010_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6010_, 0, v_value_6008_);
lean_ctor_set(v___x_6010_, 1, v___x_6009_);
v___y_5995_ = v___x_6010_;
goto v___jp_5994_;
}
v___jp_5994_:
{
lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; 
v___x_5996_ = lean_mk_empty_array_with_capacity(v___x_5992_);
v___x_5997_ = lean_array_push(v___x_5996_, v___y_5995_);
v___x_5998_ = l_Lasm_JS_Web_Support_args(v___x_5997_);
v___x_5999_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_5993_, v___x_5998_, v___x_5991_);
return v___x_5999_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_lstatSync___boxed(lean_object* v_path_6011_, lean_object* v_a_6012_){
_start:
{
lean_object* v_res_6013_; 
v_res_6013_ = l_Lasm_JS_Deno_lstatSync(v_path_6011_);
return v_res_6013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat(lean_object* v_path_6022_){
_start:
{
lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___y_6027_; 
v___x_6024_ = lean_unsigned_to_nat(1u);
v___x_6025_ = ((lean_object*)(l_Lasm_JS_Deno_stat___closed__2));
if (lean_obj_tag(v_path_6022_) == 0)
{
lean_object* v_value_6032_; lean_object* v___x_6034_; uint8_t v_isShared_6035_; uint8_t v_isSharedCheck_6039_; 
v_value_6032_ = lean_ctor_get(v_path_6022_, 0);
v_isSharedCheck_6039_ = !lean_is_exclusive(v_path_6022_);
if (v_isSharedCheck_6039_ == 0)
{
v___x_6034_ = v_path_6022_;
v_isShared_6035_ = v_isSharedCheck_6039_;
goto v_resetjp_6033_;
}
else
{
lean_inc(v_value_6032_);
lean_dec(v_path_6022_);
v___x_6034_ = lean_box(0);
v_isShared_6035_ = v_isSharedCheck_6039_;
goto v_resetjp_6033_;
}
v_resetjp_6033_:
{
lean_object* v___x_6037_; 
if (v_isShared_6035_ == 0)
{
lean_ctor_set_tag(v___x_6034_, 4);
v___x_6037_ = v___x_6034_;
goto v_reusejp_6036_;
}
else
{
lean_object* v_reuseFailAlloc_6038_; 
v_reuseFailAlloc_6038_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6038_, 0, v_value_6032_);
v___x_6037_ = v_reuseFailAlloc_6038_;
goto v_reusejp_6036_;
}
v_reusejp_6036_:
{
v___y_6027_ = v___x_6037_;
goto v___jp_6026_;
}
}
}
else
{
lean_object* v_value_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; 
v_value_6040_ = lean_ctor_get(v_path_6022_, 0);
lean_inc(v_value_6040_);
lean_dec_ref_known(v_path_6022_, 1);
v___x_6041_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6042_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6042_, 0, v_value_6040_);
lean_ctor_set(v___x_6042_, 1, v___x_6041_);
v___y_6027_ = v___x_6042_;
goto v___jp_6026_;
}
v___jp_6026_:
{
lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; 
v___x_6028_ = lean_mk_empty_array_with_capacity(v___x_6024_);
v___x_6029_ = lean_array_push(v___x_6028_, v___y_6027_);
v___x_6030_ = l_Lasm_JS_Web_Support_args(v___x_6029_);
v___x_6031_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_lstat_spec__0(v___x_6025_, v___x_6030_);
return v___x_6031_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_stat___boxed(lean_object* v_path_6043_, lean_object* v_a_6044_){
_start:
{
lean_object* v_res_6045_; 
v_res_6045_ = l_Lasm_JS_Deno_stat(v_path_6043_);
return v_res_6045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync(lean_object* v_path_6054_){
_start:
{
uint8_t v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___y_6060_; 
v___x_6056_ = 0;
v___x_6057_ = lean_unsigned_to_nat(1u);
v___x_6058_ = ((lean_object*)(l_Lasm_JS_Deno_statSync___closed__2));
if (lean_obj_tag(v_path_6054_) == 0)
{
lean_object* v_value_6065_; lean_object* v___x_6067_; uint8_t v_isShared_6068_; uint8_t v_isSharedCheck_6072_; 
v_value_6065_ = lean_ctor_get(v_path_6054_, 0);
v_isSharedCheck_6072_ = !lean_is_exclusive(v_path_6054_);
if (v_isSharedCheck_6072_ == 0)
{
v___x_6067_ = v_path_6054_;
v_isShared_6068_ = v_isSharedCheck_6072_;
goto v_resetjp_6066_;
}
else
{
lean_inc(v_value_6065_);
lean_dec(v_path_6054_);
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
v___y_6060_ = v___x_6070_;
goto v___jp_6059_;
}
}
}
else
{
lean_object* v_value_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; 
v_value_6073_ = lean_ctor_get(v_path_6054_, 0);
lean_inc(v_value_6073_);
lean_dec_ref_known(v_path_6054_, 1);
v___x_6074_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6075_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6075_, 0, v_value_6073_);
lean_ctor_set(v___x_6075_, 1, v___x_6074_);
v___y_6060_ = v___x_6075_;
goto v___jp_6059_;
}
v___jp_6059_:
{
lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; 
v___x_6061_ = lean_mk_empty_array_with_capacity(v___x_6057_);
v___x_6062_ = lean_array_push(v___x_6061_, v___y_6060_);
v___x_6063_ = l_Lasm_JS_Web_Support_args(v___x_6062_);
v___x_6064_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_lstatSync_spec__0(v___x_6058_, v___x_6063_, v___x_6056_);
return v___x_6064_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_statSync___boxed(lean_object* v_path_6076_, lean_object* v_a_6077_){
_start:
{
lean_object* v_res_6078_; 
v_res_6078_ = l_Lasm_JS_Deno_statSync(v_path_6076_);
return v_res_6078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(lean_object* v_x_6079_){
_start:
{
if (lean_obj_tag(v_x_6079_) == 0)
{
lean_object* v___x_6080_; 
v___x_6080_ = lean_box(0);
return v___x_6080_;
}
else
{
lean_object* v_val_6081_; lean_object* v_append_6082_; lean_object* v_create_6083_; lean_object* v_createNew_6084_; lean_object* v_mode_6085_; lean_object* v_signal_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; 
v_val_6081_ = lean_ctor_get(v_x_6079_, 0);
v_append_6082_ = lean_ctor_get(v_val_6081_, 0);
v_create_6083_ = lean_ctor_get(v_val_6081_, 1);
v_createNew_6084_ = lean_ctor_get(v_val_6081_, 2);
v_mode_6085_ = lean_ctor_get(v_val_6081_, 3);
v_signal_6086_ = lean_ctor_get(v_val_6081_, 4);
v___x_6087_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__2));
v___x_6088_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_append_6082_);
v___x_6089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6089_, 0, v___x_6087_);
lean_ctor_set(v___x_6089_, 1, v___x_6088_);
v___x_6090_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsEventKind___lam__0___closed__4));
v___x_6091_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_create_6083_);
v___x_6092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6092_, 0, v___x_6090_);
lean_ctor_set(v___x_6092_, 1, v___x_6091_);
v___x_6093_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSOpenOptions___lam__0___closed__4));
v___x_6094_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_createNew_6084_);
v___x_6095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6095_, 0, v___x_6093_);
lean_ctor_set(v___x_6095_, 1, v___x_6094_);
v___x_6096_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSFileInfo___lam__0___closed__10));
v___x_6097_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mode_6085_);
v___x_6098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6098_, 0, v___x_6096_);
lean_ctor_set(v___x_6098_, 1, v___x_6097_);
v___x_6099_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSReadFileOptions___lam__0___closed__0));
v___x_6100_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_6086_);
v___x_6101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6101_, 0, v___x_6099_);
lean_ctor_set(v___x_6101_, 1, v___x_6100_);
v___x_6102_ = lean_unsigned_to_nat(5u);
v___x_6103_ = lean_mk_empty_array_with_capacity(v___x_6102_);
v___x_6104_ = lean_array_push(v___x_6103_, v___x_6089_);
v___x_6105_ = lean_array_push(v___x_6104_, v___x_6092_);
v___x_6106_ = lean_array_push(v___x_6105_, v___x_6095_);
v___x_6107_ = lean_array_push(v___x_6106_, v___x_6098_);
v___x_6108_ = lean_array_push(v___x_6107_, v___x_6101_);
v___x_6109_ = l_Lasm_JS_Web_Support_fields(v___x_6108_);
lean_dec_ref(v___x_6108_);
return v___x_6109_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0___boxed(lean_object* v_x_6110_){
_start:
{
lean_object* v_res_6111_; 
v_res_6111_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_x_6110_);
lean_dec(v_x_6110_);
return v_res_6111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile(lean_object* v_path_6120_, lean_object* v_data_6121_, lean_object* v_options_6122_){
_start:
{
lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___y_6127_; lean_object* v___y_6128_; lean_object* v___y_6137_; 
v___x_6124_ = lean_unsigned_to_nat(3u);
v___x_6125_ = ((lean_object*)(l_Lasm_JS_Deno_writeFile___closed__2));
if (lean_obj_tag(v_path_6120_) == 0)
{
lean_object* v_value_6149_; lean_object* v___x_6151_; uint8_t v_isShared_6152_; uint8_t v_isSharedCheck_6156_; 
v_value_6149_ = lean_ctor_get(v_path_6120_, 0);
v_isSharedCheck_6156_ = !lean_is_exclusive(v_path_6120_);
if (v_isSharedCheck_6156_ == 0)
{
v___x_6151_ = v_path_6120_;
v_isShared_6152_ = v_isSharedCheck_6156_;
goto v_resetjp_6150_;
}
else
{
lean_inc(v_value_6149_);
lean_dec(v_path_6120_);
v___x_6151_ = lean_box(0);
v_isShared_6152_ = v_isSharedCheck_6156_;
goto v_resetjp_6150_;
}
v_resetjp_6150_:
{
lean_object* v___x_6154_; 
if (v_isShared_6152_ == 0)
{
lean_ctor_set_tag(v___x_6151_, 4);
v___x_6154_ = v___x_6151_;
goto v_reusejp_6153_;
}
else
{
lean_object* v_reuseFailAlloc_6155_; 
v_reuseFailAlloc_6155_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6155_, 0, v_value_6149_);
v___x_6154_ = v_reuseFailAlloc_6155_;
goto v_reusejp_6153_;
}
v_reusejp_6153_:
{
v___y_6137_ = v___x_6154_;
goto v___jp_6136_;
}
}
}
else
{
lean_object* v_value_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; 
v_value_6157_ = lean_ctor_get(v_path_6120_, 0);
lean_inc(v_value_6157_);
lean_dec_ref_known(v_path_6120_, 1);
v___x_6158_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6159_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6159_, 0, v_value_6157_);
lean_ctor_set(v___x_6159_, 1, v___x_6158_);
v___y_6137_ = v___x_6159_;
goto v___jp_6136_;
}
v___jp_6126_:
{
lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; 
v___x_6129_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6122_);
v___x_6130_ = lean_mk_empty_array_with_capacity(v___x_6124_);
v___x_6131_ = lean_array_push(v___x_6130_, v___y_6127_);
v___x_6132_ = lean_array_push(v___x_6131_, v___y_6128_);
v___x_6133_ = lean_array_push(v___x_6132_, v___x_6129_);
v___x_6134_ = l_Lasm_JS_Web_Support_args(v___x_6133_);
v___x_6135_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6125_, v___x_6134_);
return v___x_6135_;
}
v___jp_6136_:
{
if (lean_obj_tag(v_data_6121_) == 0)
{
lean_object* v_value_6138_; lean_object* v___x_6140_; uint8_t v_isShared_6141_; uint8_t v_isSharedCheck_6145_; 
v_value_6138_ = lean_ctor_get(v_data_6121_, 0);
v_isSharedCheck_6145_ = !lean_is_exclusive(v_data_6121_);
if (v_isSharedCheck_6145_ == 0)
{
v___x_6140_ = v_data_6121_;
v_isShared_6141_ = v_isSharedCheck_6145_;
goto v_resetjp_6139_;
}
else
{
lean_inc(v_value_6138_);
lean_dec(v_data_6121_);
v___x_6140_ = lean_box(0);
v_isShared_6141_ = v_isSharedCheck_6145_;
goto v_resetjp_6139_;
}
v_resetjp_6139_:
{
lean_object* v___x_6143_; 
if (v_isShared_6141_ == 0)
{
lean_ctor_set_tag(v___x_6140_, 6);
v___x_6143_ = v___x_6140_;
goto v_reusejp_6142_;
}
else
{
lean_object* v_reuseFailAlloc_6144_; 
v_reuseFailAlloc_6144_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6144_, 0, v_value_6138_);
v___x_6143_ = v_reuseFailAlloc_6144_;
goto v_reusejp_6142_;
}
v_reusejp_6142_:
{
v___y_6127_ = v___y_6137_;
v___y_6128_ = v___x_6143_;
goto v___jp_6126_;
}
}
}
else
{
lean_object* v_value_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; 
v_value_6146_ = lean_ctor_get(v_data_6121_, 0);
lean_inc(v_value_6146_);
lean_dec_ref_known(v_data_6121_, 1);
v___x_6147_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6148_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6148_, 0, v_value_6146_);
lean_ctor_set(v___x_6148_, 1, v___x_6147_);
v___y_6127_ = v___y_6137_;
v___y_6128_ = v___x_6148_;
goto v___jp_6126_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFile___boxed(lean_object* v_path_6160_, lean_object* v_data_6161_, lean_object* v_options_6162_, lean_object* v_a_6163_){
_start:
{
lean_object* v_res_6164_; 
v_res_6164_ = l_Lasm_JS_Deno_writeFile(v_path_6160_, v_data_6161_, v_options_6162_);
lean_dec(v_options_6162_);
return v_res_6164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync(lean_object* v_path_6173_, lean_object* v_data_6174_, lean_object* v_options_6175_){
_start:
{
uint8_t v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___y_6181_; 
v___x_6177_ = 0;
v___x_6178_ = lean_unsigned_to_nat(3u);
v___x_6179_ = ((lean_object*)(l_Lasm_JS_Deno_writeFileSync___closed__2));
if (lean_obj_tag(v_path_6173_) == 0)
{
lean_object* v_value_6190_; lean_object* v___x_6192_; uint8_t v_isShared_6193_; uint8_t v_isSharedCheck_6197_; 
v_value_6190_ = lean_ctor_get(v_path_6173_, 0);
v_isSharedCheck_6197_ = !lean_is_exclusive(v_path_6173_);
if (v_isSharedCheck_6197_ == 0)
{
v___x_6192_ = v_path_6173_;
v_isShared_6193_ = v_isSharedCheck_6197_;
goto v_resetjp_6191_;
}
else
{
lean_inc(v_value_6190_);
lean_dec(v_path_6173_);
v___x_6192_ = lean_box(0);
v_isShared_6193_ = v_isSharedCheck_6197_;
goto v_resetjp_6191_;
}
v_resetjp_6191_:
{
lean_object* v___x_6195_; 
if (v_isShared_6193_ == 0)
{
lean_ctor_set_tag(v___x_6192_, 4);
v___x_6195_ = v___x_6192_;
goto v_reusejp_6194_;
}
else
{
lean_object* v_reuseFailAlloc_6196_; 
v_reuseFailAlloc_6196_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6196_, 0, v_value_6190_);
v___x_6195_ = v_reuseFailAlloc_6196_;
goto v_reusejp_6194_;
}
v_reusejp_6194_:
{
v___y_6181_ = v___x_6195_;
goto v___jp_6180_;
}
}
}
else
{
lean_object* v_value_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; 
v_value_6198_ = lean_ctor_get(v_path_6173_, 0);
lean_inc(v_value_6198_);
lean_dec_ref_known(v_path_6173_, 1);
v___x_6199_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6200_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6200_, 0, v_value_6198_);
lean_ctor_set(v___x_6200_, 1, v___x_6199_);
v___y_6181_ = v___x_6200_;
goto v___jp_6180_;
}
v___jp_6180_:
{
lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; 
v___x_6182_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6182_, 0, v_data_6174_);
v___x_6183_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6175_);
v___x_6184_ = lean_mk_empty_array_with_capacity(v___x_6178_);
v___x_6185_ = lean_array_push(v___x_6184_, v___y_6181_);
v___x_6186_ = lean_array_push(v___x_6185_, v___x_6182_);
v___x_6187_ = lean_array_push(v___x_6186_, v___x_6183_);
v___x_6188_ = l_Lasm_JS_Web_Support_args(v___x_6187_);
v___x_6189_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6179_, v___x_6188_, v___x_6177_);
return v___x_6189_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeFileSync___boxed(lean_object* v_path_6201_, lean_object* v_data_6202_, lean_object* v_options_6203_, lean_object* v_a_6204_){
_start:
{
lean_object* v_res_6205_; 
v_res_6205_ = l_Lasm_JS_Deno_writeFileSync(v_path_6201_, v_data_6202_, v_options_6203_);
lean_dec(v_options_6203_);
return v_res_6205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile(lean_object* v_path_6214_, lean_object* v_data_6215_, lean_object* v_options_6216_){
_start:
{
lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___y_6221_; lean_object* v___y_6222_; lean_object* v___y_6231_; 
v___x_6218_ = lean_unsigned_to_nat(3u);
v___x_6219_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFile___closed__2));
if (lean_obj_tag(v_path_6214_) == 0)
{
lean_object* v_value_6243_; lean_object* v___x_6245_; uint8_t v_isShared_6246_; uint8_t v_isSharedCheck_6250_; 
v_value_6243_ = lean_ctor_get(v_path_6214_, 0);
v_isSharedCheck_6250_ = !lean_is_exclusive(v_path_6214_);
if (v_isSharedCheck_6250_ == 0)
{
v___x_6245_ = v_path_6214_;
v_isShared_6246_ = v_isSharedCheck_6250_;
goto v_resetjp_6244_;
}
else
{
lean_inc(v_value_6243_);
lean_dec(v_path_6214_);
v___x_6245_ = lean_box(0);
v_isShared_6246_ = v_isSharedCheck_6250_;
goto v_resetjp_6244_;
}
v_resetjp_6244_:
{
lean_object* v___x_6248_; 
if (v_isShared_6246_ == 0)
{
lean_ctor_set_tag(v___x_6245_, 4);
v___x_6248_ = v___x_6245_;
goto v_reusejp_6247_;
}
else
{
lean_object* v_reuseFailAlloc_6249_; 
v_reuseFailAlloc_6249_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6249_, 0, v_value_6243_);
v___x_6248_ = v_reuseFailAlloc_6249_;
goto v_reusejp_6247_;
}
v_reusejp_6247_:
{
v___y_6231_ = v___x_6248_;
goto v___jp_6230_;
}
}
}
else
{
lean_object* v_value_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; 
v_value_6251_ = lean_ctor_get(v_path_6214_, 0);
lean_inc(v_value_6251_);
lean_dec_ref_known(v_path_6214_, 1);
v___x_6252_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6253_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6253_, 0, v_value_6251_);
lean_ctor_set(v___x_6253_, 1, v___x_6252_);
v___y_6231_ = v___x_6253_;
goto v___jp_6230_;
}
v___jp_6220_:
{
lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; 
v___x_6223_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6216_);
v___x_6224_ = lean_mk_empty_array_with_capacity(v___x_6218_);
v___x_6225_ = lean_array_push(v___x_6224_, v___y_6221_);
v___x_6226_ = lean_array_push(v___x_6225_, v___y_6222_);
v___x_6227_ = lean_array_push(v___x_6226_, v___x_6223_);
v___x_6228_ = l_Lasm_JS_Web_Support_args(v___x_6227_);
v___x_6229_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6219_, v___x_6228_);
return v___x_6229_;
}
v___jp_6230_:
{
if (lean_obj_tag(v_data_6215_) == 0)
{
lean_object* v_value_6232_; lean_object* v___x_6234_; uint8_t v_isShared_6235_; uint8_t v_isSharedCheck_6239_; 
v_value_6232_ = lean_ctor_get(v_data_6215_, 0);
v_isSharedCheck_6239_ = !lean_is_exclusive(v_data_6215_);
if (v_isSharedCheck_6239_ == 0)
{
v___x_6234_ = v_data_6215_;
v_isShared_6235_ = v_isSharedCheck_6239_;
goto v_resetjp_6233_;
}
else
{
lean_inc(v_value_6232_);
lean_dec(v_data_6215_);
v___x_6234_ = lean_box(0);
v_isShared_6235_ = v_isSharedCheck_6239_;
goto v_resetjp_6233_;
}
v_resetjp_6233_:
{
lean_object* v___x_6237_; 
if (v_isShared_6235_ == 0)
{
lean_ctor_set_tag(v___x_6234_, 4);
v___x_6237_ = v___x_6234_;
goto v_reusejp_6236_;
}
else
{
lean_object* v_reuseFailAlloc_6238_; 
v_reuseFailAlloc_6238_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6238_, 0, v_value_6232_);
v___x_6237_ = v_reuseFailAlloc_6238_;
goto v_reusejp_6236_;
}
v_reusejp_6236_:
{
v___y_6221_ = v___y_6231_;
v___y_6222_ = v___x_6237_;
goto v___jp_6220_;
}
}
}
else
{
lean_object* v_value_6240_; lean_object* v___x_6241_; lean_object* v___x_6242_; 
v_value_6240_ = lean_ctor_get(v_data_6215_, 0);
lean_inc(v_value_6240_);
lean_dec_ref_known(v_data_6215_, 1);
v___x_6241_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6242_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6242_, 0, v_value_6240_);
lean_ctor_set(v___x_6242_, 1, v___x_6241_);
v___y_6221_ = v___y_6231_;
v___y_6222_ = v___x_6242_;
goto v___jp_6220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFile___boxed(lean_object* v_path_6254_, lean_object* v_data_6255_, lean_object* v_options_6256_, lean_object* v_a_6257_){
_start:
{
lean_object* v_res_6258_; 
v_res_6258_ = l_Lasm_JS_Deno_writeTextFile(v_path_6254_, v_data_6255_, v_options_6256_);
lean_dec(v_options_6256_);
return v_res_6258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync(lean_object* v_path_6267_, lean_object* v_data_6268_, lean_object* v_options_6269_){
_start:
{
uint8_t v___x_6271_; lean_object* v___x_6272_; lean_object* v___x_6273_; lean_object* v___y_6275_; 
v___x_6271_ = 0;
v___x_6272_ = lean_unsigned_to_nat(3u);
v___x_6273_ = ((lean_object*)(l_Lasm_JS_Deno_writeTextFileSync___closed__2));
if (lean_obj_tag(v_path_6267_) == 0)
{
lean_object* v_value_6284_; lean_object* v___x_6286_; uint8_t v_isShared_6287_; uint8_t v_isSharedCheck_6291_; 
v_value_6284_ = lean_ctor_get(v_path_6267_, 0);
v_isSharedCheck_6291_ = !lean_is_exclusive(v_path_6267_);
if (v_isSharedCheck_6291_ == 0)
{
v___x_6286_ = v_path_6267_;
v_isShared_6287_ = v_isSharedCheck_6291_;
goto v_resetjp_6285_;
}
else
{
lean_inc(v_value_6284_);
lean_dec(v_path_6267_);
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
v___y_6275_ = v___x_6289_;
goto v___jp_6274_;
}
}
}
else
{
lean_object* v_value_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; 
v_value_6292_ = lean_ctor_get(v_path_6267_, 0);
lean_inc(v_value_6292_);
lean_dec_ref_known(v_path_6267_, 1);
v___x_6293_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6294_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6294_, 0, v_value_6292_);
lean_ctor_set(v___x_6294_, 1, v___x_6293_);
v___y_6275_ = v___x_6294_;
goto v___jp_6274_;
}
v___jp_6274_:
{
lean_object* v___x_6276_; lean_object* v___x_6277_; lean_object* v___x_6278_; lean_object* v___x_6279_; lean_object* v___x_6280_; lean_object* v___x_6281_; lean_object* v___x_6282_; lean_object* v___x_6283_; 
v___x_6276_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6276_, 0, v_data_6268_);
v___x_6277_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_writeFile_spec__0(v_options_6269_);
v___x_6278_ = lean_mk_empty_array_with_capacity(v___x_6272_);
v___x_6279_ = lean_array_push(v___x_6278_, v___y_6275_);
v___x_6280_ = lean_array_push(v___x_6279_, v___x_6276_);
v___x_6281_ = lean_array_push(v___x_6280_, v___x_6277_);
v___x_6282_ = l_Lasm_JS_Web_Support_args(v___x_6281_);
v___x_6283_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6273_, v___x_6282_, v___x_6271_);
return v___x_6283_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_writeTextFileSync___boxed(lean_object* v_path_6295_, lean_object* v_data_6296_, lean_object* v_options_6297_, lean_object* v_a_6298_){
_start:
{
lean_object* v_res_6299_; 
v_res_6299_ = l_Lasm_JS_Deno_writeTextFileSync(v_path_6295_, v_data_6296_, v_options_6297_);
lean_dec(v_options_6297_);
return v_res_6299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate(lean_object* v_name_6308_, lean_object* v_len_6309_){
_start:
{
lean_object* v___x_6311_; lean_object* v___x_6312_; lean_object* v___x_6313_; lean_object* v___x_6314_; lean_object* v___x_6315_; lean_object* v___x_6316_; lean_object* v___x_6317_; lean_object* v___x_6318_; lean_object* v___x_6319_; 
v___x_6311_ = lean_unsigned_to_nat(2u);
v___x_6312_ = ((lean_object*)(l_Lasm_JS_Deno_truncate___closed__2));
v___x_6313_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6313_, 0, v_name_6308_);
v___x_6314_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6309_);
v___x_6315_ = lean_mk_empty_array_with_capacity(v___x_6311_);
v___x_6316_ = lean_array_push(v___x_6315_, v___x_6313_);
v___x_6317_ = lean_array_push(v___x_6316_, v___x_6314_);
v___x_6318_ = l_Lasm_JS_Web_Support_args(v___x_6317_);
v___x_6319_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6312_, v___x_6318_);
return v___x_6319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncate___boxed(lean_object* v_name_6320_, lean_object* v_len_6321_, lean_object* v_a_6322_){
_start:
{
lean_object* v_res_6323_; 
v_res_6323_ = l_Lasm_JS_Deno_truncate(v_name_6320_, v_len_6321_);
lean_dec(v_len_6321_);
return v_res_6323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync(lean_object* v_name_6332_, lean_object* v_len_6333_){
_start:
{
uint8_t v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; lean_object* v___x_6343_; lean_object* v___x_6344_; 
v___x_6335_ = 0;
v___x_6336_ = lean_unsigned_to_nat(2u);
v___x_6337_ = ((lean_object*)(l_Lasm_JS_Deno_truncateSync___closed__2));
v___x_6338_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6338_, 0, v_name_6332_);
v___x_6339_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_len_6333_);
v___x_6340_ = lean_mk_empty_array_with_capacity(v___x_6336_);
v___x_6341_ = lean_array_push(v___x_6340_, v___x_6338_);
v___x_6342_ = lean_array_push(v___x_6341_, v___x_6339_);
v___x_6343_ = l_Lasm_JS_Web_Support_args(v___x_6342_);
v___x_6344_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6337_, v___x_6343_, v___x_6335_);
return v___x_6344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_truncateSync___boxed(lean_object* v_name_6345_, lean_object* v_len_6346_, lean_object* v_a_6347_){
_start:
{
lean_object* v_res_6348_; 
v_res_6348_ = l_Lasm_JS_Deno_truncateSync(v_name_6345_, v_len_6346_);
lean_dec(v_len_6346_);
return v_res_6348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(lean_object* v_x_6349_){
_start:
{
if (lean_obj_tag(v_x_6349_) == 0)
{
lean_object* v___x_6350_; 
v___x_6350_ = lean_box(0);
return v___x_6350_;
}
else
{
lean_object* v_val_6351_; 
v_val_6351_ = lean_ctor_get(v_x_6349_, 0);
lean_inc(v_val_6351_);
lean_dec_ref_known(v_x_6349_, 1);
if (lean_obj_tag(v_val_6351_) == 0)
{
lean_object* v_value_6352_; lean_object* v___x_6354_; uint8_t v_isShared_6355_; uint8_t v_isSharedCheck_6359_; 
v_value_6352_ = lean_ctor_get(v_val_6351_, 0);
v_isSharedCheck_6359_ = !lean_is_exclusive(v_val_6351_);
if (v_isSharedCheck_6359_ == 0)
{
v___x_6354_ = v_val_6351_;
v_isShared_6355_ = v_isSharedCheck_6359_;
goto v_resetjp_6353_;
}
else
{
lean_inc(v_value_6352_);
lean_dec(v_val_6351_);
v___x_6354_ = lean_box(0);
v_isShared_6355_ = v_isSharedCheck_6359_;
goto v_resetjp_6353_;
}
v_resetjp_6353_:
{
lean_object* v___x_6357_; 
if (v_isShared_6355_ == 0)
{
lean_ctor_set_tag(v___x_6354_, 4);
v___x_6357_ = v___x_6354_;
goto v_reusejp_6356_;
}
else
{
lean_object* v_reuseFailAlloc_6358_; 
v_reuseFailAlloc_6358_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6358_, 0, v_value_6352_);
v___x_6357_ = v_reuseFailAlloc_6358_;
goto v_reusejp_6356_;
}
v_reusejp_6356_:
{
return v___x_6357_;
}
}
}
else
{
lean_object* v_value_6360_; lean_object* v___x_6362_; uint8_t v_isShared_6363_; uint8_t v_isSharedCheck_6370_; 
v_value_6360_ = lean_ctor_get(v_val_6351_, 0);
v_isSharedCheck_6370_ = !lean_is_exclusive(v_val_6351_);
if (v_isSharedCheck_6370_ == 0)
{
v___x_6362_ = v_val_6351_;
v_isShared_6363_ = v_isSharedCheck_6370_;
goto v_resetjp_6361_;
}
else
{
lean_inc(v_value_6360_);
lean_dec(v_val_6351_);
v___x_6362_ = lean_box(0);
v_isShared_6363_ = v_isSharedCheck_6370_;
goto v_resetjp_6361_;
}
v_resetjp_6361_:
{
size_t v_sz_6364_; size_t v___x_6365_; lean_object* v___x_6366_; lean_object* v___x_6368_; 
v_sz_6364_ = lean_array_size(v_value_6360_);
v___x_6365_ = ((size_t)0ULL);
v___x_6366_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6364_, v___x_6365_, v_value_6360_);
if (v_isShared_6363_ == 0)
{
lean_ctor_set_tag(v___x_6362_, 7);
lean_ctor_set(v___x_6362_, 0, v___x_6366_);
v___x_6368_ = v___x_6362_;
goto v_reusejp_6367_;
}
else
{
lean_object* v_reuseFailAlloc_6369_; 
v_reuseFailAlloc_6369_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6369_, 0, v___x_6366_);
v___x_6368_ = v_reuseFailAlloc_6369_;
goto v_reusejp_6367_;
}
v_reusejp_6367_:
{
return v___x_6368_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(lean_object* v_x_6371_){
_start:
{
if (lean_obj_tag(v_x_6371_) == 0)
{
lean_object* v___x_6372_; 
v___x_6372_ = lean_box(0);
return v___x_6372_;
}
else
{
lean_object* v_val_6373_; lean_object* v_recursive_6374_; lean_object* v_ignore_6375_; lean_object* v___x_6377_; uint8_t v_isShared_6378_; uint8_t v_isSharedCheck_6392_; 
v_val_6373_ = lean_ctor_get(v_x_6371_, 0);
lean_inc(v_val_6373_);
lean_dec_ref_known(v_x_6371_, 1);
v_recursive_6374_ = lean_ctor_get(v_val_6373_, 0);
v_ignore_6375_ = lean_ctor_get(v_val_6373_, 1);
v_isSharedCheck_6392_ = !lean_is_exclusive(v_val_6373_);
if (v_isSharedCheck_6392_ == 0)
{
v___x_6377_ = v_val_6373_;
v_isShared_6378_ = v_isSharedCheck_6392_;
goto v_resetjp_6376_;
}
else
{
lean_inc(v_ignore_6375_);
lean_inc(v_recursive_6374_);
lean_dec(v_val_6373_);
v___x_6377_ = lean_box(0);
v_isShared_6378_ = v_isSharedCheck_6392_;
goto v_resetjp_6376_;
}
v_resetjp_6376_:
{
lean_object* v___x_6379_; lean_object* v___x_6380_; lean_object* v___x_6382_; 
v___x_6379_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSMkdirOptions___lam__0___closed__0));
v___x_6380_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_recursive_6374_);
lean_dec(v_recursive_6374_);
if (v_isShared_6378_ == 0)
{
lean_ctor_set(v___x_6377_, 1, v___x_6380_);
lean_ctor_set(v___x_6377_, 0, v___x_6379_);
v___x_6382_ = v___x_6377_;
goto v_reusejp_6381_;
}
else
{
lean_object* v_reuseFailAlloc_6391_; 
v_reuseFailAlloc_6391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6391_, 0, v___x_6379_);
lean_ctor_set(v_reuseFailAlloc_6391_, 1, v___x_6380_);
v___x_6382_ = v_reuseFailAlloc_6391_;
goto v_reusejp_6381_;
}
v_reusejp_6381_:
{
lean_object* v___x_6383_; lean_object* v___x_6384_; lean_object* v___x_6385_; lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; lean_object* v___x_6390_; 
v___x_6383_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSWatchFsOptions___lam__0___closed__0));
v___x_6384_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0_spec__0(v_ignore_6375_);
v___x_6385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6385_, 0, v___x_6383_);
lean_ctor_set(v___x_6385_, 1, v___x_6384_);
v___x_6386_ = lean_unsigned_to_nat(2u);
v___x_6387_ = lean_mk_empty_array_with_capacity(v___x_6386_);
v___x_6388_ = lean_array_push(v___x_6387_, v___x_6382_);
v___x_6389_ = lean_array_push(v___x_6388_, v___x_6385_);
v___x_6390_ = l_Lasm_JS_Web_Support_fields(v___x_6389_);
lean_dec_ref(v___x_6389_);
return v___x_6390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs(lean_object* v_paths_6401_, lean_object* v_options_6402_){
_start:
{
uint8_t v___x_6404_; lean_object* v___x_6405_; lean_object* v___x_6406_; lean_object* v___y_6408_; 
v___x_6404_ = 0;
v___x_6405_ = lean_unsigned_to_nat(2u);
v___x_6406_ = ((lean_object*)(l_Lasm_JS_Deno_watchFs___closed__2));
if (lean_obj_tag(v_paths_6401_) == 0)
{
lean_object* v_value_6431_; lean_object* v___x_6433_; uint8_t v_isShared_6434_; uint8_t v_isSharedCheck_6438_; 
v_value_6431_ = lean_ctor_get(v_paths_6401_, 0);
v_isSharedCheck_6438_ = !lean_is_exclusive(v_paths_6401_);
if (v_isSharedCheck_6438_ == 0)
{
v___x_6433_ = v_paths_6401_;
v_isShared_6434_ = v_isSharedCheck_6438_;
goto v_resetjp_6432_;
}
else
{
lean_inc(v_value_6431_);
lean_dec(v_paths_6401_);
v___x_6433_ = lean_box(0);
v_isShared_6434_ = v_isSharedCheck_6438_;
goto v_resetjp_6432_;
}
v_resetjp_6432_:
{
lean_object* v___x_6436_; 
if (v_isShared_6434_ == 0)
{
lean_ctor_set_tag(v___x_6433_, 4);
v___x_6436_ = v___x_6433_;
goto v_reusejp_6435_;
}
else
{
lean_object* v_reuseFailAlloc_6437_; 
v_reuseFailAlloc_6437_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6437_, 0, v_value_6431_);
v___x_6436_ = v_reuseFailAlloc_6437_;
goto v_reusejp_6435_;
}
v_reusejp_6435_:
{
v___y_6408_ = v___x_6436_;
goto v___jp_6407_;
}
}
}
else
{
lean_object* v_value_6439_; lean_object* v___x_6441_; uint8_t v_isShared_6442_; uint8_t v_isSharedCheck_6449_; 
v_value_6439_ = lean_ctor_get(v_paths_6401_, 0);
v_isSharedCheck_6449_ = !lean_is_exclusive(v_paths_6401_);
if (v_isSharedCheck_6449_ == 0)
{
v___x_6441_ = v_paths_6401_;
v_isShared_6442_ = v_isSharedCheck_6449_;
goto v_resetjp_6440_;
}
else
{
lean_inc(v_value_6439_);
lean_dec(v_paths_6401_);
v___x_6441_ = lean_box(0);
v_isShared_6442_ = v_isSharedCheck_6449_;
goto v_resetjp_6440_;
}
v_resetjp_6440_:
{
size_t v_sz_6443_; size_t v___x_6444_; lean_object* v___x_6445_; lean_object* v___x_6447_; 
v_sz_6443_ = lean_array_size(v_value_6439_);
v___x_6444_ = ((size_t)0ULL);
v___x_6445_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_6443_, v___x_6444_, v_value_6439_);
if (v_isShared_6442_ == 0)
{
lean_ctor_set_tag(v___x_6441_, 7);
lean_ctor_set(v___x_6441_, 0, v___x_6445_);
v___x_6447_ = v___x_6441_;
goto v_reusejp_6446_;
}
else
{
lean_object* v_reuseFailAlloc_6448_; 
v_reuseFailAlloc_6448_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6448_, 0, v___x_6445_);
v___x_6447_ = v_reuseFailAlloc_6448_;
goto v_reusejp_6446_;
}
v_reusejp_6446_:
{
v___y_6408_ = v___x_6447_;
goto v___jp_6407_;
}
}
}
v___jp_6407_:
{
lean_object* v___x_6409_; lean_object* v___x_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; lean_object* v___x_6414_; 
v___x_6409_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_watchFs_spec__0(v_options_6402_);
v___x_6410_ = lean_mk_empty_array_with_capacity(v___x_6405_);
v___x_6411_ = lean_array_push(v___x_6410_, v___y_6408_);
v___x_6412_ = lean_array_push(v___x_6411_, v___x_6409_);
v___x_6413_ = l_Lasm_JS_Web_Support_args(v___x_6412_);
v___x_6414_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_6406_, v___x_6413_, v___x_6404_);
if (lean_obj_tag(v___x_6414_) == 0)
{
lean_object* v_a_6415_; lean_object* v___x_6417_; uint8_t v_isShared_6418_; uint8_t v_isSharedCheck_6422_; 
v_a_6415_ = lean_ctor_get(v___x_6414_, 0);
v_isSharedCheck_6422_ = !lean_is_exclusive(v___x_6414_);
if (v_isSharedCheck_6422_ == 0)
{
v___x_6417_ = v___x_6414_;
v_isShared_6418_ = v_isSharedCheck_6422_;
goto v_resetjp_6416_;
}
else
{
lean_inc(v_a_6415_);
lean_dec(v___x_6414_);
v___x_6417_ = lean_box(0);
v_isShared_6418_ = v_isSharedCheck_6422_;
goto v_resetjp_6416_;
}
v_resetjp_6416_:
{
lean_object* v___x_6420_; 
if (v_isShared_6418_ == 0)
{
v___x_6420_ = v___x_6417_;
goto v_reusejp_6419_;
}
else
{
lean_object* v_reuseFailAlloc_6421_; 
v_reuseFailAlloc_6421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6421_, 0, v_a_6415_);
v___x_6420_ = v_reuseFailAlloc_6421_;
goto v_reusejp_6419_;
}
v_reusejp_6419_:
{
return v___x_6420_;
}
}
}
else
{
lean_object* v_a_6423_; lean_object* v___x_6425_; uint8_t v_isShared_6426_; uint8_t v_isSharedCheck_6430_; 
v_a_6423_ = lean_ctor_get(v___x_6414_, 0);
v_isSharedCheck_6430_ = !lean_is_exclusive(v___x_6414_);
if (v_isSharedCheck_6430_ == 0)
{
v___x_6425_ = v___x_6414_;
v_isShared_6426_ = v_isSharedCheck_6430_;
goto v_resetjp_6424_;
}
else
{
lean_inc(v_a_6423_);
lean_dec(v___x_6414_);
v___x_6425_ = lean_box(0);
v_isShared_6426_ = v_isSharedCheck_6430_;
goto v_resetjp_6424_;
}
v_resetjp_6424_:
{
lean_object* v___x_6428_; 
if (v_isShared_6426_ == 0)
{
v___x_6428_ = v___x_6425_;
goto v_reusejp_6427_;
}
else
{
lean_object* v_reuseFailAlloc_6429_; 
v_reuseFailAlloc_6429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6429_, 0, v_a_6423_);
v___x_6428_ = v_reuseFailAlloc_6429_;
goto v_reusejp_6427_;
}
v_reusejp_6427_:
{
return v___x_6428_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_watchFs___boxed(lean_object* v_paths_6450_, lean_object* v_options_6451_, lean_object* v_a_6452_){
_start:
{
lean_object* v_res_6453_; 
v_res_6453_ = l_Lasm_JS_Deno_watchFs(v_paths_6450_, v_options_6451_);
return v_res_6453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(lean_object* v_x_6454_){
_start:
{
if (lean_obj_tag(v_x_6454_) == 0)
{
lean_object* v___x_6455_; 
v___x_6455_ = lean_box(0);
return v___x_6455_;
}
else
{
lean_object* v_val_6456_; lean_object* v___x_6457_; lean_object* v___y_6459_; uint8_t v___x_6465_; 
v_val_6456_ = lean_ctor_get(v_x_6454_, 0);
v___x_6457_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptions___lam__0___closed__0));
v___x_6465_ = lean_unbox(v_val_6456_);
switch(v___x_6465_)
{
case 0:
{
lean_object* v___x_6466_; 
v___x_6466_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__1));
v___y_6459_ = v___x_6466_;
goto v___jp_6458_;
}
case 1:
{
lean_object* v___x_6467_; 
v___x_6467_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__3));
v___y_6459_ = v___x_6467_;
goto v___jp_6458_;
}
default: 
{
lean_object* v___x_6468_; 
v___x_6468_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSymlinkOptionsType___lam__0___closed__5));
v___y_6459_ = v___x_6468_;
goto v___jp_6458_;
}
}
v___jp_6458_:
{
lean_object* v___x_6460_; lean_object* v___x_6461_; lean_object* v___x_6462_; lean_object* v___x_6463_; lean_object* v___x_6464_; 
lean_inc(v___y_6459_);
v___x_6460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6460_, 0, v___x_6457_);
lean_ctor_set(v___x_6460_, 1, v___y_6459_);
v___x_6461_ = lean_unsigned_to_nat(1u);
v___x_6462_ = lean_mk_empty_array_with_capacity(v___x_6461_);
v___x_6463_ = lean_array_push(v___x_6462_, v___x_6460_);
v___x_6464_ = l_Lasm_JS_Web_Support_fields(v___x_6463_);
lean_dec_ref(v___x_6463_);
return v___x_6464_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0___boxed(lean_object* v_x_6469_){
_start:
{
lean_object* v_res_6470_; 
v_res_6470_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_x_6469_);
lean_dec(v_x_6469_);
return v_res_6470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink(lean_object* v_oldpath_6479_, lean_object* v_newpath_6480_, lean_object* v_options_6481_){
_start:
{
lean_object* v___x_6483_; lean_object* v___x_6484_; lean_object* v___y_6486_; lean_object* v___y_6487_; lean_object* v___y_6496_; 
v___x_6483_ = lean_unsigned_to_nat(3u);
v___x_6484_ = ((lean_object*)(l_Lasm_JS_Deno_symlink___closed__2));
if (lean_obj_tag(v_oldpath_6479_) == 0)
{
lean_object* v_value_6508_; lean_object* v___x_6510_; uint8_t v_isShared_6511_; uint8_t v_isSharedCheck_6515_; 
v_value_6508_ = lean_ctor_get(v_oldpath_6479_, 0);
v_isSharedCheck_6515_ = !lean_is_exclusive(v_oldpath_6479_);
if (v_isSharedCheck_6515_ == 0)
{
v___x_6510_ = v_oldpath_6479_;
v_isShared_6511_ = v_isSharedCheck_6515_;
goto v_resetjp_6509_;
}
else
{
lean_inc(v_value_6508_);
lean_dec(v_oldpath_6479_);
v___x_6510_ = lean_box(0);
v_isShared_6511_ = v_isSharedCheck_6515_;
goto v_resetjp_6509_;
}
v_resetjp_6509_:
{
lean_object* v___x_6513_; 
if (v_isShared_6511_ == 0)
{
lean_ctor_set_tag(v___x_6510_, 4);
v___x_6513_ = v___x_6510_;
goto v_reusejp_6512_;
}
else
{
lean_object* v_reuseFailAlloc_6514_; 
v_reuseFailAlloc_6514_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6514_, 0, v_value_6508_);
v___x_6513_ = v_reuseFailAlloc_6514_;
goto v_reusejp_6512_;
}
v_reusejp_6512_:
{
v___y_6496_ = v___x_6513_;
goto v___jp_6495_;
}
}
}
else
{
lean_object* v_value_6516_; lean_object* v___x_6517_; lean_object* v___x_6518_; 
v_value_6516_ = lean_ctor_get(v_oldpath_6479_, 0);
lean_inc(v_value_6516_);
lean_dec_ref_known(v_oldpath_6479_, 1);
v___x_6517_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6518_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6518_, 0, v_value_6516_);
lean_ctor_set(v___x_6518_, 1, v___x_6517_);
v___y_6496_ = v___x_6518_;
goto v___jp_6495_;
}
v___jp_6485_:
{
lean_object* v___x_6488_; lean_object* v___x_6489_; lean_object* v___x_6490_; lean_object* v___x_6491_; lean_object* v___x_6492_; lean_object* v___x_6493_; lean_object* v___x_6494_; 
v___x_6488_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6481_);
v___x_6489_ = lean_mk_empty_array_with_capacity(v___x_6483_);
v___x_6490_ = lean_array_push(v___x_6489_, v___y_6486_);
v___x_6491_ = lean_array_push(v___x_6490_, v___y_6487_);
v___x_6492_ = lean_array_push(v___x_6491_, v___x_6488_);
v___x_6493_ = l_Lasm_JS_Web_Support_args(v___x_6492_);
v___x_6494_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6484_, v___x_6493_);
return v___x_6494_;
}
v___jp_6495_:
{
if (lean_obj_tag(v_newpath_6480_) == 0)
{
lean_object* v_value_6497_; lean_object* v___x_6499_; uint8_t v_isShared_6500_; uint8_t v_isSharedCheck_6504_; 
v_value_6497_ = lean_ctor_get(v_newpath_6480_, 0);
v_isSharedCheck_6504_ = !lean_is_exclusive(v_newpath_6480_);
if (v_isSharedCheck_6504_ == 0)
{
v___x_6499_ = v_newpath_6480_;
v_isShared_6500_ = v_isSharedCheck_6504_;
goto v_resetjp_6498_;
}
else
{
lean_inc(v_value_6497_);
lean_dec(v_newpath_6480_);
v___x_6499_ = lean_box(0);
v_isShared_6500_ = v_isSharedCheck_6504_;
goto v_resetjp_6498_;
}
v_resetjp_6498_:
{
lean_object* v___x_6502_; 
if (v_isShared_6500_ == 0)
{
lean_ctor_set_tag(v___x_6499_, 4);
v___x_6502_ = v___x_6499_;
goto v_reusejp_6501_;
}
else
{
lean_object* v_reuseFailAlloc_6503_; 
v_reuseFailAlloc_6503_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6503_, 0, v_value_6497_);
v___x_6502_ = v_reuseFailAlloc_6503_;
goto v_reusejp_6501_;
}
v_reusejp_6501_:
{
v___y_6486_ = v___y_6496_;
v___y_6487_ = v___x_6502_;
goto v___jp_6485_;
}
}
}
else
{
lean_object* v_value_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; 
v_value_6505_ = lean_ctor_get(v_newpath_6480_, 0);
lean_inc(v_value_6505_);
lean_dec_ref_known(v_newpath_6480_, 1);
v___x_6506_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6507_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6507_, 0, v_value_6505_);
lean_ctor_set(v___x_6507_, 1, v___x_6506_);
v___y_6486_ = v___y_6496_;
v___y_6487_ = v___x_6507_;
goto v___jp_6485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlink___boxed(lean_object* v_oldpath_6519_, lean_object* v_newpath_6520_, lean_object* v_options_6521_, lean_object* v_a_6522_){
_start:
{
lean_object* v_res_6523_; 
v_res_6523_ = l_Lasm_JS_Deno_symlink(v_oldpath_6519_, v_newpath_6520_, v_options_6521_);
lean_dec(v_options_6521_);
return v_res_6523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync(lean_object* v_oldpath_6532_, lean_object* v_newpath_6533_, lean_object* v_options_6534_){
_start:
{
uint8_t v___x_6536_; lean_object* v___x_6537_; lean_object* v___x_6538_; lean_object* v___y_6540_; lean_object* v___y_6541_; lean_object* v___y_6550_; 
v___x_6536_ = 0;
v___x_6537_ = lean_unsigned_to_nat(3u);
v___x_6538_ = ((lean_object*)(l_Lasm_JS_Deno_symlinkSync___closed__2));
if (lean_obj_tag(v_oldpath_6532_) == 0)
{
lean_object* v_value_6562_; lean_object* v___x_6564_; uint8_t v_isShared_6565_; uint8_t v_isSharedCheck_6569_; 
v_value_6562_ = lean_ctor_get(v_oldpath_6532_, 0);
v_isSharedCheck_6569_ = !lean_is_exclusive(v_oldpath_6532_);
if (v_isSharedCheck_6569_ == 0)
{
v___x_6564_ = v_oldpath_6532_;
v_isShared_6565_ = v_isSharedCheck_6569_;
goto v_resetjp_6563_;
}
else
{
lean_inc(v_value_6562_);
lean_dec(v_oldpath_6532_);
v___x_6564_ = lean_box(0);
v_isShared_6565_ = v_isSharedCheck_6569_;
goto v_resetjp_6563_;
}
v_resetjp_6563_:
{
lean_object* v___x_6567_; 
if (v_isShared_6565_ == 0)
{
lean_ctor_set_tag(v___x_6564_, 4);
v___x_6567_ = v___x_6564_;
goto v_reusejp_6566_;
}
else
{
lean_object* v_reuseFailAlloc_6568_; 
v_reuseFailAlloc_6568_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6568_, 0, v_value_6562_);
v___x_6567_ = v_reuseFailAlloc_6568_;
goto v_reusejp_6566_;
}
v_reusejp_6566_:
{
v___y_6550_ = v___x_6567_;
goto v___jp_6549_;
}
}
}
else
{
lean_object* v_value_6570_; lean_object* v___x_6571_; lean_object* v___x_6572_; 
v_value_6570_ = lean_ctor_get(v_oldpath_6532_, 0);
lean_inc(v_value_6570_);
lean_dec_ref_known(v_oldpath_6532_, 1);
v___x_6571_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6572_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6572_, 0, v_value_6570_);
lean_ctor_set(v___x_6572_, 1, v___x_6571_);
v___y_6550_ = v___x_6572_;
goto v___jp_6549_;
}
v___jp_6539_:
{
lean_object* v___x_6542_; lean_object* v___x_6543_; lean_object* v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; 
v___x_6542_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_symlink_spec__0(v_options_6534_);
v___x_6543_ = lean_mk_empty_array_with_capacity(v___x_6537_);
v___x_6544_ = lean_array_push(v___x_6543_, v___y_6540_);
v___x_6545_ = lean_array_push(v___x_6544_, v___y_6541_);
v___x_6546_ = lean_array_push(v___x_6545_, v___x_6542_);
v___x_6547_ = l_Lasm_JS_Web_Support_args(v___x_6546_);
v___x_6548_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6538_, v___x_6547_, v___x_6536_);
return v___x_6548_;
}
v___jp_6549_:
{
if (lean_obj_tag(v_newpath_6533_) == 0)
{
lean_object* v_value_6551_; lean_object* v___x_6553_; uint8_t v_isShared_6554_; uint8_t v_isSharedCheck_6558_; 
v_value_6551_ = lean_ctor_get(v_newpath_6533_, 0);
v_isSharedCheck_6558_ = !lean_is_exclusive(v_newpath_6533_);
if (v_isSharedCheck_6558_ == 0)
{
v___x_6553_ = v_newpath_6533_;
v_isShared_6554_ = v_isSharedCheck_6558_;
goto v_resetjp_6552_;
}
else
{
lean_inc(v_value_6551_);
lean_dec(v_newpath_6533_);
v___x_6553_ = lean_box(0);
v_isShared_6554_ = v_isSharedCheck_6558_;
goto v_resetjp_6552_;
}
v_resetjp_6552_:
{
lean_object* v___x_6556_; 
if (v_isShared_6554_ == 0)
{
lean_ctor_set_tag(v___x_6553_, 4);
v___x_6556_ = v___x_6553_;
goto v_reusejp_6555_;
}
else
{
lean_object* v_reuseFailAlloc_6557_; 
v_reuseFailAlloc_6557_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6557_, 0, v_value_6551_);
v___x_6556_ = v_reuseFailAlloc_6557_;
goto v_reusejp_6555_;
}
v_reusejp_6555_:
{
v___y_6540_ = v___y_6550_;
v___y_6541_ = v___x_6556_;
goto v___jp_6539_;
}
}
}
else
{
lean_object* v_value_6559_; lean_object* v___x_6560_; lean_object* v___x_6561_; 
v_value_6559_ = lean_ctor_get(v_newpath_6533_, 0);
lean_inc(v_value_6559_);
lean_dec_ref_known(v_newpath_6533_, 1);
v___x_6560_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6561_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6561_, 0, v_value_6559_);
lean_ctor_set(v___x_6561_, 1, v___x_6560_);
v___y_6540_ = v___y_6550_;
v___y_6541_ = v___x_6561_;
goto v___jp_6539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_symlinkSync___boxed(lean_object* v_oldpath_6573_, lean_object* v_newpath_6574_, lean_object* v_options_6575_, lean_object* v_a_6576_){
_start:
{
lean_object* v_res_6577_; 
v_res_6577_ = l_Lasm_JS_Deno_symlinkSync(v_oldpath_6573_, v_newpath_6574_, v_options_6575_);
lean_dec(v_options_6575_);
return v_res_6577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync(lean_object* v_path_6586_, lean_object* v_atime_6587_, lean_object* v_mtime_6588_){
_start:
{
uint8_t v___x_6590_; lean_object* v___x_6591_; lean_object* v___x_6592_; lean_object* v___y_6594_; lean_object* v___y_6595_; lean_object* v___y_6596_; lean_object* v___y_6604_; lean_object* v___y_6605_; lean_object* v___y_6616_; 
v___x_6590_ = 0;
v___x_6591_ = lean_unsigned_to_nat(3u);
v___x_6592_ = ((lean_object*)(l_Lasm_JS_Deno_utimeSync___closed__2));
if (lean_obj_tag(v_path_6586_) == 0)
{
lean_object* v_value_6626_; lean_object* v___x_6628_; uint8_t v_isShared_6629_; uint8_t v_isSharedCheck_6633_; 
v_value_6626_ = lean_ctor_get(v_path_6586_, 0);
v_isSharedCheck_6633_ = !lean_is_exclusive(v_path_6586_);
if (v_isSharedCheck_6633_ == 0)
{
v___x_6628_ = v_path_6586_;
v_isShared_6629_ = v_isSharedCheck_6633_;
goto v_resetjp_6627_;
}
else
{
lean_inc(v_value_6626_);
lean_dec(v_path_6586_);
v___x_6628_ = lean_box(0);
v_isShared_6629_ = v_isSharedCheck_6633_;
goto v_resetjp_6627_;
}
v_resetjp_6627_:
{
lean_object* v___x_6631_; 
if (v_isShared_6629_ == 0)
{
lean_ctor_set_tag(v___x_6628_, 4);
v___x_6631_ = v___x_6628_;
goto v_reusejp_6630_;
}
else
{
lean_object* v_reuseFailAlloc_6632_; 
v_reuseFailAlloc_6632_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6632_, 0, v_value_6626_);
v___x_6631_ = v_reuseFailAlloc_6632_;
goto v_reusejp_6630_;
}
v_reusejp_6630_:
{
v___y_6616_ = v___x_6631_;
goto v___jp_6615_;
}
}
}
else
{
lean_object* v_value_6634_; lean_object* v___x_6635_; lean_object* v___x_6636_; 
v_value_6634_ = lean_ctor_get(v_path_6586_, 0);
lean_inc(v_value_6634_);
lean_dec_ref_known(v_path_6586_, 1);
v___x_6635_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6636_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6636_, 0, v_value_6634_);
lean_ctor_set(v___x_6636_, 1, v___x_6635_);
v___y_6616_ = v___x_6636_;
goto v___jp_6615_;
}
v___jp_6593_:
{
lean_object* v___x_6597_; lean_object* v___x_6598_; lean_object* v___x_6599_; lean_object* v___x_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; 
v___x_6597_ = lean_mk_empty_array_with_capacity(v___x_6591_);
v___x_6598_ = lean_array_push(v___x_6597_, v___y_6595_);
v___x_6599_ = lean_array_push(v___x_6598_, v___y_6594_);
v___x_6600_ = lean_array_push(v___x_6599_, v___y_6596_);
v___x_6601_ = l_Lasm_JS_Web_Support_args(v___x_6600_);
v___x_6602_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_6592_, v___x_6601_, v___x_6590_);
return v___x_6602_;
}
v___jp_6603_:
{
if (lean_obj_tag(v_mtime_6588_) == 0)
{
double v_value_6606_; lean_object* v___x_6608_; uint8_t v_isShared_6609_; uint8_t v_isSharedCheck_6613_; 
v_value_6606_ = lean_ctor_get_float(v_mtime_6588_, 0);
v_isSharedCheck_6613_ = !lean_is_exclusive(v_mtime_6588_);
if (v_isSharedCheck_6613_ == 0)
{
v___x_6608_ = v_mtime_6588_;
v_isShared_6609_ = v_isSharedCheck_6613_;
goto v_resetjp_6607_;
}
else
{
lean_dec(v_mtime_6588_);
v___x_6608_ = lean_box(0);
v_isShared_6609_ = v_isSharedCheck_6613_;
goto v_resetjp_6607_;
}
v_resetjp_6607_:
{
lean_object* v___x_6611_; 
if (v_isShared_6609_ == 0)
{
lean_ctor_set_tag(v___x_6608_, 3);
v___x_6611_ = v___x_6608_;
goto v_reusejp_6610_;
}
else
{
lean_object* v_reuseFailAlloc_6612_; 
v_reuseFailAlloc_6612_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6612_, 0, v_value_6606_);
v___x_6611_ = v_reuseFailAlloc_6612_;
goto v_reusejp_6610_;
}
v_reusejp_6610_:
{
v___y_6594_ = v___y_6605_;
v___y_6595_ = v___y_6604_;
v___y_6596_ = v___x_6611_;
goto v___jp_6593_;
}
}
}
else
{
lean_object* v_value_6614_; 
v_value_6614_ = lean_ctor_get(v_mtime_6588_, 0);
lean_inc(v_value_6614_);
lean_dec_ref_known(v_mtime_6588_, 1);
v___y_6594_ = v___y_6605_;
v___y_6595_ = v___y_6604_;
v___y_6596_ = v_value_6614_;
goto v___jp_6593_;
}
}
v___jp_6615_:
{
if (lean_obj_tag(v_atime_6587_) == 0)
{
double v_value_6617_; lean_object* v___x_6619_; uint8_t v_isShared_6620_; uint8_t v_isSharedCheck_6624_; 
v_value_6617_ = lean_ctor_get_float(v_atime_6587_, 0);
v_isSharedCheck_6624_ = !lean_is_exclusive(v_atime_6587_);
if (v_isSharedCheck_6624_ == 0)
{
v___x_6619_ = v_atime_6587_;
v_isShared_6620_ = v_isSharedCheck_6624_;
goto v_resetjp_6618_;
}
else
{
lean_dec(v_atime_6587_);
v___x_6619_ = lean_box(0);
v_isShared_6620_ = v_isSharedCheck_6624_;
goto v_resetjp_6618_;
}
v_resetjp_6618_:
{
lean_object* v___x_6622_; 
if (v_isShared_6620_ == 0)
{
lean_ctor_set_tag(v___x_6619_, 3);
v___x_6622_ = v___x_6619_;
goto v_reusejp_6621_;
}
else
{
lean_object* v_reuseFailAlloc_6623_; 
v_reuseFailAlloc_6623_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6623_, 0, v_value_6617_);
v___x_6622_ = v_reuseFailAlloc_6623_;
goto v_reusejp_6621_;
}
v_reusejp_6621_:
{
v___y_6604_ = v___y_6616_;
v___y_6605_ = v___x_6622_;
goto v___jp_6603_;
}
}
}
else
{
lean_object* v_value_6625_; 
v_value_6625_ = lean_ctor_get(v_atime_6587_, 0);
lean_inc(v_value_6625_);
lean_dec_ref_known(v_atime_6587_, 1);
v___y_6604_ = v___y_6616_;
v___y_6605_ = v_value_6625_;
goto v___jp_6603_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utimeSync___boxed(lean_object* v_path_6637_, lean_object* v_atime_6638_, lean_object* v_mtime_6639_, lean_object* v_a_6640_){
_start:
{
lean_object* v_res_6641_; 
v_res_6641_ = l_Lasm_JS_Deno_utimeSync(v_path_6637_, v_atime_6638_, v_mtime_6639_);
return v_res_6641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime(lean_object* v_path_6650_, lean_object* v_atime_6651_, lean_object* v_mtime_6652_){
_start:
{
lean_object* v___x_6654_; lean_object* v___x_6655_; lean_object* v___y_6657_; lean_object* v___y_6658_; lean_object* v___y_6659_; lean_object* v___y_6667_; lean_object* v___y_6668_; lean_object* v___y_6679_; 
v___x_6654_ = lean_unsigned_to_nat(3u);
v___x_6655_ = ((lean_object*)(l_Lasm_JS_Deno_utime___closed__2));
if (lean_obj_tag(v_path_6650_) == 0)
{
lean_object* v_value_6689_; lean_object* v___x_6691_; uint8_t v_isShared_6692_; uint8_t v_isSharedCheck_6696_; 
v_value_6689_ = lean_ctor_get(v_path_6650_, 0);
v_isSharedCheck_6696_ = !lean_is_exclusive(v_path_6650_);
if (v_isSharedCheck_6696_ == 0)
{
v___x_6691_ = v_path_6650_;
v_isShared_6692_ = v_isSharedCheck_6696_;
goto v_resetjp_6690_;
}
else
{
lean_inc(v_value_6689_);
lean_dec(v_path_6650_);
v___x_6691_ = lean_box(0);
v_isShared_6692_ = v_isSharedCheck_6696_;
goto v_resetjp_6690_;
}
v_resetjp_6690_:
{
lean_object* v___x_6694_; 
if (v_isShared_6692_ == 0)
{
lean_ctor_set_tag(v___x_6691_, 4);
v___x_6694_ = v___x_6691_;
goto v_reusejp_6693_;
}
else
{
lean_object* v_reuseFailAlloc_6695_; 
v_reuseFailAlloc_6695_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6695_, 0, v_value_6689_);
v___x_6694_ = v_reuseFailAlloc_6695_;
goto v_reusejp_6693_;
}
v_reusejp_6693_:
{
v___y_6679_ = v___x_6694_;
goto v___jp_6678_;
}
}
}
else
{
lean_object* v_value_6697_; lean_object* v___x_6698_; lean_object* v___x_6699_; 
v_value_6697_ = lean_ctor_get(v_path_6650_, 0);
lean_inc(v_value_6697_);
lean_dec_ref_known(v_path_6650_, 1);
v___x_6698_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSFsFile___lam__0___closed__0));
v___x_6699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6699_, 0, v_value_6697_);
lean_ctor_set(v___x_6699_, 1, v___x_6698_);
v___y_6679_ = v___x_6699_;
goto v___jp_6678_;
}
v___jp_6656_:
{
lean_object* v___x_6660_; lean_object* v___x_6661_; lean_object* v___x_6662_; lean_object* v___x_6663_; lean_object* v___x_6664_; lean_object* v___x_6665_; 
v___x_6660_ = lean_mk_empty_array_with_capacity(v___x_6654_);
v___x_6661_ = lean_array_push(v___x_6660_, v___y_6658_);
v___x_6662_ = lean_array_push(v___x_6661_, v___y_6657_);
v___x_6663_ = lean_array_push(v___x_6662_, v___y_6659_);
v___x_6664_ = l_Lasm_JS_Web_Support_args(v___x_6663_);
v___x_6665_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_link_spec__0(v___x_6655_, v___x_6664_);
return v___x_6665_;
}
v___jp_6666_:
{
if (lean_obj_tag(v_mtime_6652_) == 0)
{
double v_value_6669_; lean_object* v___x_6671_; uint8_t v_isShared_6672_; uint8_t v_isSharedCheck_6676_; 
v_value_6669_ = lean_ctor_get_float(v_mtime_6652_, 0);
v_isSharedCheck_6676_ = !lean_is_exclusive(v_mtime_6652_);
if (v_isSharedCheck_6676_ == 0)
{
v___x_6671_ = v_mtime_6652_;
v_isShared_6672_ = v_isSharedCheck_6676_;
goto v_resetjp_6670_;
}
else
{
lean_dec(v_mtime_6652_);
v___x_6671_ = lean_box(0);
v_isShared_6672_ = v_isSharedCheck_6676_;
goto v_resetjp_6670_;
}
v_resetjp_6670_:
{
lean_object* v___x_6674_; 
if (v_isShared_6672_ == 0)
{
lean_ctor_set_tag(v___x_6671_, 3);
v___x_6674_ = v___x_6671_;
goto v_reusejp_6673_;
}
else
{
lean_object* v_reuseFailAlloc_6675_; 
v_reuseFailAlloc_6675_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6675_, 0, v_value_6669_);
v___x_6674_ = v_reuseFailAlloc_6675_;
goto v_reusejp_6673_;
}
v_reusejp_6673_:
{
v___y_6657_ = v___y_6668_;
v___y_6658_ = v___y_6667_;
v___y_6659_ = v___x_6674_;
goto v___jp_6656_;
}
}
}
else
{
lean_object* v_value_6677_; 
v_value_6677_ = lean_ctor_get(v_mtime_6652_, 0);
lean_inc(v_value_6677_);
lean_dec_ref_known(v_mtime_6652_, 1);
v___y_6657_ = v___y_6668_;
v___y_6658_ = v___y_6667_;
v___y_6659_ = v_value_6677_;
goto v___jp_6656_;
}
}
v___jp_6678_:
{
if (lean_obj_tag(v_atime_6651_) == 0)
{
double v_value_6680_; lean_object* v___x_6682_; uint8_t v_isShared_6683_; uint8_t v_isSharedCheck_6687_; 
v_value_6680_ = lean_ctor_get_float(v_atime_6651_, 0);
v_isSharedCheck_6687_ = !lean_is_exclusive(v_atime_6651_);
if (v_isSharedCheck_6687_ == 0)
{
v___x_6682_ = v_atime_6651_;
v_isShared_6683_ = v_isSharedCheck_6687_;
goto v_resetjp_6681_;
}
else
{
lean_dec(v_atime_6651_);
v___x_6682_ = lean_box(0);
v_isShared_6683_ = v_isSharedCheck_6687_;
goto v_resetjp_6681_;
}
v_resetjp_6681_:
{
lean_object* v___x_6685_; 
if (v_isShared_6683_ == 0)
{
lean_ctor_set_tag(v___x_6682_, 3);
v___x_6685_ = v___x_6682_;
goto v_reusejp_6684_;
}
else
{
lean_object* v_reuseFailAlloc_6686_; 
v_reuseFailAlloc_6686_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6686_, 0, v_value_6680_);
v___x_6685_ = v_reuseFailAlloc_6686_;
goto v_reusejp_6684_;
}
v_reusejp_6684_:
{
v___y_6667_ = v___y_6679_;
v___y_6668_ = v___x_6685_;
goto v___jp_6666_;
}
}
}
else
{
lean_object* v_value_6688_; 
v_value_6688_ = lean_ctor_get(v_atime_6651_, 0);
lean_inc(v_value_6688_);
lean_dec_ref_known(v_atime_6651_, 1);
v___y_6667_ = v___y_6679_;
v___y_6668_ = v_value_6688_;
goto v___jp_6666_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_utime___boxed(lean_object* v_path_6700_, lean_object* v_atime_6701_, lean_object* v_mtime_6702_, lean_object* v_a_6703_){
_start:
{
lean_object* v_res_6704_; 
v_res_6704_ = l_Lasm_JS_Deno_utime(v_path_6700_, v_atime_6701_, v_mtime_6702_);
return v_res_6704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask(lean_object* v_mask_6713_){
_start:
{
uint8_t v___x_6715_; lean_object* v___x_6716_; lean_object* v___x_6717_; lean_object* v___x_6718_; lean_object* v___x_6719_; lean_object* v___x_6720_; lean_object* v___x_6721_; lean_object* v___x_6722_; 
v___x_6715_ = 0;
v___x_6716_ = lean_unsigned_to_nat(1u);
v___x_6717_ = ((lean_object*)(l_Lasm_JS_Deno_umask___closed__2));
v___x_6718_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_mask_6713_);
v___x_6719_ = lean_mk_empty_array_with_capacity(v___x_6716_);
v___x_6720_ = lean_array_push(v___x_6719_, v___x_6718_);
v___x_6721_ = l_Lasm_JS_Web_Support_args(v___x_6720_);
v___x_6722_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v___x_6717_, v___x_6721_, v___x_6715_);
return v___x_6722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_umask___boxed(lean_object* v_mask_6723_, lean_object* v_a_6724_){
_start:
{
lean_object* v_res_6725_; 
v_res_6725_ = l_Lasm_JS_Deno_umask(v_mask_6723_);
lean_dec(v_mask_6723_);
return v_res_6725_;
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
