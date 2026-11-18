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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableNewOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableNewOptions;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableNewOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableNewOptions;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamTransformNewOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamTransformNewOptions;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableNewOptions___lam__0(lean_object* v___f_682_, lean_object* v___f_683_, lean_object* v___f_684_, lean_object* v___f_685_, lean_object* v___f_686_, lean_object* v_d_687_){
_start:
{
lean_object* v_highWaterMark_688_; lean_object* v_decodeStrings_689_; lean_object* v_defaultEncoding_690_; lean_object* v_objectMode_691_; lean_object* v_emitClose_692_; lean_object* v_write_693_; lean_object* v_writev_694_; lean_object* v_destroy_695_; lean_object* v_final_696_; lean_object* v_construct_697_; lean_object* v_autoDestroy_698_; lean_object* v_signal_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_highWaterMark_688_ = lean_ctor_get(v_d_687_, 0);
lean_inc(v_highWaterMark_688_);
v_decodeStrings_689_ = lean_ctor_get(v_d_687_, 1);
lean_inc(v_decodeStrings_689_);
v_defaultEncoding_690_ = lean_ctor_get(v_d_687_, 2);
lean_inc(v_defaultEncoding_690_);
v_objectMode_691_ = lean_ctor_get(v_d_687_, 3);
lean_inc(v_objectMode_691_);
v_emitClose_692_ = lean_ctor_get(v_d_687_, 4);
lean_inc(v_emitClose_692_);
v_write_693_ = lean_ctor_get(v_d_687_, 5);
lean_inc(v_write_693_);
v_writev_694_ = lean_ctor_get(v_d_687_, 6);
lean_inc(v_writev_694_);
v_destroy_695_ = lean_ctor_get(v_d_687_, 7);
lean_inc(v_destroy_695_);
v_final_696_ = lean_ctor_get(v_d_687_, 8);
lean_inc(v_final_696_);
v_construct_697_ = lean_ctor_get(v_d_687_, 9);
lean_inc(v_construct_697_);
v_autoDestroy_698_ = lean_ctor_get(v_d_687_, 10);
lean_inc(v_autoDestroy_698_);
v_signal_699_ = lean_ctor_get(v_d_687_, 11);
lean_inc(v_signal_699_);
lean_dec_ref(v_d_687_);
v___x_700_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_701_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_682_, v_highWaterMark_688_);
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_700_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = lean_mk_string_unchecked("decodeStrings", 13, 13);
lean_inc_ref_n(v___f_683_, 3);
v___x_704_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_683_, v_decodeStrings_689_);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = lean_mk_string_unchecked("defaultEncoding", 15, 15);
v___x_707_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_684_, v_defaultEncoding_690_);
v___x_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_706_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___x_709_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_710_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_683_, v_objectMode_691_);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_709_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_713_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_683_, v_emitClose_692_);
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_712_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = lean_mk_string_unchecked("write", 5, 5);
lean_inc_ref_n(v___f_685_, 4);
v___x_716_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_685_, v_write_693_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = lean_mk_string_unchecked("writev", 6, 6);
v___x_719_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_685_, v_writev_694_);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_mk_string_unchecked("destroy", 7, 7);
v___x_722_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_685_, v_destroy_695_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_721_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = lean_mk_string_unchecked("final", 5, 5);
v___x_725_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_685_, v_final_696_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = lean_mk_string_unchecked("construct", 9, 9);
v___x_728_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_685_, v_construct_697_);
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_727_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = lean_mk_string_unchecked("autoDestroy", 11, 11);
v___x_731_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_683_, v_autoDestroy_698_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_734_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_686_, v_signal_699_);
v___x_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_733_);
lean_ctor_set(v___x_735_, 1, v___x_734_);
v___x_736_ = lean_unsigned_to_nat(12u);
v___x_737_ = lean_mk_empty_array_with_capacity(v___x_736_);
v___x_738_ = lean_array_push(v___x_737_, v___x_702_);
v___x_739_ = lean_array_push(v___x_738_, v___x_705_);
v___x_740_ = lean_array_push(v___x_739_, v___x_708_);
v___x_741_ = lean_array_push(v___x_740_, v___x_711_);
v___x_742_ = lean_array_push(v___x_741_, v___x_714_);
v___x_743_ = lean_array_push(v___x_742_, v___x_717_);
v___x_744_ = lean_array_push(v___x_743_, v___x_720_);
v___x_745_ = lean_array_push(v___x_744_, v___x_723_);
v___x_746_ = lean_array_push(v___x_745_, v___x_726_);
v___x_747_ = lean_array_push(v___x_746_, v___x_729_);
v___x_748_ = lean_array_push(v___x_747_, v___x_732_);
v___x_749_ = lean_array_push(v___x_748_, v___x_735_);
v___x_750_ = l_Lasm_JS_Web_Internal_fields(v___x_749_);
lean_dec_ref(v___x_749_);
return v___x_750_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamWritableNewOptions(void){
_start:
{
lean_object* v___f_751_; lean_object* v___f_752_; lean_object* v___f_753_; lean_object* v___f_754_; lean_object* v___f_755_; lean_object* v___f_756_; 
v___f_751_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_752_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_753_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_754_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_755_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_756_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamWritableNewOptions___lam__0), 6, 5);
lean_closure_set(v___f_756_, 0, v___f_751_);
lean_closure_set(v___f_756_, 1, v___f_752_);
lean_closure_set(v___f_756_, 2, v___f_753_);
lean_closure_set(v___f_756_, 3, v___f_754_);
lean_closure_set(v___f_756_, 4, v___f_755_);
return v___f_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions___lam__0(lean_object* v___f_757_, lean_object* v___f_758_, lean_object* v___f_759_, lean_object* v_d_760_){
_start:
{
lean_object* v_decodeStrings_761_; lean_object* v_highWaterMark_762_; lean_object* v_objectMode_763_; lean_object* v_signal_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v_decodeStrings_761_ = lean_ctor_get(v_d_760_, 0);
lean_inc(v_decodeStrings_761_);
v_highWaterMark_762_ = lean_ctor_get(v_d_760_, 1);
lean_inc(v_highWaterMark_762_);
v_objectMode_763_ = lean_ctor_get(v_d_760_, 2);
lean_inc(v_objectMode_763_);
v_signal_764_ = lean_ctor_get(v_d_760_, 3);
lean_inc(v_signal_764_);
lean_dec_ref(v_d_760_);
v___x_765_ = lean_mk_string_unchecked("decodeStrings", 13, 13);
lean_inc_ref(v___f_757_);
v___x_766_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_757_, v_decodeStrings_761_);
v___x_767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_765_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v___x_768_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_769_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_758_, v_highWaterMark_762_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v___x_768_);
lean_ctor_set(v___x_770_, 1, v___x_769_);
v___x_771_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_772_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_757_, v_objectMode_763_);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v___x_771_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v___x_774_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_775_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_759_, v_signal_764_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_774_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = lean_unsigned_to_nat(4u);
v___x_778_ = lean_mk_empty_array_with_capacity(v___x_777_);
v___x_779_ = lean_array_push(v___x_778_, v___x_767_);
v___x_780_ = lean_array_push(v___x_779_, v___x_770_);
v___x_781_ = lean_array_push(v___x_780_, v___x_773_);
v___x_782_ = lean_array_push(v___x_781_, v___x_776_);
v___x_783_ = l_Lasm_JS_Web_Internal_fields(v___x_782_);
lean_dec_ref(v___x_782_);
return v___x_783_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions(void){
_start:
{
lean_object* v___f_784_; lean_object* v___f_785_; lean_object* v___f_786_; lean_object* v___f_787_; 
v___f_784_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_785_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_786_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_787_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamWritableFromWebOptions___lam__0), 4, 3);
lean_closure_set(v___f_787_, 0, v___f_784_);
lean_closure_set(v___f_787_, 1, v___f_785_);
lean_closure_set(v___f_787_, 2, v___f_786_);
return v___f_787_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableCloseListener(void){
_start:
{
lean_object* v___f_789_; lean_object* v___x_790_; uint8_t v___x_791_; lean_object* v___x_792_; 
v___f_789_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_790_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.CloseListener", 42, 42);
v___x_791_ = 0;
v___x_792_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_792_, 0, v___f_789_);
lean_ctor_set(v___x_792_, 1, v___x_790_);
lean_ctor_set_uint8(v___x_792_, sizeof(void*)*2, v___x_791_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofFn(lean_object* v_f_793_){
_start:
{
lean_object* v___f_795_; lean_object* v___f_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___f_795_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_796_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_796_, 0, v_f_793_);
lean_closure_set(v___f_796_, 1, v___f_795_);
v___x_797_ = lean_unsigned_to_nat(0u);
v___x_798_ = l_Lasm_JS_Function_ofFn(v___f_796_, v___x_797_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_798_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_798_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
v_a_807_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_798_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_798_);
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
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofFn___boxed(lean_object* v_f_815_, lean_object* v_a_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lasm_JS_Node_stream_Readable_CloseListener_ofFn(v_f_815_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofSyncFn(lean_object* v_f_818_){
_start:
{
lean_object* v___f_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___f_820_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_820_, 0, v_f_818_);
v___x_821_ = lean_unsigned_to_nat(0u);
v___x_822_ = l_Lasm_JS_Function_ofSyncFn(v___f_820_, v___x_821_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_822_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_822_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
v_a_831_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_822_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_822_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_CloseListener_ofSyncFn___boxed(lean_object* v_f_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lasm_JS_Node_stream_Readable_CloseListener_ofSyncFn(v_f_839_);
return v_res_841_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableDataListener(void){
_start:
{
lean_object* v___f_843_; lean_object* v___x_844_; uint8_t v___x_845_; lean_object* v___x_846_; 
v___f_843_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_844_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.DataListener", 41, 41);
v___x_845_ = 0;
v___x_846_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_846_, 0, v___f_843_);
lean_ctor_set(v___x_846_, 1, v___x_844_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*2, v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofFn(lean_object* v_f_847_){
_start:
{
lean_object* v___f_849_; lean_object* v___f_850_; lean_object* v___f_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___f_849_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_850_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_850_, 0, v_f_847_);
lean_closure_set(v___f_850_, 1, v___f_849_);
v___f_851_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_851_, 0, v___f_850_);
v___x_852_ = lean_unsigned_to_nat(0u);
v___x_853_ = l_Lasm_JS_Function_ofFn(v___f_851_, v___x_852_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_853_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_853_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
v_a_862_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_853_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_853_);
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
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofFn___boxed(lean_object* v_f_870_, lean_object* v_a_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lasm_JS_Node_stream_Readable_DataListener_ofFn(v_f_870_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofSyncFn(lean_object* v_f_873_){
_start:
{
lean_object* v___f_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___f_875_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_875_, 0, v_f_873_);
v___x_876_ = lean_unsigned_to_nat(0u);
v___x_877_ = l_Lasm_JS_Function_ofSyncFn(v___f_875_, v___x_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
v_a_886_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_877_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_877_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_DataListener_ofSyncFn___boxed(lean_object* v_f_894_, lean_object* v_a_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l_Lasm_JS_Node_stream_Readable_DataListener_ofSyncFn(v_f_894_);
return v_res_896_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableEndListener(void){
_start:
{
lean_object* v___f_898_; lean_object* v___x_899_; uint8_t v___x_900_; lean_object* v___x_901_; 
v___f_898_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_899_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.EndListener", 40, 40);
v___x_900_ = 0;
v___x_901_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_901_, 0, v___f_898_);
lean_ctor_set(v___x_901_, 1, v___x_899_);
lean_ctor_set_uint8(v___x_901_, sizeof(void*)*2, v___x_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofFn(lean_object* v_f_902_){
_start:
{
lean_object* v___f_904_; lean_object* v___f_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___f_904_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_905_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_905_, 0, v_f_902_);
lean_closure_set(v___f_905_, 1, v___f_904_);
v___x_906_ = lean_unsigned_to_nat(0u);
v___x_907_ = l_Lasm_JS_Function_ofFn(v___f_905_, v___x_906_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_907_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_907_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
v_a_916_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_907_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_907_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofFn___boxed(lean_object* v_f_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lasm_JS_Node_stream_Readable_EndListener_ofFn(v_f_924_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofSyncFn(lean_object* v_f_927_){
_start:
{
lean_object* v___f_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___f_929_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_929_, 0, v_f_927_);
v___x_930_ = lean_unsigned_to_nat(0u);
v___x_931_ = l_Lasm_JS_Function_ofSyncFn(v___f_929_, v___x_930_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v___x_931_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
v_a_940_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_931_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_931_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_EndListener_ofSyncFn___boxed(lean_object* v_f_948_, lean_object* v_a_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lasm_JS_Node_stream_Readable_EndListener_ofSyncFn(v_f_948_);
return v_res_950_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableErrorListener(void){
_start:
{
lean_object* v___f_952_; lean_object* v___x_953_; uint8_t v___x_954_; lean_object* v___x_955_; 
v___f_952_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_953_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.ErrorListener", 42, 42);
v___x_954_ = 0;
v___x_955_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_955_, 0, v___f_952_);
lean_ctor_set(v___x_955_, 1, v___x_953_);
lean_ctor_set_uint8(v___x_955_, sizeof(void*)*2, v___x_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofFn(lean_object* v_f_956_){
_start:
{
lean_object* v___f_958_; lean_object* v___f_959_; lean_object* v___f_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___f_958_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_959_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_959_, 0, v_f_956_);
lean_closure_set(v___f_959_, 1, v___f_958_);
v___f_960_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_960_, 0, v___f_959_);
v___x_961_ = lean_unsigned_to_nat(0u);
v___x_962_ = l_Lasm_JS_Function_ofFn(v___f_960_, v___x_961_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v_a_971_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_962_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_962_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofFn___boxed(lean_object* v_f_979_, lean_object* v_a_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_Lasm_JS_Node_stream_Readable_ErrorListener_ofFn(v_f_979_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofSyncFn(lean_object* v_f_982_){
_start:
{
lean_object* v___f_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___f_984_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_ErrorListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_984_, 0, v_f_982_);
v___x_985_ = lean_unsigned_to_nat(0u);
v___x_986_ = l_Lasm_JS_Function_ofSyncFn(v___f_984_, v___x_985_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
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
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
v_a_995_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_986_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_986_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ErrorListener_ofSyncFn___boxed(lean_object* v_f_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lasm_JS_Node_stream_Readable_ErrorListener_ofSyncFn(v_f_1003_);
return v_res_1005_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadablePauseListener(void){
_start:
{
lean_object* v___f_1007_; lean_object* v___x_1008_; uint8_t v___x_1009_; lean_object* v___x_1010_; 
v___f_1007_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_1008_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.PauseListener", 42, 42);
v___x_1009_ = 0;
v___x_1010_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1010_, 0, v___f_1007_);
lean_ctor_set(v___x_1010_, 1, v___x_1008_);
lean_ctor_set_uint8(v___x_1010_, sizeof(void*)*2, v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofFn(lean_object* v_f_1011_){
_start:
{
lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___f_1013_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1014_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1014_, 0, v_f_1011_);
lean_closure_set(v___f_1014_, 1, v___f_1013_);
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = l_Lasm_JS_Function_ofFn(v___f_1014_, v___x_1015_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1016_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1016_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1016_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1016_);
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
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofFn___boxed(lean_object* v_f_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lasm_JS_Node_stream_Readable_PauseListener_ofFn(v_f_1033_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofSyncFn(lean_object* v_f_1036_){
_start:
{
lean_object* v___f_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___f_1038_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1038_, 0, v_f_1036_);
v___x_1039_ = lean_unsigned_to_nat(0u);
v___x_1040_ = l_Lasm_JS_Function_ofSyncFn(v___f_1038_, v___x_1039_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
v_a_1049_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1040_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1040_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_PauseListener_ofSyncFn___boxed(lean_object* v_f_1057_, lean_object* v_a_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Lasm_JS_Node_stream_Readable_PauseListener_ofSyncFn(v_f_1057_);
return v_res_1059_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableReadableListener(void){
_start:
{
lean_object* v___f_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; lean_object* v___x_1064_; 
v___f_1061_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_1062_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.ReadableListener", 45, 45);
v___x_1063_ = 0;
v___x_1064_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1064_, 0, v___f_1061_);
lean_ctor_set(v___x_1064_, 1, v___x_1062_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*2, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofFn(lean_object* v_f_1065_){
_start:
{
lean_object* v___f_1067_; lean_object* v___f_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___f_1067_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1068_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1068_, 0, v_f_1065_);
lean_closure_set(v___f_1068_, 1, v___f_1067_);
v___x_1069_ = lean_unsigned_to_nat(0u);
v___x_1070_ = l_Lasm_JS_Function_ofFn(v___f_1068_, v___x_1069_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1070_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1070_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1070_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1070_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofFn___boxed(lean_object* v_f_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lasm_JS_Node_stream_Readable_ReadableListener_ofFn(v_f_1087_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofSyncFn(lean_object* v_f_1090_){
_start:
{
lean_object* v___f_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___f_1092_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1092_, 0, v_f_1090_);
v___x_1093_ = lean_unsigned_to_nat(0u);
v___x_1094_ = l_Lasm_JS_Function_ofSyncFn(v___f_1092_, v___x_1093_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1094_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1094_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1103_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1094_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1094_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ReadableListener_ofSyncFn___boxed(lean_object* v_f_1111_, lean_object* v_a_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lasm_JS_Node_stream_Readable_ReadableListener_ofSyncFn(v_f_1111_);
return v_res_1113_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSStreamReadableResumeListener(void){
_start:
{
lean_object* v___f_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; lean_object* v___x_1118_; 
v___f_1115_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSStreamWritable___lam__0___boxed), 1, 0);
v___x_1116_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable.ResumeListener", 43, 43);
v___x_1117_ = 0;
v___x_1118_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1118_, 0, v___f_1115_);
lean_ctor_set(v___x_1118_, 1, v___x_1116_);
lean_ctor_set_uint8(v___x_1118_, sizeof(void*)*2, v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofFn(lean_object* v_f_1119_){
_start:
{
lean_object* v___f_1121_; lean_object* v___f_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___f_1121_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_1122_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1122_, 0, v_f_1119_);
lean_closure_set(v___f_1122_, 1, v___f_1121_);
v___x_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = l_Lasm_JS_Function_ofFn(v___f_1122_, v___x_1123_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1124_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
else
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
v_a_1133_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1135_ = v___x_1124_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1124_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_a_1133_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofFn___boxed(lean_object* v_f_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lasm_JS_Node_stream_Readable_ResumeListener_ofFn(v_f_1141_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofSyncFn(lean_object* v_f_1144_){
_start:
{
lean_object* v___f_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___f_1146_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_stream_Writable_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1146_, 0, v_f_1144_);
v___x_1147_ = lean_unsigned_to_nat(0u);
v___x_1148_ = l_Lasm_JS_Function_ofSyncFn(v___f_1146_, v___x_1147_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___x_1148_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1148_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_a_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
else
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
v_a_1157_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1148_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1148_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_Readable_ResumeListener_ofSyncFn___boxed(lean_object* v_f_1165_, lean_object* v_a_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lasm_JS_Node_stream_Readable_ResumeListener_ofSyncFn(v_f_1165_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableNewOptions___lam__0(lean_object* v___f_1168_, lean_object* v___f_1169_, lean_object* v___f_1170_, lean_object* v___f_1171_, lean_object* v___f_1172_, lean_object* v_d_1173_){
_start:
{
lean_object* v_highWaterMark_1174_; lean_object* v_encoding_1175_; lean_object* v_objectMode_1176_; lean_object* v_emitClose_1177_; lean_object* v_read_1178_; lean_object* v_destroy_1179_; lean_object* v_construct_1180_; lean_object* v_autoDestroy_1181_; lean_object* v_signal_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v_highWaterMark_1174_ = lean_ctor_get(v_d_1173_, 0);
lean_inc(v_highWaterMark_1174_);
v_encoding_1175_ = lean_ctor_get(v_d_1173_, 1);
lean_inc(v_encoding_1175_);
v_objectMode_1176_ = lean_ctor_get(v_d_1173_, 2);
lean_inc(v_objectMode_1176_);
v_emitClose_1177_ = lean_ctor_get(v_d_1173_, 3);
lean_inc(v_emitClose_1177_);
v_read_1178_ = lean_ctor_get(v_d_1173_, 4);
lean_inc(v_read_1178_);
v_destroy_1179_ = lean_ctor_get(v_d_1173_, 5);
lean_inc(v_destroy_1179_);
v_construct_1180_ = lean_ctor_get(v_d_1173_, 6);
lean_inc(v_construct_1180_);
v_autoDestroy_1181_ = lean_ctor_get(v_d_1173_, 7);
lean_inc(v_autoDestroy_1181_);
v_signal_1182_ = lean_ctor_get(v_d_1173_, 8);
lean_inc(v_signal_1182_);
lean_dec_ref(v_d_1173_);
v___x_1183_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1184_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1168_, v_highWaterMark_1174_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1187_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1169_, v_encoding_1175_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1186_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = lean_mk_string_unchecked("objectMode", 10, 10);
lean_inc_ref_n(v___f_1170_, 2);
v___x_1190_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1170_, v_objectMode_1176_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1189_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = lean_mk_string_unchecked("emitClose", 9, 9);
v___x_1193_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1170_, v_emitClose_1177_);
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1192_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
v___x_1195_ = lean_mk_string_unchecked("read", 4, 4);
lean_inc_ref_n(v___f_1171_, 2);
v___x_1196_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1171_, v_read_1178_);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1195_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = lean_mk_string_unchecked("destroy", 7, 7);
v___x_1199_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1171_, v_destroy_1179_);
v___x_1200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1198_);
lean_ctor_set(v___x_1200_, 1, v___x_1199_);
v___x_1201_ = lean_mk_string_unchecked("construct", 9, 9);
v___x_1202_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1171_, v_construct_1180_);
v___x_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1201_);
lean_ctor_set(v___x_1203_, 1, v___x_1202_);
v___x_1204_ = lean_mk_string_unchecked("autoDestroy", 11, 11);
v___x_1205_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1170_, v_autoDestroy_1181_);
v___x_1206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1204_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1208_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1172_, v_signal_1182_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1207_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = lean_unsigned_to_nat(9u);
v___x_1211_ = lean_mk_empty_array_with_capacity(v___x_1210_);
v___x_1212_ = lean_array_push(v___x_1211_, v___x_1185_);
v___x_1213_ = lean_array_push(v___x_1212_, v___x_1188_);
v___x_1214_ = lean_array_push(v___x_1213_, v___x_1191_);
v___x_1215_ = lean_array_push(v___x_1214_, v___x_1194_);
v___x_1216_ = lean_array_push(v___x_1215_, v___x_1197_);
v___x_1217_ = lean_array_push(v___x_1216_, v___x_1200_);
v___x_1218_ = lean_array_push(v___x_1217_, v___x_1203_);
v___x_1219_ = lean_array_push(v___x_1218_, v___x_1206_);
v___x_1220_ = lean_array_push(v___x_1219_, v___x_1209_);
v___x_1221_ = l_Lasm_JS_Web_Internal_fields(v___x_1220_);
lean_dec_ref(v___x_1220_);
return v___x_1221_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableNewOptions(void){
_start:
{
lean_object* v___f_1222_; lean_object* v___f_1223_; lean_object* v___f_1224_; lean_object* v___f_1225_; lean_object* v___f_1226_; lean_object* v___f_1227_; 
v___f_1222_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1223_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1224_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1225_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_1226_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1227_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableNewOptions___lam__0), 6, 5);
lean_closure_set(v___f_1227_, 0, v___f_1222_);
lean_closure_set(v___f_1227_, 1, v___f_1223_);
lean_closure_set(v___f_1227_, 2, v___f_1224_);
lean_closure_set(v___f_1227_, 3, v___f_1225_);
lean_closure_set(v___f_1227_, 4, v___f_1226_);
return v___f_1227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadablePipeOptions___lam__0(lean_object* v___f_1228_, lean_object* v_d_1229_){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1230_ = lean_mk_string_unchecked("end", 3, 3);
v___x_1231_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1228_, v_d_1229_);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1230_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
v___x_1233_ = lean_unsigned_to_nat(1u);
v___x_1234_ = lean_mk_empty_array_with_capacity(v___x_1233_);
v___x_1235_ = lean_array_push(v___x_1234_, v___x_1232_);
v___x_1236_ = l_Lasm_JS_Web_Internal_fields(v___x_1235_);
lean_dec_ref(v___x_1235_);
return v___x_1236_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadablePipeOptions(void){
_start:
{
lean_object* v___f_1237_; lean_object* v___f_1238_; 
v___f_1237_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1238_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadablePipeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1238_, 0, v___f_1237_);
return v___f_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorIdx(lean_object* v_x_1239_){
_start:
{
switch(lean_obj_tag(v_x_1239_))
{
case 0:
{
lean_object* v___x_1240_; 
v___x_1240_ = lean_unsigned_to_nat(0u);
return v___x_1240_;
}
case 1:
{
lean_object* v___x_1241_; 
v___x_1241_ = lean_unsigned_to_nat(1u);
return v___x_1241_;
}
case 2:
{
lean_object* v___x_1242_; 
v___x_1242_ = lean_unsigned_to_nat(2u);
return v___x_1242_;
}
case 3:
{
lean_object* v___x_1243_; 
v___x_1243_ = lean_unsigned_to_nat(3u);
return v___x_1243_;
}
default: 
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_unsigned_to_nat(4u);
return v___x_1244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorIdx___boxed(lean_object* v_x_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorIdx(v_x_1245_);
lean_dec_ref(v_x_1245_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(lean_object* v_t_1247_, lean_object* v_k_1248_){
_start:
{
lean_object* v_value_1249_; lean_object* v___x_1250_; 
v_value_1249_ = lean_ctor_get(v_t_1247_, 0);
lean_inc(v_value_1249_);
lean_dec_ref(v_t_1247_);
v___x_1250_ = lean_apply_1(v_k_1248_, v_value_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim(lean_object* v_motive_1251_, lean_object* v_ctorIdx_1252_, lean_object* v_t_1253_, lean_object* v_h_1254_, lean_object* v_k_1255_){
_start:
{
lean_object* v___x_1256_; 
v___x_1256_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1253_, v_k_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___boxed(lean_object* v_motive_1257_, lean_object* v_ctorIdx_1258_, lean_object* v_t_1259_, lean_object* v_h_1260_, lean_object* v_k_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim(v_motive_1257_, v_ctorIdx_1258_, v_t_1259_, v_h_1260_, v_k_1261_);
lean_dec(v_ctorIdx_1258_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writable_elim___redArg(lean_object* v_t_1263_, lean_object* v_writable_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1263_, v_writable_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writable_elim(lean_object* v_motive_1266_, lean_object* v_t_1267_, lean_object* v_h_1268_, lean_object* v_writable_1269_){
_start:
{
lean_object* v___x_1270_; 
v___x_1270_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1267_, v_writable_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_duplex_elim___redArg(lean_object* v_t_1271_, lean_object* v_duplex_1272_){
_start:
{
lean_object* v___x_1273_; 
v___x_1273_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1271_, v_duplex_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_duplex_elim(lean_object* v_motive_1274_, lean_object* v_t_1275_, lean_object* v_h_1276_, lean_object* v_duplex_1277_){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1275_, v_duplex_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writableStream_elim___redArg(lean_object* v_t_1279_, lean_object* v_writableStream_1280_){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1279_, v_writableStream_1280_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_writableStream_elim(lean_object* v_motive_1282_, lean_object* v_t_1283_, lean_object* v_h_1284_, lean_object* v_writableStream_1285_){
_start:
{
lean_object* v___x_1286_; 
v___x_1286_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1283_, v_writableStream_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_transformStream_elim___redArg(lean_object* v_t_1287_, lean_object* v_transformStream_1288_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1287_, v_transformStream_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_transformStream_elim(lean_object* v_motive_1290_, lean_object* v_t_1291_, lean_object* v_h_1292_, lean_object* v_transformStream_1293_){
_start:
{
lean_object* v___x_1294_; 
v___x_1294_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1291_, v_transformStream_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_jsFunction_elim___redArg(lean_object* v_t_1295_, lean_object* v_jsFunction_1296_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1295_, v_jsFunction_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_jsFunction_elim(lean_object* v_motive_1298_, lean_object* v_t_1299_, lean_object* v_h_1300_, lean_object* v_jsFunction_1301_){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction_ctorElim___redArg(v_t_1299_, v_jsFunction_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_x_1303_){
_start:
{
lean_object* v_value_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_value_1304_ = lean_ctor_get(v_x_1303_, 0);
v___x_1305_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1304_);
v___x_1306_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1306_, 0, v_value_1304_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0___boxed(lean_object* v_x_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(v_x_1307_);
lean_dec_ref(v_x_1307_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1310_){
_start:
{
lean_object* v___x_1311_; 
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v_value_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1313_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1314_, 0, v_value_1313_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1316_){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1317_, 0, v_value_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeTransformStreamStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1319_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1320_, 0, v_value_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionStreamWritableOrDuplexOrWritableStreamOrTransformStreamOrJSFunction___lam__0(lean_object* v_value_1322_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1323_, 0, v_value_1322_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0(lean_object* v___f_1325_, lean_object* v_d_1326_){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1327_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1328_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1325_, v_d_1326_);
v___x_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = lean_unsigned_to_nat(1u);
v___x_1331_ = lean_mk_empty_array_with_capacity(v___x_1330_);
v___x_1332_ = lean_array_push(v___x_1331_, v___x_1329_);
v___x_1333_ = l_Lasm_JS_Web_Internal_fields(v___x_1332_);
lean_dec_ref(v___x_1332_);
return v___x_1333_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableComposeOptions(void){
_start:
{
lean_object* v___f_1334_; lean_object* v___f_1335_; 
v___f_1334_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1335_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1335_, 0, v___f_1334_);
return v___f_1335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions___lam__0(lean_object* v___f_1336_, lean_object* v_d_1337_){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1338_ = lean_mk_string_unchecked("destroyOnReturn", 15, 15);
v___x_1339_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1336_, v_d_1337_);
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = lean_unsigned_to_nat(1u);
v___x_1342_ = lean_mk_empty_array_with_capacity(v___x_1341_);
v___x_1343_ = lean_array_push(v___x_1342_, v___x_1340_);
v___x_1344_ = l_Lasm_JS_Web_Internal_fields(v___x_1343_);
lean_dec_ref(v___x_1343_);
return v___x_1344_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions(void){
_start:
{
lean_object* v___f_1345_; lean_object* v___f_1346_; 
v___f_1345_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1346_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableIteratorOptions___lam__0), 2, 1);
lean_closure_set(v___f_1346_, 0, v___f_1345_);
return v___f_1346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableMapOptions___lam__0(lean_object* v___f_1347_, lean_object* v___f_1348_, lean_object* v___f_1349_, lean_object* v_d_1350_){
_start:
{
lean_object* v_concurrency_1351_; lean_object* v_highWaterMark_1352_; lean_object* v_signal_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v_concurrency_1351_ = lean_ctor_get(v_d_1350_, 0);
lean_inc(v_concurrency_1351_);
v_highWaterMark_1352_ = lean_ctor_get(v_d_1350_, 1);
lean_inc(v_highWaterMark_1352_);
v_signal_1353_ = lean_ctor_get(v_d_1350_, 2);
lean_inc(v_signal_1353_);
lean_dec_ref(v_d_1350_);
v___x_1354_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1355_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1347_, v_concurrency_1351_);
v___x_1356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1354_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1358_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1348_, v_highWaterMark_1352_);
v___x_1359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1357_);
lean_ctor_set(v___x_1359_, 1, v___x_1358_);
v___x_1360_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1361_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1349_, v_signal_1353_);
v___x_1362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = lean_unsigned_to_nat(3u);
v___x_1364_ = lean_mk_empty_array_with_capacity(v___x_1363_);
v___x_1365_ = lean_array_push(v___x_1364_, v___x_1356_);
v___x_1366_ = lean_array_push(v___x_1365_, v___x_1359_);
v___x_1367_ = lean_array_push(v___x_1366_, v___x_1362_);
v___x_1368_ = l_Lasm_JS_Web_Internal_fields(v___x_1367_);
lean_dec_ref(v___x_1367_);
return v___x_1368_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableMapOptions(void){
_start:
{
lean_object* v___f_1369_; lean_object* v___f_1370_; lean_object* v___f_1371_; lean_object* v___f_1372_; 
v___f_1369_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1370_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1371_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1372_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableMapOptions___lam__0), 4, 3);
lean_closure_set(v___f_1372_, 0, v___f_1369_);
lean_closure_set(v___f_1372_, 1, v___f_1370_);
lean_closure_set(v___f_1372_, 2, v___f_1371_);
return v___f_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFilterOptions___lam__0(lean_object* v___f_1373_, lean_object* v___f_1374_, lean_object* v___f_1375_, lean_object* v_d_1376_){
_start:
{
lean_object* v_concurrency_1377_; lean_object* v_highWaterMark_1378_; lean_object* v_signal_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v_concurrency_1377_ = lean_ctor_get(v_d_1376_, 0);
lean_inc(v_concurrency_1377_);
v_highWaterMark_1378_ = lean_ctor_get(v_d_1376_, 1);
lean_inc(v_highWaterMark_1378_);
v_signal_1379_ = lean_ctor_get(v_d_1376_, 2);
lean_inc(v_signal_1379_);
lean_dec_ref(v_d_1376_);
v___x_1380_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1381_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1373_, v_concurrency_1377_);
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1380_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
v___x_1383_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1384_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1374_, v_highWaterMark_1378_);
v___x_1385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1383_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1387_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1375_, v_signal_1379_);
v___x_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1386_);
lean_ctor_set(v___x_1388_, 1, v___x_1387_);
v___x_1389_ = lean_unsigned_to_nat(3u);
v___x_1390_ = lean_mk_empty_array_with_capacity(v___x_1389_);
v___x_1391_ = lean_array_push(v___x_1390_, v___x_1382_);
v___x_1392_ = lean_array_push(v___x_1391_, v___x_1385_);
v___x_1393_ = lean_array_push(v___x_1392_, v___x_1388_);
v___x_1394_ = l_Lasm_JS_Web_Internal_fields(v___x_1393_);
lean_dec_ref(v___x_1393_);
return v___x_1394_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableFilterOptions(void){
_start:
{
lean_object* v___f_1395_; lean_object* v___f_1396_; lean_object* v___f_1397_; lean_object* v___f_1398_; 
v___f_1395_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1396_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1397_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1398_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableFilterOptions___lam__0), 4, 3);
lean_closure_set(v___f_1398_, 0, v___f_1395_);
lean_closure_set(v___f_1398_, 1, v___f_1396_);
lean_closure_set(v___f_1398_, 2, v___f_1397_);
return v___f_1398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableForEachOptions___lam__0(lean_object* v___f_1399_, lean_object* v___f_1400_, lean_object* v_d_1401_){
_start:
{
lean_object* v_concurrency_1402_; lean_object* v_signal_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1420_; 
v_concurrency_1402_ = lean_ctor_get(v_d_1401_, 0);
v_signal_1403_ = lean_ctor_get(v_d_1401_, 1);
v_isSharedCheck_1420_ = !lean_is_exclusive(v_d_1401_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1405_ = v_d_1401_;
v_isShared_1406_ = v_isSharedCheck_1420_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_signal_1403_);
lean_inc(v_concurrency_1402_);
lean_dec(v_d_1401_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1420_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1407_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1408_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1399_, v_concurrency_1402_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 1, v___x_1408_);
lean_ctor_set(v___x_1405_, 0, v___x_1407_);
v___x_1410_ = v___x_1405_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1419_, 1, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1411_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1412_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1400_, v_signal_1403_);
v___x_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1411_);
lean_ctor_set(v___x_1413_, 1, v___x_1412_);
v___x_1414_ = lean_unsigned_to_nat(2u);
v___x_1415_ = lean_mk_empty_array_with_capacity(v___x_1414_);
v___x_1416_ = lean_array_push(v___x_1415_, v___x_1410_);
v___x_1417_ = lean_array_push(v___x_1416_, v___x_1413_);
v___x_1418_ = l_Lasm_JS_Web_Internal_fields(v___x_1417_);
lean_dec_ref(v___x_1417_);
return v___x_1418_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableForEachOptions(void){
_start:
{
lean_object* v___f_1421_; lean_object* v___f_1422_; lean_object* v___f_1423_; 
v___f_1421_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1422_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1423_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableForEachOptions___lam__0), 3, 2);
lean_closure_set(v___f_1423_, 0, v___f_1421_);
lean_closure_set(v___f_1423_, 1, v___f_1422_);
return v___f_1423_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableToArrayOptions(void){
_start:
{
lean_object* v___f_1424_; lean_object* v___f_1425_; 
v___f_1424_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1425_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1425_, 0, v___f_1424_);
return v___f_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableSomeOptions___lam__0(lean_object* v___f_1426_, lean_object* v___f_1427_, lean_object* v_d_1428_){
_start:
{
lean_object* v_concurrency_1429_; lean_object* v_signal_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1447_; 
v_concurrency_1429_ = lean_ctor_get(v_d_1428_, 0);
v_signal_1430_ = lean_ctor_get(v_d_1428_, 1);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_d_1428_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1432_ = v_d_1428_;
v_isShared_1433_ = v_isSharedCheck_1447_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_signal_1430_);
lean_inc(v_concurrency_1429_);
lean_dec(v_d_1428_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1447_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1434_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1435_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1426_, v_concurrency_1429_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 1, v___x_1435_);
lean_ctor_set(v___x_1432_, 0, v___x_1434_);
v___x_1437_ = v___x_1432_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1438_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1439_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1427_, v_signal_1430_);
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = lean_unsigned_to_nat(2u);
v___x_1442_ = lean_mk_empty_array_with_capacity(v___x_1441_);
v___x_1443_ = lean_array_push(v___x_1442_, v___x_1437_);
v___x_1444_ = lean_array_push(v___x_1443_, v___x_1440_);
v___x_1445_ = l_Lasm_JS_Web_Internal_fields(v___x_1444_);
lean_dec_ref(v___x_1444_);
return v___x_1445_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableSomeOptions(void){
_start:
{
lean_object* v___f_1448_; lean_object* v___f_1449_; lean_object* v___f_1450_; 
v___f_1448_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1449_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1450_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableSomeOptions___lam__0), 3, 2);
lean_closure_set(v___f_1450_, 0, v___f_1448_);
lean_closure_set(v___f_1450_, 1, v___f_1449_);
return v___f_1450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFindOptions___lam__0(lean_object* v___f_1451_, lean_object* v___f_1452_, lean_object* v_d_1453_){
_start:
{
lean_object* v_concurrency_1454_; lean_object* v_signal_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1472_; 
v_concurrency_1454_ = lean_ctor_get(v_d_1453_, 0);
v_signal_1455_ = lean_ctor_get(v_d_1453_, 1);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_d_1453_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1457_ = v_d_1453_;
v_isShared_1458_ = v_isSharedCheck_1472_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_signal_1455_);
lean_inc(v_concurrency_1454_);
lean_dec(v_d_1453_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1472_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1462_; 
v___x_1459_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1460_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1451_, v_concurrency_1454_);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 1, v___x_1460_);
lean_ctor_set(v___x_1457_, 0, v___x_1459_);
v___x_1462_ = v___x_1457_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1459_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1463_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1464_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1452_, v_signal_1455_);
v___x_1465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = lean_unsigned_to_nat(2u);
v___x_1467_ = lean_mk_empty_array_with_capacity(v___x_1466_);
v___x_1468_ = lean_array_push(v___x_1467_, v___x_1462_);
v___x_1469_ = lean_array_push(v___x_1468_, v___x_1465_);
v___x_1470_ = l_Lasm_JS_Web_Internal_fields(v___x_1469_);
lean_dec_ref(v___x_1469_);
return v___x_1470_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableFindOptions(void){
_start:
{
lean_object* v___f_1473_; lean_object* v___f_1474_; lean_object* v___f_1475_; 
v___f_1473_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1474_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1475_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableFindOptions___lam__0), 3, 2);
lean_closure_set(v___f_1475_, 0, v___f_1473_);
lean_closure_set(v___f_1475_, 1, v___f_1474_);
return v___f_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableEveryOptions___lam__0(lean_object* v___f_1476_, lean_object* v___f_1477_, lean_object* v_d_1478_){
_start:
{
lean_object* v_concurrency_1479_; lean_object* v_signal_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1497_; 
v_concurrency_1479_ = lean_ctor_get(v_d_1478_, 0);
v_signal_1480_ = lean_ctor_get(v_d_1478_, 1);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_d_1478_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1482_ = v_d_1478_;
v_isShared_1483_ = v_isSharedCheck_1497_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_signal_1480_);
lean_inc(v_concurrency_1479_);
lean_dec(v_d_1478_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1497_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1487_; 
v___x_1484_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1485_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1476_, v_concurrency_1479_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 1, v___x_1485_);
lean_ctor_set(v___x_1482_, 0, v___x_1484_);
v___x_1487_ = v___x_1482_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1488_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1489_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1477_, v_signal_1480_);
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1488_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
v___x_1491_ = lean_unsigned_to_nat(2u);
v___x_1492_ = lean_mk_empty_array_with_capacity(v___x_1491_);
v___x_1493_ = lean_array_push(v___x_1492_, v___x_1487_);
v___x_1494_ = lean_array_push(v___x_1493_, v___x_1490_);
v___x_1495_ = l_Lasm_JS_Web_Internal_fields(v___x_1494_);
lean_dec_ref(v___x_1494_);
return v___x_1495_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableEveryOptions(void){
_start:
{
lean_object* v___f_1498_; lean_object* v___f_1499_; lean_object* v___f_1500_; 
v___f_1498_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1499_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1500_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableEveryOptions___lam__0), 3, 2);
lean_closure_set(v___f_1500_, 0, v___f_1498_);
lean_closure_set(v___f_1500_, 1, v___f_1499_);
return v___f_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions___lam__0(lean_object* v___f_1501_, lean_object* v___f_1502_, lean_object* v_d_1503_){
_start:
{
lean_object* v_concurrency_1504_; lean_object* v_signal_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1522_; 
v_concurrency_1504_ = lean_ctor_get(v_d_1503_, 0);
v_signal_1505_ = lean_ctor_get(v_d_1503_, 1);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_d_1503_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1507_ = v_d_1503_;
v_isShared_1508_ = v_isSharedCheck_1522_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_signal_1505_);
lean_inc(v_concurrency_1504_);
lean_dec(v_d_1503_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1522_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1512_; 
v___x_1509_ = lean_mk_string_unchecked("concurrency", 11, 11);
v___x_1510_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1501_, v_concurrency_1504_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 1, v___x_1510_);
lean_ctor_set(v___x_1507_, 0, v___x_1509_);
v___x_1512_ = v___x_1507_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1521_, 1, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1513_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1514_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1502_, v_signal_1505_);
v___x_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1513_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = lean_unsigned_to_nat(2u);
v___x_1517_ = lean_mk_empty_array_with_capacity(v___x_1516_);
v___x_1518_ = lean_array_push(v___x_1517_, v___x_1512_);
v___x_1519_ = lean_array_push(v___x_1518_, v___x_1515_);
v___x_1520_ = l_Lasm_JS_Web_Internal_fields(v___x_1519_);
lean_dec_ref(v___x_1519_);
return v___x_1520_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions(void){
_start:
{
lean_object* v___f_1523_; lean_object* v___f_1524_; lean_object* v___f_1525_; 
v___f_1523_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1524_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1525_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableFlatMapOptions___lam__0), 3, 2);
lean_closure_set(v___f_1525_, 0, v___f_1523_);
lean_closure_set(v___f_1525_, 1, v___f_1524_);
return v___f_1525_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableDropOptions(void){
_start:
{
lean_object* v___f_1526_; lean_object* v___f_1527_; 
v___f_1526_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1527_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1527_, 0, v___f_1526_);
return v___f_1527_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableTakeOptions(void){
_start:
{
lean_object* v___f_1528_; lean_object* v___f_1529_; 
v___f_1528_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1529_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1529_, 0, v___f_1528_);
return v___f_1529_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableReduceOptions(void){
_start:
{
lean_object* v___f_1530_; lean_object* v___f_1531_; 
v___f_1530_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1531_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableComposeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1531_, 0, v___f_1530_);
return v___f_1531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions___lam__0(lean_object* v___f_1532_, lean_object* v___f_1533_, lean_object* v___f_1534_, lean_object* v___f_1535_, lean_object* v_d_1536_){
_start:
{
lean_object* v_encoding_1537_; lean_object* v_highWaterMark_1538_; lean_object* v_objectMode_1539_; lean_object* v_signal_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v_encoding_1537_ = lean_ctor_get(v_d_1536_, 0);
lean_inc(v_encoding_1537_);
v_highWaterMark_1538_ = lean_ctor_get(v_d_1536_, 1);
lean_inc(v_highWaterMark_1538_);
v_objectMode_1539_ = lean_ctor_get(v_d_1536_, 2);
lean_inc(v_objectMode_1539_);
v_signal_1540_ = lean_ctor_get(v_d_1536_, 3);
lean_inc(v_signal_1540_);
lean_dec_ref(v_d_1536_);
v___x_1541_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1542_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1532_, v_encoding_1537_);
v___x_1543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1541_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
v___x_1544_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1545_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1533_, v_highWaterMark_1538_);
v___x_1546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1544_);
lean_ctor_set(v___x_1546_, 1, v___x_1545_);
v___x_1547_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_1548_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1534_, v_objectMode_1539_);
v___x_1549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1551_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1535_, v_signal_1540_);
v___x_1552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
v___x_1553_ = lean_unsigned_to_nat(4u);
v___x_1554_ = lean_mk_empty_array_with_capacity(v___x_1553_);
v___x_1555_ = lean_array_push(v___x_1554_, v___x_1543_);
v___x_1556_ = lean_array_push(v___x_1555_, v___x_1546_);
v___x_1557_ = lean_array_push(v___x_1556_, v___x_1549_);
v___x_1558_ = lean_array_push(v___x_1557_, v___x_1552_);
v___x_1559_ = l_Lasm_JS_Web_Internal_fields(v___x_1558_);
lean_dec_ref(v___x_1558_);
return v___x_1559_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions(void){
_start:
{
lean_object* v___f_1560_; lean_object* v___f_1561_; lean_object* v___f_1562_; lean_object* v___f_1563_; lean_object* v___f_1564_; 
v___f_1560_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1561_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1562_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1563_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1564_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableFromWebOptions___lam__0), 5, 4);
lean_closure_set(v___f_1564_, 0, v___f_1560_);
lean_closure_set(v___f_1564_, 1, v___f_1561_);
lean_closure_set(v___f_1564_, 2, v___f_1562_);
lean_closure_set(v___f_1564_, 3, v___f_1563_);
return v___f_1564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorIdx(lean_object* v_x_1565_){
_start:
{
if (lean_obj_tag(v_x_1565_) == 0)
{
lean_object* v___x_1566_; 
v___x_1566_ = lean_unsigned_to_nat(0u);
return v___x_1566_;
}
else
{
lean_object* v___x_1567_; 
v___x_1567_ = lean_unsigned_to_nat(1u);
return v___x_1567_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorIdx___boxed(lean_object* v_x_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorIdx(v_x_1568_);
lean_dec_ref(v_x_1568_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(lean_object* v_t_1570_, lean_object* v_k_1571_){
_start:
{
lean_object* v_value_1572_; lean_object* v___x_1573_; 
v_value_1572_ = lean_ctor_get(v_t_1570_, 0);
lean_inc(v_value_1572_);
lean_dec_ref(v_t_1570_);
v___x_1573_ = lean_apply_1(v_k_1571_, v_value_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim(lean_object* v_motive_1574_, lean_object* v_ctorIdx_1575_, lean_object* v_t_1576_, lean_object* v_h_1577_, lean_object* v_k_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1576_, v_k_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___boxed(lean_object* v_motive_1580_, lean_object* v_ctorIdx_1581_, lean_object* v_t_1582_, lean_object* v_h_1583_, lean_object* v_k_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim(v_motive_1580_, v_ctorIdx_1581_, v_t_1582_, v_h_1583_, v_k_1584_);
lean_dec(v_ctorIdx_1581_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readable_elim___redArg(lean_object* v_t_1586_, lean_object* v_readable_1587_){
_start:
{
lean_object* v___x_1588_; 
v___x_1588_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1586_, v_readable_1587_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readable_elim(lean_object* v_motive_1589_, lean_object* v_t_1590_, lean_object* v_h_1591_, lean_object* v_readable_1592_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1590_, v_readable_1592_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1594_, lean_object* v_readableStream_1595_){
_start:
{
lean_object* v___x_1596_; 
v___x_1596_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1594_, v_readableStream_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrReadableStream_readableStream_elim(lean_object* v_motive_1597_, lean_object* v_t_1598_, lean_object* v_h_1599_, lean_object* v_readableStream_1600_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lasm_JS_Node_stream_ReadableOrReadableStream_ctorElim___redArg(v_t_1598_, v_readableStream_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0(lean_object* v_x_1602_){
_start:
{
lean_object* v_value_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v_value_1603_ = lean_ctor_get(v_x_1602_, 0);
v___x_1604_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1603_);
v___x_1605_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1605_, 0, v_value_1603_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0___boxed(lean_object* v_x_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lasm_JS_Node_instToJSStreamReadableOrReadableStream___lam__0(v_x_1606_);
lean_dec_ref(v_x_1606_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrReadableStream___lam__0(lean_object* v_value_1609_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1610_, 0, v_value_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrReadableStream___lam__0(lean_object* v_value_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1613_, 0, v_value_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy___lam__0(lean_object* v___f_1615_, lean_object* v___f_1616_, lean_object* v_d_1617_){
_start:
{
lean_object* v_highWaterMark_1618_; lean_object* v_size_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1636_; 
v_highWaterMark_1618_ = lean_ctor_get(v_d_1617_, 0);
v_size_1619_ = lean_ctor_get(v_d_1617_, 1);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_d_1617_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1621_ = v_d_1617_;
v_isShared_1622_ = v_isSharedCheck_1636_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_size_1619_);
lean_inc(v_highWaterMark_1618_);
lean_dec(v_d_1617_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1636_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1626_; 
v___x_1623_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1624_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1615_, v_highWaterMark_1618_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 1, v___x_1624_);
lean_ctor_set(v___x_1621_, 0, v___x_1623_);
v___x_1626_ = v___x_1621_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1623_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v___x_1624_);
v___x_1626_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1627_ = lean_mk_string_unchecked("size", 4, 4);
v___x_1628_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1616_, v_size_1619_);
v___x_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1627_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = lean_unsigned_to_nat(2u);
v___x_1631_ = lean_mk_empty_array_with_capacity(v___x_1630_);
v___x_1632_ = lean_array_push(v___x_1631_, v___x_1626_);
v___x_1633_ = lean_array_push(v___x_1632_, v___x_1629_);
v___x_1634_ = l_Lasm_JS_Web_Internal_fields(v___x_1633_);
lean_dec_ref(v___x_1633_);
return v___x_1634_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy(void){
_start:
{
lean_object* v___f_1637_; lean_object* v___f_1638_; lean_object* v___f_1639_; 
v___f_1637_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1638_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_1639_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy___lam__0), 3, 2);
lean_closure_set(v___f_1639_, 0, v___f_1637_);
lean_closure_set(v___f_1639_, 1, v___f_1638_);
return v___f_1639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableToWebOptions___lam__0(lean_object* v___x_1640_, lean_object* v___f_1641_, lean_object* v_d_1642_){
_start:
{
lean_object* v_strategy_1643_; lean_object* v_type_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1661_; 
v_strategy_1643_ = lean_ctor_get(v_d_1642_, 0);
v_type_1644_ = lean_ctor_get(v_d_1642_, 1);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_d_1642_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1646_ = v_d_1642_;
v_isShared_1647_ = v_isSharedCheck_1661_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_type_1644_);
lean_inc(v_strategy_1643_);
lean_dec(v_d_1642_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1661_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1648_ = lean_mk_string_unchecked("strategy", 8, 8);
v___x_1649_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1640_, v_strategy_1643_);
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 1, v___x_1649_);
lean_ctor_set(v___x_1646_, 0, v___x_1648_);
v___x_1651_ = v___x_1646_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1648_);
lean_ctor_set(v_reuseFailAlloc_1660_, 1, v___x_1649_);
v___x_1651_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1652_ = lean_mk_string_unchecked("type", 4, 4);
v___x_1653_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1641_, v_type_1644_);
v___x_1654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1652_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
v___x_1655_ = lean_unsigned_to_nat(2u);
v___x_1656_ = lean_mk_empty_array_with_capacity(v___x_1655_);
v___x_1657_ = lean_array_push(v___x_1656_, v___x_1651_);
v___x_1658_ = lean_array_push(v___x_1657_, v___x_1654_);
v___x_1659_ = l_Lasm_JS_Web_Internal_fields(v___x_1658_);
lean_dec_ref(v___x_1658_);
return v___x_1659_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamReadableToWebOptions(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___f_1663_; lean_object* v___f_1664_; 
v___x_1662_ = l_Lasm_JS_Node_instToJSStreamReadableToWebOptionsStrategy;
v___f_1663_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1664_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamReadableToWebOptions___lam__0), 3, 2);
lean_closure_set(v___f_1664_, 0, v___x_1662_);
lean_closure_set(v___f_1664_, 1, v___f_1663_);
return v___f_1664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair___lam__0(lean_object* v___f_1665_, lean_object* v___f_1666_, lean_object* v_d_1667_){
_start:
{
lean_object* v_readable_1668_; lean_object* v_writable_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1686_; 
v_readable_1668_ = lean_ctor_get(v_d_1667_, 0);
v_writable_1669_ = lean_ctor_get(v_d_1667_, 1);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_d_1667_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1671_ = v_d_1667_;
v_isShared_1672_ = v_isSharedCheck_1686_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_writable_1669_);
lean_inc(v_readable_1668_);
lean_dec(v_d_1667_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1686_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1676_; 
v___x_1673_ = lean_mk_string_unchecked("readable", 8, 8);
v___x_1674_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1665_, v_readable_1668_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___x_1674_);
lean_ctor_set(v___x_1671_, 0, v___x_1673_);
v___x_1676_ = v___x_1671_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1673_);
lean_ctor_set(v_reuseFailAlloc_1685_, 1, v___x_1674_);
v___x_1676_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1677_ = lean_mk_string_unchecked("writable", 8, 8);
v___x_1678_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1666_, v_writable_1669_);
v___x_1679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1677_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
v___x_1680_ = lean_unsigned_to_nat(2u);
v___x_1681_ = lean_mk_empty_array_with_capacity(v___x_1680_);
v___x_1682_ = lean_array_push(v___x_1681_, v___x_1676_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1679_);
v___x_1684_ = l_Lasm_JS_Web_Internal_fields(v___x_1683_);
lean_dec_ref(v___x_1683_);
return v___x_1684_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair(void){
_start:
{
lean_object* v___f_1687_; lean_object* v___f_1688_; 
v___f_1687_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSByteLengthQueuingStrategy___lam__0), 1, 0);
lean_inc_ref(v___f_1687_);
v___f_1688_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamDuplexFromWebPair___lam__0), 3, 2);
lean_closure_set(v___f_1688_, 0, v___f_1687_);
lean_closure_set(v___f_1688_, 1, v___f_1687_);
return v___f_1688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions___lam__0(lean_object* v___f_1689_, lean_object* v___f_1690_, lean_object* v___f_1691_, lean_object* v___f_1692_, lean_object* v_d_1693_){
_start:
{
lean_object* v_allowHalfOpen_1694_; lean_object* v_decodeStrings_1695_; lean_object* v_encoding_1696_; lean_object* v_highWaterMark_1697_; lean_object* v_objectMode_1698_; lean_object* v_signal_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_allowHalfOpen_1694_ = lean_ctor_get(v_d_1693_, 0);
lean_inc(v_allowHalfOpen_1694_);
v_decodeStrings_1695_ = lean_ctor_get(v_d_1693_, 1);
lean_inc(v_decodeStrings_1695_);
v_encoding_1696_ = lean_ctor_get(v_d_1693_, 2);
lean_inc(v_encoding_1696_);
v_highWaterMark_1697_ = lean_ctor_get(v_d_1693_, 3);
lean_inc(v_highWaterMark_1697_);
v_objectMode_1698_ = lean_ctor_get(v_d_1693_, 4);
lean_inc(v_objectMode_1698_);
v_signal_1699_ = lean_ctor_get(v_d_1693_, 5);
lean_inc(v_signal_1699_);
lean_dec_ref(v_d_1693_);
v___x_1700_ = lean_mk_string_unchecked("allowHalfOpen", 13, 13);
lean_inc_ref_n(v___f_1689_, 2);
v___x_1701_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1689_, v_allowHalfOpen_1694_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1700_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = lean_mk_string_unchecked("decodeStrings", 13, 13);
v___x_1704_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1689_, v_decodeStrings_1695_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1703_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_1707_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1690_, v_encoding_1696_);
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1706_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
v___x_1709_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_1710_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1691_, v_highWaterMark_1697_);
v___x_1711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1709_);
lean_ctor_set(v___x_1711_, 1, v___x_1710_);
v___x_1712_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_1713_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1689_, v_objectMode_1698_);
v___x_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1712_);
lean_ctor_set(v___x_1714_, 1, v___x_1713_);
v___x_1715_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1716_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1692_, v_signal_1699_);
v___x_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1715_);
lean_ctor_set(v___x_1717_, 1, v___x_1716_);
v___x_1718_ = lean_unsigned_to_nat(6u);
v___x_1719_ = lean_mk_empty_array_with_capacity(v___x_1718_);
v___x_1720_ = lean_array_push(v___x_1719_, v___x_1702_);
v___x_1721_ = lean_array_push(v___x_1720_, v___x_1705_);
v___x_1722_ = lean_array_push(v___x_1721_, v___x_1708_);
v___x_1723_ = lean_array_push(v___x_1722_, v___x_1711_);
v___x_1724_ = lean_array_push(v___x_1723_, v___x_1714_);
v___x_1725_ = lean_array_push(v___x_1724_, v___x_1717_);
v___x_1726_ = l_Lasm_JS_Web_Internal_fields(v___x_1725_);
lean_dec_ref(v___x_1725_);
return v___x_1726_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions(void){
_start:
{
lean_object* v___f_1727_; lean_object* v___f_1728_; lean_object* v___f_1729_; lean_object* v___f_1730_; lean_object* v___f_1731_; 
v___f_1727_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1728_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1729_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1730_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1731_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamDuplexFromWebOptions___lam__0), 5, 4);
lean_closure_set(v___f_1731_, 0, v___f_1727_);
lean_closure_set(v___f_1731_, 1, v___f_1728_);
lean_closure_set(v___f_1731_, 2, v___f_1729_);
lean_closure_set(v___f_1731_, 3, v___f_1730_);
return v___f_1731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions___lam__0(lean_object* v___f_1732_, lean_object* v_d_1733_){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1734_ = lean_mk_string_unchecked("readableType", 12, 12);
v___x_1735_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1732_, v_d_1733_);
v___x_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1734_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
v___x_1737_ = lean_unsigned_to_nat(1u);
v___x_1738_ = lean_mk_empty_array_with_capacity(v___x_1737_);
v___x_1739_ = lean_array_push(v___x_1738_, v___x_1736_);
v___x_1740_ = l_Lasm_JS_Web_Internal_fields(v___x_1739_);
lean_dec_ref(v___x_1739_);
return v___x_1740_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions(void){
_start:
{
lean_object* v___f_1741_; lean_object* v___f_1742_; 
v___f_1741_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1742_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamDuplexToWebOptions___lam__0), 2, 1);
lean_closure_set(v___f_1742_, 0, v___f_1741_);
return v___f_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamTransformNewOptions___lam__0(lean_object* v___f_1743_, lean_object* v_d_1744_){
_start:
{
lean_object* v_transform_1745_; lean_object* v_flush_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1763_; 
v_transform_1745_ = lean_ctor_get(v_d_1744_, 0);
v_flush_1746_ = lean_ctor_get(v_d_1744_, 1);
v_isSharedCheck_1763_ = !lean_is_exclusive(v_d_1744_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1748_ = v_d_1744_;
v_isShared_1749_ = v_isSharedCheck_1763_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_flush_1746_);
lean_inc(v_transform_1745_);
lean_dec(v_d_1744_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1763_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1753_; 
v___x_1750_ = lean_mk_string_unchecked("transform", 9, 9);
lean_inc_ref(v___f_1743_);
v___x_1751_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1743_, v_transform_1745_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set(v___x_1748_, 1, v___x_1751_);
lean_ctor_set(v___x_1748_, 0, v___x_1750_);
v___x_1753_ = v___x_1748_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1750_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v___x_1751_);
v___x_1753_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1754_ = lean_mk_string_unchecked("flush", 5, 5);
v___x_1755_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1743_, v_flush_1746_);
v___x_1756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1754_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
v___x_1757_ = lean_unsigned_to_nat(2u);
v___x_1758_ = lean_mk_empty_array_with_capacity(v___x_1757_);
v___x_1759_ = lean_array_push(v___x_1758_, v___x_1753_);
v___x_1760_ = lean_array_push(v___x_1759_, v___x_1756_);
v___x_1761_ = l_Lasm_JS_Web_Internal_fields(v___x_1760_);
lean_dec_ref(v___x_1760_);
return v___x_1761_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamTransformNewOptions(void){
_start:
{
lean_object* v___f_1764_; lean_object* v___f_1765_; 
v___f_1764_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_1765_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamTransformNewOptions___lam__0), 2, 1);
lean_closure_set(v___f_1765_, 0, v___f_1764_);
return v___f_1765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorIdx(lean_object* v_x_1766_){
_start:
{
switch(lean_obj_tag(v_x_1766_))
{
case 0:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_unsigned_to_nat(0u);
return v___x_1767_;
}
case 1:
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_unsigned_to_nat(1u);
return v___x_1768_;
}
default: 
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_unsigned_to_nat(2u);
return v___x_1769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorIdx___boxed(lean_object* v_x_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorIdx(v_x_1770_);
lean_dec_ref(v_x_1770_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(lean_object* v_t_1772_, lean_object* v_k_1773_){
_start:
{
lean_object* v_value_1774_; lean_object* v___x_1775_; 
v_value_1774_ = lean_ctor_get(v_t_1772_, 0);
lean_inc(v_value_1774_);
lean_dec_ref(v_t_1772_);
v___x_1775_ = lean_apply_1(v_k_1773_, v_value_1774_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim(lean_object* v_motive_1776_, lean_object* v_ctorIdx_1777_, lean_object* v_t_1778_, lean_object* v_h_1779_, lean_object* v_k_1780_){
_start:
{
lean_object* v___x_1781_; 
v___x_1781_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1778_, v_k_1780_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___boxed(lean_object* v_motive_1782_, lean_object* v_ctorIdx_1783_, lean_object* v_t_1784_, lean_object* v_h_1785_, lean_object* v_k_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim(v_motive_1782_, v_ctorIdx_1783_, v_t_1784_, v_h_1785_, v_k_1786_);
lean_dec(v_ctorIdx_1783_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_eventEmitter_elim___redArg(lean_object* v_t_1788_, lean_object* v_eventEmitter_1789_){
_start:
{
lean_object* v___x_1790_; 
v___x_1790_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1788_, v_eventEmitter_1789_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_eventEmitter_elim(lean_object* v_motive_1791_, lean_object* v_t_1792_, lean_object* v_h_1793_, lean_object* v_eventEmitter_1794_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1792_, v_eventEmitter_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_readableStream_elim___redArg(lean_object* v_t_1796_, lean_object* v_readableStream_1797_){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1796_, v_readableStream_1797_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_readableStream_elim(lean_object* v_motive_1799_, lean_object* v_t_1800_, lean_object* v_h_1801_, lean_object* v_readableStream_1802_){
_start:
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1800_, v_readableStream_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_writableStream_elim___redArg(lean_object* v_t_1804_, lean_object* v_writableStream_1805_){
_start:
{
lean_object* v___x_1806_; 
v___x_1806_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1804_, v_writableStream_1805_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_writableStream_elim(lean_object* v_motive_1807_, lean_object* v_t_1808_, lean_object* v_h_1809_, lean_object* v_writableStream_1810_){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = l_Lasm_JS_Node_EventEmitterOrReadableStreamOrWritableStream_ctorElim___redArg(v_t_1808_, v_writableStream_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object* v_x_1812_){
_start:
{
lean_object* v_value_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v_value_1813_ = lean_ctor_get(v_x_1812_, 0);
v___x_1814_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1813_);
v___x_1815_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1815_, 0, v_value_1813_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0___boxed(lean_object* v_x_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_Lasm_JS_Node_instToJSEventEmitterOrReadableStreamOrWritableStream___lam__0(v_x_1816_);
lean_dec_ref(v_x_1816_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object* v_value_1819_){
_start:
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_value_1819_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object* v_value_1822_){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1823_, 0, v_value_1822_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrReadableStreamOrWritableStream___lam__0(lean_object* v_value_1825_){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1826_, 0, v_value_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamFinishedOptions___lam__0(lean_object* v___f_1828_, lean_object* v___f_1829_, lean_object* v_d_1830_){
_start:
{
lean_object* v_error_1831_; lean_object* v_readable_1832_; lean_object* v_writable_1833_; lean_object* v_signal_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v_error_1831_ = lean_ctor_get(v_d_1830_, 0);
lean_inc(v_error_1831_);
v_readable_1832_ = lean_ctor_get(v_d_1830_, 1);
lean_inc(v_readable_1832_);
v_writable_1833_ = lean_ctor_get(v_d_1830_, 2);
lean_inc(v_writable_1833_);
v_signal_1834_ = lean_ctor_get(v_d_1830_, 3);
lean_inc(v_signal_1834_);
lean_dec_ref(v_d_1830_);
v___x_1835_ = lean_mk_string_unchecked("error", 5, 5);
lean_inc_ref_n(v___f_1828_, 2);
v___x_1836_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1828_, v_error_1831_);
v___x_1837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1835_);
lean_ctor_set(v___x_1837_, 1, v___x_1836_);
v___x_1838_ = lean_mk_string_unchecked("readable", 8, 8);
v___x_1839_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1828_, v_readable_1832_);
v___x_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1838_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
v___x_1841_ = lean_mk_string_unchecked("writable", 8, 8);
v___x_1842_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1828_, v_writable_1833_);
v___x_1843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1841_);
lean_ctor_set(v___x_1843_, 1, v___x_1842_);
v___x_1844_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1845_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1829_, v_signal_1834_);
v___x_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1844_);
lean_ctor_set(v___x_1846_, 1, v___x_1845_);
v___x_1847_ = lean_unsigned_to_nat(4u);
v___x_1848_ = lean_mk_empty_array_with_capacity(v___x_1847_);
v___x_1849_ = lean_array_push(v___x_1848_, v___x_1837_);
v___x_1850_ = lean_array_push(v___x_1849_, v___x_1840_);
v___x_1851_ = lean_array_push(v___x_1850_, v___x_1843_);
v___x_1852_ = lean_array_push(v___x_1851_, v___x_1846_);
v___x_1853_ = l_Lasm_JS_Web_Internal_fields(v___x_1852_);
lean_dec_ref(v___x_1852_);
return v___x_1853_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamFinishedOptions(void){
_start:
{
lean_object* v___f_1854_; lean_object* v___f_1855_; lean_object* v___f_1856_; 
v___f_1854_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1855_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1856_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamFinishedOptions___lam__0), 3, 2);
lean_closure_set(v___f_1856_, 0, v___f_1854_);
lean_closure_set(v___f_1856_, 1, v___f_1855_);
return v___f_1856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorIdx(lean_object* v_x_1857_){
_start:
{
switch(lean_obj_tag(v_x_1857_))
{
case 0:
{
lean_object* v___x_1858_; 
v___x_1858_ = lean_unsigned_to_nat(0u);
return v___x_1858_;
}
case 1:
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_unsigned_to_nat(1u);
return v___x_1859_;
}
case 2:
{
lean_object* v___x_1860_; 
v___x_1860_ = lean_unsigned_to_nat(2u);
return v___x_1860_;
}
default: 
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_unsigned_to_nat(3u);
return v___x_1861_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorIdx___boxed(lean_object* v_x_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorIdx(v_x_1862_);
lean_dec_ref(v_x_1862_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(lean_object* v_t_1864_, lean_object* v_k_1865_){
_start:
{
lean_object* v_value_1866_; lean_object* v___x_1867_; 
v_value_1866_ = lean_ctor_get(v_t_1864_, 0);
lean_inc(v_value_1866_);
lean_dec_ref(v_t_1864_);
v___x_1867_ = lean_apply_1(v_k_1865_, v_value_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim(lean_object* v_motive_1868_, lean_object* v_ctorIdx_1869_, lean_object* v_t_1870_, lean_object* v_h_1871_, lean_object* v_k_1872_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1870_, v_k_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___boxed(lean_object* v_motive_1874_, lean_object* v_ctorIdx_1875_, lean_object* v_t_1876_, lean_object* v_h_1877_, lean_object* v_k_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim(v_motive_1874_, v_ctorIdx_1875_, v_t_1876_, v_h_1877_, v_k_1878_);
lean_dec(v_ctorIdx_1875_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_eventEmitter_elim___redArg(lean_object* v_t_1880_, lean_object* v_eventEmitter_1881_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1880_, v_eventEmitter_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_eventEmitter_elim(lean_object* v_motive_1883_, lean_object* v_t_1884_, lean_object* v_h_1885_, lean_object* v_eventEmitter_1886_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1884_, v_eventEmitter_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_object_elim___redArg(lean_object* v_t_1888_, lean_object* v_object_1889_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1888_, v_object_1889_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_object_elim(lean_object* v_motive_1891_, lean_object* v_t_1892_, lean_object* v_h_1893_, lean_object* v_object_1894_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1892_, v_object_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_jsFunction_elim___redArg(lean_object* v_t_1896_, lean_object* v_jsFunction_1897_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1896_, v_jsFunction_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_jsFunction_elim(lean_object* v_motive_1899_, lean_object* v_t_1900_, lean_object* v_h_1901_, lean_object* v_jsFunction_1902_){
_start:
{
lean_object* v___x_1903_; 
v___x_1903_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1900_, v_jsFunction_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_readableStream_elim___redArg(lean_object* v_t_1904_, lean_object* v_readableStream_1905_){
_start:
{
lean_object* v___x_1906_; 
v___x_1906_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1904_, v_readableStream_1905_);
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_readableStream_elim(lean_object* v_motive_1907_, lean_object* v_t_1908_, lean_object* v_h_1909_, lean_object* v_readableStream_1910_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lasm_JS_Node_EventEmitterOrObjectOrJSFunctionOrReadableStream_ctorElim___redArg(v_t_1908_, v_readableStream_1910_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object* v_x_1912_){
_start:
{
if (lean_obj_tag(v_x_1912_) == 1)
{
lean_object* v_value_1913_; 
v_value_1913_ = lean_ctor_get(v_x_1912_, 0);
lean_inc(v_value_1913_);
return v_value_1913_;
}
else
{
lean_object* v_value_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v_value_1914_ = lean_ctor_get(v_x_1912_, 0);
v___x_1915_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1914_);
v___x_1916_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1916_, 0, v_value_1914_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
return v___x_1916_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0___boxed(lean_object* v_x_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l_Lasm_JS_Node_instToJSEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(v_x_1917_);
lean_dec_ref(v_x_1917_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object* v_value_1920_){
_start:
{
lean_object* v___x_1921_; 
v___x_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1921_, 0, v_value_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object* v_value_1923_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_value_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamEventEmitterOrObjectOrJSFunctionOrReadableStream___lam__0(lean_object* v_value_1926_){
_start:
{
lean_object* v___x_1927_; 
v___x_1927_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1927_, 0, v_value_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorIdx(lean_object* v_x_1929_){
_start:
{
switch(lean_obj_tag(v_x_1929_))
{
case 0:
{
lean_object* v___x_1930_; 
v___x_1930_ = lean_unsigned_to_nat(0u);
return v___x_1930_;
}
case 1:
{
lean_object* v___x_1931_; 
v___x_1931_ = lean_unsigned_to_nat(1u);
return v___x_1931_;
}
default: 
{
lean_object* v___x_1932_; 
v___x_1932_ = lean_unsigned_to_nat(2u);
return v___x_1932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorIdx___boxed(lean_object* v_x_1933_){
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorIdx(v_x_1933_);
lean_dec_ref(v_x_1933_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(lean_object* v_t_1935_, lean_object* v_k_1936_){
_start:
{
lean_object* v_value_1937_; lean_object* v___x_1938_; 
v_value_1937_ = lean_ctor_get(v_t_1935_, 0);
lean_inc(v_value_1937_);
lean_dec_ref(v_t_1935_);
v___x_1938_ = lean_apply_1(v_k_1936_, v_value_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim(lean_object* v_motive_1939_, lean_object* v_ctorIdx_1940_, lean_object* v_t_1941_, lean_object* v_h_1942_, lean_object* v_k_1943_){
_start:
{
lean_object* v___x_1944_; 
v___x_1944_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1941_, v_k_1943_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___boxed(lean_object* v_motive_1945_, lean_object* v_ctorIdx_1946_, lean_object* v_t_1947_, lean_object* v_h_1948_, lean_object* v_k_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim(v_motive_1945_, v_ctorIdx_1946_, v_t_1947_, v_h_1948_, v_k_1949_);
lean_dec(v_ctorIdx_1946_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_eventEmitter_elim___redArg(lean_object* v_t_1951_, lean_object* v_eventEmitter_1952_){
_start:
{
lean_object* v___x_1953_; 
v___x_1953_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1951_, v_eventEmitter_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_eventEmitter_elim(lean_object* v_motive_1954_, lean_object* v_t_1955_, lean_object* v_h_1956_, lean_object* v_eventEmitter_1957_){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1955_, v_eventEmitter_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_jsFunction_elim___redArg(lean_object* v_t_1959_, lean_object* v_jsFunction_1960_){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1959_, v_jsFunction_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_jsFunction_elim(lean_object* v_motive_1962_, lean_object* v_t_1963_, lean_object* v_h_1964_, lean_object* v_jsFunction_1965_){
_start:
{
lean_object* v___x_1966_; 
v___x_1966_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1963_, v_jsFunction_1965_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_writableStream_elim___redArg(lean_object* v_t_1967_, lean_object* v_writableStream_1968_){
_start:
{
lean_object* v___x_1969_; 
v___x_1969_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1967_, v_writableStream_1968_);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_writableStream_elim(lean_object* v_motive_1970_, lean_object* v_t_1971_, lean_object* v_h_1972_, lean_object* v_writableStream_1973_){
_start:
{
lean_object* v___x_1974_; 
v___x_1974_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrWritableStream_ctorElim___redArg(v_t_1971_, v_writableStream_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object* v_x_1975_){
_start:
{
lean_object* v_value_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v_value_1976_ = lean_ctor_get(v_x_1975_, 0);
v___x_1977_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_1976_);
v___x_1978_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_value_1976_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0___boxed(lean_object* v_x_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrWritableStream___lam__0(v_x_1979_);
lean_dec_ref(v_x_1979_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object* v_value_1982_){
_start:
{
lean_object* v___x_1983_; 
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v_value_1982_);
return v___x_1983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object* v_value_1985_){
_start:
{
lean_object* v___x_1986_; 
v___x_1986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1986_, 0, v_value_1985_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamEventEmitterOrJSFunctionOrWritableStream___lam__0(lean_object* v_value_1988_){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1989_, 0, v_value_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorIdx(lean_object* v_x_1991_){
_start:
{
switch(lean_obj_tag(v_x_1991_))
{
case 0:
{
lean_object* v___x_1992_; 
v___x_1992_ = lean_unsigned_to_nat(0u);
return v___x_1992_;
}
case 1:
{
lean_object* v___x_1993_; 
v___x_1993_ = lean_unsigned_to_nat(1u);
return v___x_1993_;
}
default: 
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_unsigned_to_nat(2u);
return v___x_1994_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorIdx___boxed(lean_object* v_x_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorIdx(v_x_1995_);
lean_dec_ref(v_x_1995_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(lean_object* v_t_1997_, lean_object* v_k_1998_){
_start:
{
lean_object* v_value_1999_; lean_object* v___x_2000_; 
v_value_1999_ = lean_ctor_get(v_t_1997_, 0);
lean_inc(v_value_1999_);
lean_dec_ref(v_t_1997_);
v___x_2000_ = lean_apply_1(v_k_1998_, v_value_1999_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim(lean_object* v_motive_2001_, lean_object* v_ctorIdx_2002_, lean_object* v_t_2003_, lean_object* v_h_2004_, lean_object* v_k_2005_){
_start:
{
lean_object* v___x_2006_; 
v___x_2006_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_2003_, v_k_2005_);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___boxed(lean_object* v_motive_2007_, lean_object* v_ctorIdx_2008_, lean_object* v_t_2009_, lean_object* v_h_2010_, lean_object* v_k_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim(v_motive_2007_, v_ctorIdx_2008_, v_t_2009_, v_h_2010_, v_k_2011_);
lean_dec(v_ctorIdx_2008_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_eventEmitter_elim___redArg(lean_object* v_t_2013_, lean_object* v_eventEmitter_2014_){
_start:
{
lean_object* v___x_2015_; 
v___x_2015_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_2013_, v_eventEmitter_2014_);
return v___x_2015_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_eventEmitter_elim(lean_object* v_motive_2016_, lean_object* v_t_2017_, lean_object* v_h_2018_, lean_object* v_eventEmitter_2019_){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_2017_, v_eventEmitter_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_jsFunction_elim___redArg(lean_object* v_t_2021_, lean_object* v_jsFunction_2022_){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_2021_, v_jsFunction_2022_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_jsFunction_elim(lean_object* v_motive_2024_, lean_object* v_t_2025_, lean_object* v_h_2026_, lean_object* v_jsFunction_2027_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_2025_, v_jsFunction_2027_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_transformStream_elim___redArg(lean_object* v_t_2029_, lean_object* v_transformStream_2030_){
_start:
{
lean_object* v___x_2031_; 
v___x_2031_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_2029_, v_transformStream_2030_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_transformStream_elim(lean_object* v_motive_2032_, lean_object* v_t_2033_, lean_object* v_h_2034_, lean_object* v_transformStream_2035_){
_start:
{
lean_object* v___x_2036_; 
v___x_2036_ = l_Lasm_JS_Node_EventEmitterOrJSFunctionOrTransformStream_ctorElim___redArg(v_t_2033_, v_transformStream_2035_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object* v_x_2037_){
_start:
{
lean_object* v_value_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
v_value_2038_ = lean_ctor_get(v_x_2037_, 0);
v___x_2039_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2038_);
v___x_2040_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2040_, 0, v_value_2038_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0___boxed(lean_object* v_x_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lasm_JS_Node_instToJSEventEmitterOrJSFunctionOrTransformStream___lam__0(v_x_2041_);
lean_dec_ref(v_x_2041_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object* v_value_2044_){
_start:
{
lean_object* v___x_2045_; 
v___x_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2045_, 0, v_value_2044_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object* v_value_2047_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2048_, 0, v_value_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeTransformStreamEventEmitterOrJSFunctionOrTransformStream___lam__0(lean_object* v_value_2050_){
_start:
{
lean_object* v___x_2051_; 
v___x_2051_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2051_, 0, v_value_2050_);
return v___x_2051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorIdx(lean_object* v_x_2053_){
_start:
{
switch(lean_obj_tag(v_x_2053_))
{
case 0:
{
lean_object* v___x_2054_; 
v___x_2054_ = lean_unsigned_to_nat(0u);
return v___x_2054_;
}
case 1:
{
lean_object* v___x_2055_; 
v___x_2055_ = lean_unsigned_to_nat(1u);
return v___x_2055_;
}
case 2:
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_unsigned_to_nat(2u);
return v___x_2056_;
}
case 3:
{
lean_object* v___x_2057_; 
v___x_2057_ = lean_unsigned_to_nat(3u);
return v___x_2057_;
}
case 4:
{
lean_object* v___x_2058_; 
v___x_2058_ = lean_unsigned_to_nat(4u);
return v___x_2058_;
}
default: 
{
lean_object* v___x_2059_; 
v___x_2059_ = lean_unsigned_to_nat(5u);
return v___x_2059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorIdx___boxed(lean_object* v_x_2060_){
_start:
{
lean_object* v_res_2061_; 
v_res_2061_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorIdx(v_x_2060_);
lean_dec_ref(v_x_2060_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(lean_object* v_t_2062_, lean_object* v_k_2063_){
_start:
{
lean_object* v_value_2064_; lean_object* v___x_2065_; 
v_value_2064_ = lean_ctor_get(v_t_2062_, 0);
lean_inc_ref(v_value_2064_);
lean_dec_ref(v_t_2062_);
v___x_2065_ = lean_apply_1(v_k_2063_, v_value_2064_);
return v___x_2065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim(lean_object* v_motive_2066_, lean_object* v_ctorIdx_2067_, lean_object* v_t_2068_, lean_object* v_h_2069_, lean_object* v_k_2070_){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2068_, v_k_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___boxed(lean_object* v_motive_2072_, lean_object* v_ctorIdx_2073_, lean_object* v_t_2074_, lean_object* v_h_2075_, lean_object* v_k_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim(v_motive_2072_, v_ctorIdx_2073_, v_t_2074_, v_h_2075_, v_k_2076_);
lean_dec(v_ctorIdx_2073_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence_elim___redArg(lean_object* v_t_2078_, lean_object* v_sequence_2079_){
_start:
{
lean_object* v___x_2080_; 
v___x_2080_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2078_, v_sequence_2079_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence_elim(lean_object* v_motive_2081_, lean_object* v_t_2082_, lean_object* v_h_2083_, lean_object* v_sequence_2084_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2082_, v_sequence_2084_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence2_elim___redArg(lean_object* v_t_2086_, lean_object* v_sequence2_2087_){
_start:
{
lean_object* v___x_2088_; 
v___x_2088_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2086_, v_sequence2_2087_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence2_elim(lean_object* v_motive_2089_, lean_object* v_t_2090_, lean_object* v_h_2091_, lean_object* v_sequence2_2092_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2090_, v_sequence2_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence3_elim___redArg(lean_object* v_t_2094_, lean_object* v_sequence3_2095_){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2094_, v_sequence3_2095_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence3_elim(lean_object* v_motive_2097_, lean_object* v_t_2098_, lean_object* v_h_2099_, lean_object* v_sequence3_2100_){
_start:
{
lean_object* v___x_2101_; 
v___x_2101_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2098_, v_sequence3_2100_);
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence4_elim___redArg(lean_object* v_t_2102_, lean_object* v_sequence4_2103_){
_start:
{
lean_object* v___x_2104_; 
v___x_2104_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2102_, v_sequence4_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence4_elim(lean_object* v_motive_2105_, lean_object* v_t_2106_, lean_object* v_h_2107_, lean_object* v_sequence4_2108_){
_start:
{
lean_object* v___x_2109_; 
v___x_2109_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2106_, v_sequence4_2108_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence5_elim___redArg(lean_object* v_t_2110_, lean_object* v_sequence5_2111_){
_start:
{
lean_object* v___x_2112_; 
v___x_2112_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2110_, v_sequence5_2111_);
return v___x_2112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence5_elim(lean_object* v_motive_2113_, lean_object* v_t_2114_, lean_object* v_h_2115_, lean_object* v_sequence5_2116_){
_start:
{
lean_object* v___x_2117_; 
v___x_2117_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2114_, v_sequence5_2116_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence6_elim___redArg(lean_object* v_t_2118_, lean_object* v_sequence6_2119_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2118_, v_sequence6_2119_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_sequence6_elim(lean_object* v_motive_2121_, lean_object* v_t_2122_, lean_object* v_h_2123_, lean_object* v_sequence6_2124_){
_start:
{
lean_object* v___x_2125_; 
v___x_2125_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream_ctorElim___redArg(v_t_2122_, v_sequence6_2124_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_x_2126_){
_start:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2127_ = lean_mk_string_unchecked("", 0, 0);
v___x_2128_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2128_, 0, v_x_2126_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1(lean_object* v_x_2129_){
_start:
{
lean_inc(v_x_2129_);
return v_x_2129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1___boxed(lean_object* v_x_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1(v_x_2130_);
lean_dec(v_x_2130_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__6(lean_object* v___f_2132_, lean_object* v___f_2133_, lean_object* v___f_2134_, lean_object* v___f_2135_, lean_object* v___f_2136_, lean_object* v___f_2137_, lean_object* v_x_2138_){
_start:
{
switch(lean_obj_tag(v_x_2138_))
{
case 0:
{
lean_object* v_value_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2159_; 
lean_dec_ref(v___f_2137_);
lean_dec_ref(v___f_2136_);
lean_dec_ref(v___f_2135_);
lean_dec_ref(v___f_2134_);
lean_dec_ref(v___f_2133_);
v_value_2139_ = lean_ctor_get(v_x_2138_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_x_2138_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2141_ = v_x_2138_;
v_isShared_2142_ = v_isSharedCheck_2159_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_value_2139_);
lean_dec(v_x_2138_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2159_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___f_2143_; lean_object* v___f_2144_; lean_object* v___f_2145_; lean_object* v___f_2146_; lean_object* v___f_2147_; lean_object* v___f_2148_; lean_object* v___f_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; size_t v_sz_2153_; size_t v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2157_; 
v___f_2143_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2144_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2145_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2146_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2147_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2148_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2149_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2150_, 0, v___f_2143_);
lean_ctor_set(v___x_2150_, 1, v___f_2144_);
v___x_2151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2150_);
lean_ctor_set(v___x_2151_, 1, v___f_2145_);
lean_ctor_set(v___x_2151_, 2, v___f_2146_);
lean_ctor_set(v___x_2151_, 3, v___f_2147_);
lean_ctor_set(v___x_2151_, 4, v___f_2148_);
v___x_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2151_);
lean_ctor_set(v___x_2152_, 1, v___f_2149_);
v_sz_2153_ = lean_array_size(v_value_2139_);
v___x_2154_ = ((size_t)0ULL);
v___x_2155_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2152_, v___f_2132_, v_sz_2153_, v___x_2154_, v_value_2139_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set_tag(v___x_2141_, 7);
lean_ctor_set(v___x_2141_, 0, v___x_2155_);
v___x_2157_ = v___x_2141_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2155_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
case 1:
{
lean_object* v_value_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2180_; 
lean_dec_ref(v___f_2137_);
lean_dec_ref(v___f_2136_);
lean_dec_ref(v___f_2135_);
lean_dec_ref(v___f_2134_);
lean_dec_ref(v___f_2132_);
v_value_2160_ = lean_ctor_get(v_x_2138_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v_x_2138_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2162_ = v_x_2138_;
v_isShared_2163_ = v_isSharedCheck_2180_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_value_2160_);
lean_dec(v_x_2138_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2180_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___f_2164_; lean_object* v___f_2165_; lean_object* v___f_2166_; lean_object* v___f_2167_; lean_object* v___f_2168_; lean_object* v___f_2169_; lean_object* v___f_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; size_t v_sz_2174_; size_t v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2178_; 
v___f_2164_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2165_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2166_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2167_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2168_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2169_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2170_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___f_2164_);
lean_ctor_set(v___x_2171_, 1, v___f_2165_);
v___x_2172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2171_);
lean_ctor_set(v___x_2172_, 1, v___f_2166_);
lean_ctor_set(v___x_2172_, 2, v___f_2167_);
lean_ctor_set(v___x_2172_, 3, v___f_2168_);
lean_ctor_set(v___x_2172_, 4, v___f_2169_);
v___x_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
lean_ctor_set(v___x_2173_, 1, v___f_2170_);
v_sz_2174_ = lean_array_size(v_value_2160_);
v___x_2175_ = ((size_t)0ULL);
v___x_2176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2173_, v___f_2133_, v_sz_2174_, v___x_2175_, v_value_2160_);
if (v_isShared_2163_ == 0)
{
lean_ctor_set_tag(v___x_2162_, 7);
lean_ctor_set(v___x_2162_, 0, v___x_2176_);
v___x_2178_ = v___x_2162_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
case 2:
{
lean_object* v_value_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2201_; 
lean_dec_ref(v___f_2137_);
lean_dec_ref(v___f_2136_);
lean_dec_ref(v___f_2135_);
lean_dec_ref(v___f_2133_);
lean_dec_ref(v___f_2132_);
v_value_2181_ = lean_ctor_get(v_x_2138_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v_x_2138_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2183_ = v_x_2138_;
v_isShared_2184_ = v_isSharedCheck_2201_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_value_2181_);
lean_dec(v_x_2138_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2201_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___f_2185_; lean_object* v___f_2186_; lean_object* v___f_2187_; lean_object* v___f_2188_; lean_object* v___f_2189_; lean_object* v___f_2190_; lean_object* v___f_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; size_t v_sz_2195_; size_t v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; 
v___f_2185_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2186_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2187_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2188_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2189_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2190_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2191_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___f_2185_);
lean_ctor_set(v___x_2192_, 1, v___f_2186_);
v___x_2193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2192_);
lean_ctor_set(v___x_2193_, 1, v___f_2187_);
lean_ctor_set(v___x_2193_, 2, v___f_2188_);
lean_ctor_set(v___x_2193_, 3, v___f_2189_);
lean_ctor_set(v___x_2193_, 4, v___f_2190_);
v___x_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
lean_ctor_set(v___x_2194_, 1, v___f_2191_);
v_sz_2195_ = lean_array_size(v_value_2181_);
v___x_2196_ = ((size_t)0ULL);
v___x_2197_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2194_, v___f_2134_, v_sz_2195_, v___x_2196_, v_value_2181_);
if (v_isShared_2184_ == 0)
{
lean_ctor_set_tag(v___x_2183_, 7);
lean_ctor_set(v___x_2183_, 0, v___x_2197_);
v___x_2199_ = v___x_2183_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
case 3:
{
lean_object* v_value_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2222_; 
lean_dec_ref(v___f_2137_);
lean_dec_ref(v___f_2136_);
lean_dec_ref(v___f_2134_);
lean_dec_ref(v___f_2133_);
lean_dec_ref(v___f_2132_);
v_value_2202_ = lean_ctor_get(v_x_2138_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v_x_2138_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2204_ = v_x_2138_;
v_isShared_2205_ = v_isSharedCheck_2222_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_value_2202_);
lean_dec(v_x_2138_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2222_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___f_2206_; lean_object* v___f_2207_; lean_object* v___f_2208_; lean_object* v___f_2209_; lean_object* v___f_2210_; lean_object* v___f_2211_; lean_object* v___f_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; size_t v_sz_2216_; size_t v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2220_; 
v___f_2206_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2207_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2208_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2209_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2210_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2211_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2212_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2213_, 0, v___f_2206_);
lean_ctor_set(v___x_2213_, 1, v___f_2207_);
v___x_2214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
lean_ctor_set(v___x_2214_, 1, v___f_2208_);
lean_ctor_set(v___x_2214_, 2, v___f_2209_);
lean_ctor_set(v___x_2214_, 3, v___f_2210_);
lean_ctor_set(v___x_2214_, 4, v___f_2211_);
v___x_2215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2214_);
lean_ctor_set(v___x_2215_, 1, v___f_2212_);
v_sz_2216_ = lean_array_size(v_value_2202_);
v___x_2217_ = ((size_t)0ULL);
v___x_2218_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2215_, v___f_2135_, v_sz_2216_, v___x_2217_, v_value_2202_);
if (v_isShared_2205_ == 0)
{
lean_ctor_set_tag(v___x_2204_, 7);
lean_ctor_set(v___x_2204_, 0, v___x_2218_);
v___x_2220_ = v___x_2204_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
case 4:
{
lean_object* v_value_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2243_; 
lean_dec_ref(v___f_2137_);
lean_dec_ref(v___f_2135_);
lean_dec_ref(v___f_2134_);
lean_dec_ref(v___f_2133_);
lean_dec_ref(v___f_2132_);
v_value_2223_ = lean_ctor_get(v_x_2138_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v_x_2138_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2225_ = v_x_2138_;
v_isShared_2226_ = v_isSharedCheck_2243_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_value_2223_);
lean_dec(v_x_2138_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2243_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___f_2227_; lean_object* v___f_2228_; lean_object* v___f_2229_; lean_object* v___f_2230_; lean_object* v___f_2231_; lean_object* v___f_2232_; lean_object* v___f_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; size_t v_sz_2237_; size_t v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2241_; 
v___f_2227_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2228_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2229_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2230_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2231_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2232_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2233_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___f_2227_);
lean_ctor_set(v___x_2234_, 1, v___f_2228_);
v___x_2235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
lean_ctor_set(v___x_2235_, 1, v___f_2229_);
lean_ctor_set(v___x_2235_, 2, v___f_2230_);
lean_ctor_set(v___x_2235_, 3, v___f_2231_);
lean_ctor_set(v___x_2235_, 4, v___f_2232_);
v___x_2236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
lean_ctor_set(v___x_2236_, 1, v___f_2233_);
v_sz_2237_ = lean_array_size(v_value_2223_);
v___x_2238_ = ((size_t)0ULL);
v___x_2239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2236_, v___f_2136_, v_sz_2237_, v___x_2238_, v_value_2223_);
if (v_isShared_2226_ == 0)
{
lean_ctor_set_tag(v___x_2225_, 7);
lean_ctor_set(v___x_2225_, 0, v___x_2239_);
v___x_2241_ = v___x_2225_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v___x_2239_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
default: 
{
lean_object* v_value_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2264_; 
lean_dec_ref(v___f_2136_);
lean_dec_ref(v___f_2135_);
lean_dec_ref(v___f_2134_);
lean_dec_ref(v___f_2133_);
lean_dec_ref(v___f_2132_);
v_value_2244_ = lean_ctor_get(v_x_2138_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v_x_2138_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2246_ = v_x_2138_;
v_isShared_2247_ = v_isSharedCheck_2264_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_value_2244_);
lean_dec(v_x_2138_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2264_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___f_2248_; lean_object* v___f_2249_; lean_object* v___f_2250_; lean_object* v___f_2251_; lean_object* v___f_2252_; lean_object* v___f_2253_; lean_object* v___f_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; size_t v_sz_2258_; size_t v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v___f_2248_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2249_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2250_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2251_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2252_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2253_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2254_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___f_2248_);
lean_ctor_set(v___x_2255_, 1, v___f_2249_);
v___x_2256_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
lean_ctor_set(v___x_2256_, 1, v___f_2250_);
lean_ctor_set(v___x_2256_, 2, v___f_2251_);
lean_ctor_set(v___x_2256_, 3, v___f_2252_);
lean_ctor_set(v___x_2256_, 4, v___f_2253_);
v___x_2257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
lean_ctor_set(v___x_2257_, 1, v___f_2254_);
v_sz_2258_ = lean_array_size(v_value_2244_);
v___x_2259_ = ((size_t)0ULL);
v___x_2260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2257_, v___f_2137_, v_sz_2258_, v___x_2259_, v_value_2244_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set_tag(v___x_2246_, 7);
lean_ctor_set(v___x_2246_, 0, v___x_2260_);
v___x_2262_ = v___x_2246_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2260_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream(void){
_start:
{
lean_object* v___f_2265_; lean_object* v___f_2266_; lean_object* v___f_2267_; 
v___f_2265_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0), 1, 0);
v___f_2266_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1___boxed), 1, 0);
lean_inc_ref_n(v___f_2265_, 4);
v___f_2267_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__6), 7, 6);
lean_closure_set(v___f_2267_, 0, v___f_2265_);
lean_closure_set(v___f_2267_, 1, v___f_2266_);
lean_closure_set(v___f_2267_, 2, v___f_2265_);
lean_closure_set(v___f_2267_, 3, v___f_2265_);
lean_closure_set(v___f_2267_, 4, v___f_2265_);
lean_closure_set(v___f_2267_, 5, v___f_2265_);
return v___f_2267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2268_){
_start:
{
lean_object* v___x_2269_; 
v___x_2269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2269_, 0, v_value_2268_);
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2271_){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2272_, 0, v_value_2271_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2274_){
_start:
{
lean_object* v___x_2275_; 
v___x_2275_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2275_, 0, v_value_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2277_){
_start:
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2278_, 0, v_value_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2280_){
_start:
{
lean_object* v___x_2281_; 
v___x_2281_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2281_, 0, v_value_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0(lean_object* v_value_2283_){
_start:
{
lean_object* v___x_2284_; 
v___x_2284_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2284_, 0, v_value_2283_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorIdx(lean_object* v_x_2286_){
_start:
{
switch(lean_obj_tag(v_x_2286_))
{
case 0:
{
lean_object* v___x_2287_; 
v___x_2287_ = lean_unsigned_to_nat(0u);
return v___x_2287_;
}
case 1:
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_unsigned_to_nat(1u);
return v___x_2288_;
}
case 2:
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_unsigned_to_nat(2u);
return v___x_2289_;
}
case 3:
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_unsigned_to_nat(3u);
return v___x_2290_;
}
case 4:
{
lean_object* v___x_2291_; 
v___x_2291_ = lean_unsigned_to_nat(4u);
return v___x_2291_;
}
case 5:
{
lean_object* v___x_2292_; 
v___x_2292_ = lean_unsigned_to_nat(5u);
return v___x_2292_;
}
case 6:
{
lean_object* v___x_2293_; 
v___x_2293_ = lean_unsigned_to_nat(6u);
return v___x_2293_;
}
default: 
{
lean_object* v___x_2294_; 
v___x_2294_ = lean_unsigned_to_nat(7u);
return v___x_2294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorIdx___boxed(lean_object* v_x_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorIdx(v_x_2295_);
lean_dec_ref(v_x_2295_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(lean_object* v_t_2297_, lean_object* v_k_2298_){
_start:
{
if (lean_obj_tag(v_t_2297_) == 7)
{
lean_object* v_value_2299_; lean_object* v___x_2300_; 
v_value_2299_ = lean_ctor_get(v_t_2297_, 0);
lean_inc(v_value_2299_);
lean_dec_ref_known(v_t_2297_, 1);
v___x_2300_ = lean_apply_1(v_k_2298_, v_value_2299_);
return v___x_2300_;
}
else
{
lean_object* v_value_2301_; lean_object* v___x_2302_; 
v_value_2301_ = lean_ctor_get(v_t_2297_, 0);
lean_inc_ref(v_value_2301_);
lean_dec_ref(v_t_2297_);
v___x_2302_ = lean_apply_1(v_k_2298_, v_value_2301_);
return v___x_2302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim(lean_object* v_motive_2303_, lean_object* v_ctorIdx_2304_, lean_object* v_t_2305_, lean_object* v_h_2306_, lean_object* v_k_2307_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2305_, v_k_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___boxed(lean_object* v_motive_2309_, lean_object* v_ctorIdx_2310_, lean_object* v_t_2311_, lean_object* v_h_2312_, lean_object* v_k_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim(v_motive_2309_, v_ctorIdx_2310_, v_t_2311_, v_h_2312_, v_k_2313_);
lean_dec(v_ctorIdx_2310_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence_elim___redArg(lean_object* v_t_2315_, lean_object* v_sequence_2316_){
_start:
{
lean_object* v___x_2317_; 
v___x_2317_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2315_, v_sequence_2316_);
return v___x_2317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence_elim(lean_object* v_motive_2318_, lean_object* v_t_2319_, lean_object* v_h_2320_, lean_object* v_sequence_2321_){
_start:
{
lean_object* v___x_2322_; 
v___x_2322_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2319_, v_sequence_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence2_elim___redArg(lean_object* v_t_2323_, lean_object* v_sequence2_2324_){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2323_, v_sequence2_2324_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence2_elim(lean_object* v_motive_2326_, lean_object* v_t_2327_, lean_object* v_h_2328_, lean_object* v_sequence2_2329_){
_start:
{
lean_object* v___x_2330_; 
v___x_2330_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2327_, v_sequence2_2329_);
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence3_elim___redArg(lean_object* v_t_2331_, lean_object* v_sequence3_2332_){
_start:
{
lean_object* v___x_2333_; 
v___x_2333_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2331_, v_sequence3_2332_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence3_elim(lean_object* v_motive_2334_, lean_object* v_t_2335_, lean_object* v_h_2336_, lean_object* v_sequence3_2337_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2335_, v_sequence3_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence4_elim___redArg(lean_object* v_t_2339_, lean_object* v_sequence4_2340_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2339_, v_sequence4_2340_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence4_elim(lean_object* v_motive_2342_, lean_object* v_t_2343_, lean_object* v_h_2344_, lean_object* v_sequence4_2345_){
_start:
{
lean_object* v___x_2346_; 
v___x_2346_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2343_, v_sequence4_2345_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence5_elim___redArg(lean_object* v_t_2347_, lean_object* v_sequence5_2348_){
_start:
{
lean_object* v___x_2349_; 
v___x_2349_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2347_, v_sequence5_2348_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence5_elim(lean_object* v_motive_2350_, lean_object* v_t_2351_, lean_object* v_h_2352_, lean_object* v_sequence5_2353_){
_start:
{
lean_object* v___x_2354_; 
v___x_2354_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2351_, v_sequence5_2353_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence6_elim___redArg(lean_object* v_t_2355_, lean_object* v_sequence6_2356_){
_start:
{
lean_object* v___x_2357_; 
v___x_2357_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2355_, v_sequence6_2356_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence6_elim(lean_object* v_motive_2358_, lean_object* v_t_2359_, lean_object* v_h_2360_, lean_object* v_sequence6_2361_){
_start:
{
lean_object* v___x_2362_; 
v___x_2362_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2359_, v_sequence6_2361_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence7_elim___redArg(lean_object* v_t_2363_, lean_object* v_sequence7_2364_){
_start:
{
lean_object* v___x_2365_; 
v___x_2365_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2363_, v_sequence7_2364_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_sequence7_elim(lean_object* v_motive_2366_, lean_object* v_t_2367_, lean_object* v_h_2368_, lean_object* v_sequence7_2369_){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2367_, v_sequence7_2369_);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_jsFunction_elim___redArg(lean_object* v_t_2371_, lean_object* v_jsFunction_2372_){
_start:
{
lean_object* v___x_2373_; 
v___x_2373_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2371_, v_jsFunction_2372_);
return v___x_2373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_jsFunction_elim(lean_object* v_motive_2374_, lean_object* v_t_2375_, lean_object* v_h_2376_, lean_object* v_jsFunction_2377_){
_start:
{
lean_object* v___x_2378_; 
v___x_2378_ = l_Lasm_JS_Node_SequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction_ctorElim___redArg(v_t_2375_, v_jsFunction_2377_);
return v___x_2378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__7(lean_object* v___f_2379_, lean_object* v___f_2380_, lean_object* v___f_2381_, lean_object* v___f_2382_, lean_object* v___f_2383_, lean_object* v___f_2384_, lean_object* v___f_2385_, lean_object* v_x_2386_){
_start:
{
switch(lean_obj_tag(v_x_2386_))
{
case 0:
{
lean_object* v_value_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2407_; 
lean_dec_ref(v___f_2385_);
lean_dec_ref(v___f_2384_);
lean_dec_ref(v___f_2383_);
lean_dec_ref(v___f_2382_);
lean_dec_ref(v___f_2381_);
lean_dec_ref(v___f_2380_);
v_value_2387_ = lean_ctor_get(v_x_2386_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v_x_2386_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2389_ = v_x_2386_;
v_isShared_2390_ = v_isSharedCheck_2407_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_value_2387_);
lean_dec(v_x_2386_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2407_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___f_2391_; lean_object* v___f_2392_; lean_object* v___f_2393_; lean_object* v___f_2394_; lean_object* v___f_2395_; lean_object* v___f_2396_; lean_object* v___f_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; size_t v_sz_2401_; size_t v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2405_; 
v___f_2391_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2392_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2393_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2394_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2395_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2396_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2397_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2398_, 0, v___f_2391_);
lean_ctor_set(v___x_2398_, 1, v___f_2392_);
v___x_2399_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2398_);
lean_ctor_set(v___x_2399_, 1, v___f_2393_);
lean_ctor_set(v___x_2399_, 2, v___f_2394_);
lean_ctor_set(v___x_2399_, 3, v___f_2395_);
lean_ctor_set(v___x_2399_, 4, v___f_2396_);
v___x_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2400_, 0, v___x_2399_);
lean_ctor_set(v___x_2400_, 1, v___f_2397_);
v_sz_2401_ = lean_array_size(v_value_2387_);
v___x_2402_ = ((size_t)0ULL);
v___x_2403_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2400_, v___f_2379_, v_sz_2401_, v___x_2402_, v_value_2387_);
if (v_isShared_2390_ == 0)
{
lean_ctor_set_tag(v___x_2389_, 7);
lean_ctor_set(v___x_2389_, 0, v___x_2403_);
v___x_2405_ = v___x_2389_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v___x_2403_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
case 1:
{
lean_object* v_value_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2428_; 
lean_dec_ref(v___f_2385_);
lean_dec_ref(v___f_2384_);
lean_dec_ref(v___f_2383_);
lean_dec_ref(v___f_2382_);
lean_dec_ref(v___f_2381_);
lean_dec_ref(v___f_2379_);
v_value_2408_ = lean_ctor_get(v_x_2386_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v_x_2386_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2410_ = v_x_2386_;
v_isShared_2411_ = v_isSharedCheck_2428_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_value_2408_);
lean_dec(v_x_2386_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2428_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___f_2412_; lean_object* v___f_2413_; lean_object* v___f_2414_; lean_object* v___f_2415_; lean_object* v___f_2416_; lean_object* v___f_2417_; lean_object* v___f_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; size_t v_sz_2422_; size_t v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2426_; 
v___f_2412_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2413_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2414_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2415_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2416_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2417_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2418_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___f_2412_);
lean_ctor_set(v___x_2419_, 1, v___f_2413_);
v___x_2420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
lean_ctor_set(v___x_2420_, 1, v___f_2414_);
lean_ctor_set(v___x_2420_, 2, v___f_2415_);
lean_ctor_set(v___x_2420_, 3, v___f_2416_);
lean_ctor_set(v___x_2420_, 4, v___f_2417_);
v___x_2421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
lean_ctor_set(v___x_2421_, 1, v___f_2418_);
v_sz_2422_ = lean_array_size(v_value_2408_);
v___x_2423_ = ((size_t)0ULL);
v___x_2424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2421_, v___f_2380_, v_sz_2422_, v___x_2423_, v_value_2408_);
if (v_isShared_2411_ == 0)
{
lean_ctor_set_tag(v___x_2410_, 7);
lean_ctor_set(v___x_2410_, 0, v___x_2424_);
v___x_2426_ = v___x_2410_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v___x_2424_);
v___x_2426_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
return v___x_2426_;
}
}
}
case 2:
{
lean_object* v_value_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2449_; 
lean_dec_ref(v___f_2385_);
lean_dec_ref(v___f_2384_);
lean_dec_ref(v___f_2383_);
lean_dec_ref(v___f_2382_);
lean_dec_ref(v___f_2380_);
lean_dec_ref(v___f_2379_);
v_value_2429_ = lean_ctor_get(v_x_2386_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v_x_2386_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2431_ = v_x_2386_;
v_isShared_2432_ = v_isSharedCheck_2449_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_value_2429_);
lean_dec(v_x_2386_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2449_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___f_2433_; lean_object* v___f_2434_; lean_object* v___f_2435_; lean_object* v___f_2436_; lean_object* v___f_2437_; lean_object* v___f_2438_; lean_object* v___f_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; size_t v_sz_2443_; size_t v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2447_; 
v___f_2433_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2434_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2435_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2436_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2437_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2438_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2439_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2440_, 0, v___f_2433_);
lean_ctor_set(v___x_2440_, 1, v___f_2434_);
v___x_2441_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2440_);
lean_ctor_set(v___x_2441_, 1, v___f_2435_);
lean_ctor_set(v___x_2441_, 2, v___f_2436_);
lean_ctor_set(v___x_2441_, 3, v___f_2437_);
lean_ctor_set(v___x_2441_, 4, v___f_2438_);
v___x_2442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2441_);
lean_ctor_set(v___x_2442_, 1, v___f_2439_);
v_sz_2443_ = lean_array_size(v_value_2429_);
v___x_2444_ = ((size_t)0ULL);
v___x_2445_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2442_, v___f_2381_, v_sz_2443_, v___x_2444_, v_value_2429_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set_tag(v___x_2431_, 7);
lean_ctor_set(v___x_2431_, 0, v___x_2445_);
v___x_2447_ = v___x_2431_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v___x_2445_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
case 3:
{
lean_object* v_value_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2470_; 
lean_dec_ref(v___f_2385_);
lean_dec_ref(v___f_2384_);
lean_dec_ref(v___f_2383_);
lean_dec_ref(v___f_2381_);
lean_dec_ref(v___f_2380_);
lean_dec_ref(v___f_2379_);
v_value_2450_ = lean_ctor_get(v_x_2386_, 0);
v_isSharedCheck_2470_ = !lean_is_exclusive(v_x_2386_);
if (v_isSharedCheck_2470_ == 0)
{
v___x_2452_ = v_x_2386_;
v_isShared_2453_ = v_isSharedCheck_2470_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_value_2450_);
lean_dec(v_x_2386_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2470_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___f_2454_; lean_object* v___f_2455_; lean_object* v___f_2456_; lean_object* v___f_2457_; lean_object* v___f_2458_; lean_object* v___f_2459_; lean_object* v___f_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; size_t v_sz_2464_; size_t v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2468_; 
v___f_2454_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2455_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2456_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2457_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2458_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2459_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2460_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2461_, 0, v___f_2454_);
lean_ctor_set(v___x_2461_, 1, v___f_2455_);
v___x_2462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
lean_ctor_set(v___x_2462_, 1, v___f_2456_);
lean_ctor_set(v___x_2462_, 2, v___f_2457_);
lean_ctor_set(v___x_2462_, 3, v___f_2458_);
lean_ctor_set(v___x_2462_, 4, v___f_2459_);
v___x_2463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
lean_ctor_set(v___x_2463_, 1, v___f_2460_);
v_sz_2464_ = lean_array_size(v_value_2450_);
v___x_2465_ = ((size_t)0ULL);
v___x_2466_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2463_, v___f_2382_, v_sz_2464_, v___x_2465_, v_value_2450_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set_tag(v___x_2452_, 7);
lean_ctor_set(v___x_2452_, 0, v___x_2466_);
v___x_2468_ = v___x_2452_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
case 4:
{
lean_object* v_value_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2491_; 
lean_dec_ref(v___f_2385_);
lean_dec_ref(v___f_2384_);
lean_dec_ref(v___f_2382_);
lean_dec_ref(v___f_2381_);
lean_dec_ref(v___f_2380_);
lean_dec_ref(v___f_2379_);
v_value_2471_ = lean_ctor_get(v_x_2386_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v_x_2386_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2473_ = v_x_2386_;
v_isShared_2474_ = v_isSharedCheck_2491_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_value_2471_);
lean_dec(v_x_2386_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2491_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___f_2475_; lean_object* v___f_2476_; lean_object* v___f_2477_; lean_object* v___f_2478_; lean_object* v___f_2479_; lean_object* v___f_2480_; lean_object* v___f_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; size_t v_sz_2485_; size_t v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2489_; 
v___f_2475_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2476_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2477_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2478_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2479_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2480_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2481_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___f_2475_);
lean_ctor_set(v___x_2482_, 1, v___f_2476_);
v___x_2483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2482_);
lean_ctor_set(v___x_2483_, 1, v___f_2477_);
lean_ctor_set(v___x_2483_, 2, v___f_2478_);
lean_ctor_set(v___x_2483_, 3, v___f_2479_);
lean_ctor_set(v___x_2483_, 4, v___f_2480_);
v___x_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
lean_ctor_set(v___x_2484_, 1, v___f_2481_);
v_sz_2485_ = lean_array_size(v_value_2471_);
v___x_2486_ = ((size_t)0ULL);
v___x_2487_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2484_, v___f_2383_, v_sz_2485_, v___x_2486_, v_value_2471_);
if (v_isShared_2474_ == 0)
{
lean_ctor_set_tag(v___x_2473_, 7);
lean_ctor_set(v___x_2473_, 0, v___x_2487_);
v___x_2489_ = v___x_2473_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v___x_2487_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
case 5:
{
lean_object* v_value_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2512_; 
lean_dec_ref(v___f_2385_);
lean_dec_ref(v___f_2383_);
lean_dec_ref(v___f_2382_);
lean_dec_ref(v___f_2381_);
lean_dec_ref(v___f_2380_);
lean_dec_ref(v___f_2379_);
v_value_2492_ = lean_ctor_get(v_x_2386_, 0);
v_isSharedCheck_2512_ = !lean_is_exclusive(v_x_2386_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2494_ = v_x_2386_;
v_isShared_2495_ = v_isSharedCheck_2512_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_value_2492_);
lean_dec(v_x_2386_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2512_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___f_2496_; lean_object* v___f_2497_; lean_object* v___f_2498_; lean_object* v___f_2499_; lean_object* v___f_2500_; lean_object* v___f_2501_; lean_object* v___f_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; size_t v_sz_2506_; size_t v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2510_; 
v___f_2496_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2497_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2498_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2499_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2500_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2501_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2502_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___f_2496_);
lean_ctor_set(v___x_2503_, 1, v___f_2497_);
v___x_2504_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
lean_ctor_set(v___x_2504_, 1, v___f_2498_);
lean_ctor_set(v___x_2504_, 2, v___f_2499_);
lean_ctor_set(v___x_2504_, 3, v___f_2500_);
lean_ctor_set(v___x_2504_, 4, v___f_2501_);
v___x_2505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
lean_ctor_set(v___x_2505_, 1, v___f_2502_);
v_sz_2506_ = lean_array_size(v_value_2492_);
v___x_2507_ = ((size_t)0ULL);
v___x_2508_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2505_, v___f_2384_, v_sz_2506_, v___x_2507_, v_value_2492_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set_tag(v___x_2494_, 7);
lean_ctor_set(v___x_2494_, 0, v___x_2508_);
v___x_2510_ = v___x_2494_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2508_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
case 6:
{
lean_object* v_value_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2533_; 
lean_dec_ref(v___f_2384_);
lean_dec_ref(v___f_2383_);
lean_dec_ref(v___f_2382_);
lean_dec_ref(v___f_2381_);
lean_dec_ref(v___f_2380_);
lean_dec_ref(v___f_2379_);
v_value_2513_ = lean_ctor_get(v_x_2386_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v_x_2386_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2515_ = v_x_2386_;
v_isShared_2516_ = v_isSharedCheck_2533_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_value_2513_);
lean_dec(v_x_2386_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2533_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___f_2517_; lean_object* v___f_2518_; lean_object* v___f_2519_; lean_object* v___f_2520_; lean_object* v___f_2521_; lean_object* v___f_2522_; lean_object* v___f_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; size_t v_sz_2527_; size_t v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2531_; 
v___f_2517_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_2518_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_2519_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_2520_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_2521_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_2522_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_2523_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___f_2517_);
lean_ctor_set(v___x_2524_, 1, v___f_2518_);
v___x_2525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2524_);
lean_ctor_set(v___x_2525_, 1, v___f_2519_);
lean_ctor_set(v___x_2525_, 2, v___f_2520_);
lean_ctor_set(v___x_2525_, 3, v___f_2521_);
lean_ctor_set(v___x_2525_, 4, v___f_2522_);
v___x_2526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
lean_ctor_set(v___x_2526_, 1, v___f_2523_);
v_sz_2527_ = lean_array_size(v_value_2513_);
v___x_2528_ = ((size_t)0ULL);
v___x_2529_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2526_, v___f_2385_, v_sz_2527_, v___x_2528_, v_value_2513_);
if (v_isShared_2516_ == 0)
{
lean_ctor_set_tag(v___x_2515_, 7);
lean_ctor_set(v___x_2515_, 0, v___x_2529_);
v___x_2531_ = v___x_2515_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v___x_2529_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
default: 
{
lean_object* v_value_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
lean_dec_ref(v___f_2385_);
lean_dec_ref(v___f_2384_);
lean_dec_ref(v___f_2383_);
lean_dec_ref(v___f_2382_);
lean_dec_ref(v___f_2381_);
lean_dec_ref(v___f_2380_);
lean_dec_ref(v___f_2379_);
v_value_2534_ = lean_ctor_get(v_x_2386_, 0);
lean_inc(v_value_2534_);
lean_dec_ref_known(v_x_2386_, 1);
v___x_2535_ = lean_mk_string_unchecked("", 0, 0);
v___x_2536_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2536_, 0, v_value_2534_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
return v___x_2536_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction(void){
_start:
{
lean_object* v___f_2537_; lean_object* v___f_2538_; lean_object* v___f_2539_; 
v___f_2537_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__0), 1, 0);
v___f_2538_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStream___lam__1___boxed), 1, 0);
lean_inc_ref_n(v___f_2537_, 5);
v___f_2539_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__7), 8, 7);
lean_closure_set(v___f_2539_, 0, v___f_2537_);
lean_closure_set(v___f_2539_, 1, v___f_2538_);
lean_closure_set(v___f_2539_, 2, v___f_2537_);
lean_closure_set(v___f_2539_, 3, v___f_2537_);
lean_closure_set(v___f_2539_, 4, v___f_2537_);
lean_closure_set(v___f_2539_, 5, v___f_2537_);
lean_closure_set(v___f_2539_, 6, v___f_2537_);
return v___f_2539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayEventEmitterSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2540_){
_start:
{
lean_object* v___x_2541_; 
v___x_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2541_, 0, v_value_2540_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2543_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2544_, 0, v_value_2543_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2546_){
_start:
{
lean_object* v___x_2547_; 
v___x_2547_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2547_, 0, v_value_2546_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayReadableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2549_){
_start:
{
lean_object* v___x_2550_; 
v___x_2550_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2550_, 0, v_value_2549_);
return v___x_2550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayWritableStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2552_){
_start:
{
lean_object* v___x_2553_; 
v___x_2553_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2553_, 0, v_value_2552_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayTransformStreamSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2555_){
_start:
{
lean_object* v___x_2556_; 
v___x_2556_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2556_, 0, v_value_2555_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayStreamDuplexSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2558_){
_start:
{
lean_object* v___x_2559_; 
v___x_2559_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2559_, 0, v_value_2558_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionSequenceOfEventEmitterOrSequenceOfObjectOrSequenceOfJSFunctionOrSequenceOfReadableStreamOrSequenceOfWritableStreamOrSequenceOfTransformStreamOrSequenceOfDuplexOrJSFunction___lam__0(lean_object* v_value_2561_){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2562_, 0, v_value_2561_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorIdx(lean_object* v_x_2564_){
_start:
{
switch(lean_obj_tag(v_x_2564_))
{
case 0:
{
lean_object* v___x_2565_; 
v___x_2565_ = lean_unsigned_to_nat(0u);
return v___x_2565_;
}
case 1:
{
lean_object* v___x_2566_; 
v___x_2566_ = lean_unsigned_to_nat(1u);
return v___x_2566_;
}
default: 
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_unsigned_to_nat(2u);
return v___x_2567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorIdx___boxed(lean_object* v_x_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorIdx(v_x_2568_);
lean_dec_ref(v_x_2568_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(lean_object* v_t_2570_, lean_object* v_k_2571_){
_start:
{
lean_object* v_value_2572_; lean_object* v___x_2573_; 
v_value_2572_ = lean_ctor_get(v_t_2570_, 0);
lean_inc(v_value_2572_);
lean_dec_ref(v_t_2570_);
v___x_2573_ = lean_apply_1(v_k_2571_, v_value_2572_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim(lean_object* v_motive_2574_, lean_object* v_ctorIdx_2575_, lean_object* v_t_2576_, lean_object* v_h_2577_, lean_object* v_k_2578_){
_start:
{
lean_object* v___x_2579_; 
v___x_2579_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2576_, v_k_2578_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___boxed(lean_object* v_motive_2580_, lean_object* v_ctorIdx_2581_, lean_object* v_t_2582_, lean_object* v_h_2583_, lean_object* v_k_2584_){
_start:
{
lean_object* v_res_2585_; 
v_res_2585_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim(v_motive_2580_, v_ctorIdx_2581_, v_t_2582_, v_h_2583_, v_k_2584_);
lean_dec(v_ctorIdx_2581_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_readable_elim___redArg(lean_object* v_t_2586_, lean_object* v_readable_2587_){
_start:
{
lean_object* v___x_2588_; 
v___x_2588_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2586_, v_readable_2587_);
return v___x_2588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_readable_elim(lean_object* v_motive_2589_, lean_object* v_t_2590_, lean_object* v_h_2591_, lean_object* v_readable_2592_){
_start:
{
lean_object* v___x_2593_; 
v___x_2593_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2590_, v_readable_2592_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_writable_elim___redArg(lean_object* v_t_2594_, lean_object* v_writable_2595_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2594_, v_writable_2595_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_writable_elim(lean_object* v_motive_2597_, lean_object* v_t_2598_, lean_object* v_h_2599_, lean_object* v_writable_2600_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2598_, v_writable_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_duplex_elim___redArg(lean_object* v_t_2602_, lean_object* v_duplex_2603_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2602_, v_duplex_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_duplex_elim(lean_object* v_motive_2605_, lean_object* v_t_2606_, lean_object* v_h_2607_, lean_object* v_duplex_2608_){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplex_ctorElim___redArg(v_t_2606_, v_duplex_2608_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0(lean_object* v_x_2610_){
_start:
{
lean_object* v_value_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v_value_2611_ = lean_ctor_get(v_x_2610_, 0);
v___x_2612_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2611_);
v___x_2613_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2613_, 0, v_value_2611_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
return v___x_2613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0___boxed(lean_object* v_x_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplex___lam__0(v_x_2614_);
lean_dec_ref(v_x_2614_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplex___lam__0(lean_object* v_value_2617_){
_start:
{
lean_object* v___x_2618_; 
v___x_2618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2618_, 0, v_value_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplex___lam__0(lean_object* v_value_2620_){
_start:
{
lean_object* v___x_2621_; 
v___x_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2621_, 0, v_value_2620_);
return v___x_2621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplex___lam__0(lean_object* v_value_2623_){
_start:
{
lean_object* v___x_2624_; 
v___x_2624_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2624_, 0, v_value_2623_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorIdx(lean_object* v_x_2626_){
_start:
{
switch(lean_obj_tag(v_x_2626_))
{
case 0:
{
lean_object* v___x_2627_; 
v___x_2627_ = lean_unsigned_to_nat(0u);
return v___x_2627_;
}
case 1:
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_unsigned_to_nat(1u);
return v___x_2628_;
}
case 2:
{
lean_object* v___x_2629_; 
v___x_2629_ = lean_unsigned_to_nat(2u);
return v___x_2629_;
}
case 3:
{
lean_object* v___x_2630_; 
v___x_2630_ = lean_unsigned_to_nat(3u);
return v___x_2630_;
}
default: 
{
lean_object* v___x_2631_; 
v___x_2631_ = lean_unsigned_to_nat(4u);
return v___x_2631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorIdx___boxed(lean_object* v_x_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorIdx(v_x_2632_);
lean_dec_ref(v_x_2632_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(lean_object* v_t_2634_, lean_object* v_k_2635_){
_start:
{
lean_object* v_value_2636_; lean_object* v___x_2637_; 
v_value_2636_ = lean_ctor_get(v_t_2634_, 0);
lean_inc(v_value_2636_);
lean_dec_ref(v_t_2634_);
v___x_2637_ = lean_apply_1(v_k_2635_, v_value_2636_);
return v___x_2637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim(lean_object* v_motive_2638_, lean_object* v_ctorIdx_2639_, lean_object* v_t_2640_, lean_object* v_h_2641_, lean_object* v_k_2642_){
_start:
{
lean_object* v___x_2643_; 
v___x_2643_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2640_, v_k_2642_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___boxed(lean_object* v_motive_2644_, lean_object* v_ctorIdx_2645_, lean_object* v_t_2646_, lean_object* v_h_2647_, lean_object* v_k_2648_){
_start:
{
lean_object* v_res_2649_; 
v_res_2649_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim(v_motive_2644_, v_ctorIdx_2645_, v_t_2646_, v_h_2647_, v_k_2648_);
lean_dec(v_ctorIdx_2645_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readable_elim___redArg(lean_object* v_t_2650_, lean_object* v_readable_2651_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2650_, v_readable_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readable_elim(lean_object* v_motive_2653_, lean_object* v_t_2654_, lean_object* v_h_2655_, lean_object* v_readable_2656_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2654_, v_readable_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writable_elim___redArg(lean_object* v_t_2658_, lean_object* v_writable_2659_){
_start:
{
lean_object* v___x_2660_; 
v___x_2660_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2658_, v_writable_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writable_elim(lean_object* v_motive_2661_, lean_object* v_t_2662_, lean_object* v_h_2663_, lean_object* v_writable_2664_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2662_, v_writable_2664_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_duplex_elim___redArg(lean_object* v_t_2666_, lean_object* v_duplex_2667_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2666_, v_duplex_2667_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_duplex_elim(lean_object* v_motive_2669_, lean_object* v_t_2670_, lean_object* v_h_2671_, lean_object* v_duplex_2672_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2670_, v_duplex_2672_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writableStream_elim___redArg(lean_object* v_t_2674_, lean_object* v_writableStream_2675_){
_start:
{
lean_object* v___x_2676_; 
v___x_2676_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2674_, v_writableStream_2675_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_writableStream_elim(lean_object* v_motive_2677_, lean_object* v_t_2678_, lean_object* v_h_2679_, lean_object* v_writableStream_2680_){
_start:
{
lean_object* v___x_2681_; 
v___x_2681_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2678_, v_writableStream_2680_);
return v___x_2681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readableStream_elim___redArg(lean_object* v_t_2682_, lean_object* v_readableStream_2683_){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2682_, v_readableStream_2683_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_readableStream_elim(lean_object* v_motive_2685_, lean_object* v_t_2686_, lean_object* v_h_2687_, lean_object* v_readableStream_2688_){
_start:
{
lean_object* v___x_2689_; 
v___x_2689_ = l_Lasm_JS_Node_stream_ReadableOrWritableOrDuplexOrWritableStreamOrReadableStream_ctorElim___redArg(v_t_2686_, v_readableStream_2688_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_x_2690_){
_start:
{
lean_object* v_value_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v_value_2691_ = lean_ctor_get(v_x_2690_, 0);
v___x_2692_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2691_);
v___x_2693_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2693_, 0, v_value_2691_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
return v___x_2693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0___boxed(lean_object* v_x_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l_Lasm_JS_Node_instToJSStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(v_x_2694_);
lean_dec_ref(v_x_2694_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2697_){
_start:
{
lean_object* v___x_2698_; 
v___x_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2698_, 0, v_value_2697_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2700_){
_start:
{
lean_object* v___x_2701_; 
v___x_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2701_, 0, v_value_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2703_){
_start:
{
lean_object* v___x_2704_; 
v___x_2704_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2704_, 0, v_value_2703_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2707_, 0, v_value_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrWritableOrDuplexOrWritableStreamOrReadableStream___lam__0(lean_object* v_value_2709_){
_start:
{
lean_object* v___x_2710_; 
v___x_2710_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2710_, 0, v_value_2709_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorIdx(lean_object* v_x_2712_){
_start:
{
switch(lean_obj_tag(v_x_2712_))
{
case 0:
{
lean_object* v___x_2713_; 
v___x_2713_ = lean_unsigned_to_nat(0u);
return v___x_2713_;
}
case 1:
{
lean_object* v___x_2714_; 
v___x_2714_ = lean_unsigned_to_nat(1u);
return v___x_2714_;
}
default: 
{
lean_object* v___x_2715_; 
v___x_2715_ = lean_unsigned_to_nat(2u);
return v___x_2715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorIdx___boxed(lean_object* v_x_2716_){
_start:
{
lean_object* v_res_2717_; 
v_res_2717_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorIdx(v_x_2716_);
lean_dec_ref(v_x_2716_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(lean_object* v_t_2718_, lean_object* v_k_2719_){
_start:
{
lean_object* v_value_2720_; lean_object* v___x_2721_; 
v_value_2720_ = lean_ctor_get(v_t_2718_, 0);
lean_inc(v_value_2720_);
lean_dec_ref(v_t_2718_);
v___x_2721_ = lean_apply_1(v_k_2719_, v_value_2720_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim(lean_object* v_motive_2722_, lean_object* v_ctorIdx_2723_, lean_object* v_t_2724_, lean_object* v_h_2725_, lean_object* v_k_2726_){
_start:
{
lean_object* v___x_2727_; 
v___x_2727_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2724_, v_k_2726_);
return v___x_2727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___boxed(lean_object* v_motive_2728_, lean_object* v_ctorIdx_2729_, lean_object* v_t_2730_, lean_object* v_h_2731_, lean_object* v_k_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim(v_motive_2728_, v_ctorIdx_2729_, v_t_2730_, v_h_2731_, v_k_2732_);
lean_dec(v_ctorIdx_2729_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readable_elim___redArg(lean_object* v_t_2734_, lean_object* v_readable_2735_){
_start:
{
lean_object* v___x_2736_; 
v___x_2736_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2734_, v_readable_2735_);
return v___x_2736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readable_elim(lean_object* v_motive_2737_, lean_object* v_t_2738_, lean_object* v_h_2739_, lean_object* v_readable_2740_){
_start:
{
lean_object* v___x_2741_; 
v___x_2741_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2738_, v_readable_2740_);
return v___x_2741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_duplex_elim___redArg(lean_object* v_t_2742_, lean_object* v_duplex_2743_){
_start:
{
lean_object* v___x_2744_; 
v___x_2744_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2742_, v_duplex_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_duplex_elim(lean_object* v_motive_2745_, lean_object* v_t_2746_, lean_object* v_h_2747_, lean_object* v_duplex_2748_){
_start:
{
lean_object* v___x_2749_; 
v___x_2749_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2746_, v_duplex_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readableStream_elim___redArg(lean_object* v_t_2750_, lean_object* v_readableStream_2751_){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2750_, v_readableStream_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_readableStream_elim(lean_object* v_motive_2753_, lean_object* v_t_2754_, lean_object* v_h_2755_, lean_object* v_readableStream_2756_){
_start:
{
lean_object* v___x_2757_; 
v___x_2757_ = l_Lasm_JS_Node_stream_ReadableOrDuplexOrReadableStream_ctorElim___redArg(v_t_2754_, v_readableStream_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0(lean_object* v_x_2758_){
_start:
{
lean_object* v_value_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v_value_2759_ = lean_ctor_get(v_x_2758_, 0);
v___x_2760_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2759_);
v___x_2761_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2761_, 0, v_value_2759_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0___boxed(lean_object* v_x_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = l_Lasm_JS_Node_instToJSStreamReadableOrDuplexOrReadableStream___lam__0(v_x_2762_);
lean_dec_ref(v_x_2762_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamReadableStreamReadableOrDuplexOrReadableStream___lam__0(lean_object* v_value_2765_){
_start:
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2766_, 0, v_value_2765_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamReadableOrDuplexOrReadableStream___lam__0(lean_object* v_value_2768_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2769_, 0, v_value_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeReadableStreamStreamReadableOrDuplexOrReadableStream___lam__0(lean_object* v_value_2771_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2772_, 0, v_value_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorIdx(lean_object* v_x_2774_){
_start:
{
switch(lean_obj_tag(v_x_2774_))
{
case 0:
{
lean_object* v___x_2775_; 
v___x_2775_ = lean_unsigned_to_nat(0u);
return v___x_2775_;
}
case 1:
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_unsigned_to_nat(1u);
return v___x_2776_;
}
default: 
{
lean_object* v___x_2777_; 
v___x_2777_ = lean_unsigned_to_nat(2u);
return v___x_2777_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorIdx___boxed(lean_object* v_x_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorIdx(v_x_2778_);
lean_dec_ref(v_x_2778_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(lean_object* v_t_2780_, lean_object* v_k_2781_){
_start:
{
lean_object* v_value_2782_; lean_object* v___x_2783_; 
v_value_2782_ = lean_ctor_get(v_t_2780_, 0);
lean_inc(v_value_2782_);
lean_dec_ref(v_t_2780_);
v___x_2783_ = lean_apply_1(v_k_2781_, v_value_2782_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim(lean_object* v_motive_2784_, lean_object* v_ctorIdx_2785_, lean_object* v_t_2786_, lean_object* v_h_2787_, lean_object* v_k_2788_){
_start:
{
lean_object* v___x_2789_; 
v___x_2789_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2786_, v_k_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___boxed(lean_object* v_motive_2790_, lean_object* v_ctorIdx_2791_, lean_object* v_t_2792_, lean_object* v_h_2793_, lean_object* v_k_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim(v_motive_2790_, v_ctorIdx_2791_, v_t_2792_, v_h_2793_, v_k_2794_);
lean_dec(v_ctorIdx_2791_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writable_elim___redArg(lean_object* v_t_2796_, lean_object* v_writable_2797_){
_start:
{
lean_object* v___x_2798_; 
v___x_2798_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2796_, v_writable_2797_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writable_elim(lean_object* v_motive_2799_, lean_object* v_t_2800_, lean_object* v_h_2801_, lean_object* v_writable_2802_){
_start:
{
lean_object* v___x_2803_; 
v___x_2803_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2800_, v_writable_2802_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_duplex_elim___redArg(lean_object* v_t_2804_, lean_object* v_duplex_2805_){
_start:
{
lean_object* v___x_2806_; 
v___x_2806_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2804_, v_duplex_2805_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_duplex_elim(lean_object* v_motive_2807_, lean_object* v_t_2808_, lean_object* v_h_2809_, lean_object* v_duplex_2810_){
_start:
{
lean_object* v___x_2811_; 
v___x_2811_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2808_, v_duplex_2810_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writableStream_elim___redArg(lean_object* v_t_2812_, lean_object* v_writableStream_2813_){
_start:
{
lean_object* v___x_2814_; 
v___x_2814_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2812_, v_writableStream_2813_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_writableStream_elim(lean_object* v_motive_2815_, lean_object* v_t_2816_, lean_object* v_h_2817_, lean_object* v_writableStream_2818_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = l_Lasm_JS_Node_stream_WritableOrDuplexOrWritableStream_ctorElim___redArg(v_t_2816_, v_writableStream_2818_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0(lean_object* v_x_2820_){
_start:
{
lean_object* v_value_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v_value_2821_ = lean_ctor_get(v_x_2820_, 0);
v___x_2822_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_2821_);
v___x_2823_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2823_, 0, v_value_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0___boxed(lean_object* v_x_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Lasm_JS_Node_instToJSStreamWritableOrDuplexOrWritableStream___lam__0(v_x_2824_);
lean_dec_ref(v_x_2824_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamWritableStreamWritableOrDuplexOrWritableStream___lam__0(lean_object* v_value_2827_){
_start:
{
lean_object* v___x_2828_; 
v___x_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2828_, 0, v_value_2827_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStreamDuplexStreamWritableOrDuplexOrWritableStream___lam__0(lean_object* v_value_2830_){
_start:
{
lean_object* v___x_2831_; 
v___x_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2831_, 0, v_value_2830_);
return v___x_2831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeWritableStreamStreamWritableOrDuplexOrWritableStream___lam__0(lean_object* v_value_2833_){
_start:
{
lean_object* v___x_2834_; 
v___x_2834_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2834_, 0, v_value_2833_);
return v___x_2834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamPipelineOptions___lam__0(lean_object* v___f_2836_, lean_object* v___f_2837_, lean_object* v_d_2838_){
_start:
{
lean_object* v_signal_2839_; lean_object* v_end_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2857_; 
v_signal_2839_ = lean_ctor_get(v_d_2838_, 0);
v_end_2840_ = lean_ctor_get(v_d_2838_, 1);
v_isSharedCheck_2857_ = !lean_is_exclusive(v_d_2838_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2842_ = v_d_2838_;
v_isShared_2843_ = v_isSharedCheck_2857_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_end_2840_);
lean_inc(v_signal_2839_);
lean_dec(v_d_2838_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2857_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2847_; 
v___x_2844_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_2845_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2836_, v_signal_2839_);
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 1, v___x_2845_);
lean_ctor_set(v___x_2842_, 0, v___x_2844_);
v___x_2847_ = v___x_2842_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2844_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v___x_2845_);
v___x_2847_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2848_ = lean_mk_string_unchecked("end", 3, 3);
v___x_2849_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2837_, v_end_2840_);
v___x_2850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2850_, 0, v___x_2848_);
lean_ctor_set(v___x_2850_, 1, v___x_2849_);
v___x_2851_ = lean_unsigned_to_nat(2u);
v___x_2852_ = lean_mk_empty_array_with_capacity(v___x_2851_);
v___x_2853_ = lean_array_push(v___x_2852_, v___x_2847_);
v___x_2854_ = lean_array_push(v___x_2853_, v___x_2850_);
v___x_2855_ = l_Lasm_JS_Web_Internal_fields(v___x_2854_);
lean_dec_ref(v___x_2854_);
return v___x_2855_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamPipelineOptions(void){
_start:
{
lean_object* v___f_2858_; lean_object* v___f_2859_; lean_object* v___f_2860_; 
v___f_2858_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_2859_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2860_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamPipelineOptions___lam__0), 3, 2);
lean_closure_set(v___f_2860_, 0, v___f_2858_);
lean_closure_set(v___f_2860_, 1, v___f_2859_);
return v___f_2860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSStreamFinishedOptions2___lam__0(lean_object* v___f_2861_, lean_object* v___f_2862_, lean_object* v_d_2863_){
_start:
{
lean_object* v_error_2864_; lean_object* v_readable_2865_; lean_object* v_writable_2866_; lean_object* v_signal_2867_; lean_object* v_cleanup_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v_error_2864_ = lean_ctor_get(v_d_2863_, 0);
lean_inc(v_error_2864_);
v_readable_2865_ = lean_ctor_get(v_d_2863_, 1);
lean_inc(v_readable_2865_);
v_writable_2866_ = lean_ctor_get(v_d_2863_, 2);
lean_inc(v_writable_2866_);
v_signal_2867_ = lean_ctor_get(v_d_2863_, 3);
lean_inc(v_signal_2867_);
v_cleanup_2868_ = lean_ctor_get(v_d_2863_, 4);
lean_inc(v_cleanup_2868_);
lean_dec_ref(v_d_2863_);
v___x_2869_ = lean_mk_string_unchecked("error", 5, 5);
lean_inc_ref_n(v___f_2861_, 3);
v___x_2870_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2861_, v_error_2864_);
v___x_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2869_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
v___x_2872_ = lean_mk_string_unchecked("readable", 8, 8);
v___x_2873_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2861_, v_readable_2865_);
v___x_2874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2872_);
lean_ctor_set(v___x_2874_, 1, v___x_2873_);
v___x_2875_ = lean_mk_string_unchecked("writable", 8, 8);
v___x_2876_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2861_, v_writable_2866_);
v___x_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2875_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
v___x_2878_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_2879_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2862_, v_signal_2867_);
v___x_2880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2878_);
lean_ctor_set(v___x_2880_, 1, v___x_2879_);
v___x_2881_ = lean_mk_string_unchecked("cleanup", 7, 7);
v___x_2882_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2861_, v_cleanup_2868_);
v___x_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2881_);
lean_ctor_set(v___x_2883_, 1, v___x_2882_);
v___x_2884_ = lean_unsigned_to_nat(5u);
v___x_2885_ = lean_mk_empty_array_with_capacity(v___x_2884_);
v___x_2886_ = lean_array_push(v___x_2885_, v___x_2871_);
v___x_2887_ = lean_array_push(v___x_2886_, v___x_2874_);
v___x_2888_ = lean_array_push(v___x_2887_, v___x_2877_);
v___x_2889_ = lean_array_push(v___x_2888_, v___x_2880_);
v___x_2890_ = lean_array_push(v___x_2889_, v___x_2883_);
v___x_2891_ = l_Lasm_JS_Web_Internal_fields(v___x_2890_);
lean_dec_ref(v___x_2890_);
return v___x_2891_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSStreamFinishedOptions2(void){
_start:
{
lean_object* v___f_2892_; lean_object* v___f_2893_; lean_object* v___f_2894_; 
v___f_2892_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_2893_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_2894_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamFinishedOptions2___lam__0), 3, 2);
lean_closure_set(v___f_2894_, 0, v___f_2892_);
lean_closure_set(v___f_2894_, 1, v___f_2893_);
return v___f_2894_;
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
l_Lasm_JS_Node_instToJSStreamWritableNewOptions = _init_l_Lasm_JS_Node_instToJSStreamWritableNewOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamWritableNewOptions);
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
l_Lasm_JS_Node_instToJSStreamReadableNewOptions = _init_l_Lasm_JS_Node_instToJSStreamReadableNewOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamReadableNewOptions);
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
l_Lasm_JS_Node_instToJSStreamTransformNewOptions = _init_l_Lasm_JS_Node_instToJSStreamTransformNewOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSStreamTransformNewOptions);
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
