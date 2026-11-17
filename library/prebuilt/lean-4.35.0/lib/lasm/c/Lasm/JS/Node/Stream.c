// Lean compiler output
// Module: Lasm.JS.Node.Stream
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Streams public import Lasm.JS.Web.Webidl public import Lasm.JS.Node.Events
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
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSJSFunction___lam__0(lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_instToJSByteLengthQueuingStrategy___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritable___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritable_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritable = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritable_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritable___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritable;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableEventEmitter___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableEventEmitter___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamWritableEventEmitter_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamWritableEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamWritableEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamWritableEventEmitter_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadable_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadable = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadable_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamReadable;
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamReadableEventEmitter_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamWritableEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamReadableEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamReadableEventEmitter_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamDuplex_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamDuplex = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamDuplex_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamDuplex;
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamDuplexStreamReadable_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamWritableEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadable = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamDuplexStreamReadable_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamTransform_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamTransform = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamTransform_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamTransform;
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamPassThrough_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamPassThrough = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamPassThrough_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamPassThrough;
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritableCloseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritableCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritableCloseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritableCloseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritableDrainListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritableDrainListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritableDrainListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritableDrainListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_DrainListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_DrainListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_DrainListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_DrainListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritableErrorListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritableErrorListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritableErrorListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritableErrorListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritableFinishListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritableFinishListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritableFinishListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritableFinishListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_FinishListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_FinishListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_FinishListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_FinishListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritablePipeListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritablePipeListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritablePipeListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritablePipeListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritableUnpipeListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritableUnpipeListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritableUnpipeListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritableUnpipeListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions;
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableCloseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableCloseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamReadableCloseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableDataListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableDataListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableDataListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamReadableDataListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableEndListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableEndListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableEndListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamReadableEndListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableErrorListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableErrorListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableErrorListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamReadableErrorListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadablePauseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadablePauseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadablePauseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamReadablePauseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableReadableListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableReadableListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableReadableListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamReadableReadableListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableResumeListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableResumeListener = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableResumeListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamReadableResumeListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadablePipeOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadablePipeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_duplex_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_duplex_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_transformStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_transformStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeTransformStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeTransformStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeTransformStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeTransformStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeTransformStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableComposeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableMapOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableMapOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFilterOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFilterOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableForEachOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableForEachOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToArrayOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableSomeOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableSomeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFindOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFindOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableEveryOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableEveryOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableDropOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableTakeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableReduceOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToWebOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToWebOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_eventEmitter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_eventEmitter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_writableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_writableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrReadableStreamOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrReadableStreamOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrReadableStreamOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrReadableStreamOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrReadableStreamOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrReadableStreamOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrReadableStreamOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrReadableStreamOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrReadableStreamOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrReadableStreamOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrReadableStreamOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrReadableStreamOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamFinishedOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamFinishedOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_eventEmitter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_eventEmitter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrObjectOrJSFunctionOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrObjectOrJSFunctionOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrObjectOrJSFunctionOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrObjectOrJSFunctionOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrObjectOrJSFunctionOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrObjectOrJSFunctionOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrObjectOrJSFunctionOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrObjectOrJSFunctionOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrObjectOrJSFunctionOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_eventEmitter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_eventEmitter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_writableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_writableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrJSFunctionOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrJSFunctionOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrJSFunctionOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrJSFunctionOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_eventEmitter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_eventEmitter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_transformStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_transformStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeTransformStreamEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeTransformStreamEventEmitterOrJSFunctionOrTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeTransformStreamEventEmitterOrJSFunctionOrTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeTransformStreamEventEmitterOrJSFunctionOrTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeTransformStreamEventEmitterOrJSFunctionOrTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence2_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence2_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence3_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence3_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence4_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence4_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence5_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence5_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence6_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence6_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence2_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence2_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence3_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence3_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence4_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence4_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence5_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence5_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence6_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence6_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence7_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence7_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayStreamDuplexSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayStreamDuplexSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayStreamDuplexSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayStreamDuplexSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayStreamDuplexSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_readable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_readable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_writable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_writable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_duplex_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_duplex_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplex___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplex_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplex___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplex = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplex_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplex___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplex_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplex___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplex = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplex_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplex___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplex_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplex___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplex = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplex_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_duplex_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_duplex_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeWritableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeWritableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeWritableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_duplex_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_duplex_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrDuplexOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrDuplexOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrDuplexOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrDuplexOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrDuplexOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrDuplexOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrDuplexOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrDuplexOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrDuplexOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrDuplexOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrDuplexOrReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrDuplexOrReadableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrDuplexOrReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrDuplexOrReadableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrDuplexOrReadableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_duplex_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_duplex_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStream_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStream = (const lean_object*)&l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStream_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamPipelineOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamPipelineOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamFinishedOptions2___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamFinishedOptions2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritable___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritable___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSStreamWritable___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamWritable(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Writable", 28, 28);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableEventEmitter___lam__0(lean_object* v_self_16_){
_start:
{
lean_inc(v_self_16_);
return v_self_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableEventEmitter___lam__0___boxed(lean_object* v_self_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lasm_JS_Node_instCoeStreamWritableEventEmitter___lam__0(v_self_17_);
lean_dec(v_self_17_);
return v_res_18_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadable(void){
_start:
{
lean_object* v___f_21_; lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; 
v___f_21_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_22_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable", 28, 28);
v___x_23_ = 0;
v___x_24_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_24_, 0, v___f_21_);
lean_ctor_set(v___x_24_, 1, v___x_22_);
lean_ctor_set_uint8(v___x_24_, sizeof(void*)*2, v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamDuplex(void){
_start:
{
lean_object* v___f_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_28_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Duplex", 26, 26);
v___x_29_ = 0;
v___x_30_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_30_, 0, v___f_27_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set_uint8(v___x_30_, sizeof(void*)*2, v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamTransform(void){
_start:
{
lean_object* v___f_33_; lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; 
v___f_33_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_34_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Transform", 29, 29);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_36_, 0, v___f_33_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamPassThrough(void){
_start:
{
lean_object* v___f_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; 
v___f_38_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_39_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.PassThrough", 31, 31);
v___x_40_ = 0;
v___x_41_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_41_, 0, v___f_38_);
lean_ctor_set(v___x_41_, 1, v___x_39_);
lean_ctor_set_uint8(v___x_41_, sizeof(void*)*2, v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamWritableCloseListener(void){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; uint8_t v___x_45_; lean_object* v___x_46_; 
v___f_43_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_44_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Writable.CloseListener", 42, 42);
v___x_45_ = 0;
v___x_46_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_46_, 0, v___f_43_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
lean_ctor_set_uint8(v___x_46_, sizeof(void*)*2, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0(lean_object* v_x_47_){
_start:
{
if (lean_obj_tag(v_x_47_) == 0)
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_57_; 
v_a_49_ = lean_ctor_get(v_x_47_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v_x_47_);
if (v_isSharedCheck_57_ == 0)
{
v___x_51_ = v_x_47_;
v_isShared_52_ = v_isSharedCheck_57_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v_x_47_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_57_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_a_49_);
v___x_54_ = v_reuseFailAlloc_56_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
lean_object* v___x_55_; 
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
}
}
else
{
lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_66_; 
v_isSharedCheck_66_ = !lean_is_exclusive(v_x_47_);
if (v_isSharedCheck_66_ == 0)
{
lean_object* v_unused_67_; 
v_unused_67_ = lean_ctor_get(v_x_47_, 0);
lean_dec(v_unused_67_);
v___x_59_ = v_x_47_;
v_isShared_60_ = v_isSharedCheck_66_;
goto v_resetjp_58_;
}
else
{
lean_dec(v_x_47_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_66_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_61_; lean_object* v___x_63_; 
v___x_61_ = lean_box(0);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 0, v___x_61_);
v___x_63_ = v___x_59_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_61_);
v___x_63_ = v_reuseFailAlloc_65_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
lean_object* v___x_64_; 
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed(lean_object* v_x_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0(v_x_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1(lean_object* v_f_71_, lean_object* v___f_72_, lean_object* v_x_73_){
_start:
{
lean_object* v___x_75_; uint8_t v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_75_ = lean_unsigned_to_nat(0u);
v___x_76_ = 0;
v___x_77_ = lean_apply_1(v_f_71_, lean_box(0));
v___x_78_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_75_, v___x_76_, v___x_77_, v___f_72_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed(lean_object* v_f_79_, lean_object* v___f_80_, lean_object* v_x_81_, lean_object* v___y_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1(v_f_79_, v___f_80_, v_x_81_);
lean_dec_ref(v_x_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn(lean_object* v_f_84_){
_start:
{
lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___f_86_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_87_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_87_, 0, v_f_84_);
lean_closure_set(v___f_87_, 1, v___f_86_);
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = l_Lasm_JS_Function_ofFn(v___f_87_, v___x_88_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_97_; 
v_a_90_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_97_ == 0)
{
v___x_92_ = v___x_89_;
v_isShared_93_ = v_isSharedCheck_97_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_a_90_);
lean_dec(v___x_89_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_97_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_95_; 
if (v_isShared_93_ == 0)
{
v___x_95_ = v___x_92_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_a_90_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
else
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_105_; 
v_a_98_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_105_ == 0)
{
v___x_100_ = v___x_89_;
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_89_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___boxed(lean_object* v_f_106_, lean_object* v_a_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn(v_f_106_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0(lean_object* v_f_109_, lean_object* v_x_110_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lean_apply_1(v_f_109_, lean_box(0));
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_120_; 
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; 
v_unused_121_ = lean_ctor_get(v___x_112_, 0);
lean_dec(v_unused_121_);
v___x_114_ = v___x_112_;
v_isShared_115_ = v_isSharedCheck_120_;
goto v_resetjp_113_;
}
else
{
lean_dec(v___x_112_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_120_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_116_ = lean_box(0);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 0, v___x_116_);
v___x_118_ = v___x_114_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_a_122_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_112_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_112_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed(lean_object* v_f_130_, lean_object* v_x_131_, lean_object* v___y_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0(v_f_130_, v_x_131_);
lean_dec_ref(v_x_131_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn(lean_object* v_f_134_){
_start:
{
lean_object* v___f_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___f_136_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_136_, 0, v_f_134_);
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = l_Lasm_JS_Function_ofSyncFn(v___f_136_, v___x_137_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
v_a_139_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_138_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_138_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
v_a_147_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_138_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_138_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___boxed(lean_object* v_f_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn(v_f_155_);
return v_res_157_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamWritableDrainListener(void){
_start:
{
lean_object* v___f_159_; lean_object* v___x_160_; uint8_t v___x_161_; lean_object* v___x_162_; 
v___f_159_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_160_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Writable.DrainListener", 42, 42);
v___x_161_ = 0;
v___x_162_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_162_, 0, v___f_159_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*2, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_DrainListener_ofFn(lean_object* v_f_163_){
_start:
{
lean_object* v___f_165_; lean_object* v___f_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___f_165_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_166_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_166_, 0, v_f_163_);
lean_closure_set(v___f_166_, 1, v___f_165_);
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = l_Lasm_JS_Function_ofFn(v___f_166_, v___x_167_);
if (lean_obj_tag(v___x_168_) == 0)
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
v_a_169_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___x_168_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v___x_168_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
else
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
v_a_177_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_184_ == 0)
{
v___x_179_ = v___x_168_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_168_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_DrainListener_ofFn___boxed(lean_object* v_f_185_, lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lasm_JS_Node_stream_Writable_DrainListener_ofFn(v_f_185_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_DrainListener_ofSyncFn(lean_object* v_f_188_){
_start:
{
lean_object* v___f_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___f_190_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_190_, 0, v_f_188_);
v___x_191_ = lean_unsigned_to_nat(0u);
v___x_192_ = l_Lasm_JS_Function_ofSyncFn(v___f_190_, v___x_191_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v___x_192_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_192_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_a_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
v_a_201_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_192_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_192_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_DrainListener_ofSyncFn___boxed(lean_object* v_f_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lasm_JS_Node_stream_Writable_DrainListener_ofSyncFn(v_f_209_);
return v_res_211_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamWritableErrorListener(void){
_start:
{
lean_object* v___f_213_; lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; 
v___f_213_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_214_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Writable.ErrorListener", 42, 42);
v___x_215_ = 0;
v___x_216_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_216_, 0, v___f_213_);
lean_ctor_set(v___x_216_, 1, v___x_214_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*2, v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1(lean_object* v_f_217_, lean_object* v___f_218_, lean_object* v_x_219_){
_start:
{
if (lean_obj_tag(v_x_219_) == 0)
{
lean_object* v___x_221_; 
lean_dec_ref(v___f_218_);
lean_dec_ref(v_f_217_);
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v_x_219_);
return v___x_221_;
}
else
{
lean_object* v_a_222_; lean_object* v___x_223_; uint8_t v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_a_222_ = lean_ctor_get(v_x_219_, 0);
lean_inc(v_a_222_);
lean_dec_ref_known(v_x_219_, 1);
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = 0;
v___x_225_ = lean_apply_2(v_f_217_, v_a_222_, lean_box(0));
v___x_226_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_223_, v___x_224_, v___x_225_, v___f_218_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1___boxed(lean_object* v_f_227_, lean_object* v___f_228_, lean_object* v_x_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1(v_f_227_, v___f_228_, v_x_229_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0(lean_object* v_args_232_, lean_object* v_i_233_){
_start:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = lean_array_get_size(v_args_232_);
v___x_236_ = lean_nat_dec_lt(v_i_233_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_box(0);
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
return v___x_238_;
}
else
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_array_fget_borrowed(v_args_232_, v_i_233_);
lean_inc(v___x_239_);
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0___boxed(lean_object* v_args_241_, lean_object* v_i_242_, lean_object* v_a_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0(v_args_241_, v_i_242_);
lean_dec(v_i_242_);
lean_dec_ref(v_args_241_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0(lean_object* v___f_245_, lean_object* v_args_246_){
_start:
{
lean_object* v___x_248_; uint8_t v___x_249_; lean_object* v_val_251_; lean_object* v___x_254_; lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
v___x_248_ = lean_unsigned_to_nat(0u);
v___x_249_ = 0;
v___x_254_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0(v_args_246_, v___x_248_);
v_a_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v___jp_250_:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v_val_251_);
v___x_253_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_248_, v___x_249_, v___x_252_, v___f_245_);
return v___x_253_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 1);
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
v_val_251_ = v___x_260_;
goto v___jp_250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0___boxed(lean_object* v___f_263_, lean_object* v_args_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0(v___f_263_, v_args_264_);
lean_dec_ref(v_args_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn(lean_object* v_f_267_){
_start:
{
lean_object* v___f_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___f_269_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_270_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_270_, 0, v_f_267_);
lean_closure_set(v___f_270_, 1, v___f_269_);
v___f_271_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_271_, 0, v___f_270_);
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = l_Lasm_JS_Function_ofFn(v___f_271_, v___x_272_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
v_a_274_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_273_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_273_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
v_a_282_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_273_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_273_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___boxed(lean_object* v_f_290_, lean_object* v_a_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn(v_f_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0___redArg(lean_object* v_d_293_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v_d_293_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0___redArg___boxed(lean_object* v_d_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0___redArg(v_d_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0(lean_object* v_context_299_, lean_object* v_d_300_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v_d_300_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_303_, lean_object* v_d_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0_spec__0(v_context_303_, v_d_304_);
lean_dec_ref(v_context_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0(lean_object* v_f_307_, lean_object* v_args_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v_a_312_; lean_object* v___x_313_; 
v___x_310_ = lean_unsigned_to_nat(0u);
v___x_311_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_ErrorListener_ofFn_spec__0(v_args_308_, v___x_310_);
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref(v___x_311_);
v___x_313_ = lean_apply_2(v_f_307_, v_a_312_, lean_box(0));
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_321_; 
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_321_ == 0)
{
lean_object* v_unused_322_; 
v_unused_322_ = lean_ctor_get(v___x_313_, 0);
lean_dec(v_unused_322_);
v___x_315_ = v___x_313_;
v_isShared_316_ = v_isSharedCheck_321_;
goto v_resetjp_314_;
}
else
{
lean_dec(v___x_313_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_321_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; lean_object* v___x_319_; 
v___x_317_ = lean_box(0);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_317_);
v___x_319_ = v___x_315_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
v_a_323_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_313_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_313_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0___boxed(lean_object* v_f_331_, lean_object* v_args_332_, lean_object* v___y_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0(v_f_331_, v_args_332_);
lean_dec_ref(v_args_332_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn(lean_object* v_f_335_){
_start:
{
lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___f_337_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_337_, 0, v_f_335_);
v___x_338_ = lean_unsigned_to_nat(0u);
v___x_339_ = l_Lasm_JS_Function_ofSyncFn(v___f_337_, v___x_338_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_339_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_339_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
v_a_348_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_339_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_339_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___boxed(lean_object* v_f_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn(v_f_356_);
return v_res_358_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamWritableFinishListener(void){
_start:
{
lean_object* v___f_360_; lean_object* v___x_361_; uint8_t v___x_362_; lean_object* v___x_363_; 
v___f_360_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_361_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Writable.FinishListener", 43, 43);
v___x_362_ = 0;
v___x_363_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_363_, 0, v___f_360_);
lean_ctor_set(v___x_363_, 1, v___x_361_);
lean_ctor_set_uint8(v___x_363_, sizeof(void*)*2, v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_FinishListener_ofFn(lean_object* v_f_364_){
_start:
{
lean_object* v___f_366_; lean_object* v___f_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___f_366_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_367_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_367_, 0, v_f_364_);
lean_closure_set(v___f_367_, 1, v___f_366_);
v___x_368_ = lean_unsigned_to_nat(0u);
v___x_369_ = l_Lasm_JS_Function_ofFn(v___f_367_, v___x_368_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_377_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_377_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_370_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
v_a_378_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_369_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_369_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_FinishListener_ofFn___boxed(lean_object* v_f_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lasm_JS_Node_stream_Writable_FinishListener_ofFn(v_f_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_FinishListener_ofSyncFn(lean_object* v_f_389_){
_start:
{
lean_object* v___f_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___f_391_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_391_, 0, v_f_389_);
v___x_392_ = lean_unsigned_to_nat(0u);
v___x_393_ = l_Lasm_JS_Function_ofSyncFn(v___f_391_, v___x_392_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
v_a_402_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_393_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_393_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_FinishListener_ofSyncFn___boxed(lean_object* v_f_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lasm_JS_Node_stream_Writable_FinishListener_ofSyncFn(v_f_410_);
return v_res_412_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamWritablePipeListener(void){
_start:
{
lean_object* v___f_414_; lean_object* v___x_415_; uint8_t v___x_416_; lean_object* v___x_417_; 
v___f_414_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_415_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Writable.PipeListener", 41, 41);
v___x_416_ = 0;
v___x_417_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_417_, 0, v___f_414_);
lean_ctor_set(v___x_417_, 1, v___x_415_);
lean_ctor_set_uint8(v___x_417_, sizeof(void*)*2, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__1(lean_object* v_f_418_, lean_object* v___f_419_, lean_object* v_x_420_){
_start:
{
if (lean_obj_tag(v_x_420_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_430_; 
lean_dec_ref(v___f_419_);
lean_dec_ref(v_f_418_);
v_a_422_ = lean_ctor_get(v_x_420_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v_x_420_);
if (v_isSharedCheck_430_ == 0)
{
v___x_424_ = v_x_420_;
v_isShared_425_ = v_isSharedCheck_430_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v_x_420_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_430_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_429_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_428_; 
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
return v___x_428_;
}
}
}
else
{
lean_object* v_a_431_; lean_object* v___x_432_; uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v_a_431_ = lean_ctor_get(v_x_420_, 0);
lean_inc(v_a_431_);
lean_dec_ref_known(v_x_420_, 1);
v___x_432_ = lean_unsigned_to_nat(0u);
v___x_433_ = 0;
v___x_434_ = lean_apply_2(v_f_418_, v_a_431_, lean_box(0));
v___x_435_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_432_, v___x_433_, v___x_434_, v___f_419_);
return v___x_435_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__1___boxed(lean_object* v_f_436_, lean_object* v___f_437_, lean_object* v_x_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__1(v_f_436_, v___f_437_, v_x_438_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0_spec__0(lean_object* v_context_441_, lean_object* v_d_442_){
_start:
{
lean_object* v___y_445_; lean_object* v___y_446_; 
if (lean_obj_tag(v_d_442_) == 9)
{
lean_object* v_value_450_; lean_object* v___x_451_; 
v_value_450_ = lean_ctor_get(v_d_442_, 0);
lean_inc(v_value_450_);
lean_dec_ref_known(v_d_442_, 2);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v_value_450_);
return v___x_451_;
}
else
{
lean_object* v___x_452_; lean_object* v_received_454_; 
v___x_452_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_442_) == 9)
{
lean_object* v_value_470_; lean_object* v_description_471_; uint8_t v___x_472_; 
v_value_470_ = lean_ctor_get(v_d_442_, 0);
v_description_471_ = lean_ctor_get(v_d_442_, 1);
v___x_472_ = lean_string_dec_eq(v_description_471_, v___x_452_);
if (v___x_472_ == 0)
{
goto v___jp_468_;
}
else
{
uint32_t v___x_473_; uint64_t v___x_474_; lean_object* v___x_475_; uint32_t v___x_476_; lean_object* v___x_477_; 
lean_inc_n(v_value_470_, 2);
lean_dec_ref_known(v_d_442_, 2);
v___x_473_ = 206;
v___x_474_ = 0ULL;
lean_inc_ref(v___x_452_);
v___x_475_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_475_, 0, v_value_470_);
lean_ctor_set(v___x_475_, 1, v___x_452_);
v___x_476_ = lasm_js_value_handle(v_value_470_);
lean_dec(v_value_470_);
v___x_477_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_473_, v___x_474_, v___x_475_, v___x_476_);
lean_dec_ref_known(v___x_475_, 2);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; uint8_t v___x_479_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
lean_inc(v_a_478_);
lean_dec_ref_known(v___x_477_, 1);
v___x_479_ = lean_string_validate_utf8(v_a_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
lean_dec(v_a_478_);
v___x_480_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_481_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_482_ = lean_unsigned_to_nat(193u);
v___x_483_ = lean_unsigned_to_nat(46u);
v___x_484_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_485_ = l_mkPanicMessageWithDecl(v___x_480_, v___x_481_, v___x_482_, v___x_483_, v___x_484_);
lean_dec_ref(v___x_484_);
lean_dec_ref(v___x_481_);
lean_dec_ref(v___x_480_);
v___x_486_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_485_);
v_received_454_ = v___x_486_;
goto v___jp_453_;
}
else
{
lean_object* v___x_487_; 
v___x_487_ = lean_string_from_utf8_unchecked(v_a_478_);
v_received_454_ = v___x_487_;
goto v___jp_453_;
}
}
else
{
lean_object* v___x_488_; 
lean_dec_ref_known(v___x_477_, 1);
v___x_488_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_454_ = v___x_488_;
goto v___jp_453_;
}
}
}
else
{
goto v___jp_468_;
}
v___jp_453_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_455_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_456_ = lean_string_append(v___x_455_, v_context_441_);
v___x_457_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_458_ = lean_string_append(v___x_456_, v___x_457_);
lean_dec_ref(v___x_457_);
v___x_459_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable", 28, 28);
v___x_460_ = lean_string_append(v___x_458_, v___x_459_);
lean_dec_ref(v___x_459_);
v___x_461_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_462_ = lean_string_append(v___x_460_, v___x_461_);
lean_dec_ref(v___x_461_);
v___x_463_ = lean_string_append(v___x_462_, v_received_454_);
lean_dec_ref(v_received_454_);
v___x_464_ = lean_string_utf8_byte_size(v___x_452_);
v___x_465_ = lean_unsigned_to_nat(0u);
v___x_466_ = lean_nat_dec_eq(v___x_464_, v___x_465_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; 
lean_dec_ref(v___x_452_);
v___x_467_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_445_ = v___x_463_;
v___y_446_ = v___x_467_;
goto v___jp_444_;
}
else
{
v___y_445_ = v___x_463_;
v___y_446_ = v___x_452_;
goto v___jp_444_;
}
}
v___jp_468_:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lasm_JS_Data_describe(v_d_442_);
v_received_454_ = v___x_469_;
goto v___jp_453_;
}
}
v___jp_444_:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_447_ = lean_string_append(v___y_445_, v___y_446_);
v___x_448_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
v___x_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_489_, lean_object* v_d_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0_spec__0(v_context_489_, v_d_490_);
lean_dec_ref(v_context_489_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0(lean_object* v_args_493_, lean_object* v_i_494_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_496_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_497_ = lean_unsigned_to_nat(1u);
v___x_498_ = lean_nat_add(v_i_494_, v___x_497_);
v___x_499_ = l_Nat_reprFast(v___x_498_);
v___x_500_ = lean_string_append(v___x_496_, v___x_499_);
lean_dec_ref(v___x_499_);
v___x_501_ = lean_array_get_size(v_args_493_);
v___x_502_ = lean_nat_dec_lt(v_i_494_, v___x_501_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_box(0);
v___x_504_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0_spec__0(v___x_500_, v___x_503_);
lean_dec_ref(v___x_500_);
return v___x_504_;
}
else
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_array_fget_borrowed(v_args_493_, v_i_494_);
lean_inc(v___x_505_);
v___x_506_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0_spec__0(v___x_500_, v___x_505_);
lean_dec_ref(v___x_500_);
return v___x_506_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0___boxed(lean_object* v_args_507_, lean_object* v_i_508_, lean_object* v_a_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0(v_args_507_, v_i_508_);
lean_dec(v_i_508_);
lean_dec_ref(v_args_507_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__0(lean_object* v___f_511_, lean_object* v_args_512_){
_start:
{
lean_object* v___x_514_; uint8_t v___x_515_; lean_object* v_val_517_; lean_object* v___x_520_; 
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = 0;
v___x_520_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0(v_args_512_, v___x_514_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set_tag(v___x_523_, 1);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
v_val_517_ = v___x_526_;
goto v___jp_516_;
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
v_a_529_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_520_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_520_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
lean_ctor_set_tag(v___x_531_, 0);
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
v_val_517_ = v___x_534_;
goto v___jp_516_;
}
}
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_518_, 0, v_val_517_);
v___x_519_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_514_, v___x_515_, v___x_518_, v___f_511_);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__0___boxed(lean_object* v___f_537_, lean_object* v_args_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__0(v___f_537_, v_args_538_);
lean_dec_ref(v_args_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn(lean_object* v_f_541_){
_start:
{
lean_object* v___f_543_; lean_object* v___f_544_; lean_object* v___f_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___f_543_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_544_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_544_, 0, v_f_541_);
lean_closure_set(v___f_544_, 1, v___f_543_);
v___f_545_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_545_, 0, v___f_544_);
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = l_Lasm_JS_Function_ofFn(v___f_545_, v___x_546_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
v_a_548_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_547_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_547_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
v_a_556_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_547_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_547_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___boxed(lean_object* v_f_564_, lean_object* v_a_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn(v_f_564_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___lam__0(lean_object* v_f_567_, lean_object* v_args_568_){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_unsigned_to_nat(0u);
v___x_571_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_stream_Writable_PipeListener_ofFn_spec__0(v_args_568_, v___x_570_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v___x_573_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_a_572_);
lean_dec_ref_known(v___x_571_, 1);
v___x_573_ = lean_apply_2(v_f_567_, v_a_572_, lean_box(0));
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_581_; 
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v___x_573_, 0);
lean_dec(v_unused_582_);
v___x_575_ = v___x_573_;
v_isShared_576_ = v_isSharedCheck_581_;
goto v_resetjp_574_;
}
else
{
lean_dec(v___x_573_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_581_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_577_ = lean_box(0);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_577_);
v___x_579_ = v___x_575_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_577_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
v_a_583_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_573_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_573_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec_ref(v_f_567_);
v_a_591_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_571_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_571_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___lam__0___boxed(lean_object* v_f_599_, lean_object* v_args_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___lam__0(v_f_599_, v_args_600_);
lean_dec_ref(v_args_600_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn(lean_object* v_f_603_){
_start:
{
lean_object* v___f_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___f_605_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_605_, 0, v_f_603_);
v___x_606_ = lean_unsigned_to_nat(0u);
v___x_607_ = l_Lasm_JS_Function_ofSyncFn(v___f_605_, v___x_606_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_607_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_607_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
v_a_616_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_607_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_607_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___boxed(lean_object* v_f_624_, lean_object* v_a_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn(v_f_624_);
return v_res_626_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamWritableUnpipeListener(void){
_start:
{
lean_object* v___f_628_; lean_object* v___x_629_; uint8_t v___x_630_; lean_object* v___x_631_; 
v___f_628_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_629_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Writable.UnpipeListener", 43, 43);
v___x_630_ = 0;
v___x_631_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_631_, 0, v___f_628_);
lean_ctor_set(v___x_631_, 1, v___x_629_);
lean_ctor_set_uint8(v___x_631_, sizeof(void*)*2, v___x_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofFn(lean_object* v_f_632_){
_start:
{
lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___f_634_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_635_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_635_, 0, v_f_632_);
lean_closure_set(v___f_635_, 1, v___f_634_);
v___f_636_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_PipeListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_636_, 0, v___f_635_);
v___x_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = l_Lasm_JS_Function_ofFn(v___f_636_, v___x_637_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_638_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
v_a_647_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_638_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_638_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofFn___boxed(lean_object* v_f_655_, lean_object* v_a_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofFn(v_f_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofSyncFn(lean_object* v_f_658_){
_start:
{
lean_object* v___f_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___f_660_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_PipeListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_660_, 0, v_f_658_);
v___x_661_ = lean_unsigned_to_nat(0u);
v___x_662_ = l_Lasm_JS_Function_ofSyncFn(v___f_660_, v___x_661_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_662_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_662_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_a_671_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_662_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_662_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofSyncFn___boxed(lean_object* v_f_679_, lean_object* v_a_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lasm_JS_Node_stream_Writable_UnpipeListener_ofSyncFn(v_f_679_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions___lam__0(lean_object* v___f_682_, lean_object* v___f_683_, lean_object* v___f_684_, lean_object* v_d_685_){
_start:
{
lean_object* v_decodeStrings_686_; lean_object* v_highWaterMark_687_; lean_object* v_objectMode_688_; lean_object* v_signal_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_decodeStrings_686_ = lean_ctor_get(v_d_685_, 0);
lean_inc(v_decodeStrings_686_);
v_highWaterMark_687_ = lean_ctor_get(v_d_685_, 1);
lean_inc(v_highWaterMark_687_);
v_objectMode_688_ = lean_ctor_get(v_d_685_, 2);
lean_inc(v_objectMode_688_);
v_signal_689_ = lean_ctor_get(v_d_685_, 3);
lean_inc(v_signal_689_);
lean_dec_ref(v_d_685_);
v___x_690_ = lean_mk_string_unchecked("decodeStrings", 13, 13);
lean_inc_ref(v___f_682_);
v___x_691_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_682_, v_decodeStrings_686_);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_690_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
v___x_693_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_694_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_683_, v_highWaterMark_687_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_693_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_697_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_682_, v_objectMode_688_);
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_696_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_700_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_684_, v_signal_689_);
v___x_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = lean_unsigned_to_nat(4u);
v___x_703_ = lean_mk_empty_array_with_capacity(v___x_702_);
v___x_704_ = lean_array_push(v___x_703_, v___x_692_);
v___x_705_ = lean_array_push(v___x_704_, v___x_695_);
v___x_706_ = lean_array_push(v___x_705_, v___x_698_);
v___x_707_ = lean_array_push(v___x_706_, v___x_701_);
v___x_708_ = l_Lasm_JS_Web_Internal_fields(v___x_707_);
lean_dec_ref(v___x_707_);
return v___x_708_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions(void){
_start:
{
lean_object* v___f_709_; lean_object* v___f_710_; lean_object* v___f_711_; lean_object* v___f_712_; 
v___f_709_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_710_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_711_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_712_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions___lam__0), 4, 3);
lean_closure_set(v___f_712_, 0, v___f_709_);
lean_closure_set(v___f_712_, 1, v___f_710_);
lean_closure_set(v___f_712_, 2, v___f_711_);
return v___f_712_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableCloseListener(void){
_start:
{
lean_object* v___f_714_; lean_object* v___x_715_; uint8_t v___x_716_; lean_object* v___x_717_; 
v___f_714_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_715_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.CloseListener", 42, 42);
v___x_716_ = 0;
v___x_717_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_717_, 0, v___f_714_);
lean_ctor_set(v___x_717_, 1, v___x_715_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*2, v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofFn(lean_object* v_f_718_){
_start:
{
lean_object* v___f_720_; lean_object* v___f_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___f_720_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_721_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_721_, 0, v_f_718_);
lean_closure_set(v___f_721_, 1, v___f_720_);
v___x_722_ = lean_unsigned_to_nat(0u);
v___x_723_ = l_Lasm_JS_Function_ofFn(v___f_721_, v___x_722_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_723_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
v_a_732_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_723_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_723_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofFn___boxed(lean_object* v_f_740_, lean_object* v_a_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lasm_JS_Node_stream_Readable_CloseListener_ofFn(v_f_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofSyncFn(lean_object* v_f_743_){
_start:
{
lean_object* v___f_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___f_745_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_745_, 0, v_f_743_);
v___x_746_ = lean_unsigned_to_nat(0u);
v___x_747_ = l_Lasm_JS_Function_ofSyncFn(v___f_745_, v___x_746_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_747_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_747_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
v_a_756_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_747_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_747_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofSyncFn___boxed(lean_object* v_f_764_, lean_object* v_a_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lasm_JS_Node_stream_Readable_CloseListener_ofSyncFn(v_f_764_);
return v_res_766_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableDataListener(void){
_start:
{
lean_object* v___f_768_; lean_object* v___x_769_; uint8_t v___x_770_; lean_object* v___x_771_; 
v___f_768_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_769_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.DataListener", 41, 41);
v___x_770_ = 0;
v___x_771_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_771_, 0, v___f_768_);
lean_ctor_set(v___x_771_, 1, v___x_769_);
lean_ctor_set_uint8(v___x_771_, sizeof(void*)*2, v___x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofFn(lean_object* v_f_772_){
_start:
{
lean_object* v___f_774_; lean_object* v___f_775_; lean_object* v___f_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___f_774_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_775_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_775_, 0, v_f_772_);
lean_closure_set(v___f_775_, 1, v___f_774_);
v___f_776_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_776_, 0, v___f_775_);
v___x_777_ = lean_unsigned_to_nat(0u);
v___x_778_ = l_Lasm_JS_Function_ofFn(v___f_776_, v___x_777_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
v_a_787_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_778_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_778_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofFn___boxed(lean_object* v_f_795_, lean_object* v_a_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lasm_JS_Node_stream_Readable_DataListener_ofFn(v_f_795_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofSyncFn(lean_object* v_f_798_){
_start:
{
lean_object* v___f_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___f_800_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_800_, 0, v_f_798_);
v___x_801_ = lean_unsigned_to_nat(0u);
v___x_802_ = l_Lasm_JS_Function_ofSyncFn(v___f_800_, v___x_801_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___x_802_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_802_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_808_; 
if (v_isShared_806_ == 0)
{
v___x_808_ = v___x_805_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_803_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
v_a_811_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_802_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_802_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofSyncFn___boxed(lean_object* v_f_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lasm_JS_Node_stream_Readable_DataListener_ofSyncFn(v_f_819_);
return v_res_821_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableEndListener(void){
_start:
{
lean_object* v___f_823_; lean_object* v___x_824_; uint8_t v___x_825_; lean_object* v___x_826_; 
v___f_823_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_824_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.EndListener", 40, 40);
v___x_825_ = 0;
v___x_826_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_826_, 0, v___f_823_);
lean_ctor_set(v___x_826_, 1, v___x_824_);
lean_ctor_set_uint8(v___x_826_, sizeof(void*)*2, v___x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofFn(lean_object* v_f_827_){
_start:
{
lean_object* v___f_829_; lean_object* v___f_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___f_829_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_830_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_830_, 0, v_f_827_);
lean_closure_set(v___f_830_, 1, v___f_829_);
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = l_Lasm_JS_Function_ofFn(v___f_830_, v___x_831_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
v_a_841_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_832_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_832_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofFn___boxed(lean_object* v_f_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lasm_JS_Node_stream_Readable_EndListener_ofFn(v_f_849_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofSyncFn(lean_object* v_f_852_){
_start:
{
lean_object* v___f_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___f_854_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_854_, 0, v_f_852_);
v___x_855_ = lean_unsigned_to_nat(0u);
v___x_856_ = l_Lasm_JS_Function_ofSyncFn(v___f_854_, v___x_855_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
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
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
v_a_865_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_856_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_856_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofSyncFn___boxed(lean_object* v_f_873_, lean_object* v_a_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lasm_JS_Node_stream_Readable_EndListener_ofSyncFn(v_f_873_);
return v_res_875_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableErrorListener(void){
_start:
{
lean_object* v___f_877_; lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; 
v___f_877_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_878_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.ErrorListener", 42, 42);
v___x_879_ = 0;
v___x_880_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_880_, 0, v___f_877_);
lean_ctor_set(v___x_880_, 1, v___x_878_);
lean_ctor_set_uint8(v___x_880_, sizeof(void*)*2, v___x_879_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofFn(lean_object* v_f_881_){
_start:
{
lean_object* v___f_883_; lean_object* v___f_884_; lean_object* v___f_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___f_883_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_884_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_884_, 0, v_f_881_);
lean_closure_set(v___f_884_, 1, v___f_883_);
v___f_885_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_885_, 0, v___f_884_);
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = l_Lasm_JS_Function_ofFn(v___f_885_, v___x_886_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_887_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_887_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
v_a_896_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_887_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_887_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofFn___boxed(lean_object* v_f_904_, lean_object* v_a_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lasm_JS_Node_stream_Readable_ErrorListener_ofFn(v_f_904_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofSyncFn(lean_object* v_f_907_){
_start:
{
lean_object* v___f_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___f_909_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_909_, 0, v_f_907_);
v___x_910_ = lean_unsigned_to_nat(0u);
v___x_911_ = l_Lasm_JS_Function_ofSyncFn(v___f_909_, v___x_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
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
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
v_a_920_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_911_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_911_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofSyncFn___boxed(lean_object* v_f_928_, lean_object* v_a_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lasm_JS_Node_stream_Readable_ErrorListener_ofSyncFn(v_f_928_);
return v_res_930_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadablePauseListener(void){
_start:
{
lean_object* v___f_932_; lean_object* v___x_933_; uint8_t v___x_934_; lean_object* v___x_935_; 
v___f_932_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_933_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.PauseListener", 42, 42);
v___x_934_ = 0;
v___x_935_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_935_, 0, v___f_932_);
lean_ctor_set(v___x_935_, 1, v___x_933_);
lean_ctor_set_uint8(v___x_935_, sizeof(void*)*2, v___x_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofFn(lean_object* v_f_936_){
_start:
{
lean_object* v___f_938_; lean_object* v___f_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___f_938_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_939_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_939_, 0, v_f_936_);
lean_closure_set(v___f_939_, 1, v___f_938_);
v___x_940_ = lean_unsigned_to_nat(0u);
v___x_941_ = l_Lasm_JS_Function_ofFn(v___f_939_, v___x_940_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_941_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_941_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
v_a_950_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_941_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_941_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofFn___boxed(lean_object* v_f_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lasm_JS_Node_stream_Readable_PauseListener_ofFn(v_f_958_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofSyncFn(lean_object* v_f_961_){
_start:
{
lean_object* v___f_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___f_963_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_963_, 0, v_f_961_);
v___x_964_ = lean_unsigned_to_nat(0u);
v___x_965_ = l_Lasm_JS_Function_ofSyncFn(v___f_963_, v___x_964_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
else
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofSyncFn___boxed(lean_object* v_f_982_, lean_object* v_a_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_Lasm_JS_Node_stream_Readable_PauseListener_ofSyncFn(v_f_982_);
return v_res_984_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableReadableListener(void){
_start:
{
lean_object* v___f_986_; lean_object* v___x_987_; uint8_t v___x_988_; lean_object* v___x_989_; 
v___f_986_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_987_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.ReadableListener", 45, 45);
v___x_988_ = 0;
v___x_989_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_989_, 0, v___f_986_);
lean_ctor_set(v___x_989_, 1, v___x_987_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*2, v___x_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofFn(lean_object* v_f_990_){
_start:
{
lean_object* v___f_992_; lean_object* v___f_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___f_992_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_993_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_993_, 0, v_f_990_);
lean_closure_set(v___f_993_, 1, v___f_992_);
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = l_Lasm_JS_Function_ofFn(v___f_993_, v___x_994_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_995_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_995_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
v_a_1004_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_995_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_995_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofFn___boxed(lean_object* v_f_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lasm_JS_Node_stream_Readable_ReadableListener_ofFn(v_f_1012_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofSyncFn(lean_object* v_f_1015_){
_start:
{
lean_object* v___f_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___f_1017_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1017_, 0, v_f_1015_);
v___x_1018_ = lean_unsigned_to_nat(0u);
v___x_1019_ = l_Lasm_JS_Function_ofSyncFn(v___f_1017_, v___x_1018_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
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
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
v_a_1028_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1019_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1019_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofSyncFn___boxed(lean_object* v_f_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l_Lasm_JS_Node_stream_Readable_ReadableListener_ofSyncFn(v_f_1036_);
return v_res_1038_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableResumeListener(void){
_start:
{
lean_object* v___f_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; lean_object* v___x_1043_; 
v___f_1040_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_1041_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.ResumeListener", 43, 43);
v___x_1042_ = 0;
v___x_1043_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1043_, 0, v___f_1040_);
lean_ctor_set(v___x_1043_, 1, v___x_1041_);
lean_ctor_set_uint8(v___x_1043_, sizeof(void*)*2, v___x_1042_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofFn(lean_object* v_f_1044_){
_start:
{
lean_object* v___f_1046_; lean_object* v___f_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___f_1046_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1047_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1047_, 0, v_f_1044_);
lean_closure_set(v___f_1047_, 1, v___f_1046_);
v___x_1048_ = lean_unsigned_to_nat(0u);
v___x_1049_ = l_Lasm_JS_Function_ofFn(v___f_1047_, v___x_1048_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_a_1058_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1049_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1049_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofFn___boxed(lean_object* v_f_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lasm_JS_Node_stream_Readable_ResumeListener_ofFn(v_f_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofSyncFn(lean_object* v_f_1069_){
_start:
{
lean_object* v___f_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___f_1071_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1071_, 0, v_f_1069_);
v___x_1072_ = lean_unsigned_to_nat(0u);
v___x_1073_ = l_Lasm_JS_Function_ofSyncFn(v___f_1071_, v___x_1072_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1073_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1073_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
v_a_1082_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1073_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1073_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofSyncFn___boxed(lean_object* v_f_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Lasm_JS_Node_stream_Readable_ResumeListener_ofSyncFn(v_f_1090_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadablePipeOptions___lam__0(lean_object* v___f_1093_, lean_object* v_d_1094_){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1095_ = lean_mk_string_unchecked("end", 3, 3);
v___x_1096_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1093_, v_d_1094_);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = lean_unsigned_to_nat(1u);
v___x_1099_ = lean_mk_empty_array_with_capacity(v___x_1098_);
v___x_1100_ = lean_array_push(v___x_1099_, v___x_1097_);
v___x_1101_ = l_Lasm_JS_Web_Internal_fields(v___x_1100_);
lean_dec_ref(v___x_1100_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadablePipeOptions(void){
_start:
{
lean_object* v___f_1102_; lean_object* v___f_1103_; 
v___f_1102_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1103_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadablePipeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1103_, 0, v___f_1102_);
return v___f_1103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorIdx(lean_object* v_x_1104_){
_start:
{
switch(lean_obj_tag(v_x_1104_))
{
case 0:
{
lean_object* v___x_1105_; 
v___x_1105_ = lean_unsigned_to_nat(0u);
return v___x_1105_;
}
case 1:
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_unsigned_to_nat(1u);
return v___x_1106_;
}
case 2:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_unsigned_to_nat(2u);
return v___x_1107_;
}
case 3:
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_unsigned_to_nat(3u);
return v___x_1108_;
}
default: 
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_unsigned_to_nat(4u);
return v___x_1109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorIdx___boxed(lean_object* v_x_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorIdx(v_x_1110_);
lean_dec_ref(v_x_1110_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(lean_object* v_t_1112_, lean_object* v_k_1113_){
_start:
{
lean_object* v_value_1114_; lean_object* v___x_1115_; 
v_value_1114_ = lean_ctor_get(v_t_1112_, 0);
lean_inc(v_value_1114_);
lean_dec_ref(v_t_1112_);
v___x_1115_ = lean_apply_1(v_k_1113_, v_value_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim(lean_object* v_motive_1116_, lean_object* v_ctorIdx_1117_, lean_object* v_t_1118_, lean_object* v_h_1119_, lean_object* v_k_1120_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1118_, v_k_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___boxed(lean_object* v_motive_1122_, lean_object* v_ctorIdx_1123_, lean_object* v_t_1124_, lean_object* v_h_1125_, lean_object* v_k_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim(v_motive_1122_, v_ctorIdx_1123_, v_t_1124_, v_h_1125_, v_k_1126_);
lean_dec(v_ctorIdx_1123_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writable_elim___redArg(lean_object* v_t_1128_, lean_object* v_writable_1129_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1128_, v_writable_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writable_elim(lean_object* v_motive_1131_, lean_object* v_t_1132_, lean_object* v_h_1133_, lean_object* v_writable_1134_){
_start:
{
lean_object* v___x_1135_; 
v___x_1135_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1132_, v_writable_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_duplex_elim___redArg(lean_object* v_t_1136_, lean_object* v_duplex_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1136_, v_duplex_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_duplex_elim(lean_object* v_motive_1139_, lean_object* v_t_1140_, lean_object* v_h_1141_, lean_object* v_duplex_1142_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1140_, v_duplex_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writableStream_elim___redArg(lean_object* v_t_1144_, lean_object* v_writableStream_1145_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1144_, v_writableStream_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writableStream_elim(lean_object* v_motive_1147_, lean_object* v_t_1148_, lean_object* v_h_1149_, lean_object* v_writableStream_1150_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1148_, v_writableStream_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_transformStream_elim___redArg(lean_object* v_t_1152_, lean_object* v_transformStream_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1152_, v_transformStream_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_transformStream_elim(lean_object* v_motive_1155_, lean_object* v_t_1156_, lean_object* v_h_1157_, lean_object* v_transformStream_1158_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1156_, v_transformStream_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_jsFunction_elim___redArg(lean_object* v_t_1160_, lean_object* v_jsFunction_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1160_, v_jsFunction_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_jsFunction_elim(lean_object* v_motive_1163_, lean_object* v_t_1164_, lean_object* v_h_1165_, lean_object* v_jsFunction_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1164_, v_jsFunction_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_x_1168_){
_start:
{
lean_object* v_value_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v_value_1169_ = lean_ctor_get(v_x_1168_, 0);
v___x_1170_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1169_);
v___x_1171_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1171_, 0, v_value_1169_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0___boxed(lean_object* v_x_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(v_x_1172_);
lean_dec_ref(v_x_1172_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1175_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v_value_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1178_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1179_, 0, v_value_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1181_){
_start:
{
lean_object* v___x_1182_; 
v___x_1182_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1182_, 0, v_value_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeTransformStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1185_, 0, v_value_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1187_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_value_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0(lean_object* v___f_1190_, lean_object* v_d_1191_){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1192_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1193_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1190_, v_d_1191_);
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1192_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
v___x_1195_ = lean_unsigned_to_nat(1u);
v___x_1196_ = lean_mk_empty_array_with_capacity(v___x_1195_);
v___x_1197_ = lean_array_push(v___x_1196_, v___x_1194_);
v___x_1198_ = l_Lasm_JS_Web_Internal_fields(v___x_1197_);
lean_dec_ref(v___x_1197_);
return v___x_1198_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableComposeOptions(void){
_start:
{
lean_object* v___f_1199_; lean_object* v___f_1200_; 
v___f_1199_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1200_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1200_, 0, v___f_1199_);
return v___f_1200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions___lam__0(lean_object* v___f_1201_, lean_object* v_d_1202_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1203_ = lean_mk_string_unchecked("destroyOnReturn", 15, 15);
v___x_1204_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1201_, v_d_1202_);
v___x_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1203_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v___x_1206_ = lean_unsigned_to_nat(1u);
v___x_1207_ = lean_mk_empty_array_with_capacity(v___x_1206_);
v___x_1208_ = lean_array_push(v___x_1207_, v___x_1205_);
v___x_1209_ = l_Lasm_JS_Web_Internal_fields(v___x_1208_);
lean_dec_ref(v___x_1208_);
return v___x_1209_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions(void){
_start:
{
lean_object* v___f_1210_; lean_object* v___f_1211_; 
v___f_1210_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1211_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions___lam__0), 2, 1);
lean_closure_set(v___f_1211_, 0, v___f_1210_);
return v___f_1211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableMapOptions___lam__0(lean_object* v___f_1212_, lean_object* v___f_1213_, lean_object* v___f_1214_, lean_object* v_d_1215_){
_start:
{
lean_object* v_concurrency_1216_; lean_object* v_highWaterMark_1217_; lean_object* v_signal_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v_concurrency_1216_ = lean_ctor_get(v_d_1215_, 0);
lean_inc(v_concurrency_1216_);
v_highWaterMark_1217_ = lean_ctor_get(v_d_1215_, 1);
lean_inc(v_highWaterMark_1217_);
v_signal_1218_ = lean_ctor_get(v_d_1215_, 2);
lean_inc(v_signal_1218_);
lean_dec_ref(v_d_1215_);
v___x_1219_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1220_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1212_, v_concurrency_1216_);
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1219_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1223_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1213_, v_highWaterMark_1217_);
v___x_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1222_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
v___x_1225_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1226_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1214_, v_signal_1218_);
v___x_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = lean_unsigned_to_nat(3u);
v___x_1229_ = lean_mk_empty_array_with_capacity(v___x_1228_);
v___x_1230_ = lean_array_push(v___x_1229_, v___x_1221_);
v___x_1231_ = lean_array_push(v___x_1230_, v___x_1224_);
v___x_1232_ = lean_array_push(v___x_1231_, v___x_1227_);
v___x_1233_ = l_Lasm_JS_Web_Internal_fields(v___x_1232_);
lean_dec_ref(v___x_1232_);
return v___x_1233_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableMapOptions(void){
_start:
{
lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___f_1236_; lean_object* v___f_1237_; 
v___f_1234_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1235_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1236_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1237_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableMapOptions___lam__0), 4, 3);
lean_closure_set(v___f_1237_, 0, v___f_1234_);
lean_closure_set(v___f_1237_, 1, v___f_1235_);
lean_closure_set(v___f_1237_, 2, v___f_1236_);
return v___f_1237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFilterOptions___lam__0(lean_object* v___f_1238_, lean_object* v___f_1239_, lean_object* v___f_1240_, lean_object* v_d_1241_){
_start:
{
lean_object* v_concurrency_1242_; lean_object* v_highWaterMark_1243_; lean_object* v_signal_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v_concurrency_1242_ = lean_ctor_get(v_d_1241_, 0);
lean_inc(v_concurrency_1242_);
v_highWaterMark_1243_ = lean_ctor_get(v_d_1241_, 1);
lean_inc(v_highWaterMark_1243_);
v_signal_1244_ = lean_ctor_get(v_d_1241_, 2);
lean_inc(v_signal_1244_);
lean_dec_ref(v_d_1241_);
v___x_1245_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1246_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1238_, v_concurrency_1242_);
v___x_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1245_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1249_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1239_, v_highWaterMark_1243_);
v___x_1250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
v___x_1251_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1252_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1240_, v_signal_1244_);
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1251_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lean_unsigned_to_nat(3u);
v___x_1255_ = lean_mk_empty_array_with_capacity(v___x_1254_);
v___x_1256_ = lean_array_push(v___x_1255_, v___x_1247_);
v___x_1257_ = lean_array_push(v___x_1256_, v___x_1250_);
v___x_1258_ = lean_array_push(v___x_1257_, v___x_1253_);
v___x_1259_ = l_Lasm_JS_Web_Internal_fields(v___x_1258_);
lean_dec_ref(v___x_1258_);
return v___x_1259_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableFilterOptions(void){
_start:
{
lean_object* v___f_1260_; lean_object* v___f_1261_; lean_object* v___f_1262_; lean_object* v___f_1263_; 
v___f_1260_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1261_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1262_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1263_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableFilterOptions___lam__0), 4, 3);
lean_closure_set(v___f_1263_, 0, v___f_1260_);
lean_closure_set(v___f_1263_, 1, v___f_1261_);
lean_closure_set(v___f_1263_, 2, v___f_1262_);
return v___f_1263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableForEachOptions___lam__0(lean_object* v___f_1264_, lean_object* v___f_1265_, lean_object* v_d_1266_){
_start:
{
lean_object* v_concurrency_1267_; lean_object* v_signal_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1285_; 
v_concurrency_1267_ = lean_ctor_get(v_d_1266_, 0);
v_signal_1268_ = lean_ctor_get(v_d_1266_, 1);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_d_1266_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1270_ = v_d_1266_;
v_isShared_1271_ = v_isSharedCheck_1285_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_signal_1268_);
lean_inc(v_concurrency_1267_);
lean_dec(v_d_1266_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1285_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1275_; 
v___x_1272_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1273_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1264_, v_concurrency_1267_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 1, v___x_1273_);
lean_ctor_set(v___x_1270_, 0, v___x_1272_);
v___x_1275_ = v___x_1270_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1272_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1276_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1277_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1265_, v_signal_1268_);
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1276_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = lean_unsigned_to_nat(2u);
v___x_1280_ = lean_mk_empty_array_with_capacity(v___x_1279_);
v___x_1281_ = lean_array_push(v___x_1280_, v___x_1275_);
v___x_1282_ = lean_array_push(v___x_1281_, v___x_1278_);
v___x_1283_ = l_Lasm_JS_Web_Internal_fields(v___x_1282_);
lean_dec_ref(v___x_1282_);
return v___x_1283_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableForEachOptions(void){
_start:
{
lean_object* v___f_1286_; lean_object* v___f_1287_; lean_object* v___f_1288_; 
v___f_1286_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1287_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1288_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableForEachOptions___lam__0), 3, 2);
lean_closure_set(v___f_1288_, 0, v___f_1286_);
lean_closure_set(v___f_1288_, 1, v___f_1287_);
return v___f_1288_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableToArrayOptions(void){
_start:
{
lean_object* v___f_1289_; lean_object* v___f_1290_; 
v___f_1289_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1290_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1290_, 0, v___f_1289_);
return v___f_1290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableSomeOptions___lam__0(lean_object* v___f_1291_, lean_object* v___f_1292_, lean_object* v_d_1293_){
_start:
{
lean_object* v_concurrency_1294_; lean_object* v_signal_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1312_; 
v_concurrency_1294_ = lean_ctor_get(v_d_1293_, 0);
v_signal_1295_ = lean_ctor_get(v_d_1293_, 1);
v_isSharedCheck_1312_ = !lean_is_exclusive(v_d_1293_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1297_ = v_d_1293_;
v_isShared_1298_ = v_isSharedCheck_1312_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_signal_1295_);
lean_inc(v_concurrency_1294_);
lean_dec(v_d_1293_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1312_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1302_; 
v___x_1299_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1300_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1291_, v_concurrency_1294_);
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 1, v___x_1300_);
lean_ctor_set(v___x_1297_, 0, v___x_1299_);
v___x_1302_ = v___x_1297_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1311_, 1, v___x_1300_);
v___x_1302_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1303_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1304_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1292_, v_signal_1295_);
v___x_1305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = lean_unsigned_to_nat(2u);
v___x_1307_ = lean_mk_empty_array_with_capacity(v___x_1306_);
v___x_1308_ = lean_array_push(v___x_1307_, v___x_1302_);
v___x_1309_ = lean_array_push(v___x_1308_, v___x_1305_);
v___x_1310_ = l_Lasm_JS_Web_Internal_fields(v___x_1309_);
lean_dec_ref(v___x_1309_);
return v___x_1310_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableSomeOptions(void){
_start:
{
lean_object* v___f_1313_; lean_object* v___f_1314_; lean_object* v___f_1315_; 
v___f_1313_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1314_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1315_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableSomeOptions___lam__0), 3, 2);
lean_closure_set(v___f_1315_, 0, v___f_1313_);
lean_closure_set(v___f_1315_, 1, v___f_1314_);
return v___f_1315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFindOptions___lam__0(lean_object* v___f_1316_, lean_object* v___f_1317_, lean_object* v_d_1318_){
_start:
{
lean_object* v_concurrency_1319_; lean_object* v_signal_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1337_; 
v_concurrency_1319_ = lean_ctor_get(v_d_1318_, 0);
v_signal_1320_ = lean_ctor_get(v_d_1318_, 1);
v_isSharedCheck_1337_ = !lean_is_exclusive(v_d_1318_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1322_ = v_d_1318_;
v_isShared_1323_ = v_isSharedCheck_1337_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_signal_1320_);
lean_inc(v_concurrency_1319_);
lean_dec(v_d_1318_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1337_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1327_; 
v___x_1324_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1325_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1316_, v_concurrency_1319_);
if (v_isShared_1323_ == 0)
{
lean_ctor_set(v___x_1322_, 1, v___x_1325_);
lean_ctor_set(v___x_1322_, 0, v___x_1324_);
v___x_1327_ = v___x_1322_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1324_);
lean_ctor_set(v_reuseFailAlloc_1336_, 1, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1328_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1329_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1317_, v_signal_1320_);
v___x_1330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = lean_unsigned_to_nat(2u);
v___x_1332_ = lean_mk_empty_array_with_capacity(v___x_1331_);
v___x_1333_ = lean_array_push(v___x_1332_, v___x_1327_);
v___x_1334_ = lean_array_push(v___x_1333_, v___x_1330_);
v___x_1335_ = l_Lasm_JS_Web_Internal_fields(v___x_1334_);
lean_dec_ref(v___x_1334_);
return v___x_1335_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableFindOptions(void){
_start:
{
lean_object* v___f_1338_; lean_object* v___f_1339_; lean_object* v___f_1340_; 
v___f_1338_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1339_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1340_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableFindOptions___lam__0), 3, 2);
lean_closure_set(v___f_1340_, 0, v___f_1338_);
lean_closure_set(v___f_1340_, 1, v___f_1339_);
return v___f_1340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableEveryOptions___lam__0(lean_object* v___f_1341_, lean_object* v___f_1342_, lean_object* v_d_1343_){
_start:
{
lean_object* v_concurrency_1344_; lean_object* v_signal_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1362_; 
v_concurrency_1344_ = lean_ctor_get(v_d_1343_, 0);
v_signal_1345_ = lean_ctor_get(v_d_1343_, 1);
v_isSharedCheck_1362_ = !lean_is_exclusive(v_d_1343_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1347_ = v_d_1343_;
v_isShared_1348_ = v_isSharedCheck_1362_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_signal_1345_);
lean_inc(v_concurrency_1344_);
lean_dec(v_d_1343_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1362_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1349_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1350_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1341_, v_concurrency_1344_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 1, v___x_1350_);
lean_ctor_set(v___x_1347_, 0, v___x_1349_);
v___x_1352_ = v___x_1347_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1349_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1353_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1354_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1342_, v_signal_1345_);
v___x_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1353_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = lean_unsigned_to_nat(2u);
v___x_1357_ = lean_mk_empty_array_with_capacity(v___x_1356_);
v___x_1358_ = lean_array_push(v___x_1357_, v___x_1352_);
v___x_1359_ = lean_array_push(v___x_1358_, v___x_1355_);
v___x_1360_ = l_Lasm_JS_Web_Internal_fields(v___x_1359_);
lean_dec_ref(v___x_1359_);
return v___x_1360_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableEveryOptions(void){
_start:
{
lean_object* v___f_1363_; lean_object* v___f_1364_; lean_object* v___f_1365_; 
v___f_1363_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1364_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1365_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableEveryOptions___lam__0), 3, 2);
lean_closure_set(v___f_1365_, 0, v___f_1363_);
lean_closure_set(v___f_1365_, 1, v___f_1364_);
return v___f_1365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions___lam__0(lean_object* v___f_1366_, lean_object* v___f_1367_, lean_object* v_d_1368_){
_start:
{
lean_object* v_concurrency_1369_; lean_object* v_signal_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1387_; 
v_concurrency_1369_ = lean_ctor_get(v_d_1368_, 0);
v_signal_1370_ = lean_ctor_get(v_d_1368_, 1);
v_isSharedCheck_1387_ = !lean_is_exclusive(v_d_1368_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1372_ = v_d_1368_;
v_isShared_1373_ = v_isSharedCheck_1387_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_signal_1370_);
lean_inc(v_concurrency_1369_);
lean_dec(v_d_1368_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1387_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1374_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1375_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1366_, v_concurrency_1369_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 1, v___x_1375_);
lean_ctor_set(v___x_1372_, 0, v___x_1374_);
v___x_1377_ = v___x_1372_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v___x_1374_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1378_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1379_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1367_, v_signal_1370_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1378_);
lean_ctor_set(v___x_1380_, 1, v___x_1379_);
v___x_1381_ = lean_unsigned_to_nat(2u);
v___x_1382_ = lean_mk_empty_array_with_capacity(v___x_1381_);
v___x_1383_ = lean_array_push(v___x_1382_, v___x_1377_);
v___x_1384_ = lean_array_push(v___x_1383_, v___x_1380_);
v___x_1385_ = l_Lasm_JS_Web_Internal_fields(v___x_1384_);
lean_dec_ref(v___x_1384_);
return v___x_1385_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions(void){
_start:
{
lean_object* v___f_1388_; lean_object* v___f_1389_; lean_object* v___f_1390_; 
v___f_1388_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1389_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1390_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions___lam__0), 3, 2);
lean_closure_set(v___f_1390_, 0, v___f_1388_);
lean_closure_set(v___f_1390_, 1, v___f_1389_);
return v___f_1390_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableDropOptions(void){
_start:
{
lean_object* v___f_1391_; lean_object* v___f_1392_; 
v___f_1391_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1392_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1392_, 0, v___f_1391_);
return v___f_1392_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableTakeOptions(void){
_start:
{
lean_object* v___f_1393_; lean_object* v___f_1394_; 
v___f_1393_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1394_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1394_, 0, v___f_1393_);
return v___f_1394_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableReduceOptions(void){
_start:
{
lean_object* v___f_1395_; lean_object* v___f_1396_; 
v___f_1395_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1396_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1396_, 0, v___f_1395_);
return v___f_1396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions___lam__0(lean_object* v___f_1397_, lean_object* v___f_1398_, lean_object* v___f_1399_, lean_object* v___f_1400_, lean_object* v_d_1401_){
_start:
{
lean_object* v_encoding_1402_; lean_object* v_highWaterMark_1403_; lean_object* v_objectMode_1404_; lean_object* v_signal_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v_encoding_1402_ = lean_ctor_get(v_d_1401_, 0);
lean_inc(v_encoding_1402_);
v_highWaterMark_1403_ = lean_ctor_get(v_d_1401_, 1);
lean_inc(v_highWaterMark_1403_);
v_objectMode_1404_ = lean_ctor_get(v_d_1401_, 2);
lean_inc(v_objectMode_1404_);
v_signal_1405_ = lean_ctor_get(v_d_1401_, 3);
lean_inc(v_signal_1405_);
lean_dec_ref(v_d_1401_);
v___x_1406_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1407_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1397_, v_encoding_1402_);
v___x_1408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1406_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1410_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1398_, v_highWaterMark_1403_);
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1409_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_1413_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1399_, v_objectMode_1404_);
v___x_1414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1416_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1400_, v_signal_1405_);
v___x_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1415_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
v___x_1418_ = lean_unsigned_to_nat(4u);
v___x_1419_ = lean_mk_empty_array_with_capacity(v___x_1418_);
v___x_1420_ = lean_array_push(v___x_1419_, v___x_1408_);
v___x_1421_ = lean_array_push(v___x_1420_, v___x_1411_);
v___x_1422_ = lean_array_push(v___x_1421_, v___x_1414_);
v___x_1423_ = lean_array_push(v___x_1422_, v___x_1417_);
v___x_1424_ = l_Lasm_JS_Web_Internal_fields(v___x_1423_);
lean_dec_ref(v___x_1423_);
return v___x_1424_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions(void){
_start:
{
lean_object* v___f_1425_; lean_object* v___f_1426_; lean_object* v___f_1427_; lean_object* v___f_1428_; lean_object* v___f_1429_; 
v___f_1425_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1426_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1427_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1428_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1429_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions___lam__0), 5, 4);
lean_closure_set(v___f_1429_, 0, v___f_1425_);
lean_closure_set(v___f_1429_, 1, v___f_1426_);
lean_closure_set(v___f_1429_, 2, v___f_1427_);
lean_closure_set(v___f_1429_, 3, v___f_1428_);
return v___f_1429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorIdx(lean_object* v_x_1430_){
_start:
{
if (lean_obj_tag(v_x_1430_) == 0)
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_unsigned_to_nat(0u);
return v___x_1431_;
}
else
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_unsigned_to_nat(1u);
return v___x_1432_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorIdx___boxed(lean_object* v_x_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorIdx(v_x_1433_);
lean_dec_ref(v_x_1433_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(lean_object* v_t_1435_, lean_object* v_k_1436_){
_start:
{
lean_object* v_value_1437_; lean_object* v___x_1438_; 
v_value_1437_ = lean_ctor_get(v_t_1435_, 0);
lean_inc(v_value_1437_);
lean_dec_ref(v_t_1435_);
v___x_1438_ = lean_apply_1(v_k_1436_, v_value_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim(lean_object* v_motive_1439_, lean_object* v_ctorIdx_1440_, lean_object* v_t_1441_, lean_object* v_h_1442_, lean_object* v_k_1443_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1441_, v_k_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___boxed(lean_object* v_motive_1445_, lean_object* v_ctorIdx_1446_, lean_object* v_t_1447_, lean_object* v_h_1448_, lean_object* v_k_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim(v_motive_1445_, v_ctorIdx_1446_, v_t_1447_, v_h_1448_, v_k_1449_);
lean_dec(v_ctorIdx_1446_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readable_elim___redArg(lean_object* v_t_1451_, lean_object* v_readable_1452_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1451_, v_readable_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readable_elim(lean_object* v_motive_1454_, lean_object* v_t_1455_, lean_object* v_h_1456_, lean_object* v_readable_1457_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1455_, v_readable_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1459_, lean_object* v_readableStream_1460_){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1459_, v_readableStream_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readableStream_elim(lean_object* v_motive_1462_, lean_object* v_t_1463_, lean_object* v_h_1464_, lean_object* v_readableStream_1465_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1463_, v_readableStream_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0(lean_object* v_x_1467_){
_start:
{
lean_object* v_value_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v_value_1468_ = lean_ctor_get(v_x_1467_, 0);
v___x_1469_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1468_);
v___x_1470_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1470_, 0, v_value_1468_);
lean_ctor_set(v___x_1470_, 1, v___x_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0___boxed(lean_object* v_x_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0(v_x_1471_);
lean_dec_ref(v_x_1471_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrReadableStream___lam__0(lean_object* v_value_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1475_, 0, v_value_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrReadableStream___lam__0(lean_object* v_value_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_value_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy___lam__0(lean_object* v___f_1480_, lean_object* v___f_1481_, lean_object* v_d_1482_){
_start:
{
lean_object* v_highWaterMark_1483_; lean_object* v_size_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1501_; 
v_highWaterMark_1483_ = lean_ctor_get(v_d_1482_, 0);
v_size_1484_ = lean_ctor_get(v_d_1482_, 1);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_d_1482_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1486_ = v_d_1482_;
v_isShared_1487_ = v_isSharedCheck_1501_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_size_1484_);
lean_inc(v_highWaterMark_1483_);
lean_dec(v_d_1482_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1501_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1488_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1489_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1480_, v_highWaterMark_1483_);
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 1, v___x_1489_);
lean_ctor_set(v___x_1486_, 0, v___x_1488_);
v___x_1491_ = v___x_1486_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1488_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v___x_1489_);
v___x_1491_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1492_ = lean_mk_string_unchecked("size", 4, 4);
v___x_1493_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1481_, v_size_1484_);
v___x_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1492_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = lean_unsigned_to_nat(2u);
v___x_1496_ = lean_mk_empty_array_with_capacity(v___x_1495_);
v___x_1497_ = lean_array_push(v___x_1496_, v___x_1491_);
v___x_1498_ = lean_array_push(v___x_1497_, v___x_1494_);
v___x_1499_ = l_Lasm_JS_Web_Internal_fields(v___x_1498_);
lean_dec_ref(v___x_1498_);
return v___x_1499_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy(void){
_start:
{
lean_object* v___f_1502_; lean_object* v___f_1503_; lean_object* v___f_1504_; 
v___f_1502_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1503_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_1504_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy___lam__0), 3, 2);
lean_closure_set(v___f_1504_, 0, v___f_1502_);
lean_closure_set(v___f_1504_, 1, v___f_1503_);
return v___f_1504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToWebOptions___lam__0(lean_object* v___x_1505_, lean_object* v___f_1506_, lean_object* v_d_1507_){
_start:
{
lean_object* v_strategy_1508_; lean_object* v_type_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1526_; 
v_strategy_1508_ = lean_ctor_get(v_d_1507_, 0);
v_type_1509_ = lean_ctor_get(v_d_1507_, 1);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_d_1507_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1511_ = v_d_1507_;
v_isShared_1512_ = v_isSharedCheck_1526_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_type_1509_);
lean_inc(v_strategy_1508_);
lean_dec(v_d_1507_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1526_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1516_; 
v___x_1513_ = lean_mk_string_unchecked("strategy", 8, 8);
v___x_1514_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1505_, v_strategy_1508_);
if (v_isShared_1512_ == 0)
{
lean_ctor_set(v___x_1511_, 1, v___x_1514_);
lean_ctor_set(v___x_1511_, 0, v___x_1513_);
v___x_1516_ = v___x_1511_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1513_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v___x_1514_);
v___x_1516_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1517_ = lean_mk_string_unchecked("type", 4, 4);
v___x_1518_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1506_, v_type_1509_);
v___x_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_unsigned_to_nat(2u);
v___x_1521_ = lean_mk_empty_array_with_capacity(v___x_1520_);
v___x_1522_ = lean_array_push(v___x_1521_, v___x_1516_);
v___x_1523_ = lean_array_push(v___x_1522_, v___x_1519_);
v___x_1524_ = l_Lasm_JS_Web_Internal_fields(v___x_1523_);
lean_dec_ref(v___x_1523_);
return v___x_1524_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableToWebOptions(void){
_start:
{
lean_object* v___x_1527_; lean_object* v___f_1528_; lean_object* v___f_1529_; 
v___x_1527_ = l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy;
v___f_1528_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1529_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableToWebOptions___lam__0), 3, 2);
lean_closure_set(v___f_1529_, 0, v___x_1527_);
lean_closure_set(v___f_1529_, 1, v___f_1528_);
return v___f_1529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair___lam__0(lean_object* v___f_1530_, lean_object* v___f_1531_, lean_object* v_d_1532_){
_start:
{
lean_object* v_readable_1533_; lean_object* v_writable_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1551_; 
v_readable_1533_ = lean_ctor_get(v_d_1532_, 0);
v_writable_1534_ = lean_ctor_get(v_d_1532_, 1);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_d_1532_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1536_ = v_d_1532_;
v_isShared_1537_ = v_isSharedCheck_1551_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_writable_1534_);
lean_inc(v_readable_1533_);
lean_dec(v_d_1532_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1551_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1538_ = lean_mk_string_unchecked("readable", 8, 8);
v___x_1539_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1530_, v_readable_1533_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 1, v___x_1539_);
lean_ctor_set(v___x_1536_, 0, v___x_1538_);
v___x_1541_ = v___x_1536_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1542_ = lean_mk_string_unchecked("writable", 8, 8);
v___x_1543_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1531_, v_writable_1534_);
v___x_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1542_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
v___x_1545_ = lean_unsigned_to_nat(2u);
v___x_1546_ = lean_mk_empty_array_with_capacity(v___x_1545_);
v___x_1547_ = lean_array_push(v___x_1546_, v___x_1541_);
v___x_1548_ = lean_array_push(v___x_1547_, v___x_1544_);
v___x_1549_ = l_Lasm_JS_Web_Internal_fields(v___x_1548_);
lean_dec_ref(v___x_1548_);
return v___x_1549_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair(void){
_start:
{
lean_object* v___f_1552_; lean_object* v___f_1553_; 
v___f_1552_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSByteLengthQueuingStrategy___lam__0), 1, 0);
lean_inc_ref(v___f_1552_);
v___f_1553_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair___lam__0), 3, 2);
lean_closure_set(v___f_1553_, 0, v___f_1552_);
lean_closure_set(v___f_1553_, 1, v___f_1552_);
return v___f_1553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions___lam__0(lean_object* v___f_1554_, lean_object* v___f_1555_, lean_object* v___f_1556_, lean_object* v___f_1557_, lean_object* v_d_1558_){
_start:
{
lean_object* v_allowHalfOpen_1559_; lean_object* v_decodeStrings_1560_; lean_object* v_encoding_1561_; lean_object* v_highWaterMark_1562_; lean_object* v_objectMode_1563_; lean_object* v_signal_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v_allowHalfOpen_1559_ = lean_ctor_get(v_d_1558_, 0);
lean_inc(v_allowHalfOpen_1559_);
v_decodeStrings_1560_ = lean_ctor_get(v_d_1558_, 1);
lean_inc(v_decodeStrings_1560_);
v_encoding_1561_ = lean_ctor_get(v_d_1558_, 2);
lean_inc(v_encoding_1561_);
v_highWaterMark_1562_ = lean_ctor_get(v_d_1558_, 3);
lean_inc(v_highWaterMark_1562_);
v_objectMode_1563_ = lean_ctor_get(v_d_1558_, 4);
lean_inc(v_objectMode_1563_);
v_signal_1564_ = lean_ctor_get(v_d_1558_, 5);
lean_inc(v_signal_1564_);
lean_dec_ref(v_d_1558_);
v___x_1565_ = lean_mk_string_unchecked("allowHalfOpen", 13, 13);
lean_inc_ref_n(v___f_1554_, 2);
v___x_1566_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1554_, v_allowHalfOpen_1559_);
v___x_1567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1565_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
v___x_1568_ = lean_mk_string_unchecked("decodeStrings", 13, 13);
v___x_1569_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1554_, v_decodeStrings_1560_);
v___x_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1568_);
lean_ctor_set(v___x_1570_, 1, v___x_1569_);
v___x_1571_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1572_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1555_, v_encoding_1561_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v___x_1574_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1575_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1556_, v_highWaterMark_1562_);
v___x_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1574_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_1578_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1554_, v_objectMode_1563_);
v___x_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1577_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
v___x_1580_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1581_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1557_, v_signal_1564_);
v___x_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1580_);
lean_ctor_set(v___x_1582_, 1, v___x_1581_);
v___x_1583_ = lean_unsigned_to_nat(6u);
v___x_1584_ = lean_mk_empty_array_with_capacity(v___x_1583_);
v___x_1585_ = lean_array_push(v___x_1584_, v___x_1567_);
v___x_1586_ = lean_array_push(v___x_1585_, v___x_1570_);
v___x_1587_ = lean_array_push(v___x_1586_, v___x_1573_);
v___x_1588_ = lean_array_push(v___x_1587_, v___x_1576_);
v___x_1589_ = lean_array_push(v___x_1588_, v___x_1579_);
v___x_1590_ = lean_array_push(v___x_1589_, v___x_1582_);
v___x_1591_ = l_Lasm_JS_Web_Internal_fields(v___x_1590_);
lean_dec_ref(v___x_1590_);
return v___x_1591_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions(void){
_start:
{
lean_object* v___f_1592_; lean_object* v___f_1593_; lean_object* v___f_1594_; lean_object* v___f_1595_; lean_object* v___f_1596_; 
v___f_1592_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1593_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1594_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1595_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1596_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions___lam__0), 5, 4);
lean_closure_set(v___f_1596_, 0, v___f_1592_);
lean_closure_set(v___f_1596_, 1, v___f_1593_);
lean_closure_set(v___f_1596_, 2, v___f_1594_);
lean_closure_set(v___f_1596_, 3, v___f_1595_);
return v___f_1596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions___lam__0(lean_object* v___f_1597_, lean_object* v_d_1598_){
_start:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1599_ = lean_mk_string_unchecked("readableType", 12, 12);
v___x_1600_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1597_, v_d_1598_);
v___x_1601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1599_);
lean_ctor_set(v___x_1601_, 1, v___x_1600_);
v___x_1602_ = lean_unsigned_to_nat(1u);
v___x_1603_ = lean_mk_empty_array_with_capacity(v___x_1602_);
v___x_1604_ = lean_array_push(v___x_1603_, v___x_1601_);
v___x_1605_ = l_Lasm_JS_Web_Internal_fields(v___x_1604_);
lean_dec_ref(v___x_1604_);
return v___x_1605_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions(void){
_start:
{
lean_object* v___f_1606_; lean_object* v___f_1607_; 
v___f_1606_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1607_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions___lam__0), 2, 1);
lean_closure_set(v___f_1607_, 0, v___f_1606_);
return v___f_1607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorIdx(lean_object* v_x_1608_){
_start:
{
switch(lean_obj_tag(v_x_1608_))
{
case 0:
{
lean_object* v___x_1609_; 
v___x_1609_ = lean_unsigned_to_nat(0u);
return v___x_1609_;
}
case 1:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_unsigned_to_nat(1u);
return v___x_1610_;
}
default: 
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_unsigned_to_nat(2u);
return v___x_1611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorIdx___boxed(lean_object* v_x_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorIdx(v_x_1612_);
lean_dec_ref(v_x_1612_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(lean_object* v_t_1614_, lean_object* v_k_1615_){
_start:
{
lean_object* v_value_1616_; lean_object* v___x_1617_; 
v_value_1616_ = lean_ctor_get(v_t_1614_, 0);
lean_inc(v_value_1616_);
lean_dec_ref(v_t_1614_);
v___x_1617_ = lean_apply_1(v_k_1615_, v_value_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim(lean_object* v_motive_1618_, lean_object* v_ctorIdx_1619_, lean_object* v_t_1620_, lean_object* v_h_1621_, lean_object* v_k_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1620_, v_k_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___boxed(lean_object* v_motive_1624_, lean_object* v_ctorIdx_1625_, lean_object* v_t_1626_, lean_object* v_h_1627_, lean_object* v_k_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim(v_motive_1624_, v_ctorIdx_1625_, v_t_1626_, v_h_1627_, v_k_1628_);
lean_dec(v_ctorIdx_1625_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_eventEmitter_elim___redArg(lean_object* v_t_1630_, lean_object* v_eventEmitter_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1630_, v_eventEmitter_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_eventEmitter_elim(lean_object* v_motive_1633_, lean_object* v_t_1634_, lean_object* v_h_1635_, lean_object* v_eventEmitter_1636_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1634_, v_eventEmitter_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_readableStream_elim___redArg(lean_object* v_t_1638_, lean_object* v_readableStream_1639_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1638_, v_readableStream_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_readableStream_elim(lean_object* v_motive_1641_, lean_object* v_t_1642_, lean_object* v_h_1643_, lean_object* v_readableStream_1644_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1642_, v_readableStream_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_writableStream_elim___redArg(lean_object* v_t_1646_, lean_object* v_writableStream_1647_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1646_, v_writableStream_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_writableStream_elim(lean_object* v_motive_1649_, lean_object* v_t_1650_, lean_object* v_h_1651_, lean_object* v_writableStream_1652_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1650_, v_writableStream_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object* v_x_1654_){
_start:
{
lean_object* v_value_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_value_1655_ = lean_ctor_get(v_x_1654_, 0);
v___x_1656_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1655_);
v___x_1657_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1657_, 0, v_value_1655_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0___boxed(lean_object* v_x_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0(v_x_1658_);
lean_dec_ref(v_x_1658_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object* v_value_1661_){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1662_, 0, v_value_1661_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object* v_value_1664_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1665_, 0, v_value_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object* v_value_1667_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1668_, 0, v_value_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamFinishedOptions___lam__0(lean_object* v___f_1670_, lean_object* v___f_1671_, lean_object* v_d_1672_){
_start:
{
lean_object* v_error_1673_; lean_object* v_readable_1674_; lean_object* v_writable_1675_; lean_object* v_signal_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v_error_1673_ = lean_ctor_get(v_d_1672_, 0);
lean_inc(v_error_1673_);
v_readable_1674_ = lean_ctor_get(v_d_1672_, 1);
lean_inc(v_readable_1674_);
v_writable_1675_ = lean_ctor_get(v_d_1672_, 2);
lean_inc(v_writable_1675_);
v_signal_1676_ = lean_ctor_get(v_d_1672_, 3);
lean_inc(v_signal_1676_);
lean_dec_ref(v_d_1672_);
v___x_1677_ = lean_mk_string_unchecked("error", 5, 5);
lean_inc_ref_n(v___f_1670_, 2);
v___x_1678_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1670_, v_error_1673_);
v___x_1679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1677_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
v___x_1680_ = lean_mk_string_unchecked("readable", 8, 8);
v___x_1681_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1670_, v_readable_1674_);
v___x_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1680_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = lean_mk_string_unchecked("writable", 8, 8);
v___x_1684_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1670_, v_writable_1675_);
v___x_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1683_);
lean_ctor_set(v___x_1685_, 1, v___x_1684_);
v___x_1686_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1687_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1671_, v_signal_1676_);
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1686_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
v___x_1689_ = lean_unsigned_to_nat(4u);
v___x_1690_ = lean_mk_empty_array_with_capacity(v___x_1689_);
v___x_1691_ = lean_array_push(v___x_1690_, v___x_1679_);
v___x_1692_ = lean_array_push(v___x_1691_, v___x_1682_);
v___x_1693_ = lean_array_push(v___x_1692_, v___x_1685_);
v___x_1694_ = lean_array_push(v___x_1693_, v___x_1688_);
v___x_1695_ = l_Lasm_JS_Web_Internal_fields(v___x_1694_);
lean_dec_ref(v___x_1694_);
return v___x_1695_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamFinishedOptions(void){
_start:
{
lean_object* v___f_1696_; lean_object* v___f_1697_; lean_object* v___f_1698_; 
v___f_1696_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1697_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1698_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamFinishedOptions___lam__0), 3, 2);
lean_closure_set(v___f_1698_, 0, v___f_1696_);
lean_closure_set(v___f_1698_, 1, v___f_1697_);
return v___f_1698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorIdx(lean_object* v_x_1699_){
_start:
{
switch(lean_obj_tag(v_x_1699_))
{
case 0:
{
lean_object* v___x_1700_; 
v___x_1700_ = lean_unsigned_to_nat(0u);
return v___x_1700_;
}
case 1:
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_unsigned_to_nat(1u);
return v___x_1701_;
}
case 2:
{
lean_object* v___x_1702_; 
v___x_1702_ = lean_unsigned_to_nat(2u);
return v___x_1702_;
}
default: 
{
lean_object* v___x_1703_; 
v___x_1703_ = lean_unsigned_to_nat(3u);
return v___x_1703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorIdx___boxed(lean_object* v_x_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorIdx(v_x_1704_);
lean_dec_ref(v_x_1704_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(lean_object* v_t_1706_, lean_object* v_k_1707_){
_start:
{
lean_object* v_value_1708_; lean_object* v___x_1709_; 
v_value_1708_ = lean_ctor_get(v_t_1706_, 0);
lean_inc(v_value_1708_);
lean_dec_ref(v_t_1706_);
v___x_1709_ = lean_apply_1(v_k_1707_, v_value_1708_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim(lean_object* v_motive_1710_, lean_object* v_ctorIdx_1711_, lean_object* v_t_1712_, lean_object* v_h_1713_, lean_object* v_k_1714_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1712_, v_k_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___boxed(lean_object* v_motive_1716_, lean_object* v_ctorIdx_1717_, lean_object* v_t_1718_, lean_object* v_h_1719_, lean_object* v_k_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim(v_motive_1716_, v_ctorIdx_1717_, v_t_1718_, v_h_1719_, v_k_1720_);
lean_dec(v_ctorIdx_1717_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_eventEmitter_elim___redArg(lean_object* v_t_1722_, lean_object* v_eventEmitter_1723_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1722_, v_eventEmitter_1723_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_eventEmitter_elim(lean_object* v_motive_1725_, lean_object* v_t_1726_, lean_object* v_h_1727_, lean_object* v_eventEmitter_1728_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1726_, v_eventEmitter_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_object_elim___redArg(lean_object* v_t_1730_, lean_object* v_object_1731_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1730_, v_object_1731_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_object_elim(lean_object* v_motive_1733_, lean_object* v_t_1734_, lean_object* v_h_1735_, lean_object* v_object_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1734_, v_object_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_jsFunction_elim___redArg(lean_object* v_t_1738_, lean_object* v_jsFunction_1739_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1738_, v_jsFunction_1739_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_jsFunction_elim(lean_object* v_motive_1741_, lean_object* v_t_1742_, lean_object* v_h_1743_, lean_object* v_jsFunction_1744_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1742_, v_jsFunction_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1746_, lean_object* v_readableStream_1747_){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1746_, v_readableStream_1747_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_readableStream_elim(lean_object* v_motive_1749_, lean_object* v_t_1750_, lean_object* v_h_1751_, lean_object* v_readableStream_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1750_, v_readableStream_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object* v_x_1754_){
_start:
{
if (lean_obj_tag(v_x_1754_) == 1)
{
lean_object* v_value_1755_; 
v_value_1755_ = lean_ctor_get(v_x_1754_, 0);
lean_inc(v_value_1755_);
return v_value_1755_;
}
else
{
lean_object* v_value_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v_value_1756_ = lean_ctor_get(v_x_1754_, 0);
v___x_1757_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1756_);
v___x_1758_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1758_, 0, v_value_1756_);
lean_ctor_set(v___x_1758_, 1, v___x_1757_);
return v___x_1758_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0___boxed(lean_object* v_x_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(v_x_1759_);
lean_dec_ref(v_x_1759_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object* v_value_1762_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_value_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object* v_value_1765_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1766_, 0, v_value_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object* v_value_1768_){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1769_, 0, v_value_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorIdx(lean_object* v_x_1771_){
_start:
{
switch(lean_obj_tag(v_x_1771_))
{
case 0:
{
lean_object* v___x_1772_; 
v___x_1772_ = lean_unsigned_to_nat(0u);
return v___x_1772_;
}
case 1:
{
lean_object* v___x_1773_; 
v___x_1773_ = lean_unsigned_to_nat(1u);
return v___x_1773_;
}
default: 
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_unsigned_to_nat(2u);
return v___x_1774_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorIdx___boxed(lean_object* v_x_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorIdx(v_x_1775_);
lean_dec_ref(v_x_1775_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(lean_object* v_t_1777_, lean_object* v_k_1778_){
_start:
{
lean_object* v_value_1779_; lean_object* v___x_1780_; 
v_value_1779_ = lean_ctor_get(v_t_1777_, 0);
lean_inc(v_value_1779_);
lean_dec_ref(v_t_1777_);
v___x_1780_ = lean_apply_1(v_k_1778_, v_value_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim(lean_object* v_motive_1781_, lean_object* v_ctorIdx_1782_, lean_object* v_t_1783_, lean_object* v_h_1784_, lean_object* v_k_1785_){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1783_, v_k_1785_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___boxed(lean_object* v_motive_1787_, lean_object* v_ctorIdx_1788_, lean_object* v_t_1789_, lean_object* v_h_1790_, lean_object* v_k_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim(v_motive_1787_, v_ctorIdx_1788_, v_t_1789_, v_h_1790_, v_k_1791_);
lean_dec(v_ctorIdx_1788_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_eventEmitter_elim___redArg(lean_object* v_t_1793_, lean_object* v_eventEmitter_1794_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1793_, v_eventEmitter_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_eventEmitter_elim(lean_object* v_motive_1796_, lean_object* v_t_1797_, lean_object* v_h_1798_, lean_object* v_eventEmitter_1799_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1797_, v_eventEmitter_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_jsFunction_elim___redArg(lean_object* v_t_1801_, lean_object* v_jsFunction_1802_){
_start:
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1801_, v_jsFunction_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_jsFunction_elim(lean_object* v_motive_1804_, lean_object* v_t_1805_, lean_object* v_h_1806_, lean_object* v_jsFunction_1807_){
_start:
{
lean_object* v___x_1808_; 
v___x_1808_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1805_, v_jsFunction_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_writableStream_elim___redArg(lean_object* v_t_1809_, lean_object* v_writableStream_1810_){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1809_, v_writableStream_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_writableStream_elim(lean_object* v_motive_1812_, lean_object* v_t_1813_, lean_object* v_h_1814_, lean_object* v_writableStream_1815_){
_start:
{
lean_object* v___x_1816_; 
v___x_1816_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1813_, v_writableStream_1815_);
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object* v_x_1817_){
_start:
{
lean_object* v_value_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v_value_1818_ = lean_ctor_get(v_x_1817_, 0);
v___x_1819_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1818_);
v___x_1820_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1820_, 0, v_value_1818_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0___boxed(lean_object* v_x_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0(v_x_1821_);
lean_dec_ref(v_x_1821_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object* v_value_1824_){
_start:
{
lean_object* v___x_1825_; 
v___x_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1825_, 0, v_value_1824_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object* v_value_1827_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1828_, 0, v_value_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object* v_value_1830_){
_start:
{
lean_object* v___x_1831_; 
v___x_1831_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1831_, 0, v_value_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorIdx(lean_object* v_x_1833_){
_start:
{
switch(lean_obj_tag(v_x_1833_))
{
case 0:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_unsigned_to_nat(0u);
return v___x_1834_;
}
case 1:
{
lean_object* v___x_1835_; 
v___x_1835_ = lean_unsigned_to_nat(1u);
return v___x_1835_;
}
default: 
{
lean_object* v___x_1836_; 
v___x_1836_ = lean_unsigned_to_nat(2u);
return v___x_1836_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorIdx___boxed(lean_object* v_x_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorIdx(v_x_1837_);
lean_dec_ref(v_x_1837_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(lean_object* v_t_1839_, lean_object* v_k_1840_){
_start:
{
lean_object* v_value_1841_; lean_object* v___x_1842_; 
v_value_1841_ = lean_ctor_get(v_t_1839_, 0);
lean_inc(v_value_1841_);
lean_dec_ref(v_t_1839_);
v___x_1842_ = lean_apply_1(v_k_1840_, v_value_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim(lean_object* v_motive_1843_, lean_object* v_ctorIdx_1844_, lean_object* v_t_1845_, lean_object* v_h_1846_, lean_object* v_k_1847_){
_start:
{
lean_object* v___x_1848_; 
v___x_1848_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_1845_, v_k_1847_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___boxed(lean_object* v_motive_1849_, lean_object* v_ctorIdx_1850_, lean_object* v_t_1851_, lean_object* v_h_1852_, lean_object* v_k_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim(v_motive_1849_, v_ctorIdx_1850_, v_t_1851_, v_h_1852_, v_k_1853_);
lean_dec(v_ctorIdx_1850_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_eventEmitter_elim___redArg(lean_object* v_t_1855_, lean_object* v_eventEmitter_1856_){
_start:
{
lean_object* v___x_1857_; 
v___x_1857_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_1855_, v_eventEmitter_1856_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_eventEmitter_elim(lean_object* v_motive_1858_, lean_object* v_t_1859_, lean_object* v_h_1860_, lean_object* v_eventEmitter_1861_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_1859_, v_eventEmitter_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_jsFunction_elim___redArg(lean_object* v_t_1863_, lean_object* v_jsFunction_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_1863_, v_jsFunction_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_jsFunction_elim(lean_object* v_motive_1866_, lean_object* v_t_1867_, lean_object* v_h_1868_, lean_object* v_jsFunction_1869_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_1867_, v_jsFunction_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_transformStream_elim___redArg(lean_object* v_t_1871_, lean_object* v_transformStream_1872_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_1871_, v_transformStream_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_transformStream_elim(lean_object* v_motive_1874_, lean_object* v_t_1875_, lean_object* v_h_1876_, lean_object* v_transformStream_1877_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_1875_, v_transformStream_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object* v_x_1879_){
_start:
{
lean_object* v_value_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v_value_1880_ = lean_ctor_get(v_x_1879_, 0);
v___x_1881_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1880_);
v___x_1882_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1882_, 0, v_value_1880_);
lean_ctor_set(v___x_1882_, 1, v___x_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0___boxed(lean_object* v_x_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0(v_x_1883_);
lean_dec_ref(v_x_1883_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object* v_value_1886_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1887_, 0, v_value_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object* v_value_1889_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1890_, 0, v_value_1889_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeTransformStreamEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object* v_value_1892_){
_start:
{
lean_object* v___x_1893_; 
v___x_1893_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1893_, 0, v_value_1892_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorIdx(lean_object* v_x_1895_){
_start:
{
switch(lean_obj_tag(v_x_1895_))
{
case 0:
{
lean_object* v___x_1896_; 
v___x_1896_ = lean_unsigned_to_nat(0u);
return v___x_1896_;
}
case 1:
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_unsigned_to_nat(1u);
return v___x_1897_;
}
case 2:
{
lean_object* v___x_1898_; 
v___x_1898_ = lean_unsigned_to_nat(2u);
return v___x_1898_;
}
case 3:
{
lean_object* v___x_1899_; 
v___x_1899_ = lean_unsigned_to_nat(3u);
return v___x_1899_;
}
case 4:
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_unsigned_to_nat(4u);
return v___x_1900_;
}
default: 
{
lean_object* v___x_1901_; 
v___x_1901_ = lean_unsigned_to_nat(5u);
return v___x_1901_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorIdx___boxed(lean_object* v_x_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorIdx(v_x_1902_);
lean_dec_ref(v_x_1902_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(lean_object* v_t_1904_, lean_object* v_k_1905_){
_start:
{
lean_object* v_value_1906_; lean_object* v___x_1907_; 
v_value_1906_ = lean_ctor_get(v_t_1904_, 0);
lean_inc_ref(v_value_1906_);
lean_dec_ref(v_t_1904_);
v___x_1907_ = lean_apply_1(v_k_1905_, v_value_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim(lean_object* v_motive_1908_, lean_object* v_ctorIdx_1909_, lean_object* v_t_1910_, lean_object* v_h_1911_, lean_object* v_k_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1910_, v_k_1912_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___boxed(lean_object* v_motive_1914_, lean_object* v_ctorIdx_1915_, lean_object* v_t_1916_, lean_object* v_h_1917_, lean_object* v_k_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim(v_motive_1914_, v_ctorIdx_1915_, v_t_1916_, v_h_1917_, v_k_1918_);
lean_dec(v_ctorIdx_1915_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence_elim___redArg(lean_object* v_t_1920_, lean_object* v_sequence_1921_){
_start:
{
lean_object* v___x_1922_; 
v___x_1922_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1920_, v_sequence_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence_elim(lean_object* v_motive_1923_, lean_object* v_t_1924_, lean_object* v_h_1925_, lean_object* v_sequence_1926_){
_start:
{
lean_object* v___x_1927_; 
v___x_1927_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1924_, v_sequence_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence2_elim___redArg(lean_object* v_t_1928_, lean_object* v_sequence2_1929_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1928_, v_sequence2_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence2_elim(lean_object* v_motive_1931_, lean_object* v_t_1932_, lean_object* v_h_1933_, lean_object* v_sequence2_1934_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1932_, v_sequence2_1934_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence3_elim___redArg(lean_object* v_t_1936_, lean_object* v_sequence3_1937_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1936_, v_sequence3_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence3_elim(lean_object* v_motive_1939_, lean_object* v_t_1940_, lean_object* v_h_1941_, lean_object* v_sequence3_1942_){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1940_, v_sequence3_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence4_elim___redArg(lean_object* v_t_1944_, lean_object* v_sequence4_1945_){
_start:
{
lean_object* v___x_1946_; 
v___x_1946_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1944_, v_sequence4_1945_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence4_elim(lean_object* v_motive_1947_, lean_object* v_t_1948_, lean_object* v_h_1949_, lean_object* v_sequence4_1950_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1948_, v_sequence4_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence5_elim___redArg(lean_object* v_t_1952_, lean_object* v_sequence5_1953_){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1952_, v_sequence5_1953_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence5_elim(lean_object* v_motive_1955_, lean_object* v_t_1956_, lean_object* v_h_1957_, lean_object* v_sequence5_1958_){
_start:
{
lean_object* v___x_1959_; 
v___x_1959_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1956_, v_sequence5_1958_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence6_elim___redArg(lean_object* v_t_1960_, lean_object* v_sequence6_1961_){
_start:
{
lean_object* v___x_1962_; 
v___x_1962_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1960_, v_sequence6_1961_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence6_elim(lean_object* v_motive_1963_, lean_object* v_t_1964_, lean_object* v_h_1965_, lean_object* v_sequence6_1966_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_1964_, v_sequence6_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_x_1968_){
_start:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1969_ = lean_mk_string_unchecked("", 0, 0);
v___x_1970_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1970_, 0, v_x_1968_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1(lean_object* v_x_1971_){
_start:
{
lean_inc(v_x_1971_);
return v_x_1971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1___boxed(lean_object* v_x_1972_){
_start:
{
lean_object* v_res_1973_; 
v_res_1973_ = l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1(v_x_1972_);
lean_dec(v_x_1972_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__6(lean_object* v___f_1974_, lean_object* v___f_1975_, lean_object* v___f_1976_, lean_object* v___f_1977_, lean_object* v___f_1978_, lean_object* v___f_1979_, lean_object* v_x_1980_){
_start:
{
switch(lean_obj_tag(v_x_1980_))
{
case 0:
{
lean_object* v_value_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2001_; 
lean_dec_ref(v___f_1979_);
lean_dec_ref(v___f_1978_);
lean_dec_ref(v___f_1977_);
lean_dec_ref(v___f_1976_);
lean_dec_ref(v___f_1975_);
v_value_1981_ = lean_ctor_get(v_x_1980_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v_x_1980_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1983_ = v_x_1980_;
v_isShared_1984_ = v_isSharedCheck_2001_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_value_1981_);
lean_dec(v_x_1980_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2001_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___f_1985_; lean_object* v___f_1986_; lean_object* v___f_1987_; lean_object* v___f_1988_; lean_object* v___f_1989_; lean_object* v___f_1990_; lean_object* v___f_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; size_t v_sz_1995_; size_t v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1999_; 
v___f_1985_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_1986_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_1987_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_1988_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_1989_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_1990_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_1991_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_1992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1992_, 0, v___f_1985_);
lean_ctor_set(v___x_1992_, 1, v___f_1986_);
v___x_1993_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1992_);
lean_ctor_set(v___x_1993_, 1, v___f_1987_);
lean_ctor_set(v___x_1993_, 2, v___f_1988_);
lean_ctor_set(v___x_1993_, 3, v___f_1989_);
lean_ctor_set(v___x_1993_, 4, v___f_1990_);
v___x_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
lean_ctor_set(v___x_1994_, 1, v___f_1991_);
v_sz_1995_ = lean_array_size(v_value_1981_);
v___x_1996_ = ((size_t)0ULL);
v___x_1997_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1994_, v___f_1974_, v_sz_1995_, v___x_1996_, v_value_1981_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set_tag(v___x_1983_, 7);
lean_ctor_set(v___x_1983_, 0, v___x_1997_);
v___x_1999_ = v___x_1983_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
case 1:
{
lean_object* v_value_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2022_; 
lean_dec_ref(v___f_1979_);
lean_dec_ref(v___f_1978_);
lean_dec_ref(v___f_1977_);
lean_dec_ref(v___f_1976_);
lean_dec_ref(v___f_1974_);
v_value_2002_ = lean_ctor_get(v_x_1980_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v_x_1980_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2004_ = v_x_1980_;
v_isShared_2005_ = v_isSharedCheck_2022_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_value_2002_);
lean_dec(v_x_1980_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2022_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___f_2006_; lean_object* v___f_2007_; lean_object* v___f_2008_; lean_object* v___f_2009_; lean_object* v___f_2010_; lean_object* v___f_2011_; lean_object* v___f_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; size_t v_sz_2016_; size_t v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2020_; 
v___f_2006_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2007_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2008_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2009_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2010_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2011_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2012_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2013_, 0, v___f_2006_);
lean_ctor_set(v___x_2013_, 1, v___f_2007_);
v___x_2014_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2013_);
lean_ctor_set(v___x_2014_, 1, v___f_2008_);
lean_ctor_set(v___x_2014_, 2, v___f_2009_);
lean_ctor_set(v___x_2014_, 3, v___f_2010_);
lean_ctor_set(v___x_2014_, 4, v___f_2011_);
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2014_);
lean_ctor_set(v___x_2015_, 1, v___f_2012_);
v_sz_2016_ = lean_array_size(v_value_2002_);
v___x_2017_ = ((size_t)0ULL);
v___x_2018_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2015_, v___f_1975_, v_sz_2016_, v___x_2017_, v_value_2002_);
if (v_isShared_2005_ == 0)
{
lean_ctor_set_tag(v___x_2004_, 7);
lean_ctor_set(v___x_2004_, 0, v___x_2018_);
v___x_2020_ = v___x_2004_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v___x_2018_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
case 2:
{
lean_object* v_value_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2043_; 
lean_dec_ref(v___f_1979_);
lean_dec_ref(v___f_1978_);
lean_dec_ref(v___f_1977_);
lean_dec_ref(v___f_1975_);
lean_dec_ref(v___f_1974_);
v_value_2023_ = lean_ctor_get(v_x_1980_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v_x_1980_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2025_ = v_x_1980_;
v_isShared_2026_ = v_isSharedCheck_2043_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_value_2023_);
lean_dec(v_x_1980_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2043_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___f_2027_; lean_object* v___f_2028_; lean_object* v___f_2029_; lean_object* v___f_2030_; lean_object* v___f_2031_; lean_object* v___f_2032_; lean_object* v___f_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; size_t v_sz_2037_; size_t v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2041_; 
v___f_2027_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2028_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2029_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2030_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2031_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2032_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2033_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___f_2027_);
lean_ctor_set(v___x_2034_, 1, v___f_2028_);
v___x_2035_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2034_);
lean_ctor_set(v___x_2035_, 1, v___f_2029_);
lean_ctor_set(v___x_2035_, 2, v___f_2030_);
lean_ctor_set(v___x_2035_, 3, v___f_2031_);
lean_ctor_set(v___x_2035_, 4, v___f_2032_);
v___x_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
lean_ctor_set(v___x_2036_, 1, v___f_2033_);
v_sz_2037_ = lean_array_size(v_value_2023_);
v___x_2038_ = ((size_t)0ULL);
v___x_2039_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2036_, v___f_1976_, v_sz_2037_, v___x_2038_, v_value_2023_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set_tag(v___x_2025_, 7);
lean_ctor_set(v___x_2025_, 0, v___x_2039_);
v___x_2041_ = v___x_2025_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v___x_2039_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
case 3:
{
lean_object* v_value_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2064_; 
lean_dec_ref(v___f_1979_);
lean_dec_ref(v___f_1978_);
lean_dec_ref(v___f_1976_);
lean_dec_ref(v___f_1975_);
lean_dec_ref(v___f_1974_);
v_value_2044_ = lean_ctor_get(v_x_1980_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_x_1980_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2046_ = v_x_1980_;
v_isShared_2047_ = v_isSharedCheck_2064_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_value_2044_);
lean_dec(v_x_1980_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2064_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___f_2048_; lean_object* v___f_2049_; lean_object* v___f_2050_; lean_object* v___f_2051_; lean_object* v___f_2052_; lean_object* v___f_2053_; lean_object* v___f_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; size_t v_sz_2058_; size_t v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2062_; 
v___f_2048_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2049_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2050_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2051_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2052_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2053_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2054_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___f_2048_);
lean_ctor_set(v___x_2055_, 1, v___f_2049_);
v___x_2056_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
lean_ctor_set(v___x_2056_, 1, v___f_2050_);
lean_ctor_set(v___x_2056_, 2, v___f_2051_);
lean_ctor_set(v___x_2056_, 3, v___f_2052_);
lean_ctor_set(v___x_2056_, 4, v___f_2053_);
v___x_2057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
lean_ctor_set(v___x_2057_, 1, v___f_2054_);
v_sz_2058_ = lean_array_size(v_value_2044_);
v___x_2059_ = ((size_t)0ULL);
v___x_2060_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2057_, v___f_1977_, v_sz_2058_, v___x_2059_, v_value_2044_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set_tag(v___x_2046_, 7);
lean_ctor_set(v___x_2046_, 0, v___x_2060_);
v___x_2062_ = v___x_2046_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
case 4:
{
lean_object* v_value_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2085_; 
lean_dec_ref(v___f_1979_);
lean_dec_ref(v___f_1977_);
lean_dec_ref(v___f_1976_);
lean_dec_ref(v___f_1975_);
lean_dec_ref(v___f_1974_);
v_value_2065_ = lean_ctor_get(v_x_1980_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v_x_1980_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2067_ = v_x_1980_;
v_isShared_2068_ = v_isSharedCheck_2085_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_value_2065_);
lean_dec(v_x_1980_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2085_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___f_2069_; lean_object* v___f_2070_; lean_object* v___f_2071_; lean_object* v___f_2072_; lean_object* v___f_2073_; lean_object* v___f_2074_; lean_object* v___f_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; size_t v_sz_2079_; size_t v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v___f_2069_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2070_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2071_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2072_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2073_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2074_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2075_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___f_2069_);
lean_ctor_set(v___x_2076_, 1, v___f_2070_);
v___x_2077_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
lean_ctor_set(v___x_2077_, 1, v___f_2071_);
lean_ctor_set(v___x_2077_, 2, v___f_2072_);
lean_ctor_set(v___x_2077_, 3, v___f_2073_);
lean_ctor_set(v___x_2077_, 4, v___f_2074_);
v___x_2078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
lean_ctor_set(v___x_2078_, 1, v___f_2075_);
v_sz_2079_ = lean_array_size(v_value_2065_);
v___x_2080_ = ((size_t)0ULL);
v___x_2081_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2078_, v___f_1978_, v_sz_2079_, v___x_2080_, v_value_2065_);
if (v_isShared_2068_ == 0)
{
lean_ctor_set_tag(v___x_2067_, 7);
lean_ctor_set(v___x_2067_, 0, v___x_2081_);
v___x_2083_ = v___x_2067_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2081_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
default: 
{
lean_object* v_value_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2106_; 
lean_dec_ref(v___f_1978_);
lean_dec_ref(v___f_1977_);
lean_dec_ref(v___f_1976_);
lean_dec_ref(v___f_1975_);
lean_dec_ref(v___f_1974_);
v_value_2086_ = lean_ctor_get(v_x_1980_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v_x_1980_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2088_ = v_x_1980_;
v_isShared_2089_ = v_isSharedCheck_2106_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_value_2086_);
lean_dec(v_x_1980_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2106_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___f_2090_; lean_object* v___f_2091_; lean_object* v___f_2092_; lean_object* v___f_2093_; lean_object* v___f_2094_; lean_object* v___f_2095_; lean_object* v___f_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; size_t v_sz_2100_; size_t v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2104_; 
v___f_2090_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2091_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2092_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2093_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2094_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2095_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2096_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___f_2090_);
lean_ctor_set(v___x_2097_, 1, v___f_2091_);
v___x_2098_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
lean_ctor_set(v___x_2098_, 1, v___f_2092_);
lean_ctor_set(v___x_2098_, 2, v___f_2093_);
lean_ctor_set(v___x_2098_, 3, v___f_2094_);
lean_ctor_set(v___x_2098_, 4, v___f_2095_);
v___x_2099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
lean_ctor_set(v___x_2099_, 1, v___f_2096_);
v_sz_2100_ = lean_array_size(v_value_2086_);
v___x_2101_ = ((size_t)0ULL);
v___x_2102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2099_, v___f_1979_, v_sz_2100_, v___x_2101_, v_value_2086_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set_tag(v___x_2088_, 7);
lean_ctor_set(v___x_2088_, 0, v___x_2102_);
v___x_2104_ = v___x_2088_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v___x_2102_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream(void){
_start:
{
lean_object* v___f_2107_; lean_object* v___f_2108_; lean_object* v___f_2109_; 
v___f_2107_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0), 1, 0);
v___f_2108_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1___boxed), 1, 0);
lean_inc_ref_n(v___f_2107_, 4);
v___f_2109_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__6), 7, 6);
lean_closure_set(v___f_2109_, 0, v___f_2107_);
lean_closure_set(v___f_2109_, 1, v___f_2108_);
lean_closure_set(v___f_2109_, 2, v___f_2107_);
lean_closure_set(v___f_2109_, 3, v___f_2107_);
lean_closure_set(v___f_2109_, 4, v___f_2107_);
lean_closure_set(v___f_2109_, 5, v___f_2107_);
return v___f_2109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2110_){
_start:
{
lean_object* v___x_2111_; 
v___x_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2111_, 0, v_value_2110_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2113_){
_start:
{
lean_object* v___x_2114_; 
v___x_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2114_, 0, v_value_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2116_){
_start:
{
lean_object* v___x_2117_; 
v___x_2117_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2117_, 0, v_value_2116_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2119_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2120_, 0, v_value_2119_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2122_){
_start:
{
lean_object* v___x_2123_; 
v___x_2123_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2123_, 0, v_value_2122_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2125_){
_start:
{
lean_object* v___x_2126_; 
v___x_2126_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2126_, 0, v_value_2125_);
return v___x_2126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorIdx(lean_object* v_x_2128_){
_start:
{
switch(lean_obj_tag(v_x_2128_))
{
case 0:
{
lean_object* v___x_2129_; 
v___x_2129_ = lean_unsigned_to_nat(0u);
return v___x_2129_;
}
case 1:
{
lean_object* v___x_2130_; 
v___x_2130_ = lean_unsigned_to_nat(1u);
return v___x_2130_;
}
case 2:
{
lean_object* v___x_2131_; 
v___x_2131_ = lean_unsigned_to_nat(2u);
return v___x_2131_;
}
case 3:
{
lean_object* v___x_2132_; 
v___x_2132_ = lean_unsigned_to_nat(3u);
return v___x_2132_;
}
case 4:
{
lean_object* v___x_2133_; 
v___x_2133_ = lean_unsigned_to_nat(4u);
return v___x_2133_;
}
case 5:
{
lean_object* v___x_2134_; 
v___x_2134_ = lean_unsigned_to_nat(5u);
return v___x_2134_;
}
case 6:
{
lean_object* v___x_2135_; 
v___x_2135_ = lean_unsigned_to_nat(6u);
return v___x_2135_;
}
default: 
{
lean_object* v___x_2136_; 
v___x_2136_ = lean_unsigned_to_nat(7u);
return v___x_2136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorIdx___boxed(lean_object* v_x_2137_){
_start:
{
lean_object* v_res_2138_; 
v_res_2138_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorIdx(v_x_2137_);
lean_dec_ref(v_x_2137_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(lean_object* v_t_2139_, lean_object* v_k_2140_){
_start:
{
if (lean_obj_tag(v_t_2139_) == 7)
{
lean_object* v_value_2141_; lean_object* v___x_2142_; 
v_value_2141_ = lean_ctor_get(v_t_2139_, 0);
lean_inc(v_value_2141_);
lean_dec_ref_known(v_t_2139_, 1);
v___x_2142_ = lean_apply_1(v_k_2140_, v_value_2141_);
return v___x_2142_;
}
else
{
lean_object* v_value_2143_; lean_object* v___x_2144_; 
v_value_2143_ = lean_ctor_get(v_t_2139_, 0);
lean_inc_ref(v_value_2143_);
lean_dec_ref(v_t_2139_);
v___x_2144_ = lean_apply_1(v_k_2140_, v_value_2143_);
return v___x_2144_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim(lean_object* v_motive_2145_, lean_object* v_ctorIdx_2146_, lean_object* v_t_2147_, lean_object* v_h_2148_, lean_object* v_k_2149_){
_start:
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2147_, v_k_2149_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___boxed(lean_object* v_motive_2151_, lean_object* v_ctorIdx_2152_, lean_object* v_t_2153_, lean_object* v_h_2154_, lean_object* v_k_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim(v_motive_2151_, v_ctorIdx_2152_, v_t_2153_, v_h_2154_, v_k_2155_);
lean_dec(v_ctorIdx_2152_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence_elim___redArg(lean_object* v_t_2157_, lean_object* v_sequence_2158_){
_start:
{
lean_object* v___x_2159_; 
v___x_2159_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2157_, v_sequence_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence_elim(lean_object* v_motive_2160_, lean_object* v_t_2161_, lean_object* v_h_2162_, lean_object* v_sequence_2163_){
_start:
{
lean_object* v___x_2164_; 
v___x_2164_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2161_, v_sequence_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence2_elim___redArg(lean_object* v_t_2165_, lean_object* v_sequence2_2166_){
_start:
{
lean_object* v___x_2167_; 
v___x_2167_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2165_, v_sequence2_2166_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence2_elim(lean_object* v_motive_2168_, lean_object* v_t_2169_, lean_object* v_h_2170_, lean_object* v_sequence2_2171_){
_start:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2169_, v_sequence2_2171_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence3_elim___redArg(lean_object* v_t_2173_, lean_object* v_sequence3_2174_){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2173_, v_sequence3_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence3_elim(lean_object* v_motive_2176_, lean_object* v_t_2177_, lean_object* v_h_2178_, lean_object* v_sequence3_2179_){
_start:
{
lean_object* v___x_2180_; 
v___x_2180_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2177_, v_sequence3_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence4_elim___redArg(lean_object* v_t_2181_, lean_object* v_sequence4_2182_){
_start:
{
lean_object* v___x_2183_; 
v___x_2183_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2181_, v_sequence4_2182_);
return v___x_2183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence4_elim(lean_object* v_motive_2184_, lean_object* v_t_2185_, lean_object* v_h_2186_, lean_object* v_sequence4_2187_){
_start:
{
lean_object* v___x_2188_; 
v___x_2188_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2185_, v_sequence4_2187_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence5_elim___redArg(lean_object* v_t_2189_, lean_object* v_sequence5_2190_){
_start:
{
lean_object* v___x_2191_; 
v___x_2191_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2189_, v_sequence5_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence5_elim(lean_object* v_motive_2192_, lean_object* v_t_2193_, lean_object* v_h_2194_, lean_object* v_sequence5_2195_){
_start:
{
lean_object* v___x_2196_; 
v___x_2196_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2193_, v_sequence5_2195_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence6_elim___redArg(lean_object* v_t_2197_, lean_object* v_sequence6_2198_){
_start:
{
lean_object* v___x_2199_; 
v___x_2199_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2197_, v_sequence6_2198_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence6_elim(lean_object* v_motive_2200_, lean_object* v_t_2201_, lean_object* v_h_2202_, lean_object* v_sequence6_2203_){
_start:
{
lean_object* v___x_2204_; 
v___x_2204_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2201_, v_sequence6_2203_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence7_elim___redArg(lean_object* v_t_2205_, lean_object* v_sequence7_2206_){
_start:
{
lean_object* v___x_2207_; 
v___x_2207_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2205_, v_sequence7_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence7_elim(lean_object* v_motive_2208_, lean_object* v_t_2209_, lean_object* v_h_2210_, lean_object* v_sequence7_2211_){
_start:
{
lean_object* v___x_2212_; 
v___x_2212_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2209_, v_sequence7_2211_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_jsFunction_elim___redArg(lean_object* v_t_2213_, lean_object* v_jsFunction_2214_){
_start:
{
lean_object* v___x_2215_; 
v___x_2215_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2213_, v_jsFunction_2214_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_jsFunction_elim(lean_object* v_motive_2216_, lean_object* v_t_2217_, lean_object* v_h_2218_, lean_object* v_jsFunction_2219_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2217_, v_jsFunction_2219_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__7(lean_object* v___f_2221_, lean_object* v___f_2222_, lean_object* v___f_2223_, lean_object* v___f_2224_, lean_object* v___f_2225_, lean_object* v___f_2226_, lean_object* v___f_2227_, lean_object* v_x_2228_){
_start:
{
switch(lean_obj_tag(v_x_2228_))
{
case 0:
{
lean_object* v_value_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2249_; 
lean_dec_ref(v___f_2227_);
lean_dec_ref(v___f_2226_);
lean_dec_ref(v___f_2225_);
lean_dec_ref(v___f_2224_);
lean_dec_ref(v___f_2223_);
lean_dec_ref(v___f_2222_);
v_value_2229_ = lean_ctor_get(v_x_2228_, 0);
v_isSharedCheck_2249_ = !lean_is_exclusive(v_x_2228_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2231_ = v_x_2228_;
v_isShared_2232_ = v_isSharedCheck_2249_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_value_2229_);
lean_dec(v_x_2228_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2249_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___f_2233_; lean_object* v___f_2234_; lean_object* v___f_2235_; lean_object* v___f_2236_; lean_object* v___f_2237_; lean_object* v___f_2238_; lean_object* v___f_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; size_t v_sz_2243_; size_t v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2247_; 
v___f_2233_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2234_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2235_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2236_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2237_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2238_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2239_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2240_, 0, v___f_2233_);
lean_ctor_set(v___x_2240_, 1, v___f_2234_);
v___x_2241_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
lean_ctor_set(v___x_2241_, 1, v___f_2235_);
lean_ctor_set(v___x_2241_, 2, v___f_2236_);
lean_ctor_set(v___x_2241_, 3, v___f_2237_);
lean_ctor_set(v___x_2241_, 4, v___f_2238_);
v___x_2242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
lean_ctor_set(v___x_2242_, 1, v___f_2239_);
v_sz_2243_ = lean_array_size(v_value_2229_);
v___x_2244_ = ((size_t)0ULL);
v___x_2245_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2242_, v___f_2221_, v_sz_2243_, v___x_2244_, v_value_2229_);
if (v_isShared_2232_ == 0)
{
lean_ctor_set_tag(v___x_2231_, 7);
lean_ctor_set(v___x_2231_, 0, v___x_2245_);
v___x_2247_ = v___x_2231_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v___x_2245_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
case 1:
{
lean_object* v_value_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2270_; 
lean_dec_ref(v___f_2227_);
lean_dec_ref(v___f_2226_);
lean_dec_ref(v___f_2225_);
lean_dec_ref(v___f_2224_);
lean_dec_ref(v___f_2223_);
lean_dec_ref(v___f_2221_);
v_value_2250_ = lean_ctor_get(v_x_2228_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v_x_2228_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2252_ = v_x_2228_;
v_isShared_2253_ = v_isSharedCheck_2270_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_value_2250_);
lean_dec(v_x_2228_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2270_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___f_2254_; lean_object* v___f_2255_; lean_object* v___f_2256_; lean_object* v___f_2257_; lean_object* v___f_2258_; lean_object* v___f_2259_; lean_object* v___f_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; size_t v_sz_2264_; size_t v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___f_2254_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2255_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2256_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2257_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2258_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2259_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2260_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___f_2254_);
lean_ctor_set(v___x_2261_, 1, v___f_2255_);
v___x_2262_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2261_);
lean_ctor_set(v___x_2262_, 1, v___f_2256_);
lean_ctor_set(v___x_2262_, 2, v___f_2257_);
lean_ctor_set(v___x_2262_, 3, v___f_2258_);
lean_ctor_set(v___x_2262_, 4, v___f_2259_);
v___x_2263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
lean_ctor_set(v___x_2263_, 1, v___f_2260_);
v_sz_2264_ = lean_array_size(v_value_2250_);
v___x_2265_ = ((size_t)0ULL);
v___x_2266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2263_, v___f_2222_, v_sz_2264_, v___x_2265_, v_value_2250_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set_tag(v___x_2252_, 7);
lean_ctor_set(v___x_2252_, 0, v___x_2266_);
v___x_2268_ = v___x_2252_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v___x_2266_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
return v___x_2268_;
}
}
}
case 2:
{
lean_object* v_value_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2291_; 
lean_dec_ref(v___f_2227_);
lean_dec_ref(v___f_2226_);
lean_dec_ref(v___f_2225_);
lean_dec_ref(v___f_2224_);
lean_dec_ref(v___f_2222_);
lean_dec_ref(v___f_2221_);
v_value_2271_ = lean_ctor_get(v_x_2228_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v_x_2228_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2273_ = v_x_2228_;
v_isShared_2274_ = v_isSharedCheck_2291_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_value_2271_);
lean_dec(v_x_2228_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2291_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___f_2275_; lean_object* v___f_2276_; lean_object* v___f_2277_; lean_object* v___f_2278_; lean_object* v___f_2279_; lean_object* v___f_2280_; lean_object* v___f_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; size_t v_sz_2285_; size_t v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2289_; 
v___f_2275_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2276_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2277_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2278_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2279_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2280_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2281_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2282_, 0, v___f_2275_);
lean_ctor_set(v___x_2282_, 1, v___f_2276_);
v___x_2283_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
lean_ctor_set(v___x_2283_, 1, v___f_2277_);
lean_ctor_set(v___x_2283_, 2, v___f_2278_);
lean_ctor_set(v___x_2283_, 3, v___f_2279_);
lean_ctor_set(v___x_2283_, 4, v___f_2280_);
v___x_2284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
lean_ctor_set(v___x_2284_, 1, v___f_2281_);
v_sz_2285_ = lean_array_size(v_value_2271_);
v___x_2286_ = ((size_t)0ULL);
v___x_2287_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2284_, v___f_2223_, v_sz_2285_, v___x_2286_, v_value_2271_);
if (v_isShared_2274_ == 0)
{
lean_ctor_set_tag(v___x_2273_, 7);
lean_ctor_set(v___x_2273_, 0, v___x_2287_);
v___x_2289_ = v___x_2273_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
case 3:
{
lean_object* v_value_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2312_; 
lean_dec_ref(v___f_2227_);
lean_dec_ref(v___f_2226_);
lean_dec_ref(v___f_2225_);
lean_dec_ref(v___f_2223_);
lean_dec_ref(v___f_2222_);
lean_dec_ref(v___f_2221_);
v_value_2292_ = lean_ctor_get(v_x_2228_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_x_2228_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2294_ = v_x_2228_;
v_isShared_2295_ = v_isSharedCheck_2312_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_value_2292_);
lean_dec(v_x_2228_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2312_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___f_2296_; lean_object* v___f_2297_; lean_object* v___f_2298_; lean_object* v___f_2299_; lean_object* v___f_2300_; lean_object* v___f_2301_; lean_object* v___f_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; size_t v_sz_2306_; size_t v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2310_; 
v___f_2296_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2297_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2298_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2299_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2300_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2301_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2302_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___f_2296_);
lean_ctor_set(v___x_2303_, 1, v___f_2297_);
v___x_2304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
lean_ctor_set(v___x_2304_, 1, v___f_2298_);
lean_ctor_set(v___x_2304_, 2, v___f_2299_);
lean_ctor_set(v___x_2304_, 3, v___f_2300_);
lean_ctor_set(v___x_2304_, 4, v___f_2301_);
v___x_2305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
lean_ctor_set(v___x_2305_, 1, v___f_2302_);
v_sz_2306_ = lean_array_size(v_value_2292_);
v___x_2307_ = ((size_t)0ULL);
v___x_2308_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2305_, v___f_2224_, v_sz_2306_, v___x_2307_, v_value_2292_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set_tag(v___x_2294_, 7);
lean_ctor_set(v___x_2294_, 0, v___x_2308_);
v___x_2310_ = v___x_2294_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v___x_2308_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
case 4:
{
lean_object* v_value_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2333_; 
lean_dec_ref(v___f_2227_);
lean_dec_ref(v___f_2226_);
lean_dec_ref(v___f_2224_);
lean_dec_ref(v___f_2223_);
lean_dec_ref(v___f_2222_);
lean_dec_ref(v___f_2221_);
v_value_2313_ = lean_ctor_get(v_x_2228_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v_x_2228_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2315_ = v_x_2228_;
v_isShared_2316_ = v_isSharedCheck_2333_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_value_2313_);
lean_dec(v_x_2228_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2333_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___f_2317_; lean_object* v___f_2318_; lean_object* v___f_2319_; lean_object* v___f_2320_; lean_object* v___f_2321_; lean_object* v___f_2322_; lean_object* v___f_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; size_t v_sz_2327_; size_t v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2331_; 
v___f_2317_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2318_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2319_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2320_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2321_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2322_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2323_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___f_2317_);
lean_ctor_set(v___x_2324_, 1, v___f_2318_);
v___x_2325_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2324_);
lean_ctor_set(v___x_2325_, 1, v___f_2319_);
lean_ctor_set(v___x_2325_, 2, v___f_2320_);
lean_ctor_set(v___x_2325_, 3, v___f_2321_);
lean_ctor_set(v___x_2325_, 4, v___f_2322_);
v___x_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2325_);
lean_ctor_set(v___x_2326_, 1, v___f_2323_);
v_sz_2327_ = lean_array_size(v_value_2313_);
v___x_2328_ = ((size_t)0ULL);
v___x_2329_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2326_, v___f_2225_, v_sz_2327_, v___x_2328_, v_value_2313_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set_tag(v___x_2315_, 7);
lean_ctor_set(v___x_2315_, 0, v___x_2329_);
v___x_2331_ = v___x_2315_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v___x_2329_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
case 5:
{
lean_object* v_value_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2354_; 
lean_dec_ref(v___f_2227_);
lean_dec_ref(v___f_2225_);
lean_dec_ref(v___f_2224_);
lean_dec_ref(v___f_2223_);
lean_dec_ref(v___f_2222_);
lean_dec_ref(v___f_2221_);
v_value_2334_ = lean_ctor_get(v_x_2228_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_x_2228_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2336_ = v_x_2228_;
v_isShared_2337_ = v_isSharedCheck_2354_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_value_2334_);
lean_dec(v_x_2228_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2354_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___f_2338_; lean_object* v___f_2339_; lean_object* v___f_2340_; lean_object* v___f_2341_; lean_object* v___f_2342_; lean_object* v___f_2343_; lean_object* v___f_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; size_t v_sz_2348_; size_t v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2352_; 
v___f_2338_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2339_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2340_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2341_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2342_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2343_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2344_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2345_, 0, v___f_2338_);
lean_ctor_set(v___x_2345_, 1, v___f_2339_);
v___x_2346_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2345_);
lean_ctor_set(v___x_2346_, 1, v___f_2340_);
lean_ctor_set(v___x_2346_, 2, v___f_2341_);
lean_ctor_set(v___x_2346_, 3, v___f_2342_);
lean_ctor_set(v___x_2346_, 4, v___f_2343_);
v___x_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2346_);
lean_ctor_set(v___x_2347_, 1, v___f_2344_);
v_sz_2348_ = lean_array_size(v_value_2334_);
v___x_2349_ = ((size_t)0ULL);
v___x_2350_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2347_, v___f_2226_, v_sz_2348_, v___x_2349_, v_value_2334_);
if (v_isShared_2337_ == 0)
{
lean_ctor_set_tag(v___x_2336_, 7);
lean_ctor_set(v___x_2336_, 0, v___x_2350_);
v___x_2352_ = v___x_2336_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2350_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
case 6:
{
lean_object* v_value_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2375_; 
lean_dec_ref(v___f_2226_);
lean_dec_ref(v___f_2225_);
lean_dec_ref(v___f_2224_);
lean_dec_ref(v___f_2223_);
lean_dec_ref(v___f_2222_);
lean_dec_ref(v___f_2221_);
v_value_2355_ = lean_ctor_get(v_x_2228_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v_x_2228_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2357_ = v_x_2228_;
v_isShared_2358_ = v_isSharedCheck_2375_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_value_2355_);
lean_dec(v_x_2228_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2375_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___f_2359_; lean_object* v___f_2360_; lean_object* v___f_2361_; lean_object* v___f_2362_; lean_object* v___f_2363_; lean_object* v___f_2364_; lean_object* v___f_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; size_t v_sz_2369_; size_t v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2373_; 
v___f_2359_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2360_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2361_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2362_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2363_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2364_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2365_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2366_, 0, v___f_2359_);
lean_ctor_set(v___x_2366_, 1, v___f_2360_);
v___x_2367_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
lean_ctor_set(v___x_2367_, 1, v___f_2361_);
lean_ctor_set(v___x_2367_, 2, v___f_2362_);
lean_ctor_set(v___x_2367_, 3, v___f_2363_);
lean_ctor_set(v___x_2367_, 4, v___f_2364_);
v___x_2368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2367_);
lean_ctor_set(v___x_2368_, 1, v___f_2365_);
v_sz_2369_ = lean_array_size(v_value_2355_);
v___x_2370_ = ((size_t)0ULL);
v___x_2371_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2368_, v___f_2227_, v_sz_2369_, v___x_2370_, v_value_2355_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set_tag(v___x_2357_, 7);
lean_ctor_set(v___x_2357_, 0, v___x_2371_);
v___x_2373_ = v___x_2357_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
default: 
{
lean_object* v_value_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
lean_dec_ref(v___f_2227_);
lean_dec_ref(v___f_2226_);
lean_dec_ref(v___f_2225_);
lean_dec_ref(v___f_2224_);
lean_dec_ref(v___f_2223_);
lean_dec_ref(v___f_2222_);
lean_dec_ref(v___f_2221_);
v_value_2376_ = lean_ctor_get(v_x_2228_, 0);
lean_inc(v_value_2376_);
lean_dec_ref_known(v_x_2228_, 1);
v___x_2377_ = lean_mk_string_unchecked("", 0, 0);
v___x_2378_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2378_, 0, v_value_2376_);
lean_ctor_set(v___x_2378_, 1, v___x_2377_);
return v___x_2378_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction(void){
_start:
{
lean_object* v___f_2379_; lean_object* v___f_2380_; lean_object* v___f_2381_; 
v___f_2379_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0), 1, 0);
v___f_2380_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1___boxed), 1, 0);
lean_inc_ref_n(v___f_2379_, 5);
v___f_2381_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__7), 8, 7);
lean_closure_set(v___f_2381_, 0, v___f_2379_);
lean_closure_set(v___f_2381_, 1, v___f_2380_);
lean_closure_set(v___f_2381_, 2, v___f_2379_);
lean_closure_set(v___f_2381_, 3, v___f_2379_);
lean_closure_set(v___f_2381_, 4, v___f_2379_);
lean_closure_set(v___f_2381_, 5, v___f_2379_);
lean_closure_set(v___f_2381_, 6, v___f_2379_);
return v___f_2381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2382_){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2383_, 0, v_value_2382_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2385_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2386_, 0, v_value_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2388_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2389_, 0, v_value_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2391_){
_start:
{
lean_object* v___x_2392_; 
v___x_2392_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2392_, 0, v_value_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2394_){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2395_, 0, v_value_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2397_){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2398_, 0, v_value_2397_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayStreamDuplexSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2400_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2401_, 0, v_value_2400_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2404_, 0, v_value_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorIdx(lean_object* v_x_2406_){
_start:
{
switch(lean_obj_tag(v_x_2406_))
{
case 0:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_unsigned_to_nat(0u);
return v___x_2407_;
}
case 1:
{
lean_object* v___x_2408_; 
v___x_2408_ = lean_unsigned_to_nat(1u);
return v___x_2408_;
}
default: 
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_unsigned_to_nat(2u);
return v___x_2409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorIdx___boxed(lean_object* v_x_2410_){
_start:
{
lean_object* v_res_2411_; 
v_res_2411_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorIdx(v_x_2410_);
lean_dec_ref(v_x_2410_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(lean_object* v_t_2412_, lean_object* v_k_2413_){
_start:
{
lean_object* v_value_2414_; lean_object* v___x_2415_; 
v_value_2414_ = lean_ctor_get(v_t_2412_, 0);
lean_inc(v_value_2414_);
lean_dec_ref(v_t_2412_);
v___x_2415_ = lean_apply_1(v_k_2413_, v_value_2414_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim(lean_object* v_motive_2416_, lean_object* v_ctorIdx_2417_, lean_object* v_t_2418_, lean_object* v_h_2419_, lean_object* v_k_2420_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2418_, v_k_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___boxed(lean_object* v_motive_2422_, lean_object* v_ctorIdx_2423_, lean_object* v_t_2424_, lean_object* v_h_2425_, lean_object* v_k_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim(v_motive_2422_, v_ctorIdx_2423_, v_t_2424_, v_h_2425_, v_k_2426_);
lean_dec(v_ctorIdx_2423_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_readable_elim___redArg(lean_object* v_t_2428_, lean_object* v_readable_2429_){
_start:
{
lean_object* v___x_2430_; 
v___x_2430_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2428_, v_readable_2429_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_readable_elim(lean_object* v_motive_2431_, lean_object* v_t_2432_, lean_object* v_h_2433_, lean_object* v_readable_2434_){
_start:
{
lean_object* v___x_2435_; 
v___x_2435_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2432_, v_readable_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_writable_elim___redArg(lean_object* v_t_2436_, lean_object* v_writable_2437_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2436_, v_writable_2437_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_writable_elim(lean_object* v_motive_2439_, lean_object* v_t_2440_, lean_object* v_h_2441_, lean_object* v_writable_2442_){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2440_, v_writable_2442_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_duplex_elim___redArg(lean_object* v_t_2444_, lean_object* v_duplex_2445_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2444_, v_duplex_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_duplex_elim(lean_object* v_motive_2447_, lean_object* v_t_2448_, lean_object* v_h_2449_, lean_object* v_duplex_2450_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2448_, v_duplex_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0(lean_object* v_x_2452_){
_start:
{
lean_object* v_value_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v_value_2453_ = lean_ctor_get(v_x_2452_, 0);
v___x_2454_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2453_);
v___x_2455_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2455_, 0, v_value_2453_);
lean_ctor_set(v___x_2455_, 1, v___x_2454_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0___boxed(lean_object* v_x_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0(v_x_2456_);
lean_dec_ref(v_x_2456_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplex___lam__0(lean_object* v_value_2459_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2460_, 0, v_value_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplex___lam__0(lean_object* v_value_2462_){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2463_, 0, v_value_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplex___lam__0(lean_object* v_value_2465_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2466_, 0, v_value_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorIdx(lean_object* v_x_2468_){
_start:
{
switch(lean_obj_tag(v_x_2468_))
{
case 0:
{
lean_object* v___x_2469_; 
v___x_2469_ = lean_unsigned_to_nat(0u);
return v___x_2469_;
}
case 1:
{
lean_object* v___x_2470_; 
v___x_2470_ = lean_unsigned_to_nat(1u);
return v___x_2470_;
}
case 2:
{
lean_object* v___x_2471_; 
v___x_2471_ = lean_unsigned_to_nat(2u);
return v___x_2471_;
}
case 3:
{
lean_object* v___x_2472_; 
v___x_2472_ = lean_unsigned_to_nat(3u);
return v___x_2472_;
}
default: 
{
lean_object* v___x_2473_; 
v___x_2473_ = lean_unsigned_to_nat(4u);
return v___x_2473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorIdx___boxed(lean_object* v_x_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorIdx(v_x_2474_);
lean_dec_ref(v_x_2474_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(lean_object* v_t_2476_, lean_object* v_k_2477_){
_start:
{
lean_object* v_value_2478_; lean_object* v___x_2479_; 
v_value_2478_ = lean_ctor_get(v_t_2476_, 0);
lean_inc(v_value_2478_);
lean_dec_ref(v_t_2476_);
v___x_2479_ = lean_apply_1(v_k_2477_, v_value_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim(lean_object* v_motive_2480_, lean_object* v_ctorIdx_2481_, lean_object* v_t_2482_, lean_object* v_h_2483_, lean_object* v_k_2484_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2482_, v_k_2484_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___boxed(lean_object* v_motive_2486_, lean_object* v_ctorIdx_2487_, lean_object* v_t_2488_, lean_object* v_h_2489_, lean_object* v_k_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim(v_motive_2486_, v_ctorIdx_2487_, v_t_2488_, v_h_2489_, v_k_2490_);
lean_dec(v_ctorIdx_2487_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readable_elim___redArg(lean_object* v_t_2492_, lean_object* v_readable_2493_){
_start:
{
lean_object* v___x_2494_; 
v___x_2494_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2492_, v_readable_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readable_elim(lean_object* v_motive_2495_, lean_object* v_t_2496_, lean_object* v_h_2497_, lean_object* v_readable_2498_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2496_, v_readable_2498_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writable_elim___redArg(lean_object* v_t_2500_, lean_object* v_writable_2501_){
_start:
{
lean_object* v___x_2502_; 
v___x_2502_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2500_, v_writable_2501_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writable_elim(lean_object* v_motive_2503_, lean_object* v_t_2504_, lean_object* v_h_2505_, lean_object* v_writable_2506_){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2504_, v_writable_2506_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_duplex_elim___redArg(lean_object* v_t_2508_, lean_object* v_duplex_2509_){
_start:
{
lean_object* v___x_2510_; 
v___x_2510_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2508_, v_duplex_2509_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_duplex_elim(lean_object* v_motive_2511_, lean_object* v_t_2512_, lean_object* v_h_2513_, lean_object* v_duplex_2514_){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2512_, v_duplex_2514_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writableStream_elim___redArg(lean_object* v_t_2516_, lean_object* v_writableStream_2517_){
_start:
{
lean_object* v___x_2518_; 
v___x_2518_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2516_, v_writableStream_2517_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writableStream_elim(lean_object* v_motive_2519_, lean_object* v_t_2520_, lean_object* v_h_2521_, lean_object* v_writableStream_2522_){
_start:
{
lean_object* v___x_2523_; 
v___x_2523_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2520_, v_writableStream_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readableStream_elim___redArg(lean_object* v_t_2524_, lean_object* v_readableStream_2525_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2524_, v_readableStream_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readableStream_elim(lean_object* v_motive_2527_, lean_object* v_t_2528_, lean_object* v_h_2529_, lean_object* v_readableStream_2530_){
_start:
{
lean_object* v___x_2531_; 
v___x_2531_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2528_, v_readableStream_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_x_2532_){
_start:
{
lean_object* v_value_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v_value_2533_ = lean_ctor_get(v_x_2532_, 0);
v___x_2534_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2533_);
v___x_2535_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2535_, 0, v_value_2533_);
lean_ctor_set(v___x_2535_, 1, v___x_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0___boxed(lean_object* v_x_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(v_x_2536_);
lean_dec_ref(v_x_2536_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2539_){
_start:
{
lean_object* v___x_2540_; 
v___x_2540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2540_, 0, v_value_2539_);
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2542_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2543_, 0, v_value_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2545_){
_start:
{
lean_object* v___x_2546_; 
v___x_2546_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2546_, 0, v_value_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2548_){
_start:
{
lean_object* v___x_2549_; 
v___x_2549_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2549_, 0, v_value_2548_);
return v___x_2549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2551_){
_start:
{
lean_object* v___x_2552_; 
v___x_2552_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2552_, 0, v_value_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorIdx(lean_object* v_x_2554_){
_start:
{
switch(lean_obj_tag(v_x_2554_))
{
case 0:
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_unsigned_to_nat(0u);
return v___x_2555_;
}
case 1:
{
lean_object* v___x_2556_; 
v___x_2556_ = lean_unsigned_to_nat(1u);
return v___x_2556_;
}
default: 
{
lean_object* v___x_2557_; 
v___x_2557_ = lean_unsigned_to_nat(2u);
return v___x_2557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorIdx___boxed(lean_object* v_x_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorIdx(v_x_2558_);
lean_dec_ref(v_x_2558_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(lean_object* v_t_2560_, lean_object* v_k_2561_){
_start:
{
lean_object* v_value_2562_; lean_object* v___x_2563_; 
v_value_2562_ = lean_ctor_get(v_t_2560_, 0);
lean_inc(v_value_2562_);
lean_dec_ref(v_t_2560_);
v___x_2563_ = lean_apply_1(v_k_2561_, v_value_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim(lean_object* v_motive_2564_, lean_object* v_ctorIdx_2565_, lean_object* v_t_2566_, lean_object* v_h_2567_, lean_object* v_k_2568_){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2566_, v_k_2568_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___boxed(lean_object* v_motive_2570_, lean_object* v_ctorIdx_2571_, lean_object* v_t_2572_, lean_object* v_h_2573_, lean_object* v_k_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim(v_motive_2570_, v_ctorIdx_2571_, v_t_2572_, v_h_2573_, v_k_2574_);
lean_dec(v_ctorIdx_2571_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readable_elim___redArg(lean_object* v_t_2576_, lean_object* v_readable_2577_){
_start:
{
lean_object* v___x_2578_; 
v___x_2578_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2576_, v_readable_2577_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readable_elim(lean_object* v_motive_2579_, lean_object* v_t_2580_, lean_object* v_h_2581_, lean_object* v_readable_2582_){
_start:
{
lean_object* v___x_2583_; 
v___x_2583_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2580_, v_readable_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_duplex_elim___redArg(lean_object* v_t_2584_, lean_object* v_duplex_2585_){
_start:
{
lean_object* v___x_2586_; 
v___x_2586_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2584_, v_duplex_2585_);
return v___x_2586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_duplex_elim(lean_object* v_motive_2587_, lean_object* v_t_2588_, lean_object* v_h_2589_, lean_object* v_duplex_2590_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2588_, v_duplex_2590_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readableStream_elim___redArg(lean_object* v_t_2592_, lean_object* v_readableStream_2593_){
_start:
{
lean_object* v___x_2594_; 
v___x_2594_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2592_, v_readableStream_2593_);
return v___x_2594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readableStream_elim(lean_object* v_motive_2595_, lean_object* v_t_2596_, lean_object* v_h_2597_, lean_object* v_readableStream_2598_){
_start:
{
lean_object* v___x_2599_; 
v___x_2599_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2596_, v_readableStream_2598_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0(lean_object* v_x_2600_){
_start:
{
lean_object* v_value_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v_value_2601_ = lean_ctor_get(v_x_2600_, 0);
v___x_2602_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2601_);
v___x_2603_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2603_, 0, v_value_2601_);
lean_ctor_set(v___x_2603_, 1, v___x_2602_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0___boxed(lean_object* v_x_2604_){
_start:
{
lean_object* v_res_2605_; 
v_res_2605_ = l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0(v_x_2604_);
lean_dec_ref(v_x_2604_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrDuplexOrReadableStream___lam__0(lean_object* v_value_2607_){
_start:
{
lean_object* v___x_2608_; 
v___x_2608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2608_, 0, v_value_2607_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrDuplexOrReadableStream___lam__0(lean_object* v_value_2610_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_value_2610_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrDuplexOrReadableStream___lam__0(lean_object* v_value_2613_){
_start:
{
lean_object* v___x_2614_; 
v___x_2614_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2614_, 0, v_value_2613_);
return v___x_2614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorIdx(lean_object* v_x_2616_){
_start:
{
switch(lean_obj_tag(v_x_2616_))
{
case 0:
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_unsigned_to_nat(0u);
return v___x_2617_;
}
case 1:
{
lean_object* v___x_2618_; 
v___x_2618_ = lean_unsigned_to_nat(1u);
return v___x_2618_;
}
default: 
{
lean_object* v___x_2619_; 
v___x_2619_ = lean_unsigned_to_nat(2u);
return v___x_2619_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorIdx___boxed(lean_object* v_x_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorIdx(v_x_2620_);
lean_dec_ref(v_x_2620_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(lean_object* v_t_2622_, lean_object* v_k_2623_){
_start:
{
lean_object* v_value_2624_; lean_object* v___x_2625_; 
v_value_2624_ = lean_ctor_get(v_t_2622_, 0);
lean_inc(v_value_2624_);
lean_dec_ref(v_t_2622_);
v___x_2625_ = lean_apply_1(v_k_2623_, v_value_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim(lean_object* v_motive_2626_, lean_object* v_ctorIdx_2627_, lean_object* v_t_2628_, lean_object* v_h_2629_, lean_object* v_k_2630_){
_start:
{
lean_object* v___x_2631_; 
v___x_2631_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2628_, v_k_2630_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___boxed(lean_object* v_motive_2632_, lean_object* v_ctorIdx_2633_, lean_object* v_t_2634_, lean_object* v_h_2635_, lean_object* v_k_2636_){
_start:
{
lean_object* v_res_2637_; 
v_res_2637_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim(v_motive_2632_, v_ctorIdx_2633_, v_t_2634_, v_h_2635_, v_k_2636_);
lean_dec(v_ctorIdx_2633_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writable_elim___redArg(lean_object* v_t_2638_, lean_object* v_writable_2639_){
_start:
{
lean_object* v___x_2640_; 
v___x_2640_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2638_, v_writable_2639_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writable_elim(lean_object* v_motive_2641_, lean_object* v_t_2642_, lean_object* v_h_2643_, lean_object* v_writable_2644_){
_start:
{
lean_object* v___x_2645_; 
v___x_2645_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2642_, v_writable_2644_);
return v___x_2645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_duplex_elim___redArg(lean_object* v_t_2646_, lean_object* v_duplex_2647_){
_start:
{
lean_object* v___x_2648_; 
v___x_2648_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2646_, v_duplex_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_duplex_elim(lean_object* v_motive_2649_, lean_object* v_t_2650_, lean_object* v_h_2651_, lean_object* v_duplex_2652_){
_start:
{
lean_object* v___x_2653_; 
v___x_2653_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2650_, v_duplex_2652_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writableStream_elim___redArg(lean_object* v_t_2654_, lean_object* v_writableStream_2655_){
_start:
{
lean_object* v___x_2656_; 
v___x_2656_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2654_, v_writableStream_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writableStream_elim(lean_object* v_motive_2657_, lean_object* v_t_2658_, lean_object* v_h_2659_, lean_object* v_writableStream_2660_){
_start:
{
lean_object* v___x_2661_; 
v___x_2661_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2658_, v_writableStream_2660_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0(lean_object* v_x_2662_){
_start:
{
lean_object* v_value_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v_value_2663_ = lean_ctor_get(v_x_2662_, 0);
v___x_2664_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2663_);
v___x_2665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2665_, 0, v_value_2663_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0___boxed(lean_object* v_x_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0(v_x_2666_);
lean_dec_ref(v_x_2666_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStream___lam__0(lean_object* v_value_2669_){
_start:
{
lean_object* v___x_2670_; 
v___x_2670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2670_, 0, v_value_2669_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStream___lam__0(lean_object* v_value_2672_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2673_, 0, v_value_2672_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStream___lam__0(lean_object* v_value_2675_){
_start:
{
lean_object* v___x_2676_; 
v___x_2676_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2676_, 0, v_value_2675_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamPipelineOptions___lam__0(lean_object* v___f_2678_, lean_object* v___f_2679_, lean_object* v_d_2680_){
_start:
{
lean_object* v_signal_2681_; lean_object* v_end_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2699_; 
v_signal_2681_ = lean_ctor_get(v_d_2680_, 0);
v_end_2682_ = lean_ctor_get(v_d_2680_, 1);
v_isSharedCheck_2699_ = !lean_is_exclusive(v_d_2680_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2684_ = v_d_2680_;
v_isShared_2685_ = v_isSharedCheck_2699_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_end_2682_);
lean_inc(v_signal_2681_);
lean_dec(v_d_2680_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2699_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2689_; 
v___x_2686_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_2687_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2678_, v_signal_2681_);
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 1, v___x_2687_);
lean_ctor_set(v___x_2684_, 0, v___x_2686_);
v___x_2689_ = v___x_2684_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2686_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v___x_2687_);
v___x_2689_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2690_ = lean_mk_string_unchecked("end", 3, 3);
v___x_2691_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2679_, v_end_2682_);
v___x_2692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2690_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
v___x_2693_ = lean_unsigned_to_nat(2u);
v___x_2694_ = lean_mk_empty_array_with_capacity(v___x_2693_);
v___x_2695_ = lean_array_push(v___x_2694_, v___x_2689_);
v___x_2696_ = lean_array_push(v___x_2695_, v___x_2692_);
v___x_2697_ = l_Lasm_JS_Web_Internal_fields(v___x_2696_);
lean_dec_ref(v___x_2696_);
return v___x_2697_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamPipelineOptions(void){
_start:
{
lean_object* v___f_2700_; lean_object* v___f_2701_; lean_object* v___f_2702_; 
v___f_2700_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_2701_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2702_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamPipelineOptions___lam__0), 3, 2);
lean_closure_set(v___f_2702_, 0, v___f_2700_);
lean_closure_set(v___f_2702_, 1, v___f_2701_);
return v___f_2702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamFinishedOptions2___lam__0(lean_object* v___f_2703_, lean_object* v___f_2704_, lean_object* v_d_2705_){
_start:
{
lean_object* v_error_2706_; lean_object* v_readable_2707_; lean_object* v_writable_2708_; lean_object* v_signal_2709_; lean_object* v_cleanup_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v_error_2706_ = lean_ctor_get(v_d_2705_, 0);
lean_inc(v_error_2706_);
v_readable_2707_ = lean_ctor_get(v_d_2705_, 1);
lean_inc(v_readable_2707_);
v_writable_2708_ = lean_ctor_get(v_d_2705_, 2);
lean_inc(v_writable_2708_);
v_signal_2709_ = lean_ctor_get(v_d_2705_, 3);
lean_inc(v_signal_2709_);
v_cleanup_2710_ = lean_ctor_get(v_d_2705_, 4);
lean_inc(v_cleanup_2710_);
lean_dec_ref(v_d_2705_);
v___x_2711_ = lean_mk_string_unchecked("error", 5, 5);
lean_inc_ref_n(v___f_2703_, 3);
v___x_2712_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2703_, v_error_2706_);
v___x_2713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2711_);
lean_ctor_set(v___x_2713_, 1, v___x_2712_);
v___x_2714_ = lean_mk_string_unchecked("readable", 8, 8);
v___x_2715_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2703_, v_readable_2707_);
v___x_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2714_);
lean_ctor_set(v___x_2716_, 1, v___x_2715_);
v___x_2717_ = lean_mk_string_unchecked("writable", 8, 8);
v___x_2718_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2703_, v_writable_2708_);
v___x_2719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2717_);
lean_ctor_set(v___x_2719_, 1, v___x_2718_);
v___x_2720_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_2721_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2704_, v_signal_2709_);
v___x_2722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2720_);
lean_ctor_set(v___x_2722_, 1, v___x_2721_);
v___x_2723_ = lean_mk_string_unchecked("cleanup", 7, 7);
v___x_2724_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2703_, v_cleanup_2710_);
v___x_2725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2723_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = lean_unsigned_to_nat(5u);
v___x_2727_ = lean_mk_empty_array_with_capacity(v___x_2726_);
v___x_2728_ = lean_array_push(v___x_2727_, v___x_2713_);
v___x_2729_ = lean_array_push(v___x_2728_, v___x_2716_);
v___x_2730_ = lean_array_push(v___x_2729_, v___x_2719_);
v___x_2731_ = lean_array_push(v___x_2730_, v___x_2722_);
v___x_2732_ = lean_array_push(v___x_2731_, v___x_2725_);
v___x_2733_ = l_Lasm_JS_Web_Internal_fields(v___x_2732_);
lean_dec_ref(v___x_2732_);
return v___x_2733_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamFinishedOptions2(void){
_start:
{
lean_object* v___f_2734_; lean_object* v___f_2735_; lean_object* v___f_2736_; 
v___f_2734_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2735_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_2736_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamFinishedOptions2___lam__0), 3, 2);
lean_closure_set(v___f_2736_, 0, v___f_2734_);
lean_closure_set(v___f_2736_, 1, v___f_2735_);
return v___f_2736_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Stream(uint8_t builtin) {
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
res = initialize_Lasm_JS_Node_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Events(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSStreamWritable = _init_l_Lasm_JS_Node_instFromJSStreamWritable();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamWritable);
l_Lasm_JS_Node_instFromJSStreamReadable = _init_l_Lasm_JS_Node_instFromJSStreamReadable();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamReadable);
l_Lasm_JS_Node_instFromJSStreamDuplex = _init_l_Lasm_JS_Node_instFromJSStreamDuplex();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamDuplex);
l_Lasm_JS_Node_instFromJSStreamTransform = _init_l_Lasm_JS_Node_instFromJSStreamTransform();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamTransform);
l_Lasm_JS_Node_instFromJSStreamPassThrough = _init_l_Lasm_JS_Node_instFromJSStreamPassThrough();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamPassThrough);
l_Lasm_JS_Node_instFromJSStreamWritableCloseListener = _init_l_Lasm_JS_Node_instFromJSStreamWritableCloseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamWritableCloseListener);
l_Lasm_JS_Node_instFromJSStreamWritableDrainListener = _init_l_Lasm_JS_Node_instFromJSStreamWritableDrainListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamWritableDrainListener);
l_Lasm_JS_Node_instFromJSStreamWritableErrorListener = _init_l_Lasm_JS_Node_instFromJSStreamWritableErrorListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamWritableErrorListener);
l_Lasm_JS_Node_instFromJSStreamWritableFinishListener = _init_l_Lasm_JS_Node_instFromJSStreamWritableFinishListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamWritableFinishListener);
l_Lasm_JS_Node_instFromJSStreamWritablePipeListener = _init_l_Lasm_JS_Node_instFromJSStreamWritablePipeListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamWritablePipeListener);
l_Lasm_JS_Node_instFromJSStreamWritableUnpipeListener = _init_l_Lasm_JS_Node_instFromJSStreamWritableUnpipeListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamWritableUnpipeListener);
l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions = _init_l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions);
l_Lasm_JS_Node_instFromJSStreamReadableCloseListener = _init_l_Lasm_JS_Node_instFromJSStreamReadableCloseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamReadableCloseListener);
l_Lasm_JS_Node_instFromJSStreamReadableDataListener = _init_l_Lasm_JS_Node_instFromJSStreamReadableDataListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamReadableDataListener);
l_Lasm_JS_Node_instFromJSStreamReadableEndListener = _init_l_Lasm_JS_Node_instFromJSStreamReadableEndListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamReadableEndListener);
l_Lasm_JS_Node_instFromJSStreamReadableErrorListener = _init_l_Lasm_JS_Node_instFromJSStreamReadableErrorListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamReadableErrorListener);
l_Lasm_JS_Node_instFromJSStreamReadablePauseListener = _init_l_Lasm_JS_Node_instFromJSStreamReadablePauseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamReadablePauseListener);
l_Lasm_JS_Node_instFromJSStreamReadableReadableListener = _init_l_Lasm_JS_Node_instFromJSStreamReadableReadableListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamReadableReadableListener);
l_Lasm_JS_Node_instFromJSStreamReadableResumeListener = _init_l_Lasm_JS_Node_instFromJSStreamReadableResumeListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSStreamReadableResumeListener);
l_Lasm_JS_Node_instToJSStreamReadablePipeOptions = _init_l_Lasm_JS_Node_instToJSStreamReadablePipeOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadablePipeOptions);
l_Lasm_JS_Node_instToJSStreamReadableComposeOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableComposeOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions);
l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions);
l_Lasm_JS_Node_instToJSStreamReadableMapOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableMapOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableMapOptions);
l_Lasm_JS_Node_instToJSStreamReadableFilterOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableFilterOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableFilterOptions);
l_Lasm_JS_Node_instToJSStreamReadableForEachOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableForEachOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableForEachOptions);
l_Lasm_JS_Node_instToJSStreamReadableToArrayOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableToArrayOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableToArrayOptions);
l_Lasm_JS_Node_instToJSStreamReadableSomeOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableSomeOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableSomeOptions);
l_Lasm_JS_Node_instToJSStreamReadableFindOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableFindOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableFindOptions);
l_Lasm_JS_Node_instToJSStreamReadableEveryOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableEveryOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableEveryOptions);
l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions);
l_Lasm_JS_Node_instToJSStreamReadableDropOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableDropOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableDropOptions);
l_Lasm_JS_Node_instToJSStreamReadableTakeOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableTakeOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableTakeOptions);
l_Lasm_JS_Node_instToJSStreamReadableReduceOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableReduceOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableReduceOptions);
l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions);
l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy = _init_l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy);
l_Lasm_JS_Node_instToJSStreamReadableToWebOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableToWebOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableToWebOptions);
l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair = _init_l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair);
l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions = _init_l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions);
l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions = _init_l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions);
l_Lasm_JS_Node_instToJSStreamFinishedOptions = _init_l_Lasm_JS_Node_instToJSStreamFinishedOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamFinishedOptions);
l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream = _init_l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream();
lean_mark_persistent(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream);
l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction = _init_l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction();
lean_mark_persistent(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction);
l_Lasm_JS_Node_instToJSStreamPipelineOptions = _init_l_Lasm_JS_Node_instToJSStreamPipelineOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamPipelineOptions);
l_Lasm_JS_Node_instToJSStreamFinishedOptions2 = _init_l_Lasm_JS_Node_instToJSStreamFinishedOptions2();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamFinishedOptions2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
